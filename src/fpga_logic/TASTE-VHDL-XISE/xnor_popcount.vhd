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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity xnor_popcount is
   GENERIC(
	    size : integer := 10
		 );
   PORT(
	    clk_xn : IN STD_LOGIC;
	    wei : IN STD_LOGIC_VECTOR(size-1 downto 0);
		 d_in : IN STD_LOGIC_VECTOR(size-1 downto 0);
		 res : OUT STD_LOGIC
	);
end xnor_popcount;

architecture Behavioral of xnor_popcount is

signal cou : std_logic_vector(size-1 downto 0) := (others => '0');
--variable pop_count : unsigned(3 downto 0) := "0000"; 
signal sig_pop : std_logic_vector(7 downto 0) := "00000000";
signal sig_count : std_logic_vector(3 downto 0) := "0000";
signal sig_res : signed(7 downto 0) := "00000000";

begin

op_xnor : process(clk_xn)
begin
cou <= wei xnor d_in;

end process op_xnor;


op_popcount: process(clk_xn, wei)
    variable count : signed(3 downto 0) := (others => '0');
	 variable pop : signed(7 downto 0) := (others => '0');
	 
	 constant num_bit : signed(7 downto 0) := to_signed(size,8);
begin
   if(rising_edge(clk_xn)) then
		count := "0000";

		for i in 0 to size-1 loop
			count := count + ("000" & cou(i)); 
		end loop;

		pop := "000" & count(3 downto 0) & '0'; 
		sig_pop <= std_logic_vector(pop);
		sig_count <= std_logic_vector(count);
		sig_res <= pop - num_bit;
		res <= std_logic(not sig_res(7));
	end if;

end process op_popcount;

end Behavioral;

