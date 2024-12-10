#include "pointwise_conv_1d_cl_array_array_ap_fixed_22_7_5_3_0_32u_config20_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_cl_array_array_ap_fixed_22_7_5_3_0_32u_config20_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_fu_2171019_p2.read()))) {
        i_iw_0_reg_1592 = i_iw_fu_2171025_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_iw_0_reg_1592 = ap_const_lv5_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln89_reg_2199755.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln703_1056_reg_2200584 = add_ln703_1056_fu_2172270_p2.read();
        add_ln703_1061_reg_2200589 = add_ln703_1061_fu_2172276_p2.read();
        add_ln703_1064_reg_2200594 = add_ln703_1064_fu_2172288_p2.read();
        add_ln703_1070_reg_2200599 = add_ln703_1070_fu_2172294_p2.read();
        add_ln703_1073_reg_2200604 = add_ln703_1073_fu_2172300_p2.read();
        add_ln703_1082_reg_2200609 = add_ln703_1082_fu_2172306_p2.read();
        add_ln703_1097_reg_2200614 = add_ln703_1097_fu_2172312_p2.read();
        add_ln703_1116_reg_2200619 = add_ln703_1116_fu_2172318_p2.read();
        add_ln703_1119_reg_2200624 = add_ln703_1119_fu_2172324_p2.read();
        add_ln703_1131_reg_2200629 = add_ln703_1131_fu_2172330_p2.read();
        add_ln703_1135_reg_2200634 = add_ln703_1135_fu_2172336_p2.read();
        add_ln703_1142_reg_2200639 = add_ln703_1142_fu_2172342_p2.read();
        data_10_V_reg_2199902 = data_V_data_10_V_dout.read();
        data_11_V_reg_2199917 = data_V_data_11_V_dout.read();
        data_12_V_reg_2199931 = data_V_data_12_V_dout.read();
        data_13_V_reg_2199945 = data_V_data_13_V_dout.read();
        data_14_V_reg_2199961 = data_V_data_14_V_dout.read();
        data_15_V_reg_2199977 = data_V_data_15_V_dout.read();
        data_16_V_reg_2199994 = data_V_data_16_V_dout.read();
        data_17_V_reg_2200009 = data_V_data_17_V_dout.read();
        data_18_V_reg_2200023 = data_V_data_18_V_dout.read();
        data_19_V_reg_2200040 = data_V_data_19_V_dout.read();
        data_20_V_reg_2200057 = data_V_data_20_V_dout.read();
        data_21_V_reg_2200073 = data_V_data_21_V_dout.read();
        data_22_V_reg_2200089 = data_V_data_22_V_dout.read();
        data_23_V_reg_2200105 = data_V_data_23_V_dout.read();
        data_24_V_reg_2200122 = data_V_data_24_V_dout.read();
        data_25_V_reg_2200139 = data_V_data_25_V_dout.read();
        data_26_V_reg_2200155 = data_V_data_26_V_dout.read();
        data_27_V_reg_2200171 = data_V_data_27_V_dout.read();
        data_28_V_reg_2200187 = data_V_data_28_V_dout.read();
        data_29_V_reg_2200203 = data_V_data_29_V_dout.read();
        data_30_V_reg_2200219 = data_V_data_30_V_dout.read();
        data_31_V_reg_2200234 = data_V_data_31_V_dout.read();
        data_5_V_reg_2199825 = data_V_data_5_V_dout.read();
        data_6_V_reg_2199839 = data_V_data_6_V_dout.read();
        data_7_V_reg_2199856 = data_V_data_7_V_dout.read();
        data_8_V_reg_2199872 = data_V_data_8_V_dout.read();
        data_9_V_reg_2199888 = data_V_data_9_V_dout.read();
        lshr_ln708_39_reg_2200445 = data_V_data_3_V_dout.read().range(7, 1);
        lshr_ln708_41_reg_2200489 = data_V_data_5_V_dout.read().range(7, 1);
        lshr_ln708_42_reg_2200494 = data_V_data_5_V_dout.read().range(7, 2);
        lshr_ln708_43_reg_2200499 = data_V_data_6_V_dout.read().range(7, 3);
        lshr_ln708_44_reg_2200504 = data_V_data_6_V_dout.read().range(7, 1);
        lshr_ln708_45_reg_2200509 = data_V_data_11_V_dout.read().range(7, 4);
        lshr_ln708_48_reg_2200514 = data_V_data_14_V_dout.read().range(7, 5);
        lshr_ln708_49_reg_2200524 = data_V_data_16_V_dout.read().range(7, 2);
        lshr_ln708_53_reg_2200529 = data_V_data_20_V_dout.read().range(7, 2);
        lshr_ln708_54_reg_2200534 = data_V_data_22_V_dout.read().range(7, 2);
        lshr_ln708_55_reg_2200539 = data_V_data_22_V_dout.read().range(7, 5);
        lshr_ln708_56_reg_2200544 = data_V_data_22_V_dout.read().range(7, 1);
        lshr_ln708_58_reg_2200554 = data_V_data_26_V_dout.read().range(7, 5);
        lshr_ln708_59_reg_2200559 = data_V_data_27_V_dout.read().range(7, 1);
        lshr_ln708_60_reg_2200564 = data_V_data_27_V_dout.read().range(7, 5);
        lshr_ln708_61_reg_2200569 = data_V_data_28_V_dout.read().range(7, 4);
        lshr_ln708_63_reg_2200574 = data_V_data_29_V_dout.read().range(7, 5);
        lshr_ln708_65_reg_2200579 = data_V_data_31_V_dout.read().range(7, 1);
        tmp_385_reg_2200280 = add_ln1118_57_fu_2171241_p2.read().range(12, 5);
        tmp_386_reg_2200285 = mul_ln708_176_fu_2607_p2.read().range(14, 5);
        tmp_387_reg_2200295 = mul_ln708_177_fu_2421_p2.read().range(14, 5);
        tmp_388_reg_2200300 = mul_ln708_178_fu_2405_p2.read().range(14, 5);
        tmp_391_reg_2200330 = mul_ln1118_369_fu_2398_p2.read().range(12, 5);
        tmp_394_reg_2200350 = mul_ln708_185_fu_2349_p2.read().range(14, 5);
        tmp_395_reg_2200355 = mul_ln708_186_fu_1709_p2.read().range(14, 5);
        tmp_396_reg_2200365 = mul_ln708_187_fu_2294_p2.read().range(14, 5);
        tmp_399_reg_2200370 = mul_ln708_188_fu_1807_p2.read().range(14, 5);
        tmp_401_reg_2200380 = mul_ln708_190_fu_1943_p2.read().range(14, 5);
        tmp_402_reg_2200385 = mul_ln708_191_fu_2530_p2.read().range(14, 5);
        tmp_408_reg_2200418 = mul_ln708_193_fu_1848_p2.read().range(14, 5);
        tmp_417_reg_2200440 = mul_ln708_198_fu_1744_p2.read().range(14, 5);
        tmp_429_reg_2200470 = mul_ln708_205_fu_2076_p2.read().range(14, 5);
        tmp_546_reg_2200519 = data_V_data_15_V_dout.read().range(7, 3);
        tmp_627_reg_2200549 = data_V_data_23_V_dout.read().range(7, 3);
        tmp_data_V_7_0_reg_2199764 = data_V_data_0_V_dout.read();
        tmp_data_V_7_1_reg_2199772 = data_V_data_1_V_dout.read();
        tmp_data_V_7_2_reg_2199784 = data_V_data_2_V_dout.read();
        tmp_data_V_7_3_reg_2199797 = data_V_data_3_V_dout.read();
        tmp_data_V_7_4_reg_2199812 = data_V_data_4_V_dout.read();
        trunc_ln1118_20_reg_2200484 = mul_ln708_210_fu_2149_p2.read().range(14, 5);
        trunc_ln203_12_reg_2200340 = mul_ln708_184_fu_2369_p2.read().range(14, 5);
        trunc_ln203_6_reg_2200270 = mul_ln708_175_fu_2097_p2.read().range(14, 5);
        trunc_ln203_8_reg_2200310 = mul_ln708_180_fu_2445_p2.read().range(14, 5);
        trunc_ln203_9_reg_2200320 = mul_ln708_182_fu_2341_p2.read().range(14, 5);
        trunc_ln708_647_reg_2200290 = mul_ln1118_367_fu_2207_p2.read().range(13, 5);
        trunc_ln708_648_reg_2200305 = sub_ln1118_275_fu_2171323_p2.read().range(15, 5);
        trunc_ln708_649_reg_2200315 = mul_ln1118_368_fu_2509_p2.read().range(14, 5);
        trunc_ln708_650_reg_2200325 = sub_ln1118_276_fu_2171383_p2.read().range(11, 5);
        trunc_ln708_656_reg_2200335 = sub_ln1118_279_fu_2171471_p2.read().range(13, 5);
        trunc_ln708_658_reg_2200345 = mul_ln1118_375_fu_2183_p2.read().range(14, 5);
        trunc_ln708_662_reg_2200360 = mul_ln1118_376_fu_2030_p2.read().range(13, 5);
        trunc_ln708_667_reg_2200375 = mul_ln1118_380_fu_1821_p2.read().range(14, 5);
        trunc_ln708_675_reg_2200390 = mul_ln1118_384_fu_2181_p2.read().range(13, 5);
        trunc_ln708_676_reg_2200407 = mul_ln1118_385_fu_2601_p2.read().range(15, 5);
        trunc_ln708_682_reg_2200412 = mul_ln1118_389_fu_1700_p2.read().range(15, 5);
        trunc_ln708_695_reg_2200423 = mul_ln1118_398_fu_2474_p2.read().range(13, 5);
        trunc_ln708_704_reg_2200450 = mul_ln1118_401_fu_1866_p2.read().range(13, 5);
        trunc_ln708_s_reg_2200265 = mul_ln1118_fu_2235_p2.read().range(14, 5);
        trunc_ln_reg_2200255 = mul_ln708_fu_2242_p2.read().range(14, 5);
        zext_ln1116_31_reg_2200395 = zext_ln1116_31_fu_2171717_p1.read();
        zext_ln1118_527_reg_2200249 = zext_ln1118_527_fu_2171171_p1.read();
        zext_ln1118_531_reg_2200260 = zext_ln1118_531_fu_2171205_p1.read();
        zext_ln1118_534_reg_2200275 = zext_ln1118_534_fu_2171237_p1.read();
        zext_ln1118_575_reg_2200428 = zext_ln1118_575_fu_2171871_p1.read();
        zext_ln1118_589_reg_2200456 = zext_ln1118_589_fu_2171950_p1.read();
        zext_ln1118_591_reg_2200464 = zext_ln1118_591_fu_2171957_p1.read();
        zext_ln1118_610_reg_2200475 = zext_ln1118_610_fu_2172018_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_reg_2199755_pp0_iter1_reg.read()))) {
        add_ln703_1155_reg_2200781 = add_ln703_1155_fu_2191690_p2.read();
        add_ln703_1158_reg_2200786 = add_ln703_1158_fu_2191712_p2.read();
        add_ln703_1196_reg_2200791 = add_ln703_1196_fu_2192023_p2.read();
        add_ln703_1197_reg_2200796 = add_ln703_1197_fu_2192029_p2.read();
        add_ln703_1198_reg_2200801 = add_ln703_1198_fu_2192035_p2.read();
        add_ln703_1204_reg_2200806 = add_ln703_1204_fu_2192073_p2.read();
        add_ln703_1206_reg_2200811 = add_ln703_1206_fu_2192089_p2.read();
        add_ln703_1225_reg_2200816 = add_ln703_1225_fu_2192241_p2.read();
        add_ln703_1227_reg_2200821 = add_ln703_1227_fu_2192257_p2.read();
        add_ln703_1229_reg_2200826 = add_ln703_1229_fu_2192273_p2.read();
        add_ln703_1235_reg_2200831 = add_ln703_1235_fu_2192319_p2.read();
        add_ln703_1240_reg_2200836 = add_ln703_1240_fu_2192361_p2.read();
        add_ln703_1263_reg_2200841 = add_ln703_1263_fu_2192555_p2.read();
        add_ln703_1271_reg_2200846 = add_ln703_1271_fu_2192619_p2.read();
        add_ln703_1277_reg_2200851 = add_ln703_1277_fu_2192671_p2.read();
        add_ln703_1279_reg_2200856 = add_ln703_1279_fu_2192687_p2.read();
        add_ln703_1293_reg_2200861 = add_ln703_1293_fu_2192801_p2.read();
        add_ln703_1300_reg_2200866 = add_ln703_1300_fu_2192863_p2.read();
        add_ln703_1308_reg_2200871 = add_ln703_1308_fu_2192927_p2.read();
        add_ln703_1312_reg_2200876 = add_ln703_1312_fu_2192953_p2.read();
        add_ln703_1314_reg_2200881 = add_ln703_1314_fu_2192959_p2.read();
        add_ln703_1315_reg_2200886 = add_ln703_1315_fu_2192965_p2.read();
        add_ln703_1320_reg_2200891 = add_ln703_1320_fu_2193001_p2.read();
        add_ln703_1322_reg_2200896 = add_ln703_1322_fu_2193007_p2.read();
        add_ln703_1324_reg_2200901 = add_ln703_1324_fu_2193023_p2.read();
        add_ln703_1329_reg_2200906 = add_ln703_1329_fu_2193059_p2.read();
        add_ln703_1333_reg_2200911 = add_ln703_1333_fu_2193075_p2.read();
        add_ln703_1338_reg_2200916 = add_ln703_1338_fu_2193107_p2.read();
        add_ln703_1342_reg_2200921 = add_ln703_1342_fu_2193123_p2.read();
        add_ln703_1347_reg_2200926 = add_ln703_1347_fu_2193155_p2.read();
        add_ln703_1349_reg_2200931 = add_ln703_1349_fu_2193161_p2.read();
        add_ln703_1350_reg_2200936 = add_ln703_1350_fu_2193167_p2.read();
        add_ln703_1354_reg_2200941 = add_ln703_1354_fu_2193193_p2.read();
        add_ln703_1356_reg_2200946 = add_ln703_1356_fu_2193199_p2.read();
        add_ln703_1358_reg_2200951 = add_ln703_1358_fu_2193215_p2.read();
        add_ln703_1363_reg_2200956 = add_ln703_1363_fu_2193251_p2.read();
        add_ln703_1366_reg_2200961 = add_ln703_1366_fu_2193257_p2.read();
        add_ln703_1370_reg_2200966 = add_ln703_1370_fu_2193283_p2.read();
        add_ln703_1372_reg_2200971 = add_ln703_1372_fu_2193289_p2.read();
        add_ln703_1373_reg_2200976 = add_ln703_1373_fu_2193295_p2.read();
        add_ln703_1379_reg_2200981 = add_ln703_1379_fu_2193331_p2.read();
        add_ln703_1381_reg_2200986 = add_ln703_1381_fu_2193337_p2.read();
        add_ln703_1383_reg_2200991 = add_ln703_1383_fu_2193353_p2.read();
        add_ln703_1388_reg_2200996 = add_ln703_1388_fu_2193381_p2.read();
        add_ln703_1390_reg_2201001 = add_ln703_1390_fu_2193387_p2.read();
        add_ln703_1391_reg_2201006 = add_ln703_1391_fu_2193393_p2.read();
        add_ln703_1396_reg_2201011 = add_ln703_1396_fu_2193429_p2.read();
        add_ln703_1398_reg_2201016 = add_ln703_1398_fu_2193435_p2.read();
        add_ln703_1400_reg_2201021 = add_ln703_1400_fu_2193451_p2.read();
        add_ln703_1406_reg_2201026 = add_ln703_1406_fu_2193497_p2.read();
        add_ln703_1409_reg_2201031 = add_ln703_1409_fu_2193503_p2.read();
        add_ln703_1414_reg_2201036 = add_ln703_1414_fu_2193539_p2.read();
        add_ln703_1416_reg_2201041 = add_ln703_1416_fu_2193545_p2.read();
        add_ln703_1417_reg_2201046 = add_ln703_1417_fu_2193551_p2.read();
        add_ln703_1422_reg_2201051 = add_ln703_1422_fu_2193583_p2.read();
        add_ln703_1426_reg_2201056 = add_ln703_1426_fu_2193599_p2.read();
        add_ln703_1431_reg_2201061 = add_ln703_1431_fu_2193635_p2.read();
        add_ln703_1435_reg_2201066 = add_ln703_1435_fu_2193651_p2.read();
        add_ln703_1440_reg_2201071 = add_ln703_1440_fu_2193687_p2.read();
        add_ln703_1444_reg_2201076 = add_ln703_1444_fu_2193703_p2.read();
        add_ln703_1450_reg_2201081 = add_ln703_1450_fu_2193745_p2.read();
        add_ln703_1454_reg_2201086 = add_ln703_1454_fu_2193761_p2.read();
        add_ln703_1460_reg_2201091 = add_ln703_1460_fu_2193803_p2.read();
        add_ln703_1462_reg_2201096 = add_ln703_1462_fu_2193809_p2.read();
        add_ln703_1464_reg_2201101 = add_ln703_1464_fu_2193825_p2.read();
        add_ln703_1469_reg_2201106 = add_ln703_1469_fu_2193861_p2.read();
        add_ln703_1472_reg_2201111 = add_ln703_1472_fu_2193877_p2.read();
        add_ln703_1474_reg_2201116 = add_ln703_1474_fu_2193889_p2.read();
        add_ln703_1480_reg_2201121 = add_ln703_1480_fu_2193931_p2.read();
        add_ln703_1482_reg_2201126 = add_ln703_1482_fu_2193937_p2.read();
        add_ln703_1484_reg_2201131 = add_ln703_1484_fu_2193953_p2.read();
        add_ln703_1490_reg_2201136 = add_ln703_1490_fu_2193999_p2.read();
        add_ln703_1496_reg_2201141 = add_ln703_1496_fu_2194041_p2.read();
        add_ln703_1501_reg_2201146 = add_ln703_1501_fu_2194087_p2.read();
        add_ln703_1505_reg_2201151 = add_ln703_1505_fu_2194103_p2.read();
        add_ln703_1510_reg_2201156 = add_ln703_1510_fu_2194135_p2.read();
        add_ln703_1513_reg_2201161 = add_ln703_1513_fu_2194141_p2.read();
        add_ln703_1518_reg_2201166 = add_ln703_1518_fu_2194177_p2.read();
        add_ln703_1521_reg_2201171 = add_ln703_1521_fu_2194193_p2.read();
        add_ln703_1523_reg_2201176 = add_ln703_1523_fu_2194209_p2.read();
        add_ln703_1530_reg_2201181 = add_ln703_1530_fu_2194261_p2.read();
        add_ln703_1532_reg_2201186 = add_ln703_1532_fu_2194267_p2.read();
        add_ln703_1534_reg_2201191 = add_ln703_1534_fu_2194283_p2.read();
        add_ln703_1539_reg_2201196 = add_ln703_1539_fu_2194311_p2.read();
        add_ln703_1543_reg_2201201 = add_ln703_1543_fu_2194327_p2.read();
        add_ln703_1548_reg_2201206 = add_ln703_1548_fu_2194363_p2.read();
        add_ln703_1550_reg_2201211 = add_ln703_1550_fu_2194369_p2.read();
        add_ln703_1552_reg_2201216 = add_ln703_1552_fu_2194385_p2.read();
        add_ln703_1558_reg_2201221 = add_ln703_1558_fu_2194427_p2.read();
        add_ln703_1560_reg_2201226 = add_ln703_1560_fu_2194433_p2.read();
        add_ln703_1562_reg_2201231 = add_ln703_1562_fu_2194449_p2.read();
        add_ln703_1568_reg_2201236 = add_ln703_1568_fu_2194487_p2.read();
        add_ln703_1570_reg_2201241 = add_ln703_1570_fu_2194493_p2.read();
        add_ln703_1574_reg_2201246 = add_ln703_1574_fu_2194519_p2.read();
        add_ln703_1582_reg_2201251 = add_ln703_1582_fu_2194581_p2.read();
        add_ln703_1586_reg_2201256 = add_ln703_1586_fu_2194597_p2.read();
        add_ln703_1591_reg_2201261 = add_ln703_1591_fu_2194629_p2.read();
        add_ln703_1594_reg_2201266 = add_ln703_1594_fu_2194635_p2.read();
        add_ln703_1598_reg_2201271 = add_ln703_1598_fu_2194661_p2.read();
        add_ln703_1601_reg_2201276 = add_ln703_1601_fu_2194667_p2.read();
        add_ln703_1605_reg_2201281 = add_ln703_1605_fu_2194693_p2.read();
        add_ln703_1613_reg_2201286 = add_ln703_1613_fu_2194755_p2.read();
        add_ln703_1615_reg_2201291 = add_ln703_1615_fu_2194761_p2.read();
        add_ln703_1619_reg_2201296 = add_ln703_1619_fu_2194787_p2.read();
        add_ln703_1626_reg_2201301 = add_ln703_1626_fu_2194835_p2.read();
        add_ln703_1629_reg_2201306 = add_ln703_1629_fu_2194841_p2.read();
        add_ln703_1633_reg_2201311 = add_ln703_1633_fu_2194867_p2.read();
        add_ln703_1637_reg_2201316 = add_ln703_1637_fu_2194889_p2.read();
        add_ln703_1641_reg_2201321 = add_ln703_1641_fu_2194925_p2.read();
        add_ln703_1646_reg_2201326 = add_ln703_1646_fu_2194941_p2.read();
        add_ln703_1651_reg_2201331 = add_ln703_1651_fu_2194973_p2.read();
        add_ln703_1653_reg_2201336 = add_ln703_1653_fu_2194979_p2.read();
        add_ln703_1654_reg_2201341 = add_ln703_1654_fu_2194985_p2.read();
        add_ln703_1659_reg_2201346 = add_ln703_1659_fu_2195017_p2.read();
        add_ln703_1669_reg_2201351 = add_ln703_1669_fu_2195099_p2.read();
        add_ln703_1672_reg_2201356 = add_ln703_1672_fu_2195105_p2.read();
        add_ln703_1676_reg_2201361 = add_ln703_1676_fu_2195131_p2.read();
        add_ln703_1679_reg_2201366 = add_ln703_1679_fu_2195137_p2.read();
        add_ln703_1683_reg_2201371 = add_ln703_1683_fu_2195163_p2.read();
        add_ln703_1692_reg_2201376 = add_ln703_1692_fu_2195235_p2.read();
        add_ln703_1695_reg_2201381 = add_ln703_1695_fu_2195241_p2.read();
        add_ln703_1699_reg_2201386 = add_ln703_1699_fu_2195267_p2.read();
        add_ln703_1703_reg_2201391 = add_ln703_1703_fu_2195293_p2.read();
        add_ln703_1707_reg_2201396 = add_ln703_1707_fu_2195329_p2.read();
        add_ln703_1710_reg_2201401 = add_ln703_1710_fu_2195335_p2.read();
        add_ln703_1713_reg_2201406 = add_ln703_1713_fu_2195351_p2.read();
        add_ln703_1720_reg_2201411 = add_ln703_1720_fu_2195399_p2.read();
        add_ln703_1723_reg_2201416 = add_ln703_1723_fu_2195405_p2.read();
        add_ln703_1727_reg_2201421 = add_ln703_1727_fu_2195431_p2.read();
        add_ln703_1735_reg_2201426 = add_ln703_1735_fu_2195497_p2.read();
        add_ln703_1737_reg_2201431 = add_ln703_1737_fu_2195503_p2.read();
        add_ln703_1740_reg_2201436 = add_ln703_1740_fu_2195519_p2.read();
        add_ln703_1747_reg_2201441 = add_ln703_1747_fu_2195575_p2.read();
        add_ln703_1750_reg_2201446 = add_ln703_1750_fu_2195581_p2.read();
        add_ln703_1754_reg_2201451 = add_ln703_1754_fu_2195607_p2.read();
        add_ln703_1762_reg_2201456 = add_ln703_1762_fu_2195669_p2.read();
        add_ln703_1767_reg_2201461 = add_ln703_1767_fu_2195685_p2.read();
        add_ln703_1774_reg_2201466 = add_ln703_1774_fu_2195733_p2.read();
        add_ln703_1777_reg_2201471 = add_ln703_1777_fu_2195739_p2.read();
        add_ln703_1781_reg_2201476 = add_ln703_1781_fu_2195761_p2.read();
        add_ln703_1785_reg_2201481 = add_ln703_1785_fu_2195787_p2.read();
        add_ln703_1789_reg_2201486 = add_ln703_1789_fu_2195823_p2.read();
        add_ln703_1793_reg_2201491 = add_ln703_1793_fu_2195829_p2.read();
        add_ln703_1797_reg_2201496 = add_ln703_1797_fu_2195855_p2.read();
        add_ln703_1805_reg_2201501 = add_ln703_1805_fu_2195921_p2.read();
        add_ln703_1807_reg_2201506 = add_ln703_1807_fu_2195927_p2.read();
        add_ln703_1811_reg_2201511 = add_ln703_1811_fu_2195953_p2.read();
        add_ln703_1819_reg_2201516 = add_ln703_1819_fu_2196019_p2.read();
        add_ln703_1821_reg_2201521 = add_ln703_1821_fu_2196025_p2.read();
        add_ln703_1825_reg_2201526 = add_ln703_1825_fu_2196051_p2.read();
        add_ln703_1832_reg_2201531 = add_ln703_1832_fu_2196107_p2.read();
        add_ln703_1834_reg_2201536 = add_ln703_1834_fu_2196113_p2.read();
        add_ln703_1837_reg_2201541 = add_ln703_1837_fu_2196129_p2.read();
        add_ln703_1844_reg_2201546 = add_ln703_1844_fu_2196181_p2.read();
        add_ln703_1847_reg_2201551 = add_ln703_1847_fu_2196187_p2.read();
        add_ln703_1852_reg_2201556 = add_ln703_1852_fu_2196223_p2.read();
        add_ln703_1861_reg_2201561 = add_ln703_1861_fu_2196291_p2.read();
        add_ln703_1864_reg_2201566 = add_ln703_1864_fu_2196297_p2.read();
        add_ln703_1868_reg_2201571 = add_ln703_1868_fu_2196323_p2.read();
        add_ln703_1877_reg_2201576 = add_ln703_1877_fu_2196395_p2.read();
        add_ln703_1879_reg_2201581 = add_ln703_1879_fu_2196401_p2.read();
        add_ln703_1882_reg_2201586 = add_ln703_1882_fu_2196413_p2.read();
        add_ln703_1889_reg_2201591 = add_ln703_1889_fu_2196465_p2.read();
        add_ln703_1892_reg_2201596 = add_ln703_1892_fu_2196471_p2.read();
        add_ln703_1897_reg_2201601 = add_ln703_1897_fu_2196507_p2.read();
        add_ln703_1907_reg_2201606 = add_ln703_1907_fu_2196589_p2.read();
        add_ln703_1909_reg_2201611 = add_ln703_1909_fu_2196595_p2.read();
        add_ln703_1913_reg_2201616 = add_ln703_1913_fu_2196621_p2.read();
        add_ln703_1921_reg_2201621 = add_ln703_1921_fu_2196687_p2.read();
        add_ln703_1923_reg_2201626 = add_ln703_1923_fu_2196693_p2.read();
        add_ln703_1927_reg_2201631 = add_ln703_1927_fu_2196719_p2.read();
        add_ln703_1935_reg_2201636 = add_ln703_1935_fu_2196785_p2.read();
        add_ln703_1937_reg_2201641 = add_ln703_1937_fu_2196791_p2.read();
        add_ln703_1941_reg_2201646 = add_ln703_1941_fu_2196817_p2.read();
        add_ln703_1948_reg_2201651 = add_ln703_1948_fu_2196873_p2.read();
        add_ln703_1950_reg_2201656 = add_ln703_1950_fu_2196879_p2.read();
        add_ln703_1953_reg_2201661 = add_ln703_1953_fu_2196895_p2.read();
        add_ln703_1960_reg_2201666 = add_ln703_1960_fu_2196947_p2.read();
        add_ln703_1962_reg_2201671 = add_ln703_1962_fu_2196953_p2.read();
        add_ln703_1966_reg_2201676 = add_ln703_1966_fu_2196975_p2.read();
        add_ln703_1974_reg_2201681 = add_ln703_1974_fu_2197033_p2.read();
        add_ln703_1976_reg_2201686 = add_ln703_1976_fu_2197039_p2.read();
        add_ln703_1979_reg_2201691 = add_ln703_1979_fu_2197055_p2.read();
        add_ln703_1986_reg_2201696 = add_ln703_1986_fu_2197107_p2.read();
        add_ln703_1988_reg_2201701 = add_ln703_1988_fu_2197113_p2.read();
        add_ln703_1992_reg_2201706 = add_ln703_1992_fu_2197139_p2.read();
        add_ln703_2000_reg_2201711 = add_ln703_2000_fu_2197201_p2.read();
        add_ln703_2002_reg_2201716 = add_ln703_2002_fu_2197207_p2.read();
        add_ln703_2005_reg_2201721 = add_ln703_2005_fu_2197223_p2.read();
        add_ln703_2012_reg_2201726 = add_ln703_2012_fu_2197279_p2.read();
        add_ln703_2015_reg_2201731 = add_ln703_2015_fu_2197285_p2.read();
        add_ln703_2019_reg_2201736 = add_ln703_2019_fu_2197311_p2.read();
        add_ln703_2027_reg_2201741 = add_ln703_2027_fu_2197377_p2.read();
        tmp_540_reg_2200695 = mul_ln708_255_fu_2402_p2.read().range(14, 5);
        tmp_556_reg_2200715 = mul_ln708_264_fu_2498_p2.read().range(14, 5);
        trunc_ln708_1005_reg_2200760 = mul_ln1118_621_fu_1619_p2.read().range(15, 5);
        trunc_ln708_1031_reg_2200765 = mul_ln1118_640_fu_2272_p2.read().range(15, 5);
        trunc_ln708_1061_reg_2200770 = mul_ln1118_656_fu_1944_p2.read().range(15, 5);
        trunc_ln708_1072_reg_2200775 = sub_ln1118_474_fu_2186395_p2.read().range(15, 5);
        trunc_ln708_767_reg_2200644 = mul_ln1118_440_fu_2093_p2.read().range(15, 5);
        trunc_ln708_769_reg_2200649 = sub_ln1118_339_fu_2175861_p2.read().range(13, 5);
        trunc_ln708_798_reg_2200659 = mul_ln1118_461_fu_2520_p2.read().range(15, 5);
        trunc_ln708_804_reg_2200664 = mul_ln1118_465_fu_1753_p2.read().range(15, 5);
        trunc_ln708_811_reg_2200670 = sub_ln1118_361_fu_2177256_p2.read().range(15, 5);
        trunc_ln708_816_reg_2200675 = sub_ln1118_364_fu_2177443_p2.read().range(13, 5);
        trunc_ln708_846_reg_2200680 = sub_ln1118_375_fu_2178299_p2.read().range(15, 5);
        trunc_ln708_854_reg_2200685 = mul_ln1118_504_fu_2031_p2.read().range(15, 5);
        trunc_ln708_867_reg_2200690 = sub_ln1118_383_fu_2178926_p2.read().range(15, 5);
        trunc_ln708_913_reg_2200700 = mul_ln1118_556_fu_2267_p2.read().range(15, 5);
        trunc_ln708_917_reg_2200705 = mul_ln1118_561_fu_2608_p2.read().range(15, 5);
        trunc_ln708_919_reg_2200710 = mul_ln1118_562_fu_2153_p2.read().range(15, 5);
        trunc_ln708_921_reg_2200720 = sub_ln1118_403_fu_2181152_p2.read().range(15, 5);
        trunc_ln708_926_reg_2200725 = mul_ln1118_567_fu_2087_p2.read().range(15, 5);
        trunc_ln708_931_reg_2200730 = sub_ln1118_407_fu_2181491_p2.read().range(15, 5);
        trunc_ln708_936_reg_2200735 = sub_ln1118_412_fu_2181693_p2.read().range(15, 5);
        trunc_ln708_937_reg_2200740 = mul_ln1118_575_fu_1869_p2.read().range(15, 5);
        trunc_ln708_939_reg_2200745 = mul_ln1118_576_fu_1665_p2.read().range(15, 5);
        trunc_ln708_986_reg_2200750 = sub_ln1118_436_fu_2183543_p2.read().range(15, 5);
        trunc_ln708_992_reg_2200755 = mul_ln1118_612_fu_2503_p2.read().range(15, 5);
        zext_ln708_54_reg_2200654 = zext_ln708_54_fu_2176495_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln89_reg_2199755 = icmp_ln89_fu_2171019_p2.read();
        icmp_ln89_reg_2199755_pp0_iter1_reg = icmp_ln89_reg_2199755.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln89_reg_2199755_pp0_iter2_reg = icmp_ln89_reg_2199755_pp0_iter1_reg.read();
    }
}

void pointwise_conv_1d_cl_array_array_ap_fixed_22_7_5_3_0_32u_config20_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln89_fu_2171019_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln89_fu_2171019_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

