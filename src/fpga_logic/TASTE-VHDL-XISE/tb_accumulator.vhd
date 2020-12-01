--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:28:00 11/28/2020
-- Design Name:   
-- Module Name:   /home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_accumulator.vhd
-- Project Name:  Example1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: accumulator
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
 
ENTITY tb_accumulator IS
END tb_accumulator;
 
ARCHITECTURE behavior OF tb_accumulator IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT accumulator
    PORT(
         w1 : IN  std_logic;
         w2 : IN  std_logic;
         w3 : IN  std_logic;
         w4 : IN  std_logic;
         w5 : IN  std_logic;
         w6 : IN  std_logic;
         w7 : IN  std_logic;
         w8 : IN  std_logic;
         w9 : IN  std_logic;
         w10 : IN  std_logic;
         o : OUT  std_logic_vector(9 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal w1 : std_logic := '0';
   signal w2 : std_logic := '0';
   signal w3 : std_logic := '0';
   signal w4 : std_logic := '0';
   signal w5 : std_logic := '0';
   signal w6 : std_logic := '0';
   signal w7 : std_logic := '0';
   signal w8 : std_logic := '0';
   signal w9 : std_logic := '0';
   signal w10 : std_logic := '0';

 	--Outputs
   signal o : std_logic_vector(9 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
 signal clock : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: accumulator PORT MAP (
          w1 => w1,
          w2 => w2,
          w3 => w3,
          w4 => w4,
          w5 => w5,
          w6 => w6,
          w7 => w7,
          w8 => w8,
          w9 => w9,
          w10 => w10,
          o => o
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;

      -- insert stimulus here 
		w1 <= '1';
		w2 <= '0';
		w3 <= '1';
		w4 <= '0';
		w5 <= '1';
		w6 <= '0';
		w7 <= '1';
		w8 <= '0';
		w9 <= '1';
		w10 <= '0';
		
      wait;
   end process;

END;
