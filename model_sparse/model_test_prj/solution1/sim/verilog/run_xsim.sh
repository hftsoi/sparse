
/tools/Xilinx/Vivado/2023.1/bin/xelab xil_defaultlib.apatb_model_test_top glbl -Oenable_linking_all_libraries  -prj model_test.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm  -L floating_point_v7_1_15 -L floating_point_v7_0_20 --lib "ieee_proposed=./ieee_proposed" -s model_test -debug all
/tools/Xilinx/Vivado/2023.1/bin/xsim --noieeewarnings model_test -tclbatch model_test.tcl -view model_test_dataflow_ana.wcfg -protoinst model_test.protoinst

