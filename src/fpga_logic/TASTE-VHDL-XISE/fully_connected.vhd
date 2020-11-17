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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fully_connected is
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
end fully_connected;

architecture Behavioral of fully_connected is

signal act1 : STD_LOGIC;
signal act2 : STD_LOGIC;
signal act3 : STD_LOGIC;
signal act4 : STD_LOGIC;
signal act5 : STD_LOGIC;
signal act6 : STD_LOGIC;
signal act7 : STD_LOGIC;
signal act8 : STD_LOGIC;
signal act9 : STD_LOGIC;
signal act10 : STD_LOGIC;

COMPONENT xnor_popcount is
   PORT(
	    wei : IN STD_LOGIC;
		 d_in : IN STD_LOGIC_VECTOR(2 downto 0);
		 res : OUT STD_LOGIC
	);
END COMPONENT;

COMPONENT accumulate is
   PORT(
	    w1 : IN STD_LOGIC;
		 w2 : IN STD_LOGIC;
		 w3 : IN STD_LOGIC;
		 w4 : IN STD_LOGIC;
		 w5 : IN STD_LOGIC;
		 w6 : IN STD_LOGIC;
		 w7 : IN STD_LOGIC;
		 w8 : IN STD_LOGIC;
		 w9 : IN STD_LOGIC;
		 w10 : IN STD_LOGIC;
		 o : OUT STD_LOGIC_VECTOR(9 downto 0)
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
		
xnor_pop4 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act4
	   );
		
xnor_pop5 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act5
	   );
		
xnor_pop6 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act6
	   );
		
xnor_pop7 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act7
	   );
		
xnor_pop8 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act8
	   );
		
xnor_pop9 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act9
	   );
		
xnor_pop10 : xnor_popcount
PORT MAP(
		 wei => weights,
		 d_in => data_in,
		 res => act10
	   );
		
fc1_activation : accumulate
PORT MAP(
       w1 => act1,
		 w2 => act2,
       w3 => act3,
       w4 => act4,
       w5 => act5,
       w6 => act6,
       w7 => act7,
       w8 => act8,
       w9 => act9,
       w10 => act10,
		 o => activation
);

end Behavioral;

