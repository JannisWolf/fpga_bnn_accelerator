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

entity memory10Bit_output_layer is
	 PORT (
	   clka : IN STD_LOGIC;
	   addra : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
	   douta : OUT STD_LOGIC_VECTOR(9 DOWNTO 0)
	 );
end memory10Bit_output_layer;

architecture Behavioral of memory10Bit_output_layer is

begin
	 process(clka)
	 begin
	    if(rising_edge(clka)) then
			 if(addra = "0000") then
				  douta <= "1001110000";
			 elsif (addra = "0001") then
				  douta <= "0100100101";
			 elsif (addra = "0010") then
				  douta <= "0110011101";
			 end if;
		 end if;
	 end process;
end Behavioral;



