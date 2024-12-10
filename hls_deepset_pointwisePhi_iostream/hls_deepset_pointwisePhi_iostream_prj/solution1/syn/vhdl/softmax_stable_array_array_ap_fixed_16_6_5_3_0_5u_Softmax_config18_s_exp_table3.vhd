-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3_rom is 
    generic(
             DWIDTH     : integer := 17; 
             AWIDTH     : integer := 10; 
             MEM_SIZE    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          addr2      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce2       : in std_logic; 
          q2         : out std_logic_vector(DWIDTH-1 downto 0);
          addr3      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce3       : in std_logic; 
          q3         : out std_logic_vector(DWIDTH-1 downto 0);
          addr4      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce4       : in std_logic; 
          q4         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr2_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr3_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr4_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem0 : mem_array := (
    0 => "00000010000000000", 1 => "00000010010001000", 
    2 => "00000010100100011", 3 => "00000010111010010", 
    4 => "00000011010011000", 5 => "00000011101111001", 
    6 => "00000100001111000", 7 => "00000100110011000", 
    8 => "00000101011100000", 9 => "00000110001010010", 
    10 => "00000110111110110", 11 => "00000111111010010", 
    12 => "00001000111101101", 13 => "00001010001010000", 
    14 => "00001011100000101", 15 => "00001101000010101", 
    16 => "00001110110001110", 17 => "00010000101111110", 
    18 => "00010010111110011", 19 => "00010101100000001", 
    20 => "00011000010111011", 21 => "00011011100111000", 
    22 => "00011111010010010", 23 => "00100011011100111", 
    24 => "00101000001011000", 25 => "00101101100001010", 
    26 => "00110011100101001", 27 => "00111010011100110", 
    28 => "01000010001110110", 29 => "01001011000011001", 
    30 => "01010101000010110", 31 => "01100000010111011", 
    32 => "01101101001100101", 33 => "01111011101111001", 
    34 => "10001100001101100", 35 => "10011110111000010", 
    36 => "10110100000010010", 37 => "11001100000000011", 
    38 => "11100111001010110", 39 to 511=> "11111111111111111", 
    512 to 963=> "00000000000000000", 964 to 971=> "00000000000000001", 
    972 to 975=> "00000000000000010", 976 to 978=> "00000000000000011", 
    979 to 980=> "00000000000000100", 981 to 982=> "00000000000000101", 
    983 => "00000000000000110", 984 => "00000000000000111", 
    985 => "00000000000001000", 986 => "00000000000001001", 
    987 => "00000000000001010", 988 => "00000000000001011", 
    989 => "00000000000001101", 990 => "00000000000001111", 
    991 => "00000000000010001", 992 => "00000000000010011", 
    993 => "00000000000010101", 994 => "00000000000011000", 
    995 => "00000000000011011", 996 => "00000000000011111", 
    997 => "00000000000100011", 998 => "00000000000101000", 
    999 => "00000000000101101", 1000 => "00000000000110011", 
    1001 => "00000000000111010", 1002 => "00000000001000001", 
    1003 => "00000000001001010", 1004 => "00000000001010100", 
    1005 => "00000000001011111", 1006 => "00000000001101100", 
    1007 => "00000000001111010", 1008 => "00000000010001011", 
    1009 => "00000000010011101", 1010 => "00000000010110010", 
    1011 => "00000000011001010", 1012 => "00000000011100100", 
    1013 => "00000000100000011", 1014 => "00000000100100101", 
    1015 => "00000000101001100", 1016 => "00000000101111001", 
    1017 => "00000000110101011", 1018 => "00000000111100100", 
    1019 => "00000001000100100", 1020 => "00000001001101101", 
    1021 => "00000001011000000", 1022 => "00000001100011101", 
    1023 => "00000001110001000" );
signal mem1 : mem_array := (
    0 => "00000010000000000", 1 => "00000010010001000", 
    2 => "00000010100100011", 3 => "00000010111010010", 
    4 => "00000011010011000", 5 => "00000011101111001", 
    6 => "00000100001111000", 7 => "00000100110011000", 
    8 => "00000101011100000", 9 => "00000110001010010", 
    10 => "00000110111110110", 11 => "00000111111010010", 
    12 => "00001000111101101", 13 => "00001010001010000", 
    14 => "00001011100000101", 15 => "00001101000010101", 
    16 => "00001110110001110", 17 => "00010000101111110", 
    18 => "00010010111110011", 19 => "00010101100000001", 
    20 => "00011000010111011", 21 => "00011011100111000", 
    22 => "00011111010010010", 23 => "00100011011100111", 
    24 => "00101000001011000", 25 => "00101101100001010", 
    26 => "00110011100101001", 27 => "00111010011100110", 
    28 => "01000010001110110", 29 => "01001011000011001", 
    30 => "01010101000010110", 31 => "01100000010111011", 
    32 => "01101101001100101", 33 => "01111011101111001", 
    34 => "10001100001101100", 35 => "10011110111000010", 
    36 => "10110100000010010", 37 => "11001100000000011", 
    38 => "11100111001010110", 39 to 511=> "11111111111111111", 
    512 to 963=> "00000000000000000", 964 to 971=> "00000000000000001", 
    972 to 975=> "00000000000000010", 976 to 978=> "00000000000000011", 
    979 to 980=> "00000000000000100", 981 to 982=> "00000000000000101", 
    983 => "00000000000000110", 984 => "00000000000000111", 
    985 => "00000000000001000", 986 => "00000000000001001", 
    987 => "00000000000001010", 988 => "00000000000001011", 
    989 => "00000000000001101", 990 => "00000000000001111", 
    991 => "00000000000010001", 992 => "00000000000010011", 
    993 => "00000000000010101", 994 => "00000000000011000", 
    995 => "00000000000011011", 996 => "00000000000011111", 
    997 => "00000000000100011", 998 => "00000000000101000", 
    999 => "00000000000101101", 1000 => "00000000000110011", 
    1001 => "00000000000111010", 1002 => "00000000001000001", 
    1003 => "00000000001001010", 1004 => "00000000001010100", 
    1005 => "00000000001011111", 1006 => "00000000001101100", 
    1007 => "00000000001111010", 1008 => "00000000010001011", 
    1009 => "00000000010011101", 1010 => "00000000010110010", 
    1011 => "00000000011001010", 1012 => "00000000011100100", 
    1013 => "00000000100000011", 1014 => "00000000100100101", 
    1015 => "00000000101001100", 1016 => "00000000101111001", 
    1017 => "00000000110101011", 1018 => "00000000111100100", 
    1019 => "00000001000100100", 1020 => "00000001001101101", 
    1021 => "00000001011000000", 1022 => "00000001100011101", 
    1023 => "00000001110001000" );
signal mem2 : mem_array := (
    0 => "00000010000000000", 1 => "00000010010001000", 
    2 => "00000010100100011", 3 => "00000010111010010", 
    4 => "00000011010011000", 5 => "00000011101111001", 
    6 => "00000100001111000", 7 => "00000100110011000", 
    8 => "00000101011100000", 9 => "00000110001010010", 
    10 => "00000110111110110", 11 => "00000111111010010", 
    12 => "00001000111101101", 13 => "00001010001010000", 
    14 => "00001011100000101", 15 => "00001101000010101", 
    16 => "00001110110001110", 17 => "00010000101111110", 
    18 => "00010010111110011", 19 => "00010101100000001", 
    20 => "00011000010111011", 21 => "00011011100111000", 
    22 => "00011111010010010", 23 => "00100011011100111", 
    24 => "00101000001011000", 25 => "00101101100001010", 
    26 => "00110011100101001", 27 => "00111010011100110", 
    28 => "01000010001110110", 29 => "01001011000011001", 
    30 => "01010101000010110", 31 => "01100000010111011", 
    32 => "01101101001100101", 33 => "01111011101111001", 
    34 => "10001100001101100", 35 => "10011110111000010", 
    36 => "10110100000010010", 37 => "11001100000000011", 
    38 => "11100111001010110", 39 to 511=> "11111111111111111", 
    512 to 963=> "00000000000000000", 964 to 971=> "00000000000000001", 
    972 to 975=> "00000000000000010", 976 to 978=> "00000000000000011", 
    979 to 980=> "00000000000000100", 981 to 982=> "00000000000000101", 
    983 => "00000000000000110", 984 => "00000000000000111", 
    985 => "00000000000001000", 986 => "00000000000001001", 
    987 => "00000000000001010", 988 => "00000000000001011", 
    989 => "00000000000001101", 990 => "00000000000001111", 
    991 => "00000000000010001", 992 => "00000000000010011", 
    993 => "00000000000010101", 994 => "00000000000011000", 
    995 => "00000000000011011", 996 => "00000000000011111", 
    997 => "00000000000100011", 998 => "00000000000101000", 
    999 => "00000000000101101", 1000 => "00000000000110011", 
    1001 => "00000000000111010", 1002 => "00000000001000001", 
    1003 => "00000000001001010", 1004 => "00000000001010100", 
    1005 => "00000000001011111", 1006 => "00000000001101100", 
    1007 => "00000000001111010", 1008 => "00000000010001011", 
    1009 => "00000000010011101", 1010 => "00000000010110010", 
    1011 => "00000000011001010", 1012 => "00000000011100100", 
    1013 => "00000000100000011", 1014 => "00000000100100101", 
    1015 => "00000000101001100", 1016 => "00000000101111001", 
    1017 => "00000000110101011", 1018 => "00000000111100100", 
    1019 => "00000001000100100", 1020 => "00000001001101101", 
    1021 => "00000001011000000", 1022 => "00000001100011101", 
    1023 => "00000001110001000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem0 : signal is "block_rom";
attribute syn_rom_style of mem1 : signal is "block_rom";
attribute syn_rom_style of mem2 : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem0 : signal is "block";
attribute ROM_STYLE of mem1 : signal is "block";
attribute ROM_STYLE of mem2 : signal is "block";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

memory_access_guard_2: process (addr2) 
begin
      addr2_tmp <= addr2;
--synthesis translate_off
      if (CONV_INTEGER(addr2) > mem_size-1) then
           addr2_tmp <= (others => '0');
      else 
           addr2_tmp <= addr2;
      end if;
--synthesis translate_on
end process;

memory_access_guard_3: process (addr3) 
begin
      addr3_tmp <= addr3;
--synthesis translate_off
      if (CONV_INTEGER(addr3) > mem_size-1) then
           addr3_tmp <= (others => '0');
      else 
           addr3_tmp <= addr3;
      end if;
--synthesis translate_on
end process;

memory_access_guard_4: process (addr4) 
begin
      addr4_tmp <= addr4;
--synthesis translate_off
      if (CONV_INTEGER(addr4) > mem_size-1) then
           addr4_tmp <= (others => '0');
      else 
           addr4_tmp <= addr4;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem0(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem0(CONV_INTEGER(addr1_tmp)); 
        end if;
        if (ce2 = '1') then 
            q2 <= mem1(CONV_INTEGER(addr2_tmp)); 
        end if;
        if (ce3 = '1') then 
            q3 <= mem1(CONV_INTEGER(addr3_tmp)); 
        end if;
        if (ce4 = '1') then 
            q4 <= mem2(CONV_INTEGER(addr4_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3 is
    generic (
        DataWidth : INTEGER := 17;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address2 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address3 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce3 : IN STD_LOGIC;
        q3 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address4 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce4 : IN STD_LOGIC;
        q4 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3 is
    component softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR;
            addr2 : IN STD_LOGIC_VECTOR;
            ce2 : IN STD_LOGIC;
            q2 : OUT STD_LOGIC_VECTOR;
            addr3 : IN STD_LOGIC_VECTOR;
            ce3 : IN STD_LOGIC;
            q3 : OUT STD_LOGIC_VECTOR;
            addr4 : IN STD_LOGIC_VECTOR;
            ce4 : IN STD_LOGIC;
            q4 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3_rom_U :  component softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1,
        addr2 => address2,
        ce2 => ce2,
        q2 => q2,
        addr3 => address3,
        ce3 => ce3,
        q3 => q3,
        addr4 => address4,
        ce4 => ce4,
        q4 => q4);

end architecture;


