set moduleName fill_buffer_2
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {fill_buffer.2}
set C_modelType { int 36 }
set C_modelArgList {
	{ data_V_read int 576 regular  }
	{ buffer_0_V_read int 12 regular  }
	{ buffer_1_V_read int 12 regular  }
	{ buffer_2_V_read int 12 regular  }
	{ partition int 4 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_read", "interface" : "wire", "bitwidth" : 576, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_0_V_read", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_1_V_read", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_2_V_read", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "partition", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 36} ]}
# RTL Port declarations: 
set portNum 9
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_V_read sc_in sc_lv 576 signal 0 } 
	{ buffer_0_V_read sc_in sc_lv 12 signal 1 } 
	{ buffer_1_V_read sc_in sc_lv 12 signal 2 } 
	{ buffer_2_V_read sc_in sc_lv 12 signal 3 } 
	{ partition sc_in sc_lv 4 signal 4 } 
	{ ap_return_0 sc_out sc_lv 12 signal -1 } 
	{ ap_return_1 sc_out sc_lv 12 signal -1 } 
	{ ap_return_2 sc_out sc_lv 12 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "data_V_read", "role": "default" }} , 
 	{ "name": "buffer_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "buffer_0_V_read", "role": "default" }} , 
 	{ "name": "buffer_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "buffer_1_V_read", "role": "default" }} , 
 	{ "name": "buffer_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "buffer_2_V_read", "role": "default" }} , 
 	{ "name": "partition", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "partition", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "fill_buffer_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "partition", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	fill_buffer_2 {
		data_V_read {Type I LastRead 0 FirstWrite -1}
		buffer_0_V_read {Type I LastRead 0 FirstWrite -1}
		buffer_1_V_read {Type I LastRead 0 FirstWrite -1}
		buffer_2_V_read {Type I LastRead 0 FirstWrite -1}
		partition {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_V_read { ap_none {  { data_V_read in_data 0 576 } } }
	buffer_0_V_read { ap_none {  { buffer_0_V_read in_data 0 12 } } }
	buffer_1_V_read { ap_none {  { buffer_1_V_read in_data 0 12 } } }
	buffer_2_V_read { ap_none {  { buffer_2_V_read in_data 0 12 } } }
	partition { ap_none {  { partition in_data 0 4 } } }
}
