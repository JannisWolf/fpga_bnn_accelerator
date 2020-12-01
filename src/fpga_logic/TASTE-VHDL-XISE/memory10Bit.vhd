----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:07:05 11/28/2020 
-- Design Name: 
-- Module Name:    memory10Bit - Behavioral 
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

entity memory10Bit is
	 PORT (
	   clka : IN STD_LOGIC;
	   addra : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
	   douta : OUT STD_LOGIC_VECTOR(9 DOWNTO 0)
	 );
end memory10Bit;

architecture Behavioral of memory10Bit is

begin
	 process(clka)
	 begin
		 if(addra = "0000") then
		  	  douta <= "0000000001";
		 elsif (addra = "0001") then
			  douta <= "0000000011";
		 elsif (addra = "0010") then
			  douta <= "0000000111";
		 elsif (addra = "0011") then
			  douta <= "0000001111";
		 elsif (addra = "0100") then
			  douta <= "0000011111";
		 elsif (addra = "0101") then
			  douta <= "0000111111";
		 elsif (addra = "0110") then
			  douta <= "0001111111";
		 elsif (addra = "0111") then
			  douta <= "0011111111";
		 elsif (addra = "1000") then
			  douta <= "0111111111";
		 elsif (addra = "1001") then
			  douta <= "1111111111";
		 end if;
	 end process;
end Behavioral;

