----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:38:48 11/12/2020 
-- Design Name: 
-- Module Name:    fully_connected - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity input_layer is
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
		activation : OUT STD_LOGIC_VECTOR(NEURON_NUM-1 downto 0) := (others => '0');
		finish_fc : OUT STD_LOGIC
	 );
end input_layer;

architecture Behavioral of input_layer is

signal counter : STD_LOGIC_VECTOR(3 downto 0) := "0010";
signal curr_weight : STD_LOGIC_VECTOR(WEIGHT_SIZE-1 downto 0);

signal act1 : STD_LOGIC;


COMPONENT memory3Bit_input_layer
PORT (
clka : IN STD_LOGIC;
addra : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
douta : OUT STD_LOGIC_VECTOR(2 DOWNTO 0)
);
END COMPONENT;

COMPONENT xnor_popcount is
   GENERIC(
	    size : integer := 3
		 );
	PORT(
	    clk_xn : IN STD_LOGIC;
	    wei : IN STD_LOGIC_VECTOR(size-1 downto 0);
		 d_in : IN STD_LOGIC_VECTOR(size-1 downto 0);
		 res : OUT STD_LOGIC
	);
END COMPONENT;

COMPONENT accumulator is
   GENERIC(
	    size : integer := 3
		 );
   PORT(
	    w1 : IN STD_LOGIC;
		 clk : IN STD_LOGIC;
		 c : IN STD_LOGIC_VECTOR(3 downto 0);
		 o : OUT STD_LOGIC_VECTOR(size-1 downto 0)
		 --o : OUT STD_LOGIC_VECTOR(9 downto 0)

	);
END COMPONENT;

begin

weights : memory3Bit_input_layer
PORT MAP(
    clka => clk_fc,
	 addra => counter,
	 douta => curr_weight
);

xnor_pop1 : xnor_popcount
PORT MAP(
       clk_xn => clk_fc,
		 wei => curr_weight,
		 --wei => weights_in,
		 d_in => data_in,
		 res => act1
	   );
		
fc1_activation : accumulator
PORT MAP(
       clk => clk_fc,
       w1 => act1,
		 c => counter,
		 o => activation
);


process(clk_fc)
--variable co : STD_LOGIC_VECTOR(3 downto 0);

begin
	 if(rising_edge(clk_fc)) then
		  if(counter(3 downto 0) = "0010") then
	         counter <= "0000";
				finish_fc <= '1';
		  else
		      counter <= std_logic_vector(signed(counter) + 1);
				finish_fc <= '0';
		  end if;
    end if;
end process;

end Behavioral;

