--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:20:54 11/24/2020
-- Design Name:   
-- Module Name:   /home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_acc.vhd
-- Project Name:  Example1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: accelerator
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
 
ENTITY tb_acc IS
END tb_acc;
 
ARCHITECTURE behavior OF tb_acc IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT accelerator
    PORT(
         data_in : IN  std_logic_vector(63 downto 0);
         data_out : OUT  std_logic_vector(63 downto 0);
         buf_ful : OUT  std_logic_vector(63 downto 0);
         res_ready : OUT  std_logic_vector(63 downto 0);
         start_accelerator : IN  std_logic;
         finish_accelerator : OUT  std_logic;
         clock_accelerator : IN  std_logic;
         reset_accelerator : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal data_in : std_logic_vector(63 downto 0) := (others => '0');
   signal start_accelerator : std_logic := '0';
   signal clock_accelerator : std_logic := '0';
   signal reset_accelerator : std_logic := '0';

 	--Outputs
   signal data_out : std_logic_vector(63 downto 0);
   signal buf_ful : std_logic_vector(63 downto 0);
   signal res_ready : std_logic_vector(63 downto 0);
   signal finish_accelerator : std_logic;

   -- Clock period definitions
   constant clock_accelerator_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: accelerator PORT MAP (
          data_in => data_in,
          data_out => data_out,
          buf_ful => buf_ful,
          res_ready => res_ready,
          start_accelerator => start_accelerator,
          finish_accelerator => finish_accelerator,
          clock_accelerator => clock_accelerator,
          reset_accelerator => reset_accelerator
        );

   -- Clock process definitions
   clock_accelerator_process :process
   begin
		clock_accelerator <= '0';
		wait for clock_accelerator_period/2;
		clock_accelerator <= '1';
		wait for clock_accelerator_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_accelerator_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
