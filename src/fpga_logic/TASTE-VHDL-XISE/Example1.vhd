library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity TASTE is
    port (
        USB_StreamCLK : in std_logic;
        USB_StreamFIFOADDR : out std_logic_vector(1 downto 0);
        USB_StreamPKTEND_n : out std_logic;
        USB_StreamFlags_n : in std_logic_vector(2 downto 0);
        USB_StreamSLOE_n : out std_logic;
        USB_StreamSLRD_n : out std_logic;
        USB_StreamSLWR_n : out std_logic;
        USB_StreamData : inout std_logic_vector(15 downto 0);
        USB_StreamFX2Rdy : in std_logic;

        USB_RegCLK : in std_logic;
        USB_RegAddr : in std_logic_vector(15 downto 0);
        USB_RegData : inout std_logic_vector(7 downto 0);
        USB_RegOE_n : in std_logic;
        USB_RegRD_n : in std_logic;
        USB_RegWR_n : in std_logic;
        USB_RegCS_n : in std_logic;

        USB_Interrupt : out std_logic;

        User_Signals : inout std_logic_vector(7 downto 0);

        S_CLK : out std_logic;
        S_A : out std_logic_vector(22 downto 0);
        S_DA : inout std_logic_vector(8 downto 0);
        S_DB : inout std_logic_vector(8 downto 0);
        S_ADV_LD_N : out std_logic;
        S_BWA_N : out std_logic;
        S_BWB_N : out std_logic;
        S_OE_N : out std_logic;
        S_WE_N : out std_logic;

        IO_CLK_N : inout std_logic;
        IO_CLK_P : inout std_logic;
        IO : inout std_logic_vector(46 downto 0)
    );
end TASTE;

architecture arch of TASTE is

    -- Declare interfaces component
    component ZestSC1_Interfaces
        port (
            -- FPGA pin connections
            USB_StreamCLK : in std_logic;
            USB_StreamFIFOADDR : out std_logic_vector(1 downto 0);
            USB_StreamPKTEND_n : out std_logic;
            USB_StreamFlags_n : in std_logic_vector(2 downto 0);
            USB_StreamSLOE_n : out std_logic;
            USB_StreamSLRD_n : out std_logic;
            USB_StreamSLWR_n : out std_logic;
            USB_StreamData : inout std_logic_vector(15 downto 0);
            USB_StreamFX2Rdy : in std_logic;

            USB_RegCLK : in std_logic;
            USB_RegAddr : in std_logic_vector(15 downto 0);
            USB_RegData : inout std_logic_vector(7 downto 0);
            USB_RegOE_n : in std_logic;
            USB_RegRD_n : in std_logic;
            USB_RegWR_n : in std_logic;
            USB_RegCS_n : in std_logic;

            USB_Interrupt : out std_logic;

            S_CLK: out std_logic;
            S_A: out std_logic_vector(22 downto 0);
            S_ADV_LD_N: out std_logic;
            S_BWA_N: out std_logic;
            S_BWB_N: out std_logic;
            S_DA: inout std_logic_vector(8 downto 0);
            S_DB: inout std_logic_vector(8 downto 0);
            S_OE_N: out std_logic;
            S_WE_N: out std_logic;

            -- User connections
            -- Streaming interface
            User_CLK : out std_logic;
            User_RST : out std_logic;

            User_StreamBusGrantLength : in std_logic_vector(11 downto 0);

            User_StreamDataIn : out std_logic_vector(15 downto 0);
            User_StreamDataInWE : out std_logic;
            User_StreamDataInBusy : in std_logic;

            User_StreamDataOut : in std_logic_vector(15 downto 0);
            User_StreamDataOutWE : in std_logic;
            User_StreamDataOutBusy : out std_logic;

            -- Register interface
            User_RegAddr : out std_logic_vector(15 downto 0);
            User_RegDataIn : out std_logic_vector(7 downto 0);
            User_RegDataOut : in std_logic_vector(7 downto 0);
            User_RegWE : out std_logic;
            User_RegRE : out std_logic;

            -- Signals and interrupts
            User_Interrupt : in std_logic;

            -- SRAM interface
            User_SRAM_A: in std_logic_vector(22 downto 0);
            User_SRAM_W: in std_logic;
            User_SRAM_R: in std_logic;
            User_SRAM_DR_VALID: out std_logic;
            User_SRAM_DW: in std_logic_vector(17 downto 0);
            User_SRAM_DR: out std_logic_vector(17 downto 0)
        );
    end component;

    -- Circuits for the existing PIs
    component accelerator is
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
    end component;


    -- Declare signals
    signal CLK : std_logic;
    signal RST : std_logic;

    -- To report that circuit is running, use a counter to divide the clock
    -- and shift one bit thru the LEDs...
    signal LEDs : std_logic_vector(7 downto 0);
    signal LEDVal : std_logic_vector(7 downto 0);
    signal Count : std_logic_vector(21 downto 0);
    signal Dir : std_logic := '0';

    -- Register interface
    signal Addr : std_logic_vector(15 downto 0);
    signal DataIn : std_logic_vector(7 downto 0);
    signal DataOut : std_logic_vector(7 downto 0);
    signal WE : std_logic;
    signal RE : std_logic;

    -- Registers for I/O
    signal accelerator_data_in : std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 3 bits)
    signal accelerator_data_out : std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 3 bits)
    signal accelerator_buf_ful : std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 1 bits)
    signal accelerator_res_ready : std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 1 bits)



    -- Signals for start/finish
    signal accelerator_StartCalculationsInternalOld : std_logic;
    signal accelerator_StartCalculationsInternal : std_logic;
    signal accelerator_StartCalculationsPulse : std_logic;
    signal accelerator_CalculationsComplete : std_logic;          -- the finish signal for accelerator



begin
    -- Tie unused signals
    --LEDs <= "11111111";
    IO_CLK_N <= 'Z';
    IO_CLK_P <= 'Z';
    IO <= (0=>LEDs(0), 1=>LEDs(1), 41=>LEDs(2), 42=>LEDs(3), 43=>LEDs(4),
           44=>LEDs(5), 45=>LEDs(6), 46=>LEDs(7), others => 'Z');

    LEDs <= not LEDVal;

    ---------------------------------------------------
    -- Indicate that FPGA is alive, by KIT-ing the LEDs
    ---------------------------------------------------

    process (CLK, RST)
    begin
        if (RST='1') then
            Count <= (others=>'0');
        elsif (CLK'event and CLK='1') then
            Count <= Count + 1;
        end if;
    end process;

    process (CLK, RST)
    begin
        if (RST='1') then
            Dir <= '0';
            LEDVal <= "00000001";
        elsif (CLK'event and CLK='1') then
            if (Count="0000000000000000000000") then
                if (Dir='0') then
                    LEDVal <= LEDVal(6 downto 0) & "0";
                    if (LEDVal="01000000") then
                        Dir <= '1';
                    end if;
                else
                    LEDVal <= "0" & LEDVal(7 downto 1);
                    if (LEDVal="00000010") then
                        Dir <= '0';
                    end if;
                end if;
            end if;
        end if;
    end process;

    -- Implement register write
    -- Note that for compatibility with FX2LP devices only addresses
    -- above 2000 Hex are used
    process (RST, CLK)
    begin
        if (RST='1') then
            -- Signals for reset
            accelerator_StartCalculationsInternal <= '0';

        elsif (CLK'event and CLK='1') then

            -- Update start-stop pulses
            accelerator_StartCalculationsPulse <= accelerator_StartCalculationsInternal xor accelerator_StartCalculationsInternalOld;
            accelerator_StartCalculationsInternalOld <= accelerator_StartCalculationsInternal;

            if (WE='1') then
                case Addr is
                      -- Read data from the USB bus
                      
                      -- kickoff accelerator
                      when X"2000" => accelerator_StartCalculationsInternal <= accelerator_StartCalculationsInternal xor '1';

                      when X"2001" => accelerator_data_in( 7 downto  0) <= DataIn;
                      when X"2002" => accelerator_data_in(15 downto  8) <= DataIn;
                      when X"2003" => accelerator_data_in(23 downto 16) <= DataIn;
                      when X"2004" => accelerator_data_in(31 downto 24) <= DataIn;
                      when X"2005" => accelerator_data_in(39 downto 32) <= DataIn;
                      when X"2006" => accelerator_data_in(47 downto 40) <= DataIn;
                      when X"2007" => accelerator_data_in(55 downto 48) <= DataIn;
                      when X"2008" => accelerator_data_in(63 downto 56) <= DataIn;
                      when others => accelerator_StartCalculationsInternal <= accelerator_StartCalculationsInternal xor '1';

                 end case;
            end if;
        end if;
    end process;

    -- Implement register read
    --process (Addr, RE, gcd_Value3, gcd_CalculationsComplete)
    process (Addr, RE, accelerator_data_out, accelerator_buf_ful, accelerator_res_ready,  accelerator_CalculationsComplete)
    begin
        if (RE='1') then
            case Addr is
                -- Write data to the USB bus
                
                -- result calculated flag accelerator
                when X"2000" => DataOut <= "0000000" & accelerator_CalculationsComplete;

                when X"2009" => DataOut <= accelerator_data_out( 7 downto  0);
                when X"200a" => DataOut <= accelerator_data_out(15 downto  8);
                when X"200b" => DataOut <= accelerator_data_out(23 downto 16);
                when X"200c" => DataOut <= accelerator_data_out(31 downto 24);
                when X"200d" => DataOut <= accelerator_data_out(39 downto 32);
                when X"200e" => DataOut <= accelerator_data_out(47 downto 40);
                when X"200f" => DataOut <= accelerator_data_out(55 downto 48);
                when X"2010" => DataOut <= accelerator_data_out(63 downto 56);
                when X"2011" => DataOut <= accelerator_buf_ful( 7 downto  0);
                when X"2012" => DataOut <= accelerator_buf_ful(15 downto  8);
                when X"2013" => DataOut <= accelerator_buf_ful(23 downto 16);
                when X"2014" => DataOut <= accelerator_buf_ful(31 downto 24);
                when X"2015" => DataOut <= accelerator_buf_ful(39 downto 32);
                when X"2016" => DataOut <= accelerator_buf_ful(47 downto 40);
                when X"2017" => DataOut <= accelerator_buf_ful(55 downto 48);
                when X"2018" => DataOut <= accelerator_buf_ful(63 downto 56);
                when X"2019" => DataOut <= accelerator_res_ready( 7 downto  0);
                when X"201a" => DataOut <= accelerator_res_ready(15 downto  8);
                when X"201b" => DataOut <= accelerator_res_ready(23 downto 16);
                when X"201c" => DataOut <= accelerator_res_ready(31 downto 24);
                when X"201d" => DataOut <= accelerator_res_ready(39 downto 32);
                when X"201e" => DataOut <= accelerator_res_ready(47 downto 40);
                when X"201f" => DataOut <= accelerator_res_ready(55 downto 48);
                when X"2020" => DataOut <= accelerator_res_ready(63 downto 56);

                when others => DataOut <= X"00";
            end case;
        else
            -- avoid latches
            DataOut <= X"00";
        end if;
    end process;

    -- Instantiate interfaces component
    Interfaces : ZestSC1_Interfaces
        port map (
            USB_StreamCLK => USB_StreamCLK,
            USB_StreamFIFOADDR => USB_StreamFIFOADDR,
            USB_StreamPKTEND_n => USB_StreamPKTEND_n,
            USB_StreamFlags_n => USB_StreamFlags_n,
            USB_StreamSLOE_n => USB_StreamSLOE_n,
            USB_StreamSLRD_n => USB_StreamSLRD_n,
            USB_StreamSLWR_n => USB_StreamSLWR_n,
            USB_StreamData => USB_StreamData,
            USB_StreamFX2Rdy => USB_StreamFX2Rdy,

            USB_RegCLK => USB_RegCLK,
            USB_RegAddr => USB_RegAddr,
            USB_RegData => USB_RegData,
            USB_RegOE_n => USB_RegOE_n,
            USB_RegRD_n => USB_RegRD_n,
            USB_RegWR_n => USB_RegWR_n,
            USB_RegCS_n => USB_RegCS_n,

            USB_Interrupt => USB_Interrupt,

            S_CLK => S_CLK,
            S_A => S_A,
            S_ADV_LD_N => S_ADV_LD_N,
            S_BWA_N => S_BWA_N,
            S_BWB_N => S_BWB_N,
            S_DA => S_DA,
            S_DB => S_DB,
            S_OE_N => S_OE_N,
            S_WE_N => S_WE_N,

            -- User connections
            -- Streaming interface
            User_CLK => CLK,
            User_RST => RST,

            User_StreamBusGrantLength => X"002",

            User_StreamDataIn => open,
            User_StreamDataInWE => open,
            User_StreamDataInBusy => '1',

            User_StreamDataOut => "0000000000000000",
            User_StreamDataOutWE => '0',
            User_StreamDataOutBusy => open,

            -- Register interface
            User_RegAddr => Addr,
            User_RegDataIn => DataIn,
            User_RegDataOut => DataOut,
            User_RegWE => WE,
            User_RegRE => RE,

            -- Interrupts
            User_Interrupt => '0',

            -- SRAM interface
            User_SRAM_A => "00000000000000000000000",
            User_SRAM_W => '0',
            User_SRAM_R => '0',
            User_SRAM_DR_VALID => open,
            User_SRAM_DW => "000000000000000000",
            User_SRAM_DR => open
        );

    -- Connections to the VHDL circuits

    Interface_accelerator : accelerator
        port map (
            data_in => accelerator_data_in,
            data_out => accelerator_data_out,
            buf_ful => accelerator_buf_ful,
            res_ready => accelerator_res_ready,
            start_accelerator => accelerator_StartCalculationsPulse,
            finish_accelerator => accelerator_CalculationsComplete,
            clock_accelerator => CLK,
            reset_accelerator => RST
        );


end arch;