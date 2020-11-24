--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:09:48 11/24/2020
-- Design Name:   
-- Module Name:   /home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_xnor.vhd
-- Project Name:  Example1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: xnor_popcount
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
 
ENTITY tb_xnor IS
END tb_xnor;
 
ARCHITECTURE behavior OF tb_xnor IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT xnor_popcount
    PORT(
         clk_xn : IN  std_logic;
         wei : IN  std_logic;
         d_in : IN  std_logic_vector(2 downto 0);
         res : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_xn : std_logic := '0';
   signal wei : std_logic := '1';
   signal d_in : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal res : std_logic;

   -- Clock period definitions
   constant clk_xn_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: xnor_popcount PORT MAP (
          clk_xn => clk_xn,
          wei => wei,
          d_in => d_in,
          res => res
        );

   -- Clock process definitions
   clk_xn_process :process
   begin
		clk_xn <= '0';
		wait for clk_xn_period/2;
		clk_xn <= '1';
		wait for clk_xn_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_xn_period*10;

      -- insert stimulus here 

		wait for 100 ns;	
      wei <= '1';
		wait for 100 ns;	
		wei <= '0';
      wait;
   end process;

END;
