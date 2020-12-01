--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:10:07 11/28/2020
-- Design Name:   
-- Module Name:   /home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_fully_connected.vhd
-- Project Name:  Example1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fully_connected
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
 
ENTITY tb_fully_connected IS
END tb_fully_connected;
 
ARCHITECTURE behavior OF tb_fully_connected IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fully_connected
    PORT(
         --we : IN  std_logic;
         data_in : IN  std_logic_vector(9 downto 0);
         calc_pos : IN  std_logic;
         activation : OUT  std_logic_vector(9 downto 0);
         clk_fc : IN  std_logic;
         finish_calc : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   --signal we : std_logic := '0';
   signal data_in : std_logic_vector(9 downto 0) := (others => '0');
   signal calc_pos : std_logic := '0';
   signal clk_fc : std_logic := '0';

 	--Outputs
   signal activation : std_logic_vector(9 downto 0);
   signal finish_calc : std_logic;

   -- Clock period definitions
   constant clk_fc_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fully_connected PORT MAP (
          --we => we,
          data_in => data_in,
          calc_pos => calc_pos,
          activation => activation,
          clk_fc => clk_fc,
          finish_calc => finish_calc
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
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_fc_period*10;
		data_in <= "1111111111";
		

      -- insert stimulus here 

      wait;
   end process;

END;
