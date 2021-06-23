----------------------------------------------------------------------------------
-- Company: FAU & UPC
-- Engineer: Jannis Wolf
-- 
-- Create Date:    13:07:58 11/12/2020 
-- Design Name:    bnn_acc
-- Module Name:    xnor_popcount - Behavioral 
-- Project Name:   FPGA Binary Neural Network Accelerator
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

----------------------------------------------------------------------------------
-- Entity
----------------------------------------------------------------------------------

entity entity_name is
   GENERIC(
	    size : integer := 10
		 );
   PORT(
	    clk_xn : IN STD_LOGIC;
	    wei : IN STD_LOGIC_VECTOR(size-1 downto 0);
	);
end entity_name;

----------------------------------------------------------------------------------
-- Architecture
----------------------------------------------------------------------------------

architecture Behavioral of entity_name is

----------------------------------------------------------------------------------
-- Signal & Variables
----------------------------------------------------------------------------------

signal cou : std_logic_vector(size-1 downto 0) := (others => '0');
variable pop_count : unsigned(3 downto 0) := "0000"; 


----------------------------------------------------------------------------------
-- Component declarations
----------------------------------------------------------------------------------

COMPONENT subsample64to3
	 PORT (
	 	  data_full : in  std_logic_vector(63 downto 0);
		  data_sub : out  std_logic_vector(2 downto 0)
	 );
END COMPONENT;

----------------------------------------------------------------------------------
-- Main program
----------------------------------------------------------------------------------

begin

----------------------------------------------------------------------------------
-- Component instantiations
----------------------------------------------------------------------------------

sub: subsample64to3
	   PORT MAP(
		  data_full => data_in,
		  data_sub => sub_input
	   );

----------------------------------------------------------------------------------
-- processes
----------------------------------------------------------------------------------

process_name: process(clk_xn, wei)
    variable count : signed(3 downto 0) := (others => '0');

begin
   if(rising_edge(clk_xn)) then
	
	end if;
end process process_name;

end Behavioral;
