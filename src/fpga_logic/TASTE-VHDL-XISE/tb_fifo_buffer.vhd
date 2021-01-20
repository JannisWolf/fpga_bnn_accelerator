--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:32:18 01/12/2021
-- Design Name:   
-- Module Name:   /home/jannis/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_fifo_buffer.vhd
-- Project Name:  Example1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fifo_buffer
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
 
ENTITY tb_fifo_buffer IS
END tb_fifo_buffer;
 
ARCHITECTURE behavior OF tb_fifo_buffer IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fifo_buffer
    PORT(
         i_rst_sync : IN  std_logic;
         i_clk : IN  std_logic;
         i_wr_en : IN  std_logic;
         i_wr_data : IN  std_logic_vector(7 downto 0);
         o_af : OUT  std_logic;
         o_full : OUT  std_logic;
         i_rd_en : IN  std_logic;
         o_rd_data : OUT  std_logic_vector(7 downto 0);
         o_ae : OUT  std_logic;
         o_empty : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal i_rst_sync : std_logic := '0';
   signal i_clk : std_logic := '0';
   signal i_wr_en : std_logic := '0';
   signal i_wr_data : std_logic_vector(7 downto 0) := (others => '0');
   signal i_rd_en : std_logic := '0';

 	--Outputs
   signal o_af : std_logic;
   signal o_full : std_logic;
   signal o_rd_data : std_logic_vector(7 downto 0);
   signal o_ae : std_logic;
   signal o_empty : std_logic;

   -- Clock period definitions
   constant i_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fifo_buffer PORT MAP (
          i_rst_sync => i_rst_sync,
          i_clk => i_clk,
          i_wr_en => i_wr_en,
          i_wr_data => i_wr_data,
          o_af => o_af,
          o_full => o_full,
          i_rd_en => i_rd_en,
          o_rd_data => o_rd_data,
          o_ae => o_ae,
          o_empty => o_empty
        );

   -- Clock process definitions
   i_clk_process :process
   begin
		i_clk <= '0';
		wait for i_clk_period/2;
		i_clk <= '1';
		wait for i_clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for i_clk_period*10;

      -- insert stimulus here 
    
	 --wait until i_clk = '1';
	 i_wr_en <= '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    i_WR_EN <= '0';    i_RD_EN <= '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    i_RD_EN <= '0';    i_WR_EN <= '1';    wait until i_clk = '1';    wait until i_clk = '1';    i_RD_EN <= '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    i_WR_EN <= '0';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';    wait until i_clk = '1';
    wait;
   end process;

END;
