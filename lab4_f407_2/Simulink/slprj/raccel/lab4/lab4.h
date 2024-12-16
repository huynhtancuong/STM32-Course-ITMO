#ifndef RTW_HEADER_lab4_h_
#define RTW_HEADER_lab4_h_
#ifndef lab4_COMMON_INCLUDES_
#define lab4_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "asynciocoder_api.hpp"
#include "coder_posix_time.h"
#endif
#include "lab4_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME lab4
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (2) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { char_T devicePluginPath_data [ 4097 ] ; char_T
converterPluginPath_data [ 4097 ] ; char_T b_devicePluginPath_data [ 4097 ] ;
char_T devicePluginPath_data_mbvzarwird [ 4097 ] ; char_T
converterPluginPath_data_cl54gopm0x [ 4097 ] ; char_T
b_devicePluginPath_data_kkiq3xxxve [ 4097 ] ; uint32_T ndxstghovv ; uint16_T
mvkxsctj2w ; } B ; typedef struct { m31jye1cpy kbufajfwfx ; av3iswzhoj
nvvrcl2if1 ; g2xqav1jii ld020lqr2s ; real_T pj1ri2ahjl ; struct { void *
LoggedData ; } mosdz0kelf ; uint8_T fx21jakcao ; boolean_T aqjgqjs1ou ;
boolean_T dycqrqqmxg ; boolean_T ke3ruqp2or ; boolean_T pkbyylsioi ;
boolean_T nxejyg0ndb ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo mmi ;
} DataMapInfo ; struct P_ { uint16_T Gain_Gain ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_lab4_GetDWork ( ) ; extern void mr_lab4_SetDWork ( const
mxArray * ssDW ) ; extern mxArray * mr_lab4_GetSimStateDisallowedBlocks ( ) ;
extern void MdlUpdateTID1 ( int_T tid ) ; extern void MdlOutputsTID1 ( int_T
tid ) ; extern const rtwCAPI_ModelMappingStaticInfo * lab4_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
