#include "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3146_fu_1691504_p2() {
    add_ln703_3146_fu_1691504_p2 = (!add_ln703_3144_fu_1691488_p2.read().is_01() || !sext_ln703_1278_fu_1691500_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3144_fu_1691488_p2.read()) + sc_bigint<16>(sext_ln703_1278_fu_1691500_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3147_fu_1691510_p2() {
    add_ln703_3147_fu_1691510_p2 = (!sext_ln203_581_fu_1681168_p1.read().is_01() || !sext_ln203_496_fu_1674448_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_581_fu_1681168_p1.read()) + sc_bigint<14>(sext_ln203_496_fu_1674448_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3148_fu_1691520_p2() {
    add_ln703_3148_fu_1691520_p2 = (!sext_ln203_556_fu_1679529_p1.read().is_01() || !ap_const_lv11_668.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_556_fu_1679529_p1.read()) + sc_bigint<11>(ap_const_lv11_668));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3149_fu_1691530_p2() {
    add_ln703_3149_fu_1691530_p2 = (!sext_ln203_622_fu_1683768_p1.read().is_01() || !sext_ln703_1280_fu_1691526_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_622_fu_1683768_p1.read()) + sc_bigint<14>(sext_ln703_1280_fu_1691526_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3150_fu_1691540_p2() {
    add_ln703_3150_fu_1691540_p2 = (!sext_ln703_1279_fu_1691516_p1.read().is_01() || !sext_ln703_1281_fu_1691536_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1279_fu_1691516_p1.read()) + sc_bigint<15>(sext_ln703_1281_fu_1691536_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3151_fu_1691550_p2() {
    add_ln703_3151_fu_1691550_p2 = (!add_ln703_3146_fu_1691504_p2.read().is_01() || !sext_ln703_1282_fu_1691546_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3146_fu_1691504_p2.read()) + sc_bigint<16>(sext_ln703_1282_fu_1691546_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3152_fu_1692224_p2() {
    add_ln703_3152_fu_1692224_p2 = (!add_ln703_3143_reg_1693493.read().is_01() || !add_ln703_3151_reg_1693498.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3143_reg_1693493.read()) + sc_biguint<16>(add_ln703_3151_reg_1693498.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3153_fu_1692228_p2() {
    add_ln703_3153_fu_1692228_p2 = (!add_ln703_3136_reg_1693488.read().is_01() || !add_ln703_3152_fu_1692224_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3136_reg_1693488.read()) + sc_biguint<16>(add_ln703_3152_fu_1692224_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3154_fu_1691556_p2() {
    add_ln703_3154_fu_1691556_p2 = (!mult_63_V_fu_1671812_p4.read().is_01() || !mult_31_V_fu_1671305_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_63_V_fu_1671812_p4.read()) + sc_biguint<16>(mult_31_V_fu_1671305_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3155_fu_1691562_p2() {
    add_ln703_3155_fu_1691562_p2 = (!mult_129_V_fu_1672644_p4.read().is_01() || !mult_104_V_fu_1672400_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_129_V_fu_1672644_p4.read()) + sc_biguint<16>(mult_104_V_fu_1672400_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3156_fu_1691568_p2() {
    add_ln703_3156_fu_1691568_p2 = (!add_ln703_3154_fu_1691556_p2.read().is_01() || !add_ln703_3155_fu_1691562_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3154_fu_1691556_p2.read()) + sc_biguint<16>(add_ln703_3155_fu_1691562_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3157_fu_1691574_p2() {
    add_ln703_3157_fu_1691574_p2 = (!mult_223_V_fu_1673885_p4.read().is_01() || !mult_169_V_fu_1673202_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_223_V_fu_1673885_p4.read()) + sc_biguint<16>(mult_169_V_fu_1673202_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3158_fu_1691580_p2() {
    add_ln703_3158_fu_1691580_p2 = (!mult_337_V_fu_1675632_p4.read().is_01() || !mult_319_V_fu_1675326_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_337_V_fu_1675632_p4.read()) + sc_biguint<16>(mult_319_V_fu_1675326_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3159_fu_1691586_p2() {
    add_ln703_3159_fu_1691586_p2 = (!add_ln703_3157_fu_1691574_p2.read().is_01() || !add_ln703_3158_fu_1691580_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3157_fu_1691574_p2.read()) + sc_biguint<16>(add_ln703_3158_fu_1691580_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3160_fu_1691592_p2() {
    add_ln703_3160_fu_1691592_p2 = (!add_ln703_3156_fu_1691568_p2.read().is_01() || !add_ln703_3159_fu_1691586_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3156_fu_1691568_p2.read()) + sc_biguint<16>(add_ln703_3159_fu_1691586_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3161_fu_1691598_p2() {
    add_ln703_3161_fu_1691598_p2 = (!mult_415_V_fu_1676813_p4.read().is_01() || !mult_383_V_fu_1676266_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_415_V_fu_1676813_p4.read()) + sc_biguint<16>(mult_383_V_fu_1676266_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3162_fu_1691604_p2() {
    add_ln703_3162_fu_1691604_p2 = (!mult_479_V_fu_1677730_p4.read().is_01() || !mult_417_V_fu_1676870_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_479_V_fu_1677730_p4.read()) + sc_biguint<16>(mult_417_V_fu_1676870_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3163_fu_1691610_p2() {
    add_ln703_3163_fu_1691610_p2 = (!add_ln703_3161_fu_1691598_p2.read().is_01() || !add_ln703_3162_fu_1691604_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3161_fu_1691598_p2.read()) + sc_biguint<16>(add_ln703_3162_fu_1691604_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3164_fu_1691616_p2() {
    add_ln703_3164_fu_1691616_p2 = (!mult_609_V_fu_1679627_p4.read().is_01() || !mult_607_V_fu_1679543_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_609_V_fu_1679627_p4.read()) + sc_biguint<16>(mult_607_V_fu_1679543_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3165_fu_1691622_p2() {
    add_ln703_3165_fu_1691622_p2 = (!mult_706_V_fu_1681248_p4.read().is_01() || !mult_670_V_fu_1680529_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_706_V_fu_1681248_p4.read()) + sc_biguint<16>(mult_670_V_fu_1680529_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3166_fu_1691628_p2() {
    add_ln703_3166_fu_1691628_p2 = (!add_ln703_3164_fu_1691616_p2.read().is_01() || !add_ln703_3165_fu_1691622_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3164_fu_1691616_p2.read()) + sc_biguint<16>(add_ln703_3165_fu_1691622_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3167_fu_1692233_p2() {
    add_ln703_3167_fu_1692233_p2 = (!add_ln703_3163_reg_1693508.read().is_01() || !add_ln703_3166_reg_1693513.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3163_reg_1693508.read()) + sc_biguint<16>(add_ln703_3166_reg_1693513.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3168_fu_1692237_p2() {
    add_ln703_3168_fu_1692237_p2 = (!add_ln703_3160_reg_1693503.read().is_01() || !add_ln703_3167_fu_1692233_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3160_reg_1693503.read()) + sc_biguint<16>(add_ln703_3167_fu_1692233_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3169_fu_1691634_p2() {
    add_ln703_3169_fu_1691634_p2 = (!mult_799_V_fu_1682705_p4.read().is_01() || !mult_767_V_fu_1682265_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_799_V_fu_1682705_p4.read()) + sc_biguint<16>(mult_767_V_fu_1682265_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3170_fu_1691640_p2() {
    add_ln703_3170_fu_1691640_p2 = (!mult_865_V_fu_1683847_p4.read().is_01() || !mult_831_V_fu_1683194_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_865_V_fu_1683847_p4.read()) + sc_biguint<16>(mult_831_V_fu_1683194_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3171_fu_1691646_p2() {
    add_ln703_3171_fu_1691646_p2 = (!add_ln703_3169_fu_1691634_p2.read().is_01() || !add_ln703_3170_fu_1691640_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3169_fu_1691634_p2.read()) + sc_biguint<16>(add_ln703_3170_fu_1691640_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3172_fu_1691652_p2() {
    add_ln703_3172_fu_1691652_p2 = (!mult_937_V_fu_1684818_p4.read().is_01() || !mult_915_V_fu_1684445_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_937_V_fu_1684818_p4.read()) + sc_biguint<16>(mult_915_V_fu_1684445_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3173_fu_1691658_p2() {
    add_ln703_3173_fu_1691658_p2 = (!mult_543_V_fu_1678667_p1.read().is_01() || !mult_993_V_fu_1685524_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_543_V_fu_1678667_p1.read()) + sc_biguint<16>(mult_993_V_fu_1685524_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3174_fu_1691664_p2() {
    add_ln703_3174_fu_1691664_p2 = (!add_ln703_3172_fu_1691652_p2.read().is_01() || !add_ln703_3173_fu_1691658_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3172_fu_1691652_p2.read()) + sc_biguint<16>(add_ln703_3173_fu_1691658_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3175_fu_1691670_p2() {
    add_ln703_3175_fu_1691670_p2 = (!add_ln703_3171_fu_1691646_p2.read().is_01() || !add_ln703_3174_fu_1691664_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3171_fu_1691646_p2.read()) + sc_biguint<16>(add_ln703_3174_fu_1691664_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3176_fu_1691676_p2() {
    add_ln703_3176_fu_1691676_p2 = (!mult_255_V_fu_1674468_p1.read().is_01() || !mult_991_V_fu_1685468_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_255_V_fu_1674468_p1.read()) + sc_bigint<16>(mult_991_V_fu_1685468_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3177_fu_1691682_p2() {
    add_ln703_3177_fu_1691682_p2 = (!sext_ln203_549_fu_1679114_p1.read().is_01() || !sext_ln203_538_fu_1678169_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_549_fu_1679114_p1.read()) + sc_bigint<15>(sext_ln203_538_fu_1678169_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3178_fu_1691692_p2() {
    add_ln703_3178_fu_1691692_p2 = (!add_ln703_3176_fu_1691676_p2.read().is_01() || !sext_ln703_1283_fu_1691688_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3176_fu_1691676_p2.read()) + sc_bigint<16>(sext_ln703_1283_fu_1691688_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3179_fu_1691698_p2() {
    add_ln703_3179_fu_1691698_p2 = (!sext_ln203_623_fu_1683788_p1.read().is_01() || !sext_ln203_568_fu_1680642_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_623_fu_1683788_p1.read()) + sc_bigint<15>(sext_ln203_568_fu_1680642_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3180_fu_1691708_p2() {
    add_ln703_3180_fu_1691708_p2 = (!sext_ln203_504_fu_1674873_p1.read().is_01() || !ap_const_lv13_48.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_504_fu_1674873_p1.read()) + sc_biguint<13>(ap_const_lv13_48));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3181_fu_1691718_p2() {
    add_ln703_3181_fu_1691718_p2 = (!sext_ln203_474_fu_1672184_p1.read().is_01() || !sext_ln703_1285_fu_1691714_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_474_fu_1672184_p1.read()) + sc_bigint<14>(sext_ln703_1285_fu_1691714_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3182_fu_1691728_p2() {
    add_ln703_3182_fu_1691728_p2 = (!sext_ln703_1284_fu_1691704_p1.read().is_01() || !sext_ln703_1286_fu_1691724_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1284_fu_1691704_p1.read()) + sc_bigint<16>(sext_ln703_1286_fu_1691724_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3183_fu_1691734_p2() {
    add_ln703_3183_fu_1691734_p2 = (!add_ln703_3178_fu_1691692_p2.read().is_01() || !add_ln703_3182_fu_1691728_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3178_fu_1691692_p2.read()) + sc_biguint<16>(add_ln703_3182_fu_1691728_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3184_fu_1692242_p2() {
    add_ln703_3184_fu_1692242_p2 = (!add_ln703_3175_reg_1693518.read().is_01() || !add_ln703_3183_reg_1693523.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3175_reg_1693518.read()) + sc_biguint<16>(add_ln703_3183_reg_1693523.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_3185_fu_1692246_p2() {
    add_ln703_3185_fu_1692246_p2 = (!add_ln703_3168_fu_1692237_p2.read().is_01() || !add_ln703_3184_fu_1692242_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3168_fu_1692237_p2.read()) + sc_biguint<16>(add_ln703_3184_fu_1692242_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_add_ln703_fu_1685854_p2() {
    add_ln703_fu_1685854_p2 = (!mult_32_V_fu_1671346_p4.read().is_01() || !mult_0_V_fu_1670911_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_32_V_fu_1671346_p4.read()) + sc_biguint<16>(mult_0_V_fu_1670911_p4.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_0() {
    ap_return_0 = sext_ln728_fu_1692260_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_1() {
    ap_return_1 = sext_ln728_98_fu_1692272_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_10() {
    ap_return_10 = sext_ln728_107_fu_1692380_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_11() {
    ap_return_11 = sext_ln728_108_fu_1692392_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_12() {
    ap_return_12 = sext_ln728_109_fu_1692404_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_13() {
    ap_return_13 = sext_ln728_110_fu_1692416_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_14() {
    ap_return_14 = sext_ln728_111_fu_1692428_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_15() {
    ap_return_15 = sext_ln728_112_fu_1692440_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_16() {
    ap_return_16 = sext_ln728_113_fu_1692452_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_17() {
    ap_return_17 = sext_ln728_114_fu_1692464_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_18() {
    ap_return_18 = sext_ln728_115_fu_1692476_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_19() {
    ap_return_19 = sext_ln728_116_fu_1692488_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_2() {
    ap_return_2 = sext_ln728_99_fu_1692284_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_20() {
    ap_return_20 = sext_ln728_117_fu_1692500_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_21() {
    ap_return_21 = sext_ln728_118_fu_1692512_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_22() {
    ap_return_22 = sext_ln728_119_fu_1692524_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_23() {
    ap_return_23 = sext_ln728_120_fu_1692536_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_24() {
    ap_return_24 = sext_ln728_121_fu_1692548_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_25() {
    ap_return_25 = sext_ln728_122_fu_1692560_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_26() {
    ap_return_26 = sext_ln728_123_fu_1692572_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_27() {
    ap_return_27 = sext_ln728_124_fu_1692584_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_28() {
    ap_return_28 = sext_ln728_125_fu_1692596_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_29() {
    ap_return_29 = sext_ln728_126_fu_1692608_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_3() {
    ap_return_3 = sext_ln728_100_fu_1692296_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_30() {
    ap_return_30 = sext_ln728_127_fu_1692620_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_31() {
    ap_return_31 = sext_ln728_128_fu_1692632_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_4() {
    ap_return_4 = sext_ln728_101_fu_1692308_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_5() {
    ap_return_5 = sext_ln728_102_fu_1692320_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_6() {
    ap_return_6 = sext_ln728_103_fu_1692332_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_7() {
    ap_return_7 = sext_ln728_104_fu_1692344_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_8() {
    ap_return_8 = sext_ln728_105_fu_1692356_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_ap_return_9() {
    ap_return_9 = sext_ln728_106_fu_1692368_p1.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1000_fu_817_p0() {
    mul_ln1118_1000_fu_817_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1000_fu_817_p2() {
    mul_ln1118_1000_fu_817_p2 = (!mul_ln1118_1000_fu_817_p0.read().is_01() || !ap_const_lv23_73.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1000_fu_817_p0.read()) * sc_biguint<23>(ap_const_lv23_73);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1001_fu_1470_p0() {
    mul_ln1118_1001_fu_1470_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1001_fu_1470_p2() {
    mul_ln1118_1001_fu_1470_p2 = (!mul_ln1118_1001_fu_1470_p0.read().is_01() || !ap_const_lv23_7FFFBD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1001_fu_1470_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFBD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1002_fu_1471_p0() {
    mul_ln1118_1002_fu_1471_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1002_fu_1471_p2() {
    mul_ln1118_1002_fu_1471_p2 = (!mul_ln1118_1002_fu_1471_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1002_fu_1471_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1003_fu_927_p0() {
    mul_ln1118_1003_fu_927_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1003_fu_927_p2() {
    mul_ln1118_1003_fu_927_p2 = (!mul_ln1118_1003_fu_927_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1003_fu_927_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1004_fu_1473_p0() {
    mul_ln1118_1004_fu_1473_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1004_fu_1473_p2() {
    mul_ln1118_1004_fu_1473_p2 = (!mul_ln1118_1004_fu_1473_p0.read().is_01() || !ap_const_lv23_4B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1004_fu_1473_p0.read()) * sc_biguint<23>(ap_const_lv23_4B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1005_fu_929_p0() {
    mul_ln1118_1005_fu_929_p0 =  (sc_lv<16>) (sext_ln1118_672_fu_1678187_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1005_fu_929_p2() {
    mul_ln1118_1005_fu_929_p2 = (!mul_ln1118_1005_fu_929_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1005_fu_929_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1006_fu_1373_p0() {
    mul_ln1118_1006_fu_1373_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1006_fu_1373_p2() {
    mul_ln1118_1006_fu_1373_p2 = (!mul_ln1118_1006_fu_1373_p0.read().is_01() || !ap_const_lv23_7FFF8D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1006_fu_1373_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1007_fu_965_p0() {
    mul_ln1118_1007_fu_965_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1007_fu_965_p2() {
    mul_ln1118_1007_fu_965_p2 = (!mul_ln1118_1007_fu_965_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1007_fu_965_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1008_fu_1477_p0() {
    mul_ln1118_1008_fu_1477_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1008_fu_1477_p2() {
    mul_ln1118_1008_fu_1477_p2 = (!mul_ln1118_1008_fu_1477_p0.read().is_01() || !ap_const_lv23_5A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1008_fu_1477_p0.read()) * sc_biguint<23>(ap_const_lv23_5A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1009_fu_967_p0() {
    mul_ln1118_1009_fu_967_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1009_fu_967_p2() {
    mul_ln1118_1009_fu_967_p2 = (!mul_ln1118_1009_fu_967_p0.read().is_01() || !ap_const_lv23_7FFF9A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1009_fu_967_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF9A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1010_fu_968_p0() {
    mul_ln1118_1010_fu_968_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1010_fu_968_p2() {
    mul_ln1118_1010_fu_968_p2 = (!mul_ln1118_1010_fu_968_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1010_fu_968_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1011_fu_969_p0() {
    mul_ln1118_1011_fu_969_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1011_fu_969_p2() {
    mul_ln1118_1011_fu_969_p2 = (!mul_ln1118_1011_fu_969_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1011_fu_969_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1012_fu_970_p0() {
    mul_ln1118_1012_fu_970_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1012_fu_970_p2() {
    mul_ln1118_1012_fu_970_p2 = (!mul_ln1118_1012_fu_970_p0.read().is_01() || !ap_const_lv23_7FFFA7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1012_fu_970_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFA7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1013_fu_1448_p0() {
    mul_ln1118_1013_fu_1448_p0 =  (sc_lv<16>) (sext_ln1118_683_fu_1678671_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1013_fu_1448_p2() {
    mul_ln1118_1013_fu_1448_p2 = (!mul_ln1118_1013_fu_1448_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1013_fu_1448_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1014_fu_1483_p0() {
    mul_ln1118_1014_fu_1483_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1014_fu_1483_p2() {
    mul_ln1118_1014_fu_1483_p2 = (!mul_ln1118_1014_fu_1483_p0.read().is_01() || !ap_const_lv23_7FFF87.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1014_fu_1483_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF87);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1015_fu_1082_p0() {
    mul_ln1118_1015_fu_1082_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1015_fu_1082_p2() {
    mul_ln1118_1015_fu_1082_p2 = (!mul_ln1118_1015_fu_1082_p0.read().is_01() || !ap_const_lv23_7FFFB5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1015_fu_1082_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1016_fu_879_p0() {
    mul_ln1118_1016_fu_879_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1678676_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1016_fu_879_p2() {
    mul_ln1118_1016_fu_879_p2 = (!mul_ln1118_1016_fu_879_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1016_fu_879_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1017_fu_1494_p0() {
    mul_ln1118_1017_fu_1494_p0 =  (sc_lv<16>) (sext_ln1118_695_fu_1679126_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1017_fu_1494_p2() {
    mul_ln1118_1017_fu_1494_p2 = (!mul_ln1118_1017_fu_1494_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1017_fu_1494_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1018_fu_1291_p0() {
    mul_ln1118_1018_fu_1291_p0 =  (sc_lv<16>) (sext_ln1118_694_fu_1679118_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1018_fu_1291_p2() {
    mul_ln1118_1018_fu_1291_p2 = (!mul_ln1118_1018_fu_1291_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1018_fu_1291_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1019_fu_1497_p0() {
    mul_ln1118_1019_fu_1497_p0 =  (sc_lv<16>) (sext_ln1118_694_fu_1679118_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1019_fu_1497_p2() {
    mul_ln1118_1019_fu_1497_p2 = (!mul_ln1118_1019_fu_1497_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1019_fu_1497_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1020_fu_1294_p0() {
    mul_ln1118_1020_fu_1294_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1020_fu_1294_p2() {
    mul_ln1118_1020_fu_1294_p2 = (!mul_ln1118_1020_fu_1294_p0.read().is_01() || !ap_const_lv23_7FFFAC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1020_fu_1294_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAC);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1021_fu_723_p0() {
    mul_ln1118_1021_fu_723_p0 =  (sc_lv<16>) (sext_ln1118_694_fu_1679118_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1021_fu_723_p2() {
    mul_ln1118_1021_fu_723_p2 = (!mul_ln1118_1021_fu_723_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1021_fu_723_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1022_fu_1188_p0() {
    mul_ln1118_1022_fu_1188_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1022_fu_1188_p2() {
    mul_ln1118_1022_fu_1188_p2 = (!mul_ln1118_1022_fu_1188_p0.read().is_01() || !ap_const_lv23_7FFFA2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1022_fu_1188_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFA2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1023_fu_1394_p0() {
    mul_ln1118_1023_fu_1394_p0 =  (sc_lv<16>) (sext_ln1118_694_fu_1679118_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1023_fu_1394_p2() {
    mul_ln1118_1023_fu_1394_p2 = (!mul_ln1118_1023_fu_1394_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1023_fu_1394_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1024_fu_782_p0() {
    mul_ln1118_1024_fu_782_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1024_fu_782_p2() {
    mul_ln1118_1024_fu_782_p2 = (!mul_ln1118_1024_fu_782_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1024_fu_782_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1025_fu_1324_p0() {
    mul_ln1118_1025_fu_1324_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1025_fu_1324_p2() {
    mul_ln1118_1025_fu_1324_p2 = (!mul_ln1118_1025_fu_1324_p0.read().is_01() || !ap_const_lv23_7FFFA5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1025_fu_1324_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFA5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1026_fu_1603_p0() {
    mul_ln1118_1026_fu_1603_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1026_fu_1603_p2() {
    mul_ln1118_1026_fu_1603_p2 = (!mul_ln1118_1026_fu_1603_p0.read().is_01() || !ap_const_lv23_7FFFA6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1026_fu_1603_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFA6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1027_fu_1736_p0() {
    mul_ln1118_1027_fu_1736_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1027_fu_1736_p2() {
    mul_ln1118_1027_fu_1736_p2 = (!mul_ln1118_1027_fu_1736_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1027_fu_1736_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1028_fu_1606_p0() {
    mul_ln1118_1028_fu_1606_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1028_fu_1606_p2() {
    mul_ln1118_1028_fu_1606_p2 = (!mul_ln1118_1028_fu_1606_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1028_fu_1606_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1029_fu_1733_p0() {
    mul_ln1118_1029_fu_1733_p0 =  (sc_lv<16>) (sext_ln1118_695_fu_1679126_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1029_fu_1733_p2() {
    mul_ln1118_1029_fu_1733_p2 = (!mul_ln1118_1029_fu_1733_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1029_fu_1733_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1030_fu_1666_p0() {
    mul_ln1118_1030_fu_1666_p0 =  (sc_lv<16>) (sext_ln1118_695_fu_1679126_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1030_fu_1666_p2() {
    mul_ln1118_1030_fu_1666_p2 = (!mul_ln1118_1030_fu_1666_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1030_fu_1666_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1031_fu_1258_p0() {
    mul_ln1118_1031_fu_1258_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1031_fu_1258_p2() {
    mul_ln1118_1031_fu_1258_p2 = (!mul_ln1118_1031_fu_1258_p0.read().is_01() || !ap_const_lv23_7FFF89.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1031_fu_1258_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF89);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1032_fu_1259_p0() {
    mul_ln1118_1032_fu_1259_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1032_fu_1259_p2() {
    mul_ln1118_1032_fu_1259_p2 = (!mul_ln1118_1032_fu_1259_p0.read().is_01() || !ap_const_lv23_75.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1032_fu_1259_p0.read()) * sc_biguint<23>(ap_const_lv23_75);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1033_fu_1260_p0() {
    mul_ln1118_1033_fu_1260_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1679133_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1033_fu_1260_p2() {
    mul_ln1118_1033_fu_1260_p2 = (!mul_ln1118_1033_fu_1260_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1033_fu_1260_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1034_fu_750_p0() {
    mul_ln1118_1034_fu_750_p0 =  (sc_lv<16>) (sext_ln1118_704_fu_1679553_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1034_fu_750_p2() {
    mul_ln1118_1034_fu_750_p2 = (!mul_ln1118_1034_fu_750_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1034_fu_750_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1035_fu_751_p0() {
    mul_ln1118_1035_fu_751_p0 =  (sc_lv<16>) (sext_ln1118_707_fu_1679567_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1035_fu_751_p2() {
    mul_ln1118_1035_fu_751_p2 = (!mul_ln1118_1035_fu_751_p0.read().is_01() || !ap_const_lv23_43.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1035_fu_751_p0.read()) * sc_biguint<23>(ap_const_lv23_43);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1036_fu_752_p0() {
    mul_ln1118_1036_fu_752_p0 =  (sc_lv<16>) (sext_ln1118_707_fu_1679567_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1036_fu_752_p2() {
    mul_ln1118_1036_fu_752_p2 = (!mul_ln1118_1036_fu_752_p0.read().is_01() || !ap_const_lv23_5A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1036_fu_752_p0.read()) * sc_biguint<23>(ap_const_lv23_5A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1037_fu_753_p0() {
    mul_ln1118_1037_fu_753_p0 =  (sc_lv<16>) (sext_ln1118_704_fu_1679553_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1037_fu_753_p2() {
    mul_ln1118_1037_fu_753_p2 = (!mul_ln1118_1037_fu_753_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1037_fu_753_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1038_fu_1231_p0() {
    mul_ln1118_1038_fu_1231_p0 =  (sc_lv<16>) (sext_ln1118_707_fu_1679567_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1038_fu_1231_p2() {
    mul_ln1118_1038_fu_1231_p2 = (!mul_ln1118_1038_fu_1231_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1038_fu_1231_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1039_fu_1232_p0() {
    mul_ln1118_1039_fu_1232_p0 =  (sc_lv<16>) (sext_ln1118_707_fu_1679567_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1039_fu_1232_p2() {
    mul_ln1118_1039_fu_1232_p2 = (!mul_ln1118_1039_fu_1232_p0.read().is_01() || !ap_const_lv23_7FFFA4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1039_fu_1232_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFA4);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1040_fu_1267_p0() {
    mul_ln1118_1040_fu_1267_p0 =  (sc_lv<16>) (sext_ln1118_707_fu_1679567_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1040_fu_1267_p2() {
    mul_ln1118_1040_fu_1267_p2 = (!mul_ln1118_1040_fu_1267_p0.read().is_01() || !ap_const_lv23_7FFF8B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1040_fu_1267_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1041_fu_1268_p0() {
    mul_ln1118_1041_fu_1268_p0 =  (sc_lv<16>) (sext_ln1118_707_fu_1679567_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1041_fu_1268_p2() {
    mul_ln1118_1041_fu_1268_p2 = (!mul_ln1118_1041_fu_1268_p0.read().is_01() || !ap_const_lv23_7FFFA5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1041_fu_1268_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFA5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1042_fu_724_p0() {
    mul_ln1118_1042_fu_724_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1042_fu_724_p2() {
    mul_ln1118_1042_fu_724_p2 = (!mul_ln1118_1042_fu_724_p0.read().is_01() || !ap_const_lv23_7FFF95.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1042_fu_724_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF95);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1043_fu_1352_p0() {
    mul_ln1118_1043_fu_1352_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1043_fu_1352_p2() {
    mul_ln1118_1043_fu_1352_p2 = (!mul_ln1118_1043_fu_1352_p0.read().is_01() || !ap_const_lv23_49.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1043_fu_1352_p0.read()) * sc_biguint<23>(ap_const_lv23_49);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1044_fu_890_p0() {
    mul_ln1118_1044_fu_890_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1044_fu_890_p2() {
    mul_ln1118_1044_fu_890_p2 = (!mul_ln1118_1044_fu_890_p0.read().is_01() || !ap_const_lv23_5F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1044_fu_890_p0.read()) * sc_biguint<23>(ap_const_lv23_5F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1045_fu_1096_p0() {
    mul_ln1118_1045_fu_1096_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1045_fu_1096_p2() {
    mul_ln1118_1045_fu_1096_p2 = (!mul_ln1118_1045_fu_1096_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1045_fu_1096_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1046_fu_1152_p0() {
    mul_ln1118_1046_fu_1152_p0 =  (sc_lv<16>) (sext_ln1118_721_fu_1680037_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1046_fu_1152_p2() {
    mul_ln1118_1046_fu_1152_p2 = (!mul_ln1118_1046_fu_1152_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1046_fu_1152_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1047_fu_1508_p0() {
    mul_ln1118_1047_fu_1508_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1047_fu_1508_p2() {
    mul_ln1118_1047_fu_1508_p2 = (!mul_ln1118_1047_fu_1508_p0.read().is_01() || !ap_const_lv23_7FFFAC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1047_fu_1508_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAC);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1048_fu_1155_p0() {
    mul_ln1118_1048_fu_1155_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1048_fu_1155_p2() {
    mul_ln1118_1048_fu_1155_p2 = (!mul_ln1118_1048_fu_1155_p0.read().is_01() || !ap_const_lv23_62.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1048_fu_1155_p0.read()) * sc_biguint<23>(ap_const_lv23_62);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1049_fu_1361_p0() {
    mul_ln1118_1049_fu_1361_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1049_fu_1361_p2() {
    mul_ln1118_1049_fu_1361_p2 = (!mul_ln1118_1049_fu_1361_p0.read().is_01() || !ap_const_lv23_7FFFB7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1049_fu_1361_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1050_fu_1495_p0() {
    mul_ln1118_1050_fu_1495_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1050_fu_1495_p2() {
    mul_ln1118_1050_fu_1495_p2 = (!mul_ln1118_1050_fu_1495_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1050_fu_1495_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1051_fu_1628_p0() {
    mul_ln1118_1051_fu_1628_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1051_fu_1628_p2() {
    mul_ln1118_1051_fu_1628_p2 = (!mul_ln1118_1051_fu_1628_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1051_fu_1628_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1052_fu_1498_p0() {
    mul_ln1118_1052_fu_1498_p0 =  (sc_lv<16>) (sext_ln1118_722_fu_1680043_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1052_fu_1498_p2() {
    mul_ln1118_1052_fu_1498_p2 = (!mul_ln1118_1052_fu_1498_p0.read().is_01() || !ap_const_lv23_7FFFAF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1052_fu_1498_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAF);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1053_fu_1295_p0() {
    mul_ln1118_1053_fu_1295_p0 =  (sc_lv<16>) (sext_ln1118_721_fu_1680037_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1053_fu_1295_p2() {
    mul_ln1118_1053_fu_1295_p2 = (!mul_ln1118_1053_fu_1295_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1053_fu_1295_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1054_fu_1092_p0() {
    mul_ln1118_1054_fu_1092_p0 =  (sc_lv<16>) (sext_ln708_103_fu_1680539_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1054_fu_1092_p2() {
    mul_ln1118_1054_fu_1092_p2 = (!mul_ln1118_1054_fu_1092_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1054_fu_1092_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1055_fu_1298_p0() {
    mul_ln1118_1055_fu_1298_p0 =  (sc_lv<16>) (sext_ln708_103_fu_1680539_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1055_fu_1298_p2() {
    mul_ln1118_1055_fu_1298_p2 = (!mul_ln1118_1055_fu_1298_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1055_fu_1298_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1056_fu_1095_p0() {
    mul_ln1118_1056_fu_1095_p0 =  (sc_lv<16>) (sext_ln708_103_fu_1680539_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1056_fu_1095_p2() {
    mul_ln1118_1056_fu_1095_p2 = (!mul_ln1118_1056_fu_1095_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1056_fu_1095_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1057_fu_1587_p0() {
    mul_ln1118_1057_fu_1587_p0 =  (sc_lv<16>) (sext_ln708_106_fu_1680559_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1057_fu_1587_p2() {
    mul_ln1118_1057_fu_1587_p2 = (!mul_ln1118_1057_fu_1587_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1057_fu_1587_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1058_fu_1588_p0() {
    mul_ln1118_1058_fu_1588_p0 =  (sc_lv<16>) (sext_ln708_104_fu_1680549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1058_fu_1588_p2() {
    mul_ln1118_1058_fu_1588_p2 = (!mul_ln1118_1058_fu_1588_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1058_fu_1588_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1059_fu_1078_p0() {
    mul_ln1118_1059_fu_1078_p0 =  (sc_lv<16>) (sext_ln708_103_fu_1680539_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1059_fu_1078_p2() {
    mul_ln1118_1059_fu_1078_p2 = (!mul_ln1118_1059_fu_1078_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1059_fu_1078_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1060_fu_1556_p0() {
    mul_ln1118_1060_fu_1556_p0 =  (sc_lv<16>) (sext_ln708_103_fu_1680539_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1060_fu_1556_p2() {
    mul_ln1118_1060_fu_1556_p2 = (!mul_ln1118_1060_fu_1556_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1060_fu_1556_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1061_fu_1591_p0() {
    mul_ln1118_1061_fu_1591_p0 =  (sc_lv<16>) (sext_ln708_104_fu_1680549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1061_fu_1591_p2() {
    mul_ln1118_1061_fu_1591_p2 = (!mul_ln1118_1061_fu_1591_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1061_fu_1591_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1062_fu_1592_p0() {
    mul_ln1118_1062_fu_1592_p0 =  (sc_lv<16>) (sext_ln708_103_fu_1680539_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1062_fu_1592_p2() {
    mul_ln1118_1062_fu_1592_p2 = (!mul_ln1118_1062_fu_1592_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1062_fu_1592_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1063_fu_1593_p0() {
    mul_ln1118_1063_fu_1593_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1063_fu_1593_p2() {
    mul_ln1118_1063_fu_1593_p2 = (!mul_ln1118_1063_fu_1593_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1063_fu_1593_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1064_fu_1594_p0() {
    mul_ln1118_1064_fu_1594_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1064_fu_1594_p2() {
    mul_ln1118_1064_fu_1594_p2 = (!mul_ln1118_1064_fu_1594_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1064_fu_1594_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1065_fu_1595_p0() {
    mul_ln1118_1065_fu_1595_p0 =  (sc_lv<16>) (sext_ln1118_745_fu_1681172_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1065_fu_1595_p2() {
    mul_ln1118_1065_fu_1595_p2 = (!mul_ln1118_1065_fu_1595_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1065_fu_1595_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1066_fu_1596_p0() {
    mul_ln1118_1066_fu_1596_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1066_fu_1596_p2() {
    mul_ln1118_1066_fu_1596_p2 = (!mul_ln1118_1066_fu_1596_p0.read().is_01() || !ap_const_lv23_76.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1066_fu_1596_p0.read()) * sc_biguint<23>(ap_const_lv23_76);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1067_fu_1597_p0() {
    mul_ln1118_1067_fu_1597_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1067_fu_1597_p2() {
    mul_ln1118_1067_fu_1597_p2 = (!mul_ln1118_1067_fu_1597_p0.read().is_01() || !ap_const_lv23_7FFF94.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1067_fu_1597_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF94);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1068_fu_1087_p0() {
    mul_ln1118_1068_fu_1087_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1068_fu_1087_p2() {
    mul_ln1118_1068_fu_1087_p2 = (!mul_ln1118_1068_fu_1087_p0.read().is_01() || !ap_const_lv23_7FFFB1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1068_fu_1087_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1069_fu_1088_p0() {
    mul_ln1118_1069_fu_1088_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1069_fu_1088_p2() {
    mul_ln1118_1069_fu_1088_p2 = (!mul_ln1118_1069_fu_1088_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1069_fu_1088_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1070_fu_1675_p0() {
    mul_ln1118_1070_fu_1675_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1070_fu_1675_p2() {
    mul_ln1118_1070_fu_1675_p2 = (!mul_ln1118_1070_fu_1675_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1070_fu_1675_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1071_fu_1472_p0() {
    mul_ln1118_1071_fu_1472_p0 =  (sc_lv<16>) (sext_ln1118_745_fu_1681172_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1071_fu_1472_p2() {
    mul_ln1118_1071_fu_1472_p2 = (!mul_ln1118_1071_fu_1472_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1071_fu_1472_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1072_fu_1528_p0() {
    mul_ln1118_1072_fu_1528_p0 =  (sc_lv<16>) (sext_ln1118_745_fu_1681172_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1072_fu_1528_p2() {
    mul_ln1118_1072_fu_1528_p2 = (!mul_ln1118_1072_fu_1528_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1072_fu_1528_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1073_fu_1475_p0() {
    mul_ln1118_1073_fu_1475_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1073_fu_1475_p2() {
    mul_ln1118_1073_fu_1475_p2 = (!mul_ln1118_1073_fu_1475_p0.read().is_01() || !ap_const_lv23_55.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1073_fu_1475_p0.read()) * sc_biguint<23>(ap_const_lv23_55);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1074_fu_1122_p0() {
    mul_ln1118_1074_fu_1122_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1074_fu_1122_p2() {
    mul_ln1118_1074_fu_1122_p2 = (!mul_ln1118_1074_fu_1122_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1074_fu_1122_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1075_fu_919_p0() {
    mul_ln1118_1075_fu_919_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1075_fu_919_p2() {
    mul_ln1118_1075_fu_919_p2 = (!mul_ln1118_1075_fu_919_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1075_fu_919_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1076_fu_1016_p0() {
    mul_ln1118_1076_fu_1016_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1681183_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1076_fu_1016_p2() {
    mul_ln1118_1076_fu_1016_p2 = (!mul_ln1118_1076_fu_1016_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1076_fu_1016_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1077_fu_1072_p0() {
    mul_ln1118_1077_fu_1072_p0 =  (sc_lv<16>) (sext_ln1118_757_fu_1681683_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1077_fu_1072_p2() {
    mul_ln1118_1077_fu_1072_p2 = (!mul_ln1118_1077_fu_1072_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1077_fu_1072_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1078_fu_1130_p0() {
    mul_ln1118_1078_fu_1130_p0 =  (sc_lv<16>) (sext_ln1118_757_fu_1681683_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1078_fu_1130_p2() {
    mul_ln1118_1078_fu_1130_p2 = (!mul_ln1118_1078_fu_1130_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1078_fu_1130_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1079_fu_1336_p0() {
    mul_ln1118_1079_fu_1336_p0 =  (sc_lv<16>) (sext_ln1118_760_fu_1681699_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1079_fu_1336_p2() {
    mul_ln1118_1079_fu_1336_p2 = (!mul_ln1118_1079_fu_1336_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1079_fu_1336_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1080_fu_1542_p0() {
    mul_ln1118_1080_fu_1542_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_1681674_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1080_fu_1542_p2() {
    mul_ln1118_1080_fu_1542_p2 = (!mul_ln1118_1080_fu_1542_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1080_fu_1542_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1081_fu_930_p0() {
    mul_ln1118_1081_fu_930_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_1681674_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1081_fu_930_p2() {
    mul_ln1118_1081_fu_930_p2 = (!mul_ln1118_1081_fu_930_p0.read().is_01() || !ap_const_lv23_43.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1081_fu_930_p0.read()) * sc_biguint<23>(ap_const_lv23_43);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1082_fu_1063_p0() {
    mul_ln1118_1082_fu_1063_p0 =  (sc_lv<16>) (sext_ln1118_757_fu_1681683_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1082_fu_1063_p2() {
    mul_ln1118_1082_fu_1063_p2 = (!mul_ln1118_1082_fu_1063_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1082_fu_1063_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1083_fu_933_p0() {
    mul_ln1118_1083_fu_933_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_1681674_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1083_fu_933_p2() {
    mul_ln1118_1083_fu_933_p2 = (!mul_ln1118_1083_fu_933_p0.read().is_01() || !ap_const_lv23_34.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1083_fu_933_p0.read()) * sc_biguint<23>(ap_const_lv23_34);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1084_fu_1139_p0() {
    mul_ln1118_1084_fu_1139_p0 =  (sc_lv<16>) (sext_ln1118_760_fu_1681699_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1084_fu_1139_p2() {
    mul_ln1118_1084_fu_1139_p2 = (!mul_ln1118_1084_fu_1139_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1084_fu_1139_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1085_fu_896_p0() {
    mul_ln1118_1085_fu_896_p0 =  (sc_lv<16>) (sext_ln1118_757_fu_1681683_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1085_fu_896_p2() {
    mul_ln1118_1085_fu_896_p2 = (!mul_ln1118_1085_fu_896_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1085_fu_896_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1086_fu_1374_p0() {
    mul_ln1118_1086_fu_1374_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_1681674_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1086_fu_1374_p2() {
    mul_ln1118_1086_fu_1374_p2 = (!mul_ln1118_1086_fu_1374_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1086_fu_1374_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1087_fu_1409_p0() {
    mul_ln1118_1087_fu_1409_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_1681674_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1087_fu_1409_p2() {
    mul_ln1118_1087_fu_1409_p2 = (!mul_ln1118_1087_fu_1409_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1087_fu_1409_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1088_fu_1410_p0() {
    mul_ln1118_1088_fu_1410_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1088_fu_1410_p2() {
    mul_ln1118_1088_fu_1410_p2 = (!mul_ln1118_1088_fu_1410_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1088_fu_1410_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1089_fu_866_p0() {
    mul_ln1118_1089_fu_866_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1089_fu_866_p2() {
    mul_ln1118_1089_fu_866_p2 = (!mul_ln1118_1089_fu_866_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1089_fu_866_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1090_fu_867_p0() {
    mul_ln1118_1090_fu_867_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1090_fu_867_p2() {
    mul_ln1118_1090_fu_867_p2 = (!mul_ln1118_1090_fu_867_p0.read().is_01() || !ap_const_lv23_75.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1090_fu_867_p0.read()) * sc_biguint<23>(ap_const_lv23_75);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1091_fu_1413_p0() {
    mul_ln1118_1091_fu_1413_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1091_fu_1413_p2() {
    mul_ln1118_1091_fu_1413_p2 = (!mul_ln1118_1091_fu_1413_p0.read().is_01() || !ap_const_lv23_7FFF89.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1091_fu_1413_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF89);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1092_fu_1414_p0() {
    mul_ln1118_1092_fu_1414_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1092_fu_1414_p2() {
    mul_ln1118_1092_fu_1414_p2 = (!mul_ln1118_1092_fu_1414_p0.read().is_01() || !ap_const_lv23_7FFFBA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1092_fu_1414_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFBA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1093_fu_1415_p0() {
    mul_ln1118_1093_fu_1415_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1093_fu_1415_p2() {
    mul_ln1118_1093_fu_1415_p2 = (!mul_ln1118_1093_fu_1415_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1093_fu_1415_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1094_fu_1416_p0() {
    mul_ln1118_1094_fu_1416_p0 =  (sc_lv<16>) (sext_ln1118_772_fu_1682275_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1094_fu_1416_p2() {
    mul_ln1118_1094_fu_1416_p2 = (!mul_ln1118_1094_fu_1416_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1094_fu_1416_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1095_fu_1417_p0() {
    mul_ln1118_1095_fu_1417_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1095_fu_1417_p2() {
    mul_ln1118_1095_fu_1417_p2 = (!mul_ln1118_1095_fu_1417_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1095_fu_1417_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1096_fu_1384_p0() {
    mul_ln1118_1096_fu_1384_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1096_fu_1384_p2() {
    mul_ln1118_1096_fu_1384_p2 = (!mul_ln1118_1096_fu_1384_p0.read().is_01() || !ap_const_lv23_7A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1096_fu_1384_p0.read()) * sc_biguint<23>(ap_const_lv23_7A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1097_fu_908_p0() {
    mul_ln1118_1097_fu_908_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1097_fu_908_p2() {
    mul_ln1118_1097_fu_908_p2 = (!mul_ln1118_1097_fu_908_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1097_fu_908_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1098_fu_875_p0() {
    mul_ln1118_1098_fu_875_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1098_fu_875_p2() {
    mul_ln1118_1098_fu_875_p2 = (!mul_ln1118_1098_fu_875_p0.read().is_01() || !ap_const_lv23_7FFF8C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1098_fu_875_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1099_fu_883_p0() {
    mul_ln1118_1099_fu_883_p0 =  (sc_lv<16>) (sext_ln1118_772_fu_1682275_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1099_fu_883_p2() {
    mul_ln1118_1099_fu_883_p2 = (!mul_ln1118_1099_fu_883_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1099_fu_883_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1100_fu_830_p0() {
    mul_ln1118_1100_fu_830_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1100_fu_830_p2() {
    mul_ln1118_1100_fu_830_p2 = (!mul_ln1118_1100_fu_830_p0.read().is_01() || !ap_const_lv23_4F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1100_fu_830_p0.read()) * sc_biguint<23>(ap_const_lv23_4F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1101_fu_886_p0() {
    mul_ln1118_1101_fu_886_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1101_fu_886_p2() {
    mul_ln1118_1101_fu_886_p2 = (!mul_ln1118_1101_fu_886_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1101_fu_886_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1102_fu_1501_p0() {
    mul_ln1118_1102_fu_1501_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1102_fu_1501_p2() {
    mul_ln1118_1102_fu_1501_p2 = (!mul_ln1118_1102_fu_1501_p0.read().is_01() || !ap_const_lv23_64.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1102_fu_1501_p0.read()) * sc_biguint<23>(ap_const_lv23_64);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1103_fu_889_p0() {
    mul_ln1118_1103_fu_889_p0 =  (sc_lv<16>) (sext_ln1118_774_fu_1682285_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1103_fu_889_p2() {
    mul_ln1118_1103_fu_889_p2 = (!mul_ln1118_1103_fu_889_p0.read().is_01() || !ap_const_lv23_61.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1103_fu_889_p0.read()) * sc_biguint<23>(ap_const_lv23_61);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1104_fu_1395_p0() {
    mul_ln1118_1104_fu_1395_p0 = sext_ln1118_782_fu_1682715_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1104_fu_1395_p2() {
    mul_ln1118_1104_fu_1395_p2 = (!mul_ln1118_1104_fu_1395_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1104_fu_1395_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1105_fu_1713_p0() {
    mul_ln1118_1105_fu_1713_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1105_fu_1713_p2() {
    mul_ln1118_1105_fu_1713_p2 = (!mul_ln1118_1105_fu_1713_p0.read().is_01() || !ap_const_lv23_56.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1105_fu_1713_p0.read()) * sc_biguint<23>(ap_const_lv23_56);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1106_fu_1028_p0() {
    mul_ln1118_1106_fu_1028_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1106_fu_1028_p2() {
    mul_ln1118_1106_fu_1028_p2 = (!mul_ln1118_1106_fu_1028_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1106_fu_1028_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1107_fu_1307_p0() {
    mul_ln1118_1107_fu_1307_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1107_fu_1307_p2() {
    mul_ln1118_1107_fu_1307_p2 = (!mul_ln1118_1107_fu_1307_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1107_fu_1307_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1108_fu_1586_p0() {
    mul_ln1118_1108_fu_1586_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1108_fu_1586_p2() {
    mul_ln1118_1108_fu_1586_p2 = (!mul_ln1118_1108_fu_1586_p0.read().is_01() || !ap_const_lv23_7FFF86.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1108_fu_1586_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF86);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1109_fu_828_p0() {
    mul_ln1118_1109_fu_828_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1109_fu_828_p2() {
    mul_ln1118_1109_fu_828_p2 = (!mul_ln1118_1109_fu_828_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1109_fu_828_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1110_fu_1180_p0() {
    mul_ln1118_1110_fu_1180_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1110_fu_1180_p2() {
    mul_ln1118_1110_fu_1180_p2 = (!mul_ln1118_1110_fu_1180_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1110_fu_1180_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1111_fu_1386_p0() {
    mul_ln1118_1111_fu_1386_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1111_fu_1386_p2() {
    mul_ln1118_1111_fu_1386_p2 = (!mul_ln1118_1111_fu_1386_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1111_fu_1386_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1112_fu_1183_p0() {
    mul_ln1118_1112_fu_1183_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1112_fu_1183_p2() {
    mul_ln1118_1112_fu_1183_p2 = (!mul_ln1118_1112_fu_1183_p0.read().is_01() || !ap_const_lv23_7FFFAE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1112_fu_1183_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAE);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1113_fu_1227_p0() {
    mul_ln1118_1113_fu_1227_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1113_fu_1227_p2() {
    mul_ln1118_1113_fu_1227_p2 = (!mul_ln1118_1113_fu_1227_p0.read().is_01() || !ap_const_lv23_7FFFB3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1113_fu_1227_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1114_fu_1194_p0() {
    mul_ln1118_1114_fu_1194_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1114_fu_1194_p2() {
    mul_ln1118_1114_fu_1194_p2 = (!mul_ln1118_1114_fu_1194_p0.read().is_01() || !ap_const_lv23_7FFF87.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1114_fu_1194_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF87);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1115_fu_1229_p0() {
    mul_ln1118_1115_fu_1229_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1115_fu_1229_p2() {
    mul_ln1118_1115_fu_1229_p2 = (!mul_ln1118_1115_fu_1229_p0.read().is_01() || !ap_const_lv23_5F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1115_fu_1229_p0.read()) * sc_biguint<23>(ap_const_lv23_5F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1116_fu_1673_p0() {
    mul_ln1118_1116_fu_1673_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1116_fu_1673_p2() {
    mul_ln1118_1116_fu_1673_p2 = (!mul_ln1118_1116_fu_1673_p0.read().is_01() || !ap_const_lv23_6C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1116_fu_1673_p0.read()) * sc_biguint<23>(ap_const_lv23_6C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1117_fu_1708_p0() {
    mul_ln1118_1117_fu_1708_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1117_fu_1708_p2() {
    mul_ln1118_1117_fu_1708_p2 = (!mul_ln1118_1117_fu_1708_p0.read().is_01() || !ap_const_lv23_55.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1117_fu_1708_p0.read()) * sc_biguint<23>(ap_const_lv23_55);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1118_fu_1198_p0() {
    mul_ln1118_1118_fu_1198_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1118_fu_1198_p2() {
    mul_ln1118_1118_fu_1198_p2 = (!mul_ln1118_1118_fu_1198_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1118_fu_1198_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1119_fu_1710_p0() {
    mul_ln1118_1119_fu_1710_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1119_fu_1710_p2() {
    mul_ln1118_1119_fu_1710_p2 = (!mul_ln1118_1119_fu_1710_p0.read().is_01() || !ap_const_lv23_4C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1119_fu_1710_p0.read()) * sc_biguint<23>(ap_const_lv23_4C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1120_fu_1711_p0() {
    mul_ln1118_1120_fu_1711_p0 =  (sc_lv<16>) (sext_ln1118_784_fu_1682724_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1120_fu_1711_p2() {
    mul_ln1118_1120_fu_1711_p2 = (!mul_ln1118_1120_fu_1711_p0.read().is_01() || !ap_const_lv23_57.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1120_fu_1711_p0.read()) * sc_biguint<23>(ap_const_lv23_57);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1121_fu_1201_p0() {
    mul_ln1118_1121_fu_1201_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_1683213_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1121_fu_1201_p2() {
    mul_ln1118_1121_fu_1201_p2 = (!mul_ln1118_1121_fu_1201_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1121_fu_1201_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1122_fu_725_p0() {
    mul_ln1118_1122_fu_725_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_1683213_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1122_fu_725_p2() {
    mul_ln1118_1122_fu_725_p2 = (!mul_ln1118_1122_fu_725_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1122_fu_725_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1123_fu_726_p0() {
    mul_ln1118_1123_fu_726_p0 =  (sc_lv<16>) (sext_ln1118_794_fu_1683204_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1123_fu_726_p2() {
    mul_ln1118_1123_fu_726_p2 = (!mul_ln1118_1123_fu_726_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1123_fu_726_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1124_fu_727_p0() {
    mul_ln1118_1124_fu_727_p0 =  (sc_lv<16>) (sext_ln1118_794_fu_1683204_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1124_fu_727_p2() {
    mul_ln1118_1124_fu_727_p2 = (!mul_ln1118_1124_fu_727_p0.read().is_01() || !ap_const_lv23_7FFFB7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1124_fu_727_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1125_fu_728_p0() {
    mul_ln1118_1125_fu_728_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_1683213_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1125_fu_728_p2() {
    mul_ln1118_1125_fu_728_p2 = (!mul_ln1118_1125_fu_728_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1125_fu_728_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1126_fu_729_p0() {
    mul_ln1118_1126_fu_729_p0 =  (sc_lv<16>) (sext_ln1118_794_fu_1683204_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1126_fu_729_p2() {
    mul_ln1118_1126_fu_729_p2 = (!mul_ln1118_1126_fu_729_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1126_fu_729_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1127_fu_1003_p0() {
    mul_ln1118_1127_fu_1003_p0 =  (sc_lv<16>) (sext_ln1118_794_fu_1683204_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1127_fu_1003_p2() {
    mul_ln1118_1127_fu_1003_p2 = (!mul_ln1118_1127_fu_1003_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1127_fu_1003_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1128_fu_1618_p0() {
    mul_ln1118_1128_fu_1618_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_1683229_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1128_fu_1618_p2() {
    mul_ln1118_1128_fu_1618_p2 = (!mul_ln1118_1128_fu_1618_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1128_fu_1618_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1129_fu_1265_p0() {
    mul_ln1118_1129_fu_1265_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_1683229_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1129_fu_1265_p2() {
    mul_ln1118_1129_fu_1265_p2 = (!mul_ln1118_1129_fu_1265_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1129_fu_1265_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1130_fu_803_p0() {
    mul_ln1118_1130_fu_803_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_1683229_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1130_fu_803_p2() {
    mul_ln1118_1130_fu_803_p2 = (!mul_ln1118_1130_fu_803_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1130_fu_803_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1131_fu_1418_p0() {
    mul_ln1118_1131_fu_1418_p0 =  (sc_lv<16>) (sext_ln1118_794_fu_1683204_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1131_fu_1418_p2() {
    mul_ln1118_1131_fu_1418_p2 = (!mul_ln1118_1131_fu_1418_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1131_fu_1418_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1132_fu_1474_p0() {
    mul_ln1118_1132_fu_1474_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_1683213_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1132_fu_1474_p2() {
    mul_ln1118_1132_fu_1474_p2 = (!mul_ln1118_1132_fu_1474_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1132_fu_1474_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1133_fu_1348_p0() {
    mul_ln1118_1133_fu_1348_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1133_fu_1348_p2() {
    mul_ln1118_1133_fu_1348_p2 = (!mul_ln1118_1133_fu_1348_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1133_fu_1348_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1134_fu_1554_p0() {
    mul_ln1118_1134_fu_1554_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1134_fu_1554_p2() {
    mul_ln1118_1134_fu_1554_p2 = (!mul_ln1118_1134_fu_1554_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1134_fu_1554_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1135_fu_1614_p0() {
    mul_ln1118_1135_fu_1614_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1135_fu_1614_p2() {
    mul_ln1118_1135_fu_1614_p2 = (!mul_ln1118_1135_fu_1614_p0.read().is_01() || !ap_const_lv23_7FFF93.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1135_fu_1614_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF93);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1136_fu_1557_p0() {
    mul_ln1118_1136_fu_1557_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1136_fu_1557_p2() {
    mul_ln1118_1136_fu_1557_p2 = (!mul_ln1118_1136_fu_1557_p0.read().is_01() || !ap_const_lv23_7A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1136_fu_1557_p0.read()) * sc_biguint<23>(ap_const_lv23_7A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1137_fu_1018_p0() {
    mul_ln1118_1137_fu_1018_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1137_fu_1018_p2() {
    mul_ln1118_1137_fu_1018_p2 = (!mul_ln1118_1137_fu_1018_p0.read().is_01() || !ap_const_lv23_7FFF89.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1137_fu_1018_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF89);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1138_fu_1560_p0() {
    mul_ln1118_1138_fu_1560_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1138_fu_1560_p2() {
    mul_ln1118_1138_fu_1560_p2 = (!mul_ln1118_1138_fu_1560_p0.read().is_01() || !ap_const_lv23_7FFF86.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1138_fu_1560_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF86);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1139_fu_1357_p0() {
    mul_ln1118_1139_fu_1357_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1139_fu_1357_p2() {
    mul_ln1118_1139_fu_1357_p2 = (!mul_ln1118_1139_fu_1357_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1139_fu_1357_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1140_fu_1154_p0() {
    mul_ln1118_1140_fu_1154_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1140_fu_1154_p2() {
    mul_ln1118_1140_fu_1154_p2 = (!mul_ln1118_1140_fu_1154_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1140_fu_1154_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1141_fu_1047_p0() {
    mul_ln1118_1141_fu_1047_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1141_fu_1047_p2() {
    mul_ln1118_1141_fu_1047_p2 = (!mul_ln1118_1141_fu_1047_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1141_fu_1047_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1142_fu_1048_p0() {
    mul_ln1118_1142_fu_1048_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1142_fu_1048_p2() {
    mul_ln1118_1142_fu_1048_p2 = (!mul_ln1118_1142_fu_1048_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1142_fu_1048_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1143_fu_1049_p0() {
    mul_ln1118_1143_fu_1049_p0 = sext_ln1118_808_fu_1683792_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1143_fu_1049_p2() {
    mul_ln1118_1143_fu_1049_p2 = (!mul_ln1118_1143_fu_1049_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1143_fu_1049_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1144_fu_1527_p0() {
    mul_ln1118_1144_fu_1527_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1144_fu_1527_p2() {
    mul_ln1118_1144_fu_1527_p2 = (!mul_ln1118_1144_fu_1527_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1144_fu_1527_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1145_fu_1051_p0() {
    mul_ln1118_1145_fu_1051_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_1683801_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1145_fu_1051_p2() {
    mul_ln1118_1145_fu_1051_p2 = (!mul_ln1118_1145_fu_1051_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1145_fu_1051_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1146_fu_1052_p0() {
    mul_ln1118_1146_fu_1052_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1146_fu_1052_p2() {
    mul_ln1118_1146_fu_1052_p2 = (!mul_ln1118_1146_fu_1052_p0.read().is_01() || !ap_const_lv23_7FFF87.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1146_fu_1052_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF87);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1147_fu_1564_p0() {
    mul_ln1118_1147_fu_1564_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1147_fu_1564_p2() {
    mul_ln1118_1147_fu_1564_p2 = (!mul_ln1118_1147_fu_1564_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1147_fu_1564_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1148_fu_1054_p0() {
    mul_ln1118_1148_fu_1054_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1148_fu_1054_p2() {
    mul_ln1118_1148_fu_1054_p2 = (!mul_ln1118_1148_fu_1054_p0.read().is_01() || !ap_const_lv23_43.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1148_fu_1054_p0.read()) * sc_biguint<23>(ap_const_lv23_43);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1149_fu_1550_p0() {
    mul_ln1118_1149_fu_1550_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1149_fu_1550_p2() {
    mul_ln1118_1149_fu_1550_p2 = (!mul_ln1118_1149_fu_1550_p0.read().is_01() || !ap_const_lv23_4E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1149_fu_1550_p0.read()) * sc_biguint<23>(ap_const_lv23_4E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1150_fu_1022_p0() {
    mul_ln1118_1150_fu_1022_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1150_fu_1022_p2() {
    mul_ln1118_1150_fu_1022_p2 = (!mul_ln1118_1150_fu_1022_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1150_fu_1022_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1151_fu_1023_p0() {
    mul_ln1118_1151_fu_1023_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1151_fu_1023_p2() {
    mul_ln1118_1151_fu_1023_p2 = (!mul_ln1118_1151_fu_1023_p0.read().is_01() || !ap_const_lv23_7A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1151_fu_1023_p0.read()) * sc_biguint<23>(ap_const_lv23_7A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1152_fu_1058_p0() {
    mul_ln1118_1152_fu_1058_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1152_fu_1058_p2() {
    mul_ln1118_1152_fu_1058_p2 = (!mul_ln1118_1152_fu_1058_p0.read().is_01() || !ap_const_lv23_7FFF95.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1152_fu_1058_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF95);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1153_fu_1570_p0() {
    mul_ln1118_1153_fu_1570_p0 =  (sc_lv<16>) (sext_ln1118_816_fu_1684155_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1153_fu_1570_p2() {
    mul_ln1118_1153_fu_1570_p2 = (!mul_ln1118_1153_fu_1570_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1153_fu_1570_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1154_fu_1326_p0() {
    mul_ln1118_1154_fu_1326_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1154_fu_1326_p2() {
    mul_ln1118_1154_fu_1326_p2 = (!mul_ln1118_1154_fu_1326_p0.read().is_01() || !ap_const_lv23_4F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1154_fu_1326_p0.read()) * sc_biguint<23>(ap_const_lv23_4F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1155_fu_823_p0() {
    mul_ln1118_1155_fu_823_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1155_fu_823_p2() {
    mul_ln1118_1155_fu_823_p2 = (!mul_ln1118_1155_fu_823_p0.read().is_01() || !ap_const_lv23_7FFF9A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1155_fu_823_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF9A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1156_fu_1329_p0() {
    mul_ln1118_1156_fu_1329_p0 =  (sc_lv<16>) (sext_ln1118_820_fu_1684173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1156_fu_1329_p2() {
    mul_ln1118_1156_fu_1329_p2 = (!mul_ln1118_1156_fu_1329_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1156_fu_1329_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1157_fu_1235_p0() {
    mul_ln1118_1157_fu_1235_p0 =  (sc_lv<16>) (sext_ln1118_816_fu_1684155_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1157_fu_1235_p2() {
    mul_ln1118_1157_fu_1235_p2 = (!mul_ln1118_1157_fu_1235_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1157_fu_1235_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1158_fu_1441_p0() {
    mul_ln1118_1158_fu_1441_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1158_fu_1441_p2() {
    mul_ln1118_1158_fu_1441_p2 = (!mul_ln1118_1158_fu_1441_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1158_fu_1441_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1159_fu_1647_p0() {
    mul_ln1118_1159_fu_1647_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1159_fu_1647_p2() {
    mul_ln1118_1159_fu_1647_p2 = (!mul_ln1118_1159_fu_1647_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1159_fu_1647_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1160_fu_1035_p0() {
    mul_ln1118_1160_fu_1035_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1160_fu_1035_p2() {
    mul_ln1118_1160_fu_1035_p2 = (!mul_ln1118_1160_fu_1035_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1160_fu_1035_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1161_fu_1173_p0() {
    mul_ln1118_1161_fu_1173_p0 = sext_ln1118_828_fu_1684619_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1161_fu_1173_p2() {
    mul_ln1118_1161_fu_1173_p2 = (!mul_ln1118_1161_fu_1173_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1161_fu_1173_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1162_fu_1189_p0() {
    mul_ln1118_1162_fu_1189_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1162_fu_1189_p2() {
    mul_ln1118_1162_fu_1189_p2 = (!mul_ln1118_1162_fu_1189_p0.read().is_01() || !ap_const_lv23_7FFF8D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1162_fu_1189_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1163_fu_1059_p0() {
    mul_ln1118_1163_fu_1059_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1163_fu_1059_p2() {
    mul_ln1118_1163_fu_1059_p2 = (!mul_ln1118_1163_fu_1059_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1163_fu_1059_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1164_fu_1674_p0() {
    mul_ln1118_1164_fu_1674_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1164_fu_1674_p2() {
    mul_ln1118_1164_fu_1674_p2 = (!mul_ln1118_1164_fu_1674_p0.read().is_01() || !ap_const_lv23_7FFF93.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1164_fu_1674_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF93);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1165_fu_1734_p0() {
    mul_ln1118_1165_fu_1734_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1165_fu_1734_p2() {
    mul_ln1118_1165_fu_1734_p2 = (!mul_ln1118_1165_fu_1734_p0.read().is_01() || !ap_const_lv23_34.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1165_fu_1734_p0.read()) * sc_biguint<23>(ap_const_lv23_34);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1166_fu_786_p0() {
    mul_ln1118_1166_fu_786_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_1684624_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1166_fu_786_p2() {
    mul_ln1118_1166_fu_786_p2 = (!mul_ln1118_1166_fu_786_p0.read().is_01() || !ap_const_lv23_7FFFB6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1166_fu_786_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1167_fu_1065_p0() {
    mul_ln1118_1167_fu_1065_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1167_fu_1065_p2() {
    mul_ln1118_1167_fu_1065_p2 = (!mul_ln1118_1167_fu_1065_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1167_fu_1065_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1168_fu_1343_p0() {
    mul_ln1118_1168_fu_1343_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1168_fu_1343_p2() {
    mul_ln1118_1168_fu_1343_p2 = (!mul_ln1118_1168_fu_1343_p0.read().is_01() || !ap_const_lv23_7FFFAC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1168_fu_1343_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAC);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1169_fu_1344_p0() {
    mul_ln1118_1169_fu_1344_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1169_fu_1344_p2() {
    mul_ln1118_1169_fu_1344_p2 = (!mul_ln1118_1169_fu_1344_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1169_fu_1344_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1170_fu_868_p0() {
    mul_ln1118_1170_fu_868_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1170_fu_868_p2() {
    mul_ln1118_1170_fu_868_p2 = (!mul_ln1118_1170_fu_868_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1170_fu_868_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1171_fu_869_p0() {
    mul_ln1118_1171_fu_869_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1171_fu_869_p2() {
    mul_ln1118_1171_fu_869_p2 = (!mul_ln1118_1171_fu_869_p0.read().is_01() || !ap_const_lv23_7FFFAA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1171_fu_869_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1172_fu_836_p0() {
    mul_ln1118_1172_fu_836_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1172_fu_836_p2() {
    mul_ln1118_1172_fu_836_p2 = (!mul_ln1118_1172_fu_836_p0.read().is_01() || !ap_const_lv23_7A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1172_fu_836_p0.read()) * sc_biguint<23>(ap_const_lv23_7A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1173_fu_1314_p0() {
    mul_ln1118_1173_fu_1314_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1173_fu_1314_p2() {
    mul_ln1118_1173_fu_1314_p2 = (!mul_ln1118_1173_fu_1314_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1173_fu_1314_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1174_fu_872_p0() {
    mul_ln1118_1174_fu_872_p0 = sext_ln1118_837_fu_1685020_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1174_fu_872_p2() {
    mul_ln1118_1174_fu_872_p2 = (!mul_ln1118_1174_fu_872_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1174_fu_872_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1175_fu_839_p0() {
    mul_ln1118_1175_fu_839_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1175_fu_839_p2() {
    mul_ln1118_1175_fu_839_p2 = (!mul_ln1118_1175_fu_839_p0.read().is_01() || !ap_const_lv23_7FFFBD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1175_fu_839_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFBD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1176_fu_1385_p0() {
    mul_ln1118_1176_fu_1385_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1176_fu_1385_p2() {
    mul_ln1118_1176_fu_1385_p2 = (!mul_ln1118_1176_fu_1385_p0.read().is_01() || !ap_const_lv23_7FFFB6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1176_fu_1385_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1177_fu_807_p0() {
    mul_ln1118_1177_fu_807_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1177_fu_807_p2() {
    mul_ln1118_1177_fu_807_p2 = (!mul_ln1118_1177_fu_807_p0.read().is_01() || !ap_const_lv23_61.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1177_fu_807_p0.read()) * sc_biguint<23>(ap_const_lv23_61);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1178_fu_1387_p0() {
    mul_ln1118_1178_fu_1387_p0 =  (sc_lv<16>) (sext_ln1118_838_fu_1685025_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1178_fu_1387_p2() {
    mul_ln1118_1178_fu_1387_p2 = (!mul_ln1118_1178_fu_1387_p0.read().is_01() || !ap_const_lv23_51.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1178_fu_1387_p0.read()) * sc_biguint<23>(ap_const_lv23_51);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1179_fu_1388_p0() {
    mul_ln1118_1179_fu_1388_p0 =  (sc_lv<16>) (sext_ln1118_850_fu_1685476_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1179_fu_1388_p2() {
    mul_ln1118_1179_fu_1388_p2 = (!mul_ln1118_1179_fu_1388_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1179_fu_1388_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1180_fu_1389_p0() {
    mul_ln1118_1180_fu_1389_p0 =  (sc_lv<16>) (sext_ln1118_851_fu_1685484_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1180_fu_1389_p2() {
    mul_ln1118_1180_fu_1389_p2 = (!mul_ln1118_1180_fu_1389_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1180_fu_1389_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1181_fu_1608_p0() {
    mul_ln1118_1181_fu_1608_p0 =  (sc_lv<16>) (sext_ln1118_850_fu_1685476_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1181_fu_1608_p2() {
    mul_ln1118_1181_fu_1608_p2 = (!mul_ln1118_1181_fu_1608_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1181_fu_1608_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1182_fu_737_p0() {
    mul_ln1118_1182_fu_737_p0 =  (sc_lv<16>) (sext_ln1118_850_fu_1685476_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1182_fu_737_p2() {
    mul_ln1118_1182_fu_737_p2 = (!mul_ln1118_1182_fu_737_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1182_fu_737_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1183_fu_793_p0() {
    mul_ln1118_1183_fu_793_p0 =  (sc_lv<16>) (sext_ln1118_851_fu_1685484_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1183_fu_793_p2() {
    mul_ln1118_1183_fu_793_p2 = (!mul_ln1118_1183_fu_793_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1183_fu_793_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1184_fu_999_p0() {
    mul_ln1118_1184_fu_999_p0 =  (sc_lv<16>) (sext_ln1118_851_fu_1685484_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1184_fu_999_p2() {
    mul_ln1118_1184_fu_999_p2 = (!mul_ln1118_1184_fu_999_p0.read().is_01() || !ap_const_lv23_6C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1184_fu_999_p0.read()) * sc_biguint<23>(ap_const_lv23_6C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1185_fu_1205_p0() {
    mul_ln1118_1185_fu_1205_p0 =  (sc_lv<16>) (sext_ln1118_850_fu_1685476_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1185_fu_1205_p2() {
    mul_ln1118_1185_fu_1205_p2 = (!mul_ln1118_1185_fu_1205_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1185_fu_1205_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1186_fu_1561_p0() {
    mul_ln1118_1186_fu_1561_p0 =  (sc_lv<16>) (sext_ln1118_851_fu_1685484_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1186_fu_1561_p2() {
    mul_ln1118_1186_fu_1561_p2 = (!mul_ln1118_1186_fu_1561_p0.read().is_01() || !ap_const_lv23_7FFF85.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1186_fu_1561_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF85);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1187_fu_1358_p0() {
    mul_ln1118_1187_fu_1358_p0 =  (sc_lv<16>) (sext_ln1118_851_fu_1685484_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1187_fu_1358_p2() {
    mul_ln1118_1187_fu_1358_p2 = (!mul_ln1118_1187_fu_1358_p0.read().is_01() || !ap_const_lv23_6B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1187_fu_1358_p0.read()) * sc_biguint<23>(ap_const_lv23_6B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1188_fu_1005_p0() {
    mul_ln1118_1188_fu_1005_p0 =  (sc_lv<16>) (sext_ln1118_851_fu_1685484_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_1188_fu_1005_p2() {
    mul_ln1118_1188_fu_1005_p2 = (!mul_ln1118_1188_fu_1005_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1188_fu_1005_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_782_fu_1484_p0() {
    mul_ln1118_782_fu_1484_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_782_fu_1484_p2() {
    mul_ln1118_782_fu_1484_p2 = (!mul_ln1118_782_fu_1484_p0.read().is_01() || !ap_const_lv23_73.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_782_fu_1484_p0.read()) * sc_biguint<23>(ap_const_lv23_73);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_783_fu_974_p0() {
    mul_ln1118_783_fu_974_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_783_fu_974_p2() {
    mul_ln1118_783_fu_974_p2 = (!mul_ln1118_783_fu_974_p0.read().is_01() || !ap_const_lv23_7FFFAB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_783_fu_974_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_784_fu_1452_p0() {
    mul_ln1118_784_fu_1452_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_784_fu_1452_p2() {
    mul_ln1118_784_fu_1452_p2 = (!mul_ln1118_784_fu_1452_p0.read().is_01() || !ap_const_lv23_7FFF86.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_784_fu_1452_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF86);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_785_fu_1487_p0() {
    mul_ln1118_785_fu_1487_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_785_fu_1487_p2() {
    mul_ln1118_785_fu_1487_p2 = (!mul_ln1118_785_fu_1487_p0.read().is_01() || !ap_const_lv23_7FFF93.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_785_fu_1487_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF93);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_786_fu_977_p0() {
    mul_ln1118_786_fu_977_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_786_fu_977_p2() {
    mul_ln1118_786_fu_977_p2 = (!mul_ln1118_786_fu_977_p0.read().is_01() || !ap_const_lv23_7FFF87.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_786_fu_977_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF87);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_787_fu_978_p0() {
    mul_ln1118_787_fu_978_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_787_fu_978_p2() {
    mul_ln1118_787_fu_978_p2 = (!mul_ln1118_787_fu_978_p0.read().is_01() || !ap_const_lv23_7FFF85.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_787_fu_978_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF85);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_788_fu_979_p0() {
    mul_ln1118_788_fu_979_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_788_fu_979_p2() {
    mul_ln1118_788_fu_979_p2 = (!mul_ln1118_788_fu_979_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_788_fu_979_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_789_fu_980_p0() {
    mul_ln1118_789_fu_980_p0 =  (sc_lv<16>) (sext_ln1118_fu_1670870_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_789_fu_980_p2() {
    mul_ln1118_789_fu_980_p2 = (!mul_ln1118_789_fu_980_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_789_fu_980_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_790_fu_1492_p0() {
    mul_ln1118_790_fu_1492_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_790_fu_1492_p2() {
    mul_ln1118_790_fu_1492_p2 = (!mul_ln1118_790_fu_1492_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_790_fu_1492_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_791_fu_982_p0() {
    mul_ln1118_791_fu_982_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_791_fu_982_p2() {
    mul_ln1118_791_fu_982_p2 = (!mul_ln1118_791_fu_982_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_791_fu_982_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_792_fu_1460_p0() {
    mul_ln1118_792_fu_1460_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_792_fu_1460_p2() {
    mul_ln1118_792_fu_1460_p2 = (!mul_ln1118_792_fu_1460_p0.read().is_01() || !ap_const_lv23_7FFF89.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_792_fu_1460_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF89);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_793_fu_1243_p0() {
    mul_ln1118_793_fu_1243_p0 =  (sc_lv<16>) (sext_ln1118_506_fu_1671322_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_793_fu_1243_p2() {
    mul_ln1118_793_fu_1243_p2 = (!mul_ln1118_793_fu_1243_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_793_fu_1243_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_794_fu_1040_p0() {
    mul_ln1118_794_fu_1040_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_794_fu_1040_p2() {
    mul_ln1118_794_fu_1040_p2 = (!mul_ln1118_794_fu_1040_p0.read().is_01() || !ap_const_lv23_7FFF85.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_794_fu_1040_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF85);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_795_fu_1655_p0() {
    mul_ln1118_795_fu_1655_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_795_fu_1655_p2() {
    mul_ln1118_795_fu_1655_p2 = (!mul_ln1118_795_fu_1655_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_795_fu_1655_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_796_fu_1193_p0() {
    mul_ln1118_796_fu_1193_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_796_fu_1193_p2() {
    mul_ln1118_796_fu_1193_p2 = (!mul_ln1118_796_fu_1193_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_796_fu_1193_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_797_fu_1249_p0() {
    mul_ln1118_797_fu_1249_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_797_fu_1249_p2() {
    mul_ln1118_797_fu_1249_p2 = (!mul_ln1118_797_fu_1249_p0.read().is_01() || !ap_const_lv23_56.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_797_fu_1249_p0.read()) * sc_biguint<23>(ap_const_lv23_56);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_798_fu_1046_p0() {
    mul_ln1118_798_fu_1046_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_798_fu_1046_p2() {
    mul_ln1118_798_fu_1046_p2 = (!mul_ln1118_798_fu_1046_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_798_fu_1046_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_799_fu_1661_p0() {
    mul_ln1118_799_fu_1661_p0 =  (sc_lv<16>) (sext_ln1118_505_fu_1671315_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_799_fu_1661_p2() {
    mul_ln1118_799_fu_1661_p2 = (!mul_ln1118_799_fu_1661_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_799_fu_1661_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_800_fu_1350_p0() {
    mul_ln1118_800_fu_1350_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_800_fu_1350_p2() {
    mul_ln1118_800_fu_1350_p2 = (!mul_ln1118_800_fu_1350_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_800_fu_1350_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_801_fu_1629_p0() {
    mul_ln1118_801_fu_1629_p0 =  (sc_lv<16>) (sext_ln1118_506_fu_1671322_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_801_fu_1629_p2() {
    mul_ln1118_801_fu_1629_p2 = (!mul_ln1118_801_fu_1629_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_801_fu_1629_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_802_fu_1017_p0() {
    mul_ln1118_802_fu_1017_p0 =  (sc_lv<16>) (sext_ln1118_505_fu_1671315_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_802_fu_1017_p2() {
    mul_ln1118_802_fu_1017_p2 = (!mul_ln1118_802_fu_1017_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_802_fu_1017_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_803_fu_1223_p0() {
    mul_ln1118_803_fu_1223_p0 =  (sc_lv<16>) (sext_ln1118_505_fu_1671315_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_803_fu_1223_p2() {
    mul_ln1118_803_fu_1223_p2 = (!mul_ln1118_803_fu_1223_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_803_fu_1223_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_804_fu_1429_p0() {
    mul_ln1118_804_fu_1429_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_804_fu_1429_p2() {
    mul_ln1118_804_fu_1429_p2 = (!mul_ln1118_804_fu_1429_p0.read().is_01() || !ap_const_lv23_5C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_804_fu_1429_p0.read()) * sc_biguint<23>(ap_const_lv23_5C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_805_fu_1635_p0() {
    mul_ln1118_805_fu_1635_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_805_fu_1635_p2() {
    mul_ln1118_805_fu_1635_p2 = (!mul_ln1118_805_fu_1635_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_805_fu_1635_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_806_fu_1549_p0() {
    mul_ln1118_806_fu_1549_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_1671332_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_806_fu_1549_p2() {
    mul_ln1118_806_fu_1549_p2 = (!mul_ln1118_806_fu_1549_p0.read().is_01() || !ap_const_lv23_71.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_806_fu_1549_p0.read()) * sc_biguint<23>(ap_const_lv23_71);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_807_fu_1301_p0() {
    mul_ln1118_807_fu_1301_p0 =  (sc_lv<16>) (sext_ln1118_517_fu_1671822_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_807_fu_1301_p2() {
    mul_ln1118_807_fu_1301_p2 = (!mul_ln1118_807_fu_1301_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_807_fu_1301_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_808_fu_757_p0() {
    mul_ln1118_808_fu_757_p0 =  (sc_lv<16>) (sext_ln1118_518_fu_1671828_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_808_fu_757_p2() {
    mul_ln1118_808_fu_757_p2 = (!mul_ln1118_808_fu_757_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_808_fu_757_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_809_fu_1303_p0() {
    mul_ln1118_809_fu_1303_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_809_fu_1303_p2() {
    mul_ln1118_809_fu_1303_p2 = (!mul_ln1118_809_fu_1303_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_809_fu_1303_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_810_fu_1304_p0() {
    mul_ln1118_810_fu_1304_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_810_fu_1304_p2() {
    mul_ln1118_810_fu_1304_p2 = (!mul_ln1118_810_fu_1304_p0.read().is_01() || !ap_const_lv23_7FFF8F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_810_fu_1304_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_811_fu_794_p0() {
    mul_ln1118_811_fu_794_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_811_fu_794_p2() {
    mul_ln1118_811_fu_794_p2 = (!mul_ln1118_811_fu_794_p0.read().is_01() || !ap_const_lv23_74.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_811_fu_794_p0.read()) * sc_biguint<23>(ap_const_lv23_74);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_812_fu_1272_p0() {
    mul_ln1118_812_fu_1272_p0 =  (sc_lv<16>) (sext_ln1118_517_fu_1671822_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_812_fu_1272_p2() {
    mul_ln1118_812_fu_1272_p2 = (!mul_ln1118_812_fu_1272_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_812_fu_1272_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_813_fu_796_p0() {
    mul_ln1118_813_fu_796_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_813_fu_796_p2() {
    mul_ln1118_813_fu_796_p2 = (!mul_ln1118_813_fu_796_p0.read().is_01() || !ap_const_lv23_7FFF8D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_813_fu_796_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_814_fu_1274_p0() {
    mul_ln1118_814_fu_1274_p0 =  (sc_lv<16>) (sext_ln1118_518_fu_1671828_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_814_fu_1274_p2() {
    mul_ln1118_814_fu_1274_p2 = (!mul_ln1118_814_fu_1274_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_814_fu_1274_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_815_fu_1309_p0() {
    mul_ln1118_815_fu_1309_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_815_fu_1309_p2() {
    mul_ln1118_815_fu_1309_p2 = (!mul_ln1118_815_fu_1309_p0.read().is_01() || !ap_const_lv23_7FFFB2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_815_fu_1309_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_816_fu_1310_p0() {
    mul_ln1118_816_fu_1310_p0 =  (sc_lv<16>) (sext_ln1118_518_fu_1671828_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_816_fu_1310_p2() {
    mul_ln1118_816_fu_1310_p2 = (!mul_ln1118_816_fu_1310_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_816_fu_1310_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_817_fu_1311_p0() {
    mul_ln1118_817_fu_1311_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_817_fu_1311_p2() {
    mul_ln1118_817_fu_1311_p2 = (!mul_ln1118_817_fu_1311_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_817_fu_1311_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_818_fu_1278_p0() {
    mul_ln1118_818_fu_1278_p0 =  (sc_lv<16>) (sext_ln1118_518_fu_1671828_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_818_fu_1278_p2() {
    mul_ln1118_818_fu_1278_p2 = (!mul_ln1118_818_fu_1278_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_818_fu_1278_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_819_fu_802_p0() {
    mul_ln1118_819_fu_802_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_819_fu_802_p2() {
    mul_ln1118_819_fu_802_p2 = (!mul_ln1118_819_fu_802_p0.read().is_01() || !ap_const_lv23_4B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_819_fu_802_p0.read()) * sc_biguint<23>(ap_const_lv23_4B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_820_fu_1280_p0() {
    mul_ln1118_820_fu_1280_p0 =  (sc_lv<16>) (sext_ln1118_521_fu_1671844_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_820_fu_1280_p2() {
    mul_ln1118_820_fu_1280_p2 = (!mul_ln1118_820_fu_1280_p0.read().is_01() || !ap_const_lv23_63.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_820_fu_1280_p0.read()) * sc_biguint<23>(ap_const_lv23_63);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_821_fu_804_p0() {
    mul_ln1118_821_fu_804_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_821_fu_804_p2() {
    mul_ln1118_821_fu_804_p2 = (!mul_ln1118_821_fu_804_p0.read().is_01() || !ap_const_lv23_7FFF8D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_821_fu_804_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_822_fu_1160_p0() {
    mul_ln1118_822_fu_1160_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_822_fu_1160_p2() {
    mul_ln1118_822_fu_1160_p2 = (!mul_ln1118_822_fu_1160_p0.read().is_01() || !ap_const_lv23_79.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_822_fu_1160_p0.read()) * sc_biguint<23>(ap_const_lv23_79);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_823_fu_1216_p0() {
    mul_ln1118_823_fu_1216_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_823_fu_1216_p2() {
    mul_ln1118_823_fu_1216_p2 = (!mul_ln1118_823_fu_1216_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_823_fu_1216_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_824_fu_1163_p0() {
    mul_ln1118_824_fu_1163_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_824_fu_1163_p2() {
    mul_ln1118_824_fu_1163_p2 = (!mul_ln1118_824_fu_1163_p0.read().is_01() || !ap_const_lv23_7FFFA2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_824_fu_1163_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFA2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_825_fu_1219_p0() {
    mul_ln1118_825_fu_1219_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_825_fu_1219_p2() {
    mul_ln1118_825_fu_1219_p2 = (!mul_ln1118_825_fu_1219_p0.read().is_01() || !ap_const_lv23_6E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_825_fu_1219_p0.read()) * sc_biguint<23>(ap_const_lv23_6E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_826_fu_1166_p0() {
    mul_ln1118_826_fu_1166_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_826_fu_1166_p2() {
    mul_ln1118_826_fu_1166_p2 = (!mul_ln1118_826_fu_1166_p0.read().is_01() || !ap_const_lv23_47.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_826_fu_1166_p0.read()) * sc_biguint<23>(ap_const_lv23_47);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_827_fu_813_p0() {
    mul_ln1118_827_fu_813_p0 = sext_ln1118_526_fu_1672192_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_827_fu_813_p2() {
    mul_ln1118_827_fu_813_p2 = (!mul_ln1118_827_fu_813_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_827_fu_813_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_828_fu_1467_p0() {
    mul_ln1118_828_fu_1467_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_828_fu_1467_p2() {
    mul_ln1118_828_fu_1467_p2 = (!mul_ln1118_828_fu_1467_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_828_fu_1467_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_829_fu_1118_p0() {
    mul_ln1118_829_fu_1118_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_829_fu_1118_p2() {
    mul_ln1118_829_fu_1118_p2 = (!mul_ln1118_829_fu_1118_p0.read().is_01() || !ap_const_lv23_72.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_829_fu_1118_p0.read()) * sc_biguint<23>(ap_const_lv23_72);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_830_fu_1061_p0() {
    mul_ln1118_830_fu_1061_p0 =  (sc_lv<16>) (sext_ln1118_527_fu_1672197_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_830_fu_1061_p2() {
    mul_ln1118_830_fu_1061_p2 = (!mul_ln1118_830_fu_1061_p0.read().is_01() || !ap_const_lv23_7FFF87.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_830_fu_1061_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF87);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_831_fu_1676_p0() {
    mul_ln1118_831_fu_1676_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_831_fu_1676_p2() {
    mul_ln1118_831_fu_1676_p2 = (!mul_ln1118_831_fu_1676_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_831_fu_1676_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_832_fu_1064_p0() {
    mul_ln1118_832_fu_1064_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_832_fu_1064_p2() {
    mul_ln1118_832_fu_1064_p2 = (!mul_ln1118_832_fu_1064_p0.read().is_01() || !ap_const_lv23_7A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_832_fu_1064_p0.read()) * sc_biguint<23>(ap_const_lv23_7A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_833_fu_861_p0() {
    mul_ln1118_833_fu_861_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_833_fu_861_p2() {
    mul_ln1118_833_fu_861_p2 = (!mul_ln1118_833_fu_861_p0.read().is_01() || !ap_const_lv23_7FFFAA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_833_fu_861_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_834_fu_1739_p0() {
    mul_ln1118_834_fu_1739_p0 = sext_ln1118_536_fu_1672544_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_834_fu_1739_p2() {
    mul_ln1118_834_fu_1739_p2 = (!mul_ln1118_834_fu_1739_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_834_fu_1739_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_835_fu_1121_p0() {
    mul_ln1118_835_fu_1121_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_835_fu_1121_p2() {
    mul_ln1118_835_fu_1121_p2 = (!mul_ln1118_835_fu_1121_p0.read().is_01() || !ap_const_lv23_7FFF8C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_835_fu_1121_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_836_fu_1599_p0() {
    mul_ln1118_836_fu_1599_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_836_fu_1599_p2() {
    mul_ln1118_836_fu_1599_p2 = (!mul_ln1118_836_fu_1599_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_836_fu_1599_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_837_fu_1600_p0() {
    mul_ln1118_837_fu_1600_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_837_fu_1600_p2() {
    mul_ln1118_837_fu_1600_p2 = (!mul_ln1118_837_fu_1600_p0.read().is_01() || !ap_const_lv23_7FFF87.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_837_fu_1600_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF87);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_838_fu_1601_p0() {
    mul_ln1118_838_fu_1601_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_838_fu_1601_p2() {
    mul_ln1118_838_fu_1601_p2 = (!mul_ln1118_838_fu_1601_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_838_fu_1601_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_839_fu_1636_p0() {
    mul_ln1118_839_fu_1636_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_839_fu_1636_p2() {
    mul_ln1118_839_fu_1636_p2 = (!mul_ln1118_839_fu_1636_p0.read().is_01() || !ap_const_lv23_79.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_839_fu_1636_p0.read()) * sc_biguint<23>(ap_const_lv23_79);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_840_fu_1637_p0() {
    mul_ln1118_840_fu_1637_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_840_fu_1637_p2() {
    mul_ln1118_840_fu_1637_p2 = (!mul_ln1118_840_fu_1637_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_840_fu_1637_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_841_fu_1127_p0() {
    mul_ln1118_841_fu_1127_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_841_fu_1127_p2() {
    mul_ln1118_841_fu_1127_p2 = (!mul_ln1118_841_fu_1127_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_841_fu_1127_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_842_fu_1060_p0() {
    mul_ln1118_842_fu_1060_p0 =  (sc_lv<16>) (sext_ln1118_537_fu_1672549_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_842_fu_1060_p2() {
    mul_ln1118_842_fu_1060_p2 = (!mul_ln1118_842_fu_1060_p0.read().is_01() || !ap_const_lv23_7FFFAD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_842_fu_1060_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_843_fu_1640_p0() {
    mul_ln1118_843_fu_1640_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_843_fu_1640_p2() {
    mul_ln1118_843_fu_1640_p2 = (!mul_ln1118_843_fu_1640_p0.read().is_01() || !ap_const_lv23_75.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_843_fu_1640_p0.read()) * sc_biguint<23>(ap_const_lv23_75);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_844_fu_1573_p0() {
    mul_ln1118_844_fu_1573_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_844_fu_1573_p2() {
    mul_ln1118_844_fu_1573_p2 = (!mul_ln1118_844_fu_1573_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_844_fu_1573_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_845_fu_1131_p0() {
    mul_ln1118_845_fu_1131_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_845_fu_1131_p2() {
    mul_ln1118_845_fu_1131_p2 = (!mul_ln1118_845_fu_1131_p0.read().is_01() || !ap_const_lv23_79.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_845_fu_1131_p0.read()) * sc_biguint<23>(ap_const_lv23_79);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_846_fu_1132_p0() {
    mul_ln1118_846_fu_1132_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_846_fu_1132_p2() {
    mul_ln1118_846_fu_1132_p2 = (!mul_ln1118_846_fu_1132_p0.read().is_01() || !ap_const_lv23_7FFF99.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_846_fu_1132_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF99);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_847_fu_1133_p0() {
    mul_ln1118_847_fu_1133_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_847_fu_1133_p2() {
    mul_ln1118_847_fu_1133_p2 = (!mul_ln1118_847_fu_1133_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_847_fu_1133_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_848_fu_1100_p0() {
    mul_ln1118_848_fu_1100_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_848_fu_1100_p2() {
    mul_ln1118_848_fu_1100_p2 = (!mul_ln1118_848_fu_1100_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_848_fu_1100_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_849_fu_1074_p0() {
    mul_ln1118_849_fu_1074_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_849_fu_1074_p2() {
    mul_ln1118_849_fu_1074_p2 = (!mul_ln1118_849_fu_1074_p0.read().is_01() || !ap_const_lv23_7FFF89.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_849_fu_1074_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF89);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_850_fu_1021_p0() {
    mul_ln1118_850_fu_1021_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_850_fu_1021_p2() {
    mul_ln1118_850_fu_1021_p2 = (!mul_ln1118_850_fu_1021_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_850_fu_1021_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_851_fu_777_p0() {
    mul_ln1118_851_fu_777_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_851_fu_777_p2() {
    mul_ln1118_851_fu_777_p2 = (!mul_ln1118_851_fu_777_p0.read().is_01() || !ap_const_lv23_63.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_851_fu_777_p0.read()) * sc_biguint<23>(ap_const_lv23_63);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_852_fu_983_p0() {
    mul_ln1118_852_fu_983_p0 =  (sc_lv<16>) (sext_ln1118_550_fu_1673008_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_852_fu_983_p2() {
    mul_ln1118_852_fu_983_p2 = (!mul_ln1118_852_fu_983_p0.read().is_01() || !ap_const_lv23_7FFF86.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_852_fu_983_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF86);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_853_fu_1489_p0() {
    mul_ln1118_853_fu_1489_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_853_fu_1489_p2() {
    mul_ln1118_853_fu_1489_p2 = (!mul_ln1118_853_fu_1489_p0.read().is_01() || !ap_const_lv23_4D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_853_fu_1489_p0.read()) * sc_biguint<23>(ap_const_lv23_4D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_854_fu_986_p0() {
    mul_ln1118_854_fu_986_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_854_fu_986_p2() {
    mul_ln1118_854_fu_986_p2 = (!mul_ln1118_854_fu_986_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_854_fu_986_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_855_fu_1083_p0() {
    mul_ln1118_855_fu_1083_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_855_fu_1083_p2() {
    mul_ln1118_855_fu_1083_p2 = (!mul_ln1118_855_fu_1083_p0.read().is_01() || !ap_const_lv23_76.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_855_fu_1083_p0.read()) * sc_biguint<23>(ap_const_lv23_76);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_856_fu_1438_p0() {
    mul_ln1118_856_fu_1438_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_856_fu_1438_p2() {
    mul_ln1118_856_fu_1438_p2 = (!mul_ln1118_856_fu_1438_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_856_fu_1438_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_857_fu_826_p0() {
    mul_ln1118_857_fu_826_p0 =  (sc_lv<16>) (sext_ln1118_560_fu_1673428_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_857_fu_826_p2() {
    mul_ln1118_857_fu_826_p2 = (!mul_ln1118_857_fu_826_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_857_fu_826_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_858_fu_1105_p0() {
    mul_ln1118_858_fu_1105_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_858_fu_1105_p2() {
    mul_ln1118_858_fu_1105_p2 = (!mul_ln1118_858_fu_1105_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_858_fu_1105_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_859_fu_902_p0() {
    mul_ln1118_859_fu_902_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_859_fu_902_p2() {
    mul_ln1118_859_fu_902_p2 = (!mul_ln1118_859_fu_902_p0.read().is_01() || !ap_const_lv23_58.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_859_fu_902_p0.read()) * sc_biguint<23>(ap_const_lv23_58);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_860_fu_1444_p0() {
    mul_ln1118_860_fu_1444_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_860_fu_1444_p2() {
    mul_ln1118_860_fu_1444_p2 = (!mul_ln1118_860_fu_1444_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_860_fu_1444_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_861_fu_905_p0() {
    mul_ln1118_861_fu_905_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_861_fu_905_p2() {
    mul_ln1118_861_fu_905_p2 = (!mul_ln1118_861_fu_905_p0.read().is_01() || !ap_const_lv23_52.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_861_fu_905_p0.read()) * sc_biguint<23>(ap_const_lv23_52);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_862_fu_1111_p0() {
    mul_ln1118_862_fu_1111_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_862_fu_1111_p2() {
    mul_ln1118_862_fu_1111_p2 = (!mul_ln1118_862_fu_1111_p0.read().is_01() || !ap_const_lv23_67.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_862_fu_1111_p0.read()) * sc_biguint<23>(ap_const_lv23_67);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_863_fu_941_p0() {
    mul_ln1118_863_fu_941_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_863_fu_941_p2() {
    mul_ln1118_863_fu_941_p2 = (!mul_ln1118_863_fu_941_p0.read().is_01() || !ap_const_lv23_4A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_863_fu_941_p0.read()) * sc_biguint<23>(ap_const_lv23_4A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_864_fu_1453_p0() {
    mul_ln1118_864_fu_1453_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_864_fu_1453_p2() {
    mul_ln1118_864_fu_1453_p2 = (!mul_ln1118_864_fu_1453_p0.read().is_01() || !ap_const_lv23_7FFF9C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_864_fu_1453_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF9C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_865_fu_909_p0() {
    mul_ln1118_865_fu_909_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_865_fu_909_p2() {
    mul_ln1118_865_fu_909_p2 = (!mul_ln1118_865_fu_909_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_865_fu_909_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_866_fu_910_p0() {
    mul_ln1118_866_fu_910_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_866_fu_910_p2() {
    mul_ln1118_866_fu_910_p2 = (!mul_ln1118_866_fu_910_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_866_fu_910_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_867_fu_1456_p0() {
    mul_ln1118_867_fu_1456_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_867_fu_1456_p2() {
    mul_ln1118_867_fu_1456_p2 = (!mul_ln1118_867_fu_1456_p0.read().is_01() || !ap_const_lv23_5B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_867_fu_1456_p0.read()) * sc_biguint<23>(ap_const_lv23_5B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_868_fu_1457_p0() {
    mul_ln1118_868_fu_1457_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_868_fu_1457_p2() {
    mul_ln1118_868_fu_1457_p2 = (!mul_ln1118_868_fu_1457_p0.read().is_01() || !ap_const_lv23_7A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_868_fu_1457_p0.read()) * sc_biguint<23>(ap_const_lv23_7A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_869_fu_1458_p0() {
    mul_ln1118_869_fu_1458_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_869_fu_1458_p2() {
    mul_ln1118_869_fu_1458_p2 = (!mul_ln1118_869_fu_1458_p0.read().is_01() || !ap_const_lv23_7FFF97.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_869_fu_1458_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF97);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_870_fu_948_p0() {
    mul_ln1118_870_fu_948_p0 =  (sc_lv<16>) (sext_ln1118_560_fu_1673428_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_870_fu_948_p2() {
    mul_ln1118_870_fu_948_p2 = (!mul_ln1118_870_fu_948_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_870_fu_948_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_871_fu_949_p0() {
    mul_ln1118_871_fu_949_p0 =  (sc_lv<16>) (sext_ln1118_562_fu_1673438_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_871_fu_949_p2() {
    mul_ln1118_871_fu_949_p2 = (!mul_ln1118_871_fu_949_p0.read().is_01() || !ap_const_lv23_51.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_871_fu_949_p0.read()) * sc_biguint<23>(ap_const_lv23_51);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_872_fu_950_p0() {
    mul_ln1118_872_fu_950_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_872_fu_950_p2() {
    mul_ln1118_872_fu_950_p2 = (!mul_ln1118_872_fu_950_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_872_fu_950_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_873_fu_951_p0() {
    mul_ln1118_873_fu_951_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_873_fu_951_p2() {
    mul_ln1118_873_fu_951_p2 = (!mul_ln1118_873_fu_951_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_873_fu_951_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_874_fu_952_p0() {
    mul_ln1118_874_fu_952_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_874_fu_952_p2() {
    mul_ln1118_874_fu_952_p2 = (!mul_ln1118_874_fu_952_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_874_fu_952_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_875_fu_953_p0() {
    mul_ln1118_875_fu_953_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_875_fu_953_p2() {
    mul_ln1118_875_fu_953_p2 = (!mul_ln1118_875_fu_953_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_875_fu_953_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_876_fu_1506_p0() {
    mul_ln1118_876_fu_1506_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_876_fu_1506_p2() {
    mul_ln1118_876_fu_1506_p2 = (!mul_ln1118_876_fu_1506_p0.read().is_01() || !ap_const_lv23_7FFFBA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_876_fu_1506_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFBA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_877_fu_1153_p0() {
    mul_ln1118_877_fu_1153_p0 =  (sc_lv<16>) (sext_ln1118_570_fu_1673909_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_877_fu_1153_p2() {
    mul_ln1118_877_fu_1153_p2 = (!mul_ln1118_877_fu_1153_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_877_fu_1153_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_878_fu_1659_p0() {
    mul_ln1118_878_fu_1659_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_878_fu_1659_p2() {
    mul_ln1118_878_fu_1659_p2 = (!mul_ln1118_878_fu_1659_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_878_fu_1659_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_879_fu_1715_p0() {
    mul_ln1118_879_fu_1715_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_879_fu_1715_p2() {
    mul_ln1118_879_fu_1715_p2 = (!mul_ln1118_879_fu_1715_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_879_fu_1715_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_880_fu_1362_p0() {
    mul_ln1118_880_fu_1362_p0 =  (sc_lv<16>) (sext_ln1118_570_fu_1673909_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_880_fu_1362_p2() {
    mul_ln1118_880_fu_1362_p2 = (!mul_ln1118_880_fu_1362_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_880_fu_1362_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_881_fu_1159_p0() {
    mul_ln1118_881_fu_1159_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_881_fu_1159_p2() {
    mul_ln1118_881_fu_1159_p2 = (!mul_ln1118_881_fu_1159_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_881_fu_1159_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_882_fu_956_p0() {
    mul_ln1118_882_fu_956_p0 =  (sc_lv<16>) (sext_ln1118_571_fu_1673916_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_882_fu_956_p2() {
    mul_ln1118_882_fu_956_p2 = (!mul_ln1118_882_fu_956_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_882_fu_956_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_883_fu_1539_p0() {
    mul_ln1118_883_fu_1539_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_883_fu_1539_p2() {
    mul_ln1118_883_fu_1539_p2 = (!mul_ln1118_883_fu_1539_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_883_fu_1539_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_884_fu_1146_p0() {
    mul_ln1118_884_fu_1146_p0 =  (sc_lv<16>) (sext_ln1118_569_fu_1673895_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_884_fu_1146_p2() {
    mul_ln1118_884_fu_1146_p2 = (!mul_ln1118_884_fu_1146_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_884_fu_1146_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_885_fu_1279_p0() {
    mul_ln1118_885_fu_1279_p0 =  (sc_lv<16>) (sext_ln1118_570_fu_1673909_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_885_fu_1279_p2() {
    mul_ln1118_885_fu_1279_p2 = (!mul_ln1118_885_fu_1279_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_885_fu_1279_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_886_fu_1076_p0() {
    mul_ln1118_886_fu_1076_p0 =  (sc_lv<16>) (sext_ln1118_571_fu_1673916_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_886_fu_1076_p2() {
    mul_ln1118_886_fu_1076_p2 = (!mul_ln1118_886_fu_1076_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_886_fu_1076_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_887_fu_873_p0() {
    mul_ln1118_887_fu_873_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_887_fu_873_p2() {
    mul_ln1118_887_fu_873_p2 = (!mul_ln1118_887_fu_873_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_887_fu_873_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_888_fu_743_p0() {
    mul_ln1118_888_fu_743_p0 =  (sc_lv<16>) (sext_ln1118_583_fu_1674493_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_888_fu_743_p2() {
    mul_ln1118_888_fu_743_p2 = (!mul_ln1118_888_fu_743_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_888_fu_743_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_889_fu_1694_p0() {
    mul_ln1118_889_fu_1694_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_889_fu_1694_p2() {
    mul_ln1118_889_fu_1694_p2 = (!mul_ln1118_889_fu_1694_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_889_fu_1694_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_890_fu_746_p0() {
    mul_ln1118_890_fu_746_p0 =  (sc_lv<16>) (sext_ln1118_582_fu_1674487_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_890_fu_746_p2() {
    mul_ln1118_890_fu_746_p2 = (!mul_ln1118_890_fu_746_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_890_fu_746_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_891_fu_761_p0() {
    mul_ln1118_891_fu_761_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_891_fu_761_p2() {
    mul_ln1118_891_fu_761_p2 = (!mul_ln1118_891_fu_761_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_891_fu_761_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_892_fu_1273_p0() {
    mul_ln1118_892_fu_1273_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_892_fu_1273_p2() {
    mul_ln1118_892_fu_1273_p2 = (!mul_ln1118_892_fu_1273_p0.read().is_01() || !ap_const_lv23_49.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_892_fu_1273_p0.read()) * sc_biguint<23>(ap_const_lv23_49);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_893_fu_1240_p0() {
    mul_ln1118_893_fu_1240_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_893_fu_1240_p2() {
    mul_ln1118_893_fu_1240_p2 = (!mul_ln1118_893_fu_1240_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_893_fu_1240_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_894_fu_1275_p0() {
    mul_ln1118_894_fu_1275_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_894_fu_1275_p2() {
    mul_ln1118_894_fu_1275_p2 = (!mul_ln1118_894_fu_1275_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_894_fu_1275_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_895_fu_731_p0() {
    mul_ln1118_895_fu_731_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_895_fu_731_p2() {
    mul_ln1118_895_fu_731_p2 = (!mul_ln1118_895_fu_731_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_895_fu_731_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_896_fu_766_p0() {
    mul_ln1118_896_fu_766_p0 =  (sc_lv<16>) (sext_ln1118_582_fu_1674487_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_896_fu_766_p2() {
    mul_ln1118_896_fu_766_p2 = (!mul_ln1118_896_fu_766_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_896_fu_766_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_897_fu_767_p0() {
    mul_ln1118_897_fu_767_p0 =  (sc_lv<16>) (sext_ln1118_583_fu_1674493_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_897_fu_767_p2() {
    mul_ln1118_897_fu_767_p2 = (!mul_ln1118_897_fu_767_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_897_fu_767_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_898_fu_768_p0() {
    mul_ln1118_898_fu_768_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_898_fu_768_p2() {
    mul_ln1118_898_fu_768_p2 = (!mul_ln1118_898_fu_768_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_898_fu_768_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_899_fu_769_p0() {
    mul_ln1118_899_fu_769_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_899_fu_769_p2() {
    mul_ln1118_899_fu_769_p2 = (!mul_ln1118_899_fu_769_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_899_fu_769_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_900_fu_770_p0() {
    mul_ln1118_900_fu_770_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_900_fu_770_p2() {
    mul_ln1118_900_fu_770_p2 = (!mul_ln1118_900_fu_770_p0.read().is_01() || !ap_const_lv23_7FFFBA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_900_fu_770_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFBA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_901_fu_771_p0() {
    mul_ln1118_901_fu_771_p0 =  (sc_lv<16>) (sext_ln1118_581_fu_1674472_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_901_fu_771_p2() {
    mul_ln1118_901_fu_771_p2 = (!mul_ln1118_901_fu_771_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_901_fu_771_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_902_fu_772_p0() {
    mul_ln1118_902_fu_772_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_902_fu_772_p2() {
    mul_ln1118_902_fu_772_p2 = (!mul_ln1118_902_fu_772_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_902_fu_772_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_903_fu_773_p0() {
    mul_ln1118_903_fu_773_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_903_fu_773_p2() {
    mul_ln1118_903_fu_773_p2 = (!mul_ln1118_903_fu_773_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_903_fu_773_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_904_fu_774_p0() {
    mul_ln1118_904_fu_774_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_904_fu_774_p2() {
    mul_ln1118_904_fu_774_p2 = (!mul_ln1118_904_fu_774_p0.read().is_01() || !ap_const_lv23_7FFF96.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_904_fu_774_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF96);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_905_fu_1532_p0() {
    mul_ln1118_905_fu_1532_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_905_fu_1532_p2() {
    mul_ln1118_905_fu_1532_p2 = (!mul_ln1118_905_fu_1532_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_905_fu_1532_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_906_fu_920_p0() {
    mul_ln1118_906_fu_920_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_906_fu_920_p2() {
    mul_ln1118_906_fu_920_p2 = (!mul_ln1118_906_fu_920_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_906_fu_920_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_907_fu_1426_p0() {
    mul_ln1118_907_fu_1426_p0 =  (sc_lv<16>) (sext_ln1118_597_fu_1674979_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_907_fu_1426_p2() {
    mul_ln1118_907_fu_1426_p2 = (!mul_ln1118_907_fu_1426_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_907_fu_1426_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_908_fu_964_p0() {
    mul_ln1118_908_fu_964_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_908_fu_964_p2() {
    mul_ln1118_908_fu_964_p2 = (!mul_ln1118_908_fu_964_p0.read().is_01() || !ap_const_lv23_45.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_908_fu_964_p0.read()) * sc_biguint<23>(ap_const_lv23_45);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_909_fu_870_p0() {
    mul_ln1118_909_fu_870_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_909_fu_870_p2() {
    mul_ln1118_909_fu_870_p2 = (!mul_ln1118_909_fu_870_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_909_fu_870_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_910_fu_926_p0() {
    mul_ln1118_910_fu_926_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_910_fu_926_p2() {
    mul_ln1118_910_fu_926_p2 = (!mul_ln1118_910_fu_926_p0.read().is_01() || !ap_const_lv23_4B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_910_fu_926_p0.read()) * sc_biguint<23>(ap_const_lv23_4B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_911_fu_1320_p0() {
    mul_ln1118_911_fu_1320_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_911_fu_1320_p2() {
    mul_ln1118_911_fu_1320_p2 = (!mul_ln1118_911_fu_1320_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_911_fu_1320_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_912_fu_1117_p0() {
    mul_ln1118_912_fu_1117_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_912_fu_1117_p2() {
    mul_ln1118_912_fu_1117_p2 = (!mul_ln1118_912_fu_1117_p0.read().is_01() || !ap_const_lv23_7FFF89.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_912_fu_1117_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF89);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_913_fu_914_p0() {
    mul_ln1118_913_fu_914_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_913_fu_914_p2() {
    mul_ln1118_913_fu_914_p2 = (!mul_ln1118_913_fu_914_p0.read().is_01() || !ap_const_lv23_74.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_913_fu_914_p0.read()) * sc_biguint<23>(ap_const_lv23_74);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_914_fu_1602_p0() {
    mul_ln1118_914_fu_1602_p0 =  (sc_lv<16>) (sext_ln1118_599_fu_1674988_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_914_fu_1602_p2() {
    mul_ln1118_914_fu_1602_p2 = (!mul_ln1118_914_fu_1602_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_914_fu_1602_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_915_fu_1399_p0() {
    mul_ln1118_915_fu_1399_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_915_fu_1399_p2() {
    mul_ln1118_915_fu_1399_p2 = (!mul_ln1118_915_fu_1399_p0.read().is_01() || !ap_const_lv23_7FFF85.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_915_fu_1399_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF85);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_916_fu_1050_p0() {
    mul_ln1118_916_fu_1050_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_916_fu_1050_p2() {
    mul_ln1118_916_fu_1050_p2 = (!mul_ln1118_916_fu_1050_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_916_fu_1050_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_917_fu_1738_p0() {
    mul_ln1118_917_fu_1738_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_917_fu_1738_p2() {
    mul_ln1118_917_fu_1738_p2 = (!mul_ln1118_917_fu_1738_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_917_fu_1738_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_918_fu_790_p0() {
    mul_ln1118_918_fu_790_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_918_fu_790_p2() {
    mul_ln1118_918_fu_790_p2 = (!mul_ln1118_918_fu_790_p0.read().is_01() || !ap_const_lv23_75.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_918_fu_790_p0.read()) * sc_biguint<23>(ap_const_lv23_75);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_919_fu_1482_p0() {
    mul_ln1118_919_fu_1482_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_919_fu_1482_p2() {
    mul_ln1118_919_fu_1482_p2 = (!mul_ln1118_919_fu_1482_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_919_fu_1482_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_920_fu_1093_p0() {
    mul_ln1118_920_fu_1093_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_920_fu_1093_p2() {
    mul_ln1118_920_fu_1093_p2 = (!mul_ln1118_920_fu_1093_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_920_fu_1093_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_921_fu_1094_p0() {
    mul_ln1118_921_fu_1094_p0 = sext_ln1118_604_fu_1675336_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_921_fu_1094_p2() {
    mul_ln1118_921_fu_1094_p2 = (!mul_ln1118_921_fu_1094_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_921_fu_1094_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_922_fu_1538_p0() {
    mul_ln1118_922_fu_1538_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_922_fu_1538_p2() {
    mul_ln1118_922_fu_1538_p2 = (!mul_ln1118_922_fu_1538_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_922_fu_1538_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_923_fu_1073_p0() {
    mul_ln1118_923_fu_1073_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_923_fu_1073_p2() {
    mul_ln1118_923_fu_1073_p2 = (!mul_ln1118_923_fu_1073_p0.read().is_01() || !ap_const_lv23_7FFF89.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_923_fu_1073_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF89);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_924_fu_1097_p0() {
    mul_ln1118_924_fu_1097_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_924_fu_1097_p2() {
    mul_ln1118_924_fu_1097_p2 = (!mul_ln1118_924_fu_1097_p0.read().is_01() || !ap_const_lv23_7FFF8E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_924_fu_1097_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_925_fu_1609_p0() {
    mul_ln1118_925_fu_1609_p0 = sext_ln1118_606_fu_1675345_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_925_fu_1609_p2() {
    mul_ln1118_925_fu_1609_p2 = (!mul_ln1118_925_fu_1609_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_925_fu_1609_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_926_fu_1099_p0() {
    mul_ln1118_926_fu_1099_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_926_fu_1099_p2() {
    mul_ln1118_926_fu_1099_p2 = (!mul_ln1118_926_fu_1099_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_926_fu_1099_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_927_fu_1611_p0() {
    mul_ln1118_927_fu_1611_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_927_fu_1611_p2() {
    mul_ln1118_927_fu_1611_p2 = (!mul_ln1118_927_fu_1611_p0.read().is_01() || !ap_const_lv23_7FFF83.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_927_fu_1611_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF83);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_928_fu_1101_p0() {
    mul_ln1118_928_fu_1101_p0 =  (sc_lv<16>) (sext_ln1118_607_fu_1675350_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_928_fu_1101_p2() {
    mul_ln1118_928_fu_1101_p2 = (!mul_ln1118_928_fu_1101_p0.read().is_01() || !ap_const_lv23_7FFF86.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_928_fu_1101_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF86);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_929_fu_1068_p0() {
    mul_ln1118_929_fu_1068_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_929_fu_1068_p2() {
    mul_ln1118_929_fu_1068_p2 = (!mul_ln1118_929_fu_1068_p0.read().is_01() || !ap_const_lv23_7FFFB6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_929_fu_1068_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB6);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_930_fu_1103_p0() {
    mul_ln1118_930_fu_1103_p0 =  (sc_lv<16>) (sext_ln1118_614_fu_1675752_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_930_fu_1103_p2() {
    mul_ln1118_930_fu_1103_p2 = (!mul_ln1118_930_fu_1103_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_930_fu_1103_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_931_fu_1104_p0() {
    mul_ln1118_931_fu_1104_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_931_fu_1104_p2() {
    mul_ln1118_931_fu_1104_p2 = (!mul_ln1118_931_fu_1104_p0.read().is_01() || !ap_const_lv23_6D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_931_fu_1104_p0.read()) * sc_biguint<23>(ap_const_lv23_6D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_932_fu_1705_p0() {
    mul_ln1118_932_fu_1705_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_932_fu_1705_p2() {
    mul_ln1118_932_fu_1705_p2 = (!mul_ln1118_932_fu_1705_p0.read().is_01() || !ap_const_lv23_7FFFB3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_932_fu_1705_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_933_fu_834_p0() {
    mul_ln1118_933_fu_834_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_933_fu_834_p2() {
    mul_ln1118_933_fu_834_p2 = (!mul_ln1118_933_fu_834_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_933_fu_834_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_934_fu_781_p0() {
    mul_ln1118_934_fu_781_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_934_fu_781_p2() {
    mul_ln1118_934_fu_781_p2 = (!mul_ln1118_934_fu_781_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_934_fu_781_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_935_fu_1505_p0() {
    mul_ln1118_935_fu_1505_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_935_fu_1505_p2() {
    mul_ln1118_935_fu_1505_p2 = (!mul_ln1118_935_fu_1505_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_935_fu_1505_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_936_fu_893_p0() {
    mul_ln1118_936_fu_893_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_936_fu_893_p2() {
    mul_ln1118_936_fu_893_p2 = (!mul_ln1118_936_fu_893_p0.read().is_01() || !ap_const_lv23_7FFF86.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_936_fu_893_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF86);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_937_fu_1658_p0() {
    mul_ln1118_937_fu_1658_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_937_fu_1658_p2() {
    mul_ln1118_937_fu_1658_p2 = (!mul_ln1118_937_fu_1658_p0.read().is_01() || !ap_const_lv23_5D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_937_fu_1658_p0.read()) * sc_biguint<23>(ap_const_lv23_5D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_938_fu_1714_p0() {
    mul_ln1118_938_fu_1714_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_938_fu_1714_p2() {
    mul_ln1118_938_fu_1714_p2 = (!mul_ln1118_938_fu_1714_p0.read().is_01() || !ap_const_lv23_7FFFAB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_938_fu_1714_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFAB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_939_fu_1700_p0() {
    mul_ln1118_939_fu_1700_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_939_fu_1700_p2() {
    mul_ln1118_939_fu_1700_p2 = (!mul_ln1118_939_fu_1700_p0.read().is_01() || !ap_const_lv23_53.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_939_fu_1700_p0.read()) * sc_biguint<23>(ap_const_lv23_53);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_940_fu_1351_p0() {
    mul_ln1118_940_fu_1351_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_940_fu_1351_p2() {
    mul_ln1118_940_fu_1351_p2 = (!mul_ln1118_940_fu_1351_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_940_fu_1351_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_941_fu_1221_p0() {
    mul_ln1118_941_fu_1221_p0 =  (sc_lv<16>) (sext_ln1118_614_fu_1675752_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_941_fu_1221_p2() {
    mul_ln1118_941_fu_1221_p2 = (!mul_ln1118_941_fu_1221_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_941_fu_1221_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_942_fu_945_p0() {
    mul_ln1118_942_fu_945_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1675762_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_942_fu_945_p2() {
    mul_ln1118_942_fu_945_p2 = (!mul_ln1118_942_fu_945_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_942_fu_945_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_943_fu_1633_p0() {
    mul_ln1118_943_fu_1633_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_943_fu_1633_p2() {
    mul_ln1118_943_fu_1633_p2 = (!mul_ln1118_943_fu_1633_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_943_fu_1633_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_944_fu_1430_p0() {
    mul_ln1118_944_fu_1430_p0 =  (sc_lv<16>) (sext_ln708_93_fu_1676289_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_944_fu_1430_p2() {
    mul_ln1118_944_fu_1430_p2 = (!mul_ln1118_944_fu_1430_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_944_fu_1430_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_945_fu_1709_p0() {
    mul_ln1118_945_fu_1709_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_945_fu_1709_p2() {
    mul_ln1118_945_fu_1709_p2 = (!mul_ln1118_945_fu_1709_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_945_fu_1709_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_946_fu_877_p0() {
    mul_ln1118_946_fu_877_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_946_fu_877_p2() {
    mul_ln1118_946_fu_877_p2 = (!mul_ln1118_946_fu_877_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_946_fu_877_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_947_fu_1355_p0() {
    mul_ln1118_947_fu_1355_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_947_fu_1355_p2() {
    mul_ln1118_947_fu_1355_p2 = (!mul_ln1118_947_fu_1355_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_947_fu_1355_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_948_fu_1390_p0() {
    mul_ln1118_948_fu_1390_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_948_fu_1390_p2() {
    mul_ln1118_948_fu_1390_p2 = (!mul_ln1118_948_fu_1390_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_948_fu_1390_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_949_fu_880_p0() {
    mul_ln1118_949_fu_880_p0 =  (sc_lv<16>) (sext_ln708_93_fu_1676289_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_949_fu_880_p2() {
    mul_ln1118_949_fu_880_p2 = (!mul_ln1118_949_fu_880_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_949_fu_880_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_950_fu_1392_p0() {
    mul_ln1118_950_fu_1392_p0 =  (sc_lv<16>) (sext_ln708_93_fu_1676289_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_950_fu_1392_p2() {
    mul_ln1118_950_fu_1392_p2 = (!mul_ln1118_950_fu_1392_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_950_fu_1392_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_951_fu_882_p0() {
    mul_ln1118_951_fu_882_p0 =  (sc_lv<16>) (sext_ln708_93_fu_1676289_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_951_fu_882_p2() {
    mul_ln1118_951_fu_882_p2 = (!mul_ln1118_951_fu_882_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_951_fu_882_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_952_fu_849_p0() {
    mul_ln1118_952_fu_849_p0 =  (sc_lv<16>) (sext_ln708_93_fu_1676289_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_952_fu_849_p2() {
    mul_ln1118_952_fu_849_p2 = (!mul_ln1118_952_fu_849_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_952_fu_849_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_953_fu_816_p0() {
    mul_ln1118_953_fu_816_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_953_fu_816_p2() {
    mul_ln1118_953_fu_816_p2 = (!mul_ln1118_953_fu_816_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_953_fu_816_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_954_fu_1396_p0() {
    mul_ln1118_954_fu_1396_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_954_fu_1396_p2() {
    mul_ln1118_954_fu_1396_p2 = (!mul_ln1118_954_fu_1396_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_954_fu_1396_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_955_fu_1397_p0() {
    mul_ln1118_955_fu_1397_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_955_fu_1397_p2() {
    mul_ln1118_955_fu_1397_p2 = (!mul_ln1118_955_fu_1397_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_955_fu_1397_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_956_fu_1398_p0() {
    mul_ln1118_956_fu_1398_p0 =  (sc_lv<16>) (sext_ln708_94_fu_1676298_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_956_fu_1398_p2() {
    mul_ln1118_956_fu_1398_p2 = (!mul_ln1118_956_fu_1398_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_956_fu_1398_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_957_fu_888_p0() {
    mul_ln1118_957_fu_888_p0 =  (sc_lv<16>) (sext_ln708_fu_1676276_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_957_fu_888_p2() {
    mul_ln1118_957_fu_888_p2 = (!mul_ln1118_957_fu_888_p0.read().is_01() || !ap_const_lv23_7FFFB5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_957_fu_888_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_958_fu_821_p0() {
    mul_ln1118_958_fu_821_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_958_fu_821_p2() {
    mul_ln1118_958_fu_821_p2 = (!mul_ln1118_958_fu_821_p0.read().is_01() || !ap_const_lv23_68.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_958_fu_821_p0.read()) * sc_biguint<23>(ap_const_lv23_68);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_959_fu_1367_p0() {
    mul_ln1118_959_fu_1367_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_959_fu_1367_p2() {
    mul_ln1118_959_fu_1367_p2 = (!mul_ln1118_959_fu_1367_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_959_fu_1367_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_960_fu_1566_p0() {
    mul_ln1118_960_fu_1566_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_960_fu_1566_p2() {
    mul_ln1118_960_fu_1566_p2 = (!mul_ln1118_960_fu_1566_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_960_fu_1566_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_961_fu_954_p0() {
    mul_ln1118_961_fu_954_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_961_fu_954_p2() {
    mul_ln1118_961_fu_954_p2 = (!mul_ln1118_961_fu_954_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_961_fu_954_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_962_fu_1569_p0() {
    mul_ln1118_962_fu_1569_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_962_fu_1569_p2() {
    mul_ln1118_962_fu_1569_p2 = (!mul_ln1118_962_fu_1569_p0.read().is_01() || !ap_const_lv23_7FFF8B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_962_fu_1569_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_963_fu_957_p0() {
    mul_ln1118_963_fu_957_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_963_fu_957_p2() {
    mul_ln1118_963_fu_957_p2 = (!mul_ln1118_963_fu_957_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_963_fu_957_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_964_fu_1572_p0() {
    mul_ln1118_964_fu_1572_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_964_fu_1572_p2() {
    mul_ln1118_964_fu_1572_p2 = (!mul_ln1118_964_fu_1572_p0.read().is_01() || !ap_const_lv23_62.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_964_fu_1572_p0.read()) * sc_biguint<23>(ap_const_lv23_62);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_965_fu_960_p0() {
    mul_ln1118_965_fu_960_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_965_fu_960_p2() {
    mul_ln1118_965_fu_960_p2 = (!mul_ln1118_965_fu_960_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_965_fu_960_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_966_fu_1575_p0() {
    mul_ln1118_966_fu_1575_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_966_fu_1575_p2() {
    mul_ln1118_966_fu_1575_p2 = (!mul_ln1118_966_fu_1575_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_966_fu_1575_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_967_fu_780_p0() {
    mul_ln1118_967_fu_780_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_967_fu_780_p2() {
    mul_ln1118_967_fu_780_p2 = (!mul_ln1118_967_fu_780_p0.read().is_01() || !ap_const_lv23_47.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_967_fu_780_p0.read()) * sc_biguint<23>(ap_const_lv23_47);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_968_fu_1731_p0() {
    mul_ln1118_968_fu_1731_p0 =  (sc_lv<16>) (sext_ln1118_636_fu_1676831_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_968_fu_1731_p2() {
    mul_ln1118_968_fu_1731_p2 = (!mul_ln1118_968_fu_1731_p0.read().is_01() || !ap_const_lv23_51.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_968_fu_1731_p0.read()) * sc_biguint<23>(ap_const_lv23_51);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_969_fu_1192_p0() {
    mul_ln1118_969_fu_1192_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_969_fu_1192_p2() {
    mul_ln1118_969_fu_1192_p2 = (!mul_ln1118_969_fu_1192_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_969_fu_1192_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_970_fu_1252_p0() {
    mul_ln1118_970_fu_1252_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_970_fu_1252_p2() {
    mul_ln1118_970_fu_1252_p2 = (!mul_ln1118_970_fu_1252_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_970_fu_1252_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_971_fu_1531_p0() {
    mul_ln1118_971_fu_1531_p0 = sext_ln1118_646_fu_1677257_p0.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_971_fu_1531_p2() {
    mul_ln1118_971_fu_1531_p2 = (!mul_ln1118_971_fu_1531_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_971_fu_1531_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_972_fu_1664_p0() {
    mul_ln1118_972_fu_1664_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_972_fu_1664_p2() {
    mul_ln1118_972_fu_1664_p2 = (!mul_ln1118_972_fu_1664_p0.read().is_01() || !ap_const_lv23_77.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_972_fu_1664_p0.read()) * sc_biguint<23>(ap_const_lv23_77);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_973_fu_1607_p0() {
    mul_ln1118_973_fu_1607_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_973_fu_1607_p2() {
    mul_ln1118_973_fu_1607_p2 = (!mul_ln1118_973_fu_1607_p0.read().is_01() || !ap_const_lv23_7FFF86.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_973_fu_1607_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF86);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_974_fu_1685_p0() {
    mul_ln1118_974_fu_1685_p0 =  (sc_lv<16>) (sext_ln1118_645_fu_1677250_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_974_fu_1685_p2() {
    mul_ln1118_974_fu_1685_p2 = (!mul_ln1118_974_fu_1685_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_974_fu_1685_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_975_fu_1141_p0() {
    mul_ln1118_975_fu_1141_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_975_fu_1141_p2() {
    mul_ln1118_975_fu_1141_p2 = (!mul_ln1118_975_fu_1141_p0.read().is_01() || !ap_const_lv23_7D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_975_fu_1141_p0.read()) * sc_biguint<23>(ap_const_lv23_7D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_976_fu_1687_p0() {
    mul_ln1118_976_fu_1687_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_976_fu_1687_p2() {
    mul_ln1118_976_fu_1687_p2 = (!mul_ln1118_976_fu_1687_p0.read().is_01() || !ap_const_lv23_47.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_976_fu_1687_p0.read()) * sc_biguint<23>(ap_const_lv23_47);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_977_fu_1688_p0() {
    mul_ln1118_977_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_977_fu_1688_p2() {
    mul_ln1118_977_fu_1688_p2 = (!mul_ln1118_977_fu_1688_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_977_fu_1688_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_978_fu_1689_p0() {
    mul_ln1118_978_fu_1689_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_978_fu_1689_p2() {
    mul_ln1118_978_fu_1689_p2 = (!mul_ln1118_978_fu_1689_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_978_fu_1689_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_979_fu_1179_p0() {
    mul_ln1118_979_fu_1179_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_979_fu_1179_p2() {
    mul_ln1118_979_fu_1179_p2 = (!mul_ln1118_979_fu_1179_p0.read().is_01() || !ap_const_lv23_7FFF8A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_979_fu_1179_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF8A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_980_fu_1623_p0() {
    mul_ln1118_980_fu_1623_p0 =  (sc_lv<16>) (sext_ln1118_645_fu_1677250_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_980_fu_1623_p2() {
    mul_ln1118_980_fu_1623_p2 = (!mul_ln1118_980_fu_1623_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_980_fu_1623_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_981_fu_1147_p0() {
    mul_ln1118_981_fu_1147_p0 =  (sc_lv<16>) (sext_ln1118_645_fu_1677250_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_981_fu_1147_p2() {
    mul_ln1118_981_fu_1147_p2 = (!mul_ln1118_981_fu_1147_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_981_fu_1147_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_982_fu_1693_p0() {
    mul_ln1118_982_fu_1693_p0 =  (sc_lv<16>) (sext_ln1118_647_fu_1677262_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_982_fu_1693_p2() {
    mul_ln1118_982_fu_1693_p2 = (!mul_ln1118_982_fu_1693_p0.read().is_01() || !ap_const_lv23_7FFF96.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_982_fu_1693_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF96);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_983_fu_1660_p0() {
    mul_ln1118_983_fu_1660_p0 =  (sc_lv<16>) (sext_ln1118_657_fu_1677740_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_983_fu_1660_p2() {
    mul_ln1118_983_fu_1660_p2 = (!mul_ln1118_983_fu_1660_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_983_fu_1660_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_984_fu_1184_p0() {
    mul_ln1118_984_fu_1184_p0 =  (sc_lv<16>) (sext_ln1118_659_fu_1677750_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_984_fu_1184_p2() {
    mul_ln1118_984_fu_1184_p2 = (!mul_ln1118_984_fu_1184_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_984_fu_1184_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_985_fu_1151_p0() {
    mul_ln1118_985_fu_1151_p0 =  (sc_lv<16>) (sext_ln1118_659_fu_1677750_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_985_fu_1151_p2() {
    mul_ln1118_985_fu_1151_p2 = (!mul_ln1118_985_fu_1151_p0.read().is_01() || !ap_const_lv23_7FFF95.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_985_fu_1151_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF95);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_986_fu_1697_p0() {
    mul_ln1118_986_fu_1697_p0 =  (sc_lv<16>) (sext_ln1118_659_fu_1677750_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_986_fu_1697_p2() {
    mul_ln1118_986_fu_1697_p2 = (!mul_ln1118_986_fu_1697_p0.read().is_01() || !ap_const_lv23_73.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_986_fu_1697_p0.read()) * sc_biguint<23>(ap_const_lv23_73);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_987_fu_1187_p0() {
    mul_ln1118_987_fu_1187_p0 =  (sc_lv<16>) (sext_ln1118_659_fu_1677750_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_987_fu_1187_p2() {
    mul_ln1118_987_fu_1187_p2 = (!mul_ln1118_987_fu_1187_p0.read().is_01() || !ap_const_lv23_68.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_987_fu_1187_p0.read()) * sc_biguint<23>(ap_const_lv23_68);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_988_fu_759_p0() {
    mul_ln1118_988_fu_759_p0 =  (sc_lv<16>) (sext_ln1118_659_fu_1677750_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_988_fu_759_p2() {
    mul_ln1118_988_fu_759_p2 = (!mul_ln1118_988_fu_759_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_988_fu_759_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_989_fu_1524_p0() {
    mul_ln1118_989_fu_1524_p0 =  (sc_lv<16>) (sext_ln1118_657_fu_1677740_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_989_fu_1524_p2() {
    mul_ln1118_989_fu_1524_p2 = (!mul_ln1118_989_fu_1524_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_989_fu_1524_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_990_fu_762_p0() {
    mul_ln1118_990_fu_762_p0 =  (sc_lv<16>) (sext_ln1118_659_fu_1677750_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_990_fu_762_p2() {
    mul_ln1118_990_fu_762_p2 = (!mul_ln1118_990_fu_762_p0.read().is_01() || !ap_const_lv23_7FFF97.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_990_fu_762_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF97);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_991_fu_818_p0() {
    mul_ln1118_991_fu_818_p0 =  (sc_lv<16>) (sext_ln1118_659_fu_1677750_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_991_fu_818_p2() {
    mul_ln1118_991_fu_818_p2 = (!mul_ln1118_991_fu_818_p0.read().is_01() || !ap_const_lv23_6C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_991_fu_818_p0.read()) * sc_biguint<23>(ap_const_lv23_6C);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_992_fu_765_p0() {
    mul_ln1118_992_fu_765_p0 =  (sc_lv<16>) (sext_ln1118_669_fu_1678173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_992_fu_765_p2() {
    mul_ln1118_992_fu_765_p2 = (!mul_ln1118_992_fu_765_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_992_fu_765_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_993_fu_1230_p0() {
    mul_ln1118_993_fu_1230_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_993_fu_1230_p2() {
    mul_ln1118_993_fu_1230_p2 = (!mul_ln1118_993_fu_1230_p0.read().is_01() || !ap_const_lv23_7FFF97.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_993_fu_1230_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFF97);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_994_fu_1027_p0() {
    mul_ln1118_994_fu_1027_p0 =  (sc_lv<16>) (sext_ln1118_672_fu_1678187_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_994_fu_1027_p2() {
    mul_ln1118_994_fu_1027_p2 = (!mul_ln1118_994_fu_1027_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_994_fu_1027_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_995_fu_1014_p0() {
    mul_ln1118_995_fu_1014_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_995_fu_1014_p2() {
    mul_ln1118_995_fu_1014_p2 = (!mul_ln1118_995_fu_1014_p0.read().is_01() || !ap_const_lv23_6E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_995_fu_1014_p0.read()) * sc_biguint<23>(ap_const_lv23_6E);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_996_fu_1293_p0() {
    mul_ln1118_996_fu_1293_p0 =  (sc_lv<16>) (sext_ln1118_669_fu_1678173_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_996_fu_1293_p2() {
    mul_ln1118_996_fu_1293_p2 = (!mul_ln1118_996_fu_1293_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_996_fu_1293_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_997_fu_1090_p0() {
    mul_ln1118_997_fu_1090_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_997_fu_1090_p2() {
    mul_ln1118_997_fu_1090_p2 = (!mul_ln1118_997_fu_1090_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_997_fu_1090_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_998_fu_887_p0() {
    mul_ln1118_998_fu_887_p0 =  (sc_lv<16>) (sext_ln1118_673_fu_1678194_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_998_fu_887_p2() {
    mul_ln1118_998_fu_887_p2 = (!mul_ln1118_998_fu_887_p0.read().is_01() || !ap_const_lv23_7B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_998_fu_887_p0.read()) * sc_biguint<23>(ap_const_lv23_7B);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_999_fu_1356_p0() {
    mul_ln1118_999_fu_1356_p0 =  (sc_lv<16>) (sext_ln1118_672_fu_1678187_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_999_fu_1356_p2() {
    mul_ln1118_999_fu_1356_p2 = (!mul_ln1118_999_fu_1356_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_999_fu_1356_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_fu_938_p0() {
    mul_ln1118_fu_938_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_1670883_p1.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mul_ln1118_fu_938_p2() {
    mul_ln1118_fu_938_p2 = (!mul_ln1118_fu_938_p0.read().is_01() || !ap_const_lv23_7FFFB9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_fu_938_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFB9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_0_V_fu_1670911_p4() {
    mult_0_V_fu_1670911_p4 = sub_ln1118_fu_1670905_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1000_V_fu_1685650_p4() {
    mult_1000_V_fu_1685650_p4 = sub_ln1118_953_fu_1685644_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1003_V_fu_1685670_p1() {
    mult_1003_V_fu_1685670_p1 = esl_sext<16,15>(trunc_ln708_1599_fu_1685660_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1006_V_fu_1685674_p4() {
    mult_1006_V_fu_1685674_p4 = mul_ln1118_1183_fu_793_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1007_V_fu_1685684_p4() {
    mult_1007_V_fu_1685684_p4 = mul_ln1118_1184_fu_999_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1008_V_fu_1685704_p1() {
    mult_1008_V_fu_1685704_p1 = esl_sext<16,15>(trunc_ln708_1600_fu_1685694_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1009_V_fu_1685726_p4() {
    mult_1009_V_fu_1685726_p4 = sub_ln1118_954_fu_1685720_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_100_V_fu_1672364_p4() {
    mult_100_V_fu_1672364_p4 = sub_ln1118_671_fu_1672358_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1010_V_fu_1685742_p4() {
    mult_1010_V_fu_1685742_p4 = sub_ln1118_955_fu_1685736_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1012_V_fu_1685758_p4() {
    mult_1012_V_fu_1685758_p4 = add_ln1118_148_fu_1685752_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1013_V_fu_1685768_p4() {
    mult_1013_V_fu_1685768_p4 = mul_ln1118_1186_fu_1561_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1014_V_fu_1685784_p4() {
    mult_1014_V_fu_1685784_p4 = sub_ln1118_956_fu_1685778_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1018_V_fu_1685834_p4() {
    mult_1018_V_fu_1685834_p4 = mul_ln1118_1187_fu_1358_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1021_V_fu_1685844_p4() {
    mult_1021_V_fu_1685844_p4 = mul_ln1118_1188_fu_1005_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_102_V_fu_1672374_p4() {
    mult_102_V_fu_1672374_p4 = mul_ln1118_821_fu_804_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_103_V_fu_1672390_p4() {
    mult_103_V_fu_1672390_p4 = sub_ln1118_960_fu_1672384_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_104_V_fu_1672400_p4() {
    mult_104_V_fu_1672400_p4 = mul_ln1118_822_fu_1160_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_107_V_fu_1672410_p4() {
    mult_107_V_fu_1672410_p4 = mul_ln1118_823_fu_1216_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_109_V_fu_1672426_p4() {
    mult_109_V_fu_1672426_p4 = sub_ln1118_672_fu_1672420_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_10_V_fu_1671097_p4() {
    mult_10_V_fu_1671097_p4 = sub_ln1118_647_fu_1671091_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_110_V_fu_1672436_p4() {
    mult_110_V_fu_1672436_p4 = mul_ln1118_824_fu_1163_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_112_V_fu_1672446_p4() {
    mult_112_V_fu_1672446_p4 = mul_ln1118_825_fu_1219_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_113_V_fu_1672456_p4() {
    mult_113_V_fu_1672456_p4 = mul_ln1118_826_fu_1166_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_118_V_fu_1672490_p1() {
    mult_118_V_fu_1672490_p1 = esl_sext<16,15>(trunc_ln708_1322_fu_1672480_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_119_V_fu_1672494_p4() {
    mult_119_V_fu_1672494_p4 = mul_ln1118_828_fu_1467_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_11_V_fu_1671123_p1() {
    mult_11_V_fu_1671123_p1 = esl_sext<16,15>(trunc_ln708_1293_fu_1671113_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_120_V_fu_1672504_p4() {
    mult_120_V_fu_1672504_p4 = mul_ln1118_829_fu_1118_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_121_V_fu_1672520_p4() {
    mult_121_V_fu_1672520_p4 = sub_ln1118_673_fu_1672514_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_125_V_fu_1672530_p4() {
    mult_125_V_fu_1672530_p4 = mul_ln1118_830_fu_1061_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_129_V_fu_1672644_p4() {
    mult_129_V_fu_1672644_p4 = sub_ln1118_961_fu_1672638_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_130_V_fu_1672654_p4() {
    mult_130_V_fu_1672654_p4 = mul_ln1118_831_fu_1676_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_133_V_fu_1672690_p4() {
    mult_133_V_fu_1672690_p4 = sub_ln1118_677_fu_1672684_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_134_V_fu_1672700_p4() {
    mult_134_V_fu_1672700_p4 = mul_ln1118_832_fu_1064_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_135_V_fu_1672716_p4() {
    mult_135_V_fu_1672716_p4 = sub_ln1118_678_fu_1672710_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_138_V_fu_1672732_p4() {
    mult_138_V_fu_1672732_p4 = sub_ln1118_679_fu_1672726_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_139_V_fu_1672742_p4() {
    mult_139_V_fu_1672742_p4 = mul_ln1118_833_fu_861_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_13_V_fu_1671143_p1() {
    mult_13_V_fu_1671143_p1 = esl_sext<16,15>(trunc_ln708_1294_fu_1671133_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_141_V_fu_1672774_p4() {
    mult_141_V_fu_1672774_p4 = sub_ln1118_680_fu_1672768_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_142_V_fu_1672794_p1() {
    mult_142_V_fu_1672794_p1 = esl_sext<16,15>(trunc_ln708_1325_fu_1672784_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_144_V_fu_1672830_p4() {
    mult_144_V_fu_1672830_p4 = mul_ln1118_835_fu_1121_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_146_V_fu_1672846_p4() {
    mult_146_V_fu_1672846_p4 = sub_ln1118_682_fu_1672840_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_147_V_fu_1672856_p4() {
    mult_147_V_fu_1672856_p4 = mul_ln1118_836_fu_1599_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_148_V_fu_1672882_p1() {
    mult_148_V_fu_1672882_p1 = esl_sext<16,14>(trunc_ln708_1327_fu_1672872_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_149_V_fu_1672886_p4() {
    mult_149_V_fu_1672886_p4 = mul_ln1118_837_fu_1600_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_151_V_fu_1672896_p4() {
    mult_151_V_fu_1672896_p4 = mul_ln1118_838_fu_1601_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_152_V_fu_1672906_p4() {
    mult_152_V_fu_1672906_p4 = mul_ln1118_839_fu_1636_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_153_V_fu_1672916_p4() {
    mult_153_V_fu_1672916_p4 = mul_ln1118_840_fu_1637_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_154_V_fu_1672950_p4() {
    mult_154_V_fu_1672950_p4 = sub_ln1118_684_fu_1672944_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_155_V_fu_1672976_p1() {
    mult_155_V_fu_1672976_p1 = esl_sext<16,14>(trunc_ln708_1328_fu_1672966_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_157_V_fu_1672980_p4() {
    mult_157_V_fu_1672980_p4 = mul_ln1118_841_fu_1127_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_158_V_fu_1672990_p4() {
    mult_158_V_fu_1672990_p4 = mul_ln1118_842_fu_1060_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_15_V_fu_1671147_p4() {
    mult_15_V_fu_1671147_p4 = mul_ln1118_786_fu_977_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_160_V_fu_1673022_p4() {
    mult_160_V_fu_1673022_p4 = mul_ln1118_843_fu_1640_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_161_V_fu_1673062_p4() {
    mult_161_V_fu_1673062_p4 = sub_ln1118_685_fu_1673056_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_162_V_fu_1673116_p1() {
    mult_162_V_fu_1673116_p1 = esl_sext<16,15>(trunc_ln708_1329_fu_1673106_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_163_V_fu_1673136_p1() {
    mult_163_V_fu_1673136_p1 = esl_sext<16,15>(trunc_ln708_1330_fu_1673126_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_164_V_fu_1673140_p4() {
    mult_164_V_fu_1673140_p4 = mul_ln1118_844_fu_1573_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_165_V_fu_1673150_p4() {
    mult_165_V_fu_1673150_p4 = mul_ln1118_845_fu_1131_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_166_V_fu_1673160_p4() {
    mult_166_V_fu_1673160_p4 = mul_ln1118_846_fu_1132_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_167_V_fu_1673170_p4() {
    mult_167_V_fu_1673170_p4 = mul_ln1118_847_fu_1133_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_168_V_fu_1673186_p4() {
    mult_168_V_fu_1673186_p4 = sub_ln1118_687_fu_1673180_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_169_V_fu_1673202_p4() {
    mult_169_V_fu_1673202_p4 = sub_ln1118_688_fu_1673196_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_16_V_fu_1671157_p4() {
    mult_16_V_fu_1671157_p4 = mul_ln1118_787_fu_978_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_171_V_fu_1673212_p4() {
    mult_171_V_fu_1673212_p4 = mul_ln1118_848_fu_1100_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_175_V_fu_1673260_p4() {
    mult_175_V_fu_1673260_p4 = mul_ln1118_849_fu_1074_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_176_V_fu_1673270_p4() {
    mult_176_V_fu_1673270_p4 = mul_ln1118_850_fu_1021_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_181_V_fu_1673304_p4() {
    mult_181_V_fu_1673304_p4 = mul_ln1118_851_fu_777_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_182_V_fu_1673320_p4() {
    mult_182_V_fu_1673320_p4 = sub_ln1118_963_fu_1673314_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_183_V_fu_1673346_p1() {
    mult_183_V_fu_1673346_p1 = esl_sext<16,15>(trunc_ln708_1333_fu_1673336_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_185_V_fu_1673366_p1() {
    mult_185_V_fu_1673366_p1 = esl_sext<16,15>(trunc_ln708_1334_fu_1673356_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_188_V_fu_1673370_p4() {
    mult_188_V_fu_1673370_p4 = mul_ln1118_852_fu_983_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_189_V_fu_1673386_p4() {
    mult_189_V_fu_1673386_p4 = sub_ln1118_693_fu_1673380_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_190_V_fu_1673414_p4() {
    mult_190_V_fu_1673414_p4 = sub_ln1118_694_fu_1673408_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_192_V_fu_1673459_p4() {
    mult_192_V_fu_1673459_p4 = mul_ln1118_853_fu_1489_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_193_V_fu_1673483_p4() {
    mult_193_V_fu_1673483_p4 = sub_ln1118_695_fu_1673477_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_195_V_fu_1673507_p4() {
    mult_195_V_fu_1673507_p4 = mul_ln1118_854_fu_986_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_196_V_fu_1673517_p4() {
    mult_196_V_fu_1673517_p4 = mul_ln1118_855_fu_1083_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_197_V_fu_1673527_p4() {
    mult_197_V_fu_1673527_p4 = mul_ln1118_856_fu_1438_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_198_V_fu_1673543_p4() {
    mult_198_V_fu_1673543_p4 = sub_ln1118_696_fu_1673537_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_199_V_fu_1673563_p1() {
    mult_199_V_fu_1673563_p1 = esl_sext<16,15>(trunc_ln708_1336_fu_1673553_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_1_V_fu_1670921_p4() {
    mult_1_V_fu_1670921_p4 = mul_ln1118_fu_938_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_200_V_fu_1673585_p4() {
    mult_200_V_fu_1673585_p4 = sub_ln1118_697_fu_1673579_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_201_V_fu_1673595_p4() {
    mult_201_V_fu_1673595_p4 = mul_ln1118_858_fu_1105_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_202_V_fu_1673605_p4() {
    mult_202_V_fu_1673605_p4 = mul_ln1118_859_fu_902_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_205_V_fu_1673663_p4() {
    mult_205_V_fu_1673663_p4 = mul_ln1118_860_fu_1444_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_207_V_fu_1673711_p4() {
    mult_207_V_fu_1673711_p4 = sub_ln1118_965_fu_1673705_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_208_V_fu_1673721_p4() {
    mult_208_V_fu_1673721_p4 = mul_ln1118_861_fu_905_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_20_V_fu_1671217_p1() {
    mult_20_V_fu_1671217_p1 = esl_sext<16,15>(trunc_ln708_1296_fu_1671207_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_210_V_fu_1673731_p4() {
    mult_210_V_fu_1673731_p4 = mul_ln1118_862_fu_1111_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_211_V_fu_1673747_p4() {
    mult_211_V_fu_1673747_p4 = sub_ln1118_698_fu_1673741_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_213_V_fu_1673777_p4() {
    mult_213_V_fu_1673777_p4 = mul_ln1118_863_fu_941_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_216_V_fu_1673811_p4() {
    mult_216_V_fu_1673811_p4 = mul_ln1118_864_fu_1453_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_217_V_fu_1673821_p4() {
    mult_217_V_fu_1673821_p4 = mul_ln1118_865_fu_909_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_218_V_fu_1673831_p4() {
    mult_218_V_fu_1673831_p4 = mul_ln1118_866_fu_910_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_219_V_fu_1673841_p4() {
    mult_219_V_fu_1673841_p4 = mul_ln1118_867_fu_1456_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_21_V_fu_1671221_p4() {
    mult_21_V_fu_1671221_p4 = mul_ln1118_788_fu_979_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_220_V_fu_1673851_p4() {
    mult_220_V_fu_1673851_p4 = mul_ln1118_868_fu_1457_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_221_V_fu_1673861_p4() {
    mult_221_V_fu_1673861_p4 = mul_ln1118_869_fu_1458_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_222_V_fu_1673881_p1() {
    mult_222_V_fu_1673881_p1 = esl_sext<16,15>(trunc_ln708_1341_fu_1673871_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_223_V_fu_1673885_p4() {
    mult_223_V_fu_1673885_p4 = mul_ln1118_871_fu_949_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_224_V_fu_1673926_p4() {
    mult_224_V_fu_1673926_p4 = mul_ln1118_872_fu_950_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_225_V_fu_1673936_p4() {
    mult_225_V_fu_1673936_p4 = mul_ln1118_873_fu_951_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_227_V_fu_1673998_p4() {
    mult_227_V_fu_1673998_p4 = mul_ln1118_874_fu_952_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_228_V_fu_1674008_p4() {
    mult_228_V_fu_1674008_p4 = mul_ln1118_875_fu_953_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_229_V_fu_1674018_p4() {
    mult_229_V_fu_1674018_p4 = mul_ln1118_876_fu_1506_p2.read().range(22, 7);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_22_V_fu_1671241_p1() {
    mult_22_V_fu_1671241_p1 = esl_sext<16,15>(trunc_ln708_1297_fu_1671231_p4.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_30_13_5_3_0_config13_s::thread_mult_230_V_fu_1674038_p1() {
    mult_230_V_fu_1674038_p1 = esl_sext<16,15>(trunc_ln708_1343_fu_1674028_p4.read());
}

}

