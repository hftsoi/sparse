
 
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set return_group [add_wave_group return(wire) -into $coutputgroup]
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_9_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_8_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_7_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_6_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_5_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_4_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_3_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_2_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_1_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_0_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_9 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_8 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_7 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_6 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_5 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_4 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_3 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_2 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_1 -into $return_group -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/layer2_out_0 -into $return_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set return_group [add_wave_group return(wire) -into $cinputgroup]
add_wave /apatb_model_test_top/AESL_inst_model_test/x_in_ap_vld -into $return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/AESL_inst_model_test/x_in -into $return_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_model_test_top/AESL_inst_model_test/ap_start -into $blocksiggroup
add_wave /apatb_model_test_top/AESL_inst_model_test/ap_done -into $blocksiggroup
add_wave /apatb_model_test_top/AESL_inst_model_test/ap_ready -into $blocksiggroup
add_wave /apatb_model_test_top/AESL_inst_model_test/ap_idle -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_model_test_top/AESL_inst_model_test/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_model_test_top/AESL_inst_model_test/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_model_test_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_model_test_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_model_test_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_5 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_6 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_7 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_8 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_layer2_out_9 -into $tb_portdepth_group -radix hex
add_wave /apatb_model_test_top/LENGTH_x_in -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_return_group [add_wave_group return(wire) -into $tbcoutputgroup]
add_wave /apatb_model_test_top/layer2_out_9_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_8_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_7_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_6_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_5_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_4_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_3_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_2_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_1_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_0_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/layer2_out_9 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_8 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_7 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_6 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_5 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_4 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_3 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_2 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_1 -into $tb_return_group -radix hex
add_wave /apatb_model_test_top/layer2_out_0 -into $tb_return_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_return_group [add_wave_group return(wire) -into $tbcinputgroup]
add_wave /apatb_model_test_top/x_in_ap_vld -into $tb_return_group -color #ffff00 -radix hex
add_wave /apatb_model_test_top/x_in -into $tb_return_group -radix hex
save_wave_config model_test.wcfg
run all
quit

