----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:24:07 11/28/2020 
-- Design Name: 
-- Module Name:    accumulator - Behavioral 
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
USE ieee.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity accumulator is
   GENERIC(
	    size : integer := 3
		 );
   PORT(
	    w1 : IN STD_LOGIC;
		 clk: IN STD_LOGIC;
		 c : IN STD_LOGIC_VECTOR(3 downto 0);
		 o : OUT STD_LOGIC_VECTOR(size-1 downto 0)
	);
end accumulator;

architecture Behavioral of accumulator is

signal tmp : STD_LOGIC_VECTOR(size-1 downto 0) := (others => '0');

begin

--    o <= w1 & w2 & w3 & w4 & w5 & w6 & w7 & w8 & w9 & w10;
accumulate : process(clk)
begin
		if(rising_edge(clk)) then
			--o(to_integer(unsigned(c))) <= w1;
			tmp(to_integer(unsigned(c))) <= w1;		
		end if;
		if(falling_edge(clk)) then
			if(to_integer(unsigned(c)) = size-1) then
			   o <= std_logic_vector(rotate_left(unsigned(tmp),2));
			end if;
		end if;
end process accumulate;
end Behavioral;

