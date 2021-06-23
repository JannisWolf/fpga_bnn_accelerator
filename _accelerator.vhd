----------------------------------------------------------------------------------
-- Company: FAU & UPC
-- Engineer: Jannis Wolf
-- 
-- Create Date:    13:07:58 11/12/2020 
-- Design Name:    bnn_acc
-- Module Name:    _accelerator - Behavioral 
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

entity _accelerator is
   GENERIC(
	    size : integer := 10
		 );
   PORT(
	    clk_xn : IN STD_LOGIC;
	    wei : IN STD_LOGIC_VECTOR(size-1 downto 0);
	);
end _accelerator;

----------------------------------------------------------------------------------
-- Architecture
----------------------------------------------------------------------------------

architecture Behavioral of _accelerator is

----------------------------------------------------------------------------------
-- Signal & Variables
----------------------------------------------------------------------------------

--signal cou : std_logic_vector(size-1 downto 0) := (others => '0');
--variable pop_count : unsigned(3 downto 0) := "0000"; 


----------------------------------------------------------------------------------
-- Component declarations
----------------------------------------------------------------------------------

-- basic principle: fully connected layer with dedicated memory for the weights 
-- chained by cyclo_fifo buffers

-- cycle_fifo 1

component cycle_fifo
  generic (
    g_WIDTH    : natural := 8;
    g_DEPTH    : integer := 32
    );
  port (
    i_rst_sync : in std_logic;
    i_clk      : in std_logic;

    -- FIFO Write Interface
    i_wr_en   : in  std_logic;
    i_wr_data : in  std_logic_vector(g_WIDTH-1 downto 0);
    o_full    : out std_logic;

    -- FIFO Read Interface
    i_rd_en   : in  std_logic;
    o_rd_data : out std_logic_vector(g_WIDTH-1 downto 0);
    o_empty   : out std_logic
    );
end component cycle_fifo;

-- fully connected 1

component fully_connected
end component fully_connected

-- memory weights 1

component memory_weights
end component memory_weights

--COMPONENT subsample64to3
--	 PORT (
--	 	  data_full : in  std_logic_vector(63 downto 0);
--		  data_sub : out  std_logic_vector(2 downto 0)
--	 );
--END COMPONENT;

----------------------------------------------------------------------------------
-- Main program
----------------------------------------------------------------------------------

begin

----------------------------------------------------------------------------------
-- Component instantiations
----------------------------------------------------------------------------------

-- cycle_fifo that buffers incoming data



-- fully connected layer 1 that is connected to cycle_fifo


--sub: subsample64to3
--	   PORT MAP(
--		  data_full => data_in,
--		  data_sub => sub_input
--	   );

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
