----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:18:18 11/12/2020 
-- Design Name: 
-- Module Name:    output_layer - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity output_layer is
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
end output_layer;

architecture Behavioral of output_layer is

signal act1 : STD_LOGIC;
signal act2 : STD_LOGIC;
signal act3 : STD_LOGIC;


COMPONENT xnor_popcount is
   PORT(
	    wei : IN STD_LOGIC;
		 d_in : IN STD_LOGIC_VECTOR(9 downto 0);
		 res : OUT STD_LOGIC
	);
END COMPONENT;

COMPONENT accumulate is
   PORT(
	    w1 : IN STD_LOGIC;
		 w2 : IN STD_LOGIC;
		 w3 : IN STD_LOGIC;
		 o : OUT STD_LOGIC_VECTOR(2 downto 0)
	);
END COMPONENT;



begin
   -- TODO: write generic code with for generate

xnor_pop1 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act1
	   );
		
xnor_pop2 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act2
	   );
		
xnor_pop3 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act3
	   );
		
		
fc1_activation : accumulate
PORT MAP(
       w1 => act1,
		 w2 => act2,
       w3 => act3,
		 o => activation
);

end Behavioral;



