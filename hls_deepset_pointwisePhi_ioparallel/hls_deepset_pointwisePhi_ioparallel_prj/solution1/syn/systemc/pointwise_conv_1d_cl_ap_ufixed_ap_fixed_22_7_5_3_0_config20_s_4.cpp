#include "pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1965_fu_2055860_p2() {
    add_ln703_1965_fu_2055860_p2 = (!zext_ln203_262_fu_2044341_p1.read().is_01() || !trunc_ln203_16_fu_2043150_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_262_fu_2044341_p1.read()) + sc_biguint<9>(trunc_ln203_16_fu_2043150_p4.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1966_fu_2055870_p2() {
    add_ln703_1966_fu_2055870_p2 = (!sext_ln203_264_fu_2041882_p1.read().is_01() || !zext_ln203_190_fu_2044920_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_264_fu_2041882_p1.read()) + sc_biguint<13>(zext_ln203_190_fu_2044920_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1967_fu_2055876_p2() {
    add_ln703_1967_fu_2055876_p2 = (!zext_ln703_349_fu_2055866_p1.read().is_01() || !add_ln703_1966_fu_2055870_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_349_fu_2055866_p1.read()) + sc_biguint<13>(add_ln703_1966_fu_2055870_p2.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1968_fu_2058760_p2() {
    add_ln703_1968_fu_2058760_p2 = (!add_ln703_1964_fu_2058751_p2.read().is_01() || !sext_ln703_1032_fu_2058757_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1964_fu_2058751_p2.read()) + sc_bigint<15>(sext_ln703_1032_fu_2058757_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1969_fu_2055882_p2() {
    add_ln703_1969_fu_2055882_p2 = (!sext_ln203_378_fu_2046712_p1.read().is_01() || !sext_ln203_295_fu_2043744_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_378_fu_2046712_p1.read()) + sc_bigint<11>(sext_ln203_295_fu_2043744_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1970_fu_2055892_p2() {
    add_ln703_1970_fu_2055892_p2 = (!sext_ln203_409_fu_2048001_p1.read().is_01() || !sext_ln203_418_fu_2048268_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_409_fu_2048001_p1.read()) + sc_bigint<10>(sext_ln203_418_fu_2048268_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1971_fu_2055902_p2() {
    add_ln703_1971_fu_2055902_p2 = (!sext_ln703_1033_fu_2055888_p1.read().is_01() || !sext_ln703_1034_fu_2055898_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1033_fu_2055888_p1.read()) + sc_bigint<12>(sext_ln703_1034_fu_2055898_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1972_fu_2055908_p2() {
    add_ln703_1972_fu_2055908_p2 = (!zext_ln203_212_fu_2047388_p1.read().is_01() || !sext_ln203_466_fu_2050374_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_212_fu_2047388_p1.read()) + sc_bigint<9>(sext_ln203_466_fu_2050374_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1973_fu_2055914_p2() {
    add_ln703_1973_fu_2055914_p2 = (!sext_ln203_339_fu_2045528_p1.read().is_01() || !sext_ln203_346_fu_2045715_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_339_fu_2045528_p1.read()) + sc_bigint<8>(sext_ln203_346_fu_2045715_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1974_fu_2055924_p2() {
    add_ln703_1974_fu_2055924_p2 = (!add_ln703_1972_fu_2055908_p2.read().is_01() || !sext_ln703_1035_fu_2055920_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_1972_fu_2055908_p2.read()) + sc_bigint<9>(sext_ln703_1035_fu_2055920_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1975_fu_2055934_p2() {
    add_ln703_1975_fu_2055934_p2 = (!add_ln703_1971_fu_2055902_p2.read().is_01() || !sext_ln703_1036_fu_2055930_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1971_fu_2055902_p2.read()) + sc_bigint<12>(sext_ln703_1036_fu_2055930_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1977_fu_2055940_p2() {
    add_ln703_1977_fu_2055940_p2 = (!sext_ln203_340_fu_2045542_p1.read().is_01() || !sext_ln203_296_fu_2043758_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_340_fu_2045542_p1.read()) + sc_bigint<12>(sext_ln203_296_fu_2043758_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1978_fu_2058778_p2() {
    add_ln703_1978_fu_2058778_p2 = (!add_ln703_1550_fu_2057911_p2.read().is_01() || !sext_ln703_1038_fu_2058775_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1550_fu_2057911_p2.read()) + sc_bigint<15>(sext_ln703_1038_fu_2058775_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1979_fu_2055946_p2() {
    add_ln703_1979_fu_2055946_p2 = (!zext_ln203_185_fu_2044365_p1.read().is_01() || !sext_ln203_438_fu_2049181_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_185_fu_2044365_p1.read()) + sc_bigint<12>(sext_ln203_438_fu_2049181_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1980_fu_2055956_p2() {
    add_ln703_1980_fu_2055956_p2 = (!sext_ln203_379_fu_2046726_p1.read().is_01() || !sext_ln703_1040_fu_2055952_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_379_fu_2046726_p1.read()) + sc_bigint<13>(sext_ln703_1040_fu_2055952_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1981_fu_2058791_p2() {
    add_ln703_1981_fu_2058791_p2 = (!sext_ln703_1039_fu_2058784_p1.read().is_01() || !sext_ln703_1041_fu_2058788_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1039_fu_2058784_p1.read()) + sc_bigint<16>(sext_ln703_1041_fu_2058788_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1982_fu_2055962_p2() {
    add_ln703_1982_fu_2055962_p2 = (!zext_ln708_337_fu_2048550_p1.read().is_01() || !zext_ln708_330_fu_2047401_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_337_fu_2048550_p1.read()) + sc_biguint<11>(zext_ln708_330_fu_2047401_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1983_fu_2055968_p2() {
    add_ln703_1983_fu_2055968_p2 = (!zext_ln708_321_fu_2046157_p1.read().is_01() || !add_ln703_1982_fu_2055962_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_321_fu_2046157_p1.read()) + sc_biguint<11>(add_ln703_1982_fu_2055962_p2.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1984_fu_2055978_p2() {
    add_ln703_1984_fu_2055978_p2 = (!zext_ln708_356_fu_2050388_p1.read().is_01() || !zext_ln708_350_fu_2049794_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_356_fu_2050388_p1.read()) + sc_biguint<11>(zext_ln708_350_fu_2049794_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1985_fu_2055988_p2() {
    add_ln703_1985_fu_2055988_p2 = (!zext_ln203_191_fu_2044924_p1.read().is_01() || !sext_ln203_396_fu_2047572_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_191_fu_2044924_p1.read()) + sc_bigint<10>(sext_ln203_396_fu_2047572_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1986_fu_2055998_p2() {
    add_ln703_1986_fu_2055998_p2 = (!zext_ln703_351_fu_2055984_p1.read().is_01() || !sext_ln703_1042_fu_2055994_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_351_fu_2055984_p1.read()) + sc_bigint<12>(sext_ln703_1042_fu_2055994_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1987_fu_2056008_p2() {
    add_ln703_1987_fu_2056008_p2 = (!zext_ln703_350_fu_2055974_p1.read().is_01() || !sext_ln703_1043_fu_2056004_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_350_fu_2055974_p1.read()) + sc_bigint<13>(sext_ln703_1043_fu_2056004_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1989_fu_2056014_p2() {
    add_ln703_1989_fu_2056014_p2 = (!sext_ln203_297_fu_2043778_p1.read().is_01() || !zext_ln203_171_fu_2042572_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_297_fu_2043778_p1.read()) + sc_biguint<12>(zext_ln203_171_fu_2042572_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1990_fu_2058809_p2() {
    add_ln703_1990_fu_2058809_p2 = (!add_ln703_1462_fu_2057864_p2.read().is_01() || !sext_ln703_1045_fu_2058806_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1462_fu_2057864_p2.read()) + sc_bigint<15>(sext_ln703_1045_fu_2058806_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1991_fu_2056020_p2() {
    add_ln703_1991_fu_2056020_p2 = (!sext_ln203_380_fu_2046740_p1.read().is_01() || !sext_ln203_362_fu_2046171_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_380_fu_2046740_p1.read()) + sc_bigint<12>(sext_ln203_362_fu_2046171_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1992_fu_2056030_p2() {
    add_ln703_1992_fu_2056030_p2 = (!zext_ln203_178_fu_2043170_p1.read().is_01() || !sext_ln203_436_fu_2049071_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_178_fu_2043170_p1.read()) + sc_bigint<12>(sext_ln203_436_fu_2049071_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1993_fu_2056040_p2() {
    add_ln703_1993_fu_2056040_p2 = (!sext_ln703_1047_fu_2056026_p1.read().is_01() || !sext_ln703_1048_fu_2056036_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1047_fu_2056026_p1.read()) + sc_bigint<13>(sext_ln703_1048_fu_2056036_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1994_fu_2058822_p2() {
    add_ln703_1994_fu_2058822_p2 = (!sext_ln703_1046_fu_2058815_p1.read().is_01() || !sext_ln703_1049_fu_2058819_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1046_fu_2058815_p1.read()) + sc_bigint<16>(sext_ln703_1049_fu_2058819_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1995_fu_2056046_p2() {
    add_ln703_1995_fu_2056046_p2 = (!zext_ln203_266_fu_2044937_p1.read().is_01() || !trunc_ln203_20_fu_2044369_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_266_fu_2044937_p1.read()) + sc_biguint<10>(trunc_ln203_20_fu_2044369_p4.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1996_fu_2056056_p2() {
    add_ln703_1996_fu_2056056_p2 = (!zext_ln203_225_fu_2048585_p1.read().is_01() || !zext_ln203_213_fu_2047415_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_225_fu_2048585_p1.read()) + sc_biguint<12>(zext_ln203_213_fu_2047415_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1997_fu_2056062_p2() {
    add_ln703_1997_fu_2056062_p2 = (!zext_ln703_352_fu_2056052_p1.read().is_01() || !add_ln703_1996_fu_2056056_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_352_fu_2056052_p1.read()) + sc_biguint<12>(add_ln703_1996_fu_2056056_p2.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1998_fu_2056072_p2() {
    add_ln703_1998_fu_2056072_p2 = (!zext_ln203_251_fu_2050408_p1.read().is_01() || !zext_ln203_241_fu_2049821_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_251_fu_2050408_p1.read()) + sc_biguint<12>(zext_ln203_241_fu_2049821_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_1999_fu_2056082_p2() {
    add_ln703_1999_fu_2056082_p2 = (!sext_ln203_324_fu_2045021_p1.read().is_01() || !sext_ln203_410_fu_2048015_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_324_fu_2045021_p1.read()) + sc_bigint<10>(sext_ln203_410_fu_2048015_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2000_fu_2056092_p2() {
    add_ln703_2000_fu_2056092_p2 = (!zext_ln703_354_fu_2056078_p1.read().is_01() || !sext_ln703_1050_fu_2056088_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_354_fu_2056078_p1.read()) + sc_bigint<13>(sext_ln703_1050_fu_2056088_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2001_fu_2056102_p2() {
    add_ln703_2001_fu_2056102_p2 = (!zext_ln703_353_fu_2056068_p1.read().is_01() || !sext_ln703_1051_fu_2056098_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_353_fu_2056068_p1.read()) + sc_bigint<14>(sext_ln703_1051_fu_2056098_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2003_fu_2056108_p2() {
    add_ln703_2003_fu_2056108_p2 = (!zext_ln203_197_fu_2045855_p1.read().is_01() || !sext_ln203_439_fu_2049195_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_197_fu_2045855_p1.read()) + sc_bigint<12>(sext_ln203_439_fu_2049195_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2004_fu_2058840_p2() {
    add_ln703_2004_fu_2058840_p2 = (!add_ln703_1560_fu_2057919_p2.read().is_01() || !sext_ln703_1053_fu_2058837_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1560_fu_2057919_p2.read()) + sc_bigint<14>(sext_ln703_1053_fu_2058837_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2005_fu_2056114_p2() {
    add_ln703_2005_fu_2056114_p2 = (!sext_ln203_381_fu_2046754_p1.read().is_01() || !zext_ln708_357_fu_2050428_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_381_fu_2046754_p1.read()) + sc_biguint<11>(zext_ln708_357_fu_2050428_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2006_fu_2056124_p2() {
    add_ln703_2006_fu_2056124_p2 = (!zext_ln203_214_fu_2047429_p1.read().is_01() || !sext_ln703_1055_fu_2056120_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_214_fu_2047429_p1.read()) + sc_bigint<12>(sext_ln703_1055_fu_2056120_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2007_fu_2058853_p2() {
    add_ln703_2007_fu_2058853_p2 = (!sext_ln703_1054_fu_2058846_p1.read().is_01() || !sext_ln703_1056_fu_2058850_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1054_fu_2058846_p1.read()) + sc_bigint<15>(sext_ln703_1056_fu_2058850_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2008_fu_2056130_p2() {
    add_ln703_2008_fu_2056130_p2 = (!sext_ln203_411_fu_2048029_p1.read().is_01() || !sext_ln203_341_fu_2045556_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_411_fu_2048029_p1.read()) + sc_bigint<10>(sext_ln203_341_fu_2045556_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2009_fu_2056140_p2() {
    add_ln703_2009_fu_2056140_p2 = (!sext_ln203_454_fu_2049835_p1.read().is_01() || !sext_ln703_1057_fu_2056136_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_454_fu_2049835_p1.read()) + sc_bigint<11>(sext_ln703_1057_fu_2056136_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2010_fu_2056150_p2() {
    add_ln703_2010_fu_2056150_p2 = (!zext_ln203_192_fu_2044941_p1.read().is_01() || !sext_ln203_312_fu_2044405_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_192_fu_2044941_p1.read()) + sc_bigint<9>(sext_ln203_312_fu_2044405_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2011_fu_2056160_p2() {
    add_ln703_2011_fu_2056160_p2 = (!sext_ln203_298_fu_2043798_p1.read().is_01() || !sext_ln203_426_fu_2048605_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_298_fu_2043798_p1.read()) + sc_bigint<8>(sext_ln203_426_fu_2048605_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2012_fu_2056170_p2() {
    add_ln703_2012_fu_2056170_p2 = (!sext_ln703_1059_fu_2056156_p1.read().is_01() || !sext_ln703_1060_fu_2056166_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1059_fu_2056156_p1.read()) + sc_bigint<10>(sext_ln703_1060_fu_2056166_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2013_fu_2056180_p2() {
    add_ln703_2013_fu_2056180_p2 = (!sext_ln703_1058_fu_2056146_p1.read().is_01() || !sext_ln703_1061_fu_2056176_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1058_fu_2056146_p1.read()) + sc_bigint<12>(sext_ln703_1061_fu_2056176_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2015_fu_2056186_p2() {
    add_ln703_2015_fu_2056186_p2 = (!zext_ln203_155_fu_2041687_p1.read().is_01() || !add_ln703_1416_fu_2052040_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_155_fu_2041687_p1.read()) + sc_biguint<15>(add_ln703_1416_fu_2052040_p2.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2016_fu_2056192_p2() {
    add_ln703_2016_fu_2056192_p2 = (!sext_ln203_297_fu_2043778_p1.read().is_01() || !sext_ln203_270_fu_2042616_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_297_fu_2043778_p1.read()) + sc_bigint<12>(sext_ln203_270_fu_2042616_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2017_fu_2058874_p2() {
    add_ln703_2017_fu_2058874_p2 = (!sext_ln703_1063_fu_2058868_p1.read().is_01() || !sext_ln703_1064_fu_2058871_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1063_fu_2058868_p1.read()) + sc_bigint<16>(sext_ln703_1064_fu_2058871_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2018_fu_2056198_p2() {
    add_ln703_2018_fu_2056198_p2 = (!sext_ln203_392_fu_2047443_p1.read().is_01() || !sext_ln203_313_fu_2044419_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_392_fu_2047443_p1.read()) + sc_bigint<12>(sext_ln203_313_fu_2044419_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2019_fu_2056208_p2() {
    add_ln703_2019_fu_2056208_p2 = (!sext_ln203_455_fu_2049849_p1.read().is_01() || !sext_ln203_427_fu_2048619_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_455_fu_2049849_p1.read()) + sc_bigint<12>(sext_ln203_427_fu_2048619_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2020_fu_2056218_p2() {
    add_ln703_2020_fu_2056218_p2 = (!sext_ln703_1065_fu_2056204_p1.read().is_01() || !sext_ln703_1066_fu_2056214_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1065_fu_2056204_p1.read()) + sc_bigint<13>(sext_ln703_1066_fu_2056214_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2021_fu_2058883_p2() {
    add_ln703_2021_fu_2058883_p2 = (!add_ln703_2017_fu_2058874_p2.read().is_01() || !sext_ln703_1067_fu_2058880_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2017_fu_2058874_p2.read()) + sc_bigint<16>(sext_ln703_1067_fu_2058880_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2022_fu_2056224_p2() {
    add_ln703_2022_fu_2056224_p2 = (!zext_ln708_325_fu_2046774_p1.read().is_01() || !zext_ln708_312_fu_2044954_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_325_fu_2046774_p1.read()) + sc_biguint<11>(zext_ln708_312_fu_2044954_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2023_fu_2056234_p2() {
    add_ln703_2023_fu_2056234_p2 = (!zext_ln708_358_fu_2050442_p1.read().is_01() || !zext_ln708_344_fu_2049209_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_358_fu_2050442_p1.read()) + sc_biguint<11>(zext_ln708_344_fu_2049209_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2024_fu_2056244_p2() {
    add_ln703_2024_fu_2056244_p2 = (!zext_ln703_355_fu_2056230_p1.read().is_01() || !zext_ln703_356_fu_2056240_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_355_fu_2056230_p1.read()) + sc_biguint<12>(zext_ln703_356_fu_2056240_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2025_fu_2056254_p2() {
    add_ln703_2025_fu_2056254_p2 = (!sext_ln203_363_fu_2046185_p1.read().is_01() || !sext_ln203_279_fu_2043198_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_363_fu_2046185_p1.read()) + sc_bigint<11>(sext_ln203_279_fu_2043198_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2026_fu_2056264_p2() {
    add_ln703_2026_fu_2056264_p2 = (!zext_ln203_221_fu_2048033_p1.read().is_01() || !sext_ln203_342_fu_2045570_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_221_fu_2048033_p1.read()) + sc_bigint<9>(sext_ln203_342_fu_2045570_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2027_fu_2056274_p2() {
    add_ln703_2027_fu_2056274_p2 = (!sext_ln703_1068_fu_2056260_p1.read().is_01() || !sext_ln703_1069_fu_2056270_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1068_fu_2056260_p1.read()) + sc_bigint<12>(sext_ln703_1069_fu_2056270_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_2028_fu_2056284_p2() {
    add_ln703_2028_fu_2056284_p2 = (!zext_ln703_357_fu_2056250_p1.read().is_01() || !sext_ln703_1070_fu_2056280_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_357_fu_2056250_p1.read()) + sc_bigint<13>(sext_ln703_1070_fu_2056280_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln703_fu_2035241_p2() {
    add_ln703_fu_2035241_p2 = (!trunc_ln_fu_2029508_p4.read().is_01() || !ap_const_lv10_270.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln_fu_2029508_p4.read()) + sc_bigint<10>(ap_const_lv10_270));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_10_fu_2040942_p2() {
    add_ln708_10_fu_2040942_p2 = (!zext_ln1118_758_fu_2040412_p1.read().is_01() || !zext_ln708_70_fu_2040938_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_758_fu_2040412_p1.read()) + sc_biguint<11>(zext_ln708_70_fu_2040938_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_11_fu_2044071_p2() {
    add_ln708_11_fu_2044071_p2 = (!zext_ln1118_860_fu_2043831_p1.read().is_01() || !zext_ln708_78_fu_2044067_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_860_fu_2043831_p1.read()) + sc_biguint<11>(zext_ln708_78_fu_2044067_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_12_fu_2046651_p2() {
    add_ln708_12_fu_2046651_p2 = (!zext_ln1118_923_fu_2046198_p1.read().is_01() || !zext_ln708_81_fu_2046647_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_923_fu_2046198_p1.read()) + sc_biguint<11>(zext_ln708_81_fu_2046647_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_13_fu_2049805_p2() {
    add_ln708_13_fu_2049805_p2 = (!zext_ln708_82_fu_2049798_p1.read().is_01() || !zext_ln708_83_fu_2049801_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_82_fu_2049798_p1.read()) + sc_biguint<11>(zext_ln708_83_fu_2049801_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_7_fu_2031636_p2() {
    add_ln708_7_fu_2031636_p2 = (!zext_ln1118_569_fu_2031226_p1.read().is_01() || !zext_ln708_49_fu_2031632_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_569_fu_2031226_p1.read()) + sc_biguint<11>(zext_ln708_49_fu_2031632_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_8_fu_2039498_p2() {
    add_ln708_8_fu_2039498_p2 = (!zext_ln1118_735_fu_2039411_p1.read().is_01() || !zext_ln1118_922_fu_2039440_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_735_fu_2039411_p1.read()) + sc_biguint<11>(zext_ln1118_922_fu_2039440_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_9_fu_2040246_p2() {
    add_ln708_9_fu_2040246_p2 = (!zext_ln1118_750_fu_2039992_p1.read().is_01() || !zext_ln708_64_fu_2040242_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_750_fu_2039992_p1.read()) + sc_biguint<11>(zext_ln708_64_fu_2040242_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_add_ln708_fu_2030847_p2() {
    add_ln708_fu_2030847_p2 = (!zext_ln1118_553_fu_2030661_p1.read().is_01() || !zext_ln708_44_fu_2030843_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_553_fu_2030661_p1.read()) + sc_biguint<11>(zext_ln708_44_fu_2030843_p1.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_condition_44() {
    ap_condition_44 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_condition_4455() {
    ap_condition_4455 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0));
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_idle_pp0_0to2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0_0to2 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to2 = ap_const_logic_0;
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_0_V_read1_phi_phi_fu_14950_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_0_V_read1_phi_phi_fu_14950_p4 = ap_phi_mux_data_0_V_read1_rewind_phi_fu_7768_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_0_V_read1_phi_phi_fu_14950_p4 = data_0_V_read.read();
    } else {
        ap_phi_mux_data_0_V_read1_phi_phi_fu_14950_p4 = ap_phi_reg_pp0_iter0_data_0_V_read1_phi_reg_14946.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_0_V_read1_rewind_phi_fu_7768_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_0_V_read1_rewind_phi_fu_7768_p6 = data_0_V_read1_phi_reg_14946.read();
    } else {
        ap_phi_mux_data_0_V_read1_rewind_phi_fu_7768_p6 = data_0_V_read1_rewind_reg_7764.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_100_V_read101_phi_phi_fu_16250_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_100_V_read101_phi_phi_fu_16250_p4 = ap_phi_mux_data_100_V_read101_rewind_phi_fu_9168_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_100_V_read101_phi_phi_fu_16250_p4 = data_100_V_read.read();
    } else {
        ap_phi_mux_data_100_V_read101_phi_phi_fu_16250_p4 = ap_phi_reg_pp0_iter0_data_100_V_read101_phi_reg_16246.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_100_V_read101_rewind_phi_fu_9168_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_100_V_read101_rewind_phi_fu_9168_p6 = data_100_V_read101_phi_reg_16246.read();
    } else {
        ap_phi_mux_data_100_V_read101_rewind_phi_fu_9168_p6 = data_100_V_read101_rewind_reg_9164.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_101_V_read102_phi_phi_fu_16263_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_101_V_read102_phi_phi_fu_16263_p4 = ap_phi_mux_data_101_V_read102_rewind_phi_fu_9182_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_101_V_read102_phi_phi_fu_16263_p4 = data_101_V_read.read();
    } else {
        ap_phi_mux_data_101_V_read102_phi_phi_fu_16263_p4 = ap_phi_reg_pp0_iter0_data_101_V_read102_phi_reg_16259.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_101_V_read102_rewind_phi_fu_9182_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_101_V_read102_rewind_phi_fu_9182_p6 = data_101_V_read102_phi_reg_16259.read();
    } else {
        ap_phi_mux_data_101_V_read102_rewind_phi_fu_9182_p6 = data_101_V_read102_rewind_reg_9178.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_102_V_read103_phi_phi_fu_16276_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_102_V_read103_phi_phi_fu_16276_p4 = ap_phi_mux_data_102_V_read103_rewind_phi_fu_9196_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_102_V_read103_phi_phi_fu_16276_p4 = data_102_V_read.read();
    } else {
        ap_phi_mux_data_102_V_read103_phi_phi_fu_16276_p4 = ap_phi_reg_pp0_iter0_data_102_V_read103_phi_reg_16272.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_102_V_read103_rewind_phi_fu_9196_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_102_V_read103_rewind_phi_fu_9196_p6 = data_102_V_read103_phi_reg_16272.read();
    } else {
        ap_phi_mux_data_102_V_read103_rewind_phi_fu_9196_p6 = data_102_V_read103_rewind_reg_9192.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_103_V_read104_phi_phi_fu_16289_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_103_V_read104_phi_phi_fu_16289_p4 = ap_phi_mux_data_103_V_read104_rewind_phi_fu_9210_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_103_V_read104_phi_phi_fu_16289_p4 = data_103_V_read.read();
    } else {
        ap_phi_mux_data_103_V_read104_phi_phi_fu_16289_p4 = ap_phi_reg_pp0_iter0_data_103_V_read104_phi_reg_16285.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_103_V_read104_rewind_phi_fu_9210_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_103_V_read104_rewind_phi_fu_9210_p6 = data_103_V_read104_phi_reg_16285.read();
    } else {
        ap_phi_mux_data_103_V_read104_rewind_phi_fu_9210_p6 = data_103_V_read104_rewind_reg_9206.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_104_V_read105_phi_phi_fu_16302_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_104_V_read105_phi_phi_fu_16302_p4 = ap_phi_mux_data_104_V_read105_rewind_phi_fu_9224_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_104_V_read105_phi_phi_fu_16302_p4 = data_104_V_read.read();
    } else {
        ap_phi_mux_data_104_V_read105_phi_phi_fu_16302_p4 = ap_phi_reg_pp0_iter0_data_104_V_read105_phi_reg_16298.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_104_V_read105_rewind_phi_fu_9224_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_104_V_read105_rewind_phi_fu_9224_p6 = data_104_V_read105_phi_reg_16298.read();
    } else {
        ap_phi_mux_data_104_V_read105_rewind_phi_fu_9224_p6 = data_104_V_read105_rewind_reg_9220.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_105_V_read106_phi_phi_fu_16315_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_105_V_read106_phi_phi_fu_16315_p4 = ap_phi_mux_data_105_V_read106_rewind_phi_fu_9238_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_105_V_read106_phi_phi_fu_16315_p4 = data_105_V_read.read();
    } else {
        ap_phi_mux_data_105_V_read106_phi_phi_fu_16315_p4 = ap_phi_reg_pp0_iter0_data_105_V_read106_phi_reg_16311.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_105_V_read106_rewind_phi_fu_9238_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_105_V_read106_rewind_phi_fu_9238_p6 = data_105_V_read106_phi_reg_16311.read();
    } else {
        ap_phi_mux_data_105_V_read106_rewind_phi_fu_9238_p6 = data_105_V_read106_rewind_reg_9234.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_106_V_read107_phi_phi_fu_16328_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_106_V_read107_phi_phi_fu_16328_p4 = ap_phi_mux_data_106_V_read107_rewind_phi_fu_9252_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_106_V_read107_phi_phi_fu_16328_p4 = data_106_V_read.read();
    } else {
        ap_phi_mux_data_106_V_read107_phi_phi_fu_16328_p4 = ap_phi_reg_pp0_iter0_data_106_V_read107_phi_reg_16324.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_106_V_read107_rewind_phi_fu_9252_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_106_V_read107_rewind_phi_fu_9252_p6 = data_106_V_read107_phi_reg_16324.read();
    } else {
        ap_phi_mux_data_106_V_read107_rewind_phi_fu_9252_p6 = data_106_V_read107_rewind_reg_9248.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_107_V_read108_phi_phi_fu_16341_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_107_V_read108_phi_phi_fu_16341_p4 = ap_phi_mux_data_107_V_read108_rewind_phi_fu_9266_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_107_V_read108_phi_phi_fu_16341_p4 = data_107_V_read.read();
    } else {
        ap_phi_mux_data_107_V_read108_phi_phi_fu_16341_p4 = ap_phi_reg_pp0_iter0_data_107_V_read108_phi_reg_16337.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_107_V_read108_rewind_phi_fu_9266_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_107_V_read108_rewind_phi_fu_9266_p6 = data_107_V_read108_phi_reg_16337.read();
    } else {
        ap_phi_mux_data_107_V_read108_rewind_phi_fu_9266_p6 = data_107_V_read108_rewind_reg_9262.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_108_V_read109_phi_phi_fu_16354_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_108_V_read109_phi_phi_fu_16354_p4 = ap_phi_mux_data_108_V_read109_rewind_phi_fu_9280_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_108_V_read109_phi_phi_fu_16354_p4 = data_108_V_read.read();
    } else {
        ap_phi_mux_data_108_V_read109_phi_phi_fu_16354_p4 = ap_phi_reg_pp0_iter0_data_108_V_read109_phi_reg_16350.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_108_V_read109_rewind_phi_fu_9280_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_108_V_read109_rewind_phi_fu_9280_p6 = data_108_V_read109_phi_reg_16350.read();
    } else {
        ap_phi_mux_data_108_V_read109_rewind_phi_fu_9280_p6 = data_108_V_read109_rewind_reg_9276.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_109_V_read110_phi_phi_fu_16367_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_109_V_read110_phi_phi_fu_16367_p4 = ap_phi_mux_data_109_V_read110_rewind_phi_fu_9294_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_109_V_read110_phi_phi_fu_16367_p4 = data_109_V_read.read();
    } else {
        ap_phi_mux_data_109_V_read110_phi_phi_fu_16367_p4 = ap_phi_reg_pp0_iter0_data_109_V_read110_phi_reg_16363.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_109_V_read110_rewind_phi_fu_9294_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_109_V_read110_rewind_phi_fu_9294_p6 = data_109_V_read110_phi_reg_16363.read();
    } else {
        ap_phi_mux_data_109_V_read110_rewind_phi_fu_9294_p6 = data_109_V_read110_rewind_reg_9290.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_10_V_read11_phi_phi_fu_15080_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_10_V_read11_phi_phi_fu_15080_p4 = ap_phi_mux_data_10_V_read11_rewind_phi_fu_7908_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_10_V_read11_phi_phi_fu_15080_p4 = data_10_V_read.read();
    } else {
        ap_phi_mux_data_10_V_read11_phi_phi_fu_15080_p4 = ap_phi_reg_pp0_iter0_data_10_V_read11_phi_reg_15076.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_10_V_read11_rewind_phi_fu_7908_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_10_V_read11_rewind_phi_fu_7908_p6 = data_10_V_read11_phi_reg_15076.read();
    } else {
        ap_phi_mux_data_10_V_read11_rewind_phi_fu_7908_p6 = data_10_V_read11_rewind_reg_7904.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_110_V_read111_phi_phi_fu_16380_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_110_V_read111_phi_phi_fu_16380_p4 = ap_phi_mux_data_110_V_read111_rewind_phi_fu_9308_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_110_V_read111_phi_phi_fu_16380_p4 = data_110_V_read.read();
    } else {
        ap_phi_mux_data_110_V_read111_phi_phi_fu_16380_p4 = ap_phi_reg_pp0_iter0_data_110_V_read111_phi_reg_16376.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_110_V_read111_rewind_phi_fu_9308_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_110_V_read111_rewind_phi_fu_9308_p6 = data_110_V_read111_phi_reg_16376.read();
    } else {
        ap_phi_mux_data_110_V_read111_rewind_phi_fu_9308_p6 = data_110_V_read111_rewind_reg_9304.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_111_V_read112_phi_phi_fu_16393_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_111_V_read112_phi_phi_fu_16393_p4 = ap_phi_mux_data_111_V_read112_rewind_phi_fu_9322_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_111_V_read112_phi_phi_fu_16393_p4 = data_111_V_read.read();
    } else {
        ap_phi_mux_data_111_V_read112_phi_phi_fu_16393_p4 = ap_phi_reg_pp0_iter0_data_111_V_read112_phi_reg_16389.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_111_V_read112_rewind_phi_fu_9322_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_111_V_read112_rewind_phi_fu_9322_p6 = data_111_V_read112_phi_reg_16389.read();
    } else {
        ap_phi_mux_data_111_V_read112_rewind_phi_fu_9322_p6 = data_111_V_read112_rewind_reg_9318.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_112_V_read113_phi_phi_fu_16406_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_112_V_read113_phi_phi_fu_16406_p4 = ap_phi_mux_data_112_V_read113_rewind_phi_fu_9336_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_112_V_read113_phi_phi_fu_16406_p4 = data_112_V_read.read();
    } else {
        ap_phi_mux_data_112_V_read113_phi_phi_fu_16406_p4 = ap_phi_reg_pp0_iter0_data_112_V_read113_phi_reg_16402.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_112_V_read113_rewind_phi_fu_9336_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_112_V_read113_rewind_phi_fu_9336_p6 = data_112_V_read113_phi_reg_16402.read();
    } else {
        ap_phi_mux_data_112_V_read113_rewind_phi_fu_9336_p6 = data_112_V_read113_rewind_reg_9332.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_113_V_read114_phi_phi_fu_16419_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_113_V_read114_phi_phi_fu_16419_p4 = ap_phi_mux_data_113_V_read114_rewind_phi_fu_9350_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_113_V_read114_phi_phi_fu_16419_p4 = data_113_V_read.read();
    } else {
        ap_phi_mux_data_113_V_read114_phi_phi_fu_16419_p4 = ap_phi_reg_pp0_iter0_data_113_V_read114_phi_reg_16415.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_113_V_read114_rewind_phi_fu_9350_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_113_V_read114_rewind_phi_fu_9350_p6 = data_113_V_read114_phi_reg_16415.read();
    } else {
        ap_phi_mux_data_113_V_read114_rewind_phi_fu_9350_p6 = data_113_V_read114_rewind_reg_9346.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_114_V_read115_phi_phi_fu_16432_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_114_V_read115_phi_phi_fu_16432_p4 = ap_phi_mux_data_114_V_read115_rewind_phi_fu_9364_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_114_V_read115_phi_phi_fu_16432_p4 = data_114_V_read.read();
    } else {
        ap_phi_mux_data_114_V_read115_phi_phi_fu_16432_p4 = ap_phi_reg_pp0_iter0_data_114_V_read115_phi_reg_16428.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_114_V_read115_rewind_phi_fu_9364_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_114_V_read115_rewind_phi_fu_9364_p6 = data_114_V_read115_phi_reg_16428.read();
    } else {
        ap_phi_mux_data_114_V_read115_rewind_phi_fu_9364_p6 = data_114_V_read115_rewind_reg_9360.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_115_V_read116_phi_phi_fu_16445_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_115_V_read116_phi_phi_fu_16445_p4 = ap_phi_mux_data_115_V_read116_rewind_phi_fu_9378_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_115_V_read116_phi_phi_fu_16445_p4 = data_115_V_read.read();
    } else {
        ap_phi_mux_data_115_V_read116_phi_phi_fu_16445_p4 = ap_phi_reg_pp0_iter0_data_115_V_read116_phi_reg_16441.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_115_V_read116_rewind_phi_fu_9378_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_115_V_read116_rewind_phi_fu_9378_p6 = data_115_V_read116_phi_reg_16441.read();
    } else {
        ap_phi_mux_data_115_V_read116_rewind_phi_fu_9378_p6 = data_115_V_read116_rewind_reg_9374.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_116_V_read117_phi_phi_fu_16458_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_116_V_read117_phi_phi_fu_16458_p4 = ap_phi_mux_data_116_V_read117_rewind_phi_fu_9392_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_116_V_read117_phi_phi_fu_16458_p4 = data_116_V_read.read();
    } else {
        ap_phi_mux_data_116_V_read117_phi_phi_fu_16458_p4 = ap_phi_reg_pp0_iter0_data_116_V_read117_phi_reg_16454.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_116_V_read117_rewind_phi_fu_9392_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_116_V_read117_rewind_phi_fu_9392_p6 = data_116_V_read117_phi_reg_16454.read();
    } else {
        ap_phi_mux_data_116_V_read117_rewind_phi_fu_9392_p6 = data_116_V_read117_rewind_reg_9388.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_117_V_read118_phi_phi_fu_16471_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_117_V_read118_phi_phi_fu_16471_p4 = ap_phi_mux_data_117_V_read118_rewind_phi_fu_9406_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_117_V_read118_phi_phi_fu_16471_p4 = data_117_V_read.read();
    } else {
        ap_phi_mux_data_117_V_read118_phi_phi_fu_16471_p4 = ap_phi_reg_pp0_iter0_data_117_V_read118_phi_reg_16467.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_117_V_read118_rewind_phi_fu_9406_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_117_V_read118_rewind_phi_fu_9406_p6 = data_117_V_read118_phi_reg_16467.read();
    } else {
        ap_phi_mux_data_117_V_read118_rewind_phi_fu_9406_p6 = data_117_V_read118_rewind_reg_9402.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_118_V_read119_phi_phi_fu_16484_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_118_V_read119_phi_phi_fu_16484_p4 = ap_phi_mux_data_118_V_read119_rewind_phi_fu_9420_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_118_V_read119_phi_phi_fu_16484_p4 = data_118_V_read.read();
    } else {
        ap_phi_mux_data_118_V_read119_phi_phi_fu_16484_p4 = ap_phi_reg_pp0_iter0_data_118_V_read119_phi_reg_16480.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_118_V_read119_rewind_phi_fu_9420_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_118_V_read119_rewind_phi_fu_9420_p6 = data_118_V_read119_phi_reg_16480.read();
    } else {
        ap_phi_mux_data_118_V_read119_rewind_phi_fu_9420_p6 = data_118_V_read119_rewind_reg_9416.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_119_V_read120_phi_phi_fu_16497_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_119_V_read120_phi_phi_fu_16497_p4 = ap_phi_mux_data_119_V_read120_rewind_phi_fu_9434_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_119_V_read120_phi_phi_fu_16497_p4 = data_119_V_read.read();
    } else {
        ap_phi_mux_data_119_V_read120_phi_phi_fu_16497_p4 = ap_phi_reg_pp0_iter0_data_119_V_read120_phi_reg_16493.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_119_V_read120_rewind_phi_fu_9434_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_119_V_read120_rewind_phi_fu_9434_p6 = data_119_V_read120_phi_reg_16493.read();
    } else {
        ap_phi_mux_data_119_V_read120_rewind_phi_fu_9434_p6 = data_119_V_read120_rewind_reg_9430.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_11_V_read12_phi_phi_fu_15093_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_11_V_read12_phi_phi_fu_15093_p4 = ap_phi_mux_data_11_V_read12_rewind_phi_fu_7922_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_11_V_read12_phi_phi_fu_15093_p4 = data_11_V_read.read();
    } else {
        ap_phi_mux_data_11_V_read12_phi_phi_fu_15093_p4 = ap_phi_reg_pp0_iter0_data_11_V_read12_phi_reg_15089.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_11_V_read12_rewind_phi_fu_7922_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_11_V_read12_rewind_phi_fu_7922_p6 = data_11_V_read12_phi_reg_15089.read();
    } else {
        ap_phi_mux_data_11_V_read12_rewind_phi_fu_7922_p6 = data_11_V_read12_rewind_reg_7918.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_120_V_read121_phi_phi_fu_16510_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_120_V_read121_phi_phi_fu_16510_p4 = ap_phi_mux_data_120_V_read121_rewind_phi_fu_9448_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_120_V_read121_phi_phi_fu_16510_p4 = data_120_V_read.read();
    } else {
        ap_phi_mux_data_120_V_read121_phi_phi_fu_16510_p4 = ap_phi_reg_pp0_iter0_data_120_V_read121_phi_reg_16506.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_120_V_read121_rewind_phi_fu_9448_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_120_V_read121_rewind_phi_fu_9448_p6 = data_120_V_read121_phi_reg_16506.read();
    } else {
        ap_phi_mux_data_120_V_read121_rewind_phi_fu_9448_p6 = data_120_V_read121_rewind_reg_9444.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_121_V_read122_phi_phi_fu_16523_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_121_V_read122_phi_phi_fu_16523_p4 = ap_phi_mux_data_121_V_read122_rewind_phi_fu_9462_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_121_V_read122_phi_phi_fu_16523_p4 = data_121_V_read.read();
    } else {
        ap_phi_mux_data_121_V_read122_phi_phi_fu_16523_p4 = ap_phi_reg_pp0_iter0_data_121_V_read122_phi_reg_16519.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_121_V_read122_rewind_phi_fu_9462_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_121_V_read122_rewind_phi_fu_9462_p6 = data_121_V_read122_phi_reg_16519.read();
    } else {
        ap_phi_mux_data_121_V_read122_rewind_phi_fu_9462_p6 = data_121_V_read122_rewind_reg_9458.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_122_V_read123_phi_phi_fu_16536_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_122_V_read123_phi_phi_fu_16536_p4 = ap_phi_mux_data_122_V_read123_rewind_phi_fu_9476_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_122_V_read123_phi_phi_fu_16536_p4 = data_122_V_read.read();
    } else {
        ap_phi_mux_data_122_V_read123_phi_phi_fu_16536_p4 = ap_phi_reg_pp0_iter0_data_122_V_read123_phi_reg_16532.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_122_V_read123_rewind_phi_fu_9476_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_122_V_read123_rewind_phi_fu_9476_p6 = data_122_V_read123_phi_reg_16532.read();
    } else {
        ap_phi_mux_data_122_V_read123_rewind_phi_fu_9476_p6 = data_122_V_read123_rewind_reg_9472.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_123_V_read124_phi_phi_fu_16549_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_123_V_read124_phi_phi_fu_16549_p4 = ap_phi_mux_data_123_V_read124_rewind_phi_fu_9490_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_123_V_read124_phi_phi_fu_16549_p4 = data_123_V_read.read();
    } else {
        ap_phi_mux_data_123_V_read124_phi_phi_fu_16549_p4 = ap_phi_reg_pp0_iter0_data_123_V_read124_phi_reg_16545.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_123_V_read124_rewind_phi_fu_9490_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_123_V_read124_rewind_phi_fu_9490_p6 = data_123_V_read124_phi_reg_16545.read();
    } else {
        ap_phi_mux_data_123_V_read124_rewind_phi_fu_9490_p6 = data_123_V_read124_rewind_reg_9486.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_124_V_read125_phi_phi_fu_16562_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_124_V_read125_phi_phi_fu_16562_p4 = ap_phi_mux_data_124_V_read125_rewind_phi_fu_9504_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_124_V_read125_phi_phi_fu_16562_p4 = data_124_V_read.read();
    } else {
        ap_phi_mux_data_124_V_read125_phi_phi_fu_16562_p4 = ap_phi_reg_pp0_iter0_data_124_V_read125_phi_reg_16558.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_124_V_read125_rewind_phi_fu_9504_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_124_V_read125_rewind_phi_fu_9504_p6 = data_124_V_read125_phi_reg_16558.read();
    } else {
        ap_phi_mux_data_124_V_read125_rewind_phi_fu_9504_p6 = data_124_V_read125_rewind_reg_9500.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_125_V_read126_phi_phi_fu_16575_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_125_V_read126_phi_phi_fu_16575_p4 = ap_phi_mux_data_125_V_read126_rewind_phi_fu_9518_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_125_V_read126_phi_phi_fu_16575_p4 = data_125_V_read.read();
    } else {
        ap_phi_mux_data_125_V_read126_phi_phi_fu_16575_p4 = ap_phi_reg_pp0_iter0_data_125_V_read126_phi_reg_16571.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_125_V_read126_rewind_phi_fu_9518_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_125_V_read126_rewind_phi_fu_9518_p6 = data_125_V_read126_phi_reg_16571.read();
    } else {
        ap_phi_mux_data_125_V_read126_rewind_phi_fu_9518_p6 = data_125_V_read126_rewind_reg_9514.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_126_V_read127_phi_phi_fu_16588_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_126_V_read127_phi_phi_fu_16588_p4 = ap_phi_mux_data_126_V_read127_rewind_phi_fu_9532_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_126_V_read127_phi_phi_fu_16588_p4 = data_126_V_read.read();
    } else {
        ap_phi_mux_data_126_V_read127_phi_phi_fu_16588_p4 = ap_phi_reg_pp0_iter0_data_126_V_read127_phi_reg_16584.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_126_V_read127_rewind_phi_fu_9532_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_126_V_read127_rewind_phi_fu_9532_p6 = data_126_V_read127_phi_reg_16584.read();
    } else {
        ap_phi_mux_data_126_V_read127_rewind_phi_fu_9532_p6 = data_126_V_read127_rewind_reg_9528.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_127_V_read128_phi_phi_fu_16601_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_127_V_read128_phi_phi_fu_16601_p4 = ap_phi_mux_data_127_V_read128_rewind_phi_fu_9546_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_127_V_read128_phi_phi_fu_16601_p4 = data_127_V_read.read();
    } else {
        ap_phi_mux_data_127_V_read128_phi_phi_fu_16601_p4 = ap_phi_reg_pp0_iter0_data_127_V_read128_phi_reg_16597.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_127_V_read128_rewind_phi_fu_9546_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_127_V_read128_rewind_phi_fu_9546_p6 = data_127_V_read128_phi_reg_16597.read();
    } else {
        ap_phi_mux_data_127_V_read128_rewind_phi_fu_9546_p6 = data_127_V_read128_rewind_reg_9542.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_128_V_read129_phi_phi_fu_16614_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_128_V_read129_phi_phi_fu_16614_p4 = ap_phi_mux_data_128_V_read129_rewind_phi_fu_9560_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_128_V_read129_phi_phi_fu_16614_p4 = data_128_V_read.read();
    } else {
        ap_phi_mux_data_128_V_read129_phi_phi_fu_16614_p4 = ap_phi_reg_pp0_iter0_data_128_V_read129_phi_reg_16610.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_128_V_read129_rewind_phi_fu_9560_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_128_V_read129_rewind_phi_fu_9560_p6 = data_128_V_read129_phi_reg_16610.read();
    } else {
        ap_phi_mux_data_128_V_read129_rewind_phi_fu_9560_p6 = data_128_V_read129_rewind_reg_9556.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_129_V_read130_phi_phi_fu_16627_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_129_V_read130_phi_phi_fu_16627_p4 = ap_phi_mux_data_129_V_read130_rewind_phi_fu_9574_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_129_V_read130_phi_phi_fu_16627_p4 = data_129_V_read.read();
    } else {
        ap_phi_mux_data_129_V_read130_phi_phi_fu_16627_p4 = ap_phi_reg_pp0_iter0_data_129_V_read130_phi_reg_16623.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_129_V_read130_rewind_phi_fu_9574_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_129_V_read130_rewind_phi_fu_9574_p6 = data_129_V_read130_phi_reg_16623.read();
    } else {
        ap_phi_mux_data_129_V_read130_rewind_phi_fu_9574_p6 = data_129_V_read130_rewind_reg_9570.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_12_V_read13_phi_phi_fu_15106_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_12_V_read13_phi_phi_fu_15106_p4 = ap_phi_mux_data_12_V_read13_rewind_phi_fu_7936_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_12_V_read13_phi_phi_fu_15106_p4 = data_12_V_read.read();
    } else {
        ap_phi_mux_data_12_V_read13_phi_phi_fu_15106_p4 = ap_phi_reg_pp0_iter0_data_12_V_read13_phi_reg_15102.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_12_V_read13_rewind_phi_fu_7936_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_12_V_read13_rewind_phi_fu_7936_p6 = data_12_V_read13_phi_reg_15102.read();
    } else {
        ap_phi_mux_data_12_V_read13_rewind_phi_fu_7936_p6 = data_12_V_read13_rewind_reg_7932.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_130_V_read131_phi_phi_fu_16640_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_130_V_read131_phi_phi_fu_16640_p4 = ap_phi_mux_data_130_V_read131_rewind_phi_fu_9588_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_130_V_read131_phi_phi_fu_16640_p4 = data_130_V_read.read();
    } else {
        ap_phi_mux_data_130_V_read131_phi_phi_fu_16640_p4 = ap_phi_reg_pp0_iter0_data_130_V_read131_phi_reg_16636.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_130_V_read131_rewind_phi_fu_9588_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_130_V_read131_rewind_phi_fu_9588_p6 = data_130_V_read131_phi_reg_16636.read();
    } else {
        ap_phi_mux_data_130_V_read131_rewind_phi_fu_9588_p6 = data_130_V_read131_rewind_reg_9584.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_131_V_read132_phi_phi_fu_16653_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_131_V_read132_phi_phi_fu_16653_p4 = ap_phi_mux_data_131_V_read132_rewind_phi_fu_9602_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_131_V_read132_phi_phi_fu_16653_p4 = data_131_V_read.read();
    } else {
        ap_phi_mux_data_131_V_read132_phi_phi_fu_16653_p4 = ap_phi_reg_pp0_iter0_data_131_V_read132_phi_reg_16649.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_131_V_read132_rewind_phi_fu_9602_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_131_V_read132_rewind_phi_fu_9602_p6 = data_131_V_read132_phi_reg_16649.read();
    } else {
        ap_phi_mux_data_131_V_read132_rewind_phi_fu_9602_p6 = data_131_V_read132_rewind_reg_9598.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_132_V_read133_phi_phi_fu_16666_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_132_V_read133_phi_phi_fu_16666_p4 = ap_phi_mux_data_132_V_read133_rewind_phi_fu_9616_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_132_V_read133_phi_phi_fu_16666_p4 = data_132_V_read.read();
    } else {
        ap_phi_mux_data_132_V_read133_phi_phi_fu_16666_p4 = ap_phi_reg_pp0_iter0_data_132_V_read133_phi_reg_16662.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_132_V_read133_rewind_phi_fu_9616_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_132_V_read133_rewind_phi_fu_9616_p6 = data_132_V_read133_phi_reg_16662.read();
    } else {
        ap_phi_mux_data_132_V_read133_rewind_phi_fu_9616_p6 = data_132_V_read133_rewind_reg_9612.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_133_V_read134_phi_phi_fu_16679_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_133_V_read134_phi_phi_fu_16679_p4 = ap_phi_mux_data_133_V_read134_rewind_phi_fu_9630_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_133_V_read134_phi_phi_fu_16679_p4 = data_133_V_read.read();
    } else {
        ap_phi_mux_data_133_V_read134_phi_phi_fu_16679_p4 = ap_phi_reg_pp0_iter0_data_133_V_read134_phi_reg_16675.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_133_V_read134_rewind_phi_fu_9630_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_133_V_read134_rewind_phi_fu_9630_p6 = data_133_V_read134_phi_reg_16675.read();
    } else {
        ap_phi_mux_data_133_V_read134_rewind_phi_fu_9630_p6 = data_133_V_read134_rewind_reg_9626.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_134_V_read135_phi_phi_fu_16692_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_134_V_read135_phi_phi_fu_16692_p4 = ap_phi_mux_data_134_V_read135_rewind_phi_fu_9644_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_134_V_read135_phi_phi_fu_16692_p4 = data_134_V_read.read();
    } else {
        ap_phi_mux_data_134_V_read135_phi_phi_fu_16692_p4 = ap_phi_reg_pp0_iter0_data_134_V_read135_phi_reg_16688.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_134_V_read135_rewind_phi_fu_9644_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_134_V_read135_rewind_phi_fu_9644_p6 = data_134_V_read135_phi_reg_16688.read();
    } else {
        ap_phi_mux_data_134_V_read135_rewind_phi_fu_9644_p6 = data_134_V_read135_rewind_reg_9640.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_135_V_read136_phi_phi_fu_16705_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_135_V_read136_phi_phi_fu_16705_p4 = ap_phi_mux_data_135_V_read136_rewind_phi_fu_9658_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_135_V_read136_phi_phi_fu_16705_p4 = data_135_V_read.read();
    } else {
        ap_phi_mux_data_135_V_read136_phi_phi_fu_16705_p4 = ap_phi_reg_pp0_iter0_data_135_V_read136_phi_reg_16701.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_135_V_read136_rewind_phi_fu_9658_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_135_V_read136_rewind_phi_fu_9658_p6 = data_135_V_read136_phi_reg_16701.read();
    } else {
        ap_phi_mux_data_135_V_read136_rewind_phi_fu_9658_p6 = data_135_V_read136_rewind_reg_9654.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_136_V_read137_phi_phi_fu_16718_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_136_V_read137_phi_phi_fu_16718_p4 = ap_phi_mux_data_136_V_read137_rewind_phi_fu_9672_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_136_V_read137_phi_phi_fu_16718_p4 = data_136_V_read.read();
    } else {
        ap_phi_mux_data_136_V_read137_phi_phi_fu_16718_p4 = ap_phi_reg_pp0_iter0_data_136_V_read137_phi_reg_16714.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_136_V_read137_rewind_phi_fu_9672_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_136_V_read137_rewind_phi_fu_9672_p6 = data_136_V_read137_phi_reg_16714.read();
    } else {
        ap_phi_mux_data_136_V_read137_rewind_phi_fu_9672_p6 = data_136_V_read137_rewind_reg_9668.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_137_V_read138_phi_phi_fu_16731_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_137_V_read138_phi_phi_fu_16731_p4 = ap_phi_mux_data_137_V_read138_rewind_phi_fu_9686_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_137_V_read138_phi_phi_fu_16731_p4 = data_137_V_read.read();
    } else {
        ap_phi_mux_data_137_V_read138_phi_phi_fu_16731_p4 = ap_phi_reg_pp0_iter0_data_137_V_read138_phi_reg_16727.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_137_V_read138_rewind_phi_fu_9686_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_137_V_read138_rewind_phi_fu_9686_p6 = data_137_V_read138_phi_reg_16727.read();
    } else {
        ap_phi_mux_data_137_V_read138_rewind_phi_fu_9686_p6 = data_137_V_read138_rewind_reg_9682.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_138_V_read139_phi_phi_fu_16744_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_138_V_read139_phi_phi_fu_16744_p4 = ap_phi_mux_data_138_V_read139_rewind_phi_fu_9700_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_138_V_read139_phi_phi_fu_16744_p4 = data_138_V_read.read();
    } else {
        ap_phi_mux_data_138_V_read139_phi_phi_fu_16744_p4 = ap_phi_reg_pp0_iter0_data_138_V_read139_phi_reg_16740.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_138_V_read139_rewind_phi_fu_9700_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_138_V_read139_rewind_phi_fu_9700_p6 = data_138_V_read139_phi_reg_16740.read();
    } else {
        ap_phi_mux_data_138_V_read139_rewind_phi_fu_9700_p6 = data_138_V_read139_rewind_reg_9696.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_139_V_read140_phi_phi_fu_16757_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_139_V_read140_phi_phi_fu_16757_p4 = ap_phi_mux_data_139_V_read140_rewind_phi_fu_9714_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_139_V_read140_phi_phi_fu_16757_p4 = data_139_V_read.read();
    } else {
        ap_phi_mux_data_139_V_read140_phi_phi_fu_16757_p4 = ap_phi_reg_pp0_iter0_data_139_V_read140_phi_reg_16753.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_139_V_read140_rewind_phi_fu_9714_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_139_V_read140_rewind_phi_fu_9714_p6 = data_139_V_read140_phi_reg_16753.read();
    } else {
        ap_phi_mux_data_139_V_read140_rewind_phi_fu_9714_p6 = data_139_V_read140_rewind_reg_9710.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_13_V_read14_phi_phi_fu_15119_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_13_V_read14_phi_phi_fu_15119_p4 = ap_phi_mux_data_13_V_read14_rewind_phi_fu_7950_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_13_V_read14_phi_phi_fu_15119_p4 = data_13_V_read.read();
    } else {
        ap_phi_mux_data_13_V_read14_phi_phi_fu_15119_p4 = ap_phi_reg_pp0_iter0_data_13_V_read14_phi_reg_15115.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_13_V_read14_rewind_phi_fu_7950_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_13_V_read14_rewind_phi_fu_7950_p6 = data_13_V_read14_phi_reg_15115.read();
    } else {
        ap_phi_mux_data_13_V_read14_rewind_phi_fu_7950_p6 = data_13_V_read14_rewind_reg_7946.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_140_V_read141_phi_phi_fu_16770_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_140_V_read141_phi_phi_fu_16770_p4 = ap_phi_mux_data_140_V_read141_rewind_phi_fu_9728_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_140_V_read141_phi_phi_fu_16770_p4 = data_140_V_read.read();
    } else {
        ap_phi_mux_data_140_V_read141_phi_phi_fu_16770_p4 = ap_phi_reg_pp0_iter0_data_140_V_read141_phi_reg_16766.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_140_V_read141_rewind_phi_fu_9728_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_140_V_read141_rewind_phi_fu_9728_p6 = data_140_V_read141_phi_reg_16766.read();
    } else {
        ap_phi_mux_data_140_V_read141_rewind_phi_fu_9728_p6 = data_140_V_read141_rewind_reg_9724.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_141_V_read142_phi_phi_fu_16783_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_141_V_read142_phi_phi_fu_16783_p4 = ap_phi_mux_data_141_V_read142_rewind_phi_fu_9742_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_141_V_read142_phi_phi_fu_16783_p4 = data_141_V_read.read();
    } else {
        ap_phi_mux_data_141_V_read142_phi_phi_fu_16783_p4 = ap_phi_reg_pp0_iter0_data_141_V_read142_phi_reg_16779.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_141_V_read142_rewind_phi_fu_9742_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_141_V_read142_rewind_phi_fu_9742_p6 = data_141_V_read142_phi_reg_16779.read();
    } else {
        ap_phi_mux_data_141_V_read142_rewind_phi_fu_9742_p6 = data_141_V_read142_rewind_reg_9738.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_142_V_read143_phi_phi_fu_16796_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_142_V_read143_phi_phi_fu_16796_p4 = ap_phi_mux_data_142_V_read143_rewind_phi_fu_9756_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_142_V_read143_phi_phi_fu_16796_p4 = data_142_V_read.read();
    } else {
        ap_phi_mux_data_142_V_read143_phi_phi_fu_16796_p4 = ap_phi_reg_pp0_iter0_data_142_V_read143_phi_reg_16792.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_142_V_read143_rewind_phi_fu_9756_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_142_V_read143_rewind_phi_fu_9756_p6 = data_142_V_read143_phi_reg_16792.read();
    } else {
        ap_phi_mux_data_142_V_read143_rewind_phi_fu_9756_p6 = data_142_V_read143_rewind_reg_9752.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_143_V_read144_phi_phi_fu_16809_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_143_V_read144_phi_phi_fu_16809_p4 = ap_phi_mux_data_143_V_read144_rewind_phi_fu_9770_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_143_V_read144_phi_phi_fu_16809_p4 = data_143_V_read.read();
    } else {
        ap_phi_mux_data_143_V_read144_phi_phi_fu_16809_p4 = ap_phi_reg_pp0_iter0_data_143_V_read144_phi_reg_16805.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_143_V_read144_rewind_phi_fu_9770_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_143_V_read144_rewind_phi_fu_9770_p6 = data_143_V_read144_phi_reg_16805.read();
    } else {
        ap_phi_mux_data_143_V_read144_rewind_phi_fu_9770_p6 = data_143_V_read144_rewind_reg_9766.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_144_V_read145_phi_phi_fu_16822_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_144_V_read145_phi_phi_fu_16822_p4 = ap_phi_mux_data_144_V_read145_rewind_phi_fu_9784_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_144_V_read145_phi_phi_fu_16822_p4 = data_144_V_read.read();
    } else {
        ap_phi_mux_data_144_V_read145_phi_phi_fu_16822_p4 = ap_phi_reg_pp0_iter0_data_144_V_read145_phi_reg_16818.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_144_V_read145_rewind_phi_fu_9784_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_144_V_read145_rewind_phi_fu_9784_p6 = data_144_V_read145_phi_reg_16818.read();
    } else {
        ap_phi_mux_data_144_V_read145_rewind_phi_fu_9784_p6 = data_144_V_read145_rewind_reg_9780.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_145_V_read146_phi_phi_fu_16835_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_145_V_read146_phi_phi_fu_16835_p4 = ap_phi_mux_data_145_V_read146_rewind_phi_fu_9798_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_145_V_read146_phi_phi_fu_16835_p4 = data_145_V_read.read();
    } else {
        ap_phi_mux_data_145_V_read146_phi_phi_fu_16835_p4 = ap_phi_reg_pp0_iter0_data_145_V_read146_phi_reg_16831.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_145_V_read146_rewind_phi_fu_9798_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_145_V_read146_rewind_phi_fu_9798_p6 = data_145_V_read146_phi_reg_16831.read();
    } else {
        ap_phi_mux_data_145_V_read146_rewind_phi_fu_9798_p6 = data_145_V_read146_rewind_reg_9794.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_146_V_read147_phi_phi_fu_16848_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_146_V_read147_phi_phi_fu_16848_p4 = ap_phi_mux_data_146_V_read147_rewind_phi_fu_9812_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_146_V_read147_phi_phi_fu_16848_p4 = data_146_V_read.read();
    } else {
        ap_phi_mux_data_146_V_read147_phi_phi_fu_16848_p4 = ap_phi_reg_pp0_iter0_data_146_V_read147_phi_reg_16844.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_146_V_read147_rewind_phi_fu_9812_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_146_V_read147_rewind_phi_fu_9812_p6 = data_146_V_read147_phi_reg_16844.read();
    } else {
        ap_phi_mux_data_146_V_read147_rewind_phi_fu_9812_p6 = data_146_V_read147_rewind_reg_9808.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_147_V_read148_phi_phi_fu_16861_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_147_V_read148_phi_phi_fu_16861_p4 = ap_phi_mux_data_147_V_read148_rewind_phi_fu_9826_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_147_V_read148_phi_phi_fu_16861_p4 = data_147_V_read.read();
    } else {
        ap_phi_mux_data_147_V_read148_phi_phi_fu_16861_p4 = ap_phi_reg_pp0_iter0_data_147_V_read148_phi_reg_16857.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_147_V_read148_rewind_phi_fu_9826_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_147_V_read148_rewind_phi_fu_9826_p6 = data_147_V_read148_phi_reg_16857.read();
    } else {
        ap_phi_mux_data_147_V_read148_rewind_phi_fu_9826_p6 = data_147_V_read148_rewind_reg_9822.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_148_V_read149_phi_phi_fu_16874_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_148_V_read149_phi_phi_fu_16874_p4 = ap_phi_mux_data_148_V_read149_rewind_phi_fu_9840_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_148_V_read149_phi_phi_fu_16874_p4 = data_148_V_read.read();
    } else {
        ap_phi_mux_data_148_V_read149_phi_phi_fu_16874_p4 = ap_phi_reg_pp0_iter0_data_148_V_read149_phi_reg_16870.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_148_V_read149_rewind_phi_fu_9840_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_148_V_read149_rewind_phi_fu_9840_p6 = data_148_V_read149_phi_reg_16870.read();
    } else {
        ap_phi_mux_data_148_V_read149_rewind_phi_fu_9840_p6 = data_148_V_read149_rewind_reg_9836.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_149_V_read150_phi_phi_fu_16887_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_149_V_read150_phi_phi_fu_16887_p4 = ap_phi_mux_data_149_V_read150_rewind_phi_fu_9854_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_149_V_read150_phi_phi_fu_16887_p4 = data_149_V_read.read();
    } else {
        ap_phi_mux_data_149_V_read150_phi_phi_fu_16887_p4 = ap_phi_reg_pp0_iter0_data_149_V_read150_phi_reg_16883.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_149_V_read150_rewind_phi_fu_9854_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_149_V_read150_rewind_phi_fu_9854_p6 = data_149_V_read150_phi_reg_16883.read();
    } else {
        ap_phi_mux_data_149_V_read150_rewind_phi_fu_9854_p6 = data_149_V_read150_rewind_reg_9850.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_14_V_read15_phi_phi_fu_15132_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_14_V_read15_phi_phi_fu_15132_p4 = ap_phi_mux_data_14_V_read15_rewind_phi_fu_7964_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_14_V_read15_phi_phi_fu_15132_p4 = data_14_V_read.read();
    } else {
        ap_phi_mux_data_14_V_read15_phi_phi_fu_15132_p4 = ap_phi_reg_pp0_iter0_data_14_V_read15_phi_reg_15128.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_14_V_read15_rewind_phi_fu_7964_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_14_V_read15_rewind_phi_fu_7964_p6 = data_14_V_read15_phi_reg_15128.read();
    } else {
        ap_phi_mux_data_14_V_read15_rewind_phi_fu_7964_p6 = data_14_V_read15_rewind_reg_7960.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_150_V_read151_phi_phi_fu_16900_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_150_V_read151_phi_phi_fu_16900_p4 = ap_phi_mux_data_150_V_read151_rewind_phi_fu_9868_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_150_V_read151_phi_phi_fu_16900_p4 = data_150_V_read.read();
    } else {
        ap_phi_mux_data_150_V_read151_phi_phi_fu_16900_p4 = ap_phi_reg_pp0_iter0_data_150_V_read151_phi_reg_16896.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_150_V_read151_rewind_phi_fu_9868_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_150_V_read151_rewind_phi_fu_9868_p6 = data_150_V_read151_phi_reg_16896.read();
    } else {
        ap_phi_mux_data_150_V_read151_rewind_phi_fu_9868_p6 = data_150_V_read151_rewind_reg_9864.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_151_V_read152_phi_phi_fu_16913_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_151_V_read152_phi_phi_fu_16913_p4 = ap_phi_mux_data_151_V_read152_rewind_phi_fu_9882_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_151_V_read152_phi_phi_fu_16913_p4 = data_151_V_read.read();
    } else {
        ap_phi_mux_data_151_V_read152_phi_phi_fu_16913_p4 = ap_phi_reg_pp0_iter0_data_151_V_read152_phi_reg_16909.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_151_V_read152_rewind_phi_fu_9882_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_151_V_read152_rewind_phi_fu_9882_p6 = data_151_V_read152_phi_reg_16909.read();
    } else {
        ap_phi_mux_data_151_V_read152_rewind_phi_fu_9882_p6 = data_151_V_read152_rewind_reg_9878.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_152_V_read153_phi_phi_fu_16926_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_152_V_read153_phi_phi_fu_16926_p4 = ap_phi_mux_data_152_V_read153_rewind_phi_fu_9896_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_152_V_read153_phi_phi_fu_16926_p4 = data_152_V_read.read();
    } else {
        ap_phi_mux_data_152_V_read153_phi_phi_fu_16926_p4 = ap_phi_reg_pp0_iter0_data_152_V_read153_phi_reg_16922.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_152_V_read153_rewind_phi_fu_9896_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_152_V_read153_rewind_phi_fu_9896_p6 = data_152_V_read153_phi_reg_16922.read();
    } else {
        ap_phi_mux_data_152_V_read153_rewind_phi_fu_9896_p6 = data_152_V_read153_rewind_reg_9892.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_153_V_read154_phi_phi_fu_16939_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_153_V_read154_phi_phi_fu_16939_p4 = ap_phi_mux_data_153_V_read154_rewind_phi_fu_9910_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_153_V_read154_phi_phi_fu_16939_p4 = data_153_V_read.read();
    } else {
        ap_phi_mux_data_153_V_read154_phi_phi_fu_16939_p4 = ap_phi_reg_pp0_iter0_data_153_V_read154_phi_reg_16935.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_153_V_read154_rewind_phi_fu_9910_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_153_V_read154_rewind_phi_fu_9910_p6 = data_153_V_read154_phi_reg_16935.read();
    } else {
        ap_phi_mux_data_153_V_read154_rewind_phi_fu_9910_p6 = data_153_V_read154_rewind_reg_9906.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_154_V_read155_phi_phi_fu_16952_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_154_V_read155_phi_phi_fu_16952_p4 = ap_phi_mux_data_154_V_read155_rewind_phi_fu_9924_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_154_V_read155_phi_phi_fu_16952_p4 = data_154_V_read.read();
    } else {
        ap_phi_mux_data_154_V_read155_phi_phi_fu_16952_p4 = ap_phi_reg_pp0_iter0_data_154_V_read155_phi_reg_16948.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_154_V_read155_rewind_phi_fu_9924_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_154_V_read155_rewind_phi_fu_9924_p6 = data_154_V_read155_phi_reg_16948.read();
    } else {
        ap_phi_mux_data_154_V_read155_rewind_phi_fu_9924_p6 = data_154_V_read155_rewind_reg_9920.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_155_V_read156_phi_phi_fu_16965_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_155_V_read156_phi_phi_fu_16965_p4 = ap_phi_mux_data_155_V_read156_rewind_phi_fu_9938_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_155_V_read156_phi_phi_fu_16965_p4 = data_155_V_read.read();
    } else {
        ap_phi_mux_data_155_V_read156_phi_phi_fu_16965_p4 = ap_phi_reg_pp0_iter0_data_155_V_read156_phi_reg_16961.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_155_V_read156_rewind_phi_fu_9938_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_155_V_read156_rewind_phi_fu_9938_p6 = data_155_V_read156_phi_reg_16961.read();
    } else {
        ap_phi_mux_data_155_V_read156_rewind_phi_fu_9938_p6 = data_155_V_read156_rewind_reg_9934.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_156_V_read157_phi_phi_fu_16978_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_156_V_read157_phi_phi_fu_16978_p4 = ap_phi_mux_data_156_V_read157_rewind_phi_fu_9952_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_156_V_read157_phi_phi_fu_16978_p4 = data_156_V_read.read();
    } else {
        ap_phi_mux_data_156_V_read157_phi_phi_fu_16978_p4 = ap_phi_reg_pp0_iter0_data_156_V_read157_phi_reg_16974.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_156_V_read157_rewind_phi_fu_9952_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_156_V_read157_rewind_phi_fu_9952_p6 = data_156_V_read157_phi_reg_16974.read();
    } else {
        ap_phi_mux_data_156_V_read157_rewind_phi_fu_9952_p6 = data_156_V_read157_rewind_reg_9948.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_157_V_read158_phi_phi_fu_16991_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_157_V_read158_phi_phi_fu_16991_p4 = ap_phi_mux_data_157_V_read158_rewind_phi_fu_9966_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_157_V_read158_phi_phi_fu_16991_p4 = data_157_V_read.read();
    } else {
        ap_phi_mux_data_157_V_read158_phi_phi_fu_16991_p4 = ap_phi_reg_pp0_iter0_data_157_V_read158_phi_reg_16987.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_157_V_read158_rewind_phi_fu_9966_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_157_V_read158_rewind_phi_fu_9966_p6 = data_157_V_read158_phi_reg_16987.read();
    } else {
        ap_phi_mux_data_157_V_read158_rewind_phi_fu_9966_p6 = data_157_V_read158_rewind_reg_9962.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_158_V_read159_phi_phi_fu_17004_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_158_V_read159_phi_phi_fu_17004_p4 = ap_phi_mux_data_158_V_read159_rewind_phi_fu_9980_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_158_V_read159_phi_phi_fu_17004_p4 = data_158_V_read.read();
    } else {
        ap_phi_mux_data_158_V_read159_phi_phi_fu_17004_p4 = ap_phi_reg_pp0_iter0_data_158_V_read159_phi_reg_17000.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_158_V_read159_rewind_phi_fu_9980_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_158_V_read159_rewind_phi_fu_9980_p6 = data_158_V_read159_phi_reg_17000.read();
    } else {
        ap_phi_mux_data_158_V_read159_rewind_phi_fu_9980_p6 = data_158_V_read159_rewind_reg_9976.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_159_V_read160_phi_phi_fu_17017_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_159_V_read160_phi_phi_fu_17017_p4 = ap_phi_mux_data_159_V_read160_rewind_phi_fu_9994_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_159_V_read160_phi_phi_fu_17017_p4 = data_159_V_read.read();
    } else {
        ap_phi_mux_data_159_V_read160_phi_phi_fu_17017_p4 = ap_phi_reg_pp0_iter0_data_159_V_read160_phi_reg_17013.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_159_V_read160_rewind_phi_fu_9994_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_159_V_read160_rewind_phi_fu_9994_p6 = data_159_V_read160_phi_reg_17013.read();
    } else {
        ap_phi_mux_data_159_V_read160_rewind_phi_fu_9994_p6 = data_159_V_read160_rewind_reg_9990.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_15_V_read16_phi_phi_fu_15145_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_15_V_read16_phi_phi_fu_15145_p4 = ap_phi_mux_data_15_V_read16_rewind_phi_fu_7978_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_15_V_read16_phi_phi_fu_15145_p4 = data_15_V_read.read();
    } else {
        ap_phi_mux_data_15_V_read16_phi_phi_fu_15145_p4 = ap_phi_reg_pp0_iter0_data_15_V_read16_phi_reg_15141.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_15_V_read16_rewind_phi_fu_7978_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_15_V_read16_rewind_phi_fu_7978_p6 = data_15_V_read16_phi_reg_15141.read();
    } else {
        ap_phi_mux_data_15_V_read16_rewind_phi_fu_7978_p6 = data_15_V_read16_rewind_reg_7974.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_160_V_read161_phi_phi_fu_17030_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_160_V_read161_phi_phi_fu_17030_p4 = ap_phi_mux_data_160_V_read161_rewind_phi_fu_10008_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_160_V_read161_phi_phi_fu_17030_p4 = data_160_V_read.read();
    } else {
        ap_phi_mux_data_160_V_read161_phi_phi_fu_17030_p4 = ap_phi_reg_pp0_iter0_data_160_V_read161_phi_reg_17026.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_160_V_read161_rewind_phi_fu_10008_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_160_V_read161_rewind_phi_fu_10008_p6 = data_160_V_read161_phi_reg_17026.read();
    } else {
        ap_phi_mux_data_160_V_read161_rewind_phi_fu_10008_p6 = data_160_V_read161_rewind_reg_10004.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_161_V_read162_phi_phi_fu_17043_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_161_V_read162_phi_phi_fu_17043_p4 = ap_phi_mux_data_161_V_read162_rewind_phi_fu_10022_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_161_V_read162_phi_phi_fu_17043_p4 = data_161_V_read.read();
    } else {
        ap_phi_mux_data_161_V_read162_phi_phi_fu_17043_p4 = ap_phi_reg_pp0_iter0_data_161_V_read162_phi_reg_17039.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_161_V_read162_rewind_phi_fu_10022_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_161_V_read162_rewind_phi_fu_10022_p6 = data_161_V_read162_phi_reg_17039.read();
    } else {
        ap_phi_mux_data_161_V_read162_rewind_phi_fu_10022_p6 = data_161_V_read162_rewind_reg_10018.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_162_V_read163_phi_phi_fu_17056_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_162_V_read163_phi_phi_fu_17056_p4 = ap_phi_mux_data_162_V_read163_rewind_phi_fu_10036_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_162_V_read163_phi_phi_fu_17056_p4 = data_162_V_read.read();
    } else {
        ap_phi_mux_data_162_V_read163_phi_phi_fu_17056_p4 = ap_phi_reg_pp0_iter0_data_162_V_read163_phi_reg_17052.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_162_V_read163_rewind_phi_fu_10036_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_162_V_read163_rewind_phi_fu_10036_p6 = data_162_V_read163_phi_reg_17052.read();
    } else {
        ap_phi_mux_data_162_V_read163_rewind_phi_fu_10036_p6 = data_162_V_read163_rewind_reg_10032.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_163_V_read164_phi_phi_fu_17069_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_163_V_read164_phi_phi_fu_17069_p4 = ap_phi_mux_data_163_V_read164_rewind_phi_fu_10050_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_163_V_read164_phi_phi_fu_17069_p4 = data_163_V_read.read();
    } else {
        ap_phi_mux_data_163_V_read164_phi_phi_fu_17069_p4 = ap_phi_reg_pp0_iter0_data_163_V_read164_phi_reg_17065.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_163_V_read164_rewind_phi_fu_10050_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_163_V_read164_rewind_phi_fu_10050_p6 = data_163_V_read164_phi_reg_17065.read();
    } else {
        ap_phi_mux_data_163_V_read164_rewind_phi_fu_10050_p6 = data_163_V_read164_rewind_reg_10046.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_164_V_read165_phi_phi_fu_17082_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_164_V_read165_phi_phi_fu_17082_p4 = ap_phi_mux_data_164_V_read165_rewind_phi_fu_10064_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_164_V_read165_phi_phi_fu_17082_p4 = data_164_V_read.read();
    } else {
        ap_phi_mux_data_164_V_read165_phi_phi_fu_17082_p4 = ap_phi_reg_pp0_iter0_data_164_V_read165_phi_reg_17078.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_164_V_read165_rewind_phi_fu_10064_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_164_V_read165_rewind_phi_fu_10064_p6 = data_164_V_read165_phi_reg_17078.read();
    } else {
        ap_phi_mux_data_164_V_read165_rewind_phi_fu_10064_p6 = data_164_V_read165_rewind_reg_10060.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_165_V_read166_phi_phi_fu_17095_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_165_V_read166_phi_phi_fu_17095_p4 = ap_phi_mux_data_165_V_read166_rewind_phi_fu_10078_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_165_V_read166_phi_phi_fu_17095_p4 = data_165_V_read.read();
    } else {
        ap_phi_mux_data_165_V_read166_phi_phi_fu_17095_p4 = ap_phi_reg_pp0_iter0_data_165_V_read166_phi_reg_17091.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_165_V_read166_rewind_phi_fu_10078_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_165_V_read166_rewind_phi_fu_10078_p6 = data_165_V_read166_phi_reg_17091.read();
    } else {
        ap_phi_mux_data_165_V_read166_rewind_phi_fu_10078_p6 = data_165_V_read166_rewind_reg_10074.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_166_V_read167_phi_phi_fu_17108_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_166_V_read167_phi_phi_fu_17108_p4 = ap_phi_mux_data_166_V_read167_rewind_phi_fu_10092_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_166_V_read167_phi_phi_fu_17108_p4 = data_166_V_read.read();
    } else {
        ap_phi_mux_data_166_V_read167_phi_phi_fu_17108_p4 = ap_phi_reg_pp0_iter0_data_166_V_read167_phi_reg_17104.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_166_V_read167_rewind_phi_fu_10092_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_166_V_read167_rewind_phi_fu_10092_p6 = data_166_V_read167_phi_reg_17104.read();
    } else {
        ap_phi_mux_data_166_V_read167_rewind_phi_fu_10092_p6 = data_166_V_read167_rewind_reg_10088.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_167_V_read168_phi_phi_fu_17121_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_167_V_read168_phi_phi_fu_17121_p4 = ap_phi_mux_data_167_V_read168_rewind_phi_fu_10106_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_167_V_read168_phi_phi_fu_17121_p4 = data_167_V_read.read();
    } else {
        ap_phi_mux_data_167_V_read168_phi_phi_fu_17121_p4 = ap_phi_reg_pp0_iter0_data_167_V_read168_phi_reg_17117.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_167_V_read168_rewind_phi_fu_10106_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_167_V_read168_rewind_phi_fu_10106_p6 = data_167_V_read168_phi_reg_17117.read();
    } else {
        ap_phi_mux_data_167_V_read168_rewind_phi_fu_10106_p6 = data_167_V_read168_rewind_reg_10102.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_168_V_read169_phi_phi_fu_17134_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_168_V_read169_phi_phi_fu_17134_p4 = ap_phi_mux_data_168_V_read169_rewind_phi_fu_10120_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_168_V_read169_phi_phi_fu_17134_p4 = data_168_V_read.read();
    } else {
        ap_phi_mux_data_168_V_read169_phi_phi_fu_17134_p4 = ap_phi_reg_pp0_iter0_data_168_V_read169_phi_reg_17130.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_168_V_read169_rewind_phi_fu_10120_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_168_V_read169_rewind_phi_fu_10120_p6 = data_168_V_read169_phi_reg_17130.read();
    } else {
        ap_phi_mux_data_168_V_read169_rewind_phi_fu_10120_p6 = data_168_V_read169_rewind_reg_10116.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_169_V_read170_phi_phi_fu_17147_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_169_V_read170_phi_phi_fu_17147_p4 = ap_phi_mux_data_169_V_read170_rewind_phi_fu_10134_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_169_V_read170_phi_phi_fu_17147_p4 = data_169_V_read.read();
    } else {
        ap_phi_mux_data_169_V_read170_phi_phi_fu_17147_p4 = ap_phi_reg_pp0_iter0_data_169_V_read170_phi_reg_17143.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_169_V_read170_rewind_phi_fu_10134_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_169_V_read170_rewind_phi_fu_10134_p6 = data_169_V_read170_phi_reg_17143.read();
    } else {
        ap_phi_mux_data_169_V_read170_rewind_phi_fu_10134_p6 = data_169_V_read170_rewind_reg_10130.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_16_V_read17_phi_phi_fu_15158_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_16_V_read17_phi_phi_fu_15158_p4 = ap_phi_mux_data_16_V_read17_rewind_phi_fu_7992_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_16_V_read17_phi_phi_fu_15158_p4 = data_16_V_read.read();
    } else {
        ap_phi_mux_data_16_V_read17_phi_phi_fu_15158_p4 = ap_phi_reg_pp0_iter0_data_16_V_read17_phi_reg_15154.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_16_V_read17_rewind_phi_fu_7992_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_16_V_read17_rewind_phi_fu_7992_p6 = data_16_V_read17_phi_reg_15154.read();
    } else {
        ap_phi_mux_data_16_V_read17_rewind_phi_fu_7992_p6 = data_16_V_read17_rewind_reg_7988.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_170_V_read171_phi_phi_fu_17160_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_170_V_read171_phi_phi_fu_17160_p4 = ap_phi_mux_data_170_V_read171_rewind_phi_fu_10148_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_170_V_read171_phi_phi_fu_17160_p4 = data_170_V_read.read();
    } else {
        ap_phi_mux_data_170_V_read171_phi_phi_fu_17160_p4 = ap_phi_reg_pp0_iter0_data_170_V_read171_phi_reg_17156.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_170_V_read171_rewind_phi_fu_10148_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_170_V_read171_rewind_phi_fu_10148_p6 = data_170_V_read171_phi_reg_17156.read();
    } else {
        ap_phi_mux_data_170_V_read171_rewind_phi_fu_10148_p6 = data_170_V_read171_rewind_reg_10144.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_171_V_read172_phi_phi_fu_17173_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_171_V_read172_phi_phi_fu_17173_p4 = ap_phi_mux_data_171_V_read172_rewind_phi_fu_10162_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_171_V_read172_phi_phi_fu_17173_p4 = data_171_V_read.read();
    } else {
        ap_phi_mux_data_171_V_read172_phi_phi_fu_17173_p4 = ap_phi_reg_pp0_iter0_data_171_V_read172_phi_reg_17169.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_171_V_read172_rewind_phi_fu_10162_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_171_V_read172_rewind_phi_fu_10162_p6 = data_171_V_read172_phi_reg_17169.read();
    } else {
        ap_phi_mux_data_171_V_read172_rewind_phi_fu_10162_p6 = data_171_V_read172_rewind_reg_10158.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_172_V_read173_phi_phi_fu_17186_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_172_V_read173_phi_phi_fu_17186_p4 = ap_phi_mux_data_172_V_read173_rewind_phi_fu_10176_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_172_V_read173_phi_phi_fu_17186_p4 = data_172_V_read.read();
    } else {
        ap_phi_mux_data_172_V_read173_phi_phi_fu_17186_p4 = ap_phi_reg_pp0_iter0_data_172_V_read173_phi_reg_17182.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_172_V_read173_rewind_phi_fu_10176_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_172_V_read173_rewind_phi_fu_10176_p6 = data_172_V_read173_phi_reg_17182.read();
    } else {
        ap_phi_mux_data_172_V_read173_rewind_phi_fu_10176_p6 = data_172_V_read173_rewind_reg_10172.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_173_V_read174_phi_phi_fu_17199_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_173_V_read174_phi_phi_fu_17199_p4 = ap_phi_mux_data_173_V_read174_rewind_phi_fu_10190_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_173_V_read174_phi_phi_fu_17199_p4 = data_173_V_read.read();
    } else {
        ap_phi_mux_data_173_V_read174_phi_phi_fu_17199_p4 = ap_phi_reg_pp0_iter0_data_173_V_read174_phi_reg_17195.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_173_V_read174_rewind_phi_fu_10190_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_173_V_read174_rewind_phi_fu_10190_p6 = data_173_V_read174_phi_reg_17195.read();
    } else {
        ap_phi_mux_data_173_V_read174_rewind_phi_fu_10190_p6 = data_173_V_read174_rewind_reg_10186.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_174_V_read175_phi_phi_fu_17212_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_174_V_read175_phi_phi_fu_17212_p4 = ap_phi_mux_data_174_V_read175_rewind_phi_fu_10204_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_174_V_read175_phi_phi_fu_17212_p4 = data_174_V_read.read();
    } else {
        ap_phi_mux_data_174_V_read175_phi_phi_fu_17212_p4 = ap_phi_reg_pp0_iter0_data_174_V_read175_phi_reg_17208.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_174_V_read175_rewind_phi_fu_10204_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_174_V_read175_rewind_phi_fu_10204_p6 = data_174_V_read175_phi_reg_17208.read();
    } else {
        ap_phi_mux_data_174_V_read175_rewind_phi_fu_10204_p6 = data_174_V_read175_rewind_reg_10200.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_175_V_read176_phi_phi_fu_17225_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_175_V_read176_phi_phi_fu_17225_p4 = ap_phi_mux_data_175_V_read176_rewind_phi_fu_10218_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_175_V_read176_phi_phi_fu_17225_p4 = data_175_V_read.read();
    } else {
        ap_phi_mux_data_175_V_read176_phi_phi_fu_17225_p4 = ap_phi_reg_pp0_iter0_data_175_V_read176_phi_reg_17221.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_175_V_read176_rewind_phi_fu_10218_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_175_V_read176_rewind_phi_fu_10218_p6 = data_175_V_read176_phi_reg_17221.read();
    } else {
        ap_phi_mux_data_175_V_read176_rewind_phi_fu_10218_p6 = data_175_V_read176_rewind_reg_10214.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_176_V_read177_phi_phi_fu_17238_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_176_V_read177_phi_phi_fu_17238_p4 = ap_phi_mux_data_176_V_read177_rewind_phi_fu_10232_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_176_V_read177_phi_phi_fu_17238_p4 = data_176_V_read.read();
    } else {
        ap_phi_mux_data_176_V_read177_phi_phi_fu_17238_p4 = ap_phi_reg_pp0_iter0_data_176_V_read177_phi_reg_17234.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_176_V_read177_rewind_phi_fu_10232_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_176_V_read177_rewind_phi_fu_10232_p6 = data_176_V_read177_phi_reg_17234.read();
    } else {
        ap_phi_mux_data_176_V_read177_rewind_phi_fu_10232_p6 = data_176_V_read177_rewind_reg_10228.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_177_V_read178_phi_phi_fu_17251_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_177_V_read178_phi_phi_fu_17251_p4 = ap_phi_mux_data_177_V_read178_rewind_phi_fu_10246_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_177_V_read178_phi_phi_fu_17251_p4 = data_177_V_read.read();
    } else {
        ap_phi_mux_data_177_V_read178_phi_phi_fu_17251_p4 = ap_phi_reg_pp0_iter0_data_177_V_read178_phi_reg_17247.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_177_V_read178_rewind_phi_fu_10246_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_177_V_read178_rewind_phi_fu_10246_p6 = data_177_V_read178_phi_reg_17247.read();
    } else {
        ap_phi_mux_data_177_V_read178_rewind_phi_fu_10246_p6 = data_177_V_read178_rewind_reg_10242.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_178_V_read179_phi_phi_fu_17264_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_178_V_read179_phi_phi_fu_17264_p4 = ap_phi_mux_data_178_V_read179_rewind_phi_fu_10260_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_178_V_read179_phi_phi_fu_17264_p4 = data_178_V_read.read();
    } else {
        ap_phi_mux_data_178_V_read179_phi_phi_fu_17264_p4 = ap_phi_reg_pp0_iter0_data_178_V_read179_phi_reg_17260.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_178_V_read179_rewind_phi_fu_10260_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_178_V_read179_rewind_phi_fu_10260_p6 = data_178_V_read179_phi_reg_17260.read();
    } else {
        ap_phi_mux_data_178_V_read179_rewind_phi_fu_10260_p6 = data_178_V_read179_rewind_reg_10256.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_179_V_read180_phi_phi_fu_17277_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_179_V_read180_phi_phi_fu_17277_p4 = ap_phi_mux_data_179_V_read180_rewind_phi_fu_10274_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_179_V_read180_phi_phi_fu_17277_p4 = data_179_V_read.read();
    } else {
        ap_phi_mux_data_179_V_read180_phi_phi_fu_17277_p4 = ap_phi_reg_pp0_iter0_data_179_V_read180_phi_reg_17273.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_179_V_read180_rewind_phi_fu_10274_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_179_V_read180_rewind_phi_fu_10274_p6 = data_179_V_read180_phi_reg_17273.read();
    } else {
        ap_phi_mux_data_179_V_read180_rewind_phi_fu_10274_p6 = data_179_V_read180_rewind_reg_10270.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_17_V_read18_phi_phi_fu_15171_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_17_V_read18_phi_phi_fu_15171_p4 = ap_phi_mux_data_17_V_read18_rewind_phi_fu_8006_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_17_V_read18_phi_phi_fu_15171_p4 = data_17_V_read.read();
    } else {
        ap_phi_mux_data_17_V_read18_phi_phi_fu_15171_p4 = ap_phi_reg_pp0_iter0_data_17_V_read18_phi_reg_15167.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_17_V_read18_rewind_phi_fu_8006_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_17_V_read18_rewind_phi_fu_8006_p6 = data_17_V_read18_phi_reg_15167.read();
    } else {
        ap_phi_mux_data_17_V_read18_rewind_phi_fu_8006_p6 = data_17_V_read18_rewind_reg_8002.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_180_V_read181_phi_phi_fu_17290_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_180_V_read181_phi_phi_fu_17290_p4 = ap_phi_mux_data_180_V_read181_rewind_phi_fu_10288_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_180_V_read181_phi_phi_fu_17290_p4 = data_180_V_read.read();
    } else {
        ap_phi_mux_data_180_V_read181_phi_phi_fu_17290_p4 = ap_phi_reg_pp0_iter0_data_180_V_read181_phi_reg_17286.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_180_V_read181_rewind_phi_fu_10288_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_180_V_read181_rewind_phi_fu_10288_p6 = data_180_V_read181_phi_reg_17286.read();
    } else {
        ap_phi_mux_data_180_V_read181_rewind_phi_fu_10288_p6 = data_180_V_read181_rewind_reg_10284.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_181_V_read182_phi_phi_fu_17303_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_181_V_read182_phi_phi_fu_17303_p4 = ap_phi_mux_data_181_V_read182_rewind_phi_fu_10302_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_181_V_read182_phi_phi_fu_17303_p4 = data_181_V_read.read();
    } else {
        ap_phi_mux_data_181_V_read182_phi_phi_fu_17303_p4 = ap_phi_reg_pp0_iter0_data_181_V_read182_phi_reg_17299.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_181_V_read182_rewind_phi_fu_10302_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_181_V_read182_rewind_phi_fu_10302_p6 = data_181_V_read182_phi_reg_17299.read();
    } else {
        ap_phi_mux_data_181_V_read182_rewind_phi_fu_10302_p6 = data_181_V_read182_rewind_reg_10298.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_182_V_read183_phi_phi_fu_17316_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_182_V_read183_phi_phi_fu_17316_p4 = ap_phi_mux_data_182_V_read183_rewind_phi_fu_10316_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_182_V_read183_phi_phi_fu_17316_p4 = data_182_V_read.read();
    } else {
        ap_phi_mux_data_182_V_read183_phi_phi_fu_17316_p4 = ap_phi_reg_pp0_iter0_data_182_V_read183_phi_reg_17312.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_182_V_read183_rewind_phi_fu_10316_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_182_V_read183_rewind_phi_fu_10316_p6 = data_182_V_read183_phi_reg_17312.read();
    } else {
        ap_phi_mux_data_182_V_read183_rewind_phi_fu_10316_p6 = data_182_V_read183_rewind_reg_10312.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_183_V_read184_phi_phi_fu_17329_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_183_V_read184_phi_phi_fu_17329_p4 = ap_phi_mux_data_183_V_read184_rewind_phi_fu_10330_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_183_V_read184_phi_phi_fu_17329_p4 = data_183_V_read.read();
    } else {
        ap_phi_mux_data_183_V_read184_phi_phi_fu_17329_p4 = ap_phi_reg_pp0_iter0_data_183_V_read184_phi_reg_17325.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_183_V_read184_rewind_phi_fu_10330_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_183_V_read184_rewind_phi_fu_10330_p6 = data_183_V_read184_phi_reg_17325.read();
    } else {
        ap_phi_mux_data_183_V_read184_rewind_phi_fu_10330_p6 = data_183_V_read184_rewind_reg_10326.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_184_V_read185_phi_phi_fu_17342_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_184_V_read185_phi_phi_fu_17342_p4 = ap_phi_mux_data_184_V_read185_rewind_phi_fu_10344_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_184_V_read185_phi_phi_fu_17342_p4 = data_184_V_read.read();
    } else {
        ap_phi_mux_data_184_V_read185_phi_phi_fu_17342_p4 = ap_phi_reg_pp0_iter0_data_184_V_read185_phi_reg_17338.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_184_V_read185_rewind_phi_fu_10344_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_184_V_read185_rewind_phi_fu_10344_p6 = data_184_V_read185_phi_reg_17338.read();
    } else {
        ap_phi_mux_data_184_V_read185_rewind_phi_fu_10344_p6 = data_184_V_read185_rewind_reg_10340.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_185_V_read186_phi_phi_fu_17355_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_185_V_read186_phi_phi_fu_17355_p4 = ap_phi_mux_data_185_V_read186_rewind_phi_fu_10358_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_185_V_read186_phi_phi_fu_17355_p4 = data_185_V_read.read();
    } else {
        ap_phi_mux_data_185_V_read186_phi_phi_fu_17355_p4 = ap_phi_reg_pp0_iter0_data_185_V_read186_phi_reg_17351.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_185_V_read186_rewind_phi_fu_10358_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_185_V_read186_rewind_phi_fu_10358_p6 = data_185_V_read186_phi_reg_17351.read();
    } else {
        ap_phi_mux_data_185_V_read186_rewind_phi_fu_10358_p6 = data_185_V_read186_rewind_reg_10354.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_186_V_read187_phi_phi_fu_17368_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_186_V_read187_phi_phi_fu_17368_p4 = ap_phi_mux_data_186_V_read187_rewind_phi_fu_10372_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_186_V_read187_phi_phi_fu_17368_p4 = data_186_V_read.read();
    } else {
        ap_phi_mux_data_186_V_read187_phi_phi_fu_17368_p4 = ap_phi_reg_pp0_iter0_data_186_V_read187_phi_reg_17364.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_186_V_read187_rewind_phi_fu_10372_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_186_V_read187_rewind_phi_fu_10372_p6 = data_186_V_read187_phi_reg_17364.read();
    } else {
        ap_phi_mux_data_186_V_read187_rewind_phi_fu_10372_p6 = data_186_V_read187_rewind_reg_10368.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_187_V_read188_phi_phi_fu_17381_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_187_V_read188_phi_phi_fu_17381_p4 = ap_phi_mux_data_187_V_read188_rewind_phi_fu_10386_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_187_V_read188_phi_phi_fu_17381_p4 = data_187_V_read.read();
    } else {
        ap_phi_mux_data_187_V_read188_phi_phi_fu_17381_p4 = ap_phi_reg_pp0_iter0_data_187_V_read188_phi_reg_17377.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_187_V_read188_rewind_phi_fu_10386_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_187_V_read188_rewind_phi_fu_10386_p6 = data_187_V_read188_phi_reg_17377.read();
    } else {
        ap_phi_mux_data_187_V_read188_rewind_phi_fu_10386_p6 = data_187_V_read188_rewind_reg_10382.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_188_V_read189_phi_phi_fu_17394_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_188_V_read189_phi_phi_fu_17394_p4 = ap_phi_mux_data_188_V_read189_rewind_phi_fu_10400_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_188_V_read189_phi_phi_fu_17394_p4 = data_188_V_read.read();
    } else {
        ap_phi_mux_data_188_V_read189_phi_phi_fu_17394_p4 = ap_phi_reg_pp0_iter0_data_188_V_read189_phi_reg_17390.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_188_V_read189_rewind_phi_fu_10400_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_188_V_read189_rewind_phi_fu_10400_p6 = data_188_V_read189_phi_reg_17390.read();
    } else {
        ap_phi_mux_data_188_V_read189_rewind_phi_fu_10400_p6 = data_188_V_read189_rewind_reg_10396.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_189_V_read190_phi_phi_fu_17407_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_189_V_read190_phi_phi_fu_17407_p4 = ap_phi_mux_data_189_V_read190_rewind_phi_fu_10414_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_189_V_read190_phi_phi_fu_17407_p4 = data_189_V_read.read();
    } else {
        ap_phi_mux_data_189_V_read190_phi_phi_fu_17407_p4 = ap_phi_reg_pp0_iter0_data_189_V_read190_phi_reg_17403.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_189_V_read190_rewind_phi_fu_10414_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_189_V_read190_rewind_phi_fu_10414_p6 = data_189_V_read190_phi_reg_17403.read();
    } else {
        ap_phi_mux_data_189_V_read190_rewind_phi_fu_10414_p6 = data_189_V_read190_rewind_reg_10410.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_18_V_read19_phi_phi_fu_15184_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_18_V_read19_phi_phi_fu_15184_p4 = ap_phi_mux_data_18_V_read19_rewind_phi_fu_8020_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_18_V_read19_phi_phi_fu_15184_p4 = data_18_V_read.read();
    } else {
        ap_phi_mux_data_18_V_read19_phi_phi_fu_15184_p4 = ap_phi_reg_pp0_iter0_data_18_V_read19_phi_reg_15180.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_18_V_read19_rewind_phi_fu_8020_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_18_V_read19_rewind_phi_fu_8020_p6 = data_18_V_read19_phi_reg_15180.read();
    } else {
        ap_phi_mux_data_18_V_read19_rewind_phi_fu_8020_p6 = data_18_V_read19_rewind_reg_8016.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_190_V_read191_phi_phi_fu_17420_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_190_V_read191_phi_phi_fu_17420_p4 = ap_phi_mux_data_190_V_read191_rewind_phi_fu_10428_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_190_V_read191_phi_phi_fu_17420_p4 = data_190_V_read.read();
    } else {
        ap_phi_mux_data_190_V_read191_phi_phi_fu_17420_p4 = ap_phi_reg_pp0_iter0_data_190_V_read191_phi_reg_17416.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_190_V_read191_rewind_phi_fu_10428_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_190_V_read191_rewind_phi_fu_10428_p6 = data_190_V_read191_phi_reg_17416.read();
    } else {
        ap_phi_mux_data_190_V_read191_rewind_phi_fu_10428_p6 = data_190_V_read191_rewind_reg_10424.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_191_V_read192_phi_phi_fu_17433_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_191_V_read192_phi_phi_fu_17433_p4 = ap_phi_mux_data_191_V_read192_rewind_phi_fu_10442_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_191_V_read192_phi_phi_fu_17433_p4 = data_191_V_read.read();
    } else {
        ap_phi_mux_data_191_V_read192_phi_phi_fu_17433_p4 = ap_phi_reg_pp0_iter0_data_191_V_read192_phi_reg_17429.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_191_V_read192_rewind_phi_fu_10442_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_191_V_read192_rewind_phi_fu_10442_p6 = data_191_V_read192_phi_reg_17429.read();
    } else {
        ap_phi_mux_data_191_V_read192_rewind_phi_fu_10442_p6 = data_191_V_read192_rewind_reg_10438.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_192_V_read193_phi_phi_fu_17446_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_192_V_read193_phi_phi_fu_17446_p4 = ap_phi_mux_data_192_V_read193_rewind_phi_fu_10456_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_192_V_read193_phi_phi_fu_17446_p4 = data_192_V_read.read();
    } else {
        ap_phi_mux_data_192_V_read193_phi_phi_fu_17446_p4 = ap_phi_reg_pp0_iter0_data_192_V_read193_phi_reg_17442.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_192_V_read193_rewind_phi_fu_10456_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_192_V_read193_rewind_phi_fu_10456_p6 = data_192_V_read193_phi_reg_17442.read();
    } else {
        ap_phi_mux_data_192_V_read193_rewind_phi_fu_10456_p6 = data_192_V_read193_rewind_reg_10452.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_193_V_read194_phi_phi_fu_17459_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_193_V_read194_phi_phi_fu_17459_p4 = ap_phi_mux_data_193_V_read194_rewind_phi_fu_10470_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_193_V_read194_phi_phi_fu_17459_p4 = data_193_V_read.read();
    } else {
        ap_phi_mux_data_193_V_read194_phi_phi_fu_17459_p4 = ap_phi_reg_pp0_iter0_data_193_V_read194_phi_reg_17455.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_193_V_read194_rewind_phi_fu_10470_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_193_V_read194_rewind_phi_fu_10470_p6 = data_193_V_read194_phi_reg_17455.read();
    } else {
        ap_phi_mux_data_193_V_read194_rewind_phi_fu_10470_p6 = data_193_V_read194_rewind_reg_10466.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_194_V_read195_phi_phi_fu_17472_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_194_V_read195_phi_phi_fu_17472_p4 = ap_phi_mux_data_194_V_read195_rewind_phi_fu_10484_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_194_V_read195_phi_phi_fu_17472_p4 = data_194_V_read.read();
    } else {
        ap_phi_mux_data_194_V_read195_phi_phi_fu_17472_p4 = ap_phi_reg_pp0_iter0_data_194_V_read195_phi_reg_17468.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_194_V_read195_rewind_phi_fu_10484_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_194_V_read195_rewind_phi_fu_10484_p6 = data_194_V_read195_phi_reg_17468.read();
    } else {
        ap_phi_mux_data_194_V_read195_rewind_phi_fu_10484_p6 = data_194_V_read195_rewind_reg_10480.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_195_V_read196_phi_phi_fu_17485_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_195_V_read196_phi_phi_fu_17485_p4 = ap_phi_mux_data_195_V_read196_rewind_phi_fu_10498_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_195_V_read196_phi_phi_fu_17485_p4 = data_195_V_read.read();
    } else {
        ap_phi_mux_data_195_V_read196_phi_phi_fu_17485_p4 = ap_phi_reg_pp0_iter0_data_195_V_read196_phi_reg_17481.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_195_V_read196_rewind_phi_fu_10498_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_195_V_read196_rewind_phi_fu_10498_p6 = data_195_V_read196_phi_reg_17481.read();
    } else {
        ap_phi_mux_data_195_V_read196_rewind_phi_fu_10498_p6 = data_195_V_read196_rewind_reg_10494.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_196_V_read197_phi_phi_fu_17498_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_196_V_read197_phi_phi_fu_17498_p4 = ap_phi_mux_data_196_V_read197_rewind_phi_fu_10512_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_196_V_read197_phi_phi_fu_17498_p4 = data_196_V_read.read();
    } else {
        ap_phi_mux_data_196_V_read197_phi_phi_fu_17498_p4 = ap_phi_reg_pp0_iter0_data_196_V_read197_phi_reg_17494.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_196_V_read197_rewind_phi_fu_10512_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_196_V_read197_rewind_phi_fu_10512_p6 = data_196_V_read197_phi_reg_17494.read();
    } else {
        ap_phi_mux_data_196_V_read197_rewind_phi_fu_10512_p6 = data_196_V_read197_rewind_reg_10508.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_197_V_read198_phi_phi_fu_17511_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_197_V_read198_phi_phi_fu_17511_p4 = ap_phi_mux_data_197_V_read198_rewind_phi_fu_10526_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_197_V_read198_phi_phi_fu_17511_p4 = data_197_V_read.read();
    } else {
        ap_phi_mux_data_197_V_read198_phi_phi_fu_17511_p4 = ap_phi_reg_pp0_iter0_data_197_V_read198_phi_reg_17507.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_197_V_read198_rewind_phi_fu_10526_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_197_V_read198_rewind_phi_fu_10526_p6 = data_197_V_read198_phi_reg_17507.read();
    } else {
        ap_phi_mux_data_197_V_read198_rewind_phi_fu_10526_p6 = data_197_V_read198_rewind_reg_10522.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_198_V_read199_phi_phi_fu_17524_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_198_V_read199_phi_phi_fu_17524_p4 = ap_phi_mux_data_198_V_read199_rewind_phi_fu_10540_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_198_V_read199_phi_phi_fu_17524_p4 = data_198_V_read.read();
    } else {
        ap_phi_mux_data_198_V_read199_phi_phi_fu_17524_p4 = ap_phi_reg_pp0_iter0_data_198_V_read199_phi_reg_17520.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_198_V_read199_rewind_phi_fu_10540_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_198_V_read199_rewind_phi_fu_10540_p6 = data_198_V_read199_phi_reg_17520.read();
    } else {
        ap_phi_mux_data_198_V_read199_rewind_phi_fu_10540_p6 = data_198_V_read199_rewind_reg_10536.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_199_V_read200_phi_phi_fu_17537_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_199_V_read200_phi_phi_fu_17537_p4 = ap_phi_mux_data_199_V_read200_rewind_phi_fu_10554_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_199_V_read200_phi_phi_fu_17537_p4 = data_199_V_read.read();
    } else {
        ap_phi_mux_data_199_V_read200_phi_phi_fu_17537_p4 = ap_phi_reg_pp0_iter0_data_199_V_read200_phi_reg_17533.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_199_V_read200_rewind_phi_fu_10554_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_199_V_read200_rewind_phi_fu_10554_p6 = data_199_V_read200_phi_reg_17533.read();
    } else {
        ap_phi_mux_data_199_V_read200_rewind_phi_fu_10554_p6 = data_199_V_read200_rewind_reg_10550.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_19_V_read20_phi_phi_fu_15197_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_19_V_read20_phi_phi_fu_15197_p4 = ap_phi_mux_data_19_V_read20_rewind_phi_fu_8034_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_19_V_read20_phi_phi_fu_15197_p4 = data_19_V_read.read();
    } else {
        ap_phi_mux_data_19_V_read20_phi_phi_fu_15197_p4 = ap_phi_reg_pp0_iter0_data_19_V_read20_phi_reg_15193.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_19_V_read20_rewind_phi_fu_8034_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_19_V_read20_rewind_phi_fu_8034_p6 = data_19_V_read20_phi_reg_15193.read();
    } else {
        ap_phi_mux_data_19_V_read20_rewind_phi_fu_8034_p6 = data_19_V_read20_rewind_reg_8030.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_1_V_read2_phi_phi_fu_14963_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_1_V_read2_phi_phi_fu_14963_p4 = ap_phi_mux_data_1_V_read2_rewind_phi_fu_7782_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_1_V_read2_phi_phi_fu_14963_p4 = data_1_V_read.read();
    } else {
        ap_phi_mux_data_1_V_read2_phi_phi_fu_14963_p4 = ap_phi_reg_pp0_iter0_data_1_V_read2_phi_reg_14959.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_1_V_read2_rewind_phi_fu_7782_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1_V_read2_rewind_phi_fu_7782_p6 = data_1_V_read2_phi_reg_14959.read();
    } else {
        ap_phi_mux_data_1_V_read2_rewind_phi_fu_7782_p6 = data_1_V_read2_rewind_reg_7778.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_200_V_read201_phi_phi_fu_17550_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_200_V_read201_phi_phi_fu_17550_p4 = ap_phi_mux_data_200_V_read201_rewind_phi_fu_10568_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_200_V_read201_phi_phi_fu_17550_p4 = data_200_V_read.read();
    } else {
        ap_phi_mux_data_200_V_read201_phi_phi_fu_17550_p4 = ap_phi_reg_pp0_iter0_data_200_V_read201_phi_reg_17546.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_200_V_read201_rewind_phi_fu_10568_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_200_V_read201_rewind_phi_fu_10568_p6 = data_200_V_read201_phi_reg_17546.read();
    } else {
        ap_phi_mux_data_200_V_read201_rewind_phi_fu_10568_p6 = data_200_V_read201_rewind_reg_10564.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_201_V_read202_phi_phi_fu_17563_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_201_V_read202_phi_phi_fu_17563_p4 = ap_phi_mux_data_201_V_read202_rewind_phi_fu_10582_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_201_V_read202_phi_phi_fu_17563_p4 = data_201_V_read.read();
    } else {
        ap_phi_mux_data_201_V_read202_phi_phi_fu_17563_p4 = ap_phi_reg_pp0_iter0_data_201_V_read202_phi_reg_17559.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_201_V_read202_rewind_phi_fu_10582_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_201_V_read202_rewind_phi_fu_10582_p6 = data_201_V_read202_phi_reg_17559.read();
    } else {
        ap_phi_mux_data_201_V_read202_rewind_phi_fu_10582_p6 = data_201_V_read202_rewind_reg_10578.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_202_V_read203_phi_phi_fu_17576_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_202_V_read203_phi_phi_fu_17576_p4 = ap_phi_mux_data_202_V_read203_rewind_phi_fu_10596_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_202_V_read203_phi_phi_fu_17576_p4 = data_202_V_read.read();
    } else {
        ap_phi_mux_data_202_V_read203_phi_phi_fu_17576_p4 = ap_phi_reg_pp0_iter0_data_202_V_read203_phi_reg_17572.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_202_V_read203_rewind_phi_fu_10596_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_202_V_read203_rewind_phi_fu_10596_p6 = data_202_V_read203_phi_reg_17572.read();
    } else {
        ap_phi_mux_data_202_V_read203_rewind_phi_fu_10596_p6 = data_202_V_read203_rewind_reg_10592.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_203_V_read204_phi_phi_fu_17589_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_203_V_read204_phi_phi_fu_17589_p4 = ap_phi_mux_data_203_V_read204_rewind_phi_fu_10610_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_203_V_read204_phi_phi_fu_17589_p4 = data_203_V_read.read();
    } else {
        ap_phi_mux_data_203_V_read204_phi_phi_fu_17589_p4 = ap_phi_reg_pp0_iter0_data_203_V_read204_phi_reg_17585.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_203_V_read204_rewind_phi_fu_10610_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_203_V_read204_rewind_phi_fu_10610_p6 = data_203_V_read204_phi_reg_17585.read();
    } else {
        ap_phi_mux_data_203_V_read204_rewind_phi_fu_10610_p6 = data_203_V_read204_rewind_reg_10606.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_204_V_read205_phi_phi_fu_17602_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_204_V_read205_phi_phi_fu_17602_p4 = ap_phi_mux_data_204_V_read205_rewind_phi_fu_10624_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_204_V_read205_phi_phi_fu_17602_p4 = data_204_V_read.read();
    } else {
        ap_phi_mux_data_204_V_read205_phi_phi_fu_17602_p4 = ap_phi_reg_pp0_iter0_data_204_V_read205_phi_reg_17598.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_204_V_read205_rewind_phi_fu_10624_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_204_V_read205_rewind_phi_fu_10624_p6 = data_204_V_read205_phi_reg_17598.read();
    } else {
        ap_phi_mux_data_204_V_read205_rewind_phi_fu_10624_p6 = data_204_V_read205_rewind_reg_10620.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_205_V_read206_phi_phi_fu_17615_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_205_V_read206_phi_phi_fu_17615_p4 = ap_phi_mux_data_205_V_read206_rewind_phi_fu_10638_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_205_V_read206_phi_phi_fu_17615_p4 = data_205_V_read.read();
    } else {
        ap_phi_mux_data_205_V_read206_phi_phi_fu_17615_p4 = ap_phi_reg_pp0_iter0_data_205_V_read206_phi_reg_17611.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_205_V_read206_rewind_phi_fu_10638_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_205_V_read206_rewind_phi_fu_10638_p6 = data_205_V_read206_phi_reg_17611.read();
    } else {
        ap_phi_mux_data_205_V_read206_rewind_phi_fu_10638_p6 = data_205_V_read206_rewind_reg_10634.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_206_V_read207_phi_phi_fu_17628_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_206_V_read207_phi_phi_fu_17628_p4 = ap_phi_mux_data_206_V_read207_rewind_phi_fu_10652_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_206_V_read207_phi_phi_fu_17628_p4 = data_206_V_read.read();
    } else {
        ap_phi_mux_data_206_V_read207_phi_phi_fu_17628_p4 = ap_phi_reg_pp0_iter0_data_206_V_read207_phi_reg_17624.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_206_V_read207_rewind_phi_fu_10652_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_206_V_read207_rewind_phi_fu_10652_p6 = data_206_V_read207_phi_reg_17624.read();
    } else {
        ap_phi_mux_data_206_V_read207_rewind_phi_fu_10652_p6 = data_206_V_read207_rewind_reg_10648.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_207_V_read208_phi_phi_fu_17641_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_207_V_read208_phi_phi_fu_17641_p4 = ap_phi_mux_data_207_V_read208_rewind_phi_fu_10666_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_207_V_read208_phi_phi_fu_17641_p4 = data_207_V_read.read();
    } else {
        ap_phi_mux_data_207_V_read208_phi_phi_fu_17641_p4 = ap_phi_reg_pp0_iter0_data_207_V_read208_phi_reg_17637.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_207_V_read208_rewind_phi_fu_10666_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_207_V_read208_rewind_phi_fu_10666_p6 = data_207_V_read208_phi_reg_17637.read();
    } else {
        ap_phi_mux_data_207_V_read208_rewind_phi_fu_10666_p6 = data_207_V_read208_rewind_reg_10662.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_208_V_read209_phi_phi_fu_17654_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_208_V_read209_phi_phi_fu_17654_p4 = ap_phi_mux_data_208_V_read209_rewind_phi_fu_10680_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_208_V_read209_phi_phi_fu_17654_p4 = data_208_V_read.read();
    } else {
        ap_phi_mux_data_208_V_read209_phi_phi_fu_17654_p4 = ap_phi_reg_pp0_iter0_data_208_V_read209_phi_reg_17650.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_208_V_read209_rewind_phi_fu_10680_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_208_V_read209_rewind_phi_fu_10680_p6 = data_208_V_read209_phi_reg_17650.read();
    } else {
        ap_phi_mux_data_208_V_read209_rewind_phi_fu_10680_p6 = data_208_V_read209_rewind_reg_10676.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_209_V_read210_phi_phi_fu_17667_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_209_V_read210_phi_phi_fu_17667_p4 = ap_phi_mux_data_209_V_read210_rewind_phi_fu_10694_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_209_V_read210_phi_phi_fu_17667_p4 = data_209_V_read.read();
    } else {
        ap_phi_mux_data_209_V_read210_phi_phi_fu_17667_p4 = ap_phi_reg_pp0_iter0_data_209_V_read210_phi_reg_17663.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_209_V_read210_rewind_phi_fu_10694_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_209_V_read210_rewind_phi_fu_10694_p6 = data_209_V_read210_phi_reg_17663.read();
    } else {
        ap_phi_mux_data_209_V_read210_rewind_phi_fu_10694_p6 = data_209_V_read210_rewind_reg_10690.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_20_V_read21_phi_phi_fu_15210_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_20_V_read21_phi_phi_fu_15210_p4 = ap_phi_mux_data_20_V_read21_rewind_phi_fu_8048_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_20_V_read21_phi_phi_fu_15210_p4 = data_20_V_read.read();
    } else {
        ap_phi_mux_data_20_V_read21_phi_phi_fu_15210_p4 = ap_phi_reg_pp0_iter0_data_20_V_read21_phi_reg_15206.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_20_V_read21_rewind_phi_fu_8048_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_20_V_read21_rewind_phi_fu_8048_p6 = data_20_V_read21_phi_reg_15206.read();
    } else {
        ap_phi_mux_data_20_V_read21_rewind_phi_fu_8048_p6 = data_20_V_read21_rewind_reg_8044.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_210_V_read211_phi_phi_fu_17680_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_210_V_read211_phi_phi_fu_17680_p4 = ap_phi_mux_data_210_V_read211_rewind_phi_fu_10708_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_210_V_read211_phi_phi_fu_17680_p4 = data_210_V_read.read();
    } else {
        ap_phi_mux_data_210_V_read211_phi_phi_fu_17680_p4 = ap_phi_reg_pp0_iter0_data_210_V_read211_phi_reg_17676.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_210_V_read211_rewind_phi_fu_10708_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_210_V_read211_rewind_phi_fu_10708_p6 = data_210_V_read211_phi_reg_17676.read();
    } else {
        ap_phi_mux_data_210_V_read211_rewind_phi_fu_10708_p6 = data_210_V_read211_rewind_reg_10704.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_211_V_read212_phi_phi_fu_17693_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_211_V_read212_phi_phi_fu_17693_p4 = ap_phi_mux_data_211_V_read212_rewind_phi_fu_10722_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_211_V_read212_phi_phi_fu_17693_p4 = data_211_V_read.read();
    } else {
        ap_phi_mux_data_211_V_read212_phi_phi_fu_17693_p4 = ap_phi_reg_pp0_iter0_data_211_V_read212_phi_reg_17689.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_211_V_read212_rewind_phi_fu_10722_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_211_V_read212_rewind_phi_fu_10722_p6 = data_211_V_read212_phi_reg_17689.read();
    } else {
        ap_phi_mux_data_211_V_read212_rewind_phi_fu_10722_p6 = data_211_V_read212_rewind_reg_10718.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_212_V_read213_phi_phi_fu_17706_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_212_V_read213_phi_phi_fu_17706_p4 = ap_phi_mux_data_212_V_read213_rewind_phi_fu_10736_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_212_V_read213_phi_phi_fu_17706_p4 = data_212_V_read.read();
    } else {
        ap_phi_mux_data_212_V_read213_phi_phi_fu_17706_p4 = ap_phi_reg_pp0_iter0_data_212_V_read213_phi_reg_17702.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_212_V_read213_rewind_phi_fu_10736_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_212_V_read213_rewind_phi_fu_10736_p6 = data_212_V_read213_phi_reg_17702.read();
    } else {
        ap_phi_mux_data_212_V_read213_rewind_phi_fu_10736_p6 = data_212_V_read213_rewind_reg_10732.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_213_V_read214_phi_phi_fu_17719_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_213_V_read214_phi_phi_fu_17719_p4 = ap_phi_mux_data_213_V_read214_rewind_phi_fu_10750_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_213_V_read214_phi_phi_fu_17719_p4 = data_213_V_read.read();
    } else {
        ap_phi_mux_data_213_V_read214_phi_phi_fu_17719_p4 = ap_phi_reg_pp0_iter0_data_213_V_read214_phi_reg_17715.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_213_V_read214_rewind_phi_fu_10750_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_213_V_read214_rewind_phi_fu_10750_p6 = data_213_V_read214_phi_reg_17715.read();
    } else {
        ap_phi_mux_data_213_V_read214_rewind_phi_fu_10750_p6 = data_213_V_read214_rewind_reg_10746.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_214_V_read215_phi_phi_fu_17732_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_214_V_read215_phi_phi_fu_17732_p4 = ap_phi_mux_data_214_V_read215_rewind_phi_fu_10764_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_214_V_read215_phi_phi_fu_17732_p4 = data_214_V_read.read();
    } else {
        ap_phi_mux_data_214_V_read215_phi_phi_fu_17732_p4 = ap_phi_reg_pp0_iter0_data_214_V_read215_phi_reg_17728.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_214_V_read215_rewind_phi_fu_10764_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_214_V_read215_rewind_phi_fu_10764_p6 = data_214_V_read215_phi_reg_17728.read();
    } else {
        ap_phi_mux_data_214_V_read215_rewind_phi_fu_10764_p6 = data_214_V_read215_rewind_reg_10760.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_215_V_read216_phi_phi_fu_17745_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_215_V_read216_phi_phi_fu_17745_p4 = ap_phi_mux_data_215_V_read216_rewind_phi_fu_10778_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_215_V_read216_phi_phi_fu_17745_p4 = data_215_V_read.read();
    } else {
        ap_phi_mux_data_215_V_read216_phi_phi_fu_17745_p4 = ap_phi_reg_pp0_iter0_data_215_V_read216_phi_reg_17741.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_215_V_read216_rewind_phi_fu_10778_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_215_V_read216_rewind_phi_fu_10778_p6 = data_215_V_read216_phi_reg_17741.read();
    } else {
        ap_phi_mux_data_215_V_read216_rewind_phi_fu_10778_p6 = data_215_V_read216_rewind_reg_10774.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_216_V_read217_phi_phi_fu_17758_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_216_V_read217_phi_phi_fu_17758_p4 = ap_phi_mux_data_216_V_read217_rewind_phi_fu_10792_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_216_V_read217_phi_phi_fu_17758_p4 = data_216_V_read.read();
    } else {
        ap_phi_mux_data_216_V_read217_phi_phi_fu_17758_p4 = ap_phi_reg_pp0_iter0_data_216_V_read217_phi_reg_17754.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_216_V_read217_rewind_phi_fu_10792_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_216_V_read217_rewind_phi_fu_10792_p6 = data_216_V_read217_phi_reg_17754.read();
    } else {
        ap_phi_mux_data_216_V_read217_rewind_phi_fu_10792_p6 = data_216_V_read217_rewind_reg_10788.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_217_V_read218_phi_phi_fu_17771_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_217_V_read218_phi_phi_fu_17771_p4 = ap_phi_mux_data_217_V_read218_rewind_phi_fu_10806_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_217_V_read218_phi_phi_fu_17771_p4 = data_217_V_read.read();
    } else {
        ap_phi_mux_data_217_V_read218_phi_phi_fu_17771_p4 = ap_phi_reg_pp0_iter0_data_217_V_read218_phi_reg_17767.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_217_V_read218_rewind_phi_fu_10806_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_217_V_read218_rewind_phi_fu_10806_p6 = data_217_V_read218_phi_reg_17767.read();
    } else {
        ap_phi_mux_data_217_V_read218_rewind_phi_fu_10806_p6 = data_217_V_read218_rewind_reg_10802.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_218_V_read219_phi_phi_fu_17784_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_218_V_read219_phi_phi_fu_17784_p4 = ap_phi_mux_data_218_V_read219_rewind_phi_fu_10820_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_218_V_read219_phi_phi_fu_17784_p4 = data_218_V_read.read();
    } else {
        ap_phi_mux_data_218_V_read219_phi_phi_fu_17784_p4 = ap_phi_reg_pp0_iter0_data_218_V_read219_phi_reg_17780.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_218_V_read219_rewind_phi_fu_10820_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_218_V_read219_rewind_phi_fu_10820_p6 = data_218_V_read219_phi_reg_17780.read();
    } else {
        ap_phi_mux_data_218_V_read219_rewind_phi_fu_10820_p6 = data_218_V_read219_rewind_reg_10816.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_219_V_read220_phi_phi_fu_17797_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_219_V_read220_phi_phi_fu_17797_p4 = ap_phi_mux_data_219_V_read220_rewind_phi_fu_10834_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_219_V_read220_phi_phi_fu_17797_p4 = data_219_V_read.read();
    } else {
        ap_phi_mux_data_219_V_read220_phi_phi_fu_17797_p4 = ap_phi_reg_pp0_iter0_data_219_V_read220_phi_reg_17793.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_219_V_read220_rewind_phi_fu_10834_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_219_V_read220_rewind_phi_fu_10834_p6 = data_219_V_read220_phi_reg_17793.read();
    } else {
        ap_phi_mux_data_219_V_read220_rewind_phi_fu_10834_p6 = data_219_V_read220_rewind_reg_10830.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_21_V_read22_phi_phi_fu_15223_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_21_V_read22_phi_phi_fu_15223_p4 = ap_phi_mux_data_21_V_read22_rewind_phi_fu_8062_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_21_V_read22_phi_phi_fu_15223_p4 = data_21_V_read.read();
    } else {
        ap_phi_mux_data_21_V_read22_phi_phi_fu_15223_p4 = ap_phi_reg_pp0_iter0_data_21_V_read22_phi_reg_15219.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_21_V_read22_rewind_phi_fu_8062_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_21_V_read22_rewind_phi_fu_8062_p6 = data_21_V_read22_phi_reg_15219.read();
    } else {
        ap_phi_mux_data_21_V_read22_rewind_phi_fu_8062_p6 = data_21_V_read22_rewind_reg_8058.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_220_V_read221_phi_phi_fu_17810_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_220_V_read221_phi_phi_fu_17810_p4 = ap_phi_mux_data_220_V_read221_rewind_phi_fu_10848_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_220_V_read221_phi_phi_fu_17810_p4 = data_220_V_read.read();
    } else {
        ap_phi_mux_data_220_V_read221_phi_phi_fu_17810_p4 = ap_phi_reg_pp0_iter0_data_220_V_read221_phi_reg_17806.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_220_V_read221_rewind_phi_fu_10848_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_220_V_read221_rewind_phi_fu_10848_p6 = data_220_V_read221_phi_reg_17806.read();
    } else {
        ap_phi_mux_data_220_V_read221_rewind_phi_fu_10848_p6 = data_220_V_read221_rewind_reg_10844.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_221_V_read222_phi_phi_fu_17823_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_221_V_read222_phi_phi_fu_17823_p4 = ap_phi_mux_data_221_V_read222_rewind_phi_fu_10862_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_221_V_read222_phi_phi_fu_17823_p4 = data_221_V_read.read();
    } else {
        ap_phi_mux_data_221_V_read222_phi_phi_fu_17823_p4 = ap_phi_reg_pp0_iter0_data_221_V_read222_phi_reg_17819.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_221_V_read222_rewind_phi_fu_10862_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_221_V_read222_rewind_phi_fu_10862_p6 = data_221_V_read222_phi_reg_17819.read();
    } else {
        ap_phi_mux_data_221_V_read222_rewind_phi_fu_10862_p6 = data_221_V_read222_rewind_reg_10858.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_222_V_read223_phi_phi_fu_17836_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_222_V_read223_phi_phi_fu_17836_p4 = ap_phi_mux_data_222_V_read223_rewind_phi_fu_10876_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_222_V_read223_phi_phi_fu_17836_p4 = data_222_V_read.read();
    } else {
        ap_phi_mux_data_222_V_read223_phi_phi_fu_17836_p4 = ap_phi_reg_pp0_iter0_data_222_V_read223_phi_reg_17832.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_222_V_read223_rewind_phi_fu_10876_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_222_V_read223_rewind_phi_fu_10876_p6 = data_222_V_read223_phi_reg_17832.read();
    } else {
        ap_phi_mux_data_222_V_read223_rewind_phi_fu_10876_p6 = data_222_V_read223_rewind_reg_10872.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_223_V_read224_phi_phi_fu_17849_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_223_V_read224_phi_phi_fu_17849_p4 = ap_phi_mux_data_223_V_read224_rewind_phi_fu_10890_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_223_V_read224_phi_phi_fu_17849_p4 = data_223_V_read.read();
    } else {
        ap_phi_mux_data_223_V_read224_phi_phi_fu_17849_p4 = ap_phi_reg_pp0_iter0_data_223_V_read224_phi_reg_17845.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_223_V_read224_rewind_phi_fu_10890_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_223_V_read224_rewind_phi_fu_10890_p6 = data_223_V_read224_phi_reg_17845.read();
    } else {
        ap_phi_mux_data_223_V_read224_rewind_phi_fu_10890_p6 = data_223_V_read224_rewind_reg_10886.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_224_V_read225_phi_phi_fu_17862_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_224_V_read225_phi_phi_fu_17862_p4 = ap_phi_mux_data_224_V_read225_rewind_phi_fu_10904_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_224_V_read225_phi_phi_fu_17862_p4 = data_224_V_read.read();
    } else {
        ap_phi_mux_data_224_V_read225_phi_phi_fu_17862_p4 = ap_phi_reg_pp0_iter0_data_224_V_read225_phi_reg_17858.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_224_V_read225_rewind_phi_fu_10904_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_224_V_read225_rewind_phi_fu_10904_p6 = data_224_V_read225_phi_reg_17858.read();
    } else {
        ap_phi_mux_data_224_V_read225_rewind_phi_fu_10904_p6 = data_224_V_read225_rewind_reg_10900.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_225_V_read226_phi_phi_fu_17875_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_225_V_read226_phi_phi_fu_17875_p4 = ap_phi_mux_data_225_V_read226_rewind_phi_fu_10918_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_225_V_read226_phi_phi_fu_17875_p4 = data_225_V_read.read();
    } else {
        ap_phi_mux_data_225_V_read226_phi_phi_fu_17875_p4 = ap_phi_reg_pp0_iter0_data_225_V_read226_phi_reg_17871.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_225_V_read226_rewind_phi_fu_10918_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_225_V_read226_rewind_phi_fu_10918_p6 = data_225_V_read226_phi_reg_17871.read();
    } else {
        ap_phi_mux_data_225_V_read226_rewind_phi_fu_10918_p6 = data_225_V_read226_rewind_reg_10914.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_226_V_read227_phi_phi_fu_17888_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_226_V_read227_phi_phi_fu_17888_p4 = ap_phi_mux_data_226_V_read227_rewind_phi_fu_10932_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_226_V_read227_phi_phi_fu_17888_p4 = data_226_V_read.read();
    } else {
        ap_phi_mux_data_226_V_read227_phi_phi_fu_17888_p4 = ap_phi_reg_pp0_iter0_data_226_V_read227_phi_reg_17884.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_226_V_read227_rewind_phi_fu_10932_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_226_V_read227_rewind_phi_fu_10932_p6 = data_226_V_read227_phi_reg_17884.read();
    } else {
        ap_phi_mux_data_226_V_read227_rewind_phi_fu_10932_p6 = data_226_V_read227_rewind_reg_10928.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_227_V_read228_phi_phi_fu_17901_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_227_V_read228_phi_phi_fu_17901_p4 = ap_phi_mux_data_227_V_read228_rewind_phi_fu_10946_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_227_V_read228_phi_phi_fu_17901_p4 = data_227_V_read.read();
    } else {
        ap_phi_mux_data_227_V_read228_phi_phi_fu_17901_p4 = ap_phi_reg_pp0_iter0_data_227_V_read228_phi_reg_17897.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_227_V_read228_rewind_phi_fu_10946_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_227_V_read228_rewind_phi_fu_10946_p6 = data_227_V_read228_phi_reg_17897.read();
    } else {
        ap_phi_mux_data_227_V_read228_rewind_phi_fu_10946_p6 = data_227_V_read228_rewind_reg_10942.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_228_V_read229_phi_phi_fu_17914_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_228_V_read229_phi_phi_fu_17914_p4 = ap_phi_mux_data_228_V_read229_rewind_phi_fu_10960_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_228_V_read229_phi_phi_fu_17914_p4 = data_228_V_read.read();
    } else {
        ap_phi_mux_data_228_V_read229_phi_phi_fu_17914_p4 = ap_phi_reg_pp0_iter0_data_228_V_read229_phi_reg_17910.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_228_V_read229_rewind_phi_fu_10960_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_228_V_read229_rewind_phi_fu_10960_p6 = data_228_V_read229_phi_reg_17910.read();
    } else {
        ap_phi_mux_data_228_V_read229_rewind_phi_fu_10960_p6 = data_228_V_read229_rewind_reg_10956.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_229_V_read230_phi_phi_fu_17927_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_229_V_read230_phi_phi_fu_17927_p4 = ap_phi_mux_data_229_V_read230_rewind_phi_fu_10974_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_229_V_read230_phi_phi_fu_17927_p4 = data_229_V_read.read();
    } else {
        ap_phi_mux_data_229_V_read230_phi_phi_fu_17927_p4 = ap_phi_reg_pp0_iter0_data_229_V_read230_phi_reg_17923.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_229_V_read230_rewind_phi_fu_10974_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_229_V_read230_rewind_phi_fu_10974_p6 = data_229_V_read230_phi_reg_17923.read();
    } else {
        ap_phi_mux_data_229_V_read230_rewind_phi_fu_10974_p6 = data_229_V_read230_rewind_reg_10970.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_22_V_read23_phi_phi_fu_15236_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_22_V_read23_phi_phi_fu_15236_p4 = ap_phi_mux_data_22_V_read23_rewind_phi_fu_8076_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_22_V_read23_phi_phi_fu_15236_p4 = data_22_V_read.read();
    } else {
        ap_phi_mux_data_22_V_read23_phi_phi_fu_15236_p4 = ap_phi_reg_pp0_iter0_data_22_V_read23_phi_reg_15232.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_22_V_read23_rewind_phi_fu_8076_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_22_V_read23_rewind_phi_fu_8076_p6 = data_22_V_read23_phi_reg_15232.read();
    } else {
        ap_phi_mux_data_22_V_read23_rewind_phi_fu_8076_p6 = data_22_V_read23_rewind_reg_8072.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_230_V_read231_phi_phi_fu_17940_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_230_V_read231_phi_phi_fu_17940_p4 = ap_phi_mux_data_230_V_read231_rewind_phi_fu_10988_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_230_V_read231_phi_phi_fu_17940_p4 = data_230_V_read.read();
    } else {
        ap_phi_mux_data_230_V_read231_phi_phi_fu_17940_p4 = ap_phi_reg_pp0_iter0_data_230_V_read231_phi_reg_17936.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_230_V_read231_rewind_phi_fu_10988_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_230_V_read231_rewind_phi_fu_10988_p6 = data_230_V_read231_phi_reg_17936.read();
    } else {
        ap_phi_mux_data_230_V_read231_rewind_phi_fu_10988_p6 = data_230_V_read231_rewind_reg_10984.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_231_V_read232_phi_phi_fu_17953_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_231_V_read232_phi_phi_fu_17953_p4 = ap_phi_mux_data_231_V_read232_rewind_phi_fu_11002_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_231_V_read232_phi_phi_fu_17953_p4 = data_231_V_read.read();
    } else {
        ap_phi_mux_data_231_V_read232_phi_phi_fu_17953_p4 = ap_phi_reg_pp0_iter0_data_231_V_read232_phi_reg_17949.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_231_V_read232_rewind_phi_fu_11002_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_231_V_read232_rewind_phi_fu_11002_p6 = data_231_V_read232_phi_reg_17949.read();
    } else {
        ap_phi_mux_data_231_V_read232_rewind_phi_fu_11002_p6 = data_231_V_read232_rewind_reg_10998.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_232_V_read233_phi_phi_fu_17966_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_232_V_read233_phi_phi_fu_17966_p4 = ap_phi_mux_data_232_V_read233_rewind_phi_fu_11016_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_232_V_read233_phi_phi_fu_17966_p4 = data_232_V_read.read();
    } else {
        ap_phi_mux_data_232_V_read233_phi_phi_fu_17966_p4 = ap_phi_reg_pp0_iter0_data_232_V_read233_phi_reg_17962.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_232_V_read233_rewind_phi_fu_11016_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_232_V_read233_rewind_phi_fu_11016_p6 = data_232_V_read233_phi_reg_17962.read();
    } else {
        ap_phi_mux_data_232_V_read233_rewind_phi_fu_11016_p6 = data_232_V_read233_rewind_reg_11012.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_233_V_read234_phi_phi_fu_17979_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_233_V_read234_phi_phi_fu_17979_p4 = ap_phi_mux_data_233_V_read234_rewind_phi_fu_11030_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_233_V_read234_phi_phi_fu_17979_p4 = data_233_V_read.read();
    } else {
        ap_phi_mux_data_233_V_read234_phi_phi_fu_17979_p4 = ap_phi_reg_pp0_iter0_data_233_V_read234_phi_reg_17975.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_233_V_read234_rewind_phi_fu_11030_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_233_V_read234_rewind_phi_fu_11030_p6 = data_233_V_read234_phi_reg_17975.read();
    } else {
        ap_phi_mux_data_233_V_read234_rewind_phi_fu_11030_p6 = data_233_V_read234_rewind_reg_11026.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_234_V_read235_phi_phi_fu_17992_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_234_V_read235_phi_phi_fu_17992_p4 = ap_phi_mux_data_234_V_read235_rewind_phi_fu_11044_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_234_V_read235_phi_phi_fu_17992_p4 = data_234_V_read.read();
    } else {
        ap_phi_mux_data_234_V_read235_phi_phi_fu_17992_p4 = ap_phi_reg_pp0_iter0_data_234_V_read235_phi_reg_17988.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_234_V_read235_rewind_phi_fu_11044_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_234_V_read235_rewind_phi_fu_11044_p6 = data_234_V_read235_phi_reg_17988.read();
    } else {
        ap_phi_mux_data_234_V_read235_rewind_phi_fu_11044_p6 = data_234_V_read235_rewind_reg_11040.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_235_V_read236_phi_phi_fu_18005_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_235_V_read236_phi_phi_fu_18005_p4 = ap_phi_mux_data_235_V_read236_rewind_phi_fu_11058_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_235_V_read236_phi_phi_fu_18005_p4 = data_235_V_read.read();
    } else {
        ap_phi_mux_data_235_V_read236_phi_phi_fu_18005_p4 = ap_phi_reg_pp0_iter0_data_235_V_read236_phi_reg_18001.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_235_V_read236_rewind_phi_fu_11058_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_235_V_read236_rewind_phi_fu_11058_p6 = data_235_V_read236_phi_reg_18001.read();
    } else {
        ap_phi_mux_data_235_V_read236_rewind_phi_fu_11058_p6 = data_235_V_read236_rewind_reg_11054.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_236_V_read237_phi_phi_fu_18018_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_236_V_read237_phi_phi_fu_18018_p4 = ap_phi_mux_data_236_V_read237_rewind_phi_fu_11072_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_236_V_read237_phi_phi_fu_18018_p4 = data_236_V_read.read();
    } else {
        ap_phi_mux_data_236_V_read237_phi_phi_fu_18018_p4 = ap_phi_reg_pp0_iter0_data_236_V_read237_phi_reg_18014.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_236_V_read237_rewind_phi_fu_11072_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_236_V_read237_rewind_phi_fu_11072_p6 = data_236_V_read237_phi_reg_18014.read();
    } else {
        ap_phi_mux_data_236_V_read237_rewind_phi_fu_11072_p6 = data_236_V_read237_rewind_reg_11068.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_237_V_read238_phi_phi_fu_18031_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_237_V_read238_phi_phi_fu_18031_p4 = ap_phi_mux_data_237_V_read238_rewind_phi_fu_11086_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_237_V_read238_phi_phi_fu_18031_p4 = data_237_V_read.read();
    } else {
        ap_phi_mux_data_237_V_read238_phi_phi_fu_18031_p4 = ap_phi_reg_pp0_iter0_data_237_V_read238_phi_reg_18027.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_237_V_read238_rewind_phi_fu_11086_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_237_V_read238_rewind_phi_fu_11086_p6 = data_237_V_read238_phi_reg_18027.read();
    } else {
        ap_phi_mux_data_237_V_read238_rewind_phi_fu_11086_p6 = data_237_V_read238_rewind_reg_11082.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_238_V_read239_phi_phi_fu_18044_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_238_V_read239_phi_phi_fu_18044_p4 = ap_phi_mux_data_238_V_read239_rewind_phi_fu_11100_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_238_V_read239_phi_phi_fu_18044_p4 = data_238_V_read.read();
    } else {
        ap_phi_mux_data_238_V_read239_phi_phi_fu_18044_p4 = ap_phi_reg_pp0_iter0_data_238_V_read239_phi_reg_18040.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_238_V_read239_rewind_phi_fu_11100_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_238_V_read239_rewind_phi_fu_11100_p6 = data_238_V_read239_phi_reg_18040.read();
    } else {
        ap_phi_mux_data_238_V_read239_rewind_phi_fu_11100_p6 = data_238_V_read239_rewind_reg_11096.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_239_V_read240_phi_phi_fu_18057_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_239_V_read240_phi_phi_fu_18057_p4 = ap_phi_mux_data_239_V_read240_rewind_phi_fu_11114_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_239_V_read240_phi_phi_fu_18057_p4 = data_239_V_read.read();
    } else {
        ap_phi_mux_data_239_V_read240_phi_phi_fu_18057_p4 = ap_phi_reg_pp0_iter0_data_239_V_read240_phi_reg_18053.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_239_V_read240_rewind_phi_fu_11114_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_239_V_read240_rewind_phi_fu_11114_p6 = data_239_V_read240_phi_reg_18053.read();
    } else {
        ap_phi_mux_data_239_V_read240_rewind_phi_fu_11114_p6 = data_239_V_read240_rewind_reg_11110.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_23_V_read24_phi_phi_fu_15249_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_23_V_read24_phi_phi_fu_15249_p4 = ap_phi_mux_data_23_V_read24_rewind_phi_fu_8090_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_23_V_read24_phi_phi_fu_15249_p4 = data_23_V_read.read();
    } else {
        ap_phi_mux_data_23_V_read24_phi_phi_fu_15249_p4 = ap_phi_reg_pp0_iter0_data_23_V_read24_phi_reg_15245.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_23_V_read24_rewind_phi_fu_8090_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_23_V_read24_rewind_phi_fu_8090_p6 = data_23_V_read24_phi_reg_15245.read();
    } else {
        ap_phi_mux_data_23_V_read24_rewind_phi_fu_8090_p6 = data_23_V_read24_rewind_reg_8086.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_240_V_read241_phi_phi_fu_18070_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_240_V_read241_phi_phi_fu_18070_p4 = ap_phi_mux_data_240_V_read241_rewind_phi_fu_11128_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_240_V_read241_phi_phi_fu_18070_p4 = data_240_V_read.read();
    } else {
        ap_phi_mux_data_240_V_read241_phi_phi_fu_18070_p4 = ap_phi_reg_pp0_iter0_data_240_V_read241_phi_reg_18066.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_240_V_read241_rewind_phi_fu_11128_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_240_V_read241_rewind_phi_fu_11128_p6 = data_240_V_read241_phi_reg_18066.read();
    } else {
        ap_phi_mux_data_240_V_read241_rewind_phi_fu_11128_p6 = data_240_V_read241_rewind_reg_11124.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_241_V_read242_phi_phi_fu_18083_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_241_V_read242_phi_phi_fu_18083_p4 = ap_phi_mux_data_241_V_read242_rewind_phi_fu_11142_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_241_V_read242_phi_phi_fu_18083_p4 = data_241_V_read.read();
    } else {
        ap_phi_mux_data_241_V_read242_phi_phi_fu_18083_p4 = ap_phi_reg_pp0_iter0_data_241_V_read242_phi_reg_18079.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_241_V_read242_rewind_phi_fu_11142_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_241_V_read242_rewind_phi_fu_11142_p6 = data_241_V_read242_phi_reg_18079.read();
    } else {
        ap_phi_mux_data_241_V_read242_rewind_phi_fu_11142_p6 = data_241_V_read242_rewind_reg_11138.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_242_V_read243_phi_phi_fu_18096_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_242_V_read243_phi_phi_fu_18096_p4 = ap_phi_mux_data_242_V_read243_rewind_phi_fu_11156_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_242_V_read243_phi_phi_fu_18096_p4 = data_242_V_read.read();
    } else {
        ap_phi_mux_data_242_V_read243_phi_phi_fu_18096_p4 = ap_phi_reg_pp0_iter0_data_242_V_read243_phi_reg_18092.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_242_V_read243_rewind_phi_fu_11156_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_242_V_read243_rewind_phi_fu_11156_p6 = data_242_V_read243_phi_reg_18092.read();
    } else {
        ap_phi_mux_data_242_V_read243_rewind_phi_fu_11156_p6 = data_242_V_read243_rewind_reg_11152.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_243_V_read244_phi_phi_fu_18109_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_243_V_read244_phi_phi_fu_18109_p4 = ap_phi_mux_data_243_V_read244_rewind_phi_fu_11170_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_243_V_read244_phi_phi_fu_18109_p4 = data_243_V_read.read();
    } else {
        ap_phi_mux_data_243_V_read244_phi_phi_fu_18109_p4 = ap_phi_reg_pp0_iter0_data_243_V_read244_phi_reg_18105.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_243_V_read244_rewind_phi_fu_11170_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_243_V_read244_rewind_phi_fu_11170_p6 = data_243_V_read244_phi_reg_18105.read();
    } else {
        ap_phi_mux_data_243_V_read244_rewind_phi_fu_11170_p6 = data_243_V_read244_rewind_reg_11166.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_244_V_read245_phi_phi_fu_18122_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_244_V_read245_phi_phi_fu_18122_p4 = ap_phi_mux_data_244_V_read245_rewind_phi_fu_11184_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_244_V_read245_phi_phi_fu_18122_p4 = data_244_V_read.read();
    } else {
        ap_phi_mux_data_244_V_read245_phi_phi_fu_18122_p4 = ap_phi_reg_pp0_iter0_data_244_V_read245_phi_reg_18118.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_244_V_read245_rewind_phi_fu_11184_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_244_V_read245_rewind_phi_fu_11184_p6 = data_244_V_read245_phi_reg_18118.read();
    } else {
        ap_phi_mux_data_244_V_read245_rewind_phi_fu_11184_p6 = data_244_V_read245_rewind_reg_11180.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_245_V_read246_phi_phi_fu_18135_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_245_V_read246_phi_phi_fu_18135_p4 = ap_phi_mux_data_245_V_read246_rewind_phi_fu_11198_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_245_V_read246_phi_phi_fu_18135_p4 = data_245_V_read.read();
    } else {
        ap_phi_mux_data_245_V_read246_phi_phi_fu_18135_p4 = ap_phi_reg_pp0_iter0_data_245_V_read246_phi_reg_18131.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_245_V_read246_rewind_phi_fu_11198_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_245_V_read246_rewind_phi_fu_11198_p6 = data_245_V_read246_phi_reg_18131.read();
    } else {
        ap_phi_mux_data_245_V_read246_rewind_phi_fu_11198_p6 = data_245_V_read246_rewind_reg_11194.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_246_V_read247_phi_phi_fu_18148_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_246_V_read247_phi_phi_fu_18148_p4 = ap_phi_mux_data_246_V_read247_rewind_phi_fu_11212_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_246_V_read247_phi_phi_fu_18148_p4 = data_246_V_read.read();
    } else {
        ap_phi_mux_data_246_V_read247_phi_phi_fu_18148_p4 = ap_phi_reg_pp0_iter0_data_246_V_read247_phi_reg_18144.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_246_V_read247_rewind_phi_fu_11212_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_246_V_read247_rewind_phi_fu_11212_p6 = data_246_V_read247_phi_reg_18144.read();
    } else {
        ap_phi_mux_data_246_V_read247_rewind_phi_fu_11212_p6 = data_246_V_read247_rewind_reg_11208.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_247_V_read248_phi_phi_fu_18161_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_247_V_read248_phi_phi_fu_18161_p4 = ap_phi_mux_data_247_V_read248_rewind_phi_fu_11226_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_247_V_read248_phi_phi_fu_18161_p4 = data_247_V_read.read();
    } else {
        ap_phi_mux_data_247_V_read248_phi_phi_fu_18161_p4 = ap_phi_reg_pp0_iter0_data_247_V_read248_phi_reg_18157.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_247_V_read248_rewind_phi_fu_11226_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_247_V_read248_rewind_phi_fu_11226_p6 = data_247_V_read248_phi_reg_18157.read();
    } else {
        ap_phi_mux_data_247_V_read248_rewind_phi_fu_11226_p6 = data_247_V_read248_rewind_reg_11222.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_248_V_read249_phi_phi_fu_18174_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_248_V_read249_phi_phi_fu_18174_p4 = ap_phi_mux_data_248_V_read249_rewind_phi_fu_11240_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_248_V_read249_phi_phi_fu_18174_p4 = data_248_V_read.read();
    } else {
        ap_phi_mux_data_248_V_read249_phi_phi_fu_18174_p4 = ap_phi_reg_pp0_iter0_data_248_V_read249_phi_reg_18170.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_248_V_read249_rewind_phi_fu_11240_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_248_V_read249_rewind_phi_fu_11240_p6 = data_248_V_read249_phi_reg_18170.read();
    } else {
        ap_phi_mux_data_248_V_read249_rewind_phi_fu_11240_p6 = data_248_V_read249_rewind_reg_11236.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_249_V_read250_phi_phi_fu_18187_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_249_V_read250_phi_phi_fu_18187_p4 = ap_phi_mux_data_249_V_read250_rewind_phi_fu_11254_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_249_V_read250_phi_phi_fu_18187_p4 = data_249_V_read.read();
    } else {
        ap_phi_mux_data_249_V_read250_phi_phi_fu_18187_p4 = ap_phi_reg_pp0_iter0_data_249_V_read250_phi_reg_18183.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_249_V_read250_rewind_phi_fu_11254_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_249_V_read250_rewind_phi_fu_11254_p6 = data_249_V_read250_phi_reg_18183.read();
    } else {
        ap_phi_mux_data_249_V_read250_rewind_phi_fu_11254_p6 = data_249_V_read250_rewind_reg_11250.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_24_V_read25_phi_phi_fu_15262_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_24_V_read25_phi_phi_fu_15262_p4 = ap_phi_mux_data_24_V_read25_rewind_phi_fu_8104_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_24_V_read25_phi_phi_fu_15262_p4 = data_24_V_read.read();
    } else {
        ap_phi_mux_data_24_V_read25_phi_phi_fu_15262_p4 = ap_phi_reg_pp0_iter0_data_24_V_read25_phi_reg_15258.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_24_V_read25_rewind_phi_fu_8104_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_24_V_read25_rewind_phi_fu_8104_p6 = data_24_V_read25_phi_reg_15258.read();
    } else {
        ap_phi_mux_data_24_V_read25_rewind_phi_fu_8104_p6 = data_24_V_read25_rewind_reg_8100.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_250_V_read251_phi_phi_fu_18200_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_250_V_read251_phi_phi_fu_18200_p4 = ap_phi_mux_data_250_V_read251_rewind_phi_fu_11268_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_250_V_read251_phi_phi_fu_18200_p4 = data_250_V_read.read();
    } else {
        ap_phi_mux_data_250_V_read251_phi_phi_fu_18200_p4 = ap_phi_reg_pp0_iter0_data_250_V_read251_phi_reg_18196.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_250_V_read251_rewind_phi_fu_11268_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_250_V_read251_rewind_phi_fu_11268_p6 = data_250_V_read251_phi_reg_18196.read();
    } else {
        ap_phi_mux_data_250_V_read251_rewind_phi_fu_11268_p6 = data_250_V_read251_rewind_reg_11264.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_251_V_read252_phi_phi_fu_18213_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_251_V_read252_phi_phi_fu_18213_p4 = ap_phi_mux_data_251_V_read252_rewind_phi_fu_11282_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_251_V_read252_phi_phi_fu_18213_p4 = data_251_V_read.read();
    } else {
        ap_phi_mux_data_251_V_read252_phi_phi_fu_18213_p4 = ap_phi_reg_pp0_iter0_data_251_V_read252_phi_reg_18209.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_251_V_read252_rewind_phi_fu_11282_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_251_V_read252_rewind_phi_fu_11282_p6 = data_251_V_read252_phi_reg_18209.read();
    } else {
        ap_phi_mux_data_251_V_read252_rewind_phi_fu_11282_p6 = data_251_V_read252_rewind_reg_11278.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_252_V_read253_phi_phi_fu_18226_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_252_V_read253_phi_phi_fu_18226_p4 = ap_phi_mux_data_252_V_read253_rewind_phi_fu_11296_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_252_V_read253_phi_phi_fu_18226_p4 = data_252_V_read.read();
    } else {
        ap_phi_mux_data_252_V_read253_phi_phi_fu_18226_p4 = ap_phi_reg_pp0_iter0_data_252_V_read253_phi_reg_18222.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_252_V_read253_rewind_phi_fu_11296_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_252_V_read253_rewind_phi_fu_11296_p6 = data_252_V_read253_phi_reg_18222.read();
    } else {
        ap_phi_mux_data_252_V_read253_rewind_phi_fu_11296_p6 = data_252_V_read253_rewind_reg_11292.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_253_V_read254_phi_phi_fu_18239_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_253_V_read254_phi_phi_fu_18239_p4 = ap_phi_mux_data_253_V_read254_rewind_phi_fu_11310_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_253_V_read254_phi_phi_fu_18239_p4 = data_253_V_read.read();
    } else {
        ap_phi_mux_data_253_V_read254_phi_phi_fu_18239_p4 = ap_phi_reg_pp0_iter0_data_253_V_read254_phi_reg_18235.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_253_V_read254_rewind_phi_fu_11310_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_253_V_read254_rewind_phi_fu_11310_p6 = data_253_V_read254_phi_reg_18235.read();
    } else {
        ap_phi_mux_data_253_V_read254_rewind_phi_fu_11310_p6 = data_253_V_read254_rewind_reg_11306.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_254_V_read255_phi_phi_fu_18252_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_254_V_read255_phi_phi_fu_18252_p4 = ap_phi_mux_data_254_V_read255_rewind_phi_fu_11324_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_254_V_read255_phi_phi_fu_18252_p4 = data_254_V_read.read();
    } else {
        ap_phi_mux_data_254_V_read255_phi_phi_fu_18252_p4 = ap_phi_reg_pp0_iter0_data_254_V_read255_phi_reg_18248.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_254_V_read255_rewind_phi_fu_11324_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_254_V_read255_rewind_phi_fu_11324_p6 = data_254_V_read255_phi_reg_18248.read();
    } else {
        ap_phi_mux_data_254_V_read255_rewind_phi_fu_11324_p6 = data_254_V_read255_rewind_reg_11320.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_255_V_read256_phi_phi_fu_18265_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_255_V_read256_phi_phi_fu_18265_p4 = ap_phi_mux_data_255_V_read256_rewind_phi_fu_11338_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_255_V_read256_phi_phi_fu_18265_p4 = data_255_V_read.read();
    } else {
        ap_phi_mux_data_255_V_read256_phi_phi_fu_18265_p4 = ap_phi_reg_pp0_iter0_data_255_V_read256_phi_reg_18261.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_255_V_read256_rewind_phi_fu_11338_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_255_V_read256_rewind_phi_fu_11338_p6 = data_255_V_read256_phi_reg_18261.read();
    } else {
        ap_phi_mux_data_255_V_read256_rewind_phi_fu_11338_p6 = data_255_V_read256_rewind_reg_11334.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_256_V_read257_phi_phi_fu_18278_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_256_V_read257_phi_phi_fu_18278_p4 = ap_phi_mux_data_256_V_read257_rewind_phi_fu_11352_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_256_V_read257_phi_phi_fu_18278_p4 = data_256_V_read.read();
    } else {
        ap_phi_mux_data_256_V_read257_phi_phi_fu_18278_p4 = ap_phi_reg_pp0_iter0_data_256_V_read257_phi_reg_18274.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_256_V_read257_rewind_phi_fu_11352_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_256_V_read257_rewind_phi_fu_11352_p6 = data_256_V_read257_phi_reg_18274.read();
    } else {
        ap_phi_mux_data_256_V_read257_rewind_phi_fu_11352_p6 = data_256_V_read257_rewind_reg_11348.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_257_V_read258_phi_phi_fu_18291_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_257_V_read258_phi_phi_fu_18291_p4 = ap_phi_mux_data_257_V_read258_rewind_phi_fu_11366_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_257_V_read258_phi_phi_fu_18291_p4 = data_257_V_read.read();
    } else {
        ap_phi_mux_data_257_V_read258_phi_phi_fu_18291_p4 = ap_phi_reg_pp0_iter0_data_257_V_read258_phi_reg_18287.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_257_V_read258_rewind_phi_fu_11366_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_257_V_read258_rewind_phi_fu_11366_p6 = data_257_V_read258_phi_reg_18287.read();
    } else {
        ap_phi_mux_data_257_V_read258_rewind_phi_fu_11366_p6 = data_257_V_read258_rewind_reg_11362.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_258_V_read259_phi_phi_fu_18304_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_258_V_read259_phi_phi_fu_18304_p4 = ap_phi_mux_data_258_V_read259_rewind_phi_fu_11380_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_258_V_read259_phi_phi_fu_18304_p4 = data_258_V_read.read();
    } else {
        ap_phi_mux_data_258_V_read259_phi_phi_fu_18304_p4 = ap_phi_reg_pp0_iter0_data_258_V_read259_phi_reg_18300.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_258_V_read259_rewind_phi_fu_11380_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_258_V_read259_rewind_phi_fu_11380_p6 = data_258_V_read259_phi_reg_18300.read();
    } else {
        ap_phi_mux_data_258_V_read259_rewind_phi_fu_11380_p6 = data_258_V_read259_rewind_reg_11376.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_259_V_read260_phi_phi_fu_18317_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_259_V_read260_phi_phi_fu_18317_p4 = ap_phi_mux_data_259_V_read260_rewind_phi_fu_11394_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_259_V_read260_phi_phi_fu_18317_p4 = data_259_V_read.read();
    } else {
        ap_phi_mux_data_259_V_read260_phi_phi_fu_18317_p4 = ap_phi_reg_pp0_iter0_data_259_V_read260_phi_reg_18313.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_259_V_read260_rewind_phi_fu_11394_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_259_V_read260_rewind_phi_fu_11394_p6 = data_259_V_read260_phi_reg_18313.read();
    } else {
        ap_phi_mux_data_259_V_read260_rewind_phi_fu_11394_p6 = data_259_V_read260_rewind_reg_11390.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_25_V_read26_phi_phi_fu_15275_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_25_V_read26_phi_phi_fu_15275_p4 = ap_phi_mux_data_25_V_read26_rewind_phi_fu_8118_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_25_V_read26_phi_phi_fu_15275_p4 = data_25_V_read.read();
    } else {
        ap_phi_mux_data_25_V_read26_phi_phi_fu_15275_p4 = ap_phi_reg_pp0_iter0_data_25_V_read26_phi_reg_15271.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_25_V_read26_rewind_phi_fu_8118_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_25_V_read26_rewind_phi_fu_8118_p6 = data_25_V_read26_phi_reg_15271.read();
    } else {
        ap_phi_mux_data_25_V_read26_rewind_phi_fu_8118_p6 = data_25_V_read26_rewind_reg_8114.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_260_V_read261_phi_phi_fu_18330_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_260_V_read261_phi_phi_fu_18330_p4 = ap_phi_mux_data_260_V_read261_rewind_phi_fu_11408_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_260_V_read261_phi_phi_fu_18330_p4 = data_260_V_read.read();
    } else {
        ap_phi_mux_data_260_V_read261_phi_phi_fu_18330_p4 = ap_phi_reg_pp0_iter0_data_260_V_read261_phi_reg_18326.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_260_V_read261_rewind_phi_fu_11408_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_260_V_read261_rewind_phi_fu_11408_p6 = data_260_V_read261_phi_reg_18326.read();
    } else {
        ap_phi_mux_data_260_V_read261_rewind_phi_fu_11408_p6 = data_260_V_read261_rewind_reg_11404.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_261_V_read262_phi_phi_fu_18343_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_261_V_read262_phi_phi_fu_18343_p4 = ap_phi_mux_data_261_V_read262_rewind_phi_fu_11422_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_261_V_read262_phi_phi_fu_18343_p4 = data_261_V_read.read();
    } else {
        ap_phi_mux_data_261_V_read262_phi_phi_fu_18343_p4 = ap_phi_reg_pp0_iter0_data_261_V_read262_phi_reg_18339.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_261_V_read262_rewind_phi_fu_11422_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_261_V_read262_rewind_phi_fu_11422_p6 = data_261_V_read262_phi_reg_18339.read();
    } else {
        ap_phi_mux_data_261_V_read262_rewind_phi_fu_11422_p6 = data_261_V_read262_rewind_reg_11418.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_262_V_read263_phi_phi_fu_18356_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_262_V_read263_phi_phi_fu_18356_p4 = ap_phi_mux_data_262_V_read263_rewind_phi_fu_11436_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_262_V_read263_phi_phi_fu_18356_p4 = data_262_V_read.read();
    } else {
        ap_phi_mux_data_262_V_read263_phi_phi_fu_18356_p4 = ap_phi_reg_pp0_iter0_data_262_V_read263_phi_reg_18352.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_262_V_read263_rewind_phi_fu_11436_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_262_V_read263_rewind_phi_fu_11436_p6 = data_262_V_read263_phi_reg_18352.read();
    } else {
        ap_phi_mux_data_262_V_read263_rewind_phi_fu_11436_p6 = data_262_V_read263_rewind_reg_11432.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_263_V_read264_phi_phi_fu_18369_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_263_V_read264_phi_phi_fu_18369_p4 = ap_phi_mux_data_263_V_read264_rewind_phi_fu_11450_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_263_V_read264_phi_phi_fu_18369_p4 = data_263_V_read.read();
    } else {
        ap_phi_mux_data_263_V_read264_phi_phi_fu_18369_p4 = ap_phi_reg_pp0_iter0_data_263_V_read264_phi_reg_18365.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_263_V_read264_rewind_phi_fu_11450_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_263_V_read264_rewind_phi_fu_11450_p6 = data_263_V_read264_phi_reg_18365.read();
    } else {
        ap_phi_mux_data_263_V_read264_rewind_phi_fu_11450_p6 = data_263_V_read264_rewind_reg_11446.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_264_V_read265_phi_phi_fu_18382_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_264_V_read265_phi_phi_fu_18382_p4 = ap_phi_mux_data_264_V_read265_rewind_phi_fu_11464_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_264_V_read265_phi_phi_fu_18382_p4 = data_264_V_read.read();
    } else {
        ap_phi_mux_data_264_V_read265_phi_phi_fu_18382_p4 = ap_phi_reg_pp0_iter0_data_264_V_read265_phi_reg_18378.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_264_V_read265_rewind_phi_fu_11464_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_264_V_read265_rewind_phi_fu_11464_p6 = data_264_V_read265_phi_reg_18378.read();
    } else {
        ap_phi_mux_data_264_V_read265_rewind_phi_fu_11464_p6 = data_264_V_read265_rewind_reg_11460.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_265_V_read266_phi_phi_fu_18395_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_265_V_read266_phi_phi_fu_18395_p4 = ap_phi_mux_data_265_V_read266_rewind_phi_fu_11478_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_265_V_read266_phi_phi_fu_18395_p4 = data_265_V_read.read();
    } else {
        ap_phi_mux_data_265_V_read266_phi_phi_fu_18395_p4 = ap_phi_reg_pp0_iter0_data_265_V_read266_phi_reg_18391.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_265_V_read266_rewind_phi_fu_11478_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_265_V_read266_rewind_phi_fu_11478_p6 = data_265_V_read266_phi_reg_18391.read();
    } else {
        ap_phi_mux_data_265_V_read266_rewind_phi_fu_11478_p6 = data_265_V_read266_rewind_reg_11474.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_266_V_read267_phi_phi_fu_18408_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_266_V_read267_phi_phi_fu_18408_p4 = ap_phi_mux_data_266_V_read267_rewind_phi_fu_11492_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_266_V_read267_phi_phi_fu_18408_p4 = data_266_V_read.read();
    } else {
        ap_phi_mux_data_266_V_read267_phi_phi_fu_18408_p4 = ap_phi_reg_pp0_iter0_data_266_V_read267_phi_reg_18404.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_266_V_read267_rewind_phi_fu_11492_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_266_V_read267_rewind_phi_fu_11492_p6 = data_266_V_read267_phi_reg_18404.read();
    } else {
        ap_phi_mux_data_266_V_read267_rewind_phi_fu_11492_p6 = data_266_V_read267_rewind_reg_11488.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_267_V_read268_phi_phi_fu_18421_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_267_V_read268_phi_phi_fu_18421_p4 = ap_phi_mux_data_267_V_read268_rewind_phi_fu_11506_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_267_V_read268_phi_phi_fu_18421_p4 = data_267_V_read.read();
    } else {
        ap_phi_mux_data_267_V_read268_phi_phi_fu_18421_p4 = ap_phi_reg_pp0_iter0_data_267_V_read268_phi_reg_18417.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_267_V_read268_rewind_phi_fu_11506_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_267_V_read268_rewind_phi_fu_11506_p6 = data_267_V_read268_phi_reg_18417.read();
    } else {
        ap_phi_mux_data_267_V_read268_rewind_phi_fu_11506_p6 = data_267_V_read268_rewind_reg_11502.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_268_V_read269_phi_phi_fu_18434_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_268_V_read269_phi_phi_fu_18434_p4 = ap_phi_mux_data_268_V_read269_rewind_phi_fu_11520_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_268_V_read269_phi_phi_fu_18434_p4 = data_268_V_read.read();
    } else {
        ap_phi_mux_data_268_V_read269_phi_phi_fu_18434_p4 = ap_phi_reg_pp0_iter0_data_268_V_read269_phi_reg_18430.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_268_V_read269_rewind_phi_fu_11520_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_268_V_read269_rewind_phi_fu_11520_p6 = data_268_V_read269_phi_reg_18430.read();
    } else {
        ap_phi_mux_data_268_V_read269_rewind_phi_fu_11520_p6 = data_268_V_read269_rewind_reg_11516.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_269_V_read270_phi_phi_fu_18447_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_269_V_read270_phi_phi_fu_18447_p4 = ap_phi_mux_data_269_V_read270_rewind_phi_fu_11534_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_269_V_read270_phi_phi_fu_18447_p4 = data_269_V_read.read();
    } else {
        ap_phi_mux_data_269_V_read270_phi_phi_fu_18447_p4 = ap_phi_reg_pp0_iter0_data_269_V_read270_phi_reg_18443.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_269_V_read270_rewind_phi_fu_11534_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_269_V_read270_rewind_phi_fu_11534_p6 = data_269_V_read270_phi_reg_18443.read();
    } else {
        ap_phi_mux_data_269_V_read270_rewind_phi_fu_11534_p6 = data_269_V_read270_rewind_reg_11530.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_26_V_read27_phi_phi_fu_15288_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_26_V_read27_phi_phi_fu_15288_p4 = ap_phi_mux_data_26_V_read27_rewind_phi_fu_8132_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_26_V_read27_phi_phi_fu_15288_p4 = data_26_V_read.read();
    } else {
        ap_phi_mux_data_26_V_read27_phi_phi_fu_15288_p4 = ap_phi_reg_pp0_iter0_data_26_V_read27_phi_reg_15284.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_26_V_read27_rewind_phi_fu_8132_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_26_V_read27_rewind_phi_fu_8132_p6 = data_26_V_read27_phi_reg_15284.read();
    } else {
        ap_phi_mux_data_26_V_read27_rewind_phi_fu_8132_p6 = data_26_V_read27_rewind_reg_8128.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_270_V_read271_phi_phi_fu_18460_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_270_V_read271_phi_phi_fu_18460_p4 = ap_phi_mux_data_270_V_read271_rewind_phi_fu_11548_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_270_V_read271_phi_phi_fu_18460_p4 = data_270_V_read.read();
    } else {
        ap_phi_mux_data_270_V_read271_phi_phi_fu_18460_p4 = ap_phi_reg_pp0_iter0_data_270_V_read271_phi_reg_18456.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_270_V_read271_rewind_phi_fu_11548_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_270_V_read271_rewind_phi_fu_11548_p6 = data_270_V_read271_phi_reg_18456.read();
    } else {
        ap_phi_mux_data_270_V_read271_rewind_phi_fu_11548_p6 = data_270_V_read271_rewind_reg_11544.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_271_V_read272_phi_phi_fu_18473_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_271_V_read272_phi_phi_fu_18473_p4 = ap_phi_mux_data_271_V_read272_rewind_phi_fu_11562_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_271_V_read272_phi_phi_fu_18473_p4 = data_271_V_read.read();
    } else {
        ap_phi_mux_data_271_V_read272_phi_phi_fu_18473_p4 = ap_phi_reg_pp0_iter0_data_271_V_read272_phi_reg_18469.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_271_V_read272_rewind_phi_fu_11562_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_271_V_read272_rewind_phi_fu_11562_p6 = data_271_V_read272_phi_reg_18469.read();
    } else {
        ap_phi_mux_data_271_V_read272_rewind_phi_fu_11562_p6 = data_271_V_read272_rewind_reg_11558.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_272_V_read273_phi_phi_fu_18486_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_272_V_read273_phi_phi_fu_18486_p4 = ap_phi_mux_data_272_V_read273_rewind_phi_fu_11576_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_272_V_read273_phi_phi_fu_18486_p4 = data_272_V_read.read();
    } else {
        ap_phi_mux_data_272_V_read273_phi_phi_fu_18486_p4 = ap_phi_reg_pp0_iter0_data_272_V_read273_phi_reg_18482.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_272_V_read273_rewind_phi_fu_11576_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_272_V_read273_rewind_phi_fu_11576_p6 = data_272_V_read273_phi_reg_18482.read();
    } else {
        ap_phi_mux_data_272_V_read273_rewind_phi_fu_11576_p6 = data_272_V_read273_rewind_reg_11572.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_273_V_read274_phi_phi_fu_18499_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_273_V_read274_phi_phi_fu_18499_p4 = ap_phi_mux_data_273_V_read274_rewind_phi_fu_11590_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_273_V_read274_phi_phi_fu_18499_p4 = data_273_V_read.read();
    } else {
        ap_phi_mux_data_273_V_read274_phi_phi_fu_18499_p4 = ap_phi_reg_pp0_iter0_data_273_V_read274_phi_reg_18495.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_273_V_read274_rewind_phi_fu_11590_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_273_V_read274_rewind_phi_fu_11590_p6 = data_273_V_read274_phi_reg_18495.read();
    } else {
        ap_phi_mux_data_273_V_read274_rewind_phi_fu_11590_p6 = data_273_V_read274_rewind_reg_11586.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_274_V_read275_phi_phi_fu_18512_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_274_V_read275_phi_phi_fu_18512_p4 = ap_phi_mux_data_274_V_read275_rewind_phi_fu_11604_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_274_V_read275_phi_phi_fu_18512_p4 = data_274_V_read.read();
    } else {
        ap_phi_mux_data_274_V_read275_phi_phi_fu_18512_p4 = ap_phi_reg_pp0_iter0_data_274_V_read275_phi_reg_18508.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_274_V_read275_rewind_phi_fu_11604_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_274_V_read275_rewind_phi_fu_11604_p6 = data_274_V_read275_phi_reg_18508.read();
    } else {
        ap_phi_mux_data_274_V_read275_rewind_phi_fu_11604_p6 = data_274_V_read275_rewind_reg_11600.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_275_V_read276_phi_phi_fu_18525_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_275_V_read276_phi_phi_fu_18525_p4 = ap_phi_mux_data_275_V_read276_rewind_phi_fu_11618_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_275_V_read276_phi_phi_fu_18525_p4 = data_275_V_read.read();
    } else {
        ap_phi_mux_data_275_V_read276_phi_phi_fu_18525_p4 = ap_phi_reg_pp0_iter0_data_275_V_read276_phi_reg_18521.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_275_V_read276_rewind_phi_fu_11618_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_275_V_read276_rewind_phi_fu_11618_p6 = data_275_V_read276_phi_reg_18521.read();
    } else {
        ap_phi_mux_data_275_V_read276_rewind_phi_fu_11618_p6 = data_275_V_read276_rewind_reg_11614.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_276_V_read277_phi_phi_fu_18538_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_276_V_read277_phi_phi_fu_18538_p4 = ap_phi_mux_data_276_V_read277_rewind_phi_fu_11632_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_276_V_read277_phi_phi_fu_18538_p4 = data_276_V_read.read();
    } else {
        ap_phi_mux_data_276_V_read277_phi_phi_fu_18538_p4 = ap_phi_reg_pp0_iter0_data_276_V_read277_phi_reg_18534.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_276_V_read277_rewind_phi_fu_11632_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_276_V_read277_rewind_phi_fu_11632_p6 = data_276_V_read277_phi_reg_18534.read();
    } else {
        ap_phi_mux_data_276_V_read277_rewind_phi_fu_11632_p6 = data_276_V_read277_rewind_reg_11628.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_277_V_read278_phi_phi_fu_18551_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_277_V_read278_phi_phi_fu_18551_p4 = ap_phi_mux_data_277_V_read278_rewind_phi_fu_11646_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_277_V_read278_phi_phi_fu_18551_p4 = data_277_V_read.read();
    } else {
        ap_phi_mux_data_277_V_read278_phi_phi_fu_18551_p4 = ap_phi_reg_pp0_iter0_data_277_V_read278_phi_reg_18547.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_277_V_read278_rewind_phi_fu_11646_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_277_V_read278_rewind_phi_fu_11646_p6 = data_277_V_read278_phi_reg_18547.read();
    } else {
        ap_phi_mux_data_277_V_read278_rewind_phi_fu_11646_p6 = data_277_V_read278_rewind_reg_11642.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_278_V_read279_phi_phi_fu_18564_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_278_V_read279_phi_phi_fu_18564_p4 = ap_phi_mux_data_278_V_read279_rewind_phi_fu_11660_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_278_V_read279_phi_phi_fu_18564_p4 = data_278_V_read.read();
    } else {
        ap_phi_mux_data_278_V_read279_phi_phi_fu_18564_p4 = ap_phi_reg_pp0_iter0_data_278_V_read279_phi_reg_18560.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_278_V_read279_rewind_phi_fu_11660_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_278_V_read279_rewind_phi_fu_11660_p6 = data_278_V_read279_phi_reg_18560.read();
    } else {
        ap_phi_mux_data_278_V_read279_rewind_phi_fu_11660_p6 = data_278_V_read279_rewind_reg_11656.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_279_V_read280_phi_phi_fu_18577_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_279_V_read280_phi_phi_fu_18577_p4 = ap_phi_mux_data_279_V_read280_rewind_phi_fu_11674_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_279_V_read280_phi_phi_fu_18577_p4 = data_279_V_read.read();
    } else {
        ap_phi_mux_data_279_V_read280_phi_phi_fu_18577_p4 = ap_phi_reg_pp0_iter0_data_279_V_read280_phi_reg_18573.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_279_V_read280_rewind_phi_fu_11674_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_279_V_read280_rewind_phi_fu_11674_p6 = data_279_V_read280_phi_reg_18573.read();
    } else {
        ap_phi_mux_data_279_V_read280_rewind_phi_fu_11674_p6 = data_279_V_read280_rewind_reg_11670.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_27_V_read28_phi_phi_fu_15301_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_27_V_read28_phi_phi_fu_15301_p4 = ap_phi_mux_data_27_V_read28_rewind_phi_fu_8146_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_27_V_read28_phi_phi_fu_15301_p4 = data_27_V_read.read();
    } else {
        ap_phi_mux_data_27_V_read28_phi_phi_fu_15301_p4 = ap_phi_reg_pp0_iter0_data_27_V_read28_phi_reg_15297.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_27_V_read28_rewind_phi_fu_8146_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_27_V_read28_rewind_phi_fu_8146_p6 = data_27_V_read28_phi_reg_15297.read();
    } else {
        ap_phi_mux_data_27_V_read28_rewind_phi_fu_8146_p6 = data_27_V_read28_rewind_reg_8142.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_280_V_read281_phi_phi_fu_18590_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_280_V_read281_phi_phi_fu_18590_p4 = ap_phi_mux_data_280_V_read281_rewind_phi_fu_11688_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_280_V_read281_phi_phi_fu_18590_p4 = data_280_V_read.read();
    } else {
        ap_phi_mux_data_280_V_read281_phi_phi_fu_18590_p4 = ap_phi_reg_pp0_iter0_data_280_V_read281_phi_reg_18586.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_280_V_read281_rewind_phi_fu_11688_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_280_V_read281_rewind_phi_fu_11688_p6 = data_280_V_read281_phi_reg_18586.read();
    } else {
        ap_phi_mux_data_280_V_read281_rewind_phi_fu_11688_p6 = data_280_V_read281_rewind_reg_11684.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_281_V_read282_phi_phi_fu_18603_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_281_V_read282_phi_phi_fu_18603_p4 = ap_phi_mux_data_281_V_read282_rewind_phi_fu_11702_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_281_V_read282_phi_phi_fu_18603_p4 = data_281_V_read.read();
    } else {
        ap_phi_mux_data_281_V_read282_phi_phi_fu_18603_p4 = ap_phi_reg_pp0_iter0_data_281_V_read282_phi_reg_18599.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_281_V_read282_rewind_phi_fu_11702_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_281_V_read282_rewind_phi_fu_11702_p6 = data_281_V_read282_phi_reg_18599.read();
    } else {
        ap_phi_mux_data_281_V_read282_rewind_phi_fu_11702_p6 = data_281_V_read282_rewind_reg_11698.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_282_V_read283_phi_phi_fu_18616_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_282_V_read283_phi_phi_fu_18616_p4 = ap_phi_mux_data_282_V_read283_rewind_phi_fu_11716_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_282_V_read283_phi_phi_fu_18616_p4 = data_282_V_read.read();
    } else {
        ap_phi_mux_data_282_V_read283_phi_phi_fu_18616_p4 = ap_phi_reg_pp0_iter0_data_282_V_read283_phi_reg_18612.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_282_V_read283_rewind_phi_fu_11716_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_282_V_read283_rewind_phi_fu_11716_p6 = data_282_V_read283_phi_reg_18612.read();
    } else {
        ap_phi_mux_data_282_V_read283_rewind_phi_fu_11716_p6 = data_282_V_read283_rewind_reg_11712.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_283_V_read284_phi_phi_fu_18629_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_283_V_read284_phi_phi_fu_18629_p4 = ap_phi_mux_data_283_V_read284_rewind_phi_fu_11730_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_283_V_read284_phi_phi_fu_18629_p4 = data_283_V_read.read();
    } else {
        ap_phi_mux_data_283_V_read284_phi_phi_fu_18629_p4 = ap_phi_reg_pp0_iter0_data_283_V_read284_phi_reg_18625.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_283_V_read284_rewind_phi_fu_11730_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_283_V_read284_rewind_phi_fu_11730_p6 = data_283_V_read284_phi_reg_18625.read();
    } else {
        ap_phi_mux_data_283_V_read284_rewind_phi_fu_11730_p6 = data_283_V_read284_rewind_reg_11726.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_284_V_read285_phi_phi_fu_18642_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_284_V_read285_phi_phi_fu_18642_p4 = ap_phi_mux_data_284_V_read285_rewind_phi_fu_11744_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_284_V_read285_phi_phi_fu_18642_p4 = data_284_V_read.read();
    } else {
        ap_phi_mux_data_284_V_read285_phi_phi_fu_18642_p4 = ap_phi_reg_pp0_iter0_data_284_V_read285_phi_reg_18638.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_284_V_read285_rewind_phi_fu_11744_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_284_V_read285_rewind_phi_fu_11744_p6 = data_284_V_read285_phi_reg_18638.read();
    } else {
        ap_phi_mux_data_284_V_read285_rewind_phi_fu_11744_p6 = data_284_V_read285_rewind_reg_11740.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_285_V_read286_phi_phi_fu_18655_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_285_V_read286_phi_phi_fu_18655_p4 = ap_phi_mux_data_285_V_read286_rewind_phi_fu_11758_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_285_V_read286_phi_phi_fu_18655_p4 = data_285_V_read.read();
    } else {
        ap_phi_mux_data_285_V_read286_phi_phi_fu_18655_p4 = ap_phi_reg_pp0_iter0_data_285_V_read286_phi_reg_18651.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_285_V_read286_rewind_phi_fu_11758_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_285_V_read286_rewind_phi_fu_11758_p6 = data_285_V_read286_phi_reg_18651.read();
    } else {
        ap_phi_mux_data_285_V_read286_rewind_phi_fu_11758_p6 = data_285_V_read286_rewind_reg_11754.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_286_V_read287_phi_phi_fu_18668_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_286_V_read287_phi_phi_fu_18668_p4 = ap_phi_mux_data_286_V_read287_rewind_phi_fu_11772_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_286_V_read287_phi_phi_fu_18668_p4 = data_286_V_read.read();
    } else {
        ap_phi_mux_data_286_V_read287_phi_phi_fu_18668_p4 = ap_phi_reg_pp0_iter0_data_286_V_read287_phi_reg_18664.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_286_V_read287_rewind_phi_fu_11772_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_286_V_read287_rewind_phi_fu_11772_p6 = data_286_V_read287_phi_reg_18664.read();
    } else {
        ap_phi_mux_data_286_V_read287_rewind_phi_fu_11772_p6 = data_286_V_read287_rewind_reg_11768.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_287_V_read288_phi_phi_fu_18681_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_287_V_read288_phi_phi_fu_18681_p4 = ap_phi_mux_data_287_V_read288_rewind_phi_fu_11786_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_287_V_read288_phi_phi_fu_18681_p4 = data_287_V_read.read();
    } else {
        ap_phi_mux_data_287_V_read288_phi_phi_fu_18681_p4 = ap_phi_reg_pp0_iter0_data_287_V_read288_phi_reg_18677.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_287_V_read288_rewind_phi_fu_11786_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_287_V_read288_rewind_phi_fu_11786_p6 = data_287_V_read288_phi_reg_18677.read();
    } else {
        ap_phi_mux_data_287_V_read288_rewind_phi_fu_11786_p6 = data_287_V_read288_rewind_reg_11782.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_288_V_read289_phi_phi_fu_18694_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_288_V_read289_phi_phi_fu_18694_p4 = ap_phi_mux_data_288_V_read289_rewind_phi_fu_11800_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_288_V_read289_phi_phi_fu_18694_p4 = data_288_V_read.read();
    } else {
        ap_phi_mux_data_288_V_read289_phi_phi_fu_18694_p4 = ap_phi_reg_pp0_iter0_data_288_V_read289_phi_reg_18690.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_288_V_read289_rewind_phi_fu_11800_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_288_V_read289_rewind_phi_fu_11800_p6 = data_288_V_read289_phi_reg_18690.read();
    } else {
        ap_phi_mux_data_288_V_read289_rewind_phi_fu_11800_p6 = data_288_V_read289_rewind_reg_11796.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_289_V_read290_phi_phi_fu_18707_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_289_V_read290_phi_phi_fu_18707_p4 = ap_phi_mux_data_289_V_read290_rewind_phi_fu_11814_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_289_V_read290_phi_phi_fu_18707_p4 = data_289_V_read.read();
    } else {
        ap_phi_mux_data_289_V_read290_phi_phi_fu_18707_p4 = ap_phi_reg_pp0_iter0_data_289_V_read290_phi_reg_18703.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_289_V_read290_rewind_phi_fu_11814_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_289_V_read290_rewind_phi_fu_11814_p6 = data_289_V_read290_phi_reg_18703.read();
    } else {
        ap_phi_mux_data_289_V_read290_rewind_phi_fu_11814_p6 = data_289_V_read290_rewind_reg_11810.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_28_V_read29_phi_phi_fu_15314_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_28_V_read29_phi_phi_fu_15314_p4 = ap_phi_mux_data_28_V_read29_rewind_phi_fu_8160_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_28_V_read29_phi_phi_fu_15314_p4 = data_28_V_read.read();
    } else {
        ap_phi_mux_data_28_V_read29_phi_phi_fu_15314_p4 = ap_phi_reg_pp0_iter0_data_28_V_read29_phi_reg_15310.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_28_V_read29_rewind_phi_fu_8160_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_28_V_read29_rewind_phi_fu_8160_p6 = data_28_V_read29_phi_reg_15310.read();
    } else {
        ap_phi_mux_data_28_V_read29_rewind_phi_fu_8160_p6 = data_28_V_read29_rewind_reg_8156.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_290_V_read291_phi_phi_fu_18720_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_290_V_read291_phi_phi_fu_18720_p4 = ap_phi_mux_data_290_V_read291_rewind_phi_fu_11828_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_290_V_read291_phi_phi_fu_18720_p4 = data_290_V_read.read();
    } else {
        ap_phi_mux_data_290_V_read291_phi_phi_fu_18720_p4 = ap_phi_reg_pp0_iter0_data_290_V_read291_phi_reg_18716.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_290_V_read291_rewind_phi_fu_11828_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_290_V_read291_rewind_phi_fu_11828_p6 = data_290_V_read291_phi_reg_18716.read();
    } else {
        ap_phi_mux_data_290_V_read291_rewind_phi_fu_11828_p6 = data_290_V_read291_rewind_reg_11824.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_291_V_read292_phi_phi_fu_18733_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_291_V_read292_phi_phi_fu_18733_p4 = ap_phi_mux_data_291_V_read292_rewind_phi_fu_11842_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_291_V_read292_phi_phi_fu_18733_p4 = data_291_V_read.read();
    } else {
        ap_phi_mux_data_291_V_read292_phi_phi_fu_18733_p4 = ap_phi_reg_pp0_iter0_data_291_V_read292_phi_reg_18729.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_291_V_read292_rewind_phi_fu_11842_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_291_V_read292_rewind_phi_fu_11842_p6 = data_291_V_read292_phi_reg_18729.read();
    } else {
        ap_phi_mux_data_291_V_read292_rewind_phi_fu_11842_p6 = data_291_V_read292_rewind_reg_11838.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_292_V_read293_phi_phi_fu_18746_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_292_V_read293_phi_phi_fu_18746_p4 = ap_phi_mux_data_292_V_read293_rewind_phi_fu_11856_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_292_V_read293_phi_phi_fu_18746_p4 = data_292_V_read.read();
    } else {
        ap_phi_mux_data_292_V_read293_phi_phi_fu_18746_p4 = ap_phi_reg_pp0_iter0_data_292_V_read293_phi_reg_18742.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_292_V_read293_rewind_phi_fu_11856_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_292_V_read293_rewind_phi_fu_11856_p6 = data_292_V_read293_phi_reg_18742.read();
    } else {
        ap_phi_mux_data_292_V_read293_rewind_phi_fu_11856_p6 = data_292_V_read293_rewind_reg_11852.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_293_V_read294_phi_phi_fu_18759_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_293_V_read294_phi_phi_fu_18759_p4 = ap_phi_mux_data_293_V_read294_rewind_phi_fu_11870_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_293_V_read294_phi_phi_fu_18759_p4 = data_293_V_read.read();
    } else {
        ap_phi_mux_data_293_V_read294_phi_phi_fu_18759_p4 = ap_phi_reg_pp0_iter0_data_293_V_read294_phi_reg_18755.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_293_V_read294_rewind_phi_fu_11870_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_293_V_read294_rewind_phi_fu_11870_p6 = data_293_V_read294_phi_reg_18755.read();
    } else {
        ap_phi_mux_data_293_V_read294_rewind_phi_fu_11870_p6 = data_293_V_read294_rewind_reg_11866.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_294_V_read295_phi_phi_fu_18772_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_294_V_read295_phi_phi_fu_18772_p4 = ap_phi_mux_data_294_V_read295_rewind_phi_fu_11884_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_294_V_read295_phi_phi_fu_18772_p4 = data_294_V_read.read();
    } else {
        ap_phi_mux_data_294_V_read295_phi_phi_fu_18772_p4 = ap_phi_reg_pp0_iter0_data_294_V_read295_phi_reg_18768.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_294_V_read295_rewind_phi_fu_11884_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_294_V_read295_rewind_phi_fu_11884_p6 = data_294_V_read295_phi_reg_18768.read();
    } else {
        ap_phi_mux_data_294_V_read295_rewind_phi_fu_11884_p6 = data_294_V_read295_rewind_reg_11880.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_295_V_read296_phi_phi_fu_18785_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_295_V_read296_phi_phi_fu_18785_p4 = ap_phi_mux_data_295_V_read296_rewind_phi_fu_11898_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_295_V_read296_phi_phi_fu_18785_p4 = data_295_V_read.read();
    } else {
        ap_phi_mux_data_295_V_read296_phi_phi_fu_18785_p4 = ap_phi_reg_pp0_iter0_data_295_V_read296_phi_reg_18781.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_295_V_read296_rewind_phi_fu_11898_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_295_V_read296_rewind_phi_fu_11898_p6 = data_295_V_read296_phi_reg_18781.read();
    } else {
        ap_phi_mux_data_295_V_read296_rewind_phi_fu_11898_p6 = data_295_V_read296_rewind_reg_11894.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_296_V_read297_phi_phi_fu_18798_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_296_V_read297_phi_phi_fu_18798_p4 = ap_phi_mux_data_296_V_read297_rewind_phi_fu_11912_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_296_V_read297_phi_phi_fu_18798_p4 = data_296_V_read.read();
    } else {
        ap_phi_mux_data_296_V_read297_phi_phi_fu_18798_p4 = ap_phi_reg_pp0_iter0_data_296_V_read297_phi_reg_18794.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_296_V_read297_rewind_phi_fu_11912_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_296_V_read297_rewind_phi_fu_11912_p6 = data_296_V_read297_phi_reg_18794.read();
    } else {
        ap_phi_mux_data_296_V_read297_rewind_phi_fu_11912_p6 = data_296_V_read297_rewind_reg_11908.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_297_V_read298_phi_phi_fu_18811_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_297_V_read298_phi_phi_fu_18811_p4 = ap_phi_mux_data_297_V_read298_rewind_phi_fu_11926_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_297_V_read298_phi_phi_fu_18811_p4 = data_297_V_read.read();
    } else {
        ap_phi_mux_data_297_V_read298_phi_phi_fu_18811_p4 = ap_phi_reg_pp0_iter0_data_297_V_read298_phi_reg_18807.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_297_V_read298_rewind_phi_fu_11926_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_297_V_read298_rewind_phi_fu_11926_p6 = data_297_V_read298_phi_reg_18807.read();
    } else {
        ap_phi_mux_data_297_V_read298_rewind_phi_fu_11926_p6 = data_297_V_read298_rewind_reg_11922.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_298_V_read299_phi_phi_fu_18824_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_298_V_read299_phi_phi_fu_18824_p4 = ap_phi_mux_data_298_V_read299_rewind_phi_fu_11940_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_298_V_read299_phi_phi_fu_18824_p4 = data_298_V_read.read();
    } else {
        ap_phi_mux_data_298_V_read299_phi_phi_fu_18824_p4 = ap_phi_reg_pp0_iter0_data_298_V_read299_phi_reg_18820.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_298_V_read299_rewind_phi_fu_11940_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_298_V_read299_rewind_phi_fu_11940_p6 = data_298_V_read299_phi_reg_18820.read();
    } else {
        ap_phi_mux_data_298_V_read299_rewind_phi_fu_11940_p6 = data_298_V_read299_rewind_reg_11936.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_299_V_read300_phi_phi_fu_18837_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_299_V_read300_phi_phi_fu_18837_p4 = ap_phi_mux_data_299_V_read300_rewind_phi_fu_11954_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_299_V_read300_phi_phi_fu_18837_p4 = data_299_V_read.read();
    } else {
        ap_phi_mux_data_299_V_read300_phi_phi_fu_18837_p4 = ap_phi_reg_pp0_iter0_data_299_V_read300_phi_reg_18833.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_299_V_read300_rewind_phi_fu_11954_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_299_V_read300_rewind_phi_fu_11954_p6 = data_299_V_read300_phi_reg_18833.read();
    } else {
        ap_phi_mux_data_299_V_read300_rewind_phi_fu_11954_p6 = data_299_V_read300_rewind_reg_11950.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_29_V_read30_phi_phi_fu_15327_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_29_V_read30_phi_phi_fu_15327_p4 = ap_phi_mux_data_29_V_read30_rewind_phi_fu_8174_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_29_V_read30_phi_phi_fu_15327_p4 = data_29_V_read.read();
    } else {
        ap_phi_mux_data_29_V_read30_phi_phi_fu_15327_p4 = ap_phi_reg_pp0_iter0_data_29_V_read30_phi_reg_15323.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_29_V_read30_rewind_phi_fu_8174_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_29_V_read30_rewind_phi_fu_8174_p6 = data_29_V_read30_phi_reg_15323.read();
    } else {
        ap_phi_mux_data_29_V_read30_rewind_phi_fu_8174_p6 = data_29_V_read30_rewind_reg_8170.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_2_V_read3_phi_phi_fu_14976_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_2_V_read3_phi_phi_fu_14976_p4 = ap_phi_mux_data_2_V_read3_rewind_phi_fu_7796_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_2_V_read3_phi_phi_fu_14976_p4 = data_2_V_read.read();
    } else {
        ap_phi_mux_data_2_V_read3_phi_phi_fu_14976_p4 = ap_phi_reg_pp0_iter0_data_2_V_read3_phi_reg_14972.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_2_V_read3_rewind_phi_fu_7796_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2_V_read3_rewind_phi_fu_7796_p6 = data_2_V_read3_phi_reg_14972.read();
    } else {
        ap_phi_mux_data_2_V_read3_rewind_phi_fu_7796_p6 = data_2_V_read3_rewind_reg_7792.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_300_V_read301_phi_phi_fu_18850_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_300_V_read301_phi_phi_fu_18850_p4 = ap_phi_mux_data_300_V_read301_rewind_phi_fu_11968_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_300_V_read301_phi_phi_fu_18850_p4 = data_300_V_read.read();
    } else {
        ap_phi_mux_data_300_V_read301_phi_phi_fu_18850_p4 = ap_phi_reg_pp0_iter0_data_300_V_read301_phi_reg_18846.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_300_V_read301_rewind_phi_fu_11968_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_300_V_read301_rewind_phi_fu_11968_p6 = data_300_V_read301_phi_reg_18846.read();
    } else {
        ap_phi_mux_data_300_V_read301_rewind_phi_fu_11968_p6 = data_300_V_read301_rewind_reg_11964.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_301_V_read302_phi_phi_fu_18863_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_301_V_read302_phi_phi_fu_18863_p4 = ap_phi_mux_data_301_V_read302_rewind_phi_fu_11982_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_301_V_read302_phi_phi_fu_18863_p4 = data_301_V_read.read();
    } else {
        ap_phi_mux_data_301_V_read302_phi_phi_fu_18863_p4 = ap_phi_reg_pp0_iter0_data_301_V_read302_phi_reg_18859.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_301_V_read302_rewind_phi_fu_11982_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_301_V_read302_rewind_phi_fu_11982_p6 = data_301_V_read302_phi_reg_18859.read();
    } else {
        ap_phi_mux_data_301_V_read302_rewind_phi_fu_11982_p6 = data_301_V_read302_rewind_reg_11978.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_302_V_read303_phi_phi_fu_18876_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_302_V_read303_phi_phi_fu_18876_p4 = ap_phi_mux_data_302_V_read303_rewind_phi_fu_11996_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_302_V_read303_phi_phi_fu_18876_p4 = data_302_V_read.read();
    } else {
        ap_phi_mux_data_302_V_read303_phi_phi_fu_18876_p4 = ap_phi_reg_pp0_iter0_data_302_V_read303_phi_reg_18872.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_302_V_read303_rewind_phi_fu_11996_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_302_V_read303_rewind_phi_fu_11996_p6 = data_302_V_read303_phi_reg_18872.read();
    } else {
        ap_phi_mux_data_302_V_read303_rewind_phi_fu_11996_p6 = data_302_V_read303_rewind_reg_11992.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_303_V_read304_phi_phi_fu_18889_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_303_V_read304_phi_phi_fu_18889_p4 = ap_phi_mux_data_303_V_read304_rewind_phi_fu_12010_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_303_V_read304_phi_phi_fu_18889_p4 = data_303_V_read.read();
    } else {
        ap_phi_mux_data_303_V_read304_phi_phi_fu_18889_p4 = ap_phi_reg_pp0_iter0_data_303_V_read304_phi_reg_18885.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_303_V_read304_rewind_phi_fu_12010_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_303_V_read304_rewind_phi_fu_12010_p6 = data_303_V_read304_phi_reg_18885.read();
    } else {
        ap_phi_mux_data_303_V_read304_rewind_phi_fu_12010_p6 = data_303_V_read304_rewind_reg_12006.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_304_V_read305_phi_phi_fu_18902_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_304_V_read305_phi_phi_fu_18902_p4 = ap_phi_mux_data_304_V_read305_rewind_phi_fu_12024_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_304_V_read305_phi_phi_fu_18902_p4 = data_304_V_read.read();
    } else {
        ap_phi_mux_data_304_V_read305_phi_phi_fu_18902_p4 = ap_phi_reg_pp0_iter0_data_304_V_read305_phi_reg_18898.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_304_V_read305_rewind_phi_fu_12024_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_304_V_read305_rewind_phi_fu_12024_p6 = data_304_V_read305_phi_reg_18898.read();
    } else {
        ap_phi_mux_data_304_V_read305_rewind_phi_fu_12024_p6 = data_304_V_read305_rewind_reg_12020.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_305_V_read306_phi_phi_fu_18915_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_305_V_read306_phi_phi_fu_18915_p4 = ap_phi_mux_data_305_V_read306_rewind_phi_fu_12038_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_305_V_read306_phi_phi_fu_18915_p4 = data_305_V_read.read();
    } else {
        ap_phi_mux_data_305_V_read306_phi_phi_fu_18915_p4 = ap_phi_reg_pp0_iter0_data_305_V_read306_phi_reg_18911.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_305_V_read306_rewind_phi_fu_12038_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_305_V_read306_rewind_phi_fu_12038_p6 = data_305_V_read306_phi_reg_18911.read();
    } else {
        ap_phi_mux_data_305_V_read306_rewind_phi_fu_12038_p6 = data_305_V_read306_rewind_reg_12034.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_306_V_read307_phi_phi_fu_18928_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_306_V_read307_phi_phi_fu_18928_p4 = ap_phi_mux_data_306_V_read307_rewind_phi_fu_12052_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_306_V_read307_phi_phi_fu_18928_p4 = data_306_V_read.read();
    } else {
        ap_phi_mux_data_306_V_read307_phi_phi_fu_18928_p4 = ap_phi_reg_pp0_iter0_data_306_V_read307_phi_reg_18924.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_306_V_read307_rewind_phi_fu_12052_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_306_V_read307_rewind_phi_fu_12052_p6 = data_306_V_read307_phi_reg_18924.read();
    } else {
        ap_phi_mux_data_306_V_read307_rewind_phi_fu_12052_p6 = data_306_V_read307_rewind_reg_12048.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_307_V_read308_phi_phi_fu_18941_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_307_V_read308_phi_phi_fu_18941_p4 = ap_phi_mux_data_307_V_read308_rewind_phi_fu_12066_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_307_V_read308_phi_phi_fu_18941_p4 = data_307_V_read.read();
    } else {
        ap_phi_mux_data_307_V_read308_phi_phi_fu_18941_p4 = ap_phi_reg_pp0_iter0_data_307_V_read308_phi_reg_18937.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_307_V_read308_rewind_phi_fu_12066_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_307_V_read308_rewind_phi_fu_12066_p6 = data_307_V_read308_phi_reg_18937.read();
    } else {
        ap_phi_mux_data_307_V_read308_rewind_phi_fu_12066_p6 = data_307_V_read308_rewind_reg_12062.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_308_V_read309_phi_phi_fu_18954_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_308_V_read309_phi_phi_fu_18954_p4 = ap_phi_mux_data_308_V_read309_rewind_phi_fu_12080_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_308_V_read309_phi_phi_fu_18954_p4 = data_308_V_read.read();
    } else {
        ap_phi_mux_data_308_V_read309_phi_phi_fu_18954_p4 = ap_phi_reg_pp0_iter0_data_308_V_read309_phi_reg_18950.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_308_V_read309_rewind_phi_fu_12080_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_308_V_read309_rewind_phi_fu_12080_p6 = data_308_V_read309_phi_reg_18950.read();
    } else {
        ap_phi_mux_data_308_V_read309_rewind_phi_fu_12080_p6 = data_308_V_read309_rewind_reg_12076.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_309_V_read310_phi_phi_fu_18967_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_309_V_read310_phi_phi_fu_18967_p4 = ap_phi_mux_data_309_V_read310_rewind_phi_fu_12094_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_309_V_read310_phi_phi_fu_18967_p4 = data_309_V_read.read();
    } else {
        ap_phi_mux_data_309_V_read310_phi_phi_fu_18967_p4 = ap_phi_reg_pp0_iter0_data_309_V_read310_phi_reg_18963.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_309_V_read310_rewind_phi_fu_12094_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_309_V_read310_rewind_phi_fu_12094_p6 = data_309_V_read310_phi_reg_18963.read();
    } else {
        ap_phi_mux_data_309_V_read310_rewind_phi_fu_12094_p6 = data_309_V_read310_rewind_reg_12090.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_30_V_read31_phi_phi_fu_15340_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_30_V_read31_phi_phi_fu_15340_p4 = ap_phi_mux_data_30_V_read31_rewind_phi_fu_8188_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_30_V_read31_phi_phi_fu_15340_p4 = data_30_V_read.read();
    } else {
        ap_phi_mux_data_30_V_read31_phi_phi_fu_15340_p4 = ap_phi_reg_pp0_iter0_data_30_V_read31_phi_reg_15336.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_30_V_read31_rewind_phi_fu_8188_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_30_V_read31_rewind_phi_fu_8188_p6 = data_30_V_read31_phi_reg_15336.read();
    } else {
        ap_phi_mux_data_30_V_read31_rewind_phi_fu_8188_p6 = data_30_V_read31_rewind_reg_8184.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_310_V_read311_phi_phi_fu_18980_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_310_V_read311_phi_phi_fu_18980_p4 = ap_phi_mux_data_310_V_read311_rewind_phi_fu_12108_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_310_V_read311_phi_phi_fu_18980_p4 = data_310_V_read.read();
    } else {
        ap_phi_mux_data_310_V_read311_phi_phi_fu_18980_p4 = ap_phi_reg_pp0_iter0_data_310_V_read311_phi_reg_18976.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_310_V_read311_rewind_phi_fu_12108_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_310_V_read311_rewind_phi_fu_12108_p6 = data_310_V_read311_phi_reg_18976.read();
    } else {
        ap_phi_mux_data_310_V_read311_rewind_phi_fu_12108_p6 = data_310_V_read311_rewind_reg_12104.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_311_V_read312_phi_phi_fu_18993_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_311_V_read312_phi_phi_fu_18993_p4 = ap_phi_mux_data_311_V_read312_rewind_phi_fu_12122_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_311_V_read312_phi_phi_fu_18993_p4 = data_311_V_read.read();
    } else {
        ap_phi_mux_data_311_V_read312_phi_phi_fu_18993_p4 = ap_phi_reg_pp0_iter0_data_311_V_read312_phi_reg_18989.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_311_V_read312_rewind_phi_fu_12122_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_311_V_read312_rewind_phi_fu_12122_p6 = data_311_V_read312_phi_reg_18989.read();
    } else {
        ap_phi_mux_data_311_V_read312_rewind_phi_fu_12122_p6 = data_311_V_read312_rewind_reg_12118.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_312_V_read313_phi_phi_fu_19006_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_312_V_read313_phi_phi_fu_19006_p4 = ap_phi_mux_data_312_V_read313_rewind_phi_fu_12136_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_312_V_read313_phi_phi_fu_19006_p4 = data_312_V_read.read();
    } else {
        ap_phi_mux_data_312_V_read313_phi_phi_fu_19006_p4 = ap_phi_reg_pp0_iter0_data_312_V_read313_phi_reg_19002.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_312_V_read313_rewind_phi_fu_12136_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_312_V_read313_rewind_phi_fu_12136_p6 = data_312_V_read313_phi_reg_19002.read();
    } else {
        ap_phi_mux_data_312_V_read313_rewind_phi_fu_12136_p6 = data_312_V_read313_rewind_reg_12132.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_313_V_read314_phi_phi_fu_19019_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_313_V_read314_phi_phi_fu_19019_p4 = ap_phi_mux_data_313_V_read314_rewind_phi_fu_12150_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_313_V_read314_phi_phi_fu_19019_p4 = data_313_V_read.read();
    } else {
        ap_phi_mux_data_313_V_read314_phi_phi_fu_19019_p4 = ap_phi_reg_pp0_iter0_data_313_V_read314_phi_reg_19015.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_313_V_read314_rewind_phi_fu_12150_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_313_V_read314_rewind_phi_fu_12150_p6 = data_313_V_read314_phi_reg_19015.read();
    } else {
        ap_phi_mux_data_313_V_read314_rewind_phi_fu_12150_p6 = data_313_V_read314_rewind_reg_12146.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_314_V_read315_phi_phi_fu_19032_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_314_V_read315_phi_phi_fu_19032_p4 = ap_phi_mux_data_314_V_read315_rewind_phi_fu_12164_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_314_V_read315_phi_phi_fu_19032_p4 = data_314_V_read.read();
    } else {
        ap_phi_mux_data_314_V_read315_phi_phi_fu_19032_p4 = ap_phi_reg_pp0_iter0_data_314_V_read315_phi_reg_19028.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_314_V_read315_rewind_phi_fu_12164_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_314_V_read315_rewind_phi_fu_12164_p6 = data_314_V_read315_phi_reg_19028.read();
    } else {
        ap_phi_mux_data_314_V_read315_rewind_phi_fu_12164_p6 = data_314_V_read315_rewind_reg_12160.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_315_V_read316_phi_phi_fu_19045_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_315_V_read316_phi_phi_fu_19045_p4 = ap_phi_mux_data_315_V_read316_rewind_phi_fu_12178_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_315_V_read316_phi_phi_fu_19045_p4 = data_315_V_read.read();
    } else {
        ap_phi_mux_data_315_V_read316_phi_phi_fu_19045_p4 = ap_phi_reg_pp0_iter0_data_315_V_read316_phi_reg_19041.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_315_V_read316_rewind_phi_fu_12178_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_315_V_read316_rewind_phi_fu_12178_p6 = data_315_V_read316_phi_reg_19041.read();
    } else {
        ap_phi_mux_data_315_V_read316_rewind_phi_fu_12178_p6 = data_315_V_read316_rewind_reg_12174.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_316_V_read317_phi_phi_fu_19058_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_316_V_read317_phi_phi_fu_19058_p4 = ap_phi_mux_data_316_V_read317_rewind_phi_fu_12192_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_316_V_read317_phi_phi_fu_19058_p4 = data_316_V_read.read();
    } else {
        ap_phi_mux_data_316_V_read317_phi_phi_fu_19058_p4 = ap_phi_reg_pp0_iter0_data_316_V_read317_phi_reg_19054.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_316_V_read317_rewind_phi_fu_12192_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_316_V_read317_rewind_phi_fu_12192_p6 = data_316_V_read317_phi_reg_19054.read();
    } else {
        ap_phi_mux_data_316_V_read317_rewind_phi_fu_12192_p6 = data_316_V_read317_rewind_reg_12188.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_317_V_read318_phi_phi_fu_19071_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_317_V_read318_phi_phi_fu_19071_p4 = ap_phi_mux_data_317_V_read318_rewind_phi_fu_12206_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_317_V_read318_phi_phi_fu_19071_p4 = data_317_V_read.read();
    } else {
        ap_phi_mux_data_317_V_read318_phi_phi_fu_19071_p4 = ap_phi_reg_pp0_iter0_data_317_V_read318_phi_reg_19067.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_317_V_read318_rewind_phi_fu_12206_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_317_V_read318_rewind_phi_fu_12206_p6 = data_317_V_read318_phi_reg_19067.read();
    } else {
        ap_phi_mux_data_317_V_read318_rewind_phi_fu_12206_p6 = data_317_V_read318_rewind_reg_12202.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_318_V_read319_phi_phi_fu_19084_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_318_V_read319_phi_phi_fu_19084_p4 = ap_phi_mux_data_318_V_read319_rewind_phi_fu_12220_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_318_V_read319_phi_phi_fu_19084_p4 = data_318_V_read.read();
    } else {
        ap_phi_mux_data_318_V_read319_phi_phi_fu_19084_p4 = ap_phi_reg_pp0_iter0_data_318_V_read319_phi_reg_19080.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_318_V_read319_rewind_phi_fu_12220_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_318_V_read319_rewind_phi_fu_12220_p6 = data_318_V_read319_phi_reg_19080.read();
    } else {
        ap_phi_mux_data_318_V_read319_rewind_phi_fu_12220_p6 = data_318_V_read319_rewind_reg_12216.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_319_V_read320_phi_phi_fu_19097_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_319_V_read320_phi_phi_fu_19097_p4 = ap_phi_mux_data_319_V_read320_rewind_phi_fu_12234_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_319_V_read320_phi_phi_fu_19097_p4 = data_319_V_read.read();
    } else {
        ap_phi_mux_data_319_V_read320_phi_phi_fu_19097_p4 = ap_phi_reg_pp0_iter0_data_319_V_read320_phi_reg_19093.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_319_V_read320_rewind_phi_fu_12234_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_319_V_read320_rewind_phi_fu_12234_p6 = data_319_V_read320_phi_reg_19093.read();
    } else {
        ap_phi_mux_data_319_V_read320_rewind_phi_fu_12234_p6 = data_319_V_read320_rewind_reg_12230.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_31_V_read32_phi_phi_fu_15353_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_31_V_read32_phi_phi_fu_15353_p4 = ap_phi_mux_data_31_V_read32_rewind_phi_fu_8202_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_31_V_read32_phi_phi_fu_15353_p4 = data_31_V_read.read();
    } else {
        ap_phi_mux_data_31_V_read32_phi_phi_fu_15353_p4 = ap_phi_reg_pp0_iter0_data_31_V_read32_phi_reg_15349.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_31_V_read32_rewind_phi_fu_8202_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_31_V_read32_rewind_phi_fu_8202_p6 = data_31_V_read32_phi_reg_15349.read();
    } else {
        ap_phi_mux_data_31_V_read32_rewind_phi_fu_8202_p6 = data_31_V_read32_rewind_reg_8198.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_320_V_read321_phi_phi_fu_19110_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_320_V_read321_phi_phi_fu_19110_p4 = ap_phi_mux_data_320_V_read321_rewind_phi_fu_12248_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_320_V_read321_phi_phi_fu_19110_p4 = data_320_V_read.read();
    } else {
        ap_phi_mux_data_320_V_read321_phi_phi_fu_19110_p4 = ap_phi_reg_pp0_iter0_data_320_V_read321_phi_reg_19106.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_320_V_read321_rewind_phi_fu_12248_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_320_V_read321_rewind_phi_fu_12248_p6 = data_320_V_read321_phi_reg_19106.read();
    } else {
        ap_phi_mux_data_320_V_read321_rewind_phi_fu_12248_p6 = data_320_V_read321_rewind_reg_12244.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_321_V_read322_phi_phi_fu_19123_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_321_V_read322_phi_phi_fu_19123_p4 = ap_phi_mux_data_321_V_read322_rewind_phi_fu_12262_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_321_V_read322_phi_phi_fu_19123_p4 = data_321_V_read.read();
    } else {
        ap_phi_mux_data_321_V_read322_phi_phi_fu_19123_p4 = ap_phi_reg_pp0_iter0_data_321_V_read322_phi_reg_19119.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_321_V_read322_rewind_phi_fu_12262_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_321_V_read322_rewind_phi_fu_12262_p6 = data_321_V_read322_phi_reg_19119.read();
    } else {
        ap_phi_mux_data_321_V_read322_rewind_phi_fu_12262_p6 = data_321_V_read322_rewind_reg_12258.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_322_V_read323_phi_phi_fu_19136_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_322_V_read323_phi_phi_fu_19136_p4 = ap_phi_mux_data_322_V_read323_rewind_phi_fu_12276_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_322_V_read323_phi_phi_fu_19136_p4 = data_322_V_read.read();
    } else {
        ap_phi_mux_data_322_V_read323_phi_phi_fu_19136_p4 = ap_phi_reg_pp0_iter0_data_322_V_read323_phi_reg_19132.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_322_V_read323_rewind_phi_fu_12276_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_322_V_read323_rewind_phi_fu_12276_p6 = data_322_V_read323_phi_reg_19132.read();
    } else {
        ap_phi_mux_data_322_V_read323_rewind_phi_fu_12276_p6 = data_322_V_read323_rewind_reg_12272.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_323_V_read324_phi_phi_fu_19149_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_323_V_read324_phi_phi_fu_19149_p4 = ap_phi_mux_data_323_V_read324_rewind_phi_fu_12290_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_323_V_read324_phi_phi_fu_19149_p4 = data_323_V_read.read();
    } else {
        ap_phi_mux_data_323_V_read324_phi_phi_fu_19149_p4 = ap_phi_reg_pp0_iter0_data_323_V_read324_phi_reg_19145.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_323_V_read324_rewind_phi_fu_12290_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_323_V_read324_rewind_phi_fu_12290_p6 = data_323_V_read324_phi_reg_19145.read();
    } else {
        ap_phi_mux_data_323_V_read324_rewind_phi_fu_12290_p6 = data_323_V_read324_rewind_reg_12286.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_324_V_read325_phi_phi_fu_19162_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_324_V_read325_phi_phi_fu_19162_p4 = ap_phi_mux_data_324_V_read325_rewind_phi_fu_12304_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_324_V_read325_phi_phi_fu_19162_p4 = data_324_V_read.read();
    } else {
        ap_phi_mux_data_324_V_read325_phi_phi_fu_19162_p4 = ap_phi_reg_pp0_iter0_data_324_V_read325_phi_reg_19158.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_324_V_read325_rewind_phi_fu_12304_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_324_V_read325_rewind_phi_fu_12304_p6 = data_324_V_read325_phi_reg_19158.read();
    } else {
        ap_phi_mux_data_324_V_read325_rewind_phi_fu_12304_p6 = data_324_V_read325_rewind_reg_12300.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_325_V_read326_phi_phi_fu_19175_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_325_V_read326_phi_phi_fu_19175_p4 = ap_phi_mux_data_325_V_read326_rewind_phi_fu_12318_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_325_V_read326_phi_phi_fu_19175_p4 = data_325_V_read.read();
    } else {
        ap_phi_mux_data_325_V_read326_phi_phi_fu_19175_p4 = ap_phi_reg_pp0_iter0_data_325_V_read326_phi_reg_19171.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_325_V_read326_rewind_phi_fu_12318_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_325_V_read326_rewind_phi_fu_12318_p6 = data_325_V_read326_phi_reg_19171.read();
    } else {
        ap_phi_mux_data_325_V_read326_rewind_phi_fu_12318_p6 = data_325_V_read326_rewind_reg_12314.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_326_V_read327_phi_phi_fu_19188_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_326_V_read327_phi_phi_fu_19188_p4 = ap_phi_mux_data_326_V_read327_rewind_phi_fu_12332_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_326_V_read327_phi_phi_fu_19188_p4 = data_326_V_read.read();
    } else {
        ap_phi_mux_data_326_V_read327_phi_phi_fu_19188_p4 = ap_phi_reg_pp0_iter0_data_326_V_read327_phi_reg_19184.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_326_V_read327_rewind_phi_fu_12332_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_326_V_read327_rewind_phi_fu_12332_p6 = data_326_V_read327_phi_reg_19184.read();
    } else {
        ap_phi_mux_data_326_V_read327_rewind_phi_fu_12332_p6 = data_326_V_read327_rewind_reg_12328.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_327_V_read328_phi_phi_fu_19201_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_327_V_read328_phi_phi_fu_19201_p4 = ap_phi_mux_data_327_V_read328_rewind_phi_fu_12346_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_327_V_read328_phi_phi_fu_19201_p4 = data_327_V_read.read();
    } else {
        ap_phi_mux_data_327_V_read328_phi_phi_fu_19201_p4 = ap_phi_reg_pp0_iter0_data_327_V_read328_phi_reg_19197.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_327_V_read328_rewind_phi_fu_12346_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_327_V_read328_rewind_phi_fu_12346_p6 = data_327_V_read328_phi_reg_19197.read();
    } else {
        ap_phi_mux_data_327_V_read328_rewind_phi_fu_12346_p6 = data_327_V_read328_rewind_reg_12342.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_328_V_read329_phi_phi_fu_19214_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_328_V_read329_phi_phi_fu_19214_p4 = ap_phi_mux_data_328_V_read329_rewind_phi_fu_12360_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_328_V_read329_phi_phi_fu_19214_p4 = data_328_V_read.read();
    } else {
        ap_phi_mux_data_328_V_read329_phi_phi_fu_19214_p4 = ap_phi_reg_pp0_iter0_data_328_V_read329_phi_reg_19210.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_328_V_read329_rewind_phi_fu_12360_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_328_V_read329_rewind_phi_fu_12360_p6 = data_328_V_read329_phi_reg_19210.read();
    } else {
        ap_phi_mux_data_328_V_read329_rewind_phi_fu_12360_p6 = data_328_V_read329_rewind_reg_12356.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_329_V_read330_phi_phi_fu_19227_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_329_V_read330_phi_phi_fu_19227_p4 = ap_phi_mux_data_329_V_read330_rewind_phi_fu_12374_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_329_V_read330_phi_phi_fu_19227_p4 = data_329_V_read.read();
    } else {
        ap_phi_mux_data_329_V_read330_phi_phi_fu_19227_p4 = ap_phi_reg_pp0_iter0_data_329_V_read330_phi_reg_19223.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_329_V_read330_rewind_phi_fu_12374_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_329_V_read330_rewind_phi_fu_12374_p6 = data_329_V_read330_phi_reg_19223.read();
    } else {
        ap_phi_mux_data_329_V_read330_rewind_phi_fu_12374_p6 = data_329_V_read330_rewind_reg_12370.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_32_V_read33_phi_phi_fu_15366_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_32_V_read33_phi_phi_fu_15366_p4 = ap_phi_mux_data_32_V_read33_rewind_phi_fu_8216_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_32_V_read33_phi_phi_fu_15366_p4 = data_32_V_read.read();
    } else {
        ap_phi_mux_data_32_V_read33_phi_phi_fu_15366_p4 = ap_phi_reg_pp0_iter0_data_32_V_read33_phi_reg_15362.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_32_V_read33_rewind_phi_fu_8216_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_32_V_read33_rewind_phi_fu_8216_p6 = data_32_V_read33_phi_reg_15362.read();
    } else {
        ap_phi_mux_data_32_V_read33_rewind_phi_fu_8216_p6 = data_32_V_read33_rewind_reg_8212.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_330_V_read331_phi_phi_fu_19240_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_330_V_read331_phi_phi_fu_19240_p4 = ap_phi_mux_data_330_V_read331_rewind_phi_fu_12388_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_330_V_read331_phi_phi_fu_19240_p4 = data_330_V_read.read();
    } else {
        ap_phi_mux_data_330_V_read331_phi_phi_fu_19240_p4 = ap_phi_reg_pp0_iter0_data_330_V_read331_phi_reg_19236.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_330_V_read331_rewind_phi_fu_12388_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_330_V_read331_rewind_phi_fu_12388_p6 = data_330_V_read331_phi_reg_19236.read();
    } else {
        ap_phi_mux_data_330_V_read331_rewind_phi_fu_12388_p6 = data_330_V_read331_rewind_reg_12384.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_331_V_read332_phi_phi_fu_19253_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_331_V_read332_phi_phi_fu_19253_p4 = ap_phi_mux_data_331_V_read332_rewind_phi_fu_12402_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_331_V_read332_phi_phi_fu_19253_p4 = data_331_V_read.read();
    } else {
        ap_phi_mux_data_331_V_read332_phi_phi_fu_19253_p4 = ap_phi_reg_pp0_iter0_data_331_V_read332_phi_reg_19249.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_331_V_read332_rewind_phi_fu_12402_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_331_V_read332_rewind_phi_fu_12402_p6 = data_331_V_read332_phi_reg_19249.read();
    } else {
        ap_phi_mux_data_331_V_read332_rewind_phi_fu_12402_p6 = data_331_V_read332_rewind_reg_12398.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_332_V_read333_phi_phi_fu_19266_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_332_V_read333_phi_phi_fu_19266_p4 = ap_phi_mux_data_332_V_read333_rewind_phi_fu_12416_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_332_V_read333_phi_phi_fu_19266_p4 = data_332_V_read.read();
    } else {
        ap_phi_mux_data_332_V_read333_phi_phi_fu_19266_p4 = ap_phi_reg_pp0_iter0_data_332_V_read333_phi_reg_19262.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_332_V_read333_rewind_phi_fu_12416_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_332_V_read333_rewind_phi_fu_12416_p6 = data_332_V_read333_phi_reg_19262.read();
    } else {
        ap_phi_mux_data_332_V_read333_rewind_phi_fu_12416_p6 = data_332_V_read333_rewind_reg_12412.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_333_V_read334_phi_phi_fu_19279_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_333_V_read334_phi_phi_fu_19279_p4 = ap_phi_mux_data_333_V_read334_rewind_phi_fu_12430_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_333_V_read334_phi_phi_fu_19279_p4 = data_333_V_read.read();
    } else {
        ap_phi_mux_data_333_V_read334_phi_phi_fu_19279_p4 = ap_phi_reg_pp0_iter0_data_333_V_read334_phi_reg_19275.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_333_V_read334_rewind_phi_fu_12430_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_333_V_read334_rewind_phi_fu_12430_p6 = data_333_V_read334_phi_reg_19275.read();
    } else {
        ap_phi_mux_data_333_V_read334_rewind_phi_fu_12430_p6 = data_333_V_read334_rewind_reg_12426.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_334_V_read335_phi_phi_fu_19292_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_334_V_read335_phi_phi_fu_19292_p4 = ap_phi_mux_data_334_V_read335_rewind_phi_fu_12444_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_334_V_read335_phi_phi_fu_19292_p4 = data_334_V_read.read();
    } else {
        ap_phi_mux_data_334_V_read335_phi_phi_fu_19292_p4 = ap_phi_reg_pp0_iter0_data_334_V_read335_phi_reg_19288.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_334_V_read335_rewind_phi_fu_12444_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_334_V_read335_rewind_phi_fu_12444_p6 = data_334_V_read335_phi_reg_19288.read();
    } else {
        ap_phi_mux_data_334_V_read335_rewind_phi_fu_12444_p6 = data_334_V_read335_rewind_reg_12440.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_335_V_read336_phi_phi_fu_19305_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_335_V_read336_phi_phi_fu_19305_p4 = ap_phi_mux_data_335_V_read336_rewind_phi_fu_12458_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_335_V_read336_phi_phi_fu_19305_p4 = data_335_V_read.read();
    } else {
        ap_phi_mux_data_335_V_read336_phi_phi_fu_19305_p4 = ap_phi_reg_pp0_iter0_data_335_V_read336_phi_reg_19301.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_335_V_read336_rewind_phi_fu_12458_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_335_V_read336_rewind_phi_fu_12458_p6 = data_335_V_read336_phi_reg_19301.read();
    } else {
        ap_phi_mux_data_335_V_read336_rewind_phi_fu_12458_p6 = data_335_V_read336_rewind_reg_12454.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_336_V_read337_phi_phi_fu_19318_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_336_V_read337_phi_phi_fu_19318_p4 = ap_phi_mux_data_336_V_read337_rewind_phi_fu_12472_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_336_V_read337_phi_phi_fu_19318_p4 = data_336_V_read.read();
    } else {
        ap_phi_mux_data_336_V_read337_phi_phi_fu_19318_p4 = ap_phi_reg_pp0_iter0_data_336_V_read337_phi_reg_19314.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_336_V_read337_rewind_phi_fu_12472_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_336_V_read337_rewind_phi_fu_12472_p6 = data_336_V_read337_phi_reg_19314.read();
    } else {
        ap_phi_mux_data_336_V_read337_rewind_phi_fu_12472_p6 = data_336_V_read337_rewind_reg_12468.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_337_V_read338_phi_phi_fu_19331_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_337_V_read338_phi_phi_fu_19331_p4 = ap_phi_mux_data_337_V_read338_rewind_phi_fu_12486_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_337_V_read338_phi_phi_fu_19331_p4 = data_337_V_read.read();
    } else {
        ap_phi_mux_data_337_V_read338_phi_phi_fu_19331_p4 = ap_phi_reg_pp0_iter0_data_337_V_read338_phi_reg_19327.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_337_V_read338_rewind_phi_fu_12486_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_337_V_read338_rewind_phi_fu_12486_p6 = data_337_V_read338_phi_reg_19327.read();
    } else {
        ap_phi_mux_data_337_V_read338_rewind_phi_fu_12486_p6 = data_337_V_read338_rewind_reg_12482.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_338_V_read339_phi_phi_fu_19344_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_338_V_read339_phi_phi_fu_19344_p4 = ap_phi_mux_data_338_V_read339_rewind_phi_fu_12500_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_338_V_read339_phi_phi_fu_19344_p4 = data_338_V_read.read();
    } else {
        ap_phi_mux_data_338_V_read339_phi_phi_fu_19344_p4 = ap_phi_reg_pp0_iter0_data_338_V_read339_phi_reg_19340.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_338_V_read339_rewind_phi_fu_12500_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_338_V_read339_rewind_phi_fu_12500_p6 = data_338_V_read339_phi_reg_19340.read();
    } else {
        ap_phi_mux_data_338_V_read339_rewind_phi_fu_12500_p6 = data_338_V_read339_rewind_reg_12496.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_339_V_read340_phi_phi_fu_19357_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_339_V_read340_phi_phi_fu_19357_p4 = ap_phi_mux_data_339_V_read340_rewind_phi_fu_12514_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_339_V_read340_phi_phi_fu_19357_p4 = data_339_V_read.read();
    } else {
        ap_phi_mux_data_339_V_read340_phi_phi_fu_19357_p4 = ap_phi_reg_pp0_iter0_data_339_V_read340_phi_reg_19353.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_339_V_read340_rewind_phi_fu_12514_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_339_V_read340_rewind_phi_fu_12514_p6 = data_339_V_read340_phi_reg_19353.read();
    } else {
        ap_phi_mux_data_339_V_read340_rewind_phi_fu_12514_p6 = data_339_V_read340_rewind_reg_12510.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_33_V_read34_phi_phi_fu_15379_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_33_V_read34_phi_phi_fu_15379_p4 = ap_phi_mux_data_33_V_read34_rewind_phi_fu_8230_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_33_V_read34_phi_phi_fu_15379_p4 = data_33_V_read.read();
    } else {
        ap_phi_mux_data_33_V_read34_phi_phi_fu_15379_p4 = ap_phi_reg_pp0_iter0_data_33_V_read34_phi_reg_15375.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_33_V_read34_rewind_phi_fu_8230_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_33_V_read34_rewind_phi_fu_8230_p6 = data_33_V_read34_phi_reg_15375.read();
    } else {
        ap_phi_mux_data_33_V_read34_rewind_phi_fu_8230_p6 = data_33_V_read34_rewind_reg_8226.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_340_V_read341_phi_phi_fu_19370_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_340_V_read341_phi_phi_fu_19370_p4 = ap_phi_mux_data_340_V_read341_rewind_phi_fu_12528_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_340_V_read341_phi_phi_fu_19370_p4 = data_340_V_read.read();
    } else {
        ap_phi_mux_data_340_V_read341_phi_phi_fu_19370_p4 = ap_phi_reg_pp0_iter0_data_340_V_read341_phi_reg_19366.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_340_V_read341_rewind_phi_fu_12528_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_340_V_read341_rewind_phi_fu_12528_p6 = data_340_V_read341_phi_reg_19366.read();
    } else {
        ap_phi_mux_data_340_V_read341_rewind_phi_fu_12528_p6 = data_340_V_read341_rewind_reg_12524.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_341_V_read342_phi_phi_fu_19383_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_341_V_read342_phi_phi_fu_19383_p4 = ap_phi_mux_data_341_V_read342_rewind_phi_fu_12542_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_341_V_read342_phi_phi_fu_19383_p4 = data_341_V_read.read();
    } else {
        ap_phi_mux_data_341_V_read342_phi_phi_fu_19383_p4 = ap_phi_reg_pp0_iter0_data_341_V_read342_phi_reg_19379.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_341_V_read342_rewind_phi_fu_12542_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_341_V_read342_rewind_phi_fu_12542_p6 = data_341_V_read342_phi_reg_19379.read();
    } else {
        ap_phi_mux_data_341_V_read342_rewind_phi_fu_12542_p6 = data_341_V_read342_rewind_reg_12538.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_342_V_read343_phi_phi_fu_19396_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_342_V_read343_phi_phi_fu_19396_p4 = ap_phi_mux_data_342_V_read343_rewind_phi_fu_12556_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_342_V_read343_phi_phi_fu_19396_p4 = data_342_V_read.read();
    } else {
        ap_phi_mux_data_342_V_read343_phi_phi_fu_19396_p4 = ap_phi_reg_pp0_iter0_data_342_V_read343_phi_reg_19392.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_342_V_read343_rewind_phi_fu_12556_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_342_V_read343_rewind_phi_fu_12556_p6 = data_342_V_read343_phi_reg_19392.read();
    } else {
        ap_phi_mux_data_342_V_read343_rewind_phi_fu_12556_p6 = data_342_V_read343_rewind_reg_12552.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_343_V_read344_phi_phi_fu_19409_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_343_V_read344_phi_phi_fu_19409_p4 = ap_phi_mux_data_343_V_read344_rewind_phi_fu_12570_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_343_V_read344_phi_phi_fu_19409_p4 = data_343_V_read.read();
    } else {
        ap_phi_mux_data_343_V_read344_phi_phi_fu_19409_p4 = ap_phi_reg_pp0_iter0_data_343_V_read344_phi_reg_19405.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_343_V_read344_rewind_phi_fu_12570_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_343_V_read344_rewind_phi_fu_12570_p6 = data_343_V_read344_phi_reg_19405.read();
    } else {
        ap_phi_mux_data_343_V_read344_rewind_phi_fu_12570_p6 = data_343_V_read344_rewind_reg_12566.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_344_V_read345_phi_phi_fu_19422_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_344_V_read345_phi_phi_fu_19422_p4 = ap_phi_mux_data_344_V_read345_rewind_phi_fu_12584_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_344_V_read345_phi_phi_fu_19422_p4 = data_344_V_read.read();
    } else {
        ap_phi_mux_data_344_V_read345_phi_phi_fu_19422_p4 = ap_phi_reg_pp0_iter0_data_344_V_read345_phi_reg_19418.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_344_V_read345_rewind_phi_fu_12584_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_344_V_read345_rewind_phi_fu_12584_p6 = data_344_V_read345_phi_reg_19418.read();
    } else {
        ap_phi_mux_data_344_V_read345_rewind_phi_fu_12584_p6 = data_344_V_read345_rewind_reg_12580.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_345_V_read346_phi_phi_fu_19435_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_345_V_read346_phi_phi_fu_19435_p4 = ap_phi_mux_data_345_V_read346_rewind_phi_fu_12598_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_345_V_read346_phi_phi_fu_19435_p4 = data_345_V_read.read();
    } else {
        ap_phi_mux_data_345_V_read346_phi_phi_fu_19435_p4 = ap_phi_reg_pp0_iter0_data_345_V_read346_phi_reg_19431.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_345_V_read346_rewind_phi_fu_12598_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_345_V_read346_rewind_phi_fu_12598_p6 = data_345_V_read346_phi_reg_19431.read();
    } else {
        ap_phi_mux_data_345_V_read346_rewind_phi_fu_12598_p6 = data_345_V_read346_rewind_reg_12594.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_346_V_read347_phi_phi_fu_19448_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_346_V_read347_phi_phi_fu_19448_p4 = ap_phi_mux_data_346_V_read347_rewind_phi_fu_12612_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_346_V_read347_phi_phi_fu_19448_p4 = data_346_V_read.read();
    } else {
        ap_phi_mux_data_346_V_read347_phi_phi_fu_19448_p4 = ap_phi_reg_pp0_iter0_data_346_V_read347_phi_reg_19444.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_346_V_read347_rewind_phi_fu_12612_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_346_V_read347_rewind_phi_fu_12612_p6 = data_346_V_read347_phi_reg_19444.read();
    } else {
        ap_phi_mux_data_346_V_read347_rewind_phi_fu_12612_p6 = data_346_V_read347_rewind_reg_12608.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_347_V_read348_phi_phi_fu_19461_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_347_V_read348_phi_phi_fu_19461_p4 = ap_phi_mux_data_347_V_read348_rewind_phi_fu_12626_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_347_V_read348_phi_phi_fu_19461_p4 = data_347_V_read.read();
    } else {
        ap_phi_mux_data_347_V_read348_phi_phi_fu_19461_p4 = ap_phi_reg_pp0_iter0_data_347_V_read348_phi_reg_19457.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_347_V_read348_rewind_phi_fu_12626_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_347_V_read348_rewind_phi_fu_12626_p6 = data_347_V_read348_phi_reg_19457.read();
    } else {
        ap_phi_mux_data_347_V_read348_rewind_phi_fu_12626_p6 = data_347_V_read348_rewind_reg_12622.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_348_V_read349_phi_phi_fu_19474_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_348_V_read349_phi_phi_fu_19474_p4 = ap_phi_mux_data_348_V_read349_rewind_phi_fu_12640_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_348_V_read349_phi_phi_fu_19474_p4 = data_348_V_read.read();
    } else {
        ap_phi_mux_data_348_V_read349_phi_phi_fu_19474_p4 = ap_phi_reg_pp0_iter0_data_348_V_read349_phi_reg_19470.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_348_V_read349_rewind_phi_fu_12640_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_348_V_read349_rewind_phi_fu_12640_p6 = data_348_V_read349_phi_reg_19470.read();
    } else {
        ap_phi_mux_data_348_V_read349_rewind_phi_fu_12640_p6 = data_348_V_read349_rewind_reg_12636.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_349_V_read350_phi_phi_fu_19487_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_349_V_read350_phi_phi_fu_19487_p4 = ap_phi_mux_data_349_V_read350_rewind_phi_fu_12654_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_349_V_read350_phi_phi_fu_19487_p4 = data_349_V_read.read();
    } else {
        ap_phi_mux_data_349_V_read350_phi_phi_fu_19487_p4 = ap_phi_reg_pp0_iter0_data_349_V_read350_phi_reg_19483.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_349_V_read350_rewind_phi_fu_12654_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_349_V_read350_rewind_phi_fu_12654_p6 = data_349_V_read350_phi_reg_19483.read();
    } else {
        ap_phi_mux_data_349_V_read350_rewind_phi_fu_12654_p6 = data_349_V_read350_rewind_reg_12650.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_34_V_read35_phi_phi_fu_15392_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_34_V_read35_phi_phi_fu_15392_p4 = ap_phi_mux_data_34_V_read35_rewind_phi_fu_8244_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_34_V_read35_phi_phi_fu_15392_p4 = data_34_V_read.read();
    } else {
        ap_phi_mux_data_34_V_read35_phi_phi_fu_15392_p4 = ap_phi_reg_pp0_iter0_data_34_V_read35_phi_reg_15388.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_34_V_read35_rewind_phi_fu_8244_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_34_V_read35_rewind_phi_fu_8244_p6 = data_34_V_read35_phi_reg_15388.read();
    } else {
        ap_phi_mux_data_34_V_read35_rewind_phi_fu_8244_p6 = data_34_V_read35_rewind_reg_8240.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_350_V_read351_phi_phi_fu_19500_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_350_V_read351_phi_phi_fu_19500_p4 = ap_phi_mux_data_350_V_read351_rewind_phi_fu_12668_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_350_V_read351_phi_phi_fu_19500_p4 = data_350_V_read.read();
    } else {
        ap_phi_mux_data_350_V_read351_phi_phi_fu_19500_p4 = ap_phi_reg_pp0_iter0_data_350_V_read351_phi_reg_19496.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_350_V_read351_rewind_phi_fu_12668_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_350_V_read351_rewind_phi_fu_12668_p6 = data_350_V_read351_phi_reg_19496.read();
    } else {
        ap_phi_mux_data_350_V_read351_rewind_phi_fu_12668_p6 = data_350_V_read351_rewind_reg_12664.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_351_V_read352_phi_phi_fu_19513_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_351_V_read352_phi_phi_fu_19513_p4 = ap_phi_mux_data_351_V_read352_rewind_phi_fu_12682_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_351_V_read352_phi_phi_fu_19513_p4 = data_351_V_read.read();
    } else {
        ap_phi_mux_data_351_V_read352_phi_phi_fu_19513_p4 = ap_phi_reg_pp0_iter0_data_351_V_read352_phi_reg_19509.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_351_V_read352_rewind_phi_fu_12682_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_351_V_read352_rewind_phi_fu_12682_p6 = data_351_V_read352_phi_reg_19509.read();
    } else {
        ap_phi_mux_data_351_V_read352_rewind_phi_fu_12682_p6 = data_351_V_read352_rewind_reg_12678.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_352_V_read353_phi_phi_fu_19526_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_352_V_read353_phi_phi_fu_19526_p4 = ap_phi_mux_data_352_V_read353_rewind_phi_fu_12696_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_352_V_read353_phi_phi_fu_19526_p4 = data_352_V_read.read();
    } else {
        ap_phi_mux_data_352_V_read353_phi_phi_fu_19526_p4 = ap_phi_reg_pp0_iter0_data_352_V_read353_phi_reg_19522.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_352_V_read353_rewind_phi_fu_12696_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_352_V_read353_rewind_phi_fu_12696_p6 = data_352_V_read353_phi_reg_19522.read();
    } else {
        ap_phi_mux_data_352_V_read353_rewind_phi_fu_12696_p6 = data_352_V_read353_rewind_reg_12692.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_353_V_read354_phi_phi_fu_19539_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_353_V_read354_phi_phi_fu_19539_p4 = ap_phi_mux_data_353_V_read354_rewind_phi_fu_12710_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_353_V_read354_phi_phi_fu_19539_p4 = data_353_V_read.read();
    } else {
        ap_phi_mux_data_353_V_read354_phi_phi_fu_19539_p4 = ap_phi_reg_pp0_iter0_data_353_V_read354_phi_reg_19535.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_353_V_read354_rewind_phi_fu_12710_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_353_V_read354_rewind_phi_fu_12710_p6 = data_353_V_read354_phi_reg_19535.read();
    } else {
        ap_phi_mux_data_353_V_read354_rewind_phi_fu_12710_p6 = data_353_V_read354_rewind_reg_12706.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_354_V_read355_phi_phi_fu_19552_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_354_V_read355_phi_phi_fu_19552_p4 = ap_phi_mux_data_354_V_read355_rewind_phi_fu_12724_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_354_V_read355_phi_phi_fu_19552_p4 = data_354_V_read.read();
    } else {
        ap_phi_mux_data_354_V_read355_phi_phi_fu_19552_p4 = ap_phi_reg_pp0_iter0_data_354_V_read355_phi_reg_19548.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_354_V_read355_rewind_phi_fu_12724_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_354_V_read355_rewind_phi_fu_12724_p6 = data_354_V_read355_phi_reg_19548.read();
    } else {
        ap_phi_mux_data_354_V_read355_rewind_phi_fu_12724_p6 = data_354_V_read355_rewind_reg_12720.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_355_V_read356_phi_phi_fu_19565_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_355_V_read356_phi_phi_fu_19565_p4 = ap_phi_mux_data_355_V_read356_rewind_phi_fu_12738_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_355_V_read356_phi_phi_fu_19565_p4 = data_355_V_read.read();
    } else {
        ap_phi_mux_data_355_V_read356_phi_phi_fu_19565_p4 = ap_phi_reg_pp0_iter0_data_355_V_read356_phi_reg_19561.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_355_V_read356_rewind_phi_fu_12738_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_355_V_read356_rewind_phi_fu_12738_p6 = data_355_V_read356_phi_reg_19561.read();
    } else {
        ap_phi_mux_data_355_V_read356_rewind_phi_fu_12738_p6 = data_355_V_read356_rewind_reg_12734.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_356_V_read357_phi_phi_fu_19578_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_356_V_read357_phi_phi_fu_19578_p4 = ap_phi_mux_data_356_V_read357_rewind_phi_fu_12752_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_356_V_read357_phi_phi_fu_19578_p4 = data_356_V_read.read();
    } else {
        ap_phi_mux_data_356_V_read357_phi_phi_fu_19578_p4 = ap_phi_reg_pp0_iter0_data_356_V_read357_phi_reg_19574.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_356_V_read357_rewind_phi_fu_12752_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_356_V_read357_rewind_phi_fu_12752_p6 = data_356_V_read357_phi_reg_19574.read();
    } else {
        ap_phi_mux_data_356_V_read357_rewind_phi_fu_12752_p6 = data_356_V_read357_rewind_reg_12748.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_357_V_read358_phi_phi_fu_19591_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_357_V_read358_phi_phi_fu_19591_p4 = ap_phi_mux_data_357_V_read358_rewind_phi_fu_12766_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_357_V_read358_phi_phi_fu_19591_p4 = data_357_V_read.read();
    } else {
        ap_phi_mux_data_357_V_read358_phi_phi_fu_19591_p4 = ap_phi_reg_pp0_iter0_data_357_V_read358_phi_reg_19587.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_357_V_read358_rewind_phi_fu_12766_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_357_V_read358_rewind_phi_fu_12766_p6 = data_357_V_read358_phi_reg_19587.read();
    } else {
        ap_phi_mux_data_357_V_read358_rewind_phi_fu_12766_p6 = data_357_V_read358_rewind_reg_12762.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_358_V_read359_phi_phi_fu_19604_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_358_V_read359_phi_phi_fu_19604_p4 = ap_phi_mux_data_358_V_read359_rewind_phi_fu_12780_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_358_V_read359_phi_phi_fu_19604_p4 = data_358_V_read.read();
    } else {
        ap_phi_mux_data_358_V_read359_phi_phi_fu_19604_p4 = ap_phi_reg_pp0_iter0_data_358_V_read359_phi_reg_19600.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_358_V_read359_rewind_phi_fu_12780_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_358_V_read359_rewind_phi_fu_12780_p6 = data_358_V_read359_phi_reg_19600.read();
    } else {
        ap_phi_mux_data_358_V_read359_rewind_phi_fu_12780_p6 = data_358_V_read359_rewind_reg_12776.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_359_V_read360_phi_phi_fu_19617_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_359_V_read360_phi_phi_fu_19617_p4 = ap_phi_mux_data_359_V_read360_rewind_phi_fu_12794_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_359_V_read360_phi_phi_fu_19617_p4 = data_359_V_read.read();
    } else {
        ap_phi_mux_data_359_V_read360_phi_phi_fu_19617_p4 = ap_phi_reg_pp0_iter0_data_359_V_read360_phi_reg_19613.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_359_V_read360_rewind_phi_fu_12794_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_359_V_read360_rewind_phi_fu_12794_p6 = data_359_V_read360_phi_reg_19613.read();
    } else {
        ap_phi_mux_data_359_V_read360_rewind_phi_fu_12794_p6 = data_359_V_read360_rewind_reg_12790.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_35_V_read36_phi_phi_fu_15405_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_35_V_read36_phi_phi_fu_15405_p4 = ap_phi_mux_data_35_V_read36_rewind_phi_fu_8258_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_35_V_read36_phi_phi_fu_15405_p4 = data_35_V_read.read();
    } else {
        ap_phi_mux_data_35_V_read36_phi_phi_fu_15405_p4 = ap_phi_reg_pp0_iter0_data_35_V_read36_phi_reg_15401.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_35_V_read36_rewind_phi_fu_8258_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_35_V_read36_rewind_phi_fu_8258_p6 = data_35_V_read36_phi_reg_15401.read();
    } else {
        ap_phi_mux_data_35_V_read36_rewind_phi_fu_8258_p6 = data_35_V_read36_rewind_reg_8254.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_360_V_read361_phi_phi_fu_19630_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_360_V_read361_phi_phi_fu_19630_p4 = ap_phi_mux_data_360_V_read361_rewind_phi_fu_12808_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_360_V_read361_phi_phi_fu_19630_p4 = data_360_V_read.read();
    } else {
        ap_phi_mux_data_360_V_read361_phi_phi_fu_19630_p4 = ap_phi_reg_pp0_iter0_data_360_V_read361_phi_reg_19626.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_360_V_read361_rewind_phi_fu_12808_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_360_V_read361_rewind_phi_fu_12808_p6 = data_360_V_read361_phi_reg_19626.read();
    } else {
        ap_phi_mux_data_360_V_read361_rewind_phi_fu_12808_p6 = data_360_V_read361_rewind_reg_12804.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_361_V_read362_phi_phi_fu_19643_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_361_V_read362_phi_phi_fu_19643_p4 = ap_phi_mux_data_361_V_read362_rewind_phi_fu_12822_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_361_V_read362_phi_phi_fu_19643_p4 = data_361_V_read.read();
    } else {
        ap_phi_mux_data_361_V_read362_phi_phi_fu_19643_p4 = ap_phi_reg_pp0_iter0_data_361_V_read362_phi_reg_19639.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_361_V_read362_rewind_phi_fu_12822_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_361_V_read362_rewind_phi_fu_12822_p6 = data_361_V_read362_phi_reg_19639.read();
    } else {
        ap_phi_mux_data_361_V_read362_rewind_phi_fu_12822_p6 = data_361_V_read362_rewind_reg_12818.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_362_V_read363_phi_phi_fu_19656_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_362_V_read363_phi_phi_fu_19656_p4 = ap_phi_mux_data_362_V_read363_rewind_phi_fu_12836_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_362_V_read363_phi_phi_fu_19656_p4 = data_362_V_read.read();
    } else {
        ap_phi_mux_data_362_V_read363_phi_phi_fu_19656_p4 = ap_phi_reg_pp0_iter0_data_362_V_read363_phi_reg_19652.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_362_V_read363_rewind_phi_fu_12836_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_362_V_read363_rewind_phi_fu_12836_p6 = data_362_V_read363_phi_reg_19652.read();
    } else {
        ap_phi_mux_data_362_V_read363_rewind_phi_fu_12836_p6 = data_362_V_read363_rewind_reg_12832.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_363_V_read364_phi_phi_fu_19669_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_363_V_read364_phi_phi_fu_19669_p4 = ap_phi_mux_data_363_V_read364_rewind_phi_fu_12850_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_363_V_read364_phi_phi_fu_19669_p4 = data_363_V_read.read();
    } else {
        ap_phi_mux_data_363_V_read364_phi_phi_fu_19669_p4 = ap_phi_reg_pp0_iter0_data_363_V_read364_phi_reg_19665.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_363_V_read364_rewind_phi_fu_12850_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_363_V_read364_rewind_phi_fu_12850_p6 = data_363_V_read364_phi_reg_19665.read();
    } else {
        ap_phi_mux_data_363_V_read364_rewind_phi_fu_12850_p6 = data_363_V_read364_rewind_reg_12846.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_364_V_read365_phi_phi_fu_19682_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_364_V_read365_phi_phi_fu_19682_p4 = ap_phi_mux_data_364_V_read365_rewind_phi_fu_12864_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_364_V_read365_phi_phi_fu_19682_p4 = data_364_V_read.read();
    } else {
        ap_phi_mux_data_364_V_read365_phi_phi_fu_19682_p4 = ap_phi_reg_pp0_iter0_data_364_V_read365_phi_reg_19678.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_364_V_read365_rewind_phi_fu_12864_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_364_V_read365_rewind_phi_fu_12864_p6 = data_364_V_read365_phi_reg_19678.read();
    } else {
        ap_phi_mux_data_364_V_read365_rewind_phi_fu_12864_p6 = data_364_V_read365_rewind_reg_12860.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_365_V_read366_phi_phi_fu_19695_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_365_V_read366_phi_phi_fu_19695_p4 = ap_phi_mux_data_365_V_read366_rewind_phi_fu_12878_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_365_V_read366_phi_phi_fu_19695_p4 = data_365_V_read.read();
    } else {
        ap_phi_mux_data_365_V_read366_phi_phi_fu_19695_p4 = ap_phi_reg_pp0_iter0_data_365_V_read366_phi_reg_19691.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_365_V_read366_rewind_phi_fu_12878_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_365_V_read366_rewind_phi_fu_12878_p6 = data_365_V_read366_phi_reg_19691.read();
    } else {
        ap_phi_mux_data_365_V_read366_rewind_phi_fu_12878_p6 = data_365_V_read366_rewind_reg_12874.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_366_V_read367_phi_phi_fu_19708_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_366_V_read367_phi_phi_fu_19708_p4 = ap_phi_mux_data_366_V_read367_rewind_phi_fu_12892_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_366_V_read367_phi_phi_fu_19708_p4 = data_366_V_read.read();
    } else {
        ap_phi_mux_data_366_V_read367_phi_phi_fu_19708_p4 = ap_phi_reg_pp0_iter0_data_366_V_read367_phi_reg_19704.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_366_V_read367_rewind_phi_fu_12892_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_366_V_read367_rewind_phi_fu_12892_p6 = data_366_V_read367_phi_reg_19704.read();
    } else {
        ap_phi_mux_data_366_V_read367_rewind_phi_fu_12892_p6 = data_366_V_read367_rewind_reg_12888.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_367_V_read368_phi_phi_fu_19721_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_367_V_read368_phi_phi_fu_19721_p4 = ap_phi_mux_data_367_V_read368_rewind_phi_fu_12906_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_367_V_read368_phi_phi_fu_19721_p4 = data_367_V_read.read();
    } else {
        ap_phi_mux_data_367_V_read368_phi_phi_fu_19721_p4 = ap_phi_reg_pp0_iter0_data_367_V_read368_phi_reg_19717.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_367_V_read368_rewind_phi_fu_12906_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_367_V_read368_rewind_phi_fu_12906_p6 = data_367_V_read368_phi_reg_19717.read();
    } else {
        ap_phi_mux_data_367_V_read368_rewind_phi_fu_12906_p6 = data_367_V_read368_rewind_reg_12902.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_368_V_read369_phi_phi_fu_19734_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_368_V_read369_phi_phi_fu_19734_p4 = ap_phi_mux_data_368_V_read369_rewind_phi_fu_12920_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_368_V_read369_phi_phi_fu_19734_p4 = data_368_V_read.read();
    } else {
        ap_phi_mux_data_368_V_read369_phi_phi_fu_19734_p4 = ap_phi_reg_pp0_iter0_data_368_V_read369_phi_reg_19730.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_368_V_read369_rewind_phi_fu_12920_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_368_V_read369_rewind_phi_fu_12920_p6 = data_368_V_read369_phi_reg_19730.read();
    } else {
        ap_phi_mux_data_368_V_read369_rewind_phi_fu_12920_p6 = data_368_V_read369_rewind_reg_12916.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_369_V_read370_phi_phi_fu_19747_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_369_V_read370_phi_phi_fu_19747_p4 = ap_phi_mux_data_369_V_read370_rewind_phi_fu_12934_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_369_V_read370_phi_phi_fu_19747_p4 = data_369_V_read.read();
    } else {
        ap_phi_mux_data_369_V_read370_phi_phi_fu_19747_p4 = ap_phi_reg_pp0_iter0_data_369_V_read370_phi_reg_19743.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_369_V_read370_rewind_phi_fu_12934_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_369_V_read370_rewind_phi_fu_12934_p6 = data_369_V_read370_phi_reg_19743.read();
    } else {
        ap_phi_mux_data_369_V_read370_rewind_phi_fu_12934_p6 = data_369_V_read370_rewind_reg_12930.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_36_V_read37_phi_phi_fu_15418_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_36_V_read37_phi_phi_fu_15418_p4 = ap_phi_mux_data_36_V_read37_rewind_phi_fu_8272_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_36_V_read37_phi_phi_fu_15418_p4 = data_36_V_read.read();
    } else {
        ap_phi_mux_data_36_V_read37_phi_phi_fu_15418_p4 = ap_phi_reg_pp0_iter0_data_36_V_read37_phi_reg_15414.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_36_V_read37_rewind_phi_fu_8272_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_36_V_read37_rewind_phi_fu_8272_p6 = data_36_V_read37_phi_reg_15414.read();
    } else {
        ap_phi_mux_data_36_V_read37_rewind_phi_fu_8272_p6 = data_36_V_read37_rewind_reg_8268.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_370_V_read371_phi_phi_fu_19760_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_370_V_read371_phi_phi_fu_19760_p4 = ap_phi_mux_data_370_V_read371_rewind_phi_fu_12948_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_370_V_read371_phi_phi_fu_19760_p4 = data_370_V_read.read();
    } else {
        ap_phi_mux_data_370_V_read371_phi_phi_fu_19760_p4 = ap_phi_reg_pp0_iter0_data_370_V_read371_phi_reg_19756.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_370_V_read371_rewind_phi_fu_12948_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_370_V_read371_rewind_phi_fu_12948_p6 = data_370_V_read371_phi_reg_19756.read();
    } else {
        ap_phi_mux_data_370_V_read371_rewind_phi_fu_12948_p6 = data_370_V_read371_rewind_reg_12944.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_371_V_read372_phi_phi_fu_19773_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_371_V_read372_phi_phi_fu_19773_p4 = ap_phi_mux_data_371_V_read372_rewind_phi_fu_12962_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_371_V_read372_phi_phi_fu_19773_p4 = data_371_V_read.read();
    } else {
        ap_phi_mux_data_371_V_read372_phi_phi_fu_19773_p4 = ap_phi_reg_pp0_iter0_data_371_V_read372_phi_reg_19769.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_371_V_read372_rewind_phi_fu_12962_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_371_V_read372_rewind_phi_fu_12962_p6 = data_371_V_read372_phi_reg_19769.read();
    } else {
        ap_phi_mux_data_371_V_read372_rewind_phi_fu_12962_p6 = data_371_V_read372_rewind_reg_12958.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_372_V_read373_phi_phi_fu_19786_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_372_V_read373_phi_phi_fu_19786_p4 = ap_phi_mux_data_372_V_read373_rewind_phi_fu_12976_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_372_V_read373_phi_phi_fu_19786_p4 = data_372_V_read.read();
    } else {
        ap_phi_mux_data_372_V_read373_phi_phi_fu_19786_p4 = ap_phi_reg_pp0_iter0_data_372_V_read373_phi_reg_19782.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_372_V_read373_rewind_phi_fu_12976_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_372_V_read373_rewind_phi_fu_12976_p6 = data_372_V_read373_phi_reg_19782.read();
    } else {
        ap_phi_mux_data_372_V_read373_rewind_phi_fu_12976_p6 = data_372_V_read373_rewind_reg_12972.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_373_V_read374_phi_phi_fu_19799_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_373_V_read374_phi_phi_fu_19799_p4 = ap_phi_mux_data_373_V_read374_rewind_phi_fu_12990_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_373_V_read374_phi_phi_fu_19799_p4 = data_373_V_read.read();
    } else {
        ap_phi_mux_data_373_V_read374_phi_phi_fu_19799_p4 = ap_phi_reg_pp0_iter0_data_373_V_read374_phi_reg_19795.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_373_V_read374_rewind_phi_fu_12990_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_373_V_read374_rewind_phi_fu_12990_p6 = data_373_V_read374_phi_reg_19795.read();
    } else {
        ap_phi_mux_data_373_V_read374_rewind_phi_fu_12990_p6 = data_373_V_read374_rewind_reg_12986.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_374_V_read375_phi_phi_fu_19812_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_374_V_read375_phi_phi_fu_19812_p4 = ap_phi_mux_data_374_V_read375_rewind_phi_fu_13004_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_374_V_read375_phi_phi_fu_19812_p4 = data_374_V_read.read();
    } else {
        ap_phi_mux_data_374_V_read375_phi_phi_fu_19812_p4 = ap_phi_reg_pp0_iter0_data_374_V_read375_phi_reg_19808.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_374_V_read375_rewind_phi_fu_13004_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_374_V_read375_rewind_phi_fu_13004_p6 = data_374_V_read375_phi_reg_19808.read();
    } else {
        ap_phi_mux_data_374_V_read375_rewind_phi_fu_13004_p6 = data_374_V_read375_rewind_reg_13000.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_375_V_read376_phi_phi_fu_19825_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_375_V_read376_phi_phi_fu_19825_p4 = ap_phi_mux_data_375_V_read376_rewind_phi_fu_13018_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_375_V_read376_phi_phi_fu_19825_p4 = data_375_V_read.read();
    } else {
        ap_phi_mux_data_375_V_read376_phi_phi_fu_19825_p4 = ap_phi_reg_pp0_iter0_data_375_V_read376_phi_reg_19821.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_375_V_read376_rewind_phi_fu_13018_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_375_V_read376_rewind_phi_fu_13018_p6 = data_375_V_read376_phi_reg_19821.read();
    } else {
        ap_phi_mux_data_375_V_read376_rewind_phi_fu_13018_p6 = data_375_V_read376_rewind_reg_13014.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_376_V_read377_phi_phi_fu_19838_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_376_V_read377_phi_phi_fu_19838_p4 = ap_phi_mux_data_376_V_read377_rewind_phi_fu_13032_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_376_V_read377_phi_phi_fu_19838_p4 = data_376_V_read.read();
    } else {
        ap_phi_mux_data_376_V_read377_phi_phi_fu_19838_p4 = ap_phi_reg_pp0_iter0_data_376_V_read377_phi_reg_19834.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_376_V_read377_rewind_phi_fu_13032_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_376_V_read377_rewind_phi_fu_13032_p6 = data_376_V_read377_phi_reg_19834.read();
    } else {
        ap_phi_mux_data_376_V_read377_rewind_phi_fu_13032_p6 = data_376_V_read377_rewind_reg_13028.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_377_V_read378_phi_phi_fu_19851_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_377_V_read378_phi_phi_fu_19851_p4 = ap_phi_mux_data_377_V_read378_rewind_phi_fu_13046_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_377_V_read378_phi_phi_fu_19851_p4 = data_377_V_read.read();
    } else {
        ap_phi_mux_data_377_V_read378_phi_phi_fu_19851_p4 = ap_phi_reg_pp0_iter0_data_377_V_read378_phi_reg_19847.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_377_V_read378_rewind_phi_fu_13046_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_377_V_read378_rewind_phi_fu_13046_p6 = data_377_V_read378_phi_reg_19847.read();
    } else {
        ap_phi_mux_data_377_V_read378_rewind_phi_fu_13046_p6 = data_377_V_read378_rewind_reg_13042.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_378_V_read379_phi_phi_fu_19864_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_378_V_read379_phi_phi_fu_19864_p4 = ap_phi_mux_data_378_V_read379_rewind_phi_fu_13060_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_378_V_read379_phi_phi_fu_19864_p4 = data_378_V_read.read();
    } else {
        ap_phi_mux_data_378_V_read379_phi_phi_fu_19864_p4 = ap_phi_reg_pp0_iter0_data_378_V_read379_phi_reg_19860.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_378_V_read379_rewind_phi_fu_13060_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_378_V_read379_rewind_phi_fu_13060_p6 = data_378_V_read379_phi_reg_19860.read();
    } else {
        ap_phi_mux_data_378_V_read379_rewind_phi_fu_13060_p6 = data_378_V_read379_rewind_reg_13056.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_379_V_read380_phi_phi_fu_19877_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_379_V_read380_phi_phi_fu_19877_p4 = ap_phi_mux_data_379_V_read380_rewind_phi_fu_13074_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_379_V_read380_phi_phi_fu_19877_p4 = data_379_V_read.read();
    } else {
        ap_phi_mux_data_379_V_read380_phi_phi_fu_19877_p4 = ap_phi_reg_pp0_iter0_data_379_V_read380_phi_reg_19873.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_379_V_read380_rewind_phi_fu_13074_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_379_V_read380_rewind_phi_fu_13074_p6 = data_379_V_read380_phi_reg_19873.read();
    } else {
        ap_phi_mux_data_379_V_read380_rewind_phi_fu_13074_p6 = data_379_V_read380_rewind_reg_13070.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_37_V_read38_phi_phi_fu_15431_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_37_V_read38_phi_phi_fu_15431_p4 = ap_phi_mux_data_37_V_read38_rewind_phi_fu_8286_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_37_V_read38_phi_phi_fu_15431_p4 = data_37_V_read.read();
    } else {
        ap_phi_mux_data_37_V_read38_phi_phi_fu_15431_p4 = ap_phi_reg_pp0_iter0_data_37_V_read38_phi_reg_15427.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_37_V_read38_rewind_phi_fu_8286_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_37_V_read38_rewind_phi_fu_8286_p6 = data_37_V_read38_phi_reg_15427.read();
    } else {
        ap_phi_mux_data_37_V_read38_rewind_phi_fu_8286_p6 = data_37_V_read38_rewind_reg_8282.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_380_V_read381_phi_phi_fu_19890_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_380_V_read381_phi_phi_fu_19890_p4 = ap_phi_mux_data_380_V_read381_rewind_phi_fu_13088_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_380_V_read381_phi_phi_fu_19890_p4 = data_380_V_read.read();
    } else {
        ap_phi_mux_data_380_V_read381_phi_phi_fu_19890_p4 = ap_phi_reg_pp0_iter0_data_380_V_read381_phi_reg_19886.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_380_V_read381_rewind_phi_fu_13088_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_380_V_read381_rewind_phi_fu_13088_p6 = data_380_V_read381_phi_reg_19886.read();
    } else {
        ap_phi_mux_data_380_V_read381_rewind_phi_fu_13088_p6 = data_380_V_read381_rewind_reg_13084.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_381_V_read382_phi_phi_fu_19903_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_381_V_read382_phi_phi_fu_19903_p4 = ap_phi_mux_data_381_V_read382_rewind_phi_fu_13102_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_381_V_read382_phi_phi_fu_19903_p4 = data_381_V_read.read();
    } else {
        ap_phi_mux_data_381_V_read382_phi_phi_fu_19903_p4 = ap_phi_reg_pp0_iter0_data_381_V_read382_phi_reg_19899.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_381_V_read382_rewind_phi_fu_13102_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_381_V_read382_rewind_phi_fu_13102_p6 = data_381_V_read382_phi_reg_19899.read();
    } else {
        ap_phi_mux_data_381_V_read382_rewind_phi_fu_13102_p6 = data_381_V_read382_rewind_reg_13098.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_382_V_read383_phi_phi_fu_19916_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_382_V_read383_phi_phi_fu_19916_p4 = ap_phi_mux_data_382_V_read383_rewind_phi_fu_13116_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_382_V_read383_phi_phi_fu_19916_p4 = data_382_V_read.read();
    } else {
        ap_phi_mux_data_382_V_read383_phi_phi_fu_19916_p4 = ap_phi_reg_pp0_iter0_data_382_V_read383_phi_reg_19912.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_382_V_read383_rewind_phi_fu_13116_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_382_V_read383_rewind_phi_fu_13116_p6 = data_382_V_read383_phi_reg_19912.read();
    } else {
        ap_phi_mux_data_382_V_read383_rewind_phi_fu_13116_p6 = data_382_V_read383_rewind_reg_13112.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_383_V_read384_phi_phi_fu_19929_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_383_V_read384_phi_phi_fu_19929_p4 = ap_phi_mux_data_383_V_read384_rewind_phi_fu_13130_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_383_V_read384_phi_phi_fu_19929_p4 = data_383_V_read.read();
    } else {
        ap_phi_mux_data_383_V_read384_phi_phi_fu_19929_p4 = ap_phi_reg_pp0_iter0_data_383_V_read384_phi_reg_19925.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_383_V_read384_rewind_phi_fu_13130_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_383_V_read384_rewind_phi_fu_13130_p6 = data_383_V_read384_phi_reg_19925.read();
    } else {
        ap_phi_mux_data_383_V_read384_rewind_phi_fu_13130_p6 = data_383_V_read384_rewind_reg_13126.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_384_V_read385_phi_phi_fu_19942_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_384_V_read385_phi_phi_fu_19942_p4 = ap_phi_mux_data_384_V_read385_rewind_phi_fu_13144_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_384_V_read385_phi_phi_fu_19942_p4 = data_384_V_read.read();
    } else {
        ap_phi_mux_data_384_V_read385_phi_phi_fu_19942_p4 = ap_phi_reg_pp0_iter0_data_384_V_read385_phi_reg_19938.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_384_V_read385_rewind_phi_fu_13144_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_384_V_read385_rewind_phi_fu_13144_p6 = data_384_V_read385_phi_reg_19938.read();
    } else {
        ap_phi_mux_data_384_V_read385_rewind_phi_fu_13144_p6 = data_384_V_read385_rewind_reg_13140.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_385_V_read386_phi_phi_fu_19955_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_385_V_read386_phi_phi_fu_19955_p4 = ap_phi_mux_data_385_V_read386_rewind_phi_fu_13158_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_385_V_read386_phi_phi_fu_19955_p4 = data_385_V_read.read();
    } else {
        ap_phi_mux_data_385_V_read386_phi_phi_fu_19955_p4 = ap_phi_reg_pp0_iter0_data_385_V_read386_phi_reg_19951.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_385_V_read386_rewind_phi_fu_13158_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_385_V_read386_rewind_phi_fu_13158_p6 = data_385_V_read386_phi_reg_19951.read();
    } else {
        ap_phi_mux_data_385_V_read386_rewind_phi_fu_13158_p6 = data_385_V_read386_rewind_reg_13154.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_386_V_read387_phi_phi_fu_19968_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_386_V_read387_phi_phi_fu_19968_p4 = ap_phi_mux_data_386_V_read387_rewind_phi_fu_13172_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_386_V_read387_phi_phi_fu_19968_p4 = data_386_V_read.read();
    } else {
        ap_phi_mux_data_386_V_read387_phi_phi_fu_19968_p4 = ap_phi_reg_pp0_iter0_data_386_V_read387_phi_reg_19964.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_386_V_read387_rewind_phi_fu_13172_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_386_V_read387_rewind_phi_fu_13172_p6 = data_386_V_read387_phi_reg_19964.read();
    } else {
        ap_phi_mux_data_386_V_read387_rewind_phi_fu_13172_p6 = data_386_V_read387_rewind_reg_13168.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_387_V_read388_phi_phi_fu_19981_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_387_V_read388_phi_phi_fu_19981_p4 = ap_phi_mux_data_387_V_read388_rewind_phi_fu_13186_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_387_V_read388_phi_phi_fu_19981_p4 = data_387_V_read.read();
    } else {
        ap_phi_mux_data_387_V_read388_phi_phi_fu_19981_p4 = ap_phi_reg_pp0_iter0_data_387_V_read388_phi_reg_19977.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_387_V_read388_rewind_phi_fu_13186_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_387_V_read388_rewind_phi_fu_13186_p6 = data_387_V_read388_phi_reg_19977.read();
    } else {
        ap_phi_mux_data_387_V_read388_rewind_phi_fu_13186_p6 = data_387_V_read388_rewind_reg_13182.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_388_V_read389_phi_phi_fu_19994_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_388_V_read389_phi_phi_fu_19994_p4 = ap_phi_mux_data_388_V_read389_rewind_phi_fu_13200_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_388_V_read389_phi_phi_fu_19994_p4 = data_388_V_read.read();
    } else {
        ap_phi_mux_data_388_V_read389_phi_phi_fu_19994_p4 = ap_phi_reg_pp0_iter0_data_388_V_read389_phi_reg_19990.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_388_V_read389_rewind_phi_fu_13200_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_388_V_read389_rewind_phi_fu_13200_p6 = data_388_V_read389_phi_reg_19990.read();
    } else {
        ap_phi_mux_data_388_V_read389_rewind_phi_fu_13200_p6 = data_388_V_read389_rewind_reg_13196.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_389_V_read390_phi_phi_fu_20007_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_389_V_read390_phi_phi_fu_20007_p4 = ap_phi_mux_data_389_V_read390_rewind_phi_fu_13214_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_389_V_read390_phi_phi_fu_20007_p4 = data_389_V_read.read();
    } else {
        ap_phi_mux_data_389_V_read390_phi_phi_fu_20007_p4 = ap_phi_reg_pp0_iter0_data_389_V_read390_phi_reg_20003.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_389_V_read390_rewind_phi_fu_13214_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_389_V_read390_rewind_phi_fu_13214_p6 = data_389_V_read390_phi_reg_20003.read();
    } else {
        ap_phi_mux_data_389_V_read390_rewind_phi_fu_13214_p6 = data_389_V_read390_rewind_reg_13210.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_38_V_read39_phi_phi_fu_15444_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_38_V_read39_phi_phi_fu_15444_p4 = ap_phi_mux_data_38_V_read39_rewind_phi_fu_8300_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_38_V_read39_phi_phi_fu_15444_p4 = data_38_V_read.read();
    } else {
        ap_phi_mux_data_38_V_read39_phi_phi_fu_15444_p4 = ap_phi_reg_pp0_iter0_data_38_V_read39_phi_reg_15440.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_38_V_read39_rewind_phi_fu_8300_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_38_V_read39_rewind_phi_fu_8300_p6 = data_38_V_read39_phi_reg_15440.read();
    } else {
        ap_phi_mux_data_38_V_read39_rewind_phi_fu_8300_p6 = data_38_V_read39_rewind_reg_8296.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_390_V_read391_phi_phi_fu_20020_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_390_V_read391_phi_phi_fu_20020_p4 = ap_phi_mux_data_390_V_read391_rewind_phi_fu_13228_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_390_V_read391_phi_phi_fu_20020_p4 = data_390_V_read.read();
    } else {
        ap_phi_mux_data_390_V_read391_phi_phi_fu_20020_p4 = ap_phi_reg_pp0_iter0_data_390_V_read391_phi_reg_20016.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_390_V_read391_rewind_phi_fu_13228_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_390_V_read391_rewind_phi_fu_13228_p6 = data_390_V_read391_phi_reg_20016.read();
    } else {
        ap_phi_mux_data_390_V_read391_rewind_phi_fu_13228_p6 = data_390_V_read391_rewind_reg_13224.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_391_V_read392_phi_phi_fu_20033_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_391_V_read392_phi_phi_fu_20033_p4 = ap_phi_mux_data_391_V_read392_rewind_phi_fu_13242_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_391_V_read392_phi_phi_fu_20033_p4 = data_391_V_read.read();
    } else {
        ap_phi_mux_data_391_V_read392_phi_phi_fu_20033_p4 = ap_phi_reg_pp0_iter0_data_391_V_read392_phi_reg_20029.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_391_V_read392_rewind_phi_fu_13242_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_391_V_read392_rewind_phi_fu_13242_p6 = data_391_V_read392_phi_reg_20029.read();
    } else {
        ap_phi_mux_data_391_V_read392_rewind_phi_fu_13242_p6 = data_391_V_read392_rewind_reg_13238.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_392_V_read393_phi_phi_fu_20046_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_392_V_read393_phi_phi_fu_20046_p4 = ap_phi_mux_data_392_V_read393_rewind_phi_fu_13256_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_392_V_read393_phi_phi_fu_20046_p4 = data_392_V_read.read();
    } else {
        ap_phi_mux_data_392_V_read393_phi_phi_fu_20046_p4 = ap_phi_reg_pp0_iter0_data_392_V_read393_phi_reg_20042.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_392_V_read393_rewind_phi_fu_13256_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_392_V_read393_rewind_phi_fu_13256_p6 = data_392_V_read393_phi_reg_20042.read();
    } else {
        ap_phi_mux_data_392_V_read393_rewind_phi_fu_13256_p6 = data_392_V_read393_rewind_reg_13252.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_393_V_read394_phi_phi_fu_20059_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_393_V_read394_phi_phi_fu_20059_p4 = ap_phi_mux_data_393_V_read394_rewind_phi_fu_13270_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_393_V_read394_phi_phi_fu_20059_p4 = data_393_V_read.read();
    } else {
        ap_phi_mux_data_393_V_read394_phi_phi_fu_20059_p4 = ap_phi_reg_pp0_iter0_data_393_V_read394_phi_reg_20055.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_393_V_read394_rewind_phi_fu_13270_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_393_V_read394_rewind_phi_fu_13270_p6 = data_393_V_read394_phi_reg_20055.read();
    } else {
        ap_phi_mux_data_393_V_read394_rewind_phi_fu_13270_p6 = data_393_V_read394_rewind_reg_13266.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_394_V_read395_phi_phi_fu_20072_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_394_V_read395_phi_phi_fu_20072_p4 = ap_phi_mux_data_394_V_read395_rewind_phi_fu_13284_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_394_V_read395_phi_phi_fu_20072_p4 = data_394_V_read.read();
    } else {
        ap_phi_mux_data_394_V_read395_phi_phi_fu_20072_p4 = ap_phi_reg_pp0_iter0_data_394_V_read395_phi_reg_20068.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_394_V_read395_rewind_phi_fu_13284_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_394_V_read395_rewind_phi_fu_13284_p6 = data_394_V_read395_phi_reg_20068.read();
    } else {
        ap_phi_mux_data_394_V_read395_rewind_phi_fu_13284_p6 = data_394_V_read395_rewind_reg_13280.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_395_V_read396_phi_phi_fu_20085_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_395_V_read396_phi_phi_fu_20085_p4 = ap_phi_mux_data_395_V_read396_rewind_phi_fu_13298_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_395_V_read396_phi_phi_fu_20085_p4 = data_395_V_read.read();
    } else {
        ap_phi_mux_data_395_V_read396_phi_phi_fu_20085_p4 = ap_phi_reg_pp0_iter0_data_395_V_read396_phi_reg_20081.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_395_V_read396_rewind_phi_fu_13298_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_395_V_read396_rewind_phi_fu_13298_p6 = data_395_V_read396_phi_reg_20081.read();
    } else {
        ap_phi_mux_data_395_V_read396_rewind_phi_fu_13298_p6 = data_395_V_read396_rewind_reg_13294.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_396_V_read397_phi_phi_fu_20098_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_396_V_read397_phi_phi_fu_20098_p4 = ap_phi_mux_data_396_V_read397_rewind_phi_fu_13312_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_396_V_read397_phi_phi_fu_20098_p4 = data_396_V_read.read();
    } else {
        ap_phi_mux_data_396_V_read397_phi_phi_fu_20098_p4 = ap_phi_reg_pp0_iter0_data_396_V_read397_phi_reg_20094.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_396_V_read397_rewind_phi_fu_13312_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_396_V_read397_rewind_phi_fu_13312_p6 = data_396_V_read397_phi_reg_20094.read();
    } else {
        ap_phi_mux_data_396_V_read397_rewind_phi_fu_13312_p6 = data_396_V_read397_rewind_reg_13308.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_397_V_read398_phi_phi_fu_20111_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_397_V_read398_phi_phi_fu_20111_p4 = ap_phi_mux_data_397_V_read398_rewind_phi_fu_13326_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_397_V_read398_phi_phi_fu_20111_p4 = data_397_V_read.read();
    } else {
        ap_phi_mux_data_397_V_read398_phi_phi_fu_20111_p4 = ap_phi_reg_pp0_iter0_data_397_V_read398_phi_reg_20107.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_397_V_read398_rewind_phi_fu_13326_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_397_V_read398_rewind_phi_fu_13326_p6 = data_397_V_read398_phi_reg_20107.read();
    } else {
        ap_phi_mux_data_397_V_read398_rewind_phi_fu_13326_p6 = data_397_V_read398_rewind_reg_13322.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_398_V_read399_phi_phi_fu_20124_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_398_V_read399_phi_phi_fu_20124_p4 = ap_phi_mux_data_398_V_read399_rewind_phi_fu_13340_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_398_V_read399_phi_phi_fu_20124_p4 = data_398_V_read.read();
    } else {
        ap_phi_mux_data_398_V_read399_phi_phi_fu_20124_p4 = ap_phi_reg_pp0_iter0_data_398_V_read399_phi_reg_20120.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_398_V_read399_rewind_phi_fu_13340_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_398_V_read399_rewind_phi_fu_13340_p6 = data_398_V_read399_phi_reg_20120.read();
    } else {
        ap_phi_mux_data_398_V_read399_rewind_phi_fu_13340_p6 = data_398_V_read399_rewind_reg_13336.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_399_V_read400_phi_phi_fu_20137_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_399_V_read400_phi_phi_fu_20137_p4 = ap_phi_mux_data_399_V_read400_rewind_phi_fu_13354_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_399_V_read400_phi_phi_fu_20137_p4 = data_399_V_read.read();
    } else {
        ap_phi_mux_data_399_V_read400_phi_phi_fu_20137_p4 = ap_phi_reg_pp0_iter0_data_399_V_read400_phi_reg_20133.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_399_V_read400_rewind_phi_fu_13354_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_399_V_read400_rewind_phi_fu_13354_p6 = data_399_V_read400_phi_reg_20133.read();
    } else {
        ap_phi_mux_data_399_V_read400_rewind_phi_fu_13354_p6 = data_399_V_read400_rewind_reg_13350.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_39_V_read40_phi_phi_fu_15457_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_39_V_read40_phi_phi_fu_15457_p4 = ap_phi_mux_data_39_V_read40_rewind_phi_fu_8314_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_39_V_read40_phi_phi_fu_15457_p4 = data_39_V_read.read();
    } else {
        ap_phi_mux_data_39_V_read40_phi_phi_fu_15457_p4 = ap_phi_reg_pp0_iter0_data_39_V_read40_phi_reg_15453.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_39_V_read40_rewind_phi_fu_8314_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_39_V_read40_rewind_phi_fu_8314_p6 = data_39_V_read40_phi_reg_15453.read();
    } else {
        ap_phi_mux_data_39_V_read40_rewind_phi_fu_8314_p6 = data_39_V_read40_rewind_reg_8310.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_3_V_read4_phi_phi_fu_14989_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_3_V_read4_phi_phi_fu_14989_p4 = ap_phi_mux_data_3_V_read4_rewind_phi_fu_7810_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_3_V_read4_phi_phi_fu_14989_p4 = data_3_V_read.read();
    } else {
        ap_phi_mux_data_3_V_read4_phi_phi_fu_14989_p4 = ap_phi_reg_pp0_iter0_data_3_V_read4_phi_reg_14985.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_3_V_read4_rewind_phi_fu_7810_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3_V_read4_rewind_phi_fu_7810_p6 = data_3_V_read4_phi_reg_14985.read();
    } else {
        ap_phi_mux_data_3_V_read4_rewind_phi_fu_7810_p6 = data_3_V_read4_rewind_reg_7806.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_400_V_read401_phi_phi_fu_20150_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_400_V_read401_phi_phi_fu_20150_p4 = ap_phi_mux_data_400_V_read401_rewind_phi_fu_13368_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_400_V_read401_phi_phi_fu_20150_p4 = data_400_V_read.read();
    } else {
        ap_phi_mux_data_400_V_read401_phi_phi_fu_20150_p4 = ap_phi_reg_pp0_iter0_data_400_V_read401_phi_reg_20146.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_400_V_read401_rewind_phi_fu_13368_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_400_V_read401_rewind_phi_fu_13368_p6 = data_400_V_read401_phi_reg_20146.read();
    } else {
        ap_phi_mux_data_400_V_read401_rewind_phi_fu_13368_p6 = data_400_V_read401_rewind_reg_13364.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_401_V_read402_phi_phi_fu_20163_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_401_V_read402_phi_phi_fu_20163_p4 = ap_phi_mux_data_401_V_read402_rewind_phi_fu_13382_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_401_V_read402_phi_phi_fu_20163_p4 = data_401_V_read.read();
    } else {
        ap_phi_mux_data_401_V_read402_phi_phi_fu_20163_p4 = ap_phi_reg_pp0_iter0_data_401_V_read402_phi_reg_20159.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_401_V_read402_rewind_phi_fu_13382_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_401_V_read402_rewind_phi_fu_13382_p6 = data_401_V_read402_phi_reg_20159.read();
    } else {
        ap_phi_mux_data_401_V_read402_rewind_phi_fu_13382_p6 = data_401_V_read402_rewind_reg_13378.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_402_V_read403_phi_phi_fu_20176_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_402_V_read403_phi_phi_fu_20176_p4 = ap_phi_mux_data_402_V_read403_rewind_phi_fu_13396_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_402_V_read403_phi_phi_fu_20176_p4 = data_402_V_read.read();
    } else {
        ap_phi_mux_data_402_V_read403_phi_phi_fu_20176_p4 = ap_phi_reg_pp0_iter0_data_402_V_read403_phi_reg_20172.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_402_V_read403_rewind_phi_fu_13396_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_402_V_read403_rewind_phi_fu_13396_p6 = data_402_V_read403_phi_reg_20172.read();
    } else {
        ap_phi_mux_data_402_V_read403_rewind_phi_fu_13396_p6 = data_402_V_read403_rewind_reg_13392.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_403_V_read404_phi_phi_fu_20189_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_403_V_read404_phi_phi_fu_20189_p4 = ap_phi_mux_data_403_V_read404_rewind_phi_fu_13410_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_403_V_read404_phi_phi_fu_20189_p4 = data_403_V_read.read();
    } else {
        ap_phi_mux_data_403_V_read404_phi_phi_fu_20189_p4 = ap_phi_reg_pp0_iter0_data_403_V_read404_phi_reg_20185.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_403_V_read404_rewind_phi_fu_13410_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_403_V_read404_rewind_phi_fu_13410_p6 = data_403_V_read404_phi_reg_20185.read();
    } else {
        ap_phi_mux_data_403_V_read404_rewind_phi_fu_13410_p6 = data_403_V_read404_rewind_reg_13406.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_404_V_read405_phi_phi_fu_20202_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_404_V_read405_phi_phi_fu_20202_p4 = ap_phi_mux_data_404_V_read405_rewind_phi_fu_13424_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_404_V_read405_phi_phi_fu_20202_p4 = data_404_V_read.read();
    } else {
        ap_phi_mux_data_404_V_read405_phi_phi_fu_20202_p4 = ap_phi_reg_pp0_iter0_data_404_V_read405_phi_reg_20198.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_404_V_read405_rewind_phi_fu_13424_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_404_V_read405_rewind_phi_fu_13424_p6 = data_404_V_read405_phi_reg_20198.read();
    } else {
        ap_phi_mux_data_404_V_read405_rewind_phi_fu_13424_p6 = data_404_V_read405_rewind_reg_13420.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_405_V_read406_phi_phi_fu_20215_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_405_V_read406_phi_phi_fu_20215_p4 = ap_phi_mux_data_405_V_read406_rewind_phi_fu_13438_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_405_V_read406_phi_phi_fu_20215_p4 = data_405_V_read.read();
    } else {
        ap_phi_mux_data_405_V_read406_phi_phi_fu_20215_p4 = ap_phi_reg_pp0_iter0_data_405_V_read406_phi_reg_20211.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_405_V_read406_rewind_phi_fu_13438_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_405_V_read406_rewind_phi_fu_13438_p6 = data_405_V_read406_phi_reg_20211.read();
    } else {
        ap_phi_mux_data_405_V_read406_rewind_phi_fu_13438_p6 = data_405_V_read406_rewind_reg_13434.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_406_V_read407_phi_phi_fu_20228_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_406_V_read407_phi_phi_fu_20228_p4 = ap_phi_mux_data_406_V_read407_rewind_phi_fu_13452_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_406_V_read407_phi_phi_fu_20228_p4 = data_406_V_read.read();
    } else {
        ap_phi_mux_data_406_V_read407_phi_phi_fu_20228_p4 = ap_phi_reg_pp0_iter0_data_406_V_read407_phi_reg_20224.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_406_V_read407_rewind_phi_fu_13452_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_406_V_read407_rewind_phi_fu_13452_p6 = data_406_V_read407_phi_reg_20224.read();
    } else {
        ap_phi_mux_data_406_V_read407_rewind_phi_fu_13452_p6 = data_406_V_read407_rewind_reg_13448.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_407_V_read408_phi_phi_fu_20241_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_407_V_read408_phi_phi_fu_20241_p4 = ap_phi_mux_data_407_V_read408_rewind_phi_fu_13466_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_407_V_read408_phi_phi_fu_20241_p4 = data_407_V_read.read();
    } else {
        ap_phi_mux_data_407_V_read408_phi_phi_fu_20241_p4 = ap_phi_reg_pp0_iter0_data_407_V_read408_phi_reg_20237.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_407_V_read408_rewind_phi_fu_13466_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_407_V_read408_rewind_phi_fu_13466_p6 = data_407_V_read408_phi_reg_20237.read();
    } else {
        ap_phi_mux_data_407_V_read408_rewind_phi_fu_13466_p6 = data_407_V_read408_rewind_reg_13462.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_408_V_read409_phi_phi_fu_20254_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_408_V_read409_phi_phi_fu_20254_p4 = ap_phi_mux_data_408_V_read409_rewind_phi_fu_13480_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_408_V_read409_phi_phi_fu_20254_p4 = data_408_V_read.read();
    } else {
        ap_phi_mux_data_408_V_read409_phi_phi_fu_20254_p4 = ap_phi_reg_pp0_iter0_data_408_V_read409_phi_reg_20250.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_408_V_read409_rewind_phi_fu_13480_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_408_V_read409_rewind_phi_fu_13480_p6 = data_408_V_read409_phi_reg_20250.read();
    } else {
        ap_phi_mux_data_408_V_read409_rewind_phi_fu_13480_p6 = data_408_V_read409_rewind_reg_13476.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_409_V_read410_phi_phi_fu_20267_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_409_V_read410_phi_phi_fu_20267_p4 = ap_phi_mux_data_409_V_read410_rewind_phi_fu_13494_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_409_V_read410_phi_phi_fu_20267_p4 = data_409_V_read.read();
    } else {
        ap_phi_mux_data_409_V_read410_phi_phi_fu_20267_p4 = ap_phi_reg_pp0_iter0_data_409_V_read410_phi_reg_20263.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_409_V_read410_rewind_phi_fu_13494_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_409_V_read410_rewind_phi_fu_13494_p6 = data_409_V_read410_phi_reg_20263.read();
    } else {
        ap_phi_mux_data_409_V_read410_rewind_phi_fu_13494_p6 = data_409_V_read410_rewind_reg_13490.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_40_V_read41_phi_phi_fu_15470_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_40_V_read41_phi_phi_fu_15470_p4 = ap_phi_mux_data_40_V_read41_rewind_phi_fu_8328_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_40_V_read41_phi_phi_fu_15470_p4 = data_40_V_read.read();
    } else {
        ap_phi_mux_data_40_V_read41_phi_phi_fu_15470_p4 = ap_phi_reg_pp0_iter0_data_40_V_read41_phi_reg_15466.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_40_V_read41_rewind_phi_fu_8328_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_40_V_read41_rewind_phi_fu_8328_p6 = data_40_V_read41_phi_reg_15466.read();
    } else {
        ap_phi_mux_data_40_V_read41_rewind_phi_fu_8328_p6 = data_40_V_read41_rewind_reg_8324.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_410_V_read411_phi_phi_fu_20280_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_410_V_read411_phi_phi_fu_20280_p4 = ap_phi_mux_data_410_V_read411_rewind_phi_fu_13508_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_410_V_read411_phi_phi_fu_20280_p4 = data_410_V_read.read();
    } else {
        ap_phi_mux_data_410_V_read411_phi_phi_fu_20280_p4 = ap_phi_reg_pp0_iter0_data_410_V_read411_phi_reg_20276.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_410_V_read411_rewind_phi_fu_13508_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_410_V_read411_rewind_phi_fu_13508_p6 = data_410_V_read411_phi_reg_20276.read();
    } else {
        ap_phi_mux_data_410_V_read411_rewind_phi_fu_13508_p6 = data_410_V_read411_rewind_reg_13504.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_411_V_read412_phi_phi_fu_20293_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_411_V_read412_phi_phi_fu_20293_p4 = ap_phi_mux_data_411_V_read412_rewind_phi_fu_13522_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_411_V_read412_phi_phi_fu_20293_p4 = data_411_V_read.read();
    } else {
        ap_phi_mux_data_411_V_read412_phi_phi_fu_20293_p4 = ap_phi_reg_pp0_iter0_data_411_V_read412_phi_reg_20289.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_411_V_read412_rewind_phi_fu_13522_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_411_V_read412_rewind_phi_fu_13522_p6 = data_411_V_read412_phi_reg_20289.read();
    } else {
        ap_phi_mux_data_411_V_read412_rewind_phi_fu_13522_p6 = data_411_V_read412_rewind_reg_13518.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_412_V_read413_phi_phi_fu_20306_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_412_V_read413_phi_phi_fu_20306_p4 = ap_phi_mux_data_412_V_read413_rewind_phi_fu_13536_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_412_V_read413_phi_phi_fu_20306_p4 = data_412_V_read.read();
    } else {
        ap_phi_mux_data_412_V_read413_phi_phi_fu_20306_p4 = ap_phi_reg_pp0_iter0_data_412_V_read413_phi_reg_20302.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_412_V_read413_rewind_phi_fu_13536_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_412_V_read413_rewind_phi_fu_13536_p6 = data_412_V_read413_phi_reg_20302.read();
    } else {
        ap_phi_mux_data_412_V_read413_rewind_phi_fu_13536_p6 = data_412_V_read413_rewind_reg_13532.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_413_V_read414_phi_phi_fu_20319_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_413_V_read414_phi_phi_fu_20319_p4 = ap_phi_mux_data_413_V_read414_rewind_phi_fu_13550_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_413_V_read414_phi_phi_fu_20319_p4 = data_413_V_read.read();
    } else {
        ap_phi_mux_data_413_V_read414_phi_phi_fu_20319_p4 = ap_phi_reg_pp0_iter0_data_413_V_read414_phi_reg_20315.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_413_V_read414_rewind_phi_fu_13550_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_413_V_read414_rewind_phi_fu_13550_p6 = data_413_V_read414_phi_reg_20315.read();
    } else {
        ap_phi_mux_data_413_V_read414_rewind_phi_fu_13550_p6 = data_413_V_read414_rewind_reg_13546.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_414_V_read415_phi_phi_fu_20332_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_414_V_read415_phi_phi_fu_20332_p4 = ap_phi_mux_data_414_V_read415_rewind_phi_fu_13564_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_414_V_read415_phi_phi_fu_20332_p4 = data_414_V_read.read();
    } else {
        ap_phi_mux_data_414_V_read415_phi_phi_fu_20332_p4 = ap_phi_reg_pp0_iter0_data_414_V_read415_phi_reg_20328.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_414_V_read415_rewind_phi_fu_13564_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_414_V_read415_rewind_phi_fu_13564_p6 = data_414_V_read415_phi_reg_20328.read();
    } else {
        ap_phi_mux_data_414_V_read415_rewind_phi_fu_13564_p6 = data_414_V_read415_rewind_reg_13560.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_415_V_read416_phi_phi_fu_20345_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_415_V_read416_phi_phi_fu_20345_p4 = ap_phi_mux_data_415_V_read416_rewind_phi_fu_13578_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_415_V_read416_phi_phi_fu_20345_p4 = data_415_V_read.read();
    } else {
        ap_phi_mux_data_415_V_read416_phi_phi_fu_20345_p4 = ap_phi_reg_pp0_iter0_data_415_V_read416_phi_reg_20341.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_415_V_read416_rewind_phi_fu_13578_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_415_V_read416_rewind_phi_fu_13578_p6 = data_415_V_read416_phi_reg_20341.read();
    } else {
        ap_phi_mux_data_415_V_read416_rewind_phi_fu_13578_p6 = data_415_V_read416_rewind_reg_13574.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_416_V_read417_phi_phi_fu_20358_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_416_V_read417_phi_phi_fu_20358_p4 = ap_phi_mux_data_416_V_read417_rewind_phi_fu_13592_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_416_V_read417_phi_phi_fu_20358_p4 = data_416_V_read.read();
    } else {
        ap_phi_mux_data_416_V_read417_phi_phi_fu_20358_p4 = ap_phi_reg_pp0_iter0_data_416_V_read417_phi_reg_20354.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_416_V_read417_rewind_phi_fu_13592_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_416_V_read417_rewind_phi_fu_13592_p6 = data_416_V_read417_phi_reg_20354.read();
    } else {
        ap_phi_mux_data_416_V_read417_rewind_phi_fu_13592_p6 = data_416_V_read417_rewind_reg_13588.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_417_V_read418_phi_phi_fu_20371_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_417_V_read418_phi_phi_fu_20371_p4 = ap_phi_mux_data_417_V_read418_rewind_phi_fu_13606_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_417_V_read418_phi_phi_fu_20371_p4 = data_417_V_read.read();
    } else {
        ap_phi_mux_data_417_V_read418_phi_phi_fu_20371_p4 = ap_phi_reg_pp0_iter0_data_417_V_read418_phi_reg_20367.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_417_V_read418_rewind_phi_fu_13606_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_417_V_read418_rewind_phi_fu_13606_p6 = data_417_V_read418_phi_reg_20367.read();
    } else {
        ap_phi_mux_data_417_V_read418_rewind_phi_fu_13606_p6 = data_417_V_read418_rewind_reg_13602.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_418_V_read419_phi_phi_fu_20384_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_418_V_read419_phi_phi_fu_20384_p4 = ap_phi_mux_data_418_V_read419_rewind_phi_fu_13620_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_418_V_read419_phi_phi_fu_20384_p4 = data_418_V_read.read();
    } else {
        ap_phi_mux_data_418_V_read419_phi_phi_fu_20384_p4 = ap_phi_reg_pp0_iter0_data_418_V_read419_phi_reg_20380.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_418_V_read419_rewind_phi_fu_13620_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_418_V_read419_rewind_phi_fu_13620_p6 = data_418_V_read419_phi_reg_20380.read();
    } else {
        ap_phi_mux_data_418_V_read419_rewind_phi_fu_13620_p6 = data_418_V_read419_rewind_reg_13616.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_419_V_read420_phi_phi_fu_20397_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_419_V_read420_phi_phi_fu_20397_p4 = ap_phi_mux_data_419_V_read420_rewind_phi_fu_13634_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_419_V_read420_phi_phi_fu_20397_p4 = data_419_V_read.read();
    } else {
        ap_phi_mux_data_419_V_read420_phi_phi_fu_20397_p4 = ap_phi_reg_pp0_iter0_data_419_V_read420_phi_reg_20393.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_419_V_read420_rewind_phi_fu_13634_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_419_V_read420_rewind_phi_fu_13634_p6 = data_419_V_read420_phi_reg_20393.read();
    } else {
        ap_phi_mux_data_419_V_read420_rewind_phi_fu_13634_p6 = data_419_V_read420_rewind_reg_13630.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_41_V_read42_phi_phi_fu_15483_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_41_V_read42_phi_phi_fu_15483_p4 = ap_phi_mux_data_41_V_read42_rewind_phi_fu_8342_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_41_V_read42_phi_phi_fu_15483_p4 = data_41_V_read.read();
    } else {
        ap_phi_mux_data_41_V_read42_phi_phi_fu_15483_p4 = ap_phi_reg_pp0_iter0_data_41_V_read42_phi_reg_15479.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_41_V_read42_rewind_phi_fu_8342_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_41_V_read42_rewind_phi_fu_8342_p6 = data_41_V_read42_phi_reg_15479.read();
    } else {
        ap_phi_mux_data_41_V_read42_rewind_phi_fu_8342_p6 = data_41_V_read42_rewind_reg_8338.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_420_V_read421_phi_phi_fu_20410_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_420_V_read421_phi_phi_fu_20410_p4 = ap_phi_mux_data_420_V_read421_rewind_phi_fu_13648_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_420_V_read421_phi_phi_fu_20410_p4 = data_420_V_read.read();
    } else {
        ap_phi_mux_data_420_V_read421_phi_phi_fu_20410_p4 = ap_phi_reg_pp0_iter0_data_420_V_read421_phi_reg_20406.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_420_V_read421_rewind_phi_fu_13648_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_420_V_read421_rewind_phi_fu_13648_p6 = data_420_V_read421_phi_reg_20406.read();
    } else {
        ap_phi_mux_data_420_V_read421_rewind_phi_fu_13648_p6 = data_420_V_read421_rewind_reg_13644.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_421_V_read422_phi_phi_fu_20423_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_421_V_read422_phi_phi_fu_20423_p4 = ap_phi_mux_data_421_V_read422_rewind_phi_fu_13662_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_421_V_read422_phi_phi_fu_20423_p4 = data_421_V_read.read();
    } else {
        ap_phi_mux_data_421_V_read422_phi_phi_fu_20423_p4 = ap_phi_reg_pp0_iter0_data_421_V_read422_phi_reg_20419.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_421_V_read422_rewind_phi_fu_13662_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_421_V_read422_rewind_phi_fu_13662_p6 = data_421_V_read422_phi_reg_20419.read();
    } else {
        ap_phi_mux_data_421_V_read422_rewind_phi_fu_13662_p6 = data_421_V_read422_rewind_reg_13658.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_422_V_read423_phi_phi_fu_20436_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_422_V_read423_phi_phi_fu_20436_p4 = ap_phi_mux_data_422_V_read423_rewind_phi_fu_13676_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_422_V_read423_phi_phi_fu_20436_p4 = data_422_V_read.read();
    } else {
        ap_phi_mux_data_422_V_read423_phi_phi_fu_20436_p4 = ap_phi_reg_pp0_iter0_data_422_V_read423_phi_reg_20432.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_422_V_read423_rewind_phi_fu_13676_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_422_V_read423_rewind_phi_fu_13676_p6 = data_422_V_read423_phi_reg_20432.read();
    } else {
        ap_phi_mux_data_422_V_read423_rewind_phi_fu_13676_p6 = data_422_V_read423_rewind_reg_13672.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_423_V_read424_phi_phi_fu_20449_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_423_V_read424_phi_phi_fu_20449_p4 = ap_phi_mux_data_423_V_read424_rewind_phi_fu_13690_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_423_V_read424_phi_phi_fu_20449_p4 = data_423_V_read.read();
    } else {
        ap_phi_mux_data_423_V_read424_phi_phi_fu_20449_p4 = ap_phi_reg_pp0_iter0_data_423_V_read424_phi_reg_20445.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_423_V_read424_rewind_phi_fu_13690_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_423_V_read424_rewind_phi_fu_13690_p6 = data_423_V_read424_phi_reg_20445.read();
    } else {
        ap_phi_mux_data_423_V_read424_rewind_phi_fu_13690_p6 = data_423_V_read424_rewind_reg_13686.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_424_V_read425_phi_phi_fu_20462_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_424_V_read425_phi_phi_fu_20462_p4 = ap_phi_mux_data_424_V_read425_rewind_phi_fu_13704_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_424_V_read425_phi_phi_fu_20462_p4 = data_424_V_read.read();
    } else {
        ap_phi_mux_data_424_V_read425_phi_phi_fu_20462_p4 = ap_phi_reg_pp0_iter0_data_424_V_read425_phi_reg_20458.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_424_V_read425_rewind_phi_fu_13704_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_424_V_read425_rewind_phi_fu_13704_p6 = data_424_V_read425_phi_reg_20458.read();
    } else {
        ap_phi_mux_data_424_V_read425_rewind_phi_fu_13704_p6 = data_424_V_read425_rewind_reg_13700.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_425_V_read426_phi_phi_fu_20475_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_425_V_read426_phi_phi_fu_20475_p4 = ap_phi_mux_data_425_V_read426_rewind_phi_fu_13718_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_425_V_read426_phi_phi_fu_20475_p4 = data_425_V_read.read();
    } else {
        ap_phi_mux_data_425_V_read426_phi_phi_fu_20475_p4 = ap_phi_reg_pp0_iter0_data_425_V_read426_phi_reg_20471.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_425_V_read426_rewind_phi_fu_13718_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_425_V_read426_rewind_phi_fu_13718_p6 = data_425_V_read426_phi_reg_20471.read();
    } else {
        ap_phi_mux_data_425_V_read426_rewind_phi_fu_13718_p6 = data_425_V_read426_rewind_reg_13714.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_426_V_read427_phi_phi_fu_20488_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_426_V_read427_phi_phi_fu_20488_p4 = ap_phi_mux_data_426_V_read427_rewind_phi_fu_13732_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_426_V_read427_phi_phi_fu_20488_p4 = data_426_V_read.read();
    } else {
        ap_phi_mux_data_426_V_read427_phi_phi_fu_20488_p4 = ap_phi_reg_pp0_iter0_data_426_V_read427_phi_reg_20484.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_426_V_read427_rewind_phi_fu_13732_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_426_V_read427_rewind_phi_fu_13732_p6 = data_426_V_read427_phi_reg_20484.read();
    } else {
        ap_phi_mux_data_426_V_read427_rewind_phi_fu_13732_p6 = data_426_V_read427_rewind_reg_13728.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_427_V_read428_phi_phi_fu_20501_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_427_V_read428_phi_phi_fu_20501_p4 = ap_phi_mux_data_427_V_read428_rewind_phi_fu_13746_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_427_V_read428_phi_phi_fu_20501_p4 = data_427_V_read.read();
    } else {
        ap_phi_mux_data_427_V_read428_phi_phi_fu_20501_p4 = ap_phi_reg_pp0_iter0_data_427_V_read428_phi_reg_20497.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_427_V_read428_rewind_phi_fu_13746_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_427_V_read428_rewind_phi_fu_13746_p6 = data_427_V_read428_phi_reg_20497.read();
    } else {
        ap_phi_mux_data_427_V_read428_rewind_phi_fu_13746_p6 = data_427_V_read428_rewind_reg_13742.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_428_V_read429_phi_phi_fu_20514_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_428_V_read429_phi_phi_fu_20514_p4 = ap_phi_mux_data_428_V_read429_rewind_phi_fu_13760_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_428_V_read429_phi_phi_fu_20514_p4 = data_428_V_read.read();
    } else {
        ap_phi_mux_data_428_V_read429_phi_phi_fu_20514_p4 = ap_phi_reg_pp0_iter0_data_428_V_read429_phi_reg_20510.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_428_V_read429_rewind_phi_fu_13760_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_428_V_read429_rewind_phi_fu_13760_p6 = data_428_V_read429_phi_reg_20510.read();
    } else {
        ap_phi_mux_data_428_V_read429_rewind_phi_fu_13760_p6 = data_428_V_read429_rewind_reg_13756.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_429_V_read430_phi_phi_fu_20527_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_429_V_read430_phi_phi_fu_20527_p4 = ap_phi_mux_data_429_V_read430_rewind_phi_fu_13774_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_429_V_read430_phi_phi_fu_20527_p4 = data_429_V_read.read();
    } else {
        ap_phi_mux_data_429_V_read430_phi_phi_fu_20527_p4 = ap_phi_reg_pp0_iter0_data_429_V_read430_phi_reg_20523.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_429_V_read430_rewind_phi_fu_13774_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_429_V_read430_rewind_phi_fu_13774_p6 = data_429_V_read430_phi_reg_20523.read();
    } else {
        ap_phi_mux_data_429_V_read430_rewind_phi_fu_13774_p6 = data_429_V_read430_rewind_reg_13770.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_42_V_read43_phi_phi_fu_15496_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_42_V_read43_phi_phi_fu_15496_p4 = ap_phi_mux_data_42_V_read43_rewind_phi_fu_8356_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_42_V_read43_phi_phi_fu_15496_p4 = data_42_V_read.read();
    } else {
        ap_phi_mux_data_42_V_read43_phi_phi_fu_15496_p4 = ap_phi_reg_pp0_iter0_data_42_V_read43_phi_reg_15492.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_42_V_read43_rewind_phi_fu_8356_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_42_V_read43_rewind_phi_fu_8356_p6 = data_42_V_read43_phi_reg_15492.read();
    } else {
        ap_phi_mux_data_42_V_read43_rewind_phi_fu_8356_p6 = data_42_V_read43_rewind_reg_8352.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_430_V_read431_phi_phi_fu_20540_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_430_V_read431_phi_phi_fu_20540_p4 = ap_phi_mux_data_430_V_read431_rewind_phi_fu_13788_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_430_V_read431_phi_phi_fu_20540_p4 = data_430_V_read.read();
    } else {
        ap_phi_mux_data_430_V_read431_phi_phi_fu_20540_p4 = ap_phi_reg_pp0_iter0_data_430_V_read431_phi_reg_20536.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_430_V_read431_rewind_phi_fu_13788_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_430_V_read431_rewind_phi_fu_13788_p6 = data_430_V_read431_phi_reg_20536.read();
    } else {
        ap_phi_mux_data_430_V_read431_rewind_phi_fu_13788_p6 = data_430_V_read431_rewind_reg_13784.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_431_V_read432_phi_phi_fu_20553_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_431_V_read432_phi_phi_fu_20553_p4 = ap_phi_mux_data_431_V_read432_rewind_phi_fu_13802_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_431_V_read432_phi_phi_fu_20553_p4 = data_431_V_read.read();
    } else {
        ap_phi_mux_data_431_V_read432_phi_phi_fu_20553_p4 = ap_phi_reg_pp0_iter0_data_431_V_read432_phi_reg_20549.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_431_V_read432_rewind_phi_fu_13802_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_431_V_read432_rewind_phi_fu_13802_p6 = data_431_V_read432_phi_reg_20549.read();
    } else {
        ap_phi_mux_data_431_V_read432_rewind_phi_fu_13802_p6 = data_431_V_read432_rewind_reg_13798.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_432_V_read433_phi_phi_fu_20566_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_432_V_read433_phi_phi_fu_20566_p4 = ap_phi_mux_data_432_V_read433_rewind_phi_fu_13816_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_432_V_read433_phi_phi_fu_20566_p4 = data_432_V_read.read();
    } else {
        ap_phi_mux_data_432_V_read433_phi_phi_fu_20566_p4 = ap_phi_reg_pp0_iter0_data_432_V_read433_phi_reg_20562.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_432_V_read433_rewind_phi_fu_13816_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_432_V_read433_rewind_phi_fu_13816_p6 = data_432_V_read433_phi_reg_20562.read();
    } else {
        ap_phi_mux_data_432_V_read433_rewind_phi_fu_13816_p6 = data_432_V_read433_rewind_reg_13812.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_433_V_read434_phi_phi_fu_20579_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_433_V_read434_phi_phi_fu_20579_p4 = ap_phi_mux_data_433_V_read434_rewind_phi_fu_13830_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_433_V_read434_phi_phi_fu_20579_p4 = data_433_V_read.read();
    } else {
        ap_phi_mux_data_433_V_read434_phi_phi_fu_20579_p4 = ap_phi_reg_pp0_iter0_data_433_V_read434_phi_reg_20575.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_433_V_read434_rewind_phi_fu_13830_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_433_V_read434_rewind_phi_fu_13830_p6 = data_433_V_read434_phi_reg_20575.read();
    } else {
        ap_phi_mux_data_433_V_read434_rewind_phi_fu_13830_p6 = data_433_V_read434_rewind_reg_13826.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_434_V_read435_phi_phi_fu_20592_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_434_V_read435_phi_phi_fu_20592_p4 = ap_phi_mux_data_434_V_read435_rewind_phi_fu_13844_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_434_V_read435_phi_phi_fu_20592_p4 = data_434_V_read.read();
    } else {
        ap_phi_mux_data_434_V_read435_phi_phi_fu_20592_p4 = ap_phi_reg_pp0_iter0_data_434_V_read435_phi_reg_20588.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_434_V_read435_rewind_phi_fu_13844_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_434_V_read435_rewind_phi_fu_13844_p6 = data_434_V_read435_phi_reg_20588.read();
    } else {
        ap_phi_mux_data_434_V_read435_rewind_phi_fu_13844_p6 = data_434_V_read435_rewind_reg_13840.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_435_V_read436_phi_phi_fu_20605_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_435_V_read436_phi_phi_fu_20605_p4 = ap_phi_mux_data_435_V_read436_rewind_phi_fu_13858_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_435_V_read436_phi_phi_fu_20605_p4 = data_435_V_read.read();
    } else {
        ap_phi_mux_data_435_V_read436_phi_phi_fu_20605_p4 = ap_phi_reg_pp0_iter0_data_435_V_read436_phi_reg_20601.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_435_V_read436_rewind_phi_fu_13858_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_435_V_read436_rewind_phi_fu_13858_p6 = data_435_V_read436_phi_reg_20601.read();
    } else {
        ap_phi_mux_data_435_V_read436_rewind_phi_fu_13858_p6 = data_435_V_read436_rewind_reg_13854.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_436_V_read437_phi_phi_fu_20618_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_436_V_read437_phi_phi_fu_20618_p4 = ap_phi_mux_data_436_V_read437_rewind_phi_fu_13872_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_436_V_read437_phi_phi_fu_20618_p4 = data_436_V_read.read();
    } else {
        ap_phi_mux_data_436_V_read437_phi_phi_fu_20618_p4 = ap_phi_reg_pp0_iter0_data_436_V_read437_phi_reg_20614.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_436_V_read437_rewind_phi_fu_13872_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_436_V_read437_rewind_phi_fu_13872_p6 = data_436_V_read437_phi_reg_20614.read();
    } else {
        ap_phi_mux_data_436_V_read437_rewind_phi_fu_13872_p6 = data_436_V_read437_rewind_reg_13868.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_437_V_read438_phi_phi_fu_20631_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_437_V_read438_phi_phi_fu_20631_p4 = ap_phi_mux_data_437_V_read438_rewind_phi_fu_13886_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_437_V_read438_phi_phi_fu_20631_p4 = data_437_V_read.read();
    } else {
        ap_phi_mux_data_437_V_read438_phi_phi_fu_20631_p4 = ap_phi_reg_pp0_iter0_data_437_V_read438_phi_reg_20627.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_437_V_read438_rewind_phi_fu_13886_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_437_V_read438_rewind_phi_fu_13886_p6 = data_437_V_read438_phi_reg_20627.read();
    } else {
        ap_phi_mux_data_437_V_read438_rewind_phi_fu_13886_p6 = data_437_V_read438_rewind_reg_13882.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_438_V_read439_phi_phi_fu_20644_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_438_V_read439_phi_phi_fu_20644_p4 = ap_phi_mux_data_438_V_read439_rewind_phi_fu_13900_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_438_V_read439_phi_phi_fu_20644_p4 = data_438_V_read.read();
    } else {
        ap_phi_mux_data_438_V_read439_phi_phi_fu_20644_p4 = ap_phi_reg_pp0_iter0_data_438_V_read439_phi_reg_20640.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_438_V_read439_rewind_phi_fu_13900_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_438_V_read439_rewind_phi_fu_13900_p6 = data_438_V_read439_phi_reg_20640.read();
    } else {
        ap_phi_mux_data_438_V_read439_rewind_phi_fu_13900_p6 = data_438_V_read439_rewind_reg_13896.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_439_V_read440_phi_phi_fu_20657_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_439_V_read440_phi_phi_fu_20657_p4 = ap_phi_mux_data_439_V_read440_rewind_phi_fu_13914_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_439_V_read440_phi_phi_fu_20657_p4 = data_439_V_read.read();
    } else {
        ap_phi_mux_data_439_V_read440_phi_phi_fu_20657_p4 = ap_phi_reg_pp0_iter0_data_439_V_read440_phi_reg_20653.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_439_V_read440_rewind_phi_fu_13914_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_439_V_read440_rewind_phi_fu_13914_p6 = data_439_V_read440_phi_reg_20653.read();
    } else {
        ap_phi_mux_data_439_V_read440_rewind_phi_fu_13914_p6 = data_439_V_read440_rewind_reg_13910.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_43_V_read44_phi_phi_fu_15509_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_43_V_read44_phi_phi_fu_15509_p4 = ap_phi_mux_data_43_V_read44_rewind_phi_fu_8370_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_43_V_read44_phi_phi_fu_15509_p4 = data_43_V_read.read();
    } else {
        ap_phi_mux_data_43_V_read44_phi_phi_fu_15509_p4 = ap_phi_reg_pp0_iter0_data_43_V_read44_phi_reg_15505.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_43_V_read44_rewind_phi_fu_8370_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_43_V_read44_rewind_phi_fu_8370_p6 = data_43_V_read44_phi_reg_15505.read();
    } else {
        ap_phi_mux_data_43_V_read44_rewind_phi_fu_8370_p6 = data_43_V_read44_rewind_reg_8366.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_440_V_read441_phi_phi_fu_20670_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_440_V_read441_phi_phi_fu_20670_p4 = ap_phi_mux_data_440_V_read441_rewind_phi_fu_13928_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_440_V_read441_phi_phi_fu_20670_p4 = data_440_V_read.read();
    } else {
        ap_phi_mux_data_440_V_read441_phi_phi_fu_20670_p4 = ap_phi_reg_pp0_iter0_data_440_V_read441_phi_reg_20666.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_440_V_read441_rewind_phi_fu_13928_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_440_V_read441_rewind_phi_fu_13928_p6 = data_440_V_read441_phi_reg_20666.read();
    } else {
        ap_phi_mux_data_440_V_read441_rewind_phi_fu_13928_p6 = data_440_V_read441_rewind_reg_13924.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_441_V_read442_phi_phi_fu_20683_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_441_V_read442_phi_phi_fu_20683_p4 = ap_phi_mux_data_441_V_read442_rewind_phi_fu_13942_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_441_V_read442_phi_phi_fu_20683_p4 = data_441_V_read.read();
    } else {
        ap_phi_mux_data_441_V_read442_phi_phi_fu_20683_p4 = ap_phi_reg_pp0_iter0_data_441_V_read442_phi_reg_20679.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_441_V_read442_rewind_phi_fu_13942_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_441_V_read442_rewind_phi_fu_13942_p6 = data_441_V_read442_phi_reg_20679.read();
    } else {
        ap_phi_mux_data_441_V_read442_rewind_phi_fu_13942_p6 = data_441_V_read442_rewind_reg_13938.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_442_V_read443_phi_phi_fu_20696_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_442_V_read443_phi_phi_fu_20696_p4 = ap_phi_mux_data_442_V_read443_rewind_phi_fu_13956_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_442_V_read443_phi_phi_fu_20696_p4 = data_442_V_read.read();
    } else {
        ap_phi_mux_data_442_V_read443_phi_phi_fu_20696_p4 = ap_phi_reg_pp0_iter0_data_442_V_read443_phi_reg_20692.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_442_V_read443_rewind_phi_fu_13956_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_442_V_read443_rewind_phi_fu_13956_p6 = data_442_V_read443_phi_reg_20692.read();
    } else {
        ap_phi_mux_data_442_V_read443_rewind_phi_fu_13956_p6 = data_442_V_read443_rewind_reg_13952.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_443_V_read444_phi_phi_fu_20709_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_443_V_read444_phi_phi_fu_20709_p4 = ap_phi_mux_data_443_V_read444_rewind_phi_fu_13970_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_443_V_read444_phi_phi_fu_20709_p4 = data_443_V_read.read();
    } else {
        ap_phi_mux_data_443_V_read444_phi_phi_fu_20709_p4 = ap_phi_reg_pp0_iter0_data_443_V_read444_phi_reg_20705.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_443_V_read444_rewind_phi_fu_13970_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_443_V_read444_rewind_phi_fu_13970_p6 = data_443_V_read444_phi_reg_20705.read();
    } else {
        ap_phi_mux_data_443_V_read444_rewind_phi_fu_13970_p6 = data_443_V_read444_rewind_reg_13966.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_444_V_read445_phi_phi_fu_20722_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_444_V_read445_phi_phi_fu_20722_p4 = ap_phi_mux_data_444_V_read445_rewind_phi_fu_13984_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_444_V_read445_phi_phi_fu_20722_p4 = data_444_V_read.read();
    } else {
        ap_phi_mux_data_444_V_read445_phi_phi_fu_20722_p4 = ap_phi_reg_pp0_iter0_data_444_V_read445_phi_reg_20718.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_444_V_read445_rewind_phi_fu_13984_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_444_V_read445_rewind_phi_fu_13984_p6 = data_444_V_read445_phi_reg_20718.read();
    } else {
        ap_phi_mux_data_444_V_read445_rewind_phi_fu_13984_p6 = data_444_V_read445_rewind_reg_13980.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_445_V_read446_phi_phi_fu_20735_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_445_V_read446_phi_phi_fu_20735_p4 = ap_phi_mux_data_445_V_read446_rewind_phi_fu_13998_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_445_V_read446_phi_phi_fu_20735_p4 = data_445_V_read.read();
    } else {
        ap_phi_mux_data_445_V_read446_phi_phi_fu_20735_p4 = ap_phi_reg_pp0_iter0_data_445_V_read446_phi_reg_20731.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_445_V_read446_rewind_phi_fu_13998_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_445_V_read446_rewind_phi_fu_13998_p6 = data_445_V_read446_phi_reg_20731.read();
    } else {
        ap_phi_mux_data_445_V_read446_rewind_phi_fu_13998_p6 = data_445_V_read446_rewind_reg_13994.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_446_V_read447_phi_phi_fu_20748_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_446_V_read447_phi_phi_fu_20748_p4 = ap_phi_mux_data_446_V_read447_rewind_phi_fu_14012_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_446_V_read447_phi_phi_fu_20748_p4 = data_446_V_read.read();
    } else {
        ap_phi_mux_data_446_V_read447_phi_phi_fu_20748_p4 = ap_phi_reg_pp0_iter0_data_446_V_read447_phi_reg_20744.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_446_V_read447_rewind_phi_fu_14012_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_446_V_read447_rewind_phi_fu_14012_p6 = data_446_V_read447_phi_reg_20744.read();
    } else {
        ap_phi_mux_data_446_V_read447_rewind_phi_fu_14012_p6 = data_446_V_read447_rewind_reg_14008.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_447_V_read448_phi_phi_fu_20761_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_447_V_read448_phi_phi_fu_20761_p4 = ap_phi_mux_data_447_V_read448_rewind_phi_fu_14026_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_447_V_read448_phi_phi_fu_20761_p4 = data_447_V_read.read();
    } else {
        ap_phi_mux_data_447_V_read448_phi_phi_fu_20761_p4 = ap_phi_reg_pp0_iter0_data_447_V_read448_phi_reg_20757.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_447_V_read448_rewind_phi_fu_14026_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_447_V_read448_rewind_phi_fu_14026_p6 = data_447_V_read448_phi_reg_20757.read();
    } else {
        ap_phi_mux_data_447_V_read448_rewind_phi_fu_14026_p6 = data_447_V_read448_rewind_reg_14022.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_448_V_read449_phi_phi_fu_20774_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_448_V_read449_phi_phi_fu_20774_p4 = ap_phi_mux_data_448_V_read449_rewind_phi_fu_14040_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_448_V_read449_phi_phi_fu_20774_p4 = data_448_V_read.read();
    } else {
        ap_phi_mux_data_448_V_read449_phi_phi_fu_20774_p4 = ap_phi_reg_pp0_iter0_data_448_V_read449_phi_reg_20770.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_448_V_read449_rewind_phi_fu_14040_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_448_V_read449_rewind_phi_fu_14040_p6 = data_448_V_read449_phi_reg_20770.read();
    } else {
        ap_phi_mux_data_448_V_read449_rewind_phi_fu_14040_p6 = data_448_V_read449_rewind_reg_14036.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_449_V_read450_phi_phi_fu_20787_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_449_V_read450_phi_phi_fu_20787_p4 = ap_phi_mux_data_449_V_read450_rewind_phi_fu_14054_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_449_V_read450_phi_phi_fu_20787_p4 = data_449_V_read.read();
    } else {
        ap_phi_mux_data_449_V_read450_phi_phi_fu_20787_p4 = ap_phi_reg_pp0_iter0_data_449_V_read450_phi_reg_20783.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_449_V_read450_rewind_phi_fu_14054_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_449_V_read450_rewind_phi_fu_14054_p6 = data_449_V_read450_phi_reg_20783.read();
    } else {
        ap_phi_mux_data_449_V_read450_rewind_phi_fu_14054_p6 = data_449_V_read450_rewind_reg_14050.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_44_V_read45_phi_phi_fu_15522_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_44_V_read45_phi_phi_fu_15522_p4 = ap_phi_mux_data_44_V_read45_rewind_phi_fu_8384_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_44_V_read45_phi_phi_fu_15522_p4 = data_44_V_read.read();
    } else {
        ap_phi_mux_data_44_V_read45_phi_phi_fu_15522_p4 = ap_phi_reg_pp0_iter0_data_44_V_read45_phi_reg_15518.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_44_V_read45_rewind_phi_fu_8384_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_44_V_read45_rewind_phi_fu_8384_p6 = data_44_V_read45_phi_reg_15518.read();
    } else {
        ap_phi_mux_data_44_V_read45_rewind_phi_fu_8384_p6 = data_44_V_read45_rewind_reg_8380.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_450_V_read451_phi_phi_fu_20800_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_450_V_read451_phi_phi_fu_20800_p4 = ap_phi_mux_data_450_V_read451_rewind_phi_fu_14068_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_450_V_read451_phi_phi_fu_20800_p4 = data_450_V_read.read();
    } else {
        ap_phi_mux_data_450_V_read451_phi_phi_fu_20800_p4 = ap_phi_reg_pp0_iter0_data_450_V_read451_phi_reg_20796.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_450_V_read451_rewind_phi_fu_14068_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_450_V_read451_rewind_phi_fu_14068_p6 = data_450_V_read451_phi_reg_20796.read();
    } else {
        ap_phi_mux_data_450_V_read451_rewind_phi_fu_14068_p6 = data_450_V_read451_rewind_reg_14064.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_451_V_read452_phi_phi_fu_20813_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_451_V_read452_phi_phi_fu_20813_p4 = ap_phi_mux_data_451_V_read452_rewind_phi_fu_14082_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_451_V_read452_phi_phi_fu_20813_p4 = data_451_V_read.read();
    } else {
        ap_phi_mux_data_451_V_read452_phi_phi_fu_20813_p4 = ap_phi_reg_pp0_iter0_data_451_V_read452_phi_reg_20809.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_451_V_read452_rewind_phi_fu_14082_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_451_V_read452_rewind_phi_fu_14082_p6 = data_451_V_read452_phi_reg_20809.read();
    } else {
        ap_phi_mux_data_451_V_read452_rewind_phi_fu_14082_p6 = data_451_V_read452_rewind_reg_14078.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_452_V_read453_phi_phi_fu_20826_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_452_V_read453_phi_phi_fu_20826_p4 = ap_phi_mux_data_452_V_read453_rewind_phi_fu_14096_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_452_V_read453_phi_phi_fu_20826_p4 = data_452_V_read.read();
    } else {
        ap_phi_mux_data_452_V_read453_phi_phi_fu_20826_p4 = ap_phi_reg_pp0_iter0_data_452_V_read453_phi_reg_20822.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_452_V_read453_rewind_phi_fu_14096_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_452_V_read453_rewind_phi_fu_14096_p6 = data_452_V_read453_phi_reg_20822.read();
    } else {
        ap_phi_mux_data_452_V_read453_rewind_phi_fu_14096_p6 = data_452_V_read453_rewind_reg_14092.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_453_V_read454_phi_phi_fu_20839_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_453_V_read454_phi_phi_fu_20839_p4 = ap_phi_mux_data_453_V_read454_rewind_phi_fu_14110_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_453_V_read454_phi_phi_fu_20839_p4 = data_453_V_read.read();
    } else {
        ap_phi_mux_data_453_V_read454_phi_phi_fu_20839_p4 = ap_phi_reg_pp0_iter0_data_453_V_read454_phi_reg_20835.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_453_V_read454_rewind_phi_fu_14110_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_453_V_read454_rewind_phi_fu_14110_p6 = data_453_V_read454_phi_reg_20835.read();
    } else {
        ap_phi_mux_data_453_V_read454_rewind_phi_fu_14110_p6 = data_453_V_read454_rewind_reg_14106.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_454_V_read455_phi_phi_fu_20852_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_454_V_read455_phi_phi_fu_20852_p4 = ap_phi_mux_data_454_V_read455_rewind_phi_fu_14124_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_454_V_read455_phi_phi_fu_20852_p4 = data_454_V_read.read();
    } else {
        ap_phi_mux_data_454_V_read455_phi_phi_fu_20852_p4 = ap_phi_reg_pp0_iter0_data_454_V_read455_phi_reg_20848.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_454_V_read455_rewind_phi_fu_14124_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_454_V_read455_rewind_phi_fu_14124_p6 = data_454_V_read455_phi_reg_20848.read();
    } else {
        ap_phi_mux_data_454_V_read455_rewind_phi_fu_14124_p6 = data_454_V_read455_rewind_reg_14120.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_455_V_read456_phi_phi_fu_20865_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_455_V_read456_phi_phi_fu_20865_p4 = ap_phi_mux_data_455_V_read456_rewind_phi_fu_14138_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_455_V_read456_phi_phi_fu_20865_p4 = data_455_V_read.read();
    } else {
        ap_phi_mux_data_455_V_read456_phi_phi_fu_20865_p4 = ap_phi_reg_pp0_iter0_data_455_V_read456_phi_reg_20861.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_455_V_read456_rewind_phi_fu_14138_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_455_V_read456_rewind_phi_fu_14138_p6 = data_455_V_read456_phi_reg_20861.read();
    } else {
        ap_phi_mux_data_455_V_read456_rewind_phi_fu_14138_p6 = data_455_V_read456_rewind_reg_14134.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_456_V_read457_phi_phi_fu_20878_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_456_V_read457_phi_phi_fu_20878_p4 = ap_phi_mux_data_456_V_read457_rewind_phi_fu_14152_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_456_V_read457_phi_phi_fu_20878_p4 = data_456_V_read.read();
    } else {
        ap_phi_mux_data_456_V_read457_phi_phi_fu_20878_p4 = ap_phi_reg_pp0_iter0_data_456_V_read457_phi_reg_20874.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_456_V_read457_rewind_phi_fu_14152_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_456_V_read457_rewind_phi_fu_14152_p6 = data_456_V_read457_phi_reg_20874.read();
    } else {
        ap_phi_mux_data_456_V_read457_rewind_phi_fu_14152_p6 = data_456_V_read457_rewind_reg_14148.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_457_V_read458_phi_phi_fu_20891_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_457_V_read458_phi_phi_fu_20891_p4 = ap_phi_mux_data_457_V_read458_rewind_phi_fu_14166_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_457_V_read458_phi_phi_fu_20891_p4 = data_457_V_read.read();
    } else {
        ap_phi_mux_data_457_V_read458_phi_phi_fu_20891_p4 = ap_phi_reg_pp0_iter0_data_457_V_read458_phi_reg_20887.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_457_V_read458_rewind_phi_fu_14166_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_457_V_read458_rewind_phi_fu_14166_p6 = data_457_V_read458_phi_reg_20887.read();
    } else {
        ap_phi_mux_data_457_V_read458_rewind_phi_fu_14166_p6 = data_457_V_read458_rewind_reg_14162.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_458_V_read459_phi_phi_fu_20904_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_458_V_read459_phi_phi_fu_20904_p4 = ap_phi_mux_data_458_V_read459_rewind_phi_fu_14180_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_458_V_read459_phi_phi_fu_20904_p4 = data_458_V_read.read();
    } else {
        ap_phi_mux_data_458_V_read459_phi_phi_fu_20904_p4 = ap_phi_reg_pp0_iter0_data_458_V_read459_phi_reg_20900.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_458_V_read459_rewind_phi_fu_14180_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_458_V_read459_rewind_phi_fu_14180_p6 = data_458_V_read459_phi_reg_20900.read();
    } else {
        ap_phi_mux_data_458_V_read459_rewind_phi_fu_14180_p6 = data_458_V_read459_rewind_reg_14176.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_459_V_read460_phi_phi_fu_20917_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_459_V_read460_phi_phi_fu_20917_p4 = ap_phi_mux_data_459_V_read460_rewind_phi_fu_14194_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_459_V_read460_phi_phi_fu_20917_p4 = data_459_V_read.read();
    } else {
        ap_phi_mux_data_459_V_read460_phi_phi_fu_20917_p4 = ap_phi_reg_pp0_iter0_data_459_V_read460_phi_reg_20913.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_459_V_read460_rewind_phi_fu_14194_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_459_V_read460_rewind_phi_fu_14194_p6 = data_459_V_read460_phi_reg_20913.read();
    } else {
        ap_phi_mux_data_459_V_read460_rewind_phi_fu_14194_p6 = data_459_V_read460_rewind_reg_14190.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_45_V_read46_phi_phi_fu_15535_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_45_V_read46_phi_phi_fu_15535_p4 = ap_phi_mux_data_45_V_read46_rewind_phi_fu_8398_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_45_V_read46_phi_phi_fu_15535_p4 = data_45_V_read.read();
    } else {
        ap_phi_mux_data_45_V_read46_phi_phi_fu_15535_p4 = ap_phi_reg_pp0_iter0_data_45_V_read46_phi_reg_15531.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_45_V_read46_rewind_phi_fu_8398_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_45_V_read46_rewind_phi_fu_8398_p6 = data_45_V_read46_phi_reg_15531.read();
    } else {
        ap_phi_mux_data_45_V_read46_rewind_phi_fu_8398_p6 = data_45_V_read46_rewind_reg_8394.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_460_V_read461_phi_phi_fu_20930_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_460_V_read461_phi_phi_fu_20930_p4 = ap_phi_mux_data_460_V_read461_rewind_phi_fu_14208_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_460_V_read461_phi_phi_fu_20930_p4 = data_460_V_read.read();
    } else {
        ap_phi_mux_data_460_V_read461_phi_phi_fu_20930_p4 = ap_phi_reg_pp0_iter0_data_460_V_read461_phi_reg_20926.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_460_V_read461_rewind_phi_fu_14208_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_460_V_read461_rewind_phi_fu_14208_p6 = data_460_V_read461_phi_reg_20926.read();
    } else {
        ap_phi_mux_data_460_V_read461_rewind_phi_fu_14208_p6 = data_460_V_read461_rewind_reg_14204.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_461_V_read462_phi_phi_fu_20943_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_461_V_read462_phi_phi_fu_20943_p4 = ap_phi_mux_data_461_V_read462_rewind_phi_fu_14222_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_461_V_read462_phi_phi_fu_20943_p4 = data_461_V_read.read();
    } else {
        ap_phi_mux_data_461_V_read462_phi_phi_fu_20943_p4 = ap_phi_reg_pp0_iter0_data_461_V_read462_phi_reg_20939.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_461_V_read462_rewind_phi_fu_14222_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_461_V_read462_rewind_phi_fu_14222_p6 = data_461_V_read462_phi_reg_20939.read();
    } else {
        ap_phi_mux_data_461_V_read462_rewind_phi_fu_14222_p6 = data_461_V_read462_rewind_reg_14218.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_462_V_read463_phi_phi_fu_20956_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_462_V_read463_phi_phi_fu_20956_p4 = ap_phi_mux_data_462_V_read463_rewind_phi_fu_14236_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_462_V_read463_phi_phi_fu_20956_p4 = data_462_V_read.read();
    } else {
        ap_phi_mux_data_462_V_read463_phi_phi_fu_20956_p4 = ap_phi_reg_pp0_iter0_data_462_V_read463_phi_reg_20952.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_462_V_read463_rewind_phi_fu_14236_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_462_V_read463_rewind_phi_fu_14236_p6 = data_462_V_read463_phi_reg_20952.read();
    } else {
        ap_phi_mux_data_462_V_read463_rewind_phi_fu_14236_p6 = data_462_V_read463_rewind_reg_14232.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_463_V_read464_phi_phi_fu_20969_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_463_V_read464_phi_phi_fu_20969_p4 = ap_phi_mux_data_463_V_read464_rewind_phi_fu_14250_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_463_V_read464_phi_phi_fu_20969_p4 = data_463_V_read.read();
    } else {
        ap_phi_mux_data_463_V_read464_phi_phi_fu_20969_p4 = ap_phi_reg_pp0_iter0_data_463_V_read464_phi_reg_20965.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_463_V_read464_rewind_phi_fu_14250_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_463_V_read464_rewind_phi_fu_14250_p6 = data_463_V_read464_phi_reg_20965.read();
    } else {
        ap_phi_mux_data_463_V_read464_rewind_phi_fu_14250_p6 = data_463_V_read464_rewind_reg_14246.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_464_V_read465_phi_phi_fu_20982_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_464_V_read465_phi_phi_fu_20982_p4 = ap_phi_mux_data_464_V_read465_rewind_phi_fu_14264_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_464_V_read465_phi_phi_fu_20982_p4 = data_464_V_read.read();
    } else {
        ap_phi_mux_data_464_V_read465_phi_phi_fu_20982_p4 = ap_phi_reg_pp0_iter0_data_464_V_read465_phi_reg_20978.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_464_V_read465_rewind_phi_fu_14264_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_464_V_read465_rewind_phi_fu_14264_p6 = data_464_V_read465_phi_reg_20978.read();
    } else {
        ap_phi_mux_data_464_V_read465_rewind_phi_fu_14264_p6 = data_464_V_read465_rewind_reg_14260.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_465_V_read466_phi_phi_fu_20995_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_465_V_read466_phi_phi_fu_20995_p4 = ap_phi_mux_data_465_V_read466_rewind_phi_fu_14278_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_465_V_read466_phi_phi_fu_20995_p4 = data_465_V_read.read();
    } else {
        ap_phi_mux_data_465_V_read466_phi_phi_fu_20995_p4 = ap_phi_reg_pp0_iter0_data_465_V_read466_phi_reg_20991.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_465_V_read466_rewind_phi_fu_14278_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_465_V_read466_rewind_phi_fu_14278_p6 = data_465_V_read466_phi_reg_20991.read();
    } else {
        ap_phi_mux_data_465_V_read466_rewind_phi_fu_14278_p6 = data_465_V_read466_rewind_reg_14274.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_466_V_read467_phi_phi_fu_21008_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_466_V_read467_phi_phi_fu_21008_p4 = ap_phi_mux_data_466_V_read467_rewind_phi_fu_14292_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_466_V_read467_phi_phi_fu_21008_p4 = data_466_V_read.read();
    } else {
        ap_phi_mux_data_466_V_read467_phi_phi_fu_21008_p4 = ap_phi_reg_pp0_iter0_data_466_V_read467_phi_reg_21004.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_466_V_read467_rewind_phi_fu_14292_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_466_V_read467_rewind_phi_fu_14292_p6 = data_466_V_read467_phi_reg_21004.read();
    } else {
        ap_phi_mux_data_466_V_read467_rewind_phi_fu_14292_p6 = data_466_V_read467_rewind_reg_14288.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_467_V_read468_phi_phi_fu_21021_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_467_V_read468_phi_phi_fu_21021_p4 = ap_phi_mux_data_467_V_read468_rewind_phi_fu_14306_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_467_V_read468_phi_phi_fu_21021_p4 = data_467_V_read.read();
    } else {
        ap_phi_mux_data_467_V_read468_phi_phi_fu_21021_p4 = ap_phi_reg_pp0_iter0_data_467_V_read468_phi_reg_21017.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_467_V_read468_rewind_phi_fu_14306_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_467_V_read468_rewind_phi_fu_14306_p6 = data_467_V_read468_phi_reg_21017.read();
    } else {
        ap_phi_mux_data_467_V_read468_rewind_phi_fu_14306_p6 = data_467_V_read468_rewind_reg_14302.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_468_V_read469_phi_phi_fu_21034_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_468_V_read469_phi_phi_fu_21034_p4 = ap_phi_mux_data_468_V_read469_rewind_phi_fu_14320_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_468_V_read469_phi_phi_fu_21034_p4 = data_468_V_read.read();
    } else {
        ap_phi_mux_data_468_V_read469_phi_phi_fu_21034_p4 = ap_phi_reg_pp0_iter0_data_468_V_read469_phi_reg_21030.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_468_V_read469_rewind_phi_fu_14320_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_468_V_read469_rewind_phi_fu_14320_p6 = data_468_V_read469_phi_reg_21030.read();
    } else {
        ap_phi_mux_data_468_V_read469_rewind_phi_fu_14320_p6 = data_468_V_read469_rewind_reg_14316.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_469_V_read470_phi_phi_fu_21047_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_469_V_read470_phi_phi_fu_21047_p4 = ap_phi_mux_data_469_V_read470_rewind_phi_fu_14334_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_469_V_read470_phi_phi_fu_21047_p4 = data_469_V_read.read();
    } else {
        ap_phi_mux_data_469_V_read470_phi_phi_fu_21047_p4 = ap_phi_reg_pp0_iter0_data_469_V_read470_phi_reg_21043.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_469_V_read470_rewind_phi_fu_14334_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_469_V_read470_rewind_phi_fu_14334_p6 = data_469_V_read470_phi_reg_21043.read();
    } else {
        ap_phi_mux_data_469_V_read470_rewind_phi_fu_14334_p6 = data_469_V_read470_rewind_reg_14330.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_46_V_read47_phi_phi_fu_15548_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_46_V_read47_phi_phi_fu_15548_p4 = ap_phi_mux_data_46_V_read47_rewind_phi_fu_8412_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_46_V_read47_phi_phi_fu_15548_p4 = data_46_V_read.read();
    } else {
        ap_phi_mux_data_46_V_read47_phi_phi_fu_15548_p4 = ap_phi_reg_pp0_iter0_data_46_V_read47_phi_reg_15544.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_46_V_read47_rewind_phi_fu_8412_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_46_V_read47_rewind_phi_fu_8412_p6 = data_46_V_read47_phi_reg_15544.read();
    } else {
        ap_phi_mux_data_46_V_read47_rewind_phi_fu_8412_p6 = data_46_V_read47_rewind_reg_8408.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_470_V_read471_phi_phi_fu_21060_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_470_V_read471_phi_phi_fu_21060_p4 = ap_phi_mux_data_470_V_read471_rewind_phi_fu_14348_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_470_V_read471_phi_phi_fu_21060_p4 = data_470_V_read.read();
    } else {
        ap_phi_mux_data_470_V_read471_phi_phi_fu_21060_p4 = ap_phi_reg_pp0_iter0_data_470_V_read471_phi_reg_21056.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_470_V_read471_rewind_phi_fu_14348_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_470_V_read471_rewind_phi_fu_14348_p6 = data_470_V_read471_phi_reg_21056.read();
    } else {
        ap_phi_mux_data_470_V_read471_rewind_phi_fu_14348_p6 = data_470_V_read471_rewind_reg_14344.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_471_V_read472_phi_phi_fu_21073_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_471_V_read472_phi_phi_fu_21073_p4 = ap_phi_mux_data_471_V_read472_rewind_phi_fu_14362_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_471_V_read472_phi_phi_fu_21073_p4 = data_471_V_read.read();
    } else {
        ap_phi_mux_data_471_V_read472_phi_phi_fu_21073_p4 = ap_phi_reg_pp0_iter0_data_471_V_read472_phi_reg_21069.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_471_V_read472_rewind_phi_fu_14362_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_471_V_read472_rewind_phi_fu_14362_p6 = data_471_V_read472_phi_reg_21069.read();
    } else {
        ap_phi_mux_data_471_V_read472_rewind_phi_fu_14362_p6 = data_471_V_read472_rewind_reg_14358.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_472_V_read473_phi_phi_fu_21086_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_472_V_read473_phi_phi_fu_21086_p4 = ap_phi_mux_data_472_V_read473_rewind_phi_fu_14376_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_472_V_read473_phi_phi_fu_21086_p4 = data_472_V_read.read();
    } else {
        ap_phi_mux_data_472_V_read473_phi_phi_fu_21086_p4 = ap_phi_reg_pp0_iter0_data_472_V_read473_phi_reg_21082.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_472_V_read473_rewind_phi_fu_14376_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_472_V_read473_rewind_phi_fu_14376_p6 = data_472_V_read473_phi_reg_21082.read();
    } else {
        ap_phi_mux_data_472_V_read473_rewind_phi_fu_14376_p6 = data_472_V_read473_rewind_reg_14372.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_473_V_read474_phi_phi_fu_21099_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_473_V_read474_phi_phi_fu_21099_p4 = ap_phi_mux_data_473_V_read474_rewind_phi_fu_14390_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_473_V_read474_phi_phi_fu_21099_p4 = data_473_V_read.read();
    } else {
        ap_phi_mux_data_473_V_read474_phi_phi_fu_21099_p4 = ap_phi_reg_pp0_iter0_data_473_V_read474_phi_reg_21095.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_473_V_read474_rewind_phi_fu_14390_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_473_V_read474_rewind_phi_fu_14390_p6 = data_473_V_read474_phi_reg_21095.read();
    } else {
        ap_phi_mux_data_473_V_read474_rewind_phi_fu_14390_p6 = data_473_V_read474_rewind_reg_14386.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_474_V_read475_phi_phi_fu_21112_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_474_V_read475_phi_phi_fu_21112_p4 = ap_phi_mux_data_474_V_read475_rewind_phi_fu_14404_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_474_V_read475_phi_phi_fu_21112_p4 = data_474_V_read.read();
    } else {
        ap_phi_mux_data_474_V_read475_phi_phi_fu_21112_p4 = ap_phi_reg_pp0_iter0_data_474_V_read475_phi_reg_21108.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_474_V_read475_rewind_phi_fu_14404_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_474_V_read475_rewind_phi_fu_14404_p6 = data_474_V_read475_phi_reg_21108.read();
    } else {
        ap_phi_mux_data_474_V_read475_rewind_phi_fu_14404_p6 = data_474_V_read475_rewind_reg_14400.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_475_V_read476_phi_phi_fu_21125_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_475_V_read476_phi_phi_fu_21125_p4 = ap_phi_mux_data_475_V_read476_rewind_phi_fu_14418_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_475_V_read476_phi_phi_fu_21125_p4 = data_475_V_read.read();
    } else {
        ap_phi_mux_data_475_V_read476_phi_phi_fu_21125_p4 = ap_phi_reg_pp0_iter0_data_475_V_read476_phi_reg_21121.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_475_V_read476_rewind_phi_fu_14418_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_475_V_read476_rewind_phi_fu_14418_p6 = data_475_V_read476_phi_reg_21121.read();
    } else {
        ap_phi_mux_data_475_V_read476_rewind_phi_fu_14418_p6 = data_475_V_read476_rewind_reg_14414.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_476_V_read477_phi_phi_fu_21138_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_476_V_read477_phi_phi_fu_21138_p4 = ap_phi_mux_data_476_V_read477_rewind_phi_fu_14432_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_476_V_read477_phi_phi_fu_21138_p4 = data_476_V_read.read();
    } else {
        ap_phi_mux_data_476_V_read477_phi_phi_fu_21138_p4 = ap_phi_reg_pp0_iter0_data_476_V_read477_phi_reg_21134.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_476_V_read477_rewind_phi_fu_14432_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_476_V_read477_rewind_phi_fu_14432_p6 = data_476_V_read477_phi_reg_21134.read();
    } else {
        ap_phi_mux_data_476_V_read477_rewind_phi_fu_14432_p6 = data_476_V_read477_rewind_reg_14428.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_477_V_read478_phi_phi_fu_21151_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_477_V_read478_phi_phi_fu_21151_p4 = ap_phi_mux_data_477_V_read478_rewind_phi_fu_14446_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_477_V_read478_phi_phi_fu_21151_p4 = data_477_V_read.read();
    } else {
        ap_phi_mux_data_477_V_read478_phi_phi_fu_21151_p4 = ap_phi_reg_pp0_iter0_data_477_V_read478_phi_reg_21147.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_477_V_read478_rewind_phi_fu_14446_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_477_V_read478_rewind_phi_fu_14446_p6 = data_477_V_read478_phi_reg_21147.read();
    } else {
        ap_phi_mux_data_477_V_read478_rewind_phi_fu_14446_p6 = data_477_V_read478_rewind_reg_14442.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_478_V_read479_phi_phi_fu_21164_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_478_V_read479_phi_phi_fu_21164_p4 = ap_phi_mux_data_478_V_read479_rewind_phi_fu_14460_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_478_V_read479_phi_phi_fu_21164_p4 = data_478_V_read.read();
    } else {
        ap_phi_mux_data_478_V_read479_phi_phi_fu_21164_p4 = ap_phi_reg_pp0_iter0_data_478_V_read479_phi_reg_21160.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_478_V_read479_rewind_phi_fu_14460_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_478_V_read479_rewind_phi_fu_14460_p6 = data_478_V_read479_phi_reg_21160.read();
    } else {
        ap_phi_mux_data_478_V_read479_rewind_phi_fu_14460_p6 = data_478_V_read479_rewind_reg_14456.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_479_V_read480_phi_phi_fu_21177_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_479_V_read480_phi_phi_fu_21177_p4 = ap_phi_mux_data_479_V_read480_rewind_phi_fu_14474_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_479_V_read480_phi_phi_fu_21177_p4 = data_479_V_read.read();
    } else {
        ap_phi_mux_data_479_V_read480_phi_phi_fu_21177_p4 = ap_phi_reg_pp0_iter0_data_479_V_read480_phi_reg_21173.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_479_V_read480_rewind_phi_fu_14474_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_479_V_read480_rewind_phi_fu_14474_p6 = data_479_V_read480_phi_reg_21173.read();
    } else {
        ap_phi_mux_data_479_V_read480_rewind_phi_fu_14474_p6 = data_479_V_read480_rewind_reg_14470.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_47_V_read48_phi_phi_fu_15561_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_47_V_read48_phi_phi_fu_15561_p4 = ap_phi_mux_data_47_V_read48_rewind_phi_fu_8426_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_47_V_read48_phi_phi_fu_15561_p4 = data_47_V_read.read();
    } else {
        ap_phi_mux_data_47_V_read48_phi_phi_fu_15561_p4 = ap_phi_reg_pp0_iter0_data_47_V_read48_phi_reg_15557.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_47_V_read48_rewind_phi_fu_8426_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_47_V_read48_rewind_phi_fu_8426_p6 = data_47_V_read48_phi_reg_15557.read();
    } else {
        ap_phi_mux_data_47_V_read48_rewind_phi_fu_8426_p6 = data_47_V_read48_rewind_reg_8422.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_480_V_read481_phi_phi_fu_21190_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_480_V_read481_phi_phi_fu_21190_p4 = ap_phi_mux_data_480_V_read481_rewind_phi_fu_14488_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_480_V_read481_phi_phi_fu_21190_p4 = data_480_V_read.read();
    } else {
        ap_phi_mux_data_480_V_read481_phi_phi_fu_21190_p4 = ap_phi_reg_pp0_iter0_data_480_V_read481_phi_reg_21186.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_480_V_read481_rewind_phi_fu_14488_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_480_V_read481_rewind_phi_fu_14488_p6 = data_480_V_read481_phi_reg_21186.read();
    } else {
        ap_phi_mux_data_480_V_read481_rewind_phi_fu_14488_p6 = data_480_V_read481_rewind_reg_14484.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_481_V_read482_phi_phi_fu_21203_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_481_V_read482_phi_phi_fu_21203_p4 = ap_phi_mux_data_481_V_read482_rewind_phi_fu_14502_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_481_V_read482_phi_phi_fu_21203_p4 = data_481_V_read.read();
    } else {
        ap_phi_mux_data_481_V_read482_phi_phi_fu_21203_p4 = ap_phi_reg_pp0_iter0_data_481_V_read482_phi_reg_21199.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_481_V_read482_rewind_phi_fu_14502_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_481_V_read482_rewind_phi_fu_14502_p6 = data_481_V_read482_phi_reg_21199.read();
    } else {
        ap_phi_mux_data_481_V_read482_rewind_phi_fu_14502_p6 = data_481_V_read482_rewind_reg_14498.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_482_V_read483_phi_phi_fu_21216_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_482_V_read483_phi_phi_fu_21216_p4 = ap_phi_mux_data_482_V_read483_rewind_phi_fu_14516_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_482_V_read483_phi_phi_fu_21216_p4 = data_482_V_read.read();
    } else {
        ap_phi_mux_data_482_V_read483_phi_phi_fu_21216_p4 = ap_phi_reg_pp0_iter0_data_482_V_read483_phi_reg_21212.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_482_V_read483_rewind_phi_fu_14516_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_482_V_read483_rewind_phi_fu_14516_p6 = data_482_V_read483_phi_reg_21212.read();
    } else {
        ap_phi_mux_data_482_V_read483_rewind_phi_fu_14516_p6 = data_482_V_read483_rewind_reg_14512.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_483_V_read484_phi_phi_fu_21229_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_483_V_read484_phi_phi_fu_21229_p4 = ap_phi_mux_data_483_V_read484_rewind_phi_fu_14530_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_483_V_read484_phi_phi_fu_21229_p4 = data_483_V_read.read();
    } else {
        ap_phi_mux_data_483_V_read484_phi_phi_fu_21229_p4 = ap_phi_reg_pp0_iter0_data_483_V_read484_phi_reg_21225.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_483_V_read484_rewind_phi_fu_14530_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_483_V_read484_rewind_phi_fu_14530_p6 = data_483_V_read484_phi_reg_21225.read();
    } else {
        ap_phi_mux_data_483_V_read484_rewind_phi_fu_14530_p6 = data_483_V_read484_rewind_reg_14526.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_484_V_read485_phi_phi_fu_21242_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_484_V_read485_phi_phi_fu_21242_p4 = ap_phi_mux_data_484_V_read485_rewind_phi_fu_14544_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_484_V_read485_phi_phi_fu_21242_p4 = data_484_V_read.read();
    } else {
        ap_phi_mux_data_484_V_read485_phi_phi_fu_21242_p4 = ap_phi_reg_pp0_iter0_data_484_V_read485_phi_reg_21238.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_484_V_read485_rewind_phi_fu_14544_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_484_V_read485_rewind_phi_fu_14544_p6 = data_484_V_read485_phi_reg_21238.read();
    } else {
        ap_phi_mux_data_484_V_read485_rewind_phi_fu_14544_p6 = data_484_V_read485_rewind_reg_14540.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_485_V_read486_phi_phi_fu_21255_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_485_V_read486_phi_phi_fu_21255_p4 = ap_phi_mux_data_485_V_read486_rewind_phi_fu_14558_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_485_V_read486_phi_phi_fu_21255_p4 = data_485_V_read.read();
    } else {
        ap_phi_mux_data_485_V_read486_phi_phi_fu_21255_p4 = ap_phi_reg_pp0_iter0_data_485_V_read486_phi_reg_21251.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_485_V_read486_rewind_phi_fu_14558_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_485_V_read486_rewind_phi_fu_14558_p6 = data_485_V_read486_phi_reg_21251.read();
    } else {
        ap_phi_mux_data_485_V_read486_rewind_phi_fu_14558_p6 = data_485_V_read486_rewind_reg_14554.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_486_V_read487_phi_phi_fu_21268_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_486_V_read487_phi_phi_fu_21268_p4 = ap_phi_mux_data_486_V_read487_rewind_phi_fu_14572_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_486_V_read487_phi_phi_fu_21268_p4 = data_486_V_read.read();
    } else {
        ap_phi_mux_data_486_V_read487_phi_phi_fu_21268_p4 = ap_phi_reg_pp0_iter0_data_486_V_read487_phi_reg_21264.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_486_V_read487_rewind_phi_fu_14572_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_486_V_read487_rewind_phi_fu_14572_p6 = data_486_V_read487_phi_reg_21264.read();
    } else {
        ap_phi_mux_data_486_V_read487_rewind_phi_fu_14572_p6 = data_486_V_read487_rewind_reg_14568.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_487_V_read488_phi_phi_fu_21281_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_487_V_read488_phi_phi_fu_21281_p4 = ap_phi_mux_data_487_V_read488_rewind_phi_fu_14586_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_487_V_read488_phi_phi_fu_21281_p4 = data_487_V_read.read();
    } else {
        ap_phi_mux_data_487_V_read488_phi_phi_fu_21281_p4 = ap_phi_reg_pp0_iter0_data_487_V_read488_phi_reg_21277.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_487_V_read488_rewind_phi_fu_14586_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_487_V_read488_rewind_phi_fu_14586_p6 = data_487_V_read488_phi_reg_21277.read();
    } else {
        ap_phi_mux_data_487_V_read488_rewind_phi_fu_14586_p6 = data_487_V_read488_rewind_reg_14582.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_488_V_read489_phi_phi_fu_21294_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_488_V_read489_phi_phi_fu_21294_p4 = ap_phi_mux_data_488_V_read489_rewind_phi_fu_14600_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_488_V_read489_phi_phi_fu_21294_p4 = data_488_V_read.read();
    } else {
        ap_phi_mux_data_488_V_read489_phi_phi_fu_21294_p4 = ap_phi_reg_pp0_iter0_data_488_V_read489_phi_reg_21290.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_488_V_read489_rewind_phi_fu_14600_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_488_V_read489_rewind_phi_fu_14600_p6 = data_488_V_read489_phi_reg_21290.read();
    } else {
        ap_phi_mux_data_488_V_read489_rewind_phi_fu_14600_p6 = data_488_V_read489_rewind_reg_14596.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_489_V_read490_phi_phi_fu_21307_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_489_V_read490_phi_phi_fu_21307_p4 = ap_phi_mux_data_489_V_read490_rewind_phi_fu_14614_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_489_V_read490_phi_phi_fu_21307_p4 = data_489_V_read.read();
    } else {
        ap_phi_mux_data_489_V_read490_phi_phi_fu_21307_p4 = ap_phi_reg_pp0_iter0_data_489_V_read490_phi_reg_21303.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_489_V_read490_rewind_phi_fu_14614_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_489_V_read490_rewind_phi_fu_14614_p6 = data_489_V_read490_phi_reg_21303.read();
    } else {
        ap_phi_mux_data_489_V_read490_rewind_phi_fu_14614_p6 = data_489_V_read490_rewind_reg_14610.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_48_V_read49_phi_phi_fu_15574_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_48_V_read49_phi_phi_fu_15574_p4 = ap_phi_mux_data_48_V_read49_rewind_phi_fu_8440_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_48_V_read49_phi_phi_fu_15574_p4 = data_48_V_read.read();
    } else {
        ap_phi_mux_data_48_V_read49_phi_phi_fu_15574_p4 = ap_phi_reg_pp0_iter0_data_48_V_read49_phi_reg_15570.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_48_V_read49_rewind_phi_fu_8440_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_48_V_read49_rewind_phi_fu_8440_p6 = data_48_V_read49_phi_reg_15570.read();
    } else {
        ap_phi_mux_data_48_V_read49_rewind_phi_fu_8440_p6 = data_48_V_read49_rewind_reg_8436.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_490_V_read491_phi_phi_fu_21320_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_490_V_read491_phi_phi_fu_21320_p4 = ap_phi_mux_data_490_V_read491_rewind_phi_fu_14628_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_490_V_read491_phi_phi_fu_21320_p4 = data_490_V_read.read();
    } else {
        ap_phi_mux_data_490_V_read491_phi_phi_fu_21320_p4 = ap_phi_reg_pp0_iter0_data_490_V_read491_phi_reg_21316.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_490_V_read491_rewind_phi_fu_14628_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_490_V_read491_rewind_phi_fu_14628_p6 = data_490_V_read491_phi_reg_21316.read();
    } else {
        ap_phi_mux_data_490_V_read491_rewind_phi_fu_14628_p6 = data_490_V_read491_rewind_reg_14624.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_491_V_read492_phi_phi_fu_21333_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_491_V_read492_phi_phi_fu_21333_p4 = ap_phi_mux_data_491_V_read492_rewind_phi_fu_14642_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_491_V_read492_phi_phi_fu_21333_p4 = data_491_V_read.read();
    } else {
        ap_phi_mux_data_491_V_read492_phi_phi_fu_21333_p4 = ap_phi_reg_pp0_iter0_data_491_V_read492_phi_reg_21329.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_491_V_read492_rewind_phi_fu_14642_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_491_V_read492_rewind_phi_fu_14642_p6 = data_491_V_read492_phi_reg_21329.read();
    } else {
        ap_phi_mux_data_491_V_read492_rewind_phi_fu_14642_p6 = data_491_V_read492_rewind_reg_14638.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_492_V_read493_phi_phi_fu_21346_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_492_V_read493_phi_phi_fu_21346_p4 = ap_phi_mux_data_492_V_read493_rewind_phi_fu_14656_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_492_V_read493_phi_phi_fu_21346_p4 = data_492_V_read.read();
    } else {
        ap_phi_mux_data_492_V_read493_phi_phi_fu_21346_p4 = ap_phi_reg_pp0_iter0_data_492_V_read493_phi_reg_21342.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_492_V_read493_rewind_phi_fu_14656_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_492_V_read493_rewind_phi_fu_14656_p6 = data_492_V_read493_phi_reg_21342.read();
    } else {
        ap_phi_mux_data_492_V_read493_rewind_phi_fu_14656_p6 = data_492_V_read493_rewind_reg_14652.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_493_V_read494_phi_phi_fu_21359_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_493_V_read494_phi_phi_fu_21359_p4 = ap_phi_mux_data_493_V_read494_rewind_phi_fu_14670_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_493_V_read494_phi_phi_fu_21359_p4 = data_493_V_read.read();
    } else {
        ap_phi_mux_data_493_V_read494_phi_phi_fu_21359_p4 = ap_phi_reg_pp0_iter0_data_493_V_read494_phi_reg_21355.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_493_V_read494_rewind_phi_fu_14670_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_493_V_read494_rewind_phi_fu_14670_p6 = data_493_V_read494_phi_reg_21355.read();
    } else {
        ap_phi_mux_data_493_V_read494_rewind_phi_fu_14670_p6 = data_493_V_read494_rewind_reg_14666.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_494_V_read495_phi_phi_fu_21372_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_494_V_read495_phi_phi_fu_21372_p4 = ap_phi_mux_data_494_V_read495_rewind_phi_fu_14684_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_494_V_read495_phi_phi_fu_21372_p4 = data_494_V_read.read();
    } else {
        ap_phi_mux_data_494_V_read495_phi_phi_fu_21372_p4 = ap_phi_reg_pp0_iter0_data_494_V_read495_phi_reg_21368.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_494_V_read495_rewind_phi_fu_14684_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_494_V_read495_rewind_phi_fu_14684_p6 = data_494_V_read495_phi_reg_21368.read();
    } else {
        ap_phi_mux_data_494_V_read495_rewind_phi_fu_14684_p6 = data_494_V_read495_rewind_reg_14680.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_495_V_read496_phi_phi_fu_21385_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_495_V_read496_phi_phi_fu_21385_p4 = ap_phi_mux_data_495_V_read496_rewind_phi_fu_14698_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_495_V_read496_phi_phi_fu_21385_p4 = data_495_V_read.read();
    } else {
        ap_phi_mux_data_495_V_read496_phi_phi_fu_21385_p4 = ap_phi_reg_pp0_iter0_data_495_V_read496_phi_reg_21381.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_495_V_read496_rewind_phi_fu_14698_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_495_V_read496_rewind_phi_fu_14698_p6 = data_495_V_read496_phi_reg_21381.read();
    } else {
        ap_phi_mux_data_495_V_read496_rewind_phi_fu_14698_p6 = data_495_V_read496_rewind_reg_14694.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_496_V_read497_phi_phi_fu_21398_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_496_V_read497_phi_phi_fu_21398_p4 = ap_phi_mux_data_496_V_read497_rewind_phi_fu_14712_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_496_V_read497_phi_phi_fu_21398_p4 = data_496_V_read.read();
    } else {
        ap_phi_mux_data_496_V_read497_phi_phi_fu_21398_p4 = ap_phi_reg_pp0_iter0_data_496_V_read497_phi_reg_21394.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_496_V_read497_rewind_phi_fu_14712_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_496_V_read497_rewind_phi_fu_14712_p6 = data_496_V_read497_phi_reg_21394.read();
    } else {
        ap_phi_mux_data_496_V_read497_rewind_phi_fu_14712_p6 = data_496_V_read497_rewind_reg_14708.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_497_V_read498_phi_phi_fu_21411_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_497_V_read498_phi_phi_fu_21411_p4 = ap_phi_mux_data_497_V_read498_rewind_phi_fu_14726_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_497_V_read498_phi_phi_fu_21411_p4 = data_497_V_read.read();
    } else {
        ap_phi_mux_data_497_V_read498_phi_phi_fu_21411_p4 = ap_phi_reg_pp0_iter0_data_497_V_read498_phi_reg_21407.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_497_V_read498_rewind_phi_fu_14726_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_497_V_read498_rewind_phi_fu_14726_p6 = data_497_V_read498_phi_reg_21407.read();
    } else {
        ap_phi_mux_data_497_V_read498_rewind_phi_fu_14726_p6 = data_497_V_read498_rewind_reg_14722.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_498_V_read499_phi_phi_fu_21424_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_498_V_read499_phi_phi_fu_21424_p4 = ap_phi_mux_data_498_V_read499_rewind_phi_fu_14740_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_498_V_read499_phi_phi_fu_21424_p4 = data_498_V_read.read();
    } else {
        ap_phi_mux_data_498_V_read499_phi_phi_fu_21424_p4 = ap_phi_reg_pp0_iter0_data_498_V_read499_phi_reg_21420.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_498_V_read499_rewind_phi_fu_14740_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_498_V_read499_rewind_phi_fu_14740_p6 = data_498_V_read499_phi_reg_21420.read();
    } else {
        ap_phi_mux_data_498_V_read499_rewind_phi_fu_14740_p6 = data_498_V_read499_rewind_reg_14736.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_499_V_read500_phi_phi_fu_21437_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_499_V_read500_phi_phi_fu_21437_p4 = ap_phi_mux_data_499_V_read500_rewind_phi_fu_14754_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_499_V_read500_phi_phi_fu_21437_p4 = data_499_V_read.read();
    } else {
        ap_phi_mux_data_499_V_read500_phi_phi_fu_21437_p4 = ap_phi_reg_pp0_iter0_data_499_V_read500_phi_reg_21433.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_499_V_read500_rewind_phi_fu_14754_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_499_V_read500_rewind_phi_fu_14754_p6 = data_499_V_read500_phi_reg_21433.read();
    } else {
        ap_phi_mux_data_499_V_read500_rewind_phi_fu_14754_p6 = data_499_V_read500_rewind_reg_14750.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_49_V_read50_phi_phi_fu_15587_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_49_V_read50_phi_phi_fu_15587_p4 = ap_phi_mux_data_49_V_read50_rewind_phi_fu_8454_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_49_V_read50_phi_phi_fu_15587_p4 = data_49_V_read.read();
    } else {
        ap_phi_mux_data_49_V_read50_phi_phi_fu_15587_p4 = ap_phi_reg_pp0_iter0_data_49_V_read50_phi_reg_15583.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_49_V_read50_rewind_phi_fu_8454_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_49_V_read50_rewind_phi_fu_8454_p6 = data_49_V_read50_phi_reg_15583.read();
    } else {
        ap_phi_mux_data_49_V_read50_rewind_phi_fu_8454_p6 = data_49_V_read50_rewind_reg_8450.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_4_V_read5_phi_phi_fu_15002_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_4_V_read5_phi_phi_fu_15002_p4 = ap_phi_mux_data_4_V_read5_rewind_phi_fu_7824_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_4_V_read5_phi_phi_fu_15002_p4 = data_4_V_read.read();
    } else {
        ap_phi_mux_data_4_V_read5_phi_phi_fu_15002_p4 = ap_phi_reg_pp0_iter0_data_4_V_read5_phi_reg_14998.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_4_V_read5_rewind_phi_fu_7824_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_4_V_read5_rewind_phi_fu_7824_p6 = data_4_V_read5_phi_reg_14998.read();
    } else {
        ap_phi_mux_data_4_V_read5_rewind_phi_fu_7824_p6 = data_4_V_read5_rewind_reg_7820.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_500_V_read501_phi_phi_fu_21450_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_500_V_read501_phi_phi_fu_21450_p4 = ap_phi_mux_data_500_V_read501_rewind_phi_fu_14768_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_500_V_read501_phi_phi_fu_21450_p4 = data_500_V_read.read();
    } else {
        ap_phi_mux_data_500_V_read501_phi_phi_fu_21450_p4 = ap_phi_reg_pp0_iter0_data_500_V_read501_phi_reg_21446.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_500_V_read501_rewind_phi_fu_14768_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_500_V_read501_rewind_phi_fu_14768_p6 = data_500_V_read501_phi_reg_21446.read();
    } else {
        ap_phi_mux_data_500_V_read501_rewind_phi_fu_14768_p6 = data_500_V_read501_rewind_reg_14764.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_501_V_read502_phi_phi_fu_21463_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_501_V_read502_phi_phi_fu_21463_p4 = ap_phi_mux_data_501_V_read502_rewind_phi_fu_14782_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_501_V_read502_phi_phi_fu_21463_p4 = data_501_V_read.read();
    } else {
        ap_phi_mux_data_501_V_read502_phi_phi_fu_21463_p4 = ap_phi_reg_pp0_iter0_data_501_V_read502_phi_reg_21459.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_501_V_read502_rewind_phi_fu_14782_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_501_V_read502_rewind_phi_fu_14782_p6 = data_501_V_read502_phi_reg_21459.read();
    } else {
        ap_phi_mux_data_501_V_read502_rewind_phi_fu_14782_p6 = data_501_V_read502_rewind_reg_14778.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_502_V_read503_phi_phi_fu_21476_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_502_V_read503_phi_phi_fu_21476_p4 = ap_phi_mux_data_502_V_read503_rewind_phi_fu_14796_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_502_V_read503_phi_phi_fu_21476_p4 = data_502_V_read.read();
    } else {
        ap_phi_mux_data_502_V_read503_phi_phi_fu_21476_p4 = ap_phi_reg_pp0_iter0_data_502_V_read503_phi_reg_21472.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_502_V_read503_rewind_phi_fu_14796_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_502_V_read503_rewind_phi_fu_14796_p6 = data_502_V_read503_phi_reg_21472.read();
    } else {
        ap_phi_mux_data_502_V_read503_rewind_phi_fu_14796_p6 = data_502_V_read503_rewind_reg_14792.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_503_V_read504_phi_phi_fu_21489_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_503_V_read504_phi_phi_fu_21489_p4 = ap_phi_mux_data_503_V_read504_rewind_phi_fu_14810_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_503_V_read504_phi_phi_fu_21489_p4 = data_503_V_read.read();
    } else {
        ap_phi_mux_data_503_V_read504_phi_phi_fu_21489_p4 = ap_phi_reg_pp0_iter0_data_503_V_read504_phi_reg_21485.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_503_V_read504_rewind_phi_fu_14810_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_503_V_read504_rewind_phi_fu_14810_p6 = data_503_V_read504_phi_reg_21485.read();
    } else {
        ap_phi_mux_data_503_V_read504_rewind_phi_fu_14810_p6 = data_503_V_read504_rewind_reg_14806.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_504_V_read505_phi_phi_fu_21502_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_504_V_read505_phi_phi_fu_21502_p4 = ap_phi_mux_data_504_V_read505_rewind_phi_fu_14824_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_504_V_read505_phi_phi_fu_21502_p4 = data_504_V_read.read();
    } else {
        ap_phi_mux_data_504_V_read505_phi_phi_fu_21502_p4 = ap_phi_reg_pp0_iter0_data_504_V_read505_phi_reg_21498.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_504_V_read505_rewind_phi_fu_14824_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_504_V_read505_rewind_phi_fu_14824_p6 = data_504_V_read505_phi_reg_21498.read();
    } else {
        ap_phi_mux_data_504_V_read505_rewind_phi_fu_14824_p6 = data_504_V_read505_rewind_reg_14820.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_505_V_read506_phi_phi_fu_21515_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_505_V_read506_phi_phi_fu_21515_p4 = ap_phi_mux_data_505_V_read506_rewind_phi_fu_14838_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_505_V_read506_phi_phi_fu_21515_p4 = data_505_V_read.read();
    } else {
        ap_phi_mux_data_505_V_read506_phi_phi_fu_21515_p4 = ap_phi_reg_pp0_iter0_data_505_V_read506_phi_reg_21511.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_505_V_read506_rewind_phi_fu_14838_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_505_V_read506_rewind_phi_fu_14838_p6 = data_505_V_read506_phi_reg_21511.read();
    } else {
        ap_phi_mux_data_505_V_read506_rewind_phi_fu_14838_p6 = data_505_V_read506_rewind_reg_14834.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_506_V_read507_phi_phi_fu_21528_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_506_V_read507_phi_phi_fu_21528_p4 = ap_phi_mux_data_506_V_read507_rewind_phi_fu_14852_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_506_V_read507_phi_phi_fu_21528_p4 = data_506_V_read.read();
    } else {
        ap_phi_mux_data_506_V_read507_phi_phi_fu_21528_p4 = ap_phi_reg_pp0_iter0_data_506_V_read507_phi_reg_21524.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_506_V_read507_rewind_phi_fu_14852_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_506_V_read507_rewind_phi_fu_14852_p6 = data_506_V_read507_phi_reg_21524.read();
    } else {
        ap_phi_mux_data_506_V_read507_rewind_phi_fu_14852_p6 = data_506_V_read507_rewind_reg_14848.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_507_V_read508_phi_phi_fu_21541_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_507_V_read508_phi_phi_fu_21541_p4 = ap_phi_mux_data_507_V_read508_rewind_phi_fu_14866_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_507_V_read508_phi_phi_fu_21541_p4 = data_507_V_read.read();
    } else {
        ap_phi_mux_data_507_V_read508_phi_phi_fu_21541_p4 = ap_phi_reg_pp0_iter0_data_507_V_read508_phi_reg_21537.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_507_V_read508_rewind_phi_fu_14866_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_507_V_read508_rewind_phi_fu_14866_p6 = data_507_V_read508_phi_reg_21537.read();
    } else {
        ap_phi_mux_data_507_V_read508_rewind_phi_fu_14866_p6 = data_507_V_read508_rewind_reg_14862.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_508_V_read509_phi_phi_fu_21554_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_508_V_read509_phi_phi_fu_21554_p4 = ap_phi_mux_data_508_V_read509_rewind_phi_fu_14880_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_508_V_read509_phi_phi_fu_21554_p4 = data_508_V_read.read();
    } else {
        ap_phi_mux_data_508_V_read509_phi_phi_fu_21554_p4 = ap_phi_reg_pp0_iter0_data_508_V_read509_phi_reg_21550.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_508_V_read509_rewind_phi_fu_14880_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_508_V_read509_rewind_phi_fu_14880_p6 = data_508_V_read509_phi_reg_21550.read();
    } else {
        ap_phi_mux_data_508_V_read509_rewind_phi_fu_14880_p6 = data_508_V_read509_rewind_reg_14876.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_509_V_read510_phi_phi_fu_21567_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_509_V_read510_phi_phi_fu_21567_p4 = ap_phi_mux_data_509_V_read510_rewind_phi_fu_14894_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_509_V_read510_phi_phi_fu_21567_p4 = data_509_V_read.read();
    } else {
        ap_phi_mux_data_509_V_read510_phi_phi_fu_21567_p4 = ap_phi_reg_pp0_iter0_data_509_V_read510_phi_reg_21563.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_509_V_read510_rewind_phi_fu_14894_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_509_V_read510_rewind_phi_fu_14894_p6 = data_509_V_read510_phi_reg_21563.read();
    } else {
        ap_phi_mux_data_509_V_read510_rewind_phi_fu_14894_p6 = data_509_V_read510_rewind_reg_14890.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_50_V_read51_phi_phi_fu_15600_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_50_V_read51_phi_phi_fu_15600_p4 = ap_phi_mux_data_50_V_read51_rewind_phi_fu_8468_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_50_V_read51_phi_phi_fu_15600_p4 = data_50_V_read.read();
    } else {
        ap_phi_mux_data_50_V_read51_phi_phi_fu_15600_p4 = ap_phi_reg_pp0_iter0_data_50_V_read51_phi_reg_15596.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_50_V_read51_rewind_phi_fu_8468_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_50_V_read51_rewind_phi_fu_8468_p6 = data_50_V_read51_phi_reg_15596.read();
    } else {
        ap_phi_mux_data_50_V_read51_rewind_phi_fu_8468_p6 = data_50_V_read51_rewind_reg_8464.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_510_V_read511_phi_phi_fu_21580_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_510_V_read511_phi_phi_fu_21580_p4 = ap_phi_mux_data_510_V_read511_rewind_phi_fu_14908_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_510_V_read511_phi_phi_fu_21580_p4 = data_510_V_read.read();
    } else {
        ap_phi_mux_data_510_V_read511_phi_phi_fu_21580_p4 = ap_phi_reg_pp0_iter0_data_510_V_read511_phi_reg_21576.read();
    }
}

}

