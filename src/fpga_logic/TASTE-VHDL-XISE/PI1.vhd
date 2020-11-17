library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity PI1 is
    port (
        in1 : in std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 8 bits)
        in2 : in std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 8 bits)
        outResult : out std_logic_vector(63 downto 0); -- ASSERT uses 64 bit INTEGERs (optimal would be 8 bits)
        start_PI1  : in  std_logic;
        finish_PI1 : out std_logic;
        clock_PI1  : in  std_logic;
        reset_PI1  : in  std_logic
    );
end PI1;

architecture arch of PI1 is

    -- Declare signals
    signal CLK : std_logic;
    signal RST : std_logic;

    type state_type is (
        wait_for_start_signal,
        signal_received,
        work_done
    );
    signal state : state_type := wait_for_start_signal;
begin

    CLK <= clock_PI1;
    RST <= reset_PI1;

    -- Possible clock divider
    process(CLK, RST)
    begin
        if (RST='1') then
            finish_PI1 <= '1';
        elsif (CLK'event and CLK='1') then
            case state is
                when wait_for_start_signal =>
                    if start_PI1 = '1' then
                        state <= signal_received;
                        finish_PI1 <= '0';
                    else
                        state <= wait_for_start_signal;
                    end if;
                when signal_received =>
                    outResult <= in1 + in2;
                    state <= work_done;
                when work_done =>
                    finish_PI1 <= '1';
                    state <= wait_for_start_signal;
            end case;
        end if;
    end process;

end arch;
