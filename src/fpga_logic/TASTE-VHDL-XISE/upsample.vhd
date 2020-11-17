----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:26:02 11/12/2020 
-- Design Name: 
-- Module Name:    upsample - Behavioral 
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

entity upsample1to64 is
	 PORT (
		  sub : in std_logic;
		  full : out std_logic_vector(63 downto 0)
	 );
end upsample1to64;

architecture Behavioral of upsample1to64 is

begin

	  full <= "000000000000000000000000000000000000000000000000000000000000000" & sub;

end Behavioral;

