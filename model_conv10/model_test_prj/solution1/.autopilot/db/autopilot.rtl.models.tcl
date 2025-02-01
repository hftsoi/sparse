set SynModuleInfo {
  {SRCNAME {conv_2d_cl<ap_fixed<12, 4, 0, 0, 0>, ap_fixed<25, 10, 5, 3, 0>, config2>} MODELNAME conv_2d_cl_ap_fixed_12_4_0_0_0_ap_fixed_25_10_5_3_0_config2_s RTLNAME model_test_conv_2d_cl_ap_fixed_12_4_0_0_0_ap_fixed_25_10_5_3_0_config2_s
    SUBMODULES {
      {MODELNAME model_test_mul_12s_8ns_20_1_1 RTLNAME model_test_mul_12s_8ns_20_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME model_test_flow_control_loop_pipe RTLNAME model_test_flow_control_loop_pipe BINDTYPE interface TYPE internal_upc_flow_control INSTNAME model_test_flow_control_loop_pipe_U}
    }
  }
  {SRCNAME model_test MODELNAME model_test RTLNAME model_test IS_TOP 1}
}
