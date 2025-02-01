set moduleName model_test
set isTopModule 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set DLRegFirstOffset 0
set DLRegItemOffset 0
set C_modelName {model_test}
set C_modelType { void 0 }
set C_modelArgList {
	{ x_in int 1200 regular {pointer 0}  }
	{ layer2_out_0 int 25 regular {pointer 1}  }
	{ layer2_out_1 int 25 regular {pointer 1}  }
	{ layer2_out_2 int 25 regular {pointer 1}  }
	{ layer2_out_3 int 25 regular {pointer 1}  }
	{ layer2_out_4 int 25 regular {pointer 1}  }
	{ layer2_out_5 int 25 regular {pointer 1}  }
	{ layer2_out_6 int 25 regular {pointer 1}  }
	{ layer2_out_7 int 25 regular {pointer 1}  }
	{ layer2_out_8 int 25 regular {pointer 1}  }
	{ layer2_out_9 int 25 regular {pointer 1}  }
}
set hasAXIMCache 0
set C_modelArgMapList {[ 
	{ "Name" : "x_in", "interface" : "wire", "bitwidth" : 1200, "direction" : "READONLY"} , 
 	{ "Name" : "layer2_out_0", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_1", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_2", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_3", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_4", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_5", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_6", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_7", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_8", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer2_out_9", "interface" : "wire", "bitwidth" : 25, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ x_in sc_in sc_lv 1200 signal 0 } 
	{ layer2_out_0 sc_out sc_lv 25 signal 1 } 
	{ layer2_out_1 sc_out sc_lv 25 signal 2 } 
	{ layer2_out_2 sc_out sc_lv 25 signal 3 } 
	{ layer2_out_3 sc_out sc_lv 25 signal 4 } 
	{ layer2_out_4 sc_out sc_lv 25 signal 5 } 
	{ layer2_out_5 sc_out sc_lv 25 signal 6 } 
	{ layer2_out_6 sc_out sc_lv 25 signal 7 } 
	{ layer2_out_7 sc_out sc_lv 25 signal 8 } 
	{ layer2_out_8 sc_out sc_lv 25 signal 9 } 
	{ layer2_out_9 sc_out sc_lv 25 signal 10 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ x_in_ap_vld sc_in sc_logic 1 invld 0 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ layer2_out_0_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ layer2_out_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ layer2_out_2_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ layer2_out_3_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ layer2_out_4_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ layer2_out_5_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ layer2_out_6_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ layer2_out_7_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ layer2_out_8_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ layer2_out_9_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "x_in", "direction": "in", "datatype": "sc_lv", "bitwidth":1200, "type": "signal", "bundle":{"name": "x_in", "role": "default" }} , 
 	{ "name": "layer2_out_0", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_0", "role": "default" }} , 
 	{ "name": "layer2_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_1", "role": "default" }} , 
 	{ "name": "layer2_out_2", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_2", "role": "default" }} , 
 	{ "name": "layer2_out_3", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_3", "role": "default" }} , 
 	{ "name": "layer2_out_4", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_4", "role": "default" }} , 
 	{ "name": "layer2_out_5", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_5", "role": "default" }} , 
 	{ "name": "layer2_out_6", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_6", "role": "default" }} , 
 	{ "name": "layer2_out_7", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_7", "role": "default" }} , 
 	{ "name": "layer2_out_8", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_8", "role": "default" }} , 
 	{ "name": "layer2_out_9", "direction": "out", "datatype": "sc_lv", "bitwidth":25, "type": "signal", "bundle":{"name": "layer2_out_9", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "x_in_ap_vld", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "x_in", "role": "ap_vld" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "layer2_out_0_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_0", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_1", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_2", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_3", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_4_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_4", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_5_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_5", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_6_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_6", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_7_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_7", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_8_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_8", "role": "ap_vld" }} , 
 	{ "name": "layer2_out_9_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_9", "role": "ap_vld" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32"],
		"CDFG" : "model_test",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "26",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "sparse_input_U0"}],
		"OutputProcess" : [
			{"ID" : "2", "Name" : "sparse_compute_U0"}],
		"Port" : [
			{"Name" : "x_in", "Type" : "Vld", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "sparse_input_U0", "Port" : "x_in"}]},
			{"Name" : "layer2_out_0", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_0"}]},
			{"Name" : "layer2_out_1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_1"}]},
			{"Name" : "layer2_out_2", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_2"}]},
			{"Name" : "layer2_out_3", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_3"}]},
			{"Name" : "layer2_out_4", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_4"}]},
			{"Name" : "layer2_out_5", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_5"}]},
			{"Name" : "layer2_out_6", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_6"}]},
			{"Name" : "layer2_out_7", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_7"}]},
			{"Name" : "layer2_out_8", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_8"}]},
			{"Name" : "layer2_out_9", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "sparse_compute_U0", "Port" : "layer2_out_9"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sparse_input_U0", "Parent" : "0",
		"CDFG" : "sparse_input",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "x_in", "Type" : "Vld", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "x_in_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sparse_compute_U0", "Parent" : "0",
		"CDFG" : "sparse_compute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "3", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "4", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "5", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "6", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "7", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "8", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "9", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "10", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "11", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "12", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "13", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "14", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "15", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "16", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "17", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "18", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "19", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "20", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "21", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "22", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "23", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "24", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "25", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "26", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "27", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "28", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "29", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "30", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "31", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I", "DependentProc" : ["1"], "DependentChan" : "32", "DependentChanDepth" : "2", "DependentChanType" : "1"},
			{"Name" : "layer2_out_0", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_2", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_3", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_4", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_5", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_6", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_7", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_8", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer2_out_9", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_2_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_3_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_4_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_5_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_6_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_7_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_8_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_9_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_10_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_11_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_12_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_13_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_14_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_15_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_16_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_17_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_18_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hash_arr_19_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_1_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_2_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_3_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_4_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_5_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_6_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_7_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_8_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feat_arr_9_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	model_test {
		x_in {Type I LastRead 0 FirstWrite -1}
		layer2_out_0 {Type O LastRead -1 FirstWrite 7}
		layer2_out_1 {Type O LastRead -1 FirstWrite 7}
		layer2_out_2 {Type O LastRead -1 FirstWrite 7}
		layer2_out_3 {Type O LastRead -1 FirstWrite 7}
		layer2_out_4 {Type O LastRead -1 FirstWrite 7}
		layer2_out_5 {Type O LastRead -1 FirstWrite 7}
		layer2_out_6 {Type O LastRead -1 FirstWrite 7}
		layer2_out_7 {Type O LastRead -1 FirstWrite 7}
		layer2_out_8 {Type O LastRead -1 FirstWrite 7}
		layer2_out_9 {Type O LastRead -1 FirstWrite 7}}
	sparse_input {
		x_in {Type I LastRead 0 FirstWrite -1}}
	sparse_compute {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		layer2_out_0 {Type O LastRead -1 FirstWrite 7}
		layer2_out_1 {Type O LastRead -1 FirstWrite 7}
		layer2_out_2 {Type O LastRead -1 FirstWrite 7}
		layer2_out_3 {Type O LastRead -1 FirstWrite 7}
		layer2_out_4 {Type O LastRead -1 FirstWrite 7}
		layer2_out_5 {Type O LastRead -1 FirstWrite 7}
		layer2_out_6 {Type O LastRead -1 FirstWrite 7}
		layer2_out_7 {Type O LastRead -1 FirstWrite 7}
		layer2_out_8 {Type O LastRead -1 FirstWrite 7}
		layer2_out_9 {Type O LastRead -1 FirstWrite 7}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "26", "Max" : "26"}
	, {"Name" : "Interval", "Min" : "19", "Max" : "19"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	x_in { ap_vld {  { x_in in_data 0 1200 }  { x_in_ap_vld in_vld 0 1 } } }
	layer2_out_0 { ap_vld {  { layer2_out_0 out_data 1 25 }  { layer2_out_0_ap_vld out_vld 1 1 } } }
	layer2_out_1 { ap_vld {  { layer2_out_1 out_data 1 25 }  { layer2_out_1_ap_vld out_vld 1 1 } } }
	layer2_out_2 { ap_vld {  { layer2_out_2 out_data 1 25 }  { layer2_out_2_ap_vld out_vld 1 1 } } }
	layer2_out_3 { ap_vld {  { layer2_out_3 out_data 1 25 }  { layer2_out_3_ap_vld out_vld 1 1 } } }
	layer2_out_4 { ap_vld {  { layer2_out_4 out_data 1 25 }  { layer2_out_4_ap_vld out_vld 1 1 } } }
	layer2_out_5 { ap_vld {  { layer2_out_5 out_data 1 25 }  { layer2_out_5_ap_vld out_vld 1 1 } } }
	layer2_out_6 { ap_vld {  { layer2_out_6 out_data 1 25 }  { layer2_out_6_ap_vld out_vld 1 1 } } }
	layer2_out_7 { ap_vld {  { layer2_out_7 out_data 1 25 }  { layer2_out_7_ap_vld out_vld 1 1 } } }
	layer2_out_8 { ap_vld {  { layer2_out_8 out_data 1 25 }  { layer2_out_8_ap_vld out_vld 1 1 } } }
	layer2_out_9 { ap_vld {  { layer2_out_9 out_data 1 25 }  { layer2_out_9_ap_vld out_vld 1 1 } } }
}

set maxi_interface_dict [dict create]

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
