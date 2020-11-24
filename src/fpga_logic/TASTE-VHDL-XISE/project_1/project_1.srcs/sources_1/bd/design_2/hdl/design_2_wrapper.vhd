--Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2018.2 (lin64) Build 2258646 Thu Jun 14 20:02:38 MDT 2018
--Date        : Tue Nov 24 13:05:48 2020
--Host        : Zenbook007 running 64-bit Ubuntu 18.04.5 LTS
--Command     : generate_target design_2_wrapper.bd
--Design      : design_2_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_2_wrapper is
end design_2_wrapper;

architecture STRUCTURE of design_2_wrapper is
  component design_2 is
  end component design_2;
begin
design_2_i: component design_2
 ;
end STRUCTURE;
