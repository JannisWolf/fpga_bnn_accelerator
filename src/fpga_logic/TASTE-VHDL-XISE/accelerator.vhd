
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

    entity accelerator is
    port (
        data_in : in std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 3 bits)
        data_out : out std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 3 bits)
        buf_ful : out std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 1 bits)
        res_ready : out std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 1 bits)
        start_accelerator  : in  std_logic;
        finish_accelerator : out std_logic;
        clock_accelerator : in std_logic;
        reset_accelerator  : in  std_logic
    );
    end accelerator;



architecture arch of accelerator is

    -- Declare signals
    signal CLK : std_logic;
    signal RST : std_logic;

    type state_type is (
        wait_for_start_signal,
        signal_received,
        work_done
    );
    signal state : state_type := wait_for_start_signal;
	 
	 COMPONENT subsample64to1
	 PORT (
	 	  data_full : in  std_logic_vector(63 downto 0);
		  data_sub : out  std_logic_vector(2 downto 0)
	 );
	 END COMPONENT;
	 
	 COMPONENT upsample1to64
	 PORT (
		  sub : in std_logic;
		  full : out std_logic_vector(63 downto 0)
	 );
	 END COMPONENT;
	 
	 COMPONENT upsample3_64 is
		PORT (
		  sub : in std_logic_vector(2 downto 0);
		  full : out std_logic_vector(63 downto 0)
	   );
	 END COMPONENT;
	 
	 COMPONENT fifo_regs  
	 --GENERIC (
    --g_WIDTH : integer := 3;
    --g_DEPTH : integer := 32
    --);
	 PORT (
	     i_rst_sync : in std_logic;
        i_clk      : in std_logic;
 
		  -- FIFO Write Interface
		  i_wr_en   : in  std_logic;
		  i_wr_data : in  std_logic_vector(2 downto 0);
		  --i_wr_data : in  std_logic_vector(g_WIDTH-1 downto 0);
        o_full    : out std_logic;
 
        -- FIFO Read Interface
        i_rd_en   : in  std_logic;
		  o_rd_data : out std_logic_vector(2 downto 0);
        --o_rd_data : out std_logic_vector(g_WIDTH-1 downto 0);
        o_empty   : out std_logic
	 );
	 END COMPONENT;
	 
	 COMPONENT memory
	 PORT (
	   clka : IN STD_LOGIC;
	   addra : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
	   douta : OUT STD_LOGIC
	 );
	 END COMPONENT;
	 
	 COMPONENT fully_connected
	 PORT (
	   weights : IN STD_LOGIC;
		data_in : IN STD_LOGIC_VECTOR(2 DOWNTO 0);
		--carry_in : IN STD_LOGIC;
		--calc_start : IN STD_LOGIC;
		--carry_out : OUT STD_LOGIC;
		calc_pos : IN STD_LOGIC;
		activation : OUT STD_LOGIC_VECTOR(9 downto 0);
		clk_fc : IN STD_LOGIC;
		finish_calc : OUT STD_LOGIC
	 );
	 END COMPONENT;
	 
	 COMPONENT output_layer
	 PORT (
	   weights : IN STD_LOGIC;
		data_in : IN STD_LOGIC_VECTOR(9 DOWNTO 0);
		--carry_in : IN STD_LOGIC;
		--calc_start : IN STD_LOGIC;
		--carry_out : OUT STD_LOGIC;
		calc_pos : IN STD_LOGIC;
		activation : OUT STD_LOGIC_VECTOR(2 downto 0);
		clk_fc : IN STD_LOGIC;
		finish_calc : OUT STD_LOGIC
	 );
	 END COMPONENT;

	 
	 signal sub2fifo_data : std_logic_vector(2 downto 0);
	 signal fifo2up_buf : std_logic;
	 signal fifo2fc : std_logic_vector(2 downto 0);
	 signal fc22up1_64_res : std_logic;
	 signal calc_start : std_logic;
	 signal counter1 : std_logic_vector(3 downto 0) := "0000";
	 signal w1 : std_logic;
	 signal counter2 : std_logic_vector(3 downto 0) := "0000";
	 signal w2 : std_logic;
	 signal fc12fc2_act : std_logic_vector(9 downto 0);
	 signal fc12fc2_fin : std_logic;
	 signal fc22up3_64_act : std_logic_vector(2 downto 0);


	 
begin

    CLK <= clock_accelerator;
    RST <= reset_accelerator;

    sub: subsample64to1
	   PORT MAP(
		  data_full => data_in,
		  data_sub => sub2fifo_data
	   );

    up_buf: upsample1to64
	   PORT MAP(
		  sub => fifo2up_buf,
		  full => buf_ful
	   );

    up_res: upsample1to64
	   PORT MAP(
        sub => fc22up1_64_res,
		  full => res_ready
	   );
		
	 up_output: upsample3_64
	   PORT MAP(
        sub => fc22up3_64_act,
		  full => data_out
	   );
    -- buffer in fifo style where from cpu stored values are stored 
input: fifo_regs
	   PORT MAP (
	     i_rst_sync => RST,
        i_clk => CLK,
 
		  -- FIFO Write Interface
		  i_wr_en   => '1',
		  i_wr_data => sub2fifo_data,
        o_full => fifo2up_buf,
 
        -- FIFO Read Interface
        i_rd_en   => '1',
        o_rd_data => fifo2fc,
        o_empty => calc_start
	  );
	  
	 -- fc1 layer basically the popcount(XNOR)
	 fc1: fully_connected
	   PORT MAP(
	     weights => w1,
		  data_in => fifo2fc,
		  --carry_in : IN STD_LOGIC;
		  calc_pos => calc_start,
		  --carry_out : OUT STD_LOGIC;
		  activation => fc12fc2_act,
		  clk_fc => CLK,
		  finish_calc => fc12fc2_fin
	   );
		
	 fc2: output_layer
	   PORT MAP(
	     weights => w2,
		  data_in => fc12fc2_act,
		  --carry_in : IN STD_LOGIC;
		  calc_pos => fc12fc2_fin,
		  --carry_out : OUT STD_LOGIC;
		  activation => fc22up3_64_act,
		  clk_fc => CLK,
		  finish_calc => fc22up1_64_res
	   );
		
	  
	 -- memory where the weights1 are stored
	 weights1: memory
	   PORT MAP (
	     clka => clk,
	     addra => counter1,
	     --douta => outp(63 downto 56)
		  douta => w1
	   );
		
		 -- memory where the weights2 are stored
	 weights2: memory
	   PORT MAP (
	     clka => clk,
	     addra => counter2,
	     --douta => outp(63 downto 56)
		  douta => w2
	   );


    -- Possible clock divider
    process(CLK, RST)
    begin
        if (RST='1') then
            finish_accelerator <= '1';
        elsif (CLK'event and CLK='1') then
            case state is
                when wait_for_start_signal =>
                    if start_accelerator = '1' then
                        state <= signal_received;
                        finish_accelerator <= '0';
                    else
                        state <= wait_for_start_signal;
                    end if;
                when signal_received =>

                    -----------------------------
                    -- Do your processing here --
                    -----------------------------

                    state <= work_done;
                when work_done =>
                    finish_accelerator <= '1';
                    state <= wait_for_start_signal;
            end case;
        end if;
    end process;

end arch;
