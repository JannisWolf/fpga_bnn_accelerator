----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:40:39 11/12/2020 
-- Design Name: 
-- Module Name:    subsample - Behavioral 
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

entity subsample is

	 PORT (
	 	  data_full : in  std_logic_vector(63 downto 0);
		  data_sub : out  std_logic_vector(2 downto 0)
	 );
end subsample;

architecture Behavioral of subsample is

begin

	data_sub <= data_full(63 downto 61);

end Behavioral;

