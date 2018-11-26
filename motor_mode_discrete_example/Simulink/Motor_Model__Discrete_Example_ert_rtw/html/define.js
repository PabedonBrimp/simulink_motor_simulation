function CodeDefine() { 
this.def = new Array();
this.def["rtObj"] = {file: "ert_main_cpp.html",line:23,type:"var"};this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:37,type:"fcn"};this.def["main"] = {file: "ert_main_cpp.html",line:73,type:"fcn"};this.def["Simulink"] = {file: "Motor_Model__Discrete_Example_cpp.html",line:28,type:"var"};this.def["inputVoltage"] = {file: "Motor_Model__Discrete_Example_cpp.html",line:31,type:"var"};this.def["outputSpeed"] = {file: "Motor_Model__Discrete_Example_cpp.html",line:32,type:"var"};this.def["step"] = {file: "Motor_Model__Discrete_Example_cpp.html",line:36,type:"fcn"};this.def["RT_MODEL"] = {file: "Motor_Model__Discrete_Example_h.html",line:38,type:"type"};this.def["DW"] = {file: "Motor_Model__Discrete_Example_h.html",line:44,type:"type"};this.def["initialize"] = {file: "Motor_Model__Discrete_Example_h.html",line:83,type:"fcn"};this.def["BuiltInDTypeId"] = {file: "builtin_typeid_types_h.html",line:35,type:"type"};this.def["DTypeId"] = {file: "builtin_typeid_types_h.html",line:40,type:"type"};this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};this.def["int64_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};this.def["uint64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};this.def["real32_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};this.def["real64_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};this.def["real_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};this.def["time_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};this.def["boolean_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};this.def["int_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};this.def["uint_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};this.def["ulong_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};this.def["ulonglong_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};this.def["char_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};this.def["uchar_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};this.def["byte_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};this.def["pointer_T"] = {file: "rtwtypes_h.html",line:94,type:"type"};this.def["rtBlockSignals"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:40,type:"var"};this.def["rtBlockParameters"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:56,type:"var"};this.def["rtBlockStates"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:66,type:"var"};this.def["rtModelParameters"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:85,type:"var"};this.def["InitializeDataAddr"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:93,type:"fcn"};this.def["InitializeVarDimsAddr"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:105,type:"fcn"};this.def["InitializeLoggingFunctions"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:115,type:"fcn"};this.def["rtDataTypeMap"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:125,type:"var"};this.def["rtElementMap"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:136,type:"var"};this.def["rtDimensionMap"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:142,type:"var"};this.def["rtDimensionArray"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:148,type:"var"};this.def["rtcapiStoredFloats"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:160,type:"var"};this.def["rtFixPtMap"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:165,type:"var"};this.def["rtSampleTimeMap"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:171,type:"var"};this.def["mmiStatic"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:177,type:"var"};this.def["Motor_Model__Discrete_Example_GetCAPIStaticMap"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:211,type:"fcn"};this.def["Motor_Model__Discrete_Example_InitializeDataMapInfo"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:219,type:"fcn"};this.def["Motor_Model__Discrete_Example_host_InitializeDataMapInfo"] = {file: "Motor_Model__Discrete_Example_capi_cpp.html",line:263,type:"fcn"};this.def["Motor_Model__Discrete_Example_host_DataMapInfo_T"] = {file: "Motor_Model__Discrete_Example_capi_host_h.html",line:9,type:"type"};}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_cpp.html"] = "../ert_main.cpp";
	this.html2Root["ert_main_cpp.html"] = "ert_main_cpp.html";
	this.html2SrcPath["Motor_Model__Discrete_Example_cpp.html"] = "../Motor_Model__Discrete_Example.cpp";
	this.html2Root["Motor_Model__Discrete_Example_cpp.html"] = "Motor_Model__Discrete_Example_cpp.html";
	this.html2SrcPath["Motor_Model__Discrete_Example_h.html"] = "../Motor_Model__Discrete_Example.h";
	this.html2Root["Motor_Model__Discrete_Example_h.html"] = "Motor_Model__Discrete_Example_h.html";
	this.html2SrcPath["builtin_typeid_types_h.html"] = "../builtin_typeid_types.h";
	this.html2Root["builtin_typeid_types_h.html"] = "builtin_typeid_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["Motor_Model__Discrete_Example_capi_cpp.html"] = "../Motor_Model__Discrete_Example_capi.cpp";
	this.html2Root["Motor_Model__Discrete_Example_capi_cpp.html"] = "Motor_Model__Discrete_Example_capi_cpp.html";
	this.html2SrcPath["Motor_Model__Discrete_Example_capi_h.html"] = "../Motor_Model__Discrete_Example_capi.h";
	this.html2Root["Motor_Model__Discrete_Example_capi_h.html"] = "Motor_Model__Discrete_Example_capi_h.html";
	this.html2SrcPath["Motor_Model__Discrete_Example_capi_host_h.html"] = "../Motor_Model__Discrete_Example_capi_host.h";
	this.html2Root["Motor_Model__Discrete_Example_capi_host_h.html"] = "Motor_Model__Discrete_Example_capi_host_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_cpp.html","Motor_Model__Discrete_Example_cpp.html","Motor_Model__Discrete_Example_h.html","builtin_typeid_types_h.html","rtwtypes_h.html","Motor_Model__Discrete_Example_capi_cpp.html","Motor_Model__Discrete_Example_capi_h.html","Motor_Model__Discrete_Example_capi_host_h.html"];
