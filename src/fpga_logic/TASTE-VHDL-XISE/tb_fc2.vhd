--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:21:34 12/12/2020
-- Design Name:   
-- Module Name:   /home/jannis/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_fc2.vhd
-- Project Name:  Example1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fully_connected2
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
 
ENTITY tb_fc2 IS
END tb_fc2;
 
ARCHITECTURE behavior OF tb_fc2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fully_connected2
    PORT(
         clk_fc : IN  std_logic;
         data_in : IN  std_logic_vector(2 downto 0);
         weights_in : IN  std_logic_vector(2 downto 0);
         calc_pos : IN  std_logic;
         activation : OUT  std_logic_vector(9 downto 0);
         finish_fc : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_fc : std_logic := '0';
   signal data_in : std_logic_vector(2 downto 0) := (others => '0');
   signal weights_in : std_logic_vector(2 downto 0) := (others => '0');
   signal calc_pos : std_logic := '0';

 	--Outputs
   signal activation : std_logic_vector(9 downto 0);
   signal finish_fc : std_logic;

   -- Clock period definitions
   constant clk_fc_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fully_connected2 PORT MAP (
          clk_fc => clk_fc,
          data_in => data_in,
          weights_in => weights_in,
          calc_pos => calc_pos,
          activation => activation,
          finish_fc => finish_fc
        );

   -- Clock process definitions
   clk_fc_process :process
   begin
		clk_fc <= '0';
		wait for clk_fc_period/2;
		clk_fc <= '1';
		wait for clk_fc_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      data_in <= "000";

      -- insert stimulus here 

      wait;
   end process;

END;
