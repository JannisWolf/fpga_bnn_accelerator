--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:55:53 11/28/2020
-- Design Name:   
-- Module Name:   /home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_memory10Bit.vhd
-- Project Name:  Example1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: memory10Bit
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_memory10Bit IS
END tb_memory10Bit;
 
ARCHITECTURE behavior OF tb_memory10Bit IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT memory10Bit
    PORT(
         clka : IN  std_logic;
         addra : IN  std_logic_vector(3 downto 0);
         douta : OUT  std_logic_vector(9 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clka : std_logic := '0';
   signal addra : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal douta : std_logic_vector(9 downto 0);

   -- Clock period definitions
   constant clka_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: memory10Bit PORT MAP (
          clka => clka,
          addra => addra,
          douta => douta
        );

   -- Clock process definitions
   clka_process :process
   begin
		clka <= '0';
		wait for clka_period/2;
		clka <= '1';
		wait for clka_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clka_period*10;

      -- insert stimulus here 

		addra <= "0001";
      wait for 100 ns;
		addra <= "0011";
      wait for 100 ns;
		addra <= "0111";
      wait for 100 ns;
		addra <= "1001";
      wait for 100 ns;

      wait;
   end process;

END;
