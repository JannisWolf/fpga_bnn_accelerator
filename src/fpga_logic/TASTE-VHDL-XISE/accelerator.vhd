
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

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
	 
	 COMPONENT fifo_buffer
	 generic (
             g_WIDTH    : natural := 8;
             g_DEPTH    : integer := 32;
             g_AF_LEVEL : integer := 28;
 	     g_AE_LEVEL : integer := 4    );
         port (   
             i_rst_sync : in std_logic;
             i_clk      : in std_logic;
         -- FIFO Write Interface
             i_wr_en   : in  std_logic;
             i_wr_data : in  std_logic_vector(g_WIDTH-1 downto 0);
             o_af      : out std_logic;
             o_full    : out std_logic;
         -- FIFO Read Interface
             i_rd_en 	 : in  std_logic;
             o_rd_data : out std_logic_vector(g_WIDTH-1 downto 0);
             o_ae      : out std_logic;
             o_empty   : out std_logic    );
	 END COMPONENT;
	 
	 COMPONENT subsample64to3
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

	 
	 COMPONENT input_layer
	 GENERIC(
	   INPUT_SIZE : integer := 3;
		WEIGHT_SIZE : integer := 3;
		NEURON_NUM : integer := 3
	 );
	 PORT (
	   clk_fc : IN STD_LOGIC;
		data_in : IN STD_LOGIC_VECTOR(INPUT_SIZE-1 DOWNTO 0);
		weights_in : IN STD_LOGIC_VECTOR(WEIGHT_SIZE-1 DOWNTO 0) := (others => '0');
		calc_pos : IN STD_LOGIC;
		activation : OUT STD_LOGIC_VECTOR(NEURON_NUM-1 downto 0);
		finish_fc : OUT STD_LOGIC
	 );
	 END COMPONENT;
	 
	 
	 COMPONENT fully_connected2
	 GENERIC(
	   INPUT_SIZE : integer := 3;
		WEIGHT_SIZE : integer := 3;
		NEURON_NUM : integer := 10
	 );
	 PORT (
	   clk_fc : IN STD_LOGIC;
		data_in : IN STD_LOGIC_VECTOR(INPUT_SIZE-1 DOWNTO 0);
		weights_in : IN STD_LOGIC_VECTOR(WEIGHT_SIZE-1 DOWNTO 0) := (others => '0');
		calc_pos : IN STD_LOGIC;
		activation : OUT STD_LOGIC_VECTOR(NEURON_NUM-1 downto 0);
		finish_fc : OUT STD_LOGIC
	 );
	 END COMPONENT;
	 
	 
	 COMPONENT fully_connected
	 GENERIC(
	   INPUT_SIZE : integer := 10;
		WEIGHT_SIZE : integer := 10;
		NEURON_NUM : integer := 10
	 );
	 PORT (
	   clk_fc : IN STD_LOGIC;
		data_in : IN STD_LOGIC_VECTOR(INPUT_SIZE-1 DOWNTO 0);
		weights_in : IN STD_LOGIC_VECTOR(WEIGHT_SIZE-1 DOWNTO 0) := (others => '0');
		calc_pos : IN STD_LOGIC;
		activation : OUT STD_LOGIC_VECTOR(NEURON_NUM-1 downto 0);
		finish_fc : OUT STD_LOGIC
	 );
	 END COMPONENT;
	 
	 
	 COMPONENT output_layer
	 GENERIC(
	   INPUT_SIZE : integer := 10;
		WEIGHT_SIZE : integer := 10;
		NEURON_NUM : integer := 3
	 );
	 PORT (
	   clk_fc : IN STD_LOGIC;
		data_in : IN STD_LOGIC_VECTOR(INPUT_SIZE-1 DOWNTO 0);
		weights_in : IN STD_LOGIC_VECTOR(WEIGHT_SIZE-1 DOWNTO 0) := (others => '0');
		calc_pos : IN STD_LOGIC;
		activation : OUT STD_LOGIC_VECTOR(NEURON_NUM-1 downto 0);
		finish_fc : OUT STD_LOGIC
	 );
	 END COMPONENT;
	 
	 
	 signal sub2fifo_data : std_logic_vector(2 downto 0);
	 signal fifo2up_buf : std_logic;
	 signal fifo2fc : std_logic_vector(2 downto 0);
	 signal fc22up1_64_res : std_logic;
	 signal calc_start : std_logic;
	 signal counter1 : std_logic_vector(3 downto 0) := "1001";
	 signal w1 : std_logic_vector(9 downto 0) := (others => '0');
	 signal counter2 : std_logic_vector(3 downto 0) := "0000";
	 signal w2 : std_logic;
	 signal fc12fc2_act : std_logic_vector(9 downto 0);
	 signal fc12fc2_fin : std_logic;
	 signal fc22up3_64_act : std_logic_vector(2 downto 0);

	 signal sub_input : std_logic_vector(2 downto 0);

	 signal act_fc1 : std_logic_vector(2 downto 0);
	 signal act_fc2 : std_logic_vector(9 downto 0);
	 signal act_fc3 : std_logic_vector(9 downto 0);
	 signal act_fc4 : std_logic_vector(2 downto 0);
	 
	 signal finished : std_logic;

	 
begin

    CLK <= clock_accelerator;
    RST <= reset_accelerator;

    sub: subsample64to3
	   PORT MAP(
		  data_full => data_in,
		  --data_sub => sub_input
		  data_sub => open
	   );

-- for future implementations
--    up_buf: upsample1to64
--	   PORT MAP(
--		  sub => fifo2up_buf,
--		  full => buf_ful
--	   );

    up_res: upsample1to64
	   PORT MAP(
        sub => finished,
		  full => res_ready
	   );
		
	 up_output: upsample3_64
	   PORT MAP(
        sub => act_fc4,
		  full => data_out
	   );

	 feature_buffer: fifo_buffer
	   generic map(
             g_WIDTH    => 3,
             g_DEPTH    => 32,
             g_AF_LEVEL => 28,
 	          g_AE_LEVEL => 4  )
      port map (   
             i_rst_sync => '0',
             i_clk      => CLK,
         -- FIFO Write Interface
             i_wr_en   => '0',
             i_wr_data => "000",
             o_af      => open,
             o_full    => open,
         -- FIFO Read Interface
             i_rd_en   => '0',
             o_rd_data => sub_input,
             o_ae      => open,
             o_empty   => open
	 );

	  
	 fc1: input_layer
	   PORT MAP(
	     weights_in => open, --not necessary at the moment
		  data_in => sub_input,
		  calc_pos => calc_start, --not necessary at the moment
		  activation => act_fc1,
		  clk_fc => CLK,
		  finish_fc => open
	   );
	 
	 fc2: fully_connected2
	   PORT MAP(
	     weights_in => open, --not necessary at the moment
		  data_in => act_fc1,
		  calc_pos => calc_start, --not necessary at the moment
		  activation => act_fc2,
		  clk_fc => CLK,
		  finish_fc => open
	   );
	 
	 fc3: fully_connected
	   PORT MAP(
	     weights_in => open, --not necessary at the moment
		  data_in => act_fc2,
		  calc_pos => calc_start, --not necessary at the moment
		  activation => act_fc3,
		  clk_fc => CLK,
		  finish_fc => open
	   );
		
	 fc4: output_layer
	   PORT MAP(
	     weights_in => open, --not necessary at the moment
		  data_in => act_fc3,
		  calc_pos => calc_start, --not necessary at the moment
		  activation => act_fc4,
		  clk_fc => CLK,
		  finish_fc => finished
	   );

    -- Possible clock divider
	 
	 pro1 : process(CLK)
	 begin
	 if(rising_edge(CLK)) then
							  if(counter1(3 downto 0) = "1001") then
									counter1 <= "0000";
									--finish_fc <= '1';
							  else
									counter1 <= std_logic_vector(signed(counter1) + 1);
									--finish_fc <= '0';
							  end if;
						 end if;
	 end process pro1;
	 
	 
    process(CLK, RST)
    begin
	 
						 if(rising_edge(CLK)) then
							  if(counter1(3 downto 0) = "1001") then
									counter1 <= "0000";
									--finish_fc <= '1';
							  else
									counter1 <= std_logic_vector(signed(counter1) + 1);
									--finish_fc <= '0';
							  end if;
						 end if;
	 
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
