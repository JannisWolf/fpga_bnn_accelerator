----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:07:58 11/12/2020 
-- Design Name: 
-- Module Name:    xnor_popcount - Behavioral 
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

entity xnor_popcount is
   PORT(
	    clk_xn : IN STD_LOGIC;
	    wei : IN STD_LOGIC;
		 d_in : IN STD_LOGIC_VECTOR(2 downto 0);
		 res : OUT STD_LOGIC
	);
end xnor_popcount;

architecture Behavioral of xnor_popcount is

signal cou : std_logic_vector(2 downto 0) := "000";

begin

process(clk_xn)
begin
   if(clk_xn'event and clk_xn='1') then
	   for i in 0 to 2 loop
		   cou(i) <= wei xor d_in(i);
		end loop;
	end if;

end process;

end Behavioral;

