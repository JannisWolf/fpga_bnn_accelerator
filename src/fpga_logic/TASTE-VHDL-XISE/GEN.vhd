----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:32:14 11/29/2020 
-- Design Name: 
-- Module Name:    GEN - Behavioral 
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

entity REG_BANK is
port(	CLK : in std_logic;
		RESET : in std_logic);
end REG_BANK;

architecture GEN of REG_BANK is
  component REG
    port(D,CLK,RESET : in  std_ulogic;
         Q           : out std_ulogic);
  end component;
begin
   GEN_REG: 
   for I in 0 to 3 generate
      REGX : REG port map
        (DIN(I), CLK, RESET, DOUT(I));
   end generate GEN_REG;
end GEN;
