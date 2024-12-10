#include "pointwise_conv_1d_cl_array_array_ap_fixed_22_7_5_3_0_32u_config21_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_cl_array_array_ap_fixed_22_7_5_3_0_32u_config21_s::thread_ap_clk_no_reset_() {
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_fu_2064358_p2.read()))) {
        i_iw_0_reg_1586 = i_iw_fu_2064364_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_iw_0_reg_1586 = ap_const_lv5_0;
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
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_reg_2092854_pp0_iter1_reg.read()))) {
        add_ln703_1002_reg_2095107 = add_ln703_1002_fu_2090369_p2.read();
        add_ln703_1009_reg_2095112 = add_ln703_1009_fu_2090421_p2.read();
        add_ln703_1012_reg_2095117 = add_ln703_1012_fu_2090427_p2.read();
        add_ln703_1017_reg_2095122 = add_ln703_1017_fu_2090463_p2.read();
        add_ln703_152_reg_2094142 = add_ln703_152_fu_2084936_p2.read();
        add_ln703_153_reg_2094147 = add_ln703_153_fu_2084942_p2.read();
        add_ln703_161_reg_2094152 = add_ln703_161_fu_2085000_p2.read();
        add_ln703_163_reg_2094157 = add_ln703_163_fu_2085016_p2.read();
        add_ln703_182_reg_2094162 = add_ln703_182_fu_2085168_p2.read();
        add_ln703_183_reg_2094167 = add_ln703_183_fu_2085174_p2.read();
        add_ln703_185_reg_2094172 = add_ln703_185_fu_2085180_p2.read();
        add_ln703_186_reg_2094177 = add_ln703_186_fu_2085186_p2.read();
        add_ln703_189_reg_2094182 = add_ln703_189_fu_2085202_p2.read();
        add_ln703_191_reg_2094187 = add_ln703_191_fu_2085218_p2.read();
        add_ln703_198_reg_2094192 = add_ln703_198_fu_2085270_p2.read();
        add_ln703_204_reg_2094197 = add_ln703_204_fu_2085322_p2.read();
        add_ln703_209_reg_2094202 = add_ln703_209_fu_2085368_p2.read();
        add_ln703_220_reg_2094207 = add_ln703_220_fu_2085462_p2.read();
        add_ln703_235_reg_2094212 = add_ln703_235_fu_2085585_p2.read();
        add_ln703_237_reg_2094217 = add_ln703_237_fu_2085597_p2.read();
        add_ln703_240_reg_2094222 = add_ln703_240_fu_2085613_p2.read();
        add_ln703_242_reg_2094227 = add_ln703_242_fu_2085629_p2.read();
        add_ln703_255_reg_2094232 = add_ln703_255_fu_2085730_p2.read();
        add_ln703_258_reg_2094237 = add_ln703_258_fu_2085752_p2.read();
        add_ln703_274_reg_2094242 = add_ln703_274_fu_2085875_p2.read();
        add_ln703_283_reg_2094247 = add_ln703_283_fu_2085950_p2.read();
        add_ln703_286_reg_2094252 = add_ln703_286_fu_2085972_p2.read();
        add_ln703_297_reg_2094257 = add_ln703_297_fu_2086049_p2.read();
        add_ln703_301_reg_2094262 = add_ln703_301_fu_2086085_p2.read();
        add_ln703_304_reg_2094267 = add_ln703_304_fu_2086101_p2.read();
        add_ln703_306_reg_2094272 = add_ln703_306_fu_2086117_p2.read();
        add_ln703_315_reg_2094277 = add_ln703_315_fu_2086178_p2.read();
        add_ln703_316_reg_2094282 = add_ln703_316_fu_2086184_p2.read();
        add_ln703_320_reg_2094287 = add_ln703_320_fu_2086206_p2.read();
        add_ln703_324_reg_2094292 = add_ln703_324_fu_2086228_p2.read();
        add_ln703_328_reg_2094297 = add_ln703_328_fu_2086264_p2.read();
        add_ln703_330_reg_2094302 = add_ln703_330_fu_2086270_p2.read();
        add_ln703_331_reg_2094307 = add_ln703_331_fu_2086276_p2.read();
        add_ln703_336_reg_2094312 = add_ln703_336_fu_2086308_p2.read();
        add_ln703_338_reg_2094317 = add_ln703_338_fu_2086314_p2.read();
        add_ln703_340_reg_2094322 = add_ln703_340_fu_2086330_p2.read();
        add_ln703_345_reg_2094327 = add_ln703_345_fu_2086366_p2.read();
        add_ln703_348_reg_2094332 = add_ln703_348_fu_2086372_p2.read();
        add_ln703_352_reg_2094337 = add_ln703_352_fu_2086394_p2.read();
        add_ln703_356_reg_2094342 = add_ln703_356_fu_2086420_p2.read();
        add_ln703_360_reg_2094347 = add_ln703_360_fu_2086452_p2.read();
        add_ln703_362_reg_2094352 = add_ln703_362_fu_2086458_p2.read();
        add_ln703_366_reg_2094357 = add_ln703_366_fu_2086480_p2.read();
        add_ln703_368_reg_2094362 = add_ln703_368_fu_2086486_p2.read();
        add_ln703_370_reg_2094367 = add_ln703_370_fu_2086502_p2.read();
        add_ln703_376_reg_2094372 = add_ln703_376_fu_2086548_p2.read();
        add_ln703_380_reg_2094377 = add_ln703_380_fu_2086564_p2.read();
        add_ln703_386_reg_2094382 = add_ln703_386_fu_2086606_p2.read();
        add_ln703_390_reg_2094387 = add_ln703_390_fu_2086622_p2.read();
        add_ln703_396_reg_2094392 = add_ln703_396_fu_2086664_p2.read();
        add_ln703_402_reg_2094397 = add_ln703_402_fu_2086702_p2.read();
        add_ln703_407_reg_2094402 = add_ln703_407_fu_2086744_p2.read();
        add_ln703_409_reg_2094407 = add_ln703_409_fu_2086750_p2.read();
        add_ln703_411_reg_2094412 = add_ln703_411_fu_2086766_p2.read();
        add_ln703_416_reg_2094417 = add_ln703_416_fu_2086802_p2.read();
        add_ln703_421_reg_2094422 = add_ln703_421_fu_2086830_p2.read();
        add_ln703_425_reg_2094427 = add_ln703_425_fu_2086862_p2.read();
        add_ln703_429_reg_2094432 = add_ln703_429_fu_2086878_p2.read();
        add_ln703_434_reg_2094437 = add_ln703_434_fu_2086914_p2.read();
        add_ln703_437_reg_2094442 = add_ln703_437_fu_2086920_p2.read();
        add_ln703_441_reg_2094447 = add_ln703_441_fu_2086946_p2.read();
        add_ln703_443_reg_2094452 = add_ln703_443_fu_2086952_p2.read();
        add_ln703_446_reg_2094457 = add_ln703_446_fu_2086968_p2.read();
        add_ln703_453_reg_2094462 = add_ln703_453_fu_2087020_p2.read();
        add_ln703_457_reg_2094467 = add_ln703_457_fu_2087036_p2.read();
        add_ln703_463_reg_2094472 = add_ln703_463_fu_2087082_p2.read();
        add_ln703_465_reg_2094477 = add_ln703_465_fu_2087088_p2.read();
        add_ln703_468_reg_2094482 = add_ln703_468_fu_2087104_p2.read();
        add_ln703_474_reg_2094487 = add_ln703_474_fu_2087150_p2.read();
        add_ln703_478_reg_2094492 = add_ln703_478_fu_2087166_p2.read();
        add_ln703_484_reg_2094497 = add_ln703_484_fu_2087212_p2.read();
        add_ln703_488_reg_2094502 = add_ln703_488_fu_2087234_p2.read();
        add_ln703_491_reg_2094507 = add_ln703_491_fu_2087260_p2.read();
        add_ln703_493_reg_2094512 = add_ln703_493_fu_2087266_p2.read();
        add_ln703_495_reg_2094517 = add_ln703_495_fu_2087278_p2.read();
        add_ln703_500_reg_2094522 = add_ln703_500_fu_2087314_p2.read();
        add_ln703_502_reg_2094527 = add_ln703_502_fu_2087320_p2.read();
        add_ln703_505_reg_2094532 = add_ln703_505_fu_2087336_p2.read();
        add_ln703_511_reg_2094537 = add_ln703_511_fu_2087378_p2.read();
        add_ln703_514_reg_2094542 = add_ln703_514_fu_2087384_p2.read();
        add_ln703_519_reg_2094547 = add_ln703_519_fu_2087420_p2.read();
        add_ln703_521_reg_2094552 = add_ln703_521_fu_2087426_p2.read();
        add_ln703_524_reg_2094557 = add_ln703_524_fu_2087442_p2.read();
        add_ln703_530_reg_2094562 = add_ln703_530_fu_2087484_p2.read();
        add_ln703_533_reg_2094567 = add_ln703_533_fu_2087500_p2.read();
        add_ln703_535_reg_2094572 = add_ln703_535_fu_2087516_p2.read();
        add_ln703_541_reg_2094577 = add_ln703_541_fu_2087554_p2.read();
        add_ln703_545_reg_2094582 = add_ln703_545_fu_2087570_p2.read();
        add_ln703_550_reg_2094587 = add_ln703_550_fu_2087606_p2.read();
        add_ln703_552_reg_2094592 = add_ln703_552_fu_2087612_p2.read();
        add_ln703_553_reg_2094597 = add_ln703_553_fu_2087618_p2.read();
        add_ln703_559_reg_2094602 = add_ln703_559_fu_2087654_p2.read();
        add_ln703_563_reg_2094607 = add_ln703_563_fu_2087670_p2.read();
        add_ln703_569_reg_2094612 = add_ln703_569_fu_2087716_p2.read();
        add_ln703_573_reg_2094617 = add_ln703_573_fu_2087732_p2.read();
        add_ln703_579_reg_2094622 = add_ln703_579_fu_2087770_p2.read();
        add_ln703_585_reg_2094627 = add_ln703_585_fu_2087812_p2.read();
        add_ln703_590_reg_2094632 = add_ln703_590_fu_2087858_p2.read();
        add_ln703_593_reg_2094637 = add_ln703_593_fu_2087874_p2.read();
        add_ln703_595_reg_2094642 = add_ln703_595_fu_2087890_p2.read();
        add_ln703_601_reg_2094647 = add_ln703_601_fu_2087936_p2.read();
        add_ln703_604_reg_2094652 = add_ln703_604_fu_2087952_p2.read();
        add_ln703_606_reg_2094657 = add_ln703_606_fu_2087968_p2.read();
        add_ln703_613_reg_2094662 = add_ln703_613_fu_2088020_p2.read();
        add_ln703_617_reg_2094667 = add_ln703_617_fu_2088036_p2.read();
        add_ln703_623_reg_2094672 = add_ln703_623_fu_2088078_p2.read();
        add_ln703_625_reg_2094677 = add_ln703_625_fu_2088084_p2.read();
        add_ln703_628_reg_2094682 = add_ln703_628_fu_2088096_p2.read();
        add_ln703_635_reg_2094687 = add_ln703_635_fu_2088148_p2.read();
        add_ln703_638_reg_2094692 = add_ln703_638_fu_2088154_p2.read();
        add_ln703_642_reg_2094697 = add_ln703_642_fu_2088180_p2.read();
        add_ln703_650_reg_2094702 = add_ln703_650_fu_2088242_p2.read();
        add_ln703_653_reg_2094707 = add_ln703_653_fu_2088248_p2.read();
        add_ln703_658_reg_2094712 = add_ln703_658_fu_2088284_p2.read();
        add_ln703_660_reg_2094717 = add_ln703_660_fu_2088290_p2.read();
        add_ln703_664_reg_2094722 = add_ln703_664_fu_2088316_p2.read();
        add_ln703_671_reg_2094727 = add_ln703_671_fu_2088364_p2.read();
        add_ln703_675_reg_2094732 = add_ln703_675_fu_2088380_p2.read();
        add_ln703_681_reg_2094737 = add_ln703_681_fu_2088426_p2.read();
        add_ln703_683_reg_2094742 = add_ln703_683_fu_2088432_p2.read();
        add_ln703_686_reg_2094747 = add_ln703_686_fu_2088444_p2.read();
        add_ln703_693_reg_2094752 = add_ln703_693_fu_2088492_p2.read();
        add_ln703_695_reg_2094757 = add_ln703_695_fu_2088498_p2.read();
        add_ln703_698_reg_2094762 = add_ln703_698_fu_2088514_p2.read();
        add_ln703_705_reg_2094767 = add_ln703_705_fu_2088570_p2.read();
        add_ln703_707_reg_2094772 = add_ln703_707_fu_2088576_p2.read();
        add_ln703_711_reg_2094777 = add_ln703_711_fu_2088598_p2.read();
        add_ln703_718_reg_2094782 = add_ln703_718_fu_2088654_p2.read();
        add_ln703_721_reg_2094787 = add_ln703_721_fu_2088660_p2.read();
        add_ln703_725_reg_2094792 = add_ln703_725_fu_2088686_p2.read();
        add_ln703_734_reg_2094797 = add_ln703_734_fu_2088737_p2.read();
        add_ln703_737_reg_2094802 = add_ln703_737_fu_2088743_p2.read();
        add_ln703_741_reg_2094807 = add_ln703_741_fu_2088769_p2.read();
        add_ln703_750_reg_2094812 = add_ln703_750_fu_2088845_p2.read();
        add_ln703_752_reg_2094817 = add_ln703_752_fu_2088851_p2.read();
        add_ln703_755_reg_2094822 = add_ln703_755_fu_2088867_p2.read();
        add_ln703_762_reg_2094827 = add_ln703_762_fu_2088915_p2.read();
        add_ln703_765_reg_2094832 = add_ln703_765_fu_2088921_p2.read();
        add_ln703_769_reg_2094837 = add_ln703_769_fu_2088947_p2.read();
        add_ln703_778_reg_2094842 = add_ln703_778_fu_2089019_p2.read();
        add_ln703_780_reg_2094847 = add_ln703_780_fu_2089025_p2.read();
        add_ln703_783_reg_2094852 = add_ln703_783_fu_2089041_p2.read();
        add_ln703_790_reg_2094857 = add_ln703_790_fu_2089093_p2.read();
        add_ln703_794_reg_2094862 = add_ln703_794_fu_2089109_p2.read();
        add_ln703_799_reg_2094867 = add_ln703_799_fu_2089145_p2.read();
        add_ln703_801_reg_2094872 = add_ln703_801_fu_2089151_p2.read();
        add_ln703_804_reg_2094877 = add_ln703_804_fu_2089167_p2.read();
        add_ln703_811_reg_2094882 = add_ln703_811_fu_2089223_p2.read();
        add_ln703_813_reg_2094887 = add_ln703_813_fu_2089229_p2.read();
        add_ln703_816_reg_2094892 = add_ln703_816_fu_2089241_p2.read();
        add_ln703_823_reg_2094897 = add_ln703_823_fu_2089289_p2.read();
        add_ln703_827_reg_2094902 = add_ln703_827_fu_2089301_p2.read();
        add_ln703_833_reg_2094907 = add_ln703_833_fu_2089339_p2.read();
        add_ln703_835_reg_2094912 = add_ln703_835_fu_2089345_p2.read();
        add_ln703_838_reg_2094917 = add_ln703_838_fu_2089357_p2.read();
        add_ln703_844_reg_2094922 = add_ln703_844_fu_2089399_p2.read();
        add_ln703_846_reg_2094927 = add_ln703_846_fu_2089405_p2.read();
        add_ln703_850_reg_2094932 = add_ln703_850_fu_2089431_p2.read();
        add_ln703_857_reg_2094937 = add_ln703_857_fu_2089483_p2.read();
        add_ln703_859_reg_2094942 = add_ln703_859_fu_2089489_p2.read();
        add_ln703_862_reg_2094947 = add_ln703_862_fu_2089505_p2.read();
        add_ln703_868_reg_2094952 = add_ln703_868_fu_2089547_p2.read();
        add_ln703_871_reg_2094957 = add_ln703_871_fu_2089553_p2.read();
        add_ln703_875_reg_2094962 = add_ln703_875_fu_2089579_p2.read();
        add_ln703_884_reg_2094967 = add_ln703_884_fu_2089655_p2.read();
        add_ln703_886_reg_2094972 = add_ln703_886_fu_2089661_p2.read();
        add_ln703_889_reg_2094977 = add_ln703_889_fu_2089677_p2.read();
        add_ln703_895_reg_2094982 = add_ln703_895_fu_2089723_p2.read();
        add_ln703_898_reg_2094987 = add_ln703_898_fu_2089729_p2.read();
        add_ln703_904_reg_2094992 = add_ln703_904_fu_2089765_p2.read();
        add_ln703_906_reg_2094997 = add_ln703_906_fu_2089771_p2.read();
        add_ln703_909_reg_2095002 = add_ln703_909_fu_2089787_p2.read();
        add_ln703_916_reg_2095007 = add_ln703_916_fu_2089839_p2.read();
        add_ln703_918_reg_2095012 = add_ln703_918_fu_2089845_p2.read();
        add_ln703_921_reg_2095017 = add_ln703_921_fu_2089857_p2.read();
        add_ln703_927_reg_2095022 = add_ln703_927_fu_2089899_p2.read();
        add_ln703_929_reg_2095027 = add_ln703_929_fu_2089905_p2.read();
        add_ln703_933_reg_2095032 = add_ln703_933_fu_2089931_p2.read();
        add_ln703_940_reg_2095037 = add_ln703_940_fu_2089983_p2.read();
        add_ln703_943_reg_2095042 = add_ln703_943_fu_2089989_p2.read();
        add_ln703_947_reg_2095047 = add_ln703_947_fu_2090015_p2.read();
        add_ln703_956_reg_2095052 = add_ln703_956_fu_2090091_p2.read();
        add_ln703_958_reg_2095057 = add_ln703_958_fu_2090097_p2.read();
        add_ln703_961_reg_2095062 = add_ln703_961_fu_2090113_p2.read();
        add_ln703_967_reg_2095067 = add_ln703_967_fu_2090159_p2.read();
        add_ln703_970_reg_2095072 = add_ln703_970_fu_2090165_p2.read();
        add_ln703_974_reg_2095077 = add_ln703_974_fu_2090191_p2.read();
        add_ln703_982_reg_2095082 = add_ln703_982_fu_2090249_p2.read();
        add_ln703_985_reg_2095087 = add_ln703_985_fu_2090255_p2.read();
        add_ln703_989_reg_2095092 = add_ln703_989_fu_2090281_p2.read();
        add_ln703_997_reg_2095097 = add_ln703_997_fu_2090347_p2.read();
        add_ln703_999_reg_2095102 = add_ln703_999_fu_2090353_p2.read();
        tmp_132_reg_2094015 = mul_ln708_47_fu_2232_p2.read().range(14, 5);
        tmp_160_reg_2094030 = mul_ln708_63_fu_2254_p2.read().range(14, 5);
        tmp_197_reg_2094066 = mul_ln708_85_fu_2448_p2.read().range(14, 5);
        tmp_210_reg_2094076 = mul_ln708_90_fu_2370_p2.read().range(14, 5);
        tmp_220_reg_2094081 = mul_ln708_96_fu_2110_p2.read().range(14, 5);
        tmp_221_reg_2094086 = mul_ln708_97_fu_2094_p2.read().range(14, 5);
        tmp_238_reg_2094096 = mul_ln708_102_fu_2549_p2.read().range(14, 5);
        tmp_271_reg_2094116 = mul_ln708_120_fu_1847_p2.read().range(14, 5);
        tmp_277_reg_2094121 = mul_ln708_124_fu_1851_p2.read().range(14, 5);
        trunc_ln708_265_reg_2094010 = mul_ln1118_97_fu_1862_p2.read().range(15, 5);
        trunc_ln708_295_reg_2094020 = mul_ln1118_119_fu_2403_p2.read().range(15, 5);
        trunc_ln708_298_reg_2094025 = mul_ln1118_123_fu_2501_p2.read().range(15, 5);
        trunc_ln708_312_reg_2094035 = sub_ln1118_99_fu_2072059_p2.read().range(15, 5);
        trunc_ln708_322_reg_2094040 = sub_ln1118_105_fu_2072350_p2.read().range(15, 5);
        trunc_ln708_334_reg_2094045 = sub_ln1118_109_fu_2072618_p2.read().range(15, 5);
        trunc_ln708_339_reg_2094050 = sub_ln1118_110_fu_2072886_p2.read().range(13, 5);
        trunc_ln708_358_reg_2094055 = sub_ln1118_123_fu_2073584_p2.read().range(15, 5);
        trunc_ln708_367_reg_2094061 = mul_ln1118_173_fu_2066_p2.read().range(15, 5);
        trunc_ln708_397_reg_2094071 = sub_ln1118_145_fu_2074833_p2.read().range(13, 5);
        trunc_ln708_423_reg_2094091 = sub_ln1118_159_fu_2075795_p2.read().range(13, 5);
        trunc_ln708_477_reg_2094101 = sub_ln1118_191_fu_2077519_p2.read().range(15, 5);
        trunc_ln708_498_reg_2094106 = sub_ln1118_296_fu_2078175_p2.read().range(15, 5);
        trunc_ln708_515_reg_2094111 = sub_ln1118_202_fu_2078731_p2.read().range(12, 5);
        trunc_ln708_555_reg_2094127 = mul_ln1118_297_fu_2180_p2.read().range(15, 5);
        trunc_ln708_569_reg_2094132 = mul_ln1118_306_fu_2577_p2.read().range(15, 5);
        trunc_ln708_606_reg_2094137 = mul_ln1118_328_fu_1617_p2.read().range(15, 5);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln89_reg_2092854.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln703_114_reg_2093965 = add_ln703_114_fu_2066537_p2.read();
        add_ln703_11_reg_2093885 = add_ln703_11_fu_2066377_p2.read();
        add_ln703_22_reg_2093890 = add_ln703_22_fu_2066409_p2.read();
        add_ln703_230_reg_2093970 = add_ln703_230_fu_2066543_p2.read();
        add_ln703_231_reg_2093975 = add_ln703_231_fu_2066549_p2.read();
        add_ln703_247_reg_2093980 = add_ln703_247_fu_2066555_p2.read();
        add_ln703_25_reg_2093895 = add_ln703_25_fu_2066425_p2.read();
        add_ln703_262_reg_2093985 = add_ln703_262_fu_2066561_p2.read();
        add_ln703_277_reg_2093990 = add_ln703_277_fu_2066567_p2.read();
        add_ln703_28_reg_2093900 = add_ln703_28_fu_2066441_p2.read();
        add_ln703_291_reg_2093995 = add_ln703_291_fu_2066573_p2.read();
        add_ln703_30_reg_2093905 = add_ln703_30_fu_2066453_p2.read();
        add_ln703_311_reg_2094000 = add_ln703_311_fu_2066579_p2.read();
        add_ln703_37_reg_2093910 = add_ln703_37_fu_2066459_p2.read();
        add_ln703_46_reg_2093915 = add_ln703_46_fu_2066465_p2.read();
        add_ln703_48_reg_2093920 = add_ln703_48_fu_2066471_p2.read();
        add_ln703_53_reg_2093925 = add_ln703_53_fu_2066477_p2.read();
        add_ln703_56_reg_2093930 = add_ln703_56_fu_2066483_p2.read();
        add_ln703_68_reg_2093935 = add_ln703_68_fu_2066495_p2.read();
        add_ln703_70_reg_2093940 = add_ln703_70_fu_2066507_p2.read();
        add_ln703_732_reg_2094005 = add_ln703_732_fu_2066591_p2.read();
        add_ln703_75_reg_2093945 = add_ln703_75_fu_2066513_p2.read();
        add_ln703_79_reg_2093950 = add_ln703_79_fu_2066519_p2.read();
        add_ln703_89_reg_2093955 = add_ln703_89_fu_2066525_p2.read();
        add_ln703_97_reg_2093960 = add_ln703_97_fu_2066531_p2.read();
        data_10_V_reg_2092983 = data_V_data_10_V_dout.read();
        data_11_V_reg_2092998 = data_V_data_11_V_dout.read();
        data_12_V_reg_2093012 = data_V_data_12_V_dout.read();
        data_13_V_reg_2093025 = data_V_data_13_V_dout.read();
        data_14_V_reg_2093040 = data_V_data_14_V_dout.read();
        data_15_V_reg_2093054 = data_V_data_15_V_dout.read();
        data_16_V_reg_2093070 = data_V_data_16_V_dout.read();
        data_17_V_reg_2093085 = data_V_data_17_V_dout.read();
        data_18_V_reg_2093101 = data_V_data_18_V_dout.read();
        data_19_V_reg_2093117 = data_V_data_19_V_dout.read();
        data_20_V_reg_2093131 = data_V_data_20_V_dout.read();
        data_21_V_reg_2093146 = data_V_data_21_V_dout.read();
        data_22_V_reg_2093162 = data_V_data_22_V_dout.read();
        data_23_V_reg_2093178 = data_V_data_23_V_dout.read();
        data_24_V_reg_2093192 = data_V_data_24_V_dout.read();
        data_25_V_reg_2093207 = data_V_data_25_V_dout.read();
        data_26_V_reg_2093222 = data_V_data_26_V_dout.read();
        data_27_V_reg_2093238 = data_V_data_27_V_dout.read();
        data_28_V_reg_2093253 = data_V_data_28_V_dout.read();
        data_29_V_reg_2093268 = data_V_data_29_V_dout.read();
        data_30_V_reg_2093282 = data_V_data_30_V_dout.read();
        data_31_V_reg_2093295 = data_V_data_31_V_dout.read();
        data_5_V_reg_2092913 = data_V_data_5_V_dout.read();
        data_6_V_reg_2092927 = data_V_data_6_V_dout.read();
        data_7_V_reg_2092940 = data_V_data_7_V_dout.read();
        data_8_V_reg_2092955 = data_V_data_8_V_dout.read();
        data_9_V_reg_2092970 = data_V_data_9_V_dout.read();
        lshr_ln708_10_reg_2093617 = data_V_data_6_V_dout.read().range(7, 2);
        lshr_ln708_13_reg_2093670 = data_V_data_8_V_dout.read().range(7, 4);
        lshr_ln708_14_reg_2093750 = data_V_data_11_V_dout.read().range(7, 4);
        lshr_ln708_15_reg_2093755 = data_V_data_11_V_dout.read().range(7, 1);
        lshr_ln708_16_reg_2093781 = data_V_data_13_V_dout.read().range(7, 1);
        lshr_ln708_17_reg_2093786 = data_V_data_14_V_dout.read().range(7, 1);
        lshr_ln708_18_reg_2093791 = data_V_data_16_V_dout.read().range(7, 1);
        lshr_ln708_19_reg_2093796 = data_V_data_16_V_dout.read().range(7, 3);
        lshr_ln708_20_reg_2093801 = data_V_data_16_V_dout.read().range(7, 5);
        lshr_ln708_23_reg_2093819 = data_V_data_18_V_dout.read().range(7, 5);
        lshr_ln708_24_reg_2093834 = data_V_data_21_V_dout.read().range(7, 4);
        lshr_ln708_25_reg_2093839 = data_V_data_21_V_dout.read().range(7, 1);
        lshr_ln708_27_reg_2093844 = data_V_data_22_V_dout.read().range(7, 4);
        lshr_ln708_29_reg_2093849 = data_V_data_23_V_dout.read().range(7, 2);
        lshr_ln708_30_reg_2093854 = data_V_data_24_V_dout.read().range(7, 5);
        lshr_ln708_32_reg_2093859 = data_V_data_25_V_dout.read().range(7, 5);
        lshr_ln708_33_reg_2093869 = data_V_data_29_V_dout.read().range(7, 2);
        lshr_ln708_34_reg_2093874 = data_V_data_30_V_dout.read().range(7, 2);
        lshr_ln708_35_reg_2093880 = data_V_data_30_V_dout.read().range(7, 5);
        lshr_ln708_6_reg_2093573 = data_V_data_4_V_dout.read().range(7, 5);
        lshr_ln708_7_reg_2093592 = data_V_data_5_V_dout.read().range(7, 5);
        lshr_ln708_9_reg_2093607 = data_V_data_6_V_dout.read().range(7, 5);
        lshr_ln708_s_reg_2093384 = data_V_data_0_V_dout.read().range(7, 1);
        shl_ln1118_11_reg_2093472 = shl_ln1118_11_fu_2065170_p3.read();
        shl_ln1118_1_reg_2093343 = shl_ln1118_1_fu_2064623_p3.read();
        shl_ln1118_25_reg_2093568 = shl_ln1118_25_fu_2065617_p3.read();
        shl_ln708_1_reg_2093489 = shl_ln708_1_fu_2065248_p3.read();
        sub_ln1118_11_reg_2093443 = sub_ln1118_11_fu_2065074_p2.read();
        sub_ln1118_27_reg_2093536 = sub_ln1118_27_fu_2065489_p2.read();
        sub_ln1118_66_reg_2093622 = sub_ln1118_66_fu_2065746_p2.read();
        sub_ln1118_94_reg_2093720 = sub_ln1118_94_fu_2066023_p2.read();
        tmp_107_reg_2093646 = mul_ln1118_90_fu_1646_p2.read().range(12, 5);
        tmp_131_reg_2093697 = mul_ln708_46_fu_1716_p2.read().range(14, 5);
        tmp_161_reg_2093745 = mul_ln708_64_fu_1743_p2.read().range(14, 5);
        tmp_169_reg_2093760 = mul_ln708_68_fu_1638_p2.read().range(14, 5);
        tmp_172_reg_2093765 = mul_ln708_71_fu_2020_p2.read().range(14, 5);
        tmp_208_reg_2093807 = data_V_data_16_V_dout.read().range(7, 4);
        tmp_230_reg_2093813 = data_V_data_18_V_dout.read().range(7, 3);
        tmp_236_reg_2093824 = data_V_data_19_V_dout.read().range(7, 4);
        tmp_245_reg_2093829 = data_V_data_20_V_dout.read().range(7, 3);
        tmp_299_reg_2093864 = data_V_data_25_V_dout.read().range(7, 3);
        tmp_29_reg_2093323 = mul_ln1118_fu_2238_p2.read().range(13, 5);
        tmp_31_reg_2093328 = mul_ln708_1_fu_2005_p2.read().range(14, 5);
        tmp_33_reg_2093338 = tmp_33_fu_2064591_p3.read();
        tmp_34_reg_2093349 = mul_ln708_4_fu_1813_p2.read().range(14, 5);
        tmp_37_reg_2093359 = mul_ln708_6_fu_2077_p2.read().range(14, 5);
        tmp_38_reg_2093364 = mul_ln708_7_fu_1849_p2.read().range(14, 5);
        tmp_39_reg_2093369 = mul_ln708_8_fu_2385_p2.read().range(14, 5);
        tmp_40_reg_2093374 = mul_ln708_10_fu_2408_p2.read().range(14, 5);
        tmp_41_reg_2093408 = add_ln1118_fu_2064876_p2.read().range(13, 5);
        tmp_42_reg_2093413 = mul_ln708_11_fu_2022_p2.read().range(14, 5);
        tmp_47_reg_2093428 = mul_ln708_14_fu_2198_p2.read().range(14, 5);
        tmp_48_reg_2093438 = mul_ln1118_24_fu_2352_p2.read().range(13, 5);
        tmp_50_reg_2093453 = mul_ln708_16_fu_1790_p2.read().range(14, 5);
        tmp_52_reg_2093479 = mul_ln708_17_fu_2612_p2.read().range(14, 5);
        tmp_57_reg_2093495 = add_ln708_1_fu_2065260_p2.read().range(10, 5);
        tmp_59_reg_2093505 = mul_ln1118_30_fu_2375_p2.read().range(12, 5);
        tmp_60_reg_2093510 = mul_ln708_21_fu_1950_p2.read().range(14, 5);
        tmp_73_reg_2093551 = mul_ln1118_46_fu_1650_p2.read().range(13, 5);
        tmp_74_reg_2093556 = mul_ln708_29_fu_1604_p2.read().range(14, 5);
        tmp_data_V_6_0_reg_2092863 = data_V_data_0_V_dout.read();
        tmp_data_V_6_1_reg_2092869 = data_V_data_1_V_dout.read();
        tmp_data_V_6_2_reg_2092877 = data_V_data_2_V_dout.read();
        tmp_data_V_6_3_reg_2092885 = data_V_data_3_V_dout.read();
        tmp_data_V_6_4_reg_2092898 = data_V_data_4_V_dout.read();
        trunc_ln1118_3_reg_2093612 = mul_ln1118_80_fu_1674_p2.read().range(12, 5);
        trunc_ln203_3_reg_2093354 = mul_ln1118_9_fu_2247_p2.read().range(13, 5);
        trunc_ln708_131_reg_2093333 = mul_ln1118_6_fu_2210_p2.read().range(15, 5);
        trunc_ln708_145_reg_2093379 = mul_ln1118_12_fu_2192_p2.read().range(14, 5);
        trunc_ln708_148_reg_2093403 = mul_ln1118_14_fu_2271_p2.read().range(14, 5);
        trunc_ln708_152_reg_2093418 = mul_ln1118_18_fu_2463_p2.read().range(13, 5);
        trunc_ln708_155_reg_2093423 = mul_ln1118_20_fu_2225_p2.read().range(15, 5);
        trunc_ln708_159_reg_2093433 = mul_ln1118_23_fu_1610_p2.read().range(13, 5);
        trunc_ln708_163_reg_2093448 = mul_ln1118_26_fu_1891_p2.read().range(15, 5);
        trunc_ln708_170_reg_2093484 = sub_ln1118_275_fu_2065232_p2.read().range(12, 5);
        trunc_ln708_171_reg_2093500 = sub_ln1118_17_fu_2065288_p2.read().range(14, 5);
        trunc_ln708_175_reg_2093515 = sub_ln1118_20_fu_2065362_p2.read().range(11, 5);
        trunc_ln708_183_reg_2093541 = mul_ln1118_36_fu_1605_p2.read().range(15, 5);
        trunc_ln708_191_reg_2093546 = mul_ln1118_42_fu_1699_p2.read().range(15, 5);
        trunc_ln708_223_reg_2093597 = mul_ln1118_61_fu_2284_p2.read().range(12, 5);
        trunc_ln708_225_reg_2093602 = mul_ln1118_64_fu_2056_p2.read().range(14, 5);
        trunc_ln708_251_reg_2093627 = sub_ln1118_68_fu_2065764_p2.read().range(14, 5);
        trunc_ln708_255_reg_2093641 = mul_ln1118_87_fu_1771_p2.read().range(13, 5);
        trunc_ln708_329_reg_2093776 = mul_ln1118_146_fu_2119_p2.read().range(13, 5);
        zext_ln1116_1_reg_2093389 = zext_ln1116_1_fu_2064809_p1.read();
        zext_ln1116_reg_2093309 = zext_ln1116_fu_2064498_p1.read();
        zext_ln1118_127_reg_2093632 = zext_ln1118_127_fu_2065786_p1.read();
        zext_ln1118_138_reg_2093651 = zext_ln1118_138_fu_2065840_p1.read();
        zext_ln1118_141_reg_2093662 = zext_ln1118_141_fu_2065846_p1.read();
        zext_ln1118_156_reg_2093675 = zext_ln1118_156_fu_2065928_p1.read();
        zext_ln1118_158_reg_2093691 = zext_ln1118_158_fu_2065935_p1.read();
        zext_ln1118_172_reg_2093702 = zext_ln1118_172_fu_2065992_p1.read();
        zext_ln1118_182_reg_2093712 = zext_ln1118_182_fu_2066005_p1.read();
        zext_ln1118_189_reg_2093725 = zext_ln1118_189_fu_2066029_p1.read();
        zext_ln1118_18_reg_2093397 = zext_ln1118_18_fu_2064837_p1.read();
        zext_ln1118_190_reg_2093739 = zext_ln1118_190_fu_2066036_p1.read();
        zext_ln1118_204_reg_2093770 = zext_ln1118_204_fu_2066120_p1.read();
        zext_ln1118_31_reg_2093458 = zext_ln1118_31_fu_2065146_p1.read();
        zext_ln1118_32_reg_2093463 = zext_ln1118_32_fu_2065152_p1.read();
        zext_ln1118_52_reg_2093520 = zext_ln1118_52_fu_2065464_p1.read();
        zext_ln1118_63_reg_2093531 = zext_ln1118_63_fu_2065485_p1.read();
        zext_ln1118_6_reg_2093316 = zext_ln1118_6_fu_2064514_p1.read();
        zext_ln1118_79_reg_2093561 = zext_ln1118_79_fu_2065613_p1.read();
        zext_ln1118_88_reg_2093578 = zext_ln1118_88_fu_2065659_p1.read();
        zext_ln1118_91_reg_2093585 = zext_ln1118_91_fu_2065664_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln89_reg_2092854 = icmp_ln89_fu_2064358_p2.read();
        icmp_ln89_reg_2092854_pp0_iter1_reg = icmp_ln89_reg_2092854.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln89_reg_2092854_pp0_iter2_reg = icmp_ln89_reg_2092854_pp0_iter1_reg.read();
    }
}

void pointwise_conv_1d_cl_array_array_ap_fixed_22_7_5_3_0_32u_config21_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln89_fu_2064358_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln89_fu_2064358_p2.read(), ap_const_lv1_1) && 
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

