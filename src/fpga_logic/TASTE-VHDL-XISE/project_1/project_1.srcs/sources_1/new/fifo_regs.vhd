----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 11/24/2020 01:08:17 PM
-- Design Name: 
-- Module Name: fifo_regs - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fifo_regs is
--  Port ( );
    generic (
      g_WIDTH : natural := 3;
      g_DEPTH : integer := 32
      );
    port (
      i_rst_sync : in std_logic;
      i_clk      : in std_logic;
 
      -- FIFO Write Interface
      i_wr_en   : in  std_logic;
      i_wr_data : in  std_logic_vector(2 downto 0);
      o_full    : out std_logic;
 
      -- FIFO Read Interface
      i_rd_en   : in  std_logic;
      o_rd_data : out std_logic_vector(2 downto 0);
      o_empty   : out std_logic
      );
end fifo_regs;

architecture Behavioral of fifo_regs is

begin


end Behavioral;
