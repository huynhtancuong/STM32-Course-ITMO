#include "lab4.h"
#include "lab4_types.h"
#include "rtwtypes.h"
#include <string.h>
#include "mwmathutil.h"
#include "asynciocoder_api.hpp"
#include "coder_posix_time.h"
#include <stddef.h>
#include <stdlib.h>
#include "rt_logging_mmi.h"
#include "lab4_capi.h"
#include "lab4_private.h"
#include "lab4_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , &
stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 } ; const char
* raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static void jjdsoglm4u ( lytfstpiri * * pEmxArray , int32_T
numDimensions ) ; static void je0z0vljge ( kw3w1cgktc * * pEmxArray , int32_T
numDimensions ) ; static void gbuawyfqmj ( fxbyyv51o2 * pStruct ) ; static
void mszgu3hpfg ( pxjtq3ygk0 * pStruct ) ; static void n3ofwy3xwd (
gegd1nhtze * pStruct ) ; static void mszgu3hpfgu ( dq2uwawv51 * pStruct ) ;
static void pkp1puafs3 ( ghe5ys4xtm * pStruct ) ; static void pd2s2ubq3l (
av3iswzhoj * pStruct ) ; static void fybnqznhrj ( const char_T in [ 4096 ] ,
char_T out_data [ ] , int32_T out_size [ 2 ] ) ; static void mvpwqbdywu (
kw3w1cgktc * emxArray , int32_T oldNumel ) ; static real_T cysnr0poff (
ghe5ys4xtm * obj ) ; static void kpntjfigjo ( lytfstpiri * emxArray , int32_T
oldNumel ) ; static void o2hjpb1san ( ghe5ys4xtm * obj , gegd1nhtze * iobj_0
, dq2uwawv51 * iobj_1 ) ; static boolean_T h5nfwugf2u ( ghe5ys4xtm * obj ) ;
static void pz01orbdte ( lytfstpiri * * pEmxArray ) ; static boolean_T
oucphsjogg ( ghe5ys4xtm * obj ) ; static void njrxz2czen ( ghe5ys4xtm * obj )
; static void i44lbymuat ( av3iswzhoj * obj ) ; static void gbuawyfqmjy (
fxbyyv51o23 * pStruct ) ; static void mszgu3hpfgu3 ( pxjtq3ygk0g * pStruct )
; static void n3ofwy3xwdh ( gegd1nhtzev * pStruct ) ; static void
mszgu3hpfgu3y ( dq2uwawv51k * pStruct ) ; static void pkp1puafs3k (
ghe5ys4xtmd * pStruct ) ; static void prmzlmusmb ( m31jye1cpy * pStruct ) ;
static real_T cysnr0poffu ( ghe5ys4xtmd * obj ) ; static void no25st1du2 (
kw3w1cgktc * * pEmxArray ) ; static void o2hjpb1san0 ( ghe5ys4xtmd * obj ,
gegd1nhtzev * iobj_0 , dq2uwawv51k * iobj_1 ) ; static boolean_T h5nfwugf2uw
( ghe5ys4xtmd * obj ) ; static boolean_T oucphsjoggj ( ghe5ys4xtmd * obj ) ;
static void njrxz2czen5 ( ghe5ys4xtmd * obj ) ; static void i44lbymuat1 (
m31jye1cpy * obj ) ; static void iyeltzqc1z ( real_T newTime_tv_sec , real_T
newTime_tv_nsec ) ; static void efyy0zkhpk ( void ) ; static void iyeltzqc1zq
( real_T * outTime_tv_sec , real_T * outTime_tv_nsec ) ; static real_T
ganiwbrrxs ( void ) ; static real_T dqiepqwwri ( pxjtq3ygk0g * obj ) ; static
void efyy0zkhpka ( real_T * tstart_tv_sec , real_T * tstart_tv_nsec ) ;
static real_T ganiwbrrxsb ( real_T tstart_tv_sec , real_T tstart_tv_nsec ) ;
static void iksgdstzi2 ( const kw3w1cgktc * packet , real_T startIndex ,
real_T endIndex , kw3w1cgktc * result ) ; static void iksgdstzi2b ( const
kw3w1cgktc * packet , real_T endIndex , kw3w1cgktc * result ) ; static void
gch20cd4f4 ( fxbyyv51o23 * obj , real_T countRequested , kw3w1cgktc *
dataRead , real_T * countRead ) ; static void bb0uwefgr1 ( aa5bqgvdkq * *
pEmxArray , int32_T numDimensions ) ; static void mn2lcbi2uy ( fxbyyv51o23 *
obj , char_T status_data [ ] , int32_T status_size [ 2 ] ) ; static boolean_T
gh3bt5xumf ( const char_T a_data [ ] , const int32_T a_size [ 2 ] ) ; static
void m4xvs1e3pr ( cjy55fimls * pStruct ) ; static void ovgu4vuxrt (
aa5bqgvdkq * emxArray , int32_T fromIndex , int32_T toIndex ) ; static void
dns4ggsxgl ( cjy55fimls * pStruct ) ; static void i22ayaur1g ( aa5bqgvdkq *
emxArray , int32_T fromIndex , int32_T toIndex ) ; static void drospuyegg (
aa5bqgvdkq * emxArray , int32_T oldNumel ) ; static void o0wddit1mx (
bvpcxluwvo * * pEmxArray , int32_T numDimensions ) ; static void flxj4w4dle (
bvpcxluwvo * emxArray , int32_T oldNumel ) ; static void iuuiiftx3w (
bvpcxluwvo * * pEmxArray ) ; static void afdhxmetmz ( fxbyyv51o23 * obj ,
real_T countRequested , aa5bqgvdkq * packets , real_T * countRead ) ; static
boolean_T gh3bt5xumfy ( const char_T a_data [ ] , const int32_T a_size [ 2 ]
) ; static boolean_T gh3bt5xumfys ( const char_T a_data [ ] , const int32_T
a_size [ 2 ] ) ; static void asx315p0t4 ( aa5bqgvdkq * * pEmxArray ) ; static
void j25i2ywt1j ( fxbyyv51o23 * obj , real_T countRequested , kw3w1cgktc *
data , real_T * countRead , char_T err_data [ ] , int32_T err_size [ 2 ] ) ;
static void alqjz0a40s ( p4uhdr1bdf * pStruct ) ; static void pgc0j0gkjq (
eaumivaow2 * pEmxArray ) ; static void dlfxdg5ewt ( p4uhdr1bdf * data ,
int32_T fromIndex , int32_T toIndex ) ; static void pmdz3cnfnl ( p4uhdr1bdf *
pStruct ) ; static void aeek3b2gyt ( p4uhdr1bdf * data , int32_T fromIndex ,
int32_T toIndex ) ; static void i4ljfh5xim ( p4uhdr1bdf * data , const
int32_T size [ 2 ] , int32_T oldNumel ) ; static void oexfsnygak ( kw3w1cgktc
* * dst , kw3w1cgktc * const * src ) ; static void a4ualc30lt ( p4uhdr1bdf *
dst , const p4uhdr1bdf * src ) ; static void itr4brwi3e ( ouk2ljbqp0 *
pEmxArray ) ; static void ghgyn21mve ( p4uhdr1bdf * data , const int32_T *
size , int32_T oldNumel ) ; static void gv0ngmbafo ( ouk2ljbqp0 * pEmxArray )
; static void fdcubt5zkm ( eaumivaow2 * pEmxArray ) ; static void mr4onm3rlx
( pxjtq3ygk0g * obj , const kw3w1cgktc * data ) ; static void kqczxrtegy (
const pxjtq3ygk0g * obj , real_T startIndex , real_T endIndex , kw3w1cgktc *
result ) ; static void dtmrrohdab ( p4uhdr1bdf pMatrix [ 2 ] ) ; static void
gdua24z132 ( p4uhdr1bdf pMatrix [ 2 ] ) ; static void dazixs0oih (
pxjtq3ygk0g * obj , real_T numBytesToRead , kw3w1cgktc * data ) ; static void
cwnteg5mpm ( gegd1nhtzev * obj , real_T numToRead , kw3w1cgktc * data ) ;
static void lugd3mfxed ( mzwzywjj5z * * pEmxArray , int32_T numDimensions ) ;
static void fj1w0xx3g1 ( mzwzywjj5z * emxArray , int32_T oldNumel ) ; static
void o4zpjin40n ( mzwzywjj5z * * pEmxArray ) ; static void epppntdrc4 (
dq2uwawv51 * obj ) ; static void epppntdrc4k ( pxjtq3ygk0 * obj ) ; static
void nou1hpy5ds ( fxbyyv51o2 * pStruct ) ; static void k3tawmpebk (
pxjtq3ygk0 * pStruct ) ; static void g2pnvvig0q ( gegd1nhtze * pStruct ) ;
static void k3tawmpebkq ( dq2uwawv51 * pStruct ) ; static void ilvxohevby (
ghe5ys4xtm * pStruct ) ; static void aitoice2hy ( av3iswzhoj * pStruct ) ;
static void epppntdrc4kd ( dq2uwawv51k * obj ) ; static void epppntdrc4kdc (
pxjtq3ygk0g * obj ) ; static void nou1hpy5dsb ( fxbyyv51o23 * pStruct ) ;
static void k3tawmpebkqp ( pxjtq3ygk0g * pStruct ) ; static void g2pnvvig0q5
( gegd1nhtzev * pStruct ) ; static void k3tawmpebkqpz ( dq2uwawv51k * pStruct
) ; static void ilvxohevbyz ( ghe5ys4xtmd * pStruct ) ; static void
iog4ofefsq ( m31jye1cpy * pStruct ) ; static void jjdsoglm4u ( lytfstpiri * *
pEmxArray , int32_T numDimensions ) { lytfstpiri * emxArray ; int32_T i ; *
pEmxArray = ( lytfstpiri * ) malloc ( sizeof ( lytfstpiri ) ) ; emxArray = *
pEmxArray ; emxArray -> data = ( char_T * ) NULL ; emxArray -> numDimensions
= numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T
) * ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray
-> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray
-> size [ i ] = 0 ; } } static void je0z0vljge ( kw3w1cgktc * * pEmxArray ,
int32_T numDimensions ) { kw3w1cgktc * emxArray ; int32_T i ; * pEmxArray = (
kw3w1cgktc * ) malloc ( sizeof ( kw3w1cgktc ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( uint8_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray ->
canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray ->
size [ i ] = 0 ; } } static void gbuawyfqmj ( fxbyyv51o2 * pStruct ) {
je0z0vljge ( & pStruct -> ExampleData , 2 ) ; } static void mszgu3hpfg (
pxjtq3ygk0 * pStruct ) { gbuawyfqmj ( & pStruct -> InputStream ) ; } static
void n3ofwy3xwd ( gegd1nhtze * pStruct ) { mszgu3hpfg ( & pStruct ->
UnreadDataBuffer ) ; jjdsoglm4u ( & pStruct -> ByteOrder , 2 ) ; } static
void mszgu3hpfgu ( dq2uwawv51 * pStruct ) { gbuawyfqmj ( & pStruct ->
InputStream ) ; } static void pkp1puafs3 ( ghe5ys4xtm * pStruct ) {
jjdsoglm4u ( & pStruct -> ByteOrder , 2 ) ; jjdsoglm4u ( & pStruct ->
NativeDataType , 2 ) ; jjdsoglm4u ( & pStruct -> DataFieldName , 2 ) ;
jjdsoglm4u ( & pStruct -> FlowControl , 2 ) ; jjdsoglm4u ( & pStruct ->
Parity , 2 ) ; n3ofwy3xwd ( & pStruct -> _pobj0 ) ; mszgu3hpfgu ( & pStruct
-> _pobj1 ) ; } static void pd2s2ubq3l ( av3iswzhoj * pStruct ) { pkp1puafs3
( & pStruct -> SerialObj ) ; } static void fybnqznhrj ( const char_T in [
4096 ] , char_T out_data [ ] , int32_T out_size [ 2 ] ) { int32_T b_k ;
int32_T k ; int32_T len ; boolean_T c ; boolean_T exitg1 ; len = 0 ; b_k = 0
; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 4096 ) ) { k = b_k + 1 ;
if ( in [ k - 1 ] == '\x00' ) { exitg1 = true ; } else { len ++ ; b_k ++ ; }
} c = ( len < 1 ) ; if ( c ) { len = 0 ; } out_size [ 0 ] = 1 ; out_size [ 1
] = len ; if ( len - 1 >= 0 ) { memcpy ( & out_data [ 0 ] , & in [ 0 ] , (
uint32_T ) len * sizeof ( char_T ) ) ; } } static void mvpwqbdywu (
kw3w1cgktc * emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ;
void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for (
i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size
[ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i = emxArray ->
allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i >
1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData = malloc ( (
uint32_T ) i * sizeof ( uint8_T ) ) ; if ( emxArray -> data != NULL ) {
memcpy ( newData , emxArray -> data , sizeof ( uint8_T ) * ( uint32_T )
oldNumel ) ; if ( emxArray -> canFreeData ) { free ( emxArray -> data ) ; } }
emxArray -> data = ( uint8_T * ) newData ; emxArray -> allocatedSize = i ;
emxArray -> canFreeData = true ; } } static real_T cysnr0poff ( ghe5ys4xtm *
obj ) { CoderChannel chImpl ; dq2uwawv51 * obj_e ; ghe5ys4xtm * obj_p ;
real_T b_value ; int32_T success ; char_T errorID [ 1024 ] ; char_T errorText
[ 1024 ] ; boolean_T hasSyncError ; if ( ! obj -> IsSharingExistingTimeout )
{ b_value = obj -> Timeout ; } else { obj_p = obj ; obj_e = obj_p ->
AsyncIOChannel ; chImpl = obj_e -> ChannelImpl ; success = coderChannelIsOpen
( chImpl , & hasSyncError ) ; if ( success == 0 ) { coderChannelHasSyncError
( chImpl , & hasSyncError ) ; if ( ! hasSyncError ) {
coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; }
else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText
[ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ; chImpl = obj_e -> ChannelImpl ;
success = coderChannelExecute ( chImpl , "GetSharedTimeout" , 0 ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ;
b_value = obj_e -> CustomProps . SharedTimeout ; chImpl = obj_e ->
ChannelImpl ; success = coderChannelGetPropertyValue ( chImpl ,
"SharedTimeout" , "double" , 1 , & b_value ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } return b_value ; } static void kpntjfigjo (
lytfstpiri * emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ;
void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for (
i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size
[ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i = emxArray ->
allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i >
1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData = malloc ( (
uint32_T ) i * sizeof ( char_T ) ) ; if ( emxArray -> data != NULL ) { memcpy
( newData , emxArray -> data , sizeof ( char_T ) * ( uint32_T ) oldNumel ) ;
if ( emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray ->
data = ( char_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void o2hjpb1san ( ghe5ys4xtm * obj ,
gegd1nhtze * iobj_0 , dq2uwawv51 * iobj_1 ) { CoderChannel chImpl ;
CoderInputStream streamImpl ; CoderOutputStream streamImpl_p ; dq2uwawv51 *
obj_p ; fxbyyv51o2 * b_obj ; gegd1nhtze * obj_e ; gegd1nhtze * obj_i ;
p4l4flmn41 * b_obj_p ; pxjtq3ygk0 * b_obj_e ; pxjtq3ygk0 * obj_m ; real_T
c_value [ 2 ] ; real_T e [ 2 ] ; real_T streamLimits [ 2 ] ; int32_T loop_ub
; int32_T success ; char_T converterFullPath_data [ 4096 ] ; char_T
deviceFullPath_data [ 4096 ] ; char_T devicePlugin_data [ 4096 ] ; char_T
localAbsPath [ 4096 ] ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ;
char_T b_value [ 13 ] ; char_T b [ 4 ] ; char_T g [ 4 ] ; char_T
options_Parity [ 4 ] ; boolean_T hasSyncError ; boolean_T varargin_10_DSR ;
static const char_T tmp [ 13 ] = { 'l' , 'i' , 't' , 't' , 'l' , 'e' , '-' ,
'e' , 'n' , 'd' , 'i' , 'a' , 'n' } ; int32_T converterFullPath_size [ 2 ] ;
int32_T deviceFullPath_size [ 2 ] ; int32_T converterPluginPath_size_idx_1 ;
int32_T devicePluginPath_size_idx_1 ; g [ 0 ] = obj -> Port [ 0 ] ; g [ 1 ] =
obj -> Port [ 1 ] ; g [ 2 ] = obj -> Port [ 2 ] ; g [ 3 ] = obj -> Port [ 3 ]
; coderComputeAbsolutePath ( "serialdevice.dll" , & localAbsPath [ 0 ] ) ;
fybnqznhrj ( localAbsPath , deviceFullPath_data , deviceFullPath_size ) ;
hasSyncError = ( deviceFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError ) {
success = deviceFullPath_size [ 1 ] ; loop_ub = deviceFullPath_size [ 1 ] ;
if ( loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , &
deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } }
else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\seriallib\\bin\\win64\\serialdevice.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , deviceFullPath_data ,
deviceFullPath_size ) ; hasSyncError = ( deviceFullPath_size [ 1 ] == 0 ) ;
if ( ! hasSyncError ) { success = deviceFullPath_size [ 1 ] ; loop_ub =
deviceFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub
* sizeof ( char_T ) ) ; } } else { success = 0 ; } } coderComputeAbsolutePath
( "serialcoderconverter.dll" , & localAbsPath [ 0 ] ) ; fybnqznhrj (
localAbsPath , converterFullPath_data , converterFullPath_size ) ;
hasSyncError = ( converterFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError )
{ deviceFullPath_size [ 1 ] = converterFullPath_size [ 1 ] ; loop_ub =
converterFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
deviceFullPath_data [ 0 ] , & converterFullPath_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } } else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\seriallib\\bin\\win64\\serialcoderconverter.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , converterFullPath_data
, converterFullPath_size ) ; hasSyncError = ( converterFullPath_size [ 1 ] ==
0 ) ; if ( ! hasSyncError ) { deviceFullPath_size [ 1 ] =
converterFullPath_size [ 1 ] ; loop_ub = converterFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & deviceFullPath_data [ 0 ] , &
converterFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
} else { deviceFullPath_size [ 1 ] = 0 ; } } obj_p = iobj_1 ;
converterFullPath_size [ 1 ] = success ; loop_ub = success ; if ( loop_ub - 1
>= 0 ) { memcpy ( & converterFullPath_data [ 0 ] , & devicePlugin_data [ 0 ]
, ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } success =
deviceFullPath_size [ 1 ] ; loop_ub = deviceFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , &
deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
streamLimits [ 0 ] = obj -> InputBufferSize ; streamLimits [ 1 ] = obj ->
OutputBufferSize ; obj_p -> CustomProps . CTS = true ; obj_p -> CustomProps .
DSR = true ; obj_p -> CustomProps . CD = true ; obj_p -> CustomProps . RING =
true ; obj_p -> CustomProps . InitAccess = true ; obj_p -> CustomProps .
SharedTimeout = 0.0 ; obj_p -> CustomProps . LatestNumBytesWrittenToDevice =
0ULL ; obj_p -> ChannelImpl = 0 ; devicePluginPath_size_idx_1 =
converterFullPath_size [ 1 ] ; loop_ub = converterFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & rtB . devicePluginPath_data [ 0 ] , &
converterFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
converterPluginPath_size_idx_1 = success ; loop_ub = success ; if ( loop_ub -
1 >= 0 ) { memcpy ( & rtB . converterPluginPath_data [ 0 ] , &
devicePlugin_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
success = devicePluginPath_size_idx_1 ; loop_ub = devicePluginPath_size_idx_1
; if ( loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , & rtB .
devicePluginPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
devicePluginPath_size_idx_1 = success + 1 ; if ( loop_ub - 1 >= 0 ) { memcpy
( & rtB . devicePluginPath_data [ 0 ] , & devicePlugin_data [ 0 ] , (
uint32_T ) loop_ub * sizeof ( char_T ) ) ; } rtB . devicePluginPath_data [
success ] = '\x00' ; success = converterPluginPath_size_idx_1 ; loop_ub =
converterPluginPath_size_idx_1 ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & rtB . converterPluginPath_data [ 0 ] , ( uint32_T
) loop_ub * sizeof ( char_T ) ) ; } converterPluginPath_size_idx_1 = success
+ 1 ; if ( loop_ub - 1 >= 0 ) { memcpy ( & rtB . converterPluginPath_data [ 0
] , & devicePlugin_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ;
} rtB . converterPluginPath_data [ success ] = '\x00' ; loop_ub =
devicePluginPath_size_idx_1 ; memcpy ( & rtB . b_devicePluginPath_data [ 0 ]
, & rtB . devicePluginPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; loop_ub = converterPluginPath_size_idx_1 ; memcpy ( & rtB .
devicePluginPath_data [ 0 ] , & rtB . converterPluginPath_data [ 0 ] , (
uint32_T ) loop_ub * sizeof ( char_T ) ) ; chImpl = coderChannelCreate ( &
rtB . b_devicePluginPath_data [ 0 ] , & rtB . devicePluginPath_data [ 0 ] ,
streamLimits [ 0 ] , streamLimits [ 1 ] , & errorID [ 0 ] , & errorText [ 0 ]
) ; obj_p -> ChannelImpl = chImpl ; chImpl = obj_p -> ChannelImpl ; b [ 0 ] =
g [ 0 ] ; b [ 1 ] = g [ 1 ] ; b [ 2 ] = g [ 2 ] ; b [ 3 ] = g [ 3 ] ;
streamLimits [ 0 ] = 9600.0 ; streamLimits [ 1 ] = 9600.0 ; options_Parity [
0 ] = 'n' ; options_Parity [ 1 ] = 'o' ; options_Parity [ 2 ] = 'n' ;
options_Parity [ 3 ] = 'e' ; e [ 0 ] = 1.0 ; e [ 1 ] = 1.0 ; c_value [ 0 ] =
8.0 ; c_value [ 1 ] = 8.0 ; g [ 0 ] = 'n' ; g [ 1 ] = 'o' ; g [ 2 ] = 'n' ; g
[ 3 ] = 'e' ; success = coderChannelInit ( chImpl , 6 , "ServiceName" ,
"char" , 4 , & b [ 0 ] , "BaudRate" , "double" , 1 , & streamLimits [ 0 ] ,
"Parity" , "char" , 4 , & options_Parity [ 0 ] , "StopBits" , "double" , 1 ,
& e [ 0 ] , "DataBits" , "double" , 1 , & c_value [ 0 ] , "FlowControl" ,
"char" , 4 , & g [ 0 ] ) ; if ( success == 0 ) { coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } b_obj = & obj_p -> InputStream ; chImpl = obj_p -> ChannelImpl ;
streamImpl = coderChannelGetInputStream ( chImpl ) ; b_obj -> StreamImpl =
streamImpl ; success = b_obj -> ExampleData -> size [ 0 ] * b_obj ->
ExampleData -> size [ 1 ] ; b_obj -> ExampleData -> size [ 0 ] = 1 ; b_obj ->
ExampleData -> size [ 1 ] = 1 ; mvpwqbdywu ( b_obj -> ExampleData , success )
; b_obj -> ExampleData -> data [ 0 ] = 0U ; b_obj -> matlabCodegenIsDeleted =
false ; b_obj_p = & obj_p -> OutputStream ; chImpl = obj_p -> ChannelImpl ;
streamImpl_p = coderChannelGetOutputStream ( chImpl ) ; b_obj_p -> StreamImpl
= streamImpl_p ; b_obj_p -> matlabCodegenIsDeleted = false ; obj_p ->
matlabCodegenIsDeleted = false ; obj -> AsyncIOChannel = obj_p ; if ( ( ! obj
-> IsSharingPort ) || ( ! obj -> IsSharingExistingTimeout ) ) { cysnr0poff (
obj ) ; } obj_e = iobj_0 ; obj_p = obj -> AsyncIOChannel ; obj_e ->
AsyncIOChannel = obj_p ; obj_i = obj_e ; for ( success = 0 ; success < 13 ;
success ++ ) { b_value [ success ] = tmp [ success ] ; } success = obj_i ->
ByteOrder -> size [ 0 ] * obj_i -> ByteOrder -> size [ 1 ] ; obj_i ->
ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = 0 ; obj_i ->
ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = 13 ;
kpntjfigjo ( obj_i -> ByteOrder , success ) ; for ( success = 0 ; success <
13 ; success ++ ) { obj_i -> ByteOrder -> data [ success ] = b_value [
success ] ; } b_obj_e = & obj_e -> UnreadDataBuffer ;
coderComputeAbsolutePath ( "buffer.dll" , & localAbsPath [ 0 ] ) ; fybnqznhrj
( localAbsPath , deviceFullPath_data , deviceFullPath_size ) ; hasSyncError =
( deviceFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError ) { success =
deviceFullPath_size [ 1 ] ; loop_ub = deviceFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , &
deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } }
else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\testmeaslib\\general\\bin\\win64\\buffer.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , deviceFullPath_data ,
deviceFullPath_size ) ; hasSyncError = ( deviceFullPath_size [ 1 ] == 0 ) ;
if ( ! hasSyncError ) { success = deviceFullPath_size [ 1 ] ; loop_ub =
deviceFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub
* sizeof ( char_T ) ) ; } } else { success = 0 ; } } coderComputeAbsolutePath
( "buffercoderconverter.dll" , & localAbsPath [ 0 ] ) ; fybnqznhrj (
localAbsPath , converterFullPath_data , converterFullPath_size ) ;
hasSyncError = ( converterFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError )
{ deviceFullPath_size [ 1 ] = converterFullPath_size [ 1 ] ; loop_ub =
converterFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
deviceFullPath_data [ 0 ] , & converterFullPath_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } } else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\testmeaslib\\general\\bin\\win64\\buffercoderconverter.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , converterFullPath_data
, converterFullPath_size ) ; hasSyncError = ( converterFullPath_size [ 1 ] ==
0 ) ; if ( ! hasSyncError ) { deviceFullPath_size [ 1 ] =
converterFullPath_size [ 1 ] ; loop_ub = converterFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & deviceFullPath_data [ 0 ] , &
converterFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
} else { deviceFullPath_size [ 1 ] = 0 ; } } converterFullPath_size [ 1 ] =
success ; loop_ub = success ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
converterFullPath_data [ 0 ] , & devicePlugin_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } success = deviceFullPath_size [ 1 ] ;
loop_ub = deviceFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub
* sizeof ( char_T ) ) ; } b_obj_e -> ChannelImpl = 0 ;
devicePluginPath_size_idx_1 = converterFullPath_size [ 1 ] ; loop_ub =
converterFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & rtB .
devicePluginPath_data [ 0 ] , & converterFullPath_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } converterPluginPath_size_idx_1 = success ;
loop_ub = success ; if ( loop_ub - 1 >= 0 ) { memcpy ( & rtB .
converterPluginPath_data [ 0 ] , & devicePlugin_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } success = devicePluginPath_size_idx_1 ;
loop_ub = devicePluginPath_size_idx_1 ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & rtB . devicePluginPath_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } devicePluginPath_size_idx_1 = success + 1 ;
if ( loop_ub - 1 >= 0 ) { memcpy ( & rtB . devicePluginPath_data [ 0 ] , &
devicePlugin_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } rtB
. devicePluginPath_data [ success ] = '\x00' ; success =
converterPluginPath_size_idx_1 ; loop_ub = converterPluginPath_size_idx_1 ;
if ( loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , & rtB .
converterPluginPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ;
} converterPluginPath_size_idx_1 = success + 1 ; if ( loop_ub - 1 >= 0 ) {
memcpy ( & rtB . converterPluginPath_data [ 0 ] , & devicePlugin_data [ 0 ] ,
( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } rtB . converterPluginPath_data
[ success ] = '\x00' ; loop_ub = devicePluginPath_size_idx_1 ; memcpy ( & rtB
. b_devicePluginPath_data [ 0 ] , & rtB . devicePluginPath_data [ 0 ] , (
uint32_T ) loop_ub * sizeof ( char_T ) ) ; loop_ub =
converterPluginPath_size_idx_1 ; memcpy ( & rtB . devicePluginPath_data [ 0 ]
, & rtB . converterPluginPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; chImpl = coderChannelCreate ( & rtB . b_devicePluginPath_data [
0 ] , & rtB . devicePluginPath_data [ 0 ] , ( rtInf ) , 0.0 , & errorID [ 0 ]
, & errorText [ 0 ] ) ; b_obj_e -> ChannelImpl = chImpl ; chImpl = b_obj_e ->
ChannelImpl ; success = coderChannelInit ( chImpl , 0 ) ; if ( success == 0 )
{ coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError
) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } b_obj = & b_obj_e -> InputStream ; chImpl = b_obj_e
-> ChannelImpl ; streamImpl = coderChannelGetInputStream ( chImpl ) ; b_obj
-> StreamImpl = streamImpl ; success = b_obj -> ExampleData -> size [ 0 ] *
b_obj -> ExampleData -> size [ 1 ] ; b_obj -> ExampleData -> size [ 0 ] = 1 ;
b_obj -> ExampleData -> size [ 1 ] = 1 ; mvpwqbdywu ( b_obj -> ExampleData ,
success ) ; b_obj -> ExampleData -> data [ 0 ] = 0U ; b_obj ->
matlabCodegenIsDeleted = false ; b_obj_p = & b_obj_e -> OutputStream ; chImpl
= b_obj_e -> ChannelImpl ; streamImpl_p = coderChannelGetOutputStream (
chImpl ) ; b_obj_p -> StreamImpl = streamImpl_p ; b_obj_p ->
matlabCodegenIsDeleted = false ; b_obj_e -> matlabCodegenIsDeleted = false ;
b_obj_e = & obj_e -> UnreadDataBuffer ; obj_m = b_obj_e ; chImpl = obj_m ->
ChannelImpl ; success = coderChannelIsOpen ( chImpl , & varargin_10_DSR ) ;
if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ;
if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] ,
& errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( ! varargin_10_DSR ) { chImpl =
b_obj_e -> ChannelImpl ; success = coderChannelOpen ( chImpl , 0 ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } } obj_e -> matlabCodegenIsDeleted =
false ; obj -> TransportChannel = obj_e ; obj_e = obj -> TransportChannel ;
for ( success = 0 ; success < 13 ; success ++ ) { b_value [ success ] = tmp [
success ] ; } success = obj_e -> ByteOrder -> size [ 0 ] * obj_e -> ByteOrder
-> size [ 1 ] ; obj_e -> ByteOrder -> size [ 0 ] = 1 ; obj_e -> ByteOrder ->
size [ 1 ] = 0 ; obj_e -> ByteOrder -> size [ 0 ] = 1 ; obj_e -> ByteOrder ->
size [ 1 ] = 13 ; kpntjfigjo ( obj_e -> ByteOrder , success ) ; for ( success
= 0 ; success < 13 ; success ++ ) { obj_e -> ByteOrder -> data [ success ] =
b_value [ success ] ; } } static boolean_T h5nfwugf2u ( ghe5ys4xtm * obj ) {
CoderChannel chImpl ; dq2uwawv51 * obj_p ; int32_T success ; char_T errorID [
1024 ] ; char_T errorText [ 1024 ] ; boolean_T hasSyncError ; boolean_T
result ; obj_p = obj -> AsyncIOChannel ; chImpl = obj_p -> ChannelImpl ;
success = coderChannelIsOpen ( chImpl , & result ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } result = ! result ; return ! result ; } static void
pz01orbdte ( lytfstpiri * * pEmxArray ) { if ( * pEmxArray != ( lytfstpiri *
) NULL ) { if ( ( ( * pEmxArray ) -> data != ( char_T * ) NULL ) && ( *
pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( (
* pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( lytfstpiri *
) NULL ; } } static boolean_T oucphsjogg ( ghe5ys4xtm * obj ) { CoderChannel
chImpl ; dq2uwawv51 * obj_e ; ghe5ys4xtm * obj_p ; int32_T success ; char_T
errorID [ 1024 ] ; char_T errorText [ 1024 ] ; boolean_T b_value ; boolean_T
hasSyncError ; obj_p = obj ; obj_e = obj_p -> AsyncIOChannel ; chImpl = obj_e
-> ChannelImpl ; success = coderChannelIsOpen ( chImpl , & hasSyncError ) ;
if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ;
if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] ,
& errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ;
chImpl = obj_e -> ChannelImpl ; success = coderChannelExecute ( chImpl ,
"GetInitAccessStatus" , 0 ) ; if ( success == 0 ) { coderChannelHasSyncError
( chImpl , & hasSyncError ) ; if ( ! hasSyncError ) {
coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; }
else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText
[ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ; b_value = obj_e -> CustomProps
. InitAccess ; chImpl = obj_e -> ChannelImpl ; success =
coderChannelGetPropertyValue ( chImpl , "InitAccess" , "logical" , 1 , &
b_value ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } return b_value ; }
static void njrxz2czen ( ghe5ys4xtm * obj ) { CoderChannel chImpl ;
dq2uwawv51 * obj_g ; dq2uwawv51 * obj_p ; gegd1nhtze * obj_i ; ghe5ys4xtm *
obj_e ; ghe5ys4xtm * obj_j ; ghe5ys4xtm * obj_m ; lytfstpiri * d_value ;
lytfstpiri * options_FlowControl ; lytfstpiri * options_FlowControl_p ;
lytfstpiri * options_Parity ; real_T b_value [ 2 ] ; real_T c_value [ 2 ] ;
real_T e [ 2 ] ; real_T out ; real_T out_e ; real_T out_p ; int32_T minnanb ;
int32_T na ; int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [
1024 ] ; char_T b_b [ 13 ] ; char_T b [ 4 ] ; char_T x ; char_T y ; boolean_T
e_value [ 2 ] ; boolean_T h [ 2 ] ; boolean_T i [ 2 ] ; boolean_T
hasSyncError ; boolean_T options_IsSharingExistingTimeout ; boolean_T
options_IsSharingPort ; boolean_T options_IsWriteOnly ; boolean_T result ;
static const char_T tmp [ 13 ] = { 'l' , 'i' , 't' , 't' , 'l' , 'e' , '-' ,
'e' , 'n' , 'd' , 'i' , 'a' , 'n' } ; static const char_T tmp_p [ 10 ] = {
'b' , 'i' , 'g' , '-' , 'e' , 'n' , 'd' , 'i' , 'a' , 'n' } ; static const
char_T tmp_e [ 128 ] = { '\x00' , '\x01' , '\x02' , '\x03' , '\x04' , '\x05'
, '\x06' , '\a' , '\b' , '\t' , '\n' , '\v' , '\f' , '\r' , '\x0e' , '\x0f' ,
'\x10' , '\x11' , '\x12' , '\x13' , '\x14' , '\x15' , '\x16' , '\x17' ,
'\x18' , '\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' , '\x1e' , '\x1f' , ' ' ,
'!' , '\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')' , '*' , '+' , ',' , '-'
, '.' , '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , ':'
, ';' , '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g'
, 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't'
, 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' , ']' , '^' , '_' , '`' ,
'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' ,
'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' ,
'{' , '|' , '}' , '~' , '\x7f' } ; int32_T exitg1 ; int32_T i_p ; const
char_T * table ; boolean_T guard1 ; obj_p = obj -> AsyncIOChannel ; chImpl =
obj_p -> ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ;
if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ;
if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] ,
& errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = obj ; b [ 0 ] = obj_e ->
Port [ 0 ] ; b [ 1 ] = obj_e -> Port [ 1 ] ; b [ 2 ] = obj_e -> Port [ 2 ] ;
b [ 3 ] = obj_e -> Port [ 3 ] ; obj_m = obj_e ; out = obj_m -> BaudRate ;
obj_m = obj_e ; jjdsoglm4u ( & d_value , 2 ) ; i_p = d_value -> size [ 0 ] *
d_value -> size [ 1 ] ; d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] =
obj_m -> Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ; minnanb =
obj_m -> Parity -> size [ 1 ] ; for ( i_p = 0 ; i_p < minnanb ; i_p ++ ) {
d_value -> data [ i_p ] = obj_m -> Parity -> data [ i_p ] ; } obj_m = obj_e ;
out_p = obj_m -> StopBits ; obj_m = obj_e ; out_e = obj_m -> DataBits ; obj_m
= obj_e ; jjdsoglm4u ( & options_FlowControl , 2 ) ; i_p =
options_FlowControl -> size [ 0 ] * options_FlowControl -> size [ 1 ] ;
options_FlowControl -> size [ 0 ] = 1 ; options_FlowControl -> size [ 1 ] =
obj_m -> FlowControl -> size [ 1 ] ; kpntjfigjo ( options_FlowControl , i_p )
; minnanb = obj_m -> FlowControl -> size [ 1 ] ; for ( i_p = 0 ; i_p <
minnanb ; i_p ++ ) { options_FlowControl -> data [ i_p ] = obj_m ->
FlowControl -> data [ i_p ] ; } options_IsWriteOnly = obj_e -> IsWriteOnly ;
options_IsSharingPort = obj_e -> IsSharingPort ;
options_IsSharingExistingTimeout = obj_e -> IsSharingExistingTimeout ; obj_p
= obj_e -> AsyncIOChannel ; jjdsoglm4u ( & options_Parity , 2 ) ; i_p =
options_Parity -> size [ 0 ] * options_Parity -> size [ 1 ] ; options_Parity
-> size [ 0 ] = 1 ; options_Parity -> size [ 1 ] = d_value -> size [ 1 ] ;
kpntjfigjo ( options_Parity , i_p ) ; minnanb = d_value -> size [ 1 ] ; if (
minnanb - 1 >= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , & d_value ->
data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T ) ) ; } jjdsoglm4u ( &
options_FlowControl_p , 2 ) ; i_p = options_FlowControl_p -> size [ 0 ] *
options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p -> size [ 0 ] = 1
; options_FlowControl_p -> size [ 1 ] = options_FlowControl -> size [ 1 ] ;
kpntjfigjo ( options_FlowControl_p , i_p ) ; minnanb = options_FlowControl ->
size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & options_FlowControl_p ->
data [ 0 ] , & options_FlowControl -> data [ 0 ] , ( uint32_T ) minnanb *
sizeof ( char_T ) ) ; } obj_g = obj_p ; chImpl = obj_g -> ChannelImpl ;
success = coderChannelIsOpen ( chImpl , & result ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( ! result ) { chImpl = obj_p -> ChannelImpl ; i_p
= d_value -> size [ 0 ] * d_value -> size [ 1 ] ; d_value -> size [ 0 ] = 1 ;
d_value -> size [ 1 ] = options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value ,
i_p ) ; minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) {
memcpy ( & d_value -> data [ 0 ] , & options_Parity -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_FlowControl ->
size [ 0 ] * options_FlowControl -> size [ 1 ] ; options_FlowControl -> size
[ 0 ] = 1 ; options_FlowControl -> size [ 1 ] = options_FlowControl_p -> size
[ 1 ] ; kpntjfigjo ( options_FlowControl , i_p ) ; minnanb =
options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_FlowControl -> data [ 0 ] , & options_FlowControl_p -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_Parity -> size [ 0
] * options_Parity -> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ;
options_Parity -> size [ 1 ] = d_value -> size [ 1 ] ; kpntjfigjo (
options_Parity , i_p ) ; minnanb = d_value -> size [ 1 ] ; if ( minnanb - 1
>= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , & d_value -> data [ 0 ] ,
( uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_FlowControl_p ->
size [ 0 ] * options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p ->
size [ 0 ] = 1 ; options_FlowControl_p -> size [ 1 ] = options_FlowControl ->
size [ 1 ] ; kpntjfigjo ( options_FlowControl_p , i_p ) ; minnanb =
options_FlowControl -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_FlowControl_p -> data [ 0 ] , & options_FlowControl -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } c_value [ 0 ] = out ; c_value [
1 ] = out ; b_value [ 0 ] = c_value [ 0 ] ; b_value [ 1 ] = c_value [ 1 ] ;
success = options_Parity -> size [ 1 ] ; result = ( options_Parity -> size [
1 ] == 1 ) ; if ( result ) { i_p = d_value -> size [ 0 ] * d_value -> size [
1 ] ; d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] = options_Parity ->
size [ 1 ] + options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ;
minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
d_value -> data [ 0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb
* sizeof ( char_T ) ) ; } minnanb = options_Parity -> size [ 1 ] ; for ( i_p
= 0 ; i_p < minnanb ; i_p ++ ) { d_value -> data [ i_p + options_Parity ->
size [ 1 ] ] = options_Parity -> data [ i_p ] ; } } else { i_p = d_value ->
size [ 0 ] * d_value -> size [ 1 ] ; d_value -> size [ 0 ] = 1 ; d_value ->
size [ 1 ] = options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ;
minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
d_value -> data [ 0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb
* sizeof ( char_T ) ) ; } } i_p = options_Parity -> size [ 0 ] *
options_Parity -> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ;
options_Parity -> size [ 1 ] = d_value -> size [ 1 ] ; kpntjfigjo (
options_Parity , i_p ) ; minnanb = d_value -> size [ 1 ] ; if ( minnanb - 1
>= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , & d_value -> data [ 0 ] ,
( uint32_T ) minnanb * sizeof ( char_T ) ) ; } c_value [ 0 ] = out_p ;
c_value [ 1 ] = out_p ; e [ 0 ] = c_value [ 0 ] ; e [ 1 ] = c_value [ 1 ] ;
c_value [ 0 ] = out_e ; c_value [ 1 ] = out_e ; na = options_FlowControl_p ->
size [ 1 ] ; result = ( options_FlowControl_p -> size [ 1 ] == 1 ) ; if (
result ) { i_p = d_value -> size [ 0 ] * d_value -> size [ 1 ] ; d_value ->
size [ 0 ] = 1 ; d_value -> size [ 1 ] = options_FlowControl_p -> size [ 1 ]
+ options_FlowControl_p -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ;
minnanb = options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) {
memcpy ( & d_value -> data [ 0 ] , & options_FlowControl_p -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } minnanb = options_FlowControl_p
-> size [ 1 ] ; for ( i_p = 0 ; i_p < minnanb ; i_p ++ ) { d_value -> data [
i_p + options_FlowControl_p -> size [ 1 ] ] = options_FlowControl_p -> data [
i_p ] ; } } else { i_p = d_value -> size [ 0 ] * d_value -> size [ 1 ] ;
d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] = options_FlowControl_p ->
size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ; minnanb = options_FlowControl_p
-> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & d_value -> data [ 0 ] ,
& options_FlowControl_p -> data [ 0 ] , ( uint32_T ) minnanb * sizeof (
char_T ) ) ; } } i_p = options_FlowControl_p -> size [ 0 ] *
options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p -> size [ 0 ] = 1
; options_FlowControl_p -> size [ 1 ] = d_value -> size [ 1 ] ; kpntjfigjo (
options_FlowControl_p , i_p ) ; minnanb = d_value -> size [ 1 ] ; if (
minnanb - 1 >= 0 ) { memcpy ( & options_FlowControl_p -> data [ 0 ] , &
d_value -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T ) ) ; }
e_value [ 0 ] = options_IsWriteOnly ; e_value [ 1 ] = options_IsWriteOnly ; h
[ 0 ] = e_value [ 0 ] ; h [ 1 ] = e_value [ 1 ] ; e_value [ 0 ] =
options_IsSharingPort ; e_value [ 1 ] = options_IsSharingPort ; i [ 0 ] =
e_value [ 0 ] ; i [ 1 ] = e_value [ 1 ] ; e_value [ 0 ] =
options_IsSharingExistingTimeout ; e_value [ 1 ] =
options_IsSharingExistingTimeout ; i_p = d_value -> size [ 0 ] * d_value ->
size [ 1 ] ; d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] =
options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ; minnanb =
options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & d_value
-> data [ 0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb *
sizeof ( char_T ) ) ; } i_p = options_Parity -> size [ 0 ] * options_Parity
-> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ; options_Parity -> size [ 1
] = options_FlowControl_p -> size [ 1 ] ; kpntjfigjo ( options_Parity , i_p )
; minnanb = options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) {
memcpy ( & options_Parity -> data [ 0 ] , & options_FlowControl_p -> data [ 0
] , ( uint32_T ) minnanb * sizeof ( char_T ) ) ; } success = coderChannelOpen
( chImpl , 9 , "ServiceName" , "char" , 4 , & b [ 0 ] , "BaudRate" , "double"
, 1 , & b_value [ 0 ] , "Parity" , "char" , success , & d_value -> data [ 0 ]
, "StopBits" , "double" , 1 , & e [ 0 ] , "DataBits" , "double" , 1 , &
c_value [ 0 ] , "FlowControl" , "char" , na , & options_Parity -> data [ 0 ]
, "IsWriteOnly" , "logical" , 1 , & h [ 0 ] , "IsSharingPort" , "logical" , 1
, & i [ 0 ] , "IsSharingExistingTimeout" , "logical" , 1 , & e_value [ 0 ] )
; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError )
; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ]
, & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } } pz01orbdte ( & d_value ) ;
pz01orbdte ( & options_FlowControl ) ; if ( obj_e -> IsSharingPort && ( !
obj_e -> IsSharingExistingTimeout ) && oucphsjogg ( obj_e ) ) { obj_m = obj_e
; out = cysnr0poff ( obj_e ) ; obj_j = obj_m ; obj_p = obj_j ->
AsyncIOChannel ; chImpl = obj_p -> ChannelImpl ; success = coderChannelIsOpen
( chImpl , & result ) ; if ( success == 0 ) { coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } obj_p = obj_m -> AsyncIOChannel ; chImpl = obj_p -> ChannelImpl ;
b_value [ 0 ] = out ; b_value [ 1 ] = out ; success = coderChannelExecute (
chImpl , "SetSharedTimeout" , 1 , "SharedTimeout" , "double" , 1 , & b_value
[ 0 ] ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } } cysnr0poff ( obj_e )
; obj_e = obj ; i_p = options_Parity -> size [ 0 ] * options_Parity -> size [
1 ] ; options_Parity -> size [ 0 ] = 1 ; options_Parity -> size [ 1 ] = obj_e
-> ByteOrder -> size [ 1 ] ; kpntjfigjo ( options_Parity , i_p ) ; minnanb =
obj_e -> ByteOrder -> size [ 1 ] ; for ( i_p = 0 ; i_p < minnanb ; i_p ++ ) {
options_Parity -> data [ i_p ] = obj_e -> ByteOrder -> data [ i_p ] ; } obj_i
= obj -> TransportChannel ; i_p = options_FlowControl_p -> size [ 0 ] *
options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p -> size [ 0 ] = 1
; options_FlowControl_p -> size [ 1 ] = options_Parity -> size [ 1 ] ;
kpntjfigjo ( options_FlowControl_p , i_p ) ; minnanb = options_Parity -> size
[ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & options_FlowControl_p -> data [
0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T
) ) ; } success = options_FlowControl_p -> size [ 1 ] ; out = success ; i_p =
options_Parity -> size [ 0 ] * options_Parity -> size [ 1 ] ; options_Parity
-> size [ 0 ] = 1 ; options_Parity -> size [ 1 ] = options_FlowControl_p ->
size [ 1 ] ; kpntjfigjo ( options_Parity , i_p ) ; minnanb =
options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_Parity -> data [ 0 ] , & options_FlowControl_p -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } success = ( int32_T ) out ; i_p
= options_FlowControl_p -> size [ 0 ] * options_FlowControl_p -> size [ 1 ] ;
options_FlowControl_p -> size [ 0 ] = 1 ; options_FlowControl_p -> size [ 1 ]
= options_Parity -> size [ 1 ] ; kpntjfigjo ( options_FlowControl_p , i_p ) ;
minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_FlowControl_p -> data [ 0 ] , & options_Parity -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_Parity -> size [ 0
] * options_Parity -> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ;
options_Parity -> size [ 1 ] = options_FlowControl_p -> size [ 1 ] ;
kpntjfigjo ( options_Parity , i_p ) ; minnanb = options_FlowControl_p -> size
[ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , &
options_FlowControl_p -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T
) ) ; } pz01orbdte ( & options_FlowControl_p ) ; for ( i_p = 0 ; i_p < 13 ;
i_p ++ ) { b_b [ i_p ] = tmp [ i_p ] ; } options_IsWriteOnly = false ; na =
options_Parity -> size [ 1 ] ; minnanb = muIntScalarMin_sint32 ( na , 13 ) ;
guard1 = false ; if ( success <= minnanb ) { success = muIntScalarMin_sint32
( minnanb , success ) ; guard1 = true ; } else if ( na == 13 ) { success = 13
; guard1 = true ; } if ( guard1 ) { success -- ; na = 1 ; do { exitg1 = 0 ;
if ( na - 1 <= success ) { minnanb = na - 1 ; x = options_Parity -> data [
minnanb ] ; table = & tmp_e [ 0 ] ; y = table [ ( uint8_T ) x & 127 ] ; x =
b_b [ minnanb ] ; table = & tmp_e [ 0 ] ; x = table [ ( int32_T ) x ] ; if (
y != x ) { exitg1 = 1 ; } else { na ++ ; } } else { options_IsWriteOnly =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } pz01orbdte ( &
options_Parity ) ; if ( options_IsWriteOnly ) { success = 13 ; for ( i_p = 0
; i_p < 13 ; i_p ++ ) { b_b [ i_p ] = tmp [ i_p ] ; } } else { success = 10 ;
for ( i_p = 0 ; i_p < 10 ; i_p ++ ) { b_b [ i_p ] = tmp_p [ i_p ] ; } } i_p =
obj_i -> ByteOrder -> size [ 0 ] * obj_i -> ByteOrder -> size [ 1 ] ; obj_i
-> ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = 0 ; obj_i
-> ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = success ;
kpntjfigjo ( obj_i -> ByteOrder , i_p ) ; minnanb = success - 1 ; for ( i_p =
0 ; i_p <= minnanb ; i_p ++ ) { obj_i -> ByteOrder -> data [ i_p ] = b_b [
i_p ] ; } } static void i44lbymuat ( av3iswzhoj * obj ) { CoderChannel chImpl
; av3iswzhoj * obj_p ; dq2uwawv51 * obj_m ; gegd1nhtze * obj_g ; ghe5ys4xtm *
b_obj ; ghe5ys4xtm * obj_e ; ghe5ys4xtm * obj_i ; lytfstpiri * out ; real_T
b_value_p [ 2 ] ; int32_T loop_ub ; int32_T success ; char_T errorID [ 1024 ]
; char_T errorText [ 1024 ] ; char_T b_value [ 13 ] ; char_T val [ 5 ] ;
char_T b [ 4 ] ; boolean_T hasSyncError ; static const char_T tmp [ 13 ] = {
'l' , 'i' , 't' , 't' , 'l' , 'e' , '-' , 'e' , 'n' , 'd' , 'i' , 'a' , 'n' }
; static const char_T tmp_p [ 5 ] = { 'u' , 'i' , 'n' , 't' , '8' } ; obj ->
isSetupComplete = false ; obj -> isInitialized = 1 ; obj_p = obj ; b_obj = &
obj_p -> SerialObj ; b_obj -> IsSharingPort = false ; b_obj ->
IsSharingExistingTimeout = false ; b_obj -> Timeout = 10.0 ; b_obj ->
InputBufferSize = ( rtInf ) ; b_obj -> OutputBufferSize = ( rtInf ) ; b_obj
-> Port [ 0 ] = 'C' ; b_obj -> Port [ 1 ] = 'O' ; b_obj -> Port [ 2 ] = 'M' ;
b_obj -> Port [ 3 ] = '9' ; o2hjpb1san ( b_obj , & b_obj -> _pobj0 , & b_obj
-> _pobj1 ) ; obj_e = b_obj ; obj_i = obj_e ; if ( h5nfwugf2u ( obj_i ) ) {
obj_m = obj_i -> AsyncIOChannel ; chImpl = obj_m -> ChannelImpl ; b_value_p [
0 ] = 1.0E+6 ; b_value_p [ 1 ] = 1.0E+6 ; success = coderChannelExecute (
chImpl , "SetBaudRate" , 1 , "BaudRate" , "double" , 1 , & b_value_p [ 0 ] )
; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError )
; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ]
, & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } } obj_i -> BaudRate = 1.0E+6 ;
obj_i = obj_e ; if ( h5nfwugf2u ( obj_i ) ) { obj_m = obj_i -> AsyncIOChannel
; chImpl = obj_m -> ChannelImpl ; b_value_p [ 0 ] = 8.0 ; b_value_p [ 1 ] =
8.0 ; success = coderChannelExecute ( chImpl , "SetDataBits" , 1 , "DataBits"
, "double" , 1 , & b_value_p [ 0 ] ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } obj_i -> DataBits = 8.0 ; obj_i = obj_e ; if (
h5nfwugf2u ( obj_i ) ) { obj_m = obj_i -> AsyncIOChannel ; chImpl = obj_m ->
ChannelImpl ; b [ 0 ] = 'n' ; b [ 1 ] = 'o' ; b [ 2 ] = 'n' ; b [ 3 ] = 'e' ;
success = coderChannelExecute ( chImpl , "SetParity" , 1 , "Parity" , "char"
, 4 , & b [ 0 ] ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl ,
& hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl
, & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } } success = obj_i -> Parity -> size [ 0 ] * obj_i -> Parity -> size [ 1
] ; obj_i -> Parity -> size [ 0 ] = 1 ; obj_i -> Parity -> size [ 1 ] = 0 ;
obj_i -> Parity -> size [ 0 ] = 1 ; obj_i -> Parity -> size [ 1 ] = 4 ;
kpntjfigjo ( obj_i -> Parity , success ) ; obj_i -> Parity -> data [ 0 ] =
'n' ; obj_i -> Parity -> data [ 1 ] = 'o' ; obj_i -> Parity -> data [ 2 ] =
'n' ; obj_i -> Parity -> data [ 3 ] = 'e' ; obj_i = obj_e ; if ( h5nfwugf2u (
obj_i ) ) { obj_m = obj_i -> AsyncIOChannel ; chImpl = obj_m -> ChannelImpl ;
b_value_p [ 0 ] = 1.0 ; b_value_p [ 1 ] = 1.0 ; success = coderChannelExecute
( chImpl , "SetStopBits" , 1 , "StopBits" , "double" , 1 , & b_value_p [ 0 ]
) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError
) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0
] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } } obj_i -> StopBits = 1.0 ; obj_i =
obj_e ; if ( h5nfwugf2u ( obj_i ) ) { obj_m = obj_i -> AsyncIOChannel ;
chImpl = obj_m -> ChannelImpl ; b [ 0 ] = 'n' ; b [ 1 ] = 'o' ; b [ 2 ] = 'n'
; b [ 3 ] = 'e' ; success = coderChannelExecute ( chImpl , "SetFlowControl" ,
1 , "FlowControl" , "char" , 4 , & b [ 0 ] ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } success = obj_i -> FlowControl -> size [ 0 ] *
obj_i -> FlowControl -> size [ 1 ] ; obj_i -> FlowControl -> size [ 0 ] = 1 ;
obj_i -> FlowControl -> size [ 1 ] = 0 ; obj_i -> FlowControl -> size [ 0 ] =
1 ; obj_i -> FlowControl -> size [ 1 ] = 4 ; kpntjfigjo ( obj_i ->
FlowControl , success ) ; obj_i -> FlowControl -> data [ 0 ] = 'n' ; obj_i ->
FlowControl -> data [ 1 ] = 'o' ; obj_i -> FlowControl -> data [ 2 ] = 'n' ;
obj_i -> FlowControl -> data [ 3 ] = 'e' ; obj_i = obj_e ; obj_g = obj_i ->
TransportChannel ; for ( success = 0 ; success < 13 ; success ++ ) { b_value
[ success ] = tmp [ success ] ; } success = obj_g -> ByteOrder -> size [ 0 ]
* obj_g -> ByteOrder -> size [ 1 ] ; obj_g -> ByteOrder -> size [ 0 ] = 1 ;
obj_g -> ByteOrder -> size [ 1 ] = 0 ; obj_g -> ByteOrder -> size [ 0 ] = 1 ;
obj_g -> ByteOrder -> size [ 1 ] = 13 ; kpntjfigjo ( obj_g -> ByteOrder ,
success ) ; for ( success = 0 ; success < 13 ; success ++ ) { obj_g ->
ByteOrder -> data [ success ] = b_value [ success ] ; } obj_i -> ByteOrder ->
size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = 0 ; obj_g = obj_i ->
TransportChannel ; jjdsoglm4u ( & out , 2 ) ; success = out -> size [ 0 ] *
out -> size [ 1 ] ; out -> size [ 0 ] = 1 ; out -> size [ 1 ] = obj_g ->
ByteOrder -> size [ 1 ] ; kpntjfigjo ( out , success ) ; loop_ub = obj_g ->
ByteOrder -> size [ 1 ] ; for ( success = 0 ; success < loop_ub ; success ++
) { out -> data [ success ] = obj_g -> ByteOrder -> data [ success ] ; }
success = obj_i -> ByteOrder -> size [ 0 ] * obj_i -> ByteOrder -> size [ 1 ]
; obj_i -> ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] =
out -> size [ 1 ] ; kpntjfigjo ( obj_i -> ByteOrder , success ) ; loop_ub =
out -> size [ 1 ] - 1 ; for ( success = 0 ; success <= loop_ub ; success ++ )
{ obj_i -> ByteOrder -> data [ success ] = out -> data [ success ] ; }
pz01orbdte ( & out ) ; obj_i = obj_e ; if ( ! obj_i ->
IsSharingExistingTimeout ) { obj_i -> Timeout = 1.0 ; } obj_i = obj_e ; obj_i
-> IsWriteOnly = true ; obj_i = obj_e ; obj_i -> IsSharingPort = true ; obj_e
-> IsSharingExistingTimeout = false ; obj_e = b_obj ; for ( success = 0 ;
success < 5 ; success ++ ) { val [ success ] = tmp_p [ success ] ; } success
= obj_e -> NativeDataType -> size [ 0 ] * obj_e -> NativeDataType -> size [ 1
] ; obj_e -> NativeDataType -> size [ 0 ] = 1 ; obj_e -> NativeDataType ->
size [ 1 ] = 0 ; obj_e -> NativeDataType -> size [ 0 ] = 1 ; obj_e ->
NativeDataType -> size [ 1 ] = 5 ; kpntjfigjo ( obj_e -> NativeDataType ,
success ) ; for ( success = 0 ; success < 5 ; success ++ ) { obj_e ->
NativeDataType -> data [ success ] = val [ success ] ; } obj_e = b_obj ;
success = obj_e -> DataFieldName -> size [ 0 ] * obj_e -> DataFieldName ->
size [ 1 ] ; obj_e -> DataFieldName -> size [ 0 ] = 1 ; obj_e ->
DataFieldName -> size [ 1 ] = 0 ; obj_e -> DataFieldName -> size [ 0 ] = 1 ;
obj_e -> DataFieldName -> size [ 1 ] = 4 ; kpntjfigjo ( obj_e ->
DataFieldName , success ) ; obj_e -> DataFieldName -> data [ 0 ] = 'D' ;
obj_e -> DataFieldName -> data [ 1 ] = 'a' ; obj_e -> DataFieldName -> data [
2 ] = 't' ; obj_e -> DataFieldName -> data [ 3 ] = 'a' ; b_obj ->
matlabCodegenIsDeleted = false ; njrxz2czen ( & obj_p -> SerialObj ) ;
oucphsjogg ( & obj_p -> SerialObj ) ; obj -> isSetupComplete = true ; }
static void gbuawyfqmjy ( fxbyyv51o23 * pStruct ) { je0z0vljge ( & pStruct ->
PartialPacket , 2 ) ; je0z0vljge ( & pStruct -> ExampleData , 2 ) ; } static
void mszgu3hpfgu3 ( pxjtq3ygk0g * pStruct ) { gbuawyfqmjy ( & pStruct ->
InputStream ) ; je0z0vljge ( & pStruct -> PartialPacket , 2 ) ; } static void
n3ofwy3xwdh ( gegd1nhtzev * pStruct ) { mszgu3hpfgu3 ( & pStruct ->
UnreadDataBuffer ) ; jjdsoglm4u ( & pStruct -> ByteOrder , 2 ) ; jjdsoglm4u (
& pStruct -> NativeDataType , 2 ) ; jjdsoglm4u ( & pStruct -> DataFieldName ,
2 ) ; } static void mszgu3hpfgu3y ( dq2uwawv51k * pStruct ) { gbuawyfqmjy ( &
pStruct -> InputStream ) ; } static void pkp1puafs3k ( ghe5ys4xtmd * pStruct
) { jjdsoglm4u ( & pStruct -> ByteOrder , 2 ) ; jjdsoglm4u ( & pStruct ->
NativeDataType , 2 ) ; jjdsoglm4u ( & pStruct -> DataFieldName , 2 ) ;
jjdsoglm4u ( & pStruct -> FlowControl , 2 ) ; jjdsoglm4u ( & pStruct ->
Parity , 2 ) ; n3ofwy3xwdh ( & pStruct -> _pobj0 ) ; mszgu3hpfgu3y ( &
pStruct -> _pobj1 ) ; } static void prmzlmusmb ( m31jye1cpy * pStruct ) {
pkp1puafs3k ( & pStruct -> SerialObj ) ; } static real_T cysnr0poffu (
ghe5ys4xtmd * obj ) { CoderChannel chImpl ; dq2uwawv51k * obj_e ; ghe5ys4xtmd
* obj_p ; real_T b_value ; int32_T success ; char_T errorID [ 1024 ] ; char_T
errorText [ 1024 ] ; boolean_T hasSyncError ; if ( ! obj ->
IsSharingExistingTimeout ) { b_value = obj -> Timeout ; } else { obj_p = obj
; obj_e = obj_p -> AsyncIOChannel ; chImpl = obj_e -> ChannelImpl ; success =
coderChannelIsOpen ( chImpl , & hasSyncError ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ; chImpl = obj_e ->
ChannelImpl ; success = coderChannelExecute ( chImpl , "GetSharedTimeout" , 0
) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError
) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0
] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ;
b_value = obj_e -> CustomProps . SharedTimeout ; chImpl = obj_e ->
ChannelImpl ; success = coderChannelGetPropertyValue ( chImpl ,
"SharedTimeout" , "double" , 1 , & b_value ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } return b_value ; } static void no25st1du2 (
kw3w1cgktc * * pEmxArray ) { if ( * pEmxArray != ( kw3w1cgktc * ) NULL ) { if
( ( ( * pEmxArray ) -> data != ( uint8_T * ) NULL ) && ( * pEmxArray ) ->
canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray )
-> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( kw3w1cgktc * ) NULL ; } }
static void o2hjpb1san0 ( ghe5ys4xtmd * obj , gegd1nhtzev * iobj_0 ,
dq2uwawv51k * iobj_1 ) { CoderChannel chImpl ; CoderInputStream streamImpl ;
CoderOutputStream streamImpl_p ; dq2uwawv51k * obj_p ; fxbyyv51o23 * b_obj ;
fxbyyv51o23 * obj_g ; gegd1nhtzev * obj_i ; gegd1nhtzev * obj_m ; ghe5ys4xtmd
* obj_e ; kw3w1cgktc * exampleData ; kw3w1cgktc * partialPacketInitializer ;
p4l4flmn410 * b_obj_p ; pxjtq3ygk0g * b_obj_e ; pxjtq3ygk0g * obj_f ;
pxjtq3ygk0g * obj_j ; real_T c_value [ 2 ] ; real_T e [ 2 ] ; real_T
streamLimits [ 2 ] ; real_T varargin_10_SharedTimeout ; int32_T loop_ub ;
int32_T success ; char_T converterFullPath_data [ 4096 ] ; char_T
deviceFullPath_data [ 4096 ] ; char_T devicePlugin_data [ 4096 ] ; char_T
localAbsPath [ 4096 ] ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ;
char_T b_value [ 13 ] ; char_T val_p [ 5 ] ; char_T b [ 4 ] ; char_T
options_Parity [ 4 ] ; char_T val [ 4 ] ; boolean_T hasSyncError ; boolean_T
varargin_10_DSR ; static const char_T tmp [ 13 ] = { 'l' , 'i' , 't' , 't' ,
'l' , 'e' , '-' , 'e' , 'n' , 'd' , 'i' , 'a' , 'n' } ; static const char_T
tmp_p [ 5 ] = { 'u' , 'i' , 'n' , 't' , '8' } ; int32_T
converterFullPath_size [ 2 ] ; int32_T deviceFullPath_size [ 2 ] ; int32_T
converterPluginPath_size_idx_1 ; int32_T devicePluginPath_size_idx_1 ; val [
0 ] = obj -> Port [ 0 ] ; val [ 1 ] = obj -> Port [ 1 ] ; val [ 2 ] = obj ->
Port [ 2 ] ; val [ 3 ] = obj -> Port [ 3 ] ; coderComputeAbsolutePath (
"serialdevice.dll" , & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath ,
deviceFullPath_data , deviceFullPath_size ) ; hasSyncError = (
deviceFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError ) { success =
deviceFullPath_size [ 1 ] ; loop_ub = deviceFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , &
deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } }
else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\seriallib\\bin\\win64\\serialdevice.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , deviceFullPath_data ,
deviceFullPath_size ) ; hasSyncError = ( deviceFullPath_size [ 1 ] == 0 ) ;
if ( ! hasSyncError ) { success = deviceFullPath_size [ 1 ] ; loop_ub =
deviceFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub
* sizeof ( char_T ) ) ; } } else { success = 0 ; } } coderComputeAbsolutePath
( "serialcoderconverter.dll" , & localAbsPath [ 0 ] ) ; fybnqznhrj (
localAbsPath , converterFullPath_data , converterFullPath_size ) ;
hasSyncError = ( converterFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError )
{ deviceFullPath_size [ 1 ] = converterFullPath_size [ 1 ] ; loop_ub =
converterFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
deviceFullPath_data [ 0 ] , & converterFullPath_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } } else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\seriallib\\bin\\win64\\serialcoderconverter.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , converterFullPath_data
, converterFullPath_size ) ; hasSyncError = ( converterFullPath_size [ 1 ] ==
0 ) ; if ( ! hasSyncError ) { deviceFullPath_size [ 1 ] =
converterFullPath_size [ 1 ] ; loop_ub = converterFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & deviceFullPath_data [ 0 ] , &
converterFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
} else { deviceFullPath_size [ 1 ] = 0 ; } } obj_p = iobj_1 ;
converterFullPath_size [ 1 ] = success ; loop_ub = success ; if ( loop_ub - 1
>= 0 ) { memcpy ( & converterFullPath_data [ 0 ] , & devicePlugin_data [ 0 ]
, ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } success =
deviceFullPath_size [ 1 ] ; loop_ub = deviceFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , &
deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
streamLimits [ 0 ] = obj -> InputBufferSize ; streamLimits [ 1 ] = obj ->
OutputBufferSize ; obj_p -> CustomProps . CTS = true ; obj_p -> CustomProps .
DSR = true ; obj_p -> CustomProps . CD = true ; obj_p -> CustomProps . RING =
true ; obj_p -> CustomProps . InitAccess = true ; obj_p -> CustomProps .
SharedTimeout = 0.0 ; obj_p -> CustomProps . LatestNumBytesWrittenToDevice =
0ULL ; obj_p -> ChannelImpl = 0 ; devicePluginPath_size_idx_1 =
converterFullPath_size [ 1 ] ; loop_ub = converterFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & rtB . devicePluginPath_data_mbvzarwird [ 0 ]
, & converterFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) )
; } converterPluginPath_size_idx_1 = success ; loop_ub = success ; if (
loop_ub - 1 >= 0 ) { memcpy ( & rtB . converterPluginPath_data_cl54gopm0x [ 0
] , & devicePlugin_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ;
} success = devicePluginPath_size_idx_1 ; loop_ub =
devicePluginPath_size_idx_1 ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & rtB . devicePluginPath_data_mbvzarwird [ 0 ] , (
uint32_T ) loop_ub * sizeof ( char_T ) ) ; } devicePluginPath_size_idx_1 =
success + 1 ; if ( loop_ub - 1 >= 0 ) { memcpy ( & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , & devicePlugin_data [ 0 ] , (
uint32_T ) loop_ub * sizeof ( char_T ) ) ; } rtB .
devicePluginPath_data_mbvzarwird [ success ] = '\x00' ; success =
converterPluginPath_size_idx_1 ; loop_ub = converterPluginPath_size_idx_1 ;
if ( loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , & rtB .
converterPluginPath_data_cl54gopm0x [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; } converterPluginPath_size_idx_1 = success + 1 ; if ( loop_ub -
1 >= 0 ) { memcpy ( & rtB . converterPluginPath_data_cl54gopm0x [ 0 ] , &
devicePlugin_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } rtB
. converterPluginPath_data_cl54gopm0x [ success ] = '\x00' ; loop_ub =
devicePluginPath_size_idx_1 ; memcpy ( & rtB .
b_devicePluginPath_data_kkiq3xxxve [ 0 ] , & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; loop_ub = converterPluginPath_size_idx_1 ; memcpy ( & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , & rtB .
converterPluginPath_data_cl54gopm0x [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; chImpl = coderChannelCreate ( & rtB .
b_devicePluginPath_data_kkiq3xxxve [ 0 ] , & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , streamLimits [ 0 ] , streamLimits [
1 ] , & errorID [ 0 ] , & errorText [ 0 ] ) ; obj_p -> ChannelImpl = chImpl ;
chImpl = obj_p -> ChannelImpl ; b [ 0 ] = val [ 0 ] ; b [ 1 ] = val [ 1 ] ; b
[ 2 ] = val [ 2 ] ; b [ 3 ] = val [ 3 ] ; streamLimits [ 0 ] = 9600.0 ;
streamLimits [ 1 ] = 9600.0 ; options_Parity [ 0 ] = 'n' ; options_Parity [ 1
] = 'o' ; options_Parity [ 2 ] = 'n' ; options_Parity [ 3 ] = 'e' ; e [ 0 ] =
1.0 ; e [ 1 ] = 1.0 ; c_value [ 0 ] = 8.0 ; c_value [ 1 ] = 8.0 ; val [ 0 ] =
'n' ; val [ 1 ] = 'o' ; val [ 2 ] = 'n' ; val [ 3 ] = 'e' ; success =
coderChannelInit ( chImpl , 6 , "ServiceName" , "char" , 4 , & b [ 0 ] ,
"BaudRate" , "double" , 1 , & streamLimits [ 0 ] , "Parity" , "char" , 4 , &
options_Parity [ 0 ] , "StopBits" , "double" , 1 , & e [ 0 ] , "DataBits" ,
"double" , 1 , & c_value [ 0 ] , "FlowControl" , "char" , 4 , & val [ 0 ] ) ;
if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ;
if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] ,
& errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } b_obj = & obj_p -> InputStream ;
chImpl = obj_p -> ChannelImpl ; b_obj -> Timeout = 10.0 ; streamImpl =
coderChannelGetInputStream ( chImpl ) ; b_obj -> StreamImpl = streamImpl ;
loop_ub = b_obj -> ExampleData -> size [ 0 ] * b_obj -> ExampleData -> size [
1 ] ; b_obj -> ExampleData -> size [ 0 ] = 1 ; b_obj -> ExampleData -> size [
1 ] = 1 ; mvpwqbdywu ( b_obj -> ExampleData , loop_ub ) ; b_obj ->
ExampleData -> data [ 0 ] = 0U ; obj_g = b_obj ; je0z0vljge ( & exampleData ,
2 ) ; loop_ub = exampleData -> size [ 0 ] * exampleData -> size [ 1 ] ;
exampleData -> size [ 0 ] = obj_g -> ExampleData -> size [ 0 ] ; exampleData
-> size [ 1 ] = obj_g -> ExampleData -> size [ 1 ] ; mvpwqbdywu ( exampleData
, loop_ub ) ; loop_ub = obj_g -> ExampleData -> size [ 0 ] * obj_g ->
ExampleData -> size [ 1 ] ; for ( success = 0 ; success < loop_ub ; success
++ ) { exampleData -> data [ success ] = obj_g -> ExampleData -> data [
success ] ; } success = exampleData -> size [ 0 ] ; je0z0vljge ( &
partialPacketInitializer , 2 ) ; loop_ub = partialPacketInitializer -> size [
0 ] * partialPacketInitializer -> size [ 1 ] ; partialPacketInitializer ->
size [ 0 ] = success ; mvpwqbdywu ( partialPacketInitializer , loop_ub ) ;
obj_g -> PartialPacket -> size [ 0 ] = partialPacketInitializer -> size [ 0 ]
; obj_g -> PartialPacket -> size [ 1 ] = 0 ; obj_g -> PartialPacketStart =
0.0 ; obj_g -> PartialPacketCount = 0.0 ; b_obj -> matlabCodegenIsDeleted =
false ; b_obj_p = & obj_p -> OutputStream ; chImpl = obj_p -> ChannelImpl ;
b_obj_p -> Timeout = 10.0 ; streamImpl_p = coderChannelGetOutputStream (
chImpl ) ; b_obj_p -> StreamImpl = streamImpl_p ; b_obj_p ->
matlabCodegenIsDeleted = false ; obj_p -> matlabCodegenIsDeleted = false ;
obj -> AsyncIOChannel = obj_p ; if ( ( ! obj -> IsSharingPort ) || ( ! obj ->
IsSharingExistingTimeout ) ) { obj_e = obj ; varargin_10_SharedTimeout =
cysnr0poffu ( obj ) ; b_obj_p = & obj_e -> AsyncIOChannel -> OutputStream ;
b_obj = & obj_e -> AsyncIOChannel -> InputStream ; b_obj_p -> Timeout =
varargin_10_SharedTimeout ; b_obj -> Timeout = varargin_10_SharedTimeout ; }
obj_i = iobj_0 ; obj_p = obj -> AsyncIOChannel ; obj_i -> AllowPartialReads =
false ; for ( success = 0 ; success < 13 ; success ++ ) { obj_i ->
MachineByteOrder [ success ] = tmp [ success ] ; } obj_i -> AsyncIOChannel =
obj_p ; obj_m = obj_i ; for ( success = 0 ; success < 13 ; success ++ ) {
b_value [ success ] = tmp [ success ] ; } loop_ub = obj_m -> ByteOrder ->
size [ 0 ] * obj_m -> ByteOrder -> size [ 1 ] ; obj_m -> ByteOrder -> size [
0 ] = 1 ; obj_m -> ByteOrder -> size [ 1 ] = 0 ; obj_m -> ByteOrder -> size [
0 ] = 1 ; obj_m -> ByteOrder -> size [ 1 ] = 13 ; kpntjfigjo ( obj_m ->
ByteOrder , loop_ub ) ; for ( success = 0 ; success < 13 ; success ++ ) {
obj_m -> ByteOrder -> data [ success ] = b_value [ success ] ; } obj_m =
obj_i ; loop_ub = obj_m -> DataFieldName -> size [ 0 ] * obj_m ->
DataFieldName -> size [ 1 ] ; obj_m -> DataFieldName -> size [ 0 ] = 1 ;
obj_m -> DataFieldName -> size [ 1 ] = 0 ; obj_m -> DataFieldName -> size [ 0
] = 1 ; obj_m -> DataFieldName -> size [ 1 ] = 4 ; kpntjfigjo ( obj_m ->
DataFieldName , loop_ub ) ; obj_m -> DataFieldName -> data [ 0 ] = 'D' ;
obj_m -> DataFieldName -> data [ 1 ] = 'a' ; obj_m -> DataFieldName -> data [
2 ] = 't' ; obj_m -> DataFieldName -> data [ 3 ] = 'a' ; obj_m = obj_i ; for
( success = 0 ; success < 5 ; success ++ ) { val_p [ success ] = tmp_p [
success ] ; } loop_ub = obj_m -> NativeDataType -> size [ 0 ] * obj_m ->
NativeDataType -> size [ 1 ] ; obj_m -> NativeDataType -> size [ 0 ] = 1 ;
obj_m -> NativeDataType -> size [ 1 ] = 0 ; obj_m -> NativeDataType -> size [
0 ] = 1 ; obj_m -> NativeDataType -> size [ 1 ] = 5 ; kpntjfigjo ( obj_m ->
NativeDataType , loop_ub ) ; for ( success = 0 ; success < 5 ; success ++ ) {
obj_m -> NativeDataType -> data [ success ] = val_p [ success ] ; } b_obj_e =
& obj_i -> UnreadDataBuffer ; b_obj_e -> BytesPerElement = 1.0 ;
coderComputeAbsolutePath ( "buffer.dll" , & localAbsPath [ 0 ] ) ; fybnqznhrj
( localAbsPath , deviceFullPath_data , deviceFullPath_size ) ; hasSyncError =
( deviceFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError ) { success =
deviceFullPath_size [ 1 ] ; loop_ub = deviceFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , &
deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } }
else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\testmeaslib\\general\\bin\\win64\\buffer.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , deviceFullPath_data ,
deviceFullPath_size ) ; hasSyncError = ( deviceFullPath_size [ 1 ] == 0 ) ;
if ( ! hasSyncError ) { success = deviceFullPath_size [ 1 ] ; loop_ub =
deviceFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub
* sizeof ( char_T ) ) ; } } else { success = 0 ; } } coderComputeAbsolutePath
( "buffercoderconverter.dll" , & localAbsPath [ 0 ] ) ; fybnqznhrj (
localAbsPath , converterFullPath_data , converterFullPath_size ) ;
hasSyncError = ( converterFullPath_size [ 1 ] == 0 ) ; if ( ! hasSyncError )
{ deviceFullPath_size [ 1 ] = converterFullPath_size [ 1 ] ; loop_ub =
converterFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
deviceFullPath_data [ 0 ] , & converterFullPath_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } } else { coderComputeAbsolutePath (
 "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\testmeaslib\\general\\bin\\win64\\buffercoderconverter.dll"
, & localAbsPath [ 0 ] ) ; fybnqznhrj ( localAbsPath , converterFullPath_data
, converterFullPath_size ) ; hasSyncError = ( converterFullPath_size [ 1 ] ==
0 ) ; if ( ! hasSyncError ) { deviceFullPath_size [ 1 ] =
converterFullPath_size [ 1 ] ; loop_ub = converterFullPath_size [ 1 ] ; if (
loop_ub - 1 >= 0 ) { memcpy ( & deviceFullPath_data [ 0 ] , &
converterFullPath_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; }
} else { deviceFullPath_size [ 1 ] = 0 ; } } converterFullPath_size [ 1 ] =
success ; loop_ub = success ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
converterFullPath_data [ 0 ] , & devicePlugin_data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( char_T ) ) ; } success = deviceFullPath_size [ 1 ] ;
loop_ub = deviceFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( &
devicePlugin_data [ 0 ] , & deviceFullPath_data [ 0 ] , ( uint32_T ) loop_ub
* sizeof ( char_T ) ) ; } b_obj_e -> ChannelImpl = 0 ;
devicePluginPath_size_idx_1 = converterFullPath_size [ 1 ] ; loop_ub =
converterFullPath_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , & converterFullPath_data [ 0 ] , (
uint32_T ) loop_ub * sizeof ( char_T ) ) ; } converterPluginPath_size_idx_1 =
success ; loop_ub = success ; if ( loop_ub - 1 >= 0 ) { memcpy ( & rtB .
converterPluginPath_data_cl54gopm0x [ 0 ] , & devicePlugin_data [ 0 ] , (
uint32_T ) loop_ub * sizeof ( char_T ) ) ; } success =
devicePluginPath_size_idx_1 ; loop_ub = devicePluginPath_size_idx_1 ; if (
loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; } devicePluginPath_size_idx_1 = success + 1 ; if ( loop_ub - 1
>= 0 ) { memcpy ( & rtB . devicePluginPath_data_mbvzarwird [ 0 ] , &
devicePlugin_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } rtB
. devicePluginPath_data_mbvzarwird [ success ] = '\x00' ; success =
converterPluginPath_size_idx_1 ; loop_ub = converterPluginPath_size_idx_1 ;
if ( loop_ub - 1 >= 0 ) { memcpy ( & devicePlugin_data [ 0 ] , & rtB .
converterPluginPath_data_cl54gopm0x [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; } converterPluginPath_size_idx_1 = success + 1 ; if ( loop_ub -
1 >= 0 ) { memcpy ( & rtB . converterPluginPath_data_cl54gopm0x [ 0 ] , &
devicePlugin_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } rtB
. converterPluginPath_data_cl54gopm0x [ success ] = '\x00' ; loop_ub =
devicePluginPath_size_idx_1 ; memcpy ( & rtB .
b_devicePluginPath_data_kkiq3xxxve [ 0 ] , & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; loop_ub = converterPluginPath_size_idx_1 ; memcpy ( & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , & rtB .
converterPluginPath_data_cl54gopm0x [ 0 ] , ( uint32_T ) loop_ub * sizeof (
char_T ) ) ; chImpl = coderChannelCreate ( & rtB .
b_devicePluginPath_data_kkiq3xxxve [ 0 ] , & rtB .
devicePluginPath_data_mbvzarwird [ 0 ] , ( rtInf ) , 0.0 , & errorID [ 0 ] ,
& errorText [ 0 ] ) ; b_obj_e -> ChannelImpl = chImpl ; chImpl = b_obj_e ->
ChannelImpl ; success = coderChannelInit ( chImpl , 0 ) ; if ( success == 0 )
{ coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError
) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } b_obj = & b_obj_e -> InputStream ; chImpl = b_obj_e
-> ChannelImpl ; b_obj -> Timeout = 10.0 ; streamImpl =
coderChannelGetInputStream ( chImpl ) ; b_obj -> StreamImpl = streamImpl ;
loop_ub = b_obj -> ExampleData -> size [ 0 ] * b_obj -> ExampleData -> size [
1 ] ; b_obj -> ExampleData -> size [ 0 ] = 1 ; b_obj -> ExampleData -> size [
1 ] = 1 ; mvpwqbdywu ( b_obj -> ExampleData , loop_ub ) ; b_obj ->
ExampleData -> data [ 0 ] = 0U ; obj_g = b_obj ; loop_ub = exampleData ->
size [ 0 ] * exampleData -> size [ 1 ] ; exampleData -> size [ 0 ] = obj_g ->
ExampleData -> size [ 0 ] ; exampleData -> size [ 1 ] = obj_g -> ExampleData
-> size [ 1 ] ; mvpwqbdywu ( exampleData , loop_ub ) ; loop_ub = obj_g ->
ExampleData -> size [ 0 ] * obj_g -> ExampleData -> size [ 1 ] ; for (
success = 0 ; success < loop_ub ; success ++ ) { exampleData -> data [
success ] = obj_g -> ExampleData -> data [ success ] ; } success =
exampleData -> size [ 0 ] ; no25st1du2 ( & exampleData ) ; loop_ub =
partialPacketInitializer -> size [ 0 ] * partialPacketInitializer -> size [ 1
] ; partialPacketInitializer -> size [ 0 ] = success ; mvpwqbdywu (
partialPacketInitializer , loop_ub ) ; obj_g -> PartialPacket -> size [ 0 ] =
partialPacketInitializer -> size [ 0 ] ; no25st1du2 ( &
partialPacketInitializer ) ; obj_g -> PartialPacket -> size [ 1 ] = 0 ; obj_g
-> PartialPacketStart = 0.0 ; obj_g -> PartialPacketCount = 0.0 ; b_obj ->
matlabCodegenIsDeleted = false ; b_obj_p = & b_obj_e -> OutputStream ; chImpl
= b_obj_e -> ChannelImpl ; b_obj_p -> Timeout = 10.0 ; streamImpl_p =
coderChannelGetOutputStream ( chImpl ) ; b_obj_p -> StreamImpl = streamImpl_p
; b_obj_p -> matlabCodegenIsDeleted = false ; obj_j = b_obj_e ; obj_j ->
TotalElementsWritten = 0.0 ; obj_j = b_obj_e ; obj_f = obj_j ; obj_f ->
PartialPacket -> size [ 0 ] = 1 ; obj_f -> PartialPacket -> size [ 1 ] = 0 ;
obj_f -> PartialPacket -> size [ 0 ] = 0 ; obj_f -> PartialPacket -> size [ 1
] = 0 ; obj_j -> PartialPacketStart = 0.0 ; obj_j -> PartialPacketCount = 0.0
; b_obj_e -> matlabCodegenIsDeleted = false ; obj_j = & obj_i ->
UnreadDataBuffer ; obj_f = obj_j ; chImpl = obj_f -> ChannelImpl ; success =
coderChannelIsOpen ( chImpl , & varargin_10_DSR ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( ! varargin_10_DSR ) { chImpl = obj_j ->
ChannelImpl ; success = coderChannelOpen ( chImpl , 0 ) ; if ( success == 0 )
{ coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError
) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } obj_i -> matlabCodegenIsDeleted = false ; obj ->
TransportChannel = obj_i ; obj_i = obj -> TransportChannel ; for ( success =
0 ; success < 13 ; success ++ ) { b_value [ success ] = tmp [ success ] ; }
loop_ub = obj_i -> ByteOrder -> size [ 0 ] * obj_i -> ByteOrder -> size [ 1 ]
; obj_i -> ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = 0
; obj_i -> ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] =
13 ; kpntjfigjo ( obj_i -> ByteOrder , loop_ub ) ; for ( success = 0 ;
success < 13 ; success ++ ) { obj_i -> ByteOrder -> data [ success ] =
b_value [ success ] ; } obj_i = obj -> TransportChannel ; for ( success = 0 ;
success < 5 ; success ++ ) { val_p [ success ] = tmp_p [ success ] ; }
loop_ub = obj_i -> NativeDataType -> size [ 0 ] * obj_i -> NativeDataType ->
size [ 1 ] ; obj_i -> NativeDataType -> size [ 0 ] = 1 ; obj_i ->
NativeDataType -> size [ 1 ] = 0 ; obj_i -> NativeDataType -> size [ 0 ] = 1
; obj_i -> NativeDataType -> size [ 1 ] = 5 ; kpntjfigjo ( obj_i ->
NativeDataType , loop_ub ) ; for ( success = 0 ; success < 5 ; success ++ ) {
obj_i -> NativeDataType -> data [ success ] = val_p [ success ] ; } obj_i =
obj -> TransportChannel ; loop_ub = obj_i -> DataFieldName -> size [ 0 ] *
obj_i -> DataFieldName -> size [ 1 ] ; obj_i -> DataFieldName -> size [ 0 ] =
1 ; obj_i -> DataFieldName -> size [ 1 ] = 0 ; obj_i -> DataFieldName -> size
[ 0 ] = 1 ; obj_i -> DataFieldName -> size [ 1 ] = 4 ; kpntjfigjo ( obj_i ->
DataFieldName , loop_ub ) ; obj_i -> DataFieldName -> data [ 0 ] = 'D' ;
obj_i -> DataFieldName -> data [ 1 ] = 'a' ; obj_i -> DataFieldName -> data [
2 ] = 't' ; obj_i -> DataFieldName -> data [ 3 ] = 'a' ; } static boolean_T
h5nfwugf2uw ( ghe5ys4xtmd * obj ) { CoderChannel chImpl ; dq2uwawv51k * obj_p
; int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ;
boolean_T hasSyncError ; boolean_T result ; obj_p = obj -> AsyncIOChannel ;
chImpl = obj_p -> ChannelImpl ; success = coderChannelIsOpen ( chImpl , &
result ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } result = ! result ;
return ! result ; } static boolean_T oucphsjoggj ( ghe5ys4xtmd * obj ) {
CoderChannel chImpl ; dq2uwawv51k * obj_e ; ghe5ys4xtmd * obj_p ; int32_T
success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ; boolean_T
b_value ; boolean_T hasSyncError ; obj_p = obj ; obj_e = obj_p ->
AsyncIOChannel ; chImpl = obj_e -> ChannelImpl ; success = coderChannelIsOpen
( chImpl , & hasSyncError ) ; if ( success == 0 ) { coderChannelHasSyncError
( chImpl , & hasSyncError ) ; if ( ! hasSyncError ) {
coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; }
else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText
[ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ; chImpl = obj_e -> ChannelImpl ;
success = coderChannelExecute ( chImpl , "GetInitAccessStatus" , 0 ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = obj -> AsyncIOChannel ;
b_value = obj_e -> CustomProps . InitAccess ; chImpl = obj_e -> ChannelImpl ;
success = coderChannelGetPropertyValue ( chImpl , "InitAccess" , "logical" ,
1 , & b_value ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } return b_value ; }
static void njrxz2czen5 ( ghe5ys4xtmd * obj ) { CoderChannel chImpl ;
dq2uwawv51k * obj_g ; dq2uwawv51k * obj_p ; fxbyyv51o23 * inputStream ;
gegd1nhtzev * obj_i ; ghe5ys4xtmd * obj_e ; ghe5ys4xtmd * obj_j ; ghe5ys4xtmd
* obj_m ; lytfstpiri * d_value ; lytfstpiri * options_FlowControl ;
lytfstpiri * options_FlowControl_p ; lytfstpiri * options_Parity ;
p4l4flmn410 * outputStream ; real_T b_value [ 2 ] ; real_T c_value [ 2 ] ;
real_T e [ 2 ] ; real_T out ; real_T out_e ; real_T out_p ; int32_T minnanb ;
int32_T na ; int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [
1024 ] ; char_T b_b [ 13 ] ; char_T b [ 4 ] ; char_T x ; char_T y ; boolean_T
e_value [ 2 ] ; boolean_T h [ 2 ] ; boolean_T i [ 2 ] ; boolean_T
hasSyncError ; boolean_T options_IsSharingExistingTimeout ; boolean_T
options_IsSharingPort ; boolean_T options_IsWriteOnly ; boolean_T result ;
static const char_T tmp [ 13 ] = { 'l' , 'i' , 't' , 't' , 'l' , 'e' , '-' ,
'e' , 'n' , 'd' , 'i' , 'a' , 'n' } ; static const char_T tmp_p [ 10 ] = {
'b' , 'i' , 'g' , '-' , 'e' , 'n' , 'd' , 'i' , 'a' , 'n' } ; static const
char_T tmp_e [ 128 ] = { '\x00' , '\x01' , '\x02' , '\x03' , '\x04' , '\x05'
, '\x06' , '\a' , '\b' , '\t' , '\n' , '\v' , '\f' , '\r' , '\x0e' , '\x0f' ,
'\x10' , '\x11' , '\x12' , '\x13' , '\x14' , '\x15' , '\x16' , '\x17' ,
'\x18' , '\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' , '\x1e' , '\x1f' , ' ' ,
'!' , '\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')' , '*' , '+' , ',' , '-'
, '.' , '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , ':'
, ';' , '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g'
, 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't'
, 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' , ']' , '^' , '_' , '`' ,
'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' ,
'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' ,
'{' , '|' , '}' , '~' , '\x7f' } ; int32_T exitg1 ; int32_T i_p ; const
char_T * table ; boolean_T guard1 ; obj_p = obj -> AsyncIOChannel ; chImpl =
obj_p -> ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ;
if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ;
if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] ,
& errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = obj ; b [ 0 ] = obj_e ->
Port [ 0 ] ; b [ 1 ] = obj_e -> Port [ 1 ] ; b [ 2 ] = obj_e -> Port [ 2 ] ;
b [ 3 ] = obj_e -> Port [ 3 ] ; obj_m = obj_e ; out = obj_m -> BaudRate ;
obj_m = obj_e ; jjdsoglm4u ( & d_value , 2 ) ; i_p = d_value -> size [ 0 ] *
d_value -> size [ 1 ] ; d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] =
obj_m -> Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ; minnanb =
obj_m -> Parity -> size [ 1 ] ; for ( i_p = 0 ; i_p < minnanb ; i_p ++ ) {
d_value -> data [ i_p ] = obj_m -> Parity -> data [ i_p ] ; } obj_m = obj_e ;
out_p = obj_m -> StopBits ; obj_m = obj_e ; out_e = obj_m -> DataBits ; obj_m
= obj_e ; jjdsoglm4u ( & options_FlowControl , 2 ) ; i_p =
options_FlowControl -> size [ 0 ] * options_FlowControl -> size [ 1 ] ;
options_FlowControl -> size [ 0 ] = 1 ; options_FlowControl -> size [ 1 ] =
obj_m -> FlowControl -> size [ 1 ] ; kpntjfigjo ( options_FlowControl , i_p )
; minnanb = obj_m -> FlowControl -> size [ 1 ] ; for ( i_p = 0 ; i_p <
minnanb ; i_p ++ ) { options_FlowControl -> data [ i_p ] = obj_m ->
FlowControl -> data [ i_p ] ; } options_IsWriteOnly = obj_e -> IsWriteOnly ;
options_IsSharingPort = obj_e -> IsSharingPort ;
options_IsSharingExistingTimeout = obj_e -> IsSharingExistingTimeout ; obj_p
= obj_e -> AsyncIOChannel ; jjdsoglm4u ( & options_Parity , 2 ) ; i_p =
options_Parity -> size [ 0 ] * options_Parity -> size [ 1 ] ; options_Parity
-> size [ 0 ] = 1 ; options_Parity -> size [ 1 ] = d_value -> size [ 1 ] ;
kpntjfigjo ( options_Parity , i_p ) ; minnanb = d_value -> size [ 1 ] ; if (
minnanb - 1 >= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , & d_value ->
data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T ) ) ; } jjdsoglm4u ( &
options_FlowControl_p , 2 ) ; i_p = options_FlowControl_p -> size [ 0 ] *
options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p -> size [ 0 ] = 1
; options_FlowControl_p -> size [ 1 ] = options_FlowControl -> size [ 1 ] ;
kpntjfigjo ( options_FlowControl_p , i_p ) ; minnanb = options_FlowControl ->
size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & options_FlowControl_p ->
data [ 0 ] , & options_FlowControl -> data [ 0 ] , ( uint32_T ) minnanb *
sizeof ( char_T ) ) ; } obj_g = obj_p ; chImpl = obj_g -> ChannelImpl ;
success = coderChannelIsOpen ( chImpl , & result ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( ! result ) { chImpl = obj_p -> ChannelImpl ; i_p
= d_value -> size [ 0 ] * d_value -> size [ 1 ] ; d_value -> size [ 0 ] = 1 ;
d_value -> size [ 1 ] = options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value ,
i_p ) ; minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) {
memcpy ( & d_value -> data [ 0 ] , & options_Parity -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_FlowControl ->
size [ 0 ] * options_FlowControl -> size [ 1 ] ; options_FlowControl -> size
[ 0 ] = 1 ; options_FlowControl -> size [ 1 ] = options_FlowControl_p -> size
[ 1 ] ; kpntjfigjo ( options_FlowControl , i_p ) ; minnanb =
options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_FlowControl -> data [ 0 ] , & options_FlowControl_p -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_Parity -> size [ 0
] * options_Parity -> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ;
options_Parity -> size [ 1 ] = d_value -> size [ 1 ] ; kpntjfigjo (
options_Parity , i_p ) ; minnanb = d_value -> size [ 1 ] ; if ( minnanb - 1
>= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , & d_value -> data [ 0 ] ,
( uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_FlowControl_p ->
size [ 0 ] * options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p ->
size [ 0 ] = 1 ; options_FlowControl_p -> size [ 1 ] = options_FlowControl ->
size [ 1 ] ; kpntjfigjo ( options_FlowControl_p , i_p ) ; minnanb =
options_FlowControl -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_FlowControl_p -> data [ 0 ] , & options_FlowControl -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } c_value [ 0 ] = out ; c_value [
1 ] = out ; b_value [ 0 ] = c_value [ 0 ] ; b_value [ 1 ] = c_value [ 1 ] ;
success = options_Parity -> size [ 1 ] ; result = ( options_Parity -> size [
1 ] == 1 ) ; if ( result ) { i_p = d_value -> size [ 0 ] * d_value -> size [
1 ] ; d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] = options_Parity ->
size [ 1 ] + options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ;
minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
d_value -> data [ 0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb
* sizeof ( char_T ) ) ; } minnanb = options_Parity -> size [ 1 ] ; for ( i_p
= 0 ; i_p < minnanb ; i_p ++ ) { d_value -> data [ i_p + options_Parity ->
size [ 1 ] ] = options_Parity -> data [ i_p ] ; } } else { i_p = d_value ->
size [ 0 ] * d_value -> size [ 1 ] ; d_value -> size [ 0 ] = 1 ; d_value ->
size [ 1 ] = options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ;
minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
d_value -> data [ 0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb
* sizeof ( char_T ) ) ; } } i_p = options_Parity -> size [ 0 ] *
options_Parity -> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ;
options_Parity -> size [ 1 ] = d_value -> size [ 1 ] ; kpntjfigjo (
options_Parity , i_p ) ; minnanb = d_value -> size [ 1 ] ; if ( minnanb - 1
>= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , & d_value -> data [ 0 ] ,
( uint32_T ) minnanb * sizeof ( char_T ) ) ; } c_value [ 0 ] = out_p ;
c_value [ 1 ] = out_p ; e [ 0 ] = c_value [ 0 ] ; e [ 1 ] = c_value [ 1 ] ;
c_value [ 0 ] = out_e ; c_value [ 1 ] = out_e ; na = options_FlowControl_p ->
size [ 1 ] ; result = ( options_FlowControl_p -> size [ 1 ] == 1 ) ; if (
result ) { i_p = d_value -> size [ 0 ] * d_value -> size [ 1 ] ; d_value ->
size [ 0 ] = 1 ; d_value -> size [ 1 ] = options_FlowControl_p -> size [ 1 ]
+ options_FlowControl_p -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ;
minnanb = options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) {
memcpy ( & d_value -> data [ 0 ] , & options_FlowControl_p -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } minnanb = options_FlowControl_p
-> size [ 1 ] ; for ( i_p = 0 ; i_p < minnanb ; i_p ++ ) { d_value -> data [
i_p + options_FlowControl_p -> size [ 1 ] ] = options_FlowControl_p -> data [
i_p ] ; } } else { i_p = d_value -> size [ 0 ] * d_value -> size [ 1 ] ;
d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] = options_FlowControl_p ->
size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ; minnanb = options_FlowControl_p
-> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & d_value -> data [ 0 ] ,
& options_FlowControl_p -> data [ 0 ] , ( uint32_T ) minnanb * sizeof (
char_T ) ) ; } } i_p = options_FlowControl_p -> size [ 0 ] *
options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p -> size [ 0 ] = 1
; options_FlowControl_p -> size [ 1 ] = d_value -> size [ 1 ] ; kpntjfigjo (
options_FlowControl_p , i_p ) ; minnanb = d_value -> size [ 1 ] ; if (
minnanb - 1 >= 0 ) { memcpy ( & options_FlowControl_p -> data [ 0 ] , &
d_value -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T ) ) ; }
e_value [ 0 ] = options_IsWriteOnly ; e_value [ 1 ] = options_IsWriteOnly ; h
[ 0 ] = e_value [ 0 ] ; h [ 1 ] = e_value [ 1 ] ; e_value [ 0 ] =
options_IsSharingPort ; e_value [ 1 ] = options_IsSharingPort ; i [ 0 ] =
e_value [ 0 ] ; i [ 1 ] = e_value [ 1 ] ; e_value [ 0 ] =
options_IsSharingExistingTimeout ; e_value [ 1 ] =
options_IsSharingExistingTimeout ; i_p = d_value -> size [ 0 ] * d_value ->
size [ 1 ] ; d_value -> size [ 0 ] = 1 ; d_value -> size [ 1 ] =
options_Parity -> size [ 1 ] ; kpntjfigjo ( d_value , i_p ) ; minnanb =
options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & d_value
-> data [ 0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb *
sizeof ( char_T ) ) ; } i_p = options_Parity -> size [ 0 ] * options_Parity
-> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ; options_Parity -> size [ 1
] = options_FlowControl_p -> size [ 1 ] ; kpntjfigjo ( options_Parity , i_p )
; minnanb = options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) {
memcpy ( & options_Parity -> data [ 0 ] , & options_FlowControl_p -> data [ 0
] , ( uint32_T ) minnanb * sizeof ( char_T ) ) ; } success = coderChannelOpen
( chImpl , 9 , "ServiceName" , "char" , 4 , & b [ 0 ] , "BaudRate" , "double"
, 1 , & b_value [ 0 ] , "Parity" , "char" , success , & d_value -> data [ 0 ]
, "StopBits" , "double" , 1 , & e [ 0 ] , "DataBits" , "double" , 1 , &
c_value [ 0 ] , "FlowControl" , "char" , na , & options_Parity -> data [ 0 ]
, "IsWriteOnly" , "logical" , 1 , & h [ 0 ] , "IsSharingPort" , "logical" , 1
, & i [ 0 ] , "IsSharingExistingTimeout" , "logical" , 1 , & e_value [ 0 ] )
; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError )
; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ]
, & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } } pz01orbdte ( & d_value ) ;
pz01orbdte ( & options_FlowControl ) ; if ( obj_e -> IsSharingPort && ( !
obj_e -> IsSharingExistingTimeout ) && oucphsjoggj ( obj_e ) ) { obj_m =
obj_e ; out = cysnr0poffu ( obj_e ) ; obj_j = obj_m ; obj_p = obj_j ->
AsyncIOChannel ; chImpl = obj_p -> ChannelImpl ; success = coderChannelIsOpen
( chImpl , & result ) ; if ( success == 0 ) { coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } obj_p = obj_m -> AsyncIOChannel ; chImpl = obj_p -> ChannelImpl ;
b_value [ 0 ] = out ; b_value [ 1 ] = out ; success = coderChannelExecute (
chImpl , "SetSharedTimeout" , 1 , "SharedTimeout" , "double" , 1 , & b_value
[ 0 ] ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } } obj_m = obj_e ; out
= cysnr0poffu ( obj_e ) ; outputStream = & obj_m -> AsyncIOChannel ->
OutputStream ; inputStream = & obj_m -> AsyncIOChannel -> InputStream ;
outputStream -> Timeout = out ; inputStream -> Timeout = out ; obj_e = obj ;
i_p = options_Parity -> size [ 0 ] * options_Parity -> size [ 1 ] ;
options_Parity -> size [ 0 ] = 1 ; options_Parity -> size [ 1 ] = obj_e ->
ByteOrder -> size [ 1 ] ; kpntjfigjo ( options_Parity , i_p ) ; minnanb =
obj_e -> ByteOrder -> size [ 1 ] ; for ( i_p = 0 ; i_p < minnanb ; i_p ++ ) {
options_Parity -> data [ i_p ] = obj_e -> ByteOrder -> data [ i_p ] ; } obj_i
= obj -> TransportChannel ; i_p = options_FlowControl_p -> size [ 0 ] *
options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p -> size [ 0 ] = 1
; options_FlowControl_p -> size [ 1 ] = options_Parity -> size [ 1 ] ;
kpntjfigjo ( options_FlowControl_p , i_p ) ; minnanb = options_Parity -> size
[ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & options_FlowControl_p -> data [
0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T
) ) ; } success = options_FlowControl_p -> size [ 1 ] ; out = success ; i_p =
options_Parity -> size [ 0 ] * options_Parity -> size [ 1 ] ; options_Parity
-> size [ 0 ] = 1 ; options_Parity -> size [ 1 ] = options_FlowControl_p ->
size [ 1 ] ; kpntjfigjo ( options_Parity , i_p ) ; minnanb =
options_FlowControl_p -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_Parity -> data [ 0 ] , & options_FlowControl_p -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } success = ( int32_T ) out ; i_p
= options_FlowControl_p -> size [ 0 ] * options_FlowControl_p -> size [ 1 ] ;
options_FlowControl_p -> size [ 0 ] = 1 ; options_FlowControl_p -> size [ 1 ]
= options_Parity -> size [ 1 ] ; kpntjfigjo ( options_FlowControl_p , i_p ) ;
minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_FlowControl_p -> data [ 0 ] , & options_Parity -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = options_Parity -> size [ 0
] * options_Parity -> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ;
options_Parity -> size [ 1 ] = options_FlowControl_p -> size [ 1 ] ;
kpntjfigjo ( options_Parity , i_p ) ; minnanb = options_FlowControl_p -> size
[ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & options_Parity -> data [ 0 ] , &
options_FlowControl_p -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T
) ) ; } for ( i_p = 0 ; i_p < 13 ; i_p ++ ) { b_b [ i_p ] = tmp [ i_p ] ; }
options_IsWriteOnly = false ; na = options_Parity -> size [ 1 ] ; minnanb =
muIntScalarMin_sint32 ( na , 13 ) ; guard1 = false ; if ( success <= minnanb
) { success = muIntScalarMin_sint32 ( minnanb , success ) ; guard1 = true ; }
else if ( na == 13 ) { success = 13 ; guard1 = true ; } if ( guard1 ) {
success -- ; na = 1 ; do { exitg1 = 0 ; if ( na - 1 <= success ) { minnanb =
na - 1 ; x = options_Parity -> data [ minnanb ] ; table = & tmp_e [ 0 ] ; y =
table [ ( uint8_T ) x & 127 ] ; x = b_b [ minnanb ] ; table = & tmp_e [ 0 ] ;
x = table [ ( int32_T ) x ] ; if ( y != x ) { exitg1 = 1 ; } else { na ++ ; }
} else { options_IsWriteOnly = true ; exitg1 = 1 ; } } while ( exitg1 == 0 )
; } if ( options_IsWriteOnly ) { success = 13 ; for ( i_p = 0 ; i_p < 13 ;
i_p ++ ) { b_b [ i_p ] = tmp [ i_p ] ; } } else { success = 10 ; for ( i_p =
0 ; i_p < 10 ; i_p ++ ) { b_b [ i_p ] = tmp_p [ i_p ] ; } } i_p = obj_i ->
ByteOrder -> size [ 0 ] * obj_i -> ByteOrder -> size [ 1 ] ; obj_i ->
ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = 0 ; obj_i ->
ByteOrder -> size [ 0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = success ;
kpntjfigjo ( obj_i -> ByteOrder , i_p ) ; minnanb = success - 1 ; for ( i_p =
0 ; i_p <= minnanb ; i_p ++ ) { obj_i -> ByteOrder -> data [ i_p ] = b_b [
i_p ] ; } obj_e = obj ; i_p = options_Parity -> size [ 0 ] * options_Parity
-> size [ 1 ] ; options_Parity -> size [ 0 ] = 1 ; options_Parity -> size [ 1
] = obj_e -> NativeDataType -> size [ 1 ] ; kpntjfigjo ( options_Parity , i_p
) ; minnanb = obj_e -> NativeDataType -> size [ 1 ] ; for ( i_p = 0 ; i_p <
minnanb ; i_p ++ ) { options_Parity -> data [ i_p ] = obj_e -> NativeDataType
-> data [ i_p ] ; } obj_i = obj -> TransportChannel ; i_p =
options_FlowControl_p -> size [ 0 ] * options_FlowControl_p -> size [ 1 ] ;
options_FlowControl_p -> size [ 0 ] = 1 ; options_FlowControl_p -> size [ 1 ]
= options_Parity -> size [ 1 ] ; kpntjfigjo ( options_FlowControl_p , i_p ) ;
minnanb = options_Parity -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( &
options_FlowControl_p -> data [ 0 ] , & options_Parity -> data [ 0 ] , (
uint32_T ) minnanb * sizeof ( char_T ) ) ; } i_p = obj_i -> NativeDataType ->
size [ 0 ] * obj_i -> NativeDataType -> size [ 1 ] ; obj_i -> NativeDataType
-> size [ 0 ] = 1 ; obj_i -> NativeDataType -> size [ 1 ] = 0 ; obj_i ->
NativeDataType -> size [ 0 ] = 1 ; obj_i -> NativeDataType -> size [ 1 ] =
options_FlowControl_p -> size [ 1 ] ; kpntjfigjo ( obj_i -> NativeDataType ,
i_p ) ; minnanb = options_FlowControl_p -> size [ 1 ] - 1 ; for ( i_p = 0 ;
i_p <= minnanb ; i_p ++ ) { obj_i -> NativeDataType -> data [ i_p ] =
options_FlowControl_p -> data [ i_p ] ; } obj_e = obj ; i_p = options_Parity
-> size [ 0 ] * options_Parity -> size [ 1 ] ; options_Parity -> size [ 0 ] =
1 ; options_Parity -> size [ 1 ] = obj_e -> DataFieldName -> size [ 1 ] ;
kpntjfigjo ( options_Parity , i_p ) ; minnanb = obj_e -> DataFieldName ->
size [ 1 ] ; for ( i_p = 0 ; i_p < minnanb ; i_p ++ ) { options_Parity ->
data [ i_p ] = obj_e -> DataFieldName -> data [ i_p ] ; } obj_i = obj ->
TransportChannel ; i_p = options_FlowControl_p -> size [ 0 ] *
options_FlowControl_p -> size [ 1 ] ; options_FlowControl_p -> size [ 0 ] = 1
; options_FlowControl_p -> size [ 1 ] = options_Parity -> size [ 1 ] ;
kpntjfigjo ( options_FlowControl_p , i_p ) ; minnanb = options_Parity -> size
[ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & options_FlowControl_p -> data [
0 ] , & options_Parity -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T
) ) ; } pz01orbdte ( & options_Parity ) ; i_p = obj_i -> DataFieldName ->
size [ 0 ] * obj_i -> DataFieldName -> size [ 1 ] ; obj_i -> DataFieldName ->
size [ 0 ] = 1 ; obj_i -> DataFieldName -> size [ 1 ] = 0 ; obj_i ->
DataFieldName -> size [ 0 ] = 1 ; obj_i -> DataFieldName -> size [ 1 ] =
options_FlowControl_p -> size [ 1 ] ; kpntjfigjo ( obj_i -> DataFieldName ,
i_p ) ; minnanb = options_FlowControl_p -> size [ 1 ] - 1 ; for ( i_p = 0 ;
i_p <= minnanb ; i_p ++ ) { obj_i -> DataFieldName -> data [ i_p ] =
options_FlowControl_p -> data [ i_p ] ; } pz01orbdte ( &
options_FlowControl_p ) ; } static void i44lbymuat1 ( m31jye1cpy * obj ) {
CoderChannel chImpl ; dq2uwawv51k * obj_m ; fxbyyv51o23 * inputStream ;
gegd1nhtzev * obj_g ; ghe5ys4xtmd * b_obj ; ghe5ys4xtmd * obj_e ; ghe5ys4xtmd
* obj_i ; ghe5ys4xtmd * obj_j ; lytfstpiri * out ; m31jye1cpy * obj_p ;
p4l4flmn410 * outputStream ; real_T b_value_p [ 2 ] ; int32_T loop_ub ;
int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ;
char_T b_value [ 13 ] ; char_T val [ 5 ] ; char_T b [ 4 ] ; boolean_T
hasSyncError ; static const char_T tmp [ 13 ] = { 'l' , 'i' , 't' , 't' , 'l'
, 'e' , '-' , 'e' , 'n' , 'd' , 'i' , 'a' , 'n' } ; static const char_T tmp_p
[ 5 ] = { 'u' , 'i' , 'n' , 't' , '8' } ; obj -> isSetupComplete = false ;
obj -> isInitialized = 1 ; obj_p = obj ; obj_p -> SaveOutput = 0U ; b_obj = &
obj_p -> SerialObj ; b_obj -> IsSharingPort = false ; b_obj ->
IsSharingExistingTimeout = false ; b_obj -> Timeout = 10.0 ; b_obj ->
InputBufferSize = ( rtInf ) ; b_obj -> OutputBufferSize = ( rtInf ) ; b_obj
-> Port [ 0 ] = 'C' ; b_obj -> Port [ 1 ] = 'O' ; b_obj -> Port [ 2 ] = 'M' ;
b_obj -> Port [ 3 ] = '9' ; o2hjpb1san0 ( b_obj , & b_obj -> _pobj0 , & b_obj
-> _pobj1 ) ; obj_e = b_obj ; obj_i = obj_e ; if ( h5nfwugf2uw ( obj_i ) ) {
obj_m = obj_i -> AsyncIOChannel ; chImpl = obj_m -> ChannelImpl ; b_value_p [
0 ] = 9600.0 ; b_value_p [ 1 ] = 9600.0 ; success = coderChannelExecute (
chImpl , "SetBaudRate" , 1 , "BaudRate" , "double" , 1 , & b_value_p [ 0 ] )
; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError )
; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ]
, & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } } obj_i -> BaudRate = 9600.0 ;
obj_i = obj_e ; if ( h5nfwugf2uw ( obj_i ) ) { obj_m = obj_i ->
AsyncIOChannel ; chImpl = obj_m -> ChannelImpl ; b_value_p [ 0 ] = 8.0 ;
b_value_p [ 1 ] = 8.0 ; success = coderChannelExecute ( chImpl ,
"SetDataBits" , 1 , "DataBits" , "double" , 1 , & b_value_p [ 0 ] ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } } obj_i -> DataBits = 8.0 ; obj_i =
obj_e ; if ( h5nfwugf2uw ( obj_i ) ) { obj_m = obj_i -> AsyncIOChannel ;
chImpl = obj_m -> ChannelImpl ; b [ 0 ] = 'n' ; b [ 1 ] = 'o' ; b [ 2 ] = 'n'
; b [ 3 ] = 'e' ; success = coderChannelExecute ( chImpl , "SetParity" , 1 ,
"Parity" , "char" , 4 , & b [ 0 ] ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } success = obj_i -> Parity -> size [ 0 ] * obj_i ->
Parity -> size [ 1 ] ; obj_i -> Parity -> size [ 0 ] = 1 ; obj_i -> Parity ->
size [ 1 ] = 0 ; obj_i -> Parity -> size [ 0 ] = 1 ; obj_i -> Parity -> size
[ 1 ] = 4 ; kpntjfigjo ( obj_i -> Parity , success ) ; obj_i -> Parity ->
data [ 0 ] = 'n' ; obj_i -> Parity -> data [ 1 ] = 'o' ; obj_i -> Parity ->
data [ 2 ] = 'n' ; obj_i -> Parity -> data [ 3 ] = 'e' ; obj_i = obj_e ; if (
h5nfwugf2uw ( obj_i ) ) { obj_m = obj_i -> AsyncIOChannel ; chImpl = obj_m ->
ChannelImpl ; b_value_p [ 0 ] = 1.0 ; b_value_p [ 1 ] = 1.0 ; success =
coderChannelExecute ( chImpl , "SetStopBits" , 1 , "StopBits" , "double" , 1
, & b_value_p [ 0 ] ) ; if ( success == 0 ) { coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } } obj_i -> StopBits = 1.0 ; obj_i = obj_e ; if ( h5nfwugf2uw ( obj_i )
) { obj_m = obj_i -> AsyncIOChannel ; chImpl = obj_m -> ChannelImpl ; b [ 0 ]
= 'n' ; b [ 1 ] = 'o' ; b [ 2 ] = 'n' ; b [ 3 ] = 'e' ; success =
coderChannelExecute ( chImpl , "SetFlowControl" , 1 , "FlowControl" , "char"
, 4 , & b [ 0 ] ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl ,
& hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl
, & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } } success = obj_i -> FlowControl -> size [ 0 ] * obj_i -> FlowControl
-> size [ 1 ] ; obj_i -> FlowControl -> size [ 0 ] = 1 ; obj_i -> FlowControl
-> size [ 1 ] = 0 ; obj_i -> FlowControl -> size [ 0 ] = 1 ; obj_i ->
FlowControl -> size [ 1 ] = 4 ; kpntjfigjo ( obj_i -> FlowControl , success )
; obj_i -> FlowControl -> data [ 0 ] = 'n' ; obj_i -> FlowControl -> data [ 1
] = 'o' ; obj_i -> FlowControl -> data [ 2 ] = 'n' ; obj_i -> FlowControl ->
data [ 3 ] = 'e' ; obj_i = obj_e ; obj_g = obj_i -> TransportChannel ; for (
success = 0 ; success < 13 ; success ++ ) { b_value [ success ] = tmp [
success ] ; } success = obj_g -> ByteOrder -> size [ 0 ] * obj_g -> ByteOrder
-> size [ 1 ] ; obj_g -> ByteOrder -> size [ 0 ] = 1 ; obj_g -> ByteOrder ->
size [ 1 ] = 0 ; obj_g -> ByteOrder -> size [ 0 ] = 1 ; obj_g -> ByteOrder ->
size [ 1 ] = 13 ; kpntjfigjo ( obj_g -> ByteOrder , success ) ; for ( success
= 0 ; success < 13 ; success ++ ) { obj_g -> ByteOrder -> data [ success ] =
b_value [ success ] ; } obj_i -> ByteOrder -> size [ 0 ] = 1 ; obj_i ->
ByteOrder -> size [ 1 ] = 0 ; obj_g = obj_i -> TransportChannel ; jjdsoglm4u
( & out , 2 ) ; success = out -> size [ 0 ] * out -> size [ 1 ] ; out -> size
[ 0 ] = 1 ; out -> size [ 1 ] = obj_g -> ByteOrder -> size [ 1 ] ; kpntjfigjo
( out , success ) ; loop_ub = obj_g -> ByteOrder -> size [ 1 ] ; for (
success = 0 ; success < loop_ub ; success ++ ) { out -> data [ success ] =
obj_g -> ByteOrder -> data [ success ] ; } success = obj_i -> ByteOrder ->
size [ 0 ] * obj_i -> ByteOrder -> size [ 1 ] ; obj_i -> ByteOrder -> size [
0 ] = 1 ; obj_i -> ByteOrder -> size [ 1 ] = out -> size [ 1 ] ; kpntjfigjo (
obj_i -> ByteOrder , success ) ; loop_ub = out -> size [ 1 ] - 1 ; for (
success = 0 ; success <= loop_ub ; success ++ ) { obj_i -> ByteOrder -> data
[ success ] = out -> data [ success ] ; } pz01orbdte ( & out ) ; obj_i =
obj_e ; if ( ! obj_i -> IsSharingExistingTimeout ) { obj_j = obj_i ;
outputStream = & obj_j -> AsyncIOChannel -> OutputStream ; inputStream = &
obj_j -> AsyncIOChannel -> InputStream ; outputStream -> Timeout = 10.0 ;
inputStream -> Timeout = 10.0 ; obj_i -> Timeout = 10.0 ; } obj_i = obj_e ;
obj_i -> IsWriteOnly = false ; obj_i = obj_e ; obj_i -> IsSharingPort = true
; obj_e -> IsSharingExistingTimeout = true ; obj_e = b_obj ; for ( success =
0 ; success < 5 ; success ++ ) { val [ success ] = tmp_p [ success ] ; }
success = obj_e -> NativeDataType -> size [ 0 ] * obj_e -> NativeDataType ->
size [ 1 ] ; obj_e -> NativeDataType -> size [ 0 ] = 1 ; obj_e ->
NativeDataType -> size [ 1 ] = 0 ; obj_e -> NativeDataType -> size [ 0 ] = 1
; obj_e -> NativeDataType -> size [ 1 ] = 5 ; kpntjfigjo ( obj_e ->
NativeDataType , success ) ; for ( success = 0 ; success < 5 ; success ++ ) {
obj_e -> NativeDataType -> data [ success ] = val [ success ] ; } obj_g =
obj_e -> TransportChannel ; for ( success = 0 ; success < 5 ; success ++ ) {
val [ success ] = tmp_p [ success ] ; } success = obj_g -> NativeDataType ->
size [ 0 ] * obj_g -> NativeDataType -> size [ 1 ] ; obj_g -> NativeDataType
-> size [ 0 ] = 1 ; obj_g -> NativeDataType -> size [ 1 ] = 0 ; obj_g ->
NativeDataType -> size [ 0 ] = 1 ; obj_g -> NativeDataType -> size [ 1 ] = 5
; kpntjfigjo ( obj_g -> NativeDataType , success ) ; for ( success = 0 ;
success < 5 ; success ++ ) { obj_g -> NativeDataType -> data [ success ] =
val [ success ] ; } obj_e = b_obj ; success = obj_e -> DataFieldName -> size
[ 0 ] * obj_e -> DataFieldName -> size [ 1 ] ; obj_e -> DataFieldName -> size
[ 0 ] = 1 ; obj_e -> DataFieldName -> size [ 1 ] = 0 ; obj_e -> DataFieldName
-> size [ 0 ] = 1 ; obj_e -> DataFieldName -> size [ 1 ] = 4 ; kpntjfigjo (
obj_e -> DataFieldName , success ) ; obj_e -> DataFieldName -> data [ 0 ] =
'D' ; obj_e -> DataFieldName -> data [ 1 ] = 'a' ; obj_e -> DataFieldName ->
data [ 2 ] = 't' ; obj_e -> DataFieldName -> data [ 3 ] = 'a' ; obj_g = obj_e
-> TransportChannel ; success = obj_g -> DataFieldName -> size [ 0 ] * obj_g
-> DataFieldName -> size [ 1 ] ; obj_g -> DataFieldName -> size [ 0 ] = 1 ;
obj_g -> DataFieldName -> size [ 1 ] = 0 ; obj_g -> DataFieldName -> size [ 0
] = 1 ; obj_g -> DataFieldName -> size [ 1 ] = 4 ; kpntjfigjo ( obj_g ->
DataFieldName , success ) ; obj_g -> DataFieldName -> data [ 0 ] = 'D' ;
obj_g -> DataFieldName -> data [ 1 ] = 'a' ; obj_g -> DataFieldName -> data [
2 ] = 't' ; obj_g -> DataFieldName -> data [ 3 ] = 'a' ; b_obj ->
matlabCodegenIsDeleted = false ; njrxz2czen5 ( & obj_p -> SerialObj ) ;
oucphsjoggj ( & obj_p -> SerialObj ) ; obj -> isSetupComplete = true ; obj ->
TunablePropsChanged = false ; } static void iyeltzqc1z ( real_T
newTime_tv_sec , real_T newTime_tv_nsec ) { coderTimespec b_timespec ; if ( !
rtDW . pkbyylsioi ) { if ( ! rtDW . dycqrqqmxg ) { rtDW . dycqrqqmxg = true ;
coderInitTimeFunctions ( & rtDW . pj1ri2ahjl ) ; }
coderTimeClockGettimeMonotonic ( & b_timespec , rtDW . pj1ri2ahjl ) ; rtDW .
pkbyylsioi = true ; } rtDW . ld020lqr2s . tv_sec = newTime_tv_sec ; rtDW .
ld020lqr2s . tv_nsec = newTime_tv_nsec ; } static void efyy0zkhpk ( void ) {
coderTimespec b_timespec ; real_T origTimespec_tv_nsec ; real_T
origTimespec_tv_sec ; if ( ! rtDW . dycqrqqmxg ) { rtDW . dycqrqqmxg = true ;
coderInitTimeFunctions ( & rtDW . pj1ri2ahjl ) ; }
coderTimeClockGettimeMonotonic ( & b_timespec , rtDW . pj1ri2ahjl ) ;
origTimespec_tv_sec = b_timespec . tv_sec ; origTimespec_tv_nsec = b_timespec
. tv_nsec ; iyeltzqc1z ( origTimespec_tv_sec , origTimespec_tv_nsec ) ; }
static void iyeltzqc1zq ( real_T * outTime_tv_sec , real_T * outTime_tv_nsec
) { coderTimespec b_timespec ; real_T origTimespec_tv_nsec ; real_T
origTimespec_tv_sec ; if ( ! rtDW . pkbyylsioi ) { if ( ! rtDW . dycqrqqmxg )
{ rtDW . dycqrqqmxg = true ; coderInitTimeFunctions ( & rtDW . pj1ri2ahjl ) ;
} coderTimeClockGettimeMonotonic ( & b_timespec , rtDW . pj1ri2ahjl ) ;
origTimespec_tv_sec = b_timespec . tv_sec ; origTimespec_tv_nsec = b_timespec
. tv_nsec ; rtDW . ld020lqr2s . tv_sec = origTimespec_tv_sec ; rtDW .
ld020lqr2s . tv_nsec = origTimespec_tv_nsec ; } * outTime_tv_sec = rtDW .
ld020lqr2s . tv_sec ; * outTime_tv_nsec = rtDW . ld020lqr2s . tv_nsec ; }
static real_T ganiwbrrxs ( void ) { coderTimespec b_timespec ; real_T
origTimespec_tv_nsec ; real_T origTimespec_tv_sec ; real_T tdiff_nsec ;
real_T tdiff_sec ; iyeltzqc1zq ( & tdiff_sec , & tdiff_nsec ) ; if ( ! rtDW .
dycqrqqmxg ) { rtDW . dycqrqqmxg = true ; coderInitTimeFunctions ( & rtDW .
pj1ri2ahjl ) ; } coderTimeClockGettimeMonotonic ( & b_timespec , rtDW .
pj1ri2ahjl ) ; origTimespec_tv_sec = b_timespec . tv_sec ;
origTimespec_tv_nsec = b_timespec . tv_nsec ; tdiff_sec = origTimespec_tv_sec
- tdiff_sec ; tdiff_nsec = origTimespec_tv_nsec - tdiff_nsec ; return
tdiff_nsec / 1.0E+9 + tdiff_sec ; } static real_T dqiepqwwri ( pxjtq3ygk0g *
obj ) { CoderChannel chImpl ; CoderInputStream streamImpl ; fxbyyv51o23 *
obj_e ; fxbyyv51o23 * obj_p ; real_T count ; int32_T success ; char_T errorID
[ 1024 ] ; char_T errorText [ 1024 ] ; boolean_T hasSyncError ; obj_p = & obj
-> InputStream ; obj_e = obj_p ; streamImpl = obj_e -> StreamImpl ; success =
coderStreamGetDataAvailable ( streamImpl , & count ) ; if ( success == 0 ) {
chImpl = coderStreamGetChannel ( streamImpl ) ; coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } count += obj_p -> PartialPacketCount ; count += obj ->
PartialPacketCount ; count /= obj -> BytesPerElement ; return count ; }
static void efyy0zkhpka ( real_T * tstart_tv_sec , real_T * tstart_tv_nsec )
{ coderTimespec b_timespec ; if ( ! rtDW . dycqrqqmxg ) { rtDW . dycqrqqmxg =
true ; coderInitTimeFunctions ( & rtDW . pj1ri2ahjl ) ; }
coderTimeClockGettimeMonotonic ( & b_timespec , rtDW . pj1ri2ahjl ) ; *
tstart_tv_sec = b_timespec . tv_sec ; * tstart_tv_nsec = b_timespec . tv_nsec
; } static real_T ganiwbrrxsb ( real_T tstart_tv_sec , real_T tstart_tv_nsec
) { coderTimespec b_timespec ; real_T tdiff_nsec ; real_T tdiff_sec ; if ( !
rtDW . dycqrqqmxg ) { rtDW . dycqrqqmxg = true ; coderInitTimeFunctions ( &
rtDW . pj1ri2ahjl ) ; } coderTimeClockGettimeMonotonic ( & b_timespec , rtDW
. pj1ri2ahjl ) ; tdiff_sec = b_timespec . tv_sec ; tdiff_nsec = b_timespec .
tv_nsec ; tdiff_sec -= tstart_tv_sec ; tdiff_nsec -= tstart_tv_nsec ; return
tdiff_nsec / 1.0E+9 + tdiff_sec ; } static void iksgdstzi2 ( const kw3w1cgktc
* packet , real_T startIndex , real_T endIndex , kw3w1cgktc * result ) {
int32_T e ; int32_T f ; int32_T i_e ; int32_T i_p ; int32_T loop_ub ;
boolean_T i ; boolean_T j ; i = ( packet -> size [ 0 ] == 1 ) ; j = ( packet
-> size [ 1 ] == 1 ) ; if ( i || j ) { i = ( startIndex > endIndex ) ; if ( i
) { f = 0 ; e = 0 ; } else { f = ( int32_T ) startIndex - 1 ; e = ( int32_T )
endIndex ; } i_e = result -> size [ 0 ] * result -> size [ 1 ] ; result ->
size [ 0 ] = 1 ; result -> size [ 1 ] = e - f ; mvpwqbdywu ( result , i_e ) ;
e -= f ; for ( i_e = 0 ; i_e < e ; i_e ++ ) { result -> data [ result -> size
[ 0 ] * i_e ] = packet -> data [ f + i_e ] ; } } else { i = ( startIndex >
endIndex ) ; if ( i ) { f = 0 ; e = 0 ; } else { f = ( int32_T ) startIndex -
1 ; e = ( int32_T ) endIndex ; } i_e = result -> size [ 0 ] * result -> size
[ 1 ] ; result -> size [ 0 ] = packet -> size [ 0 ] ; result -> size [ 1 ] =
e - f ; mvpwqbdywu ( result , i_e ) ; e -= f ; for ( i_e = 0 ; i_e < e ; i_e
++ ) { loop_ub = packet -> size [ 0 ] ; for ( i_p = 0 ; i_p < loop_ub ; i_p
++ ) { result -> data [ i_p + result -> size [ 0 ] * i_e ] = packet -> data [
( f + i_e ) * packet -> size [ 0 ] + i_p ] ; } } } } static void iksgdstzi2b
( const kw3w1cgktc * packet , real_T endIndex , kw3w1cgktc * result ) {
int32_T d ; int32_T i ; int32_T i_p ; int32_T loop_ub ; boolean_T g ;
boolean_T h ; g = ( packet -> size [ 0 ] == 1 ) ; h = ( packet -> size [ 1 ]
== 1 ) ; if ( g || h ) { g = ( endIndex < 1.0 ) ; if ( g ) { d = 0 ; } else {
d = ( int32_T ) endIndex ; } i_p = result -> size [ 0 ] * result -> size [ 1
] ; result -> size [ 0 ] = 1 ; result -> size [ 1 ] = d ; mvpwqbdywu ( result
, i_p ) ; for ( i_p = 0 ; i_p < d ; i_p ++ ) { result -> data [ result ->
size [ 0 ] * i_p ] = packet -> data [ i_p ] ; } } else { g = ( endIndex < 1.0
) ; if ( g ) { d = 0 ; } else { d = ( int32_T ) endIndex ; } i_p = result ->
size [ 0 ] * result -> size [ 1 ] ; result -> size [ 0 ] = packet -> size [ 0
] ; result -> size [ 1 ] = d ; mvpwqbdywu ( result , i_p ) ; for ( i_p = 0 ;
i_p < d ; i_p ++ ) { loop_ub = packet -> size [ 0 ] ; for ( i = 0 ; i <
loop_ub ; i ++ ) { result -> data [ i + result -> size [ 0 ] * i_p ] = packet
-> data [ packet -> size [ 0 ] * i_p + i ] ; } } } } static void gch20cd4f4 (
fxbyyv51o23 * obj , real_T countRequested , kw3w1cgktc * dataRead , real_T *
countRead ) { fxbyyv51o23 * obj_p ; kw3w1cgktc * exampleData ; kw3w1cgktc *
partialPacketInitializer ; kw3w1cgktc * tempDataRead ; real_T ppc ; real_T
pps ; int32_T loop_ub ; int32_T outsize_idx_0 ; ppc = obj ->
PartialPacketCount ; if ( ppc > 0.0 ) { pps = obj -> PartialPacketStart ;
je0z0vljge ( & tempDataRead , 2 ) ; if ( countRequested < ppc ) { iksgdstzi2
( obj -> PartialPacket , pps , ( pps + countRequested ) - 1.0 , tempDataRead
) ; * countRead = countRequested ; obj -> PartialPacketStart = pps +
countRequested ; obj -> PartialPacketCount = ppc - countRequested ; } else {
iksgdstzi2 ( obj -> PartialPacket , pps , ( pps + ppc ) - 1.0 , tempDataRead
) ; * countRead = ppc ; obj_p = obj ; je0z0vljge ( & exampleData , 2 ) ;
loop_ub = exampleData -> size [ 0 ] * exampleData -> size [ 1 ] ; exampleData
-> size [ 0 ] = obj_p -> ExampleData -> size [ 0 ] ; exampleData -> size [ 1
] = obj_p -> ExampleData -> size [ 1 ] ; mvpwqbdywu ( exampleData , loop_ub )
; loop_ub = obj_p -> ExampleData -> size [ 0 ] * obj_p -> ExampleData -> size
[ 1 ] ; for ( outsize_idx_0 = 0 ; outsize_idx_0 < loop_ub ; outsize_idx_0 ++
) { exampleData -> data [ outsize_idx_0 ] = obj_p -> ExampleData -> data [
outsize_idx_0 ] ; } outsize_idx_0 = exampleData -> size [ 0 ] ; no25st1du2 (
& exampleData ) ; je0z0vljge ( & partialPacketInitializer , 2 ) ; loop_ub =
partialPacketInitializer -> size [ 0 ] * partialPacketInitializer -> size [ 1
] ; partialPacketInitializer -> size [ 0 ] = outsize_idx_0 ; mvpwqbdywu (
partialPacketInitializer , loop_ub ) ; obj_p -> PartialPacket -> size [ 0 ] =
partialPacketInitializer -> size [ 0 ] ; no25st1du2 ( &
partialPacketInitializer ) ; obj_p -> PartialPacket -> size [ 1 ] = 0 ; obj_p
-> PartialPacketStart = 0.0 ; obj_p -> PartialPacketCount = 0.0 ; }
iksgdstzi2b ( tempDataRead , ( real_T ) tempDataRead -> size [ 1 ] , dataRead
) ; no25st1du2 ( & tempDataRead ) ; } else { dataRead -> size [ 0 ] = 1 ;
dataRead -> size [ 1 ] = 0 ; * countRead = 0.0 ; } } static void bb0uwefgr1 (
aa5bqgvdkq * * pEmxArray , int32_T numDimensions ) { aa5bqgvdkq * emxArray ;
int32_T i ; * pEmxArray = ( aa5bqgvdkq * ) malloc ( sizeof ( aa5bqgvdkq ) ) ;
emxArray = * pEmxArray ; emxArray -> data = ( cjy55fimls * ) NULL ; emxArray
-> numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize
= 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++
) { emxArray -> size [ i ] = 0 ; } } static void mn2lcbi2uy ( fxbyyv51o23 *
obj , char_T status_data [ ] , int32_T status_size [ 2 ] ) { CoderChannel
chImpl ; CoderInputStream streamImpl ; coderTimespec b_timespec ;
coderTimespec b_timespec_p ; fxbyyv51o23 * obj_p ; real_T et ; real_T
startTic_tv_nsec ; real_T startTic_tv_sec ; real_T timeoutInSeconds ; int32_T
success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ; boolean_T
done ; boolean_T hasSyncError ; boolean_T timeout ; static const char_T tmp [
9 ] = { 'c' , 'o' , 'm' , 'p' , 'l' , 'e' , 't' , 'e' , 'd' } ; static const
char_T tmp_p [ 7 ] = { 't' , 'i' , 'm' , 'e' , 'o' , 'u' , 't' } ;
timeoutInSeconds = obj -> Timeout ; status_size [ 0 ] = 1 ; status_size [ 1 ]
= 0 ; timeout = false ; done = false ; obj_p = obj ; streamImpl = obj_p ->
StreamImpl ; success = coderStreamGetDataAvailable ( streamImpl , & et ) ; if
( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } hasSyncError = ( et > 0.0 ) ; efyy0zkhpka ( &
startTic_tv_sec , & startTic_tv_nsec ) ; while ( ( ! hasSyncError ) && ( !
done ) && ( ! timeout ) ) { et = ganiwbrrxsb ( startTic_tv_sec ,
startTic_tv_nsec ) ; if ( et < 1.0 ) { b_timespec_p . tv_sec = 0.0 ;
b_timespec_p . tv_nsec = 0.0 ; coderTimeSleep ( & b_timespec_p ) ; } else {
b_timespec . tv_sec = 0.0 ; b_timespec . tv_nsec = 5.0E+6 ; coderTimeSleep (
& b_timespec ) ; } et = ganiwbrrxsb ( startTic_tv_sec , startTic_tv_nsec ) ;
timeout = ( et > timeoutInSeconds ) ; obj_p = obj ; streamImpl = obj_p ->
StreamImpl ; success = coderStreamIsDeviceDone ( streamImpl , & done ) ; if (
success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( done ) { done = true ; } else { obj_p = obj ;
streamImpl = obj_p -> StreamImpl ; success = coderStreamIsOpen ( streamImpl ,
& done ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl
) ; coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( !
hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( ! done ) { done = true ; }
else { done = false ; } } obj_p = obj ; streamImpl = obj_p -> StreamImpl ;
success = coderStreamGetDataAvailable ( streamImpl , & et ) ; if ( success ==
0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } hasSyncError = ( et > 0.0 ) ; } if ( hasSyncError ) {
status_size [ 0 ] = 1 ; status_size [ 1 ] = 9 ; for ( success = 0 ; success <
9 ; success ++ ) { status_data [ success ] = tmp [ success ] ; } } else if (
done ) { status_size [ 0 ] = 1 ; status_size [ 1 ] = 4 ; status_data [ 0 ] =
'd' ; status_data [ 1 ] = 'o' ; status_data [ 2 ] = 'n' ; status_data [ 3 ] =
'e' ; } else if ( timeout ) { status_size [ 0 ] = 1 ; status_size [ 1 ] = 7 ;
for ( success = 0 ; success < 7 ; success ++ ) { status_data [ success ] =
tmp_p [ success ] ; } } } static boolean_T gh3bt5xumf ( const char_T a_data [
] , const int32_T a_size [ 2 ] ) { lytfstpiri * x ; int32_T remainingDimsA ;
char_T a_data_p [ 9 ] ; char_T b [ 9 ] ; char_T x_p ; char_T y ; boolean_T
b_bool ; static const char_T tmp [ 9 ] = { 'c' , 'o' , 'm' , 'p' , 'l' , 'e'
, 't' , 'e' , 'd' } ; static const char_T tmp_p [ 128 ] = { '\x00' , '\x01' ,
'\x02' , '\x03' , '\x04' , '\x05' , '\x06' , '\a' , '\b' , '\t' , '\n' , '\v'
, '\f' , '\r' , '\x0e' , '\x0f' , '\x10' , '\x11' , '\x12' , '\x13' , '\x14'
, '\x15' , '\x16' , '\x17' , '\x18' , '\x19' , '\x1a' , '\x1b' , '\x1c' ,
'\x1d' , '\x1e' , '\x1f' , ' ' , '!' , '\"' , '#' , '$' , '%' , '&' , '\'' ,
'(' , ')' , '*' , '+' , ',' , '-' , '.' , '/' , '0' , '1' , '2' , '3' , '4' ,
'5' , '6' , '7' , '8' , '9' , ':' , ';' , '<' , '=' , '>' , '?' , '@' , 'a' ,
'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' ,
'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '[' ,
'\\' , ']' , '^' , '_' , '`' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h'
, 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u'
, 'v' , 'w' , 'x' , 'y' , 'z' , '{' , '|' , '}' , '~' , '\x7f' } ; int32_T
a_size_idx_1 ; int32_T exitg1 ; const char_T * table ; a_size_idx_1 = a_size
[ 1 ] ; remainingDimsA = a_size [ 1 ] ; if ( remainingDimsA - 1 >= 0 ) {
memcpy ( & b [ 0 ] , & a_data [ 0 ] , ( uint32_T ) remainingDimsA * sizeof (
char_T ) ) ; } remainingDimsA = a_size_idx_1 ; if ( remainingDimsA - 1 >= 0 )
{ memcpy ( & a_data_p [ 0 ] , & b [ 0 ] , ( uint32_T ) remainingDimsA *
sizeof ( char_T ) ) ; } for ( remainingDimsA = 0 ; remainingDimsA < 9 ;
remainingDimsA ++ ) { b [ remainingDimsA ] = tmp [ remainingDimsA ] ; }
b_bool = false ; jjdsoglm4u ( & x , 2 ) ; remainingDimsA = x -> size [ 0 ] *
x -> size [ 1 ] ; x -> size [ 1 ] = a_size_idx_1 ; kpntjfigjo ( x ,
remainingDimsA ) ; remainingDimsA = x -> size [ 1 ] ; pz01orbdte ( & x ) ; if
( remainingDimsA != 9 ) { } else { remainingDimsA = 1 ; do { exitg1 = 0 ; if
( remainingDimsA - 1 < 9 ) { a_size_idx_1 = remainingDimsA - 1 ; x_p =
a_data_p [ a_size_idx_1 ] ; table = & tmp_p [ 0 ] ; y = table [ ( uint8_T )
x_p & 127 ] ; x_p = b [ a_size_idx_1 ] ; table = & tmp_p [ 0 ] ; x_p = table
[ ( int32_T ) x_p ] ; if ( y != x_p ) { exitg1 = 1 ; } else { remainingDimsA
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; }
return b_bool ; } static void m4xvs1e3pr ( cjy55fimls * pStruct ) {
je0z0vljge ( & pStruct -> f1 , 2 ) ; } static void ovgu4vuxrt ( aa5bqgvdkq *
emxArray , int32_T fromIndex , int32_T toIndex ) { int32_T i ; for ( i =
fromIndex ; i < toIndex ; i ++ ) { m4xvs1e3pr ( & emxArray -> data [ i ] ) ;
} } static void dns4ggsxgl ( cjy55fimls * pStruct ) { no25st1du2 ( & pStruct
-> f1 ) ; } static void i22ayaur1g ( aa5bqgvdkq * emxArray , int32_T
fromIndex , int32_T toIndex ) { int32_T i ; for ( i = fromIndex ; i < toIndex
; i ++ ) { dns4ggsxgl ( & emxArray -> data [ i ] ) ; } } static void
drospuyegg ( aa5bqgvdkq * emxArray , int32_T oldNumel ) { int32_T i ; int32_T
newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel =
1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *=
emxArray -> size [ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i =
emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel )
{ if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData =
calloc ( ( uint32_T ) i , sizeof ( cjy55fimls ) ) ; if ( emxArray -> data !=
NULL ) { memcpy ( newData , emxArray -> data , sizeof ( cjy55fimls ) * (
uint32_T ) oldNumel ) ; if ( emxArray -> canFreeData ) { free ( emxArray ->
data ) ; } } emxArray -> data = ( cjy55fimls * ) newData ; emxArray ->
allocatedSize = i ; emxArray -> canFreeData = true ; } if ( oldNumel >
newNumel ) { i22ayaur1g ( emxArray , newNumel , oldNumel ) ; } else if (
oldNumel < newNumel ) { ovgu4vuxrt ( emxArray , oldNumel , newNumel ) ; } }
static void o0wddit1mx ( bvpcxluwvo * * pEmxArray , int32_T numDimensions ) {
bvpcxluwvo * emxArray ; int32_T i ; * pEmxArray = ( bvpcxluwvo * ) malloc (
sizeof ( bvpcxluwvo ) ) ; emxArray = * pEmxArray ; emxArray -> data = (
boolean_T * ) NULL ; emxArray -> numDimensions = numDimensions ; emxArray ->
size = ( int32_T * ) malloc ( sizeof ( int32_T ) * ( uint32_T ) numDimensions
) ; emxArray -> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i
= 0 ; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static
void flxj4w4dle ( bvpcxluwvo * emxArray , int32_T oldNumel ) { int32_T i ;
int32_T newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; }
newNumel = 1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) {
newNumel *= emxArray -> size [ i ] ; } if ( newNumel > emxArray ->
allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; }
while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i
<<= 1 ; } } newData = malloc ( ( uint32_T ) i * sizeof ( boolean_T ) ) ; if (
emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data , sizeof (
boolean_T ) * ( uint32_T ) oldNumel ) ; if ( emxArray -> canFreeData ) { free
( emxArray -> data ) ; } } emxArray -> data = ( boolean_T * ) newData ;
emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ; } } static
void iuuiiftx3w ( bvpcxluwvo * * pEmxArray ) { if ( * pEmxArray != (
bvpcxluwvo * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( boolean_T * )
NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data )
; } free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
bvpcxluwvo * ) NULL ; } } static void afdhxmetmz ( fxbyyv51o23 * obj , real_T
countRequested , aa5bqgvdkq * packets , real_T * countRead ) { CoderChannel
chImpl ; CoderInputStream streamImpl ; bvpcxluwvo * tile ; fxbyyv51o23 *
obj_p ; kw3w1cgktc * b_value ; kw3w1cgktc * packet ; real_T bufferCounts [ 80
] ; real_T countToRead ; real_T numBuffers ; real_T repmatTiling ; int32_T
b_bufferIndex ; int32_T d_idx_1 ; int32_T outsize ; int32_T success ; int32_T
tmp ; uint32_T bufferIndex ; char_T errorID [ 1024 ] ; char_T errorText [
1024 ] ; boolean_T hasSyncError ; streamImpl = obj -> StreamImpl ;
countToRead = 0.0 ; memset ( & bufferCounts [ 0 ] , 0 , 80U * sizeof ( real_T
) ) ; numBuffers = 80.0 ; success = coderInputStreamPeek ( streamImpl ,
countRequested , & countToRead , & bufferCounts [ 0 ] , & numBuffers ) ; if (
success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } d_idx_1 = ( int32_T ) numBuffers ; success = (
int32_T ) numBuffers - 1 ; tmp = packets -> size [ 0 ] * packets -> size [ 1
] ; packets -> size [ 0 ] = 1 ; packets -> size [ 1 ] = d_idx_1 ; drospuyegg
( packets , tmp ) ; o0wddit1mx ( & tile , 2 ) ; for ( b_bufferIndex = 0 ;
b_bufferIndex <= success ; b_bufferIndex ++ ) { bufferIndex = ( uint32_T )
b_bufferIndex + 1U ; repmatTiling = bufferCounts [ ( int32_T ) bufferIndex -
1 ] ; tmp = tile -> size [ 0 ] * tile -> size [ 1 ] ; tile -> size [ 1 ] = (
int32_T ) repmatTiling ; flxj4w4dle ( tile , tmp ) ; outsize = tile -> size [
1 ] ; tmp = packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 0
] * packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 1 ] ;
packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 0 ] = 1 ;
packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 1 ] = outsize
; mvpwqbdywu ( packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 , tmp ) ;
for ( d_idx_1 = 0 ; d_idx_1 < outsize ; d_idx_1 ++ ) { packets -> data [ (
int32_T ) bufferIndex - 1 ] . f1 -> data [ d_idx_1 ] = 0U ; } } iuuiiftx3w (
& tile ) ; streamImpl = obj -> StreamImpl ; success =
coderInputStreamReadBuffers ( streamImpl , countToRead , numBuffers ) ; if (
success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } * countRead = 0.0 ; outsize = ( int32_T ) numBuffers
- 1 ; je0z0vljge ( & packet , 2 ) ; je0z0vljge ( & b_value , 2 ) ; for (
b_bufferIndex = 0 ; b_bufferIndex <= outsize ; b_bufferIndex ++ ) {
bufferIndex = ( uint32_T ) b_bufferIndex + 1U ; tmp = packet -> size [ 0 ] *
packet -> size [ 1 ] ; packet -> size [ 0 ] = 1 ; packet -> size [ 1 ] =
packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 1 ] ;
mvpwqbdywu ( packet , tmp ) ; success = packets -> data [ ( int32_T )
bufferIndex - 1 ] . f1 -> size [ 1 ] ; for ( d_idx_1 = 0 ; d_idx_1 < success
; d_idx_1 ++ ) { packet -> data [ d_idx_1 ] = packets -> data [ ( int32_T )
bufferIndex - 1 ] . f1 -> data [ d_idx_1 ] ; } obj_p = obj ; tmp = b_value ->
size [ 0 ] * b_value -> size [ 1 ] ; b_value -> size [ 0 ] = 1 ; b_value ->
size [ 1 ] = packet -> size [ 1 ] ; mvpwqbdywu ( b_value , tmp ) ; success =
packet -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( & b_value -> data [
0 ] , & packet -> data [ 0 ] , ( uint32_T ) success * sizeof ( uint8_T ) ) ;
} tmp = packet -> size [ 0 ] * packet -> size [ 1 ] ; packet -> size [ 0 ] =
1 ; packet -> size [ 1 ] = b_value -> size [ 1 ] ; mvpwqbdywu ( packet , tmp
) ; success = b_value -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( &
packet -> data [ 0 ] , & b_value -> data [ 0 ] , ( uint32_T ) success *
sizeof ( uint8_T ) ) ; } streamImpl = obj_p -> StreamImpl ; tmp = b_value ->
size [ 0 ] * b_value -> size [ 1 ] ; b_value -> size [ 0 ] = 1 ; b_value ->
size [ 1 ] = packet -> size [ 1 ] ; mvpwqbdywu ( b_value , tmp ) ; success =
packet -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( & b_value -> data [
0 ] , & packet -> data [ 0 ] , ( uint32_T ) success * sizeof ( uint8_T ) ) ;
} tmp = packet -> size [ 0 ] * packet -> size [ 1 ] ; packet -> size [ 0 ] =
1 ; packet -> size [ 1 ] = b_value -> size [ 1 ] ; mvpwqbdywu ( packet , tmp
) ; success = b_value -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( &
packet -> data [ 0 ] , & b_value -> data [ 0 ] , ( uint32_T ) success *
sizeof ( uint8_T ) ) ; } success = coderInputStreamReadBufferData (
streamImpl , ( int32_T ) bufferIndex , 1 , "" , "uint8" , packet -> size [ 1
] , & packet -> data [ 0 ] ) ; if ( success == 0 ) { chImpl =
coderStreamGetChannel ( streamImpl ) ; coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } streamImpl = obj ->
StreamImpl ; coderInputStreamFreeBuffer ( streamImpl , ( int32_T )
bufferIndex ) ; tmp = packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 ->
size [ 0 ] * packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 1
] ; packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 0 ] = 1 ;
packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1 -> size [ 1 ] = packet
-> size [ 1 ] ; mvpwqbdywu ( packets -> data [ ( int32_T ) bufferIndex - 1 ]
. f1 , tmp ) ; success = packet -> size [ 1 ] ; for ( d_idx_1 = 0 ; d_idx_1 <
success ; d_idx_1 ++ ) { packets -> data [ ( int32_T ) bufferIndex - 1 ] . f1
-> data [ d_idx_1 ] = packet -> data [ d_idx_1 ] ; } * countRead +=
bufferCounts [ ( int32_T ) bufferIndex - 1 ] ; } no25st1du2 ( & b_value ) ;
no25st1du2 ( & packet ) ; } static boolean_T gh3bt5xumfy ( const char_T
a_data [ ] , const int32_T a_size [ 2 ] ) { lytfstpiri * x ; int32_T
remainingDimsA ; char_T a_data_e [ 9 ] ; char_T a_data_p [ 9 ] ; char_T b [ 7
] ; char_T x_p ; char_T y ; boolean_T b_bool ; static const char_T tmp [ 7 ]
= { 'i' , 'n' , 'v' , 'a' , 'l' , 'i' , 'd' } ; static const char_T tmp_p [
128 ] = { '\x00' , '\x01' , '\x02' , '\x03' , '\x04' , '\x05' , '\x06' , '\a'
, '\b' , '\t' , '\n' , '\v' , '\f' , '\r' , '\x0e' , '\x0f' , '\x10' , '\x11'
, '\x12' , '\x13' , '\x14' , '\x15' , '\x16' , '\x17' , '\x18' , '\x19' ,
'\x1a' , '\x1b' , '\x1c' , '\x1d' , '\x1e' , '\x1f' , ' ' , '!' , '\"' , '#'
, '$' , '%' , '&' , '\'' , '(' , ')' , '*' , '+' , ',' , '-' , '.' , '/' ,
'0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , ':' , ';' , '<' ,
'=' , '>' , '?' , '@' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' ,
'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' ,
'w' , 'x' , 'y' , 'z' , '[' , '\\' , ']' , '^' , '_' , '`' , 'a' , 'b' , 'c'
, 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p'
, 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '{' , '|' , '}'
, '~' , '\x7f' } ; int32_T a_size_idx_1 ; int32_T exitg1 ; const char_T *
table ; a_size_idx_1 = a_size [ 1 ] ; remainingDimsA = a_size [ 1 ] ; if (
remainingDimsA - 1 >= 0 ) { memcpy ( & a_data_p [ 0 ] , & a_data [ 0 ] , (
uint32_T ) remainingDimsA * sizeof ( char_T ) ) ; } remainingDimsA =
a_size_idx_1 ; if ( remainingDimsA - 1 >= 0 ) { memcpy ( & a_data_e [ 0 ] , &
a_data_p [ 0 ] , ( uint32_T ) remainingDimsA * sizeof ( char_T ) ) ; } for (
remainingDimsA = 0 ; remainingDimsA < 7 ; remainingDimsA ++ ) { b [
remainingDimsA ] = tmp [ remainingDimsA ] ; } b_bool = false ; jjdsoglm4u ( &
x , 2 ) ; remainingDimsA = x -> size [ 0 ] * x -> size [ 1 ] ; x -> size [ 1
] = a_size_idx_1 ; kpntjfigjo ( x , remainingDimsA ) ; remainingDimsA = x ->
size [ 1 ] ; pz01orbdte ( & x ) ; if ( remainingDimsA != 7 ) { } else {
remainingDimsA = 1 ; do { exitg1 = 0 ; if ( remainingDimsA - 1 < 7 ) {
a_size_idx_1 = remainingDimsA - 1 ; x_p = a_data_e [ a_size_idx_1 ] ; table =
& tmp_p [ 0 ] ; y = table [ ( uint8_T ) x_p & 127 ] ; x_p = b [ a_size_idx_1
] ; table = & tmp_p [ 0 ] ; x_p = table [ ( int32_T ) x_p ] ; if ( y != x_p )
{ exitg1 = 1 ; } else { remainingDimsA ++ ; } } else { b_bool = true ; exitg1
= 1 ; } } while ( exitg1 == 0 ) ; } return b_bool ; } static boolean_T
gh3bt5xumfys ( const char_T a_data [ ] , const int32_T a_size [ 2 ] ) {
lytfstpiri * x ; int32_T remainingDimsA ; char_T a_data_e [ 9 ] ; char_T
a_data_p [ 9 ] ; char_T b [ 4 ] ; char_T x_p ; char_T y ; boolean_T b_bool ;
static const char_T tmp [ 128 ] = { '\x00' , '\x01' , '\x02' , '\x03' ,
'\x04' , '\x05' , '\x06' , '\a' , '\b' , '\t' , '\n' , '\v' , '\f' , '\r' ,
'\x0e' , '\x0f' , '\x10' , '\x11' , '\x12' , '\x13' , '\x14' , '\x15' ,
'\x16' , '\x17' , '\x18' , '\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' ,
'\x1e' , '\x1f' , ' ' , '!' , '\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')'
, '*' , '+' , ',' , '-' , '.' , '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6'
, '7' , '8' , '9' , ':' , ';' , '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c'
, 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p'
, 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' ,
']' , '^' , '_' , '`' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' ,
'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' ,
'w' , 'x' , 'y' , 'z' , '{' , '|' , '}' , '~' , '\x7f' } ; int32_T
a_size_idx_1 ; int32_T exitg1 ; const char_T * table ; a_size_idx_1 = a_size
[ 1 ] ; remainingDimsA = a_size [ 1 ] ; if ( remainingDimsA - 1 >= 0 ) {
memcpy ( & a_data_p [ 0 ] , & a_data [ 0 ] , ( uint32_T ) remainingDimsA *
sizeof ( char_T ) ) ; } remainingDimsA = a_size_idx_1 ; if ( remainingDimsA -
1 >= 0 ) { memcpy ( & a_data_e [ 0 ] , & a_data_p [ 0 ] , ( uint32_T )
remainingDimsA * sizeof ( char_T ) ) ; } b [ 0 ] = 'd' ; b [ 1 ] = 'o' ; b [
2 ] = 'n' ; b [ 3 ] = 'e' ; b_bool = false ; jjdsoglm4u ( & x , 2 ) ;
remainingDimsA = x -> size [ 0 ] * x -> size [ 1 ] ; x -> size [ 1 ] =
a_size_idx_1 ; kpntjfigjo ( x , remainingDimsA ) ; remainingDimsA = x -> size
[ 1 ] ; pz01orbdte ( & x ) ; if ( remainingDimsA != 4 ) { } else {
remainingDimsA = 1 ; do { exitg1 = 0 ; if ( remainingDimsA - 1 < 4 ) {
a_size_idx_1 = remainingDimsA - 1 ; x_p = a_data_e [ a_size_idx_1 ] ; table =
& tmp [ 0 ] ; y = table [ ( uint8_T ) x_p & 127 ] ; x_p = b [ a_size_idx_1 ]
; table = & tmp [ 0 ] ; x_p = table [ ( int32_T ) x_p ] ; if ( y != x_p ) {
exitg1 = 1 ; } else { remainingDimsA ++ ; } } else { b_bool = true ; exitg1 =
1 ; } } while ( exitg1 == 0 ) ; } return b_bool ; } static void asx315p0t4 (
aa5bqgvdkq * * pEmxArray ) { int32_T i ; int32_T numEl ; if ( * pEmxArray !=
( aa5bqgvdkq * ) NULL ) { if ( ( * pEmxArray ) -> data != ( cjy55fimls * )
NULL ) { numEl = 1 ; for ( i = 0 ; i < ( * pEmxArray ) -> numDimensions ; i
++ ) { numEl *= ( * pEmxArray ) -> size [ i ] ; } for ( i = 0 ; i < numEl ; i
++ ) { dns4ggsxgl ( & ( * pEmxArray ) -> data [ i ] ) ; } if ( ( * pEmxArray
) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } } free ( ( *
pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( aa5bqgvdkq * )
NULL ; } } static void j25i2ywt1j ( fxbyyv51o23 * obj , real_T countRequested
, kw3w1cgktc * data , real_T * countRead , char_T err_data [ ] , int32_T
err_size [ 2 ] ) { CoderChannel chImpl ; CoderInputStream streamImpl ;
aa5bqgvdkq * packets ; fxbyyv51o23 * obj_p ; kw3w1cgktc * data_e ; kw3w1cgktc
* data_i ; kw3w1cgktc * excessData ; kw3w1cgktc * varargin_2 ; real_T count ;
real_T countToRead ; int32_T status_size [ 2 ] ; int32_T data_p ; int32_T
exitg1 ; int32_T iy ; int32_T loop_ub ; int32_T obj_e ; int32_T success ;
int32_T ysize_dim ; int32_T ysize_idx_0 ; char_T errorID [ 1024 ] ; char_T
errorText [ 1024 ] ; char_T status_data [ 9 ] ; boolean_T guard1 ; boolean_T
guard11 ; boolean_T hasSyncError ; loop_ub = obj -> ExampleData -> size [ 0 ]
* obj -> ExampleData -> size [ 1 ] ; obj -> ExampleData -> size [ 0 ] = 1 ;
obj -> ExampleData -> size [ 1 ] = 1 ; mvpwqbdywu ( obj -> ExampleData ,
loop_ub ) ; obj -> ExampleData -> data [ 0 ] = 0U ; err_size [ 0 ] = 1 ;
err_size [ 1 ] = 0 ; gch20cd4f4 ( obj , countRequested , data , countRead ) ;
je0z0vljge ( & excessData , 2 ) ; bb0uwefgr1 ( & packets , 2 ) ; je0z0vljge (
& varargin_2 , 2 ) ; je0z0vljge ( & data_e , 2 ) ; je0z0vljge ( & data_i , 2
) ; if ( * countRead == countRequested ) { iy = data -> size [ 1 ] ; loop_ub
= data_i -> size [ 0 ] * data_i -> size [ 1 ] ; data_i -> size [ 0 ] = data
-> size [ 0 ] ; data_i -> size [ 1 ] = data -> size [ 1 ] ; mvpwqbdywu (
data_i , loop_ub ) ; loop_ub = data -> size [ 0 ] * data -> size [ 1 ] - 1 ;
if ( loop_ub >= 0 ) { memcpy ( & data_i -> data [ 0 ] , & data -> data [ 0 ]
, ( uint32_T ) ( loop_ub + 1 ) * sizeof ( uint8_T ) ) ; } iksgdstzi2b (
data_i , ( real_T ) iy , data ) ; } else { guard1 = false ; do { exitg1 = 0 ;
if ( * countRead < countRequested ) { obj_p = obj ; streamImpl = obj_p ->
StreamImpl ; success = coderStreamGetDataAvailable ( streamImpl , & count ) ;
if ( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } guard11 = false ; if ( count == 0.0 ) { mn2lcbi2uy (
obj , status_data , status_size ) ; if ( ! gh3bt5xumf ( status_data ,
status_size ) ) { err_size [ 0 ] = 1 ; err_size [ 1 ] = status_size [ 1 ] ;
loop_ub = status_size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & err_data [
0 ] , & status_data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( char_T ) ) ; } if
( gh3bt5xumfy ( status_data , status_size ) ) { data -> size [ 0 ] = 1 ; data
-> size [ 1 ] = 0 ; } else { if ( gh3bt5xumfys ( status_data , status_size )
) { err_size [ 0 ] = 1 ; err_size [ 1 ] = 0 ; } guard1 = true ; } exitg1 = 1
; } else { guard11 = true ; } } else { guard11 = true ; } if ( guard11 ) {
countToRead = countRequested - * countRead ; afdhxmetmz ( obj , countToRead ,
packets , & count ) ; countToRead = packets -> size [ 1 ] ; obj_e = ( int32_T
) countToRead - 1 ; for ( success = 0 ; success <= obj_e ; success ++ ) {
countToRead = ( real_T ) success + 1.0 ; iy = data -> size [ 0 ] ; loop_ub =
excessData -> size [ 0 ] * excessData -> size [ 1 ] ; excessData -> size [ 0
] = iy ; data_p = data -> size [ 1 ] ; excessData -> size [ 1 ] = data_p ;
mvpwqbdywu ( excessData , loop_ub ) ; loop_ub = iy * data_p ; if ( loop_ub -
1 >= 0 ) { memcpy ( & excessData -> data [ 0 ] , & data -> data [ 0 ] , (
uint32_T ) loop_ub * sizeof ( uint8_T ) ) ; } loop_ub = varargin_2 -> size [
0 ] * varargin_2 -> size [ 1 ] ; varargin_2 -> size [ 0 ] = 1 ; varargin_2 ->
size [ 1 ] = packets -> data [ ( int32_T ) countToRead - 1 ] . f1 -> size [ 1
] ; mvpwqbdywu ( varargin_2 , loop_ub ) ; loop_ub = packets -> data [ (
int32_T ) countToRead - 1 ] . f1 -> size [ 1 ] ; for ( iy = 0 ; iy < loop_ub
; iy ++ ) { varargin_2 -> data [ iy ] = packets -> data [ ( int32_T )
countToRead - 1 ] . f1 -> data [ iy ] ; } ysize_dim = excessData -> size [ 1
] ; ysize_dim += varargin_2 -> size [ 1 ] ; ysize_idx_0 = excessData -> size
[ 0 ] ; iy = excessData -> size [ 0 ] ; loop_ub = data -> size [ 0 ] * data
-> size [ 1 ] ; data -> size [ 0 ] = iy ; data_p = excessData -> size [ 1 ] ;
data -> size [ 1 ] = data_p ; mvpwqbdywu ( data , loop_ub ) ; loop_ub =
excessData -> size [ 0 ] * excessData -> size [ 1 ] ; if ( loop_ub - 1 >= 0 )
{ memcpy ( & data -> data [ 0 ] , & excessData -> data [ 0 ] , ( uint32_T )
loop_ub * sizeof ( uint8_T ) ) ; } loop_ub = data -> size [ 0 ] * data ->
size [ 1 ] ; data -> size [ 0 ] = ysize_idx_0 ; data -> size [ 1 ] =
ysize_dim ; mvpwqbdywu ( data , loop_ub ) ; iy = excessData -> size [ 0 ] *
excessData -> size [ 1 ] ; loop_ub = varargin_2 -> size [ 1 ] - 1 ; for (
ysize_dim = 0 ; ysize_dim <= loop_ub ; ysize_dim ++ ) { data -> data [ iy +
ysize_dim ] = varargin_2 -> data [ ysize_dim ] ; } } * countRead += count ;
guard1 = false ; } } else { guard1 = true ; exitg1 = 1 ; } } while ( exitg1
== 0 ) ; if ( guard1 ) { if ( * countRead > countRequested ) { iksgdstzi2 (
data , countRequested + 1.0 , * countRead , excessData ) ; obj_p = obj ;
loop_ub = obj_p -> PartialPacket -> size [ 0 ] * obj_p -> PartialPacket ->
size [ 1 ] ; obj_p -> PartialPacket -> size [ 0 ] = excessData -> size [ 0 ]
; obj_p -> PartialPacket -> size [ 1 ] = excessData -> size [ 1 ] ;
mvpwqbdywu ( obj_p -> PartialPacket , loop_ub ) ; loop_ub = excessData ->
size [ 0 ] * excessData -> size [ 1 ] ; for ( iy = 0 ; iy < loop_ub ; iy ++ )
{ obj_p -> PartialPacket -> data [ iy ] = excessData -> data [ iy ] ; } obj_p
-> PartialPacketStart = 1.0 ; obj_p -> PartialPacketCount = excessData ->
size [ 1 ] ; loop_ub = data_e -> size [ 0 ] * data_e -> size [ 1 ] ; data_e
-> size [ 0 ] = data -> size [ 0 ] ; data_e -> size [ 1 ] = data -> size [ 1
] ; mvpwqbdywu ( data_e , loop_ub ) ; loop_ub = data -> size [ 0 ] * data ->
size [ 1 ] - 1 ; if ( loop_ub >= 0 ) { memcpy ( & data_e -> data [ 0 ] , &
data -> data [ 0 ] , ( uint32_T ) ( loop_ub + 1 ) * sizeof ( uint8_T ) ) ; }
iksgdstzi2b ( data_e , countRequested , data ) ; * countRead = countRequested
; } hasSyncError = ( err_size [ 1 ] == 0 ) ; if ( ! hasSyncError ) { obj_p =
obj ; loop_ub = obj_p -> PartialPacket -> size [ 0 ] * obj_p -> PartialPacket
-> size [ 1 ] ; obj_p -> PartialPacket -> size [ 0 ] = data -> size [ 0 ] ;
obj_p -> PartialPacket -> size [ 1 ] = data -> size [ 1 ] ; mvpwqbdywu (
obj_p -> PartialPacket , loop_ub ) ; loop_ub = data -> size [ 0 ] * data ->
size [ 1 ] ; for ( iy = 0 ; iy < loop_ub ; iy ++ ) { obj_p -> PartialPacket
-> data [ iy ] = data -> data [ iy ] ; } obj_p -> PartialPacketStart = 1.0 ;
obj_p -> PartialPacketCount = data -> size [ 1 ] ; data -> size [ 0 ] = 1 ;
data -> size [ 1 ] = 0 ; * countRead = 0.0 ; } } } no25st1du2 ( & data_i ) ;
no25st1du2 ( & data_e ) ; no25st1du2 ( & varargin_2 ) ; asx315p0t4 ( &
packets ) ; no25st1du2 ( & excessData ) ; } static void alqjz0a40s (
p4uhdr1bdf * pStruct ) { je0z0vljge ( & pStruct -> f1 , 2 ) ; } static void
pgc0j0gkjq ( eaumivaow2 * pEmxArray ) { pEmxArray -> size [ 0 ] = 0 ;
pEmxArray -> size [ 1 ] = 0 ; } static void dlfxdg5ewt ( p4uhdr1bdf * data ,
int32_T fromIndex , int32_T toIndex ) { int32_T i ; for ( i = fromIndex ; i <
toIndex ; i ++ ) { alqjz0a40s ( data ) ; } } static void pmdz3cnfnl (
p4uhdr1bdf * pStruct ) { no25st1du2 ( & pStruct -> f1 ) ; } static void
aeek3b2gyt ( p4uhdr1bdf * data , int32_T fromIndex , int32_T toIndex ) {
int32_T i ; for ( i = fromIndex ; i < toIndex ; i ++ ) { pmdz3cnfnl ( data )
; } } static void i4ljfh5xim ( p4uhdr1bdf * data , const int32_T size [ 2 ] ,
int32_T oldNumel ) { int32_T newNumel ; if ( oldNumel < 0 ) { oldNumel = 0 ;
} newNumel = size [ 0 ] * size [ 1 ] ; if ( oldNumel > newNumel ) {
aeek3b2gyt ( data , newNumel , oldNumel ) ; } else if ( oldNumel < newNumel )
{ dlfxdg5ewt ( data , oldNumel , newNumel ) ; } } static void oexfsnygak (
kw3w1cgktc * * dst , kw3w1cgktc * const * src ) { int32_T i ; int32_T
numElDst ; int32_T numElSrc ; numElDst = 1 ; numElSrc = 1 ; for ( i = 0 ; i <
( * dst ) -> numDimensions ; i ++ ) { numElDst *= ( * dst ) -> size [ i ] ;
numElSrc *= ( * src ) -> size [ i ] ; } for ( i = 0 ; i < ( * dst ) ->
numDimensions ; i ++ ) { ( * dst ) -> size [ i ] = ( * src ) -> size [ i ] ;
} mvpwqbdywu ( * dst , numElDst ) ; for ( i = 0 ; i < numElSrc ; i ++ ) { ( *
dst ) -> data [ i ] = ( * src ) -> data [ i ] ; } } static void a4ualc30lt (
p4uhdr1bdf * dst , const p4uhdr1bdf * src ) { oexfsnygak ( & dst -> f1 , &
src -> f1 ) ; } static void itr4brwi3e ( ouk2ljbqp0 * pEmxArray ) { pEmxArray
-> size = 0 ; } static void ghgyn21mve ( p4uhdr1bdf * data , const int32_T *
size , int32_T oldNumel ) { int32_T newNumel ; if ( oldNumel < 0 ) { oldNumel
= 0 ; } newNumel = * size ; if ( oldNumel > newNumel ) { aeek3b2gyt ( data ,
newNumel , oldNumel ) ; } else if ( oldNumel < newNumel ) { dlfxdg5ewt ( data
, oldNumel , newNumel ) ; } } static void gv0ngmbafo ( ouk2ljbqp0 * pEmxArray
) { int32_T i ; int32_T numEl ; numEl = 1 ; for ( i = 0 ; i < 1 ; i ++ ) {
numEl *= pEmxArray -> size ; } for ( i = 0 ; i < numEl ; i ++ ) { pmdz3cnfnl
( & pEmxArray -> data ) ; } } static void fdcubt5zkm ( eaumivaow2 * pEmxArray
) { int32_T i ; int32_T numEl ; numEl = 1 ; for ( i = 0 ; i < 2 ; i ++ ) {
numEl *= pEmxArray -> size [ i ] ; } for ( i = 0 ; i < numEl ; i ++ ) {
pmdz3cnfnl ( & pEmxArray -> data ) ; } } static void mr4onm3rlx ( pxjtq3ygk0g
* obj , const kw3w1cgktc * data ) { CoderChannel chImpl ; CoderOutputStream
streamImpl ; coderTimespec b_timespec ; coderTimespec b_timespec_p ;
eaumivaow2 b ; eaumivaow2 packets ; kw3w1cgktc * packet ; ouk2ljbqp0 c_p ;
p4l4flmn410 * obj_i ; p4l4flmn410 * obj_m ; p4l4flmn410 * obj_p ; p4uhdr1bdf
c ; pxjtq3ygk0g * obj_e ; real_T countWritten ; real_T et ; real_T
packetStartIndex ; real_T startTic_tv_nsec ; real_T startTic_tv_sec ; real_T
timeoutInSeconds ; int32_T c_e ; int32_T c_i ; int32_T countToWrite ; int32_T
loop_ub ; int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024
] ; char_T status_data [ 9 ] ; boolean_T done ; boolean_T hasSyncError ;
boolean_T timeout ; static const char_T tmp [ 9 ] = { 'c' , 'o' , 'm' , 'p' ,
'l' , 'e' , 't' , 'e' , 'd' } ; static const char_T tmp_p [ 7 ] = { 't' , 'i'
, 'm' , 'e' , 'o' , 'u' , 't' } ; int32_T status_size [ 2 ] ; boolean_T
exitg1 ; boolean_T exitg2 ; boolean_T guard1 ; obj -> BytesPerElement = 1.0 ;
obj_p = & obj -> OutputStream ; countWritten = 0.0 ; countToWrite = data ->
size [ 1 ] ; alqjz0a40s ( & c ) ; success = c . f1 -> size [ 0 ] * c . f1 ->
size [ 1 ] ; c . f1 -> size [ 0 ] = data -> size [ 0 ] ; c . f1 -> size [ 1 ]
= data -> size [ 1 ] ; mvpwqbdywu ( c . f1 , success ) ; loop_ub = data ->
size [ 0 ] * data -> size [ 1 ] ; for ( success = 0 ; success < loop_ub ;
success ++ ) { c . f1 -> data [ success ] = data -> data [ success ] ; }
pgc0j0gkjq ( & b ) ; success = b . size [ 0 ] * b . size [ 1 ] ; b . size [ 0
] = 1 ; b . size [ 1 ] = 1 ; i4ljfh5xim ( & b . data , b . size , success ) ;
a4ualc30lt ( & b . data , & c ) ; pmdz3cnfnl ( & c ) ; packetStartIndex = 1.0
; pgc0j0gkjq ( & packets ) ; je0z0vljge ( & packet , 2 ) ; itr4brwi3e ( & c_p
) ; exitg1 = false ; while ( ( ! exitg1 ) && ( countWritten < countToWrite )
) { obj_i = obj_p ; streamImpl = obj_i -> StreamImpl ; success =
coderStreamGetSpaceAvailable ( streamImpl , & et ) ; if ( success == 0 ) {
chImpl = coderStreamGetChannel ( streamImpl ) ; coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } guard1 = false ; if ( et == 0.0 ) { obj_i = obj_p ; timeoutInSeconds =
obj_i -> Timeout ; status_size [ 0 ] = 1 ; status_size [ 1 ] = 0 ; timeout =
false ; done = false ; obj_m = obj_i ; streamImpl = obj_m -> StreamImpl ;
success = coderStreamGetSpaceAvailable ( streamImpl , & et ) ; if ( success
== 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } hasSyncError = ( et > 0.0 ) ; efyy0zkhpka ( &
startTic_tv_sec , & startTic_tv_nsec ) ; while ( ( ! hasSyncError ) && ( !
done ) && ( ! timeout ) ) { et = ganiwbrrxsb ( startTic_tv_sec ,
startTic_tv_nsec ) ; if ( et < 1.0 ) { b_timespec_p . tv_sec = 0.0 ;
b_timespec_p . tv_nsec = 0.0 ; coderTimeSleep ( & b_timespec_p ) ; } else {
b_timespec . tv_sec = 0.0 ; b_timespec . tv_nsec = 5.0E+6 ; coderTimeSleep (
& b_timespec ) ; } et = ganiwbrrxsb ( startTic_tv_sec , startTic_tv_nsec ) ;
timeout = ( et > timeoutInSeconds ) ; obj_m = obj_i ; streamImpl = obj_m ->
StreamImpl ; success = coderStreamIsDeviceDone ( streamImpl , & done ) ; if (
success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( done ) { done = true ; } else { obj_m = obj_i ;
streamImpl = obj_m -> StreamImpl ; success = coderStreamIsOpen ( streamImpl ,
& done ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl
) ; coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( !
hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( ! done ) { done = true ; }
else { done = false ; } } obj_m = obj_i ; streamImpl = obj_m -> StreamImpl ;
success = coderStreamGetSpaceAvailable ( streamImpl , & et ) ; if ( success
== 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } hasSyncError = ( et > 0.0 ) ; } if ( hasSyncError ) {
status_size [ 0 ] = 1 ; status_size [ 1 ] = 9 ; for ( success = 0 ; success <
9 ; success ++ ) { status_data [ success ] = tmp [ success ] ; } } else if (
done ) { status_size [ 0 ] = 1 ; status_size [ 1 ] = 4 ; status_data [ 0 ] =
'd' ; status_data [ 1 ] = 'o' ; status_data [ 2 ] = 'n' ; status_data [ 3 ] =
'e' ; } else if ( timeout ) { status_size [ 0 ] = 1 ; status_size [ 1 ] = 7 ;
for ( success = 0 ; success < 7 ; success ++ ) { status_data [ success ] =
tmp_p [ success ] ; } } if ( ! gh3bt5xumf ( status_data , status_size ) ) {
exitg1 = true ; } else { guard1 = true ; } } else { guard1 = true ; } if (
guard1 ) { obj_i = obj_p ; success = packets . size [ 0 ] * packets . size [
1 ] ; packets . size [ 0 ] = 1 ; packets . size [ 1 ] = 1 ; i4ljfh5xim ( &
packets . data , packets . size , success ) ; a4ualc30lt ( & packets . data ,
& b . data ) ; et = 0.0 ; c_e = ( int32_T ) ( ( 1.0 - packetStartIndex ) +
1.0 ) - 1 ; c_i = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( c_i <= c_e )
) { success = c_p . size ; c_p . size = 1 ; ghgyn21mve ( & c_p . data , & c_p
. size , success ) ; a4ualc30lt ( & c_p . data , & packets . data ) ; success
= packet -> size [ 0 ] * packet -> size [ 1 ] ; packet -> size [ 0 ] = c_p .
data . f1 -> size [ 0 ] ; packet -> size [ 1 ] = c_p . data . f1 -> size [ 1
] ; mvpwqbdywu ( packet , success ) ; loop_ub = c_p . data . f1 -> size [ 0 ]
* c_p . data . f1 -> size [ 1 ] ; for ( success = 0 ; success < loop_ub ;
success ++ ) { packet -> data [ success ] = c_p . data . f1 -> data [ success
] ; } streamImpl = obj_i -> StreamImpl ; success =
coderOutputStreamWriteTypedDataOld ( streamImpl , & timeoutInSeconds , 1 ,
"uint8" , packet -> size [ 0 ] * packet -> size [ 1 ] , & packet -> data [ 0
] ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( timeoutInSeconds == 0.0 ) { exitg2 = true ; }
else { et += timeoutInSeconds ; packetStartIndex ++ ; c_i ++ ; } }
countWritten += et ; } } gv0ngmbafo ( & c_p ) ; no25st1du2 ( & packet ) ;
fdcubt5zkm ( & packets ) ; fdcubt5zkm ( & b ) ; obj_e = obj ; countWritten =
obj -> TotalElementsWritten + ( real_T ) data -> size [ 0 ] ; obj_e ->
TotalElementsWritten = countWritten ; } static void kqczxrtegy ( const
pxjtq3ygk0g * obj , real_T startIndex , real_T endIndex , kw3w1cgktc * result
) { int32_T e ; int32_T f ; int32_T i_p ; int32_T loop_ub ; int32_T loop_ub_p
; boolean_T i ; boolean_T j ; i = ( obj -> PartialPacket -> size [ 0 ] == 1 )
; j = ( obj -> PartialPacket -> size [ 1 ] == 1 ) ; if ( i || j ) { i = (
startIndex > endIndex ) ; if ( i ) { f = 0 ; e = 0 ; } else { f = ( int32_T )
startIndex - 1 ; e = ( int32_T ) endIndex ; } i_p = result -> size [ 0 ] *
result -> size [ 1 ] ; result -> size [ 0 ] = 1 ; result -> size [ 1 ] = e -
f ; mvpwqbdywu ( result , i_p ) ; loop_ub = e - f ; for ( e = 0 ; e < loop_ub
; e ++ ) { result -> data [ result -> size [ 0 ] * e ] = obj -> PartialPacket
-> data [ f + e ] ; } } else { i = ( startIndex > endIndex ) ; if ( i ) { f =
0 ; e = 0 ; } else { f = ( int32_T ) startIndex - 1 ; e = ( int32_T )
endIndex ; } i_p = result -> size [ 0 ] * result -> size [ 1 ] ; result ->
size [ 0 ] = obj -> PartialPacket -> size [ 0 ] ; result -> size [ 1 ] = e -
f ; mvpwqbdywu ( result , i_p ) ; loop_ub = e - f ; for ( e = 0 ; e < loop_ub
; e ++ ) { loop_ub_p = obj -> PartialPacket -> size [ 0 ] ; for ( i_p = 0 ;
i_p < loop_ub_p ; i_p ++ ) { result -> data [ i_p + result -> size [ 0 ] * e
] = obj -> PartialPacket -> data [ ( f + e ) * obj -> PartialPacket -> size [
0 ] + i_p ] ; } } } } static void dtmrrohdab ( p4uhdr1bdf pMatrix [ 2 ] ) {
int32_T i ; for ( i = 0 ; i < 2 ; i ++ ) { alqjz0a40s ( & pMatrix [ i ] ) ; }
} static void gdua24z132 ( p4uhdr1bdf pMatrix [ 2 ] ) { int32_T i ; for ( i =
0 ; i < 2 ; i ++ ) { pmdz3cnfnl ( & pMatrix [ i ] ) ; } } static void
dazixs0oih ( pxjtq3ygk0g * obj , real_T numBytesToRead , kw3w1cgktc * data )
{ CoderChannel chImpl ; CoderInputStream streamImpl ; aa5bqgvdkq * packets ;
fxbyyv51o23 * obj_e ; fxbyyv51o23 * obj_i ; kw3w1cgktc * excessData ;
kw3w1cgktc * reshapes_g ; kw3w1cgktc * reshapes_m ; kw3w1cgktc * varargin_2 ;
kw3w1cgktc * varargin_2_p ; p4uhdr1bdf reshapes [ 2 ] ; p4uhdr1bdf reshapes_p
[ 2 ] ; pxjtq3ygk0g * obj_m ; pxjtq3ygk0g * obj_p ; real_T count ; real_T
countToRead ; real_T ppc ; real_T pps ; real_T remainingCount ; int32_T
status_size [ 2 ] ; int32_T c_p ; int32_T err_size_idx_1 ; int32_T exitg1 ;
int32_T iy ; int32_T reshapes_e ; int32_T reshapes_i ; int32_T success ;
int32_T ysize_dim ; int32_T ysize_idx_0 ; char_T errorID [ 1024 ] ; char_T
errorText [ 1024 ] ; char_T status_data [ 9 ] ; boolean_T b ; boolean_T c ;
boolean_T guard1 ; boolean_T guard11 ; boolean_T hasSyncError ; if (
numBytesToRead == 0.0 ) { data -> size [ 0 ] = 0 ; data -> size [ 1 ] = 0 ; }
else { obj_p = obj ; ppc = obj_p -> PartialPacketCount ; if ( ppc > 0.0 ) {
pps = obj_p -> PartialPacketStart ; if ( numBytesToRead < ppc ) { kqczxrtegy
( obj_p , pps , ( pps + numBytesToRead ) - 1.0 , data ) ; remainingCount =
numBytesToRead ; obj_p -> PartialPacketStart = pps + numBytesToRead ; obj_p
-> PartialPacketCount = ppc - numBytesToRead ; } else { kqczxrtegy ( obj_p ,
pps , ( pps + ppc ) - 1.0 , data ) ; remainingCount = ppc ; obj_m = obj_p ;
obj_m -> PartialPacket -> size [ 0 ] = 1 ; obj_m -> PartialPacket -> size [ 1
] = 0 ; obj_m -> PartialPacket -> size [ 0 ] = 0 ; obj_m -> PartialPacket ->
size [ 1 ] = 0 ; obj_p -> PartialPacketStart = 0.0 ; obj_p ->
PartialPacketCount = 0.0 ; } } else { data -> size [ 0 ] = 0 ; data -> size [
1 ] = 0 ; remainingCount = 0.0 ; } remainingCount = numBytesToRead -
remainingCount ; if ( remainingCount > 0.0 ) { obj_e = & obj -> InputStream ;
streamImpl = obj_e -> StreamImpl ; success = coderStreamGetDataAvailable (
streamImpl , & ppc ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel (
streamImpl ) ; coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( !
hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = & obj -> InputStream ;
obj_i = obj_e ; streamImpl = obj_i -> StreamImpl ; success =
coderStreamGetDataAvailable ( streamImpl , & ppc ) ; if ( success == 0 ) {
chImpl = coderStreamGetChannel ( streamImpl ) ; coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } ppc += obj_e -> PartialPacketCount ; obj_e = & obj -> InputStream ; iy
= obj_e -> ExampleData -> size [ 0 ] * obj_e -> ExampleData -> size [ 1 ] ;
obj_e -> ExampleData -> size [ 0 ] = 1 ; obj_e -> ExampleData -> size [ 1 ] =
1 ; mvpwqbdywu ( obj_e -> ExampleData , iy ) ; obj_e -> ExampleData -> data [
0 ] = 0U ; err_size_idx_1 = 0 ; dtmrrohdab ( reshapes ) ; gch20cd4f4 ( obj_e
, ppc , reshapes [ 1 ] . f1 , & pps ) ; je0z0vljge ( & excessData , 2 ) ;
bb0uwefgr1 ( & packets , 2 ) ; je0z0vljge ( & varargin_2_p , 2 ) ; je0z0vljge
( & reshapes_m , 2 ) ; je0z0vljge ( & reshapes_g , 2 ) ; if ( pps == ppc ) {
reshapes_e = reshapes [ 1 ] . f1 -> size [ 1 ] ; iy = reshapes_g -> size [ 0
] * reshapes_g -> size [ 1 ] ; reshapes_g -> size [ 0 ] = reshapes [ 1 ] . f1
-> size [ 0 ] ; reshapes_g -> size [ 1 ] = reshapes [ 1 ] . f1 -> size [ 1 ]
; mvpwqbdywu ( reshapes_g , iy ) ; reshapes_i = reshapes [ 1 ] . f1 -> size [
0 ] * reshapes [ 1 ] . f1 -> size [ 1 ] - 1 ; for ( iy = 0 ; iy <= reshapes_i
; iy ++ ) { reshapes_g -> data [ iy ] = reshapes [ 1 ] . f1 -> data [ iy ] ;
} iksgdstzi2b ( reshapes_g , ( real_T ) reshapes_e , reshapes [ 1 ] . f1 ) ;
} else { guard1 = false ; do { exitg1 = 0 ; if ( pps < ppc ) { obj_i = obj_e
; streamImpl = obj_i -> StreamImpl ; success = coderStreamGetDataAvailable (
streamImpl , & count ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel
( streamImpl ) ; coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } guard11 = false ; if ( count == 0.0
) { mn2lcbi2uy ( obj_e , status_data , status_size ) ; if ( ! gh3bt5xumf (
status_data , status_size ) ) { err_size_idx_1 = status_size [ 1 ] ; if (
gh3bt5xumfy ( status_data , status_size ) ) { reshapes [ 1 ] . f1 -> size [ 0
] = 1 ; reshapes [ 1 ] . f1 -> size [ 1 ] = 0 ; } else { if ( gh3bt5xumfys (
status_data , status_size ) ) { err_size_idx_1 = 0 ; } guard1 = true ; }
exitg1 = 1 ; } else { guard11 = true ; } } else { guard11 = true ; } if (
guard11 ) { countToRead = ppc - pps ; afdhxmetmz ( obj_e , countToRead ,
packets , & count ) ; countToRead = packets -> size [ 1 ] ; c_p = ( int32_T )
countToRead - 1 ; for ( success = 0 ; success <= c_p ; success ++ ) {
countToRead = ( real_T ) success + 1.0 ; reshapes_e = reshapes [ 1 ] . f1 ->
size [ 0 ] ; iy = excessData -> size [ 0 ] * excessData -> size [ 1 ] ;
excessData -> size [ 0 ] = reshapes_e ; reshapes_i = reshapes [ 1 ] . f1 ->
size [ 1 ] ; excessData -> size [ 1 ] = reshapes_i ; mvpwqbdywu ( excessData
, iy ) ; reshapes_i *= reshapes_e ; for ( iy = 0 ; iy < reshapes_i ; iy ++ )
{ excessData -> data [ iy ] = reshapes [ 1 ] . f1 -> data [ iy ] ; } iy =
varargin_2_p -> size [ 0 ] * varargin_2_p -> size [ 1 ] ; varargin_2_p ->
size [ 0 ] = 1 ; varargin_2_p -> size [ 1 ] = packets -> data [ ( int32_T )
countToRead - 1 ] . f1 -> size [ 1 ] ; mvpwqbdywu ( varargin_2_p , iy ) ;
reshapes_i = packets -> data [ ( int32_T ) countToRead - 1 ] . f1 -> size [ 1
] ; for ( iy = 0 ; iy < reshapes_i ; iy ++ ) { varargin_2_p -> data [ iy ] =
packets -> data [ ( int32_T ) countToRead - 1 ] . f1 -> data [ iy ] ; }
ysize_dim = excessData -> size [ 1 ] ; ysize_dim += varargin_2_p -> size [ 1
] ; ysize_idx_0 = excessData -> size [ 0 ] ; reshapes_e = excessData -> size
[ 0 ] ; iy = reshapes [ 1 ] . f1 -> size [ 0 ] * reshapes [ 1 ] . f1 -> size
[ 1 ] ; reshapes [ 1 ] . f1 -> size [ 0 ] = reshapes_e ; reshapes_i =
excessData -> size [ 1 ] ; reshapes [ 1 ] . f1 -> size [ 1 ] = reshapes_i ;
mvpwqbdywu ( reshapes [ 1 ] . f1 , iy ) ; reshapes_i = excessData -> size [ 0
] * excessData -> size [ 1 ] ; for ( iy = 0 ; iy < reshapes_i ; iy ++ ) {
reshapes [ 1 ] . f1 -> data [ iy ] = excessData -> data [ iy ] ; } iy =
reshapes [ 1 ] . f1 -> size [ 0 ] * reshapes [ 1 ] . f1 -> size [ 1 ] ;
reshapes [ 1 ] . f1 -> size [ 0 ] = ysize_idx_0 ; reshapes [ 1 ] . f1 -> size
[ 1 ] = ysize_dim ; mvpwqbdywu ( reshapes [ 1 ] . f1 , iy ) ; iy = excessData
-> size [ 0 ] * excessData -> size [ 1 ] ; reshapes_i = varargin_2_p -> size
[ 1 ] - 1 ; for ( ysize_dim = 0 ; ysize_dim <= reshapes_i ; ysize_dim ++ ) {
reshapes [ 1 ] . f1 -> data [ iy + ysize_dim ] = varargin_2_p -> data [
ysize_dim ] ; } } pps += count ; guard1 = false ; } } else { guard1 = true ;
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; if ( guard1 ) { if ( pps > ppc ) {
iksgdstzi2 ( reshapes [ 1 ] . f1 , ppc + 1.0 , pps , excessData ) ; obj_i =
obj_e ; iy = obj_i -> PartialPacket -> size [ 0 ] * obj_i -> PartialPacket ->
size [ 1 ] ; obj_i -> PartialPacket -> size [ 0 ] = excessData -> size [ 0 ]
; obj_i -> PartialPacket -> size [ 1 ] = excessData -> size [ 1 ] ;
mvpwqbdywu ( obj_i -> PartialPacket , iy ) ; reshapes_i = excessData -> size
[ 0 ] * excessData -> size [ 1 ] ; for ( iy = 0 ; iy < reshapes_i ; iy ++ ) {
obj_i -> PartialPacket -> data [ iy ] = excessData -> data [ iy ] ; } obj_i
-> PartialPacketStart = 1.0 ; obj_i -> PartialPacketCount = excessData ->
size [ 1 ] ; iy = reshapes_m -> size [ 0 ] * reshapes_m -> size [ 1 ] ;
reshapes_m -> size [ 0 ] = reshapes [ 1 ] . f1 -> size [ 0 ] ; reshapes_m ->
size [ 1 ] = reshapes [ 1 ] . f1 -> size [ 1 ] ; mvpwqbdywu ( reshapes_m , iy
) ; reshapes_i = reshapes [ 1 ] . f1 -> size [ 0 ] * reshapes [ 1 ] . f1 ->
size [ 1 ] - 1 ; for ( iy = 0 ; iy <= reshapes_i ; iy ++ ) { reshapes_m ->
data [ iy ] = reshapes [ 1 ] . f1 -> data [ iy ] ; } iksgdstzi2b ( reshapes_m
, ppc , reshapes [ 1 ] . f1 ) ; } hasSyncError = ( err_size_idx_1 == 0 ) ; if
( ! hasSyncError ) { iy = obj_e -> PartialPacket -> size [ 0 ] * obj_e ->
PartialPacket -> size [ 1 ] ; obj_e -> PartialPacket -> size [ 0 ] = reshapes
[ 1 ] . f1 -> size [ 0 ] ; obj_e -> PartialPacket -> size [ 1 ] = reshapes [
1 ] . f1 -> size [ 1 ] ; mvpwqbdywu ( obj_e -> PartialPacket , iy ) ;
reshapes_i = reshapes [ 1 ] . f1 -> size [ 0 ] * reshapes [ 1 ] . f1 -> size
[ 1 ] ; for ( iy = 0 ; iy < reshapes_i ; iy ++ ) { obj_e -> PartialPacket ->
data [ iy ] = reshapes [ 1 ] . f1 -> data [ iy ] ; } obj_e ->
PartialPacketStart = 1.0 ; obj_e -> PartialPacketCount = reshapes [ 1 ] . f1
-> size [ 1 ] ; reshapes [ 1 ] . f1 -> size [ 0 ] = 1 ; reshapes [ 1 ] . f1
-> size [ 1 ] = 0 ; } } } no25st1du2 ( & reshapes_g ) ; no25st1du2 ( &
reshapes_m ) ; no25st1du2 ( & varargin_2_p ) ; asx315p0t4 ( & packets ) ;
je0z0vljge ( & varargin_2 , 2 ) ; if ( remainingCount < reshapes [ 1 ] . f1
-> size [ 1 ] ) { obj_p = obj ; obj_m = obj_p ; iy = obj_m -> PartialPacket
-> size [ 0 ] * obj_m -> PartialPacket -> size [ 1 ] ; obj_m -> PartialPacket
-> size [ 0 ] = 1 ; obj_m -> PartialPacket -> size [ 1 ] = 0 ; obj_m ->
PartialPacket -> size [ 0 ] = reshapes [ 1 ] . f1 -> size [ 0 ] ; obj_m ->
PartialPacket -> size [ 1 ] = reshapes [ 1 ] . f1 -> size [ 1 ] ; mvpwqbdywu
( obj_m -> PartialPacket , iy ) ; reshapes_i = reshapes [ 1 ] . f1 -> size [
0 ] * reshapes [ 1 ] . f1 -> size [ 1 ] ; for ( iy = 0 ; iy < reshapes_i ; iy
++ ) { obj_m -> PartialPacket -> data [ iy ] = reshapes [ 1 ] . f1 -> data [
iy ] ; } obj_p -> PartialPacketStart = 1.0 ; obj_p -> PartialPacketCount =
reshapes [ 1 ] . f1 -> size [ 1 ] ; obj_p = obj ; ppc = obj_p ->
PartialPacketCount ; dtmrrohdab ( reshapes_p ) ; if ( ppc > 0.0 ) { pps =
obj_p -> PartialPacketStart ; if ( remainingCount < ppc ) { kqczxrtegy (
obj_p , pps , ( pps + remainingCount ) - 1.0 , reshapes_p [ 1 ] . f1 ) ;
obj_p -> PartialPacketStart = pps + remainingCount ; obj_p ->
PartialPacketCount = ppc - remainingCount ; } else { kqczxrtegy ( obj_p , pps
, ( pps + ppc ) - 1.0 , reshapes_p [ 1 ] . f1 ) ; obj_m = obj_p ; obj_m ->
PartialPacket -> size [ 0 ] = 1 ; obj_m -> PartialPacket -> size [ 1 ] = 0 ;
obj_m -> PartialPacket -> size [ 0 ] = 0 ; obj_m -> PartialPacket -> size [ 1
] = 0 ; obj_p -> PartialPacketStart = 0.0 ; obj_p -> PartialPacketCount = 0.0
; } } else { reshapes_p [ 1 ] . f1 -> size [ 0 ] = 0 ; reshapes_p [ 1 ] . f1
-> size [ 1 ] = 0 ; } iy = excessData -> size [ 0 ] * excessData -> size [ 1
] ; excessData -> size [ 0 ] = data -> size [ 0 ] ; excessData -> size [ 1 ]
= data -> size [ 1 ] ; mvpwqbdywu ( excessData , iy ) ; b = ( excessData ->
size [ 0 ] == 0 ) ; c = ( excessData -> size [ 1 ] == 0 ) ; b = ( b || c ) ;
if ( ! b ) { success = data -> size [ 0 ] ; } else { iy = excessData -> size
[ 0 ] * excessData -> size [ 1 ] ; excessData -> size [ 0 ] = reshapes_p [ 1
] . f1 -> size [ 0 ] ; excessData -> size [ 1 ] = reshapes_p [ 1 ] . f1 ->
size [ 1 ] ; mvpwqbdywu ( excessData , iy ) ; b = ( excessData -> size [ 0 ]
== 0 ) ; c = ( excessData -> size [ 1 ] == 0 ) ; b = ( b || c ) ; if ( ! b )
{ success = reshapes_p [ 1 ] . f1 -> size [ 0 ] ; } else { iy = excessData ->
size [ 0 ] * excessData -> size [ 1 ] ; excessData -> size [ 0 ] = data ->
size [ 0 ] ; mvpwqbdywu ( excessData , iy ) ; iy = varargin_2 -> size [ 0 ] *
varargin_2 -> size [ 1 ] ; varargin_2 -> size [ 0 ] = reshapes_p [ 1 ] . f1
-> size [ 0 ] ; mvpwqbdywu ( varargin_2 , iy ) ; success = excessData -> size
[ 0 ] ; iy = varargin_2 -> size [ 0 ] ; success = muIntScalarMax_sint32 ( iy
, success ) ; } } ysize_idx_0 = success ; hasSyncError = ( success == 0 ) ;
if ( hasSyncError ) { success = data -> size [ 1 ] ; } else { iy = excessData
-> size [ 0 ] * excessData -> size [ 1 ] ; excessData -> size [ 0 ] = data ->
size [ 0 ] ; excessData -> size [ 1 ] = data -> size [ 1 ] ; mvpwqbdywu (
excessData , iy ) ; b = ( excessData -> size [ 0 ] == 0 ) ; c = ( excessData
-> size [ 1 ] == 0 ) ; b = ( b || c ) ; if ( ! b ) { success = data -> size [
1 ] ; } else { success = 0 ; } } iy = reshapes_p [ 0 ] . f1 -> size [ 0 ] *
reshapes_p [ 0 ] . f1 -> size [ 1 ] ; reshapes_p [ 0 ] . f1 -> size [ 0 ] =
ysize_idx_0 ; reshapes_p [ 0 ] . f1 -> size [ 1 ] = success ; mvpwqbdywu (
reshapes_p [ 0 ] . f1 , iy ) ; reshapes_i = ysize_idx_0 * success ; for ( iy
= 0 ; iy < reshapes_i ; iy ++ ) { reshapes_p [ 0 ] . f1 -> data [ iy ] = data
-> data [ iy ] ; } if ( hasSyncError ) { success = reshapes_p [ 1 ] . f1 ->
size [ 1 ] ; } else { iy = excessData -> size [ 0 ] * excessData -> size [ 1
] ; excessData -> size [ 0 ] = reshapes_p [ 1 ] . f1 -> size [ 0 ] ;
excessData -> size [ 1 ] = reshapes_p [ 1 ] . f1 -> size [ 1 ] ; mvpwqbdywu (
excessData , iy ) ; b = ( excessData -> size [ 0 ] == 0 ) ; c = ( excessData
-> size [ 1 ] == 0 ) ; b = ( b || c ) ; if ( ! b ) { success = reshapes_p [ 1
] . f1 -> size [ 1 ] ; } else { success = 0 ; } } ysize_dim = success ; iy =
reshapes_p [ 1 ] . f1 -> size [ 0 ] * reshapes_p [ 1 ] . f1 -> size [ 1 ] ;
reshapes_p [ 1 ] . f1 -> size [ 0 ] = ysize_idx_0 ; reshapes_p [ 1 ] . f1 ->
size [ 1 ] = ysize_dim ; mvpwqbdywu ( reshapes_p [ 1 ] . f1 , iy ) ; iy =
data -> size [ 0 ] * data -> size [ 1 ] ; data -> size [ 0 ] = reshapes_p [ 0
] . f1 -> size [ 0 ] ; data -> size [ 1 ] = reshapes_p [ 0 ] . f1 -> size [ 1
] + reshapes_p [ 1 ] . f1 -> size [ 1 ] ; mvpwqbdywu ( data , iy ) ;
reshapes_i = reshapes_p [ 0 ] . f1 -> size [ 0 ] * reshapes_p [ 0 ] . f1 ->
size [ 1 ] ; for ( iy = 0 ; iy < reshapes_i ; iy ++ ) { data -> data [ iy ] =
reshapes_p [ 0 ] . f1 -> data [ iy ] ; } reshapes_i = reshapes_p [ 1 ] . f1
-> size [ 0 ] * reshapes_p [ 1 ] . f1 -> size [ 1 ] ; for ( iy = 0 ; iy <
reshapes_i ; iy ++ ) { data -> data [ iy + reshapes_p [ 0 ] . f1 -> size [ 0
] * reshapes_p [ 0 ] . f1 -> size [ 1 ] ] = reshapes_p [ 1 ] . f1 -> data [
iy ] ; } gdua24z132 ( reshapes_p ) ; } else { iy = excessData -> size [ 0 ] *
excessData -> size [ 1 ] ; excessData -> size [ 0 ] = data -> size [ 0 ] ;
excessData -> size [ 1 ] = data -> size [ 1 ] ; mvpwqbdywu ( excessData , iy
) ; b = ( excessData -> size [ 0 ] == 0 ) ; c = ( excessData -> size [ 1 ] ==
0 ) ; b = ( b || c ) ; if ( ! b ) { success = data -> size [ 0 ] ; } else {
iy = excessData -> size [ 0 ] * excessData -> size [ 1 ] ; excessData -> size
[ 0 ] = reshapes [ 1 ] . f1 -> size [ 0 ] ; excessData -> size [ 1 ] =
reshapes [ 1 ] . f1 -> size [ 1 ] ; mvpwqbdywu ( excessData , iy ) ; b = (
excessData -> size [ 0 ] == 0 ) ; c = ( excessData -> size [ 1 ] == 0 ) ; b =
( b || c ) ; if ( ! b ) { success = reshapes [ 1 ] . f1 -> size [ 0 ] ; }
else { iy = excessData -> size [ 0 ] * excessData -> size [ 1 ] ; excessData
-> size [ 0 ] = data -> size [ 0 ] ; mvpwqbdywu ( excessData , iy ) ; iy =
varargin_2 -> size [ 0 ] * varargin_2 -> size [ 1 ] ; varargin_2 -> size [ 0
] = reshapes [ 1 ] . f1 -> size [ 0 ] ; mvpwqbdywu ( varargin_2 , iy ) ;
success = excessData -> size [ 0 ] ; iy = varargin_2 -> size [ 0 ] ; success
= muIntScalarMax_sint32 ( iy , success ) ; } } ysize_idx_0 = success ;
hasSyncError = ( success == 0 ) ; if ( hasSyncError ) { success = data ->
size [ 1 ] ; } else { iy = excessData -> size [ 0 ] * excessData -> size [ 1
] ; excessData -> size [ 0 ] = data -> size [ 0 ] ; excessData -> size [ 1 ]
= data -> size [ 1 ] ; mvpwqbdywu ( excessData , iy ) ; b = ( excessData ->
size [ 0 ] == 0 ) ; c = ( excessData -> size [ 1 ] == 0 ) ; b = ( b || c ) ;
if ( ! b ) { success = data -> size [ 1 ] ; } else { success = 0 ; } } iy =
reshapes [ 0 ] . f1 -> size [ 0 ] * reshapes [ 0 ] . f1 -> size [ 1 ] ;
reshapes [ 0 ] . f1 -> size [ 0 ] = ysize_idx_0 ; reshapes [ 0 ] . f1 -> size
[ 1 ] = success ; mvpwqbdywu ( reshapes [ 0 ] . f1 , iy ) ; reshapes_i =
ysize_idx_0 * success ; for ( iy = 0 ; iy < reshapes_i ; iy ++ ) { reshapes [
0 ] . f1 -> data [ iy ] = data -> data [ iy ] ; } if ( hasSyncError ) {
success = reshapes [ 1 ] . f1 -> size [ 1 ] ; } else { iy = excessData ->
size [ 0 ] * excessData -> size [ 1 ] ; excessData -> size [ 0 ] = reshapes [
1 ] . f1 -> size [ 0 ] ; excessData -> size [ 1 ] = reshapes [ 1 ] . f1 ->
size [ 1 ] ; mvpwqbdywu ( excessData , iy ) ; b = ( excessData -> size [ 0 ]
== 0 ) ; c = ( excessData -> size [ 1 ] == 0 ) ; b = ( b || c ) ; if ( ! b )
{ success = reshapes [ 1 ] . f1 -> size [ 1 ] ; } else { success = 0 ; } }
ysize_dim = success ; iy = reshapes [ 1 ] . f1 -> size [ 0 ] * reshapes [ 1 ]
. f1 -> size [ 1 ] ; reshapes [ 1 ] . f1 -> size [ 0 ] = ysize_idx_0 ;
reshapes [ 1 ] . f1 -> size [ 1 ] = ysize_dim ; mvpwqbdywu ( reshapes [ 1 ] .
f1 , iy ) ; iy = data -> size [ 0 ] * data -> size [ 1 ] ; data -> size [ 0 ]
= reshapes [ 0 ] . f1 -> size [ 0 ] ; data -> size [ 1 ] = reshapes [ 0 ] .
f1 -> size [ 1 ] + reshapes [ 1 ] . f1 -> size [ 1 ] ; mvpwqbdywu ( data , iy
) ; reshapes_i = reshapes [ 0 ] . f1 -> size [ 0 ] * reshapes [ 0 ] . f1 ->
size [ 1 ] ; for ( iy = 0 ; iy < reshapes_i ; iy ++ ) { data -> data [ iy ] =
reshapes [ 0 ] . f1 -> data [ iy ] ; } reshapes_i = reshapes [ 1 ] . f1 ->
size [ 0 ] * reshapes [ 1 ] . f1 -> size [ 1 ] ; for ( iy = 0 ; iy <
reshapes_i ; iy ++ ) { data -> data [ iy + reshapes [ 0 ] . f1 -> size [ 0 ]
* reshapes [ 0 ] . f1 -> size [ 1 ] ] = reshapes [ 1 ] . f1 -> data [ iy ] ;
} } no25st1du2 ( & excessData ) ; no25st1du2 ( & varargin_2 ) ; gdua24z132 (
reshapes ) ; } } } static void cwnteg5mpm ( gegd1nhtzev * obj , real_T
numToRead , kw3w1cgktc * data ) { gegd1nhtzev * obj_i ; gegd1nhtzev * obj_p ;
pxjtq3ygk0g * obj_e ; real_T b_value ; real_T varargin_2 ; obj_p = obj ;
b_value = dqiepqwwri ( & obj_p -> UnreadDataBuffer ) ; if ( numToRead >
b_value ) { obj_p = obj ; obj_i = obj_p ; b_value = dqiepqwwri ( & obj_i ->
UnreadDataBuffer ) ; if ( b_value != 0.0 ) { obj_e = & obj_p ->
UnreadDataBuffer ; b_value = dqiepqwwri ( obj_e ) ; if ( b_value == 0.0 ) {
data -> size [ 0 ] = 0 ; data -> size [ 1 ] = 0 ; } else { dazixs0oih ( obj_e
, b_value * obj_e -> BytesPerElement , data ) ; } } else { data -> size [ 0 ]
= 0 ; data -> size [ 1 ] = 0 ; } } else { obj_e = & obj -> UnreadDataBuffer ;
b_value = numToRead ; varargin_2 = dqiepqwwri ( obj_e ) ; b_value =
muDoubleScalarMin ( b_value , varargin_2 ) ; if ( b_value == 0.0 ) { data ->
size [ 0 ] = 0 ; data -> size [ 1 ] = 0 ; } else { dazixs0oih ( obj_e ,
b_value * obj_e -> BytesPerElement , data ) ; } } } static void lugd3mfxed (
mzwzywjj5z * * pEmxArray , int32_T numDimensions ) { mzwzywjj5z * emxArray ;
int32_T i ; * pEmxArray = ( mzwzywjj5z * ) malloc ( sizeof ( mzwzywjj5z ) ) ;
emxArray = * pEmxArray ; emxArray -> data = ( uint16_T * ) NULL ; emxArray ->
numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize
= 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++
) { emxArray -> size [ i ] = 0 ; } } static void fj1w0xx3g1 ( mzwzywjj5z *
emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData
; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i <
emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; }
if ( newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ;
if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i
= MAX_int32_T ; } else { i <<= 1 ; } } newData = malloc ( ( uint32_T ) i *
sizeof ( uint16_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( uint16_T ) * ( uint32_T ) oldNumel ) ; if (
emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data
= ( uint16_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void o4zpjin40n ( mzwzywjj5z * * pEmxArray )
{ if ( * pEmxArray != ( mzwzywjj5z * ) NULL ) { if ( ( ( * pEmxArray ) ->
data != ( uint16_T * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( (
* pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( mzwzywjj5z * ) NULL ; } } static void
epppntdrc4 ( dq2uwawv51 * obj ) { CoderChannel chImpl ; dq2uwawv51 * obj_p ;
int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ;
boolean_T hasSyncError ; boolean_T result ; obj_p = obj ; chImpl = obj_p ->
ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( result ) { chImpl = obj ->
ChannelImpl ; success = coderChannelClose ( chImpl ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } } static void epppntdrc4k ( pxjtq3ygk0 * obj ) {
CoderChannel chImpl ; CoderInputStream streamImpl_p ; CoderOutputStream
streamImpl ; fxbyyv51o2 * obj_e ; p4l4flmn41 * obj_i ; pxjtq3ygk0 * obj_p ;
int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ;
boolean_T hasSyncError ; boolean_T result ; obj_p = obj ; chImpl = obj_p ->
ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( result ) { chImpl = obj ->
ChannelImpl ; success = coderChannelClose ( chImpl ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } obj_p = obj ; obj_e = & obj_p -> InputStream ;
streamImpl_p = obj_e -> StreamImpl ; success = coderStreamFlush (
streamImpl_p ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel (
streamImpl_p ) ; coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_i = & obj_p -> OutputStream ;
streamImpl = obj_i -> StreamImpl ; success = coderStreamFlush ( streamImpl )
; if ( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } } static void nou1hpy5ds ( fxbyyv51o2 * pStruct ) {
no25st1du2 ( & pStruct -> ExampleData ) ; } static void k3tawmpebk (
pxjtq3ygk0 * pStruct ) { nou1hpy5ds ( & pStruct -> InputStream ) ; } static
void g2pnvvig0q ( gegd1nhtze * pStruct ) { k3tawmpebk ( & pStruct ->
UnreadDataBuffer ) ; pz01orbdte ( & pStruct -> ByteOrder ) ; } static void
k3tawmpebkq ( dq2uwawv51 * pStruct ) { nou1hpy5ds ( & pStruct -> InputStream
) ; } static void ilvxohevby ( ghe5ys4xtm * pStruct ) { pz01orbdte ( &
pStruct -> ByteOrder ) ; pz01orbdte ( & pStruct -> NativeDataType ) ;
pz01orbdte ( & pStruct -> DataFieldName ) ; pz01orbdte ( & pStruct ->
FlowControl ) ; pz01orbdte ( & pStruct -> Parity ) ; g2pnvvig0q ( & pStruct
-> _pobj0 ) ; k3tawmpebkq ( & pStruct -> _pobj1 ) ; } static void aitoice2hy
( av3iswzhoj * pStruct ) { ilvxohevby ( & pStruct -> SerialObj ) ; } static
void epppntdrc4kd ( dq2uwawv51k * obj ) { CoderChannel chImpl ; dq2uwawv51k *
obj_p ; int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ]
; boolean_T hasSyncError ; boolean_T result ; obj_p = obj ; chImpl = obj_p ->
ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( result ) { chImpl = obj ->
ChannelImpl ; success = coderChannelClose ( chImpl ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } } static void epppntdrc4kdc ( pxjtq3ygk0g * obj ) {
CoderChannel chImpl ; CoderInputStream streamImpl_p ; CoderOutputStream
streamImpl ; fxbyyv51o23 * obj_g ; fxbyyv51o23 * obj_i ; kw3w1cgktc *
exampleData ; kw3w1cgktc * partialPacketInitializer ; p4l4flmn410 * obj_m ;
pxjtq3ygk0g * obj_e ; pxjtq3ygk0g * obj_j ; pxjtq3ygk0g * obj_p ; int32_T
loop_ub ; int32_T success ; char_T errorID [ 1024 ] ; char_T errorText [ 1024
] ; boolean_T hasSyncError ; boolean_T result ; obj_p = obj ; chImpl = obj_p
-> ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( result ) { chImpl = obj ->
ChannelImpl ; success = coderChannelClose ( chImpl ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } obj_p = obj ; obj_e = obj_p ; obj_e ->
TotalElementsWritten = 0.0 ; obj_i = & obj_p -> InputStream ; obj_g = obj_i ;
je0z0vljge ( & exampleData , 2 ) ; loop_ub = exampleData -> size [ 0 ] *
exampleData -> size [ 1 ] ; exampleData -> size [ 0 ] = obj_g -> ExampleData
-> size [ 0 ] ; exampleData -> size [ 1 ] = obj_g -> ExampleData -> size [ 1
] ; mvpwqbdywu ( exampleData , loop_ub ) ; loop_ub = obj_g -> ExampleData ->
size [ 0 ] * obj_g -> ExampleData -> size [ 1 ] ; for ( success = 0 ; success
< loop_ub ; success ++ ) { exampleData -> data [ success ] = obj_g ->
ExampleData -> data [ success ] ; } success = exampleData -> size [ 0 ] ;
no25st1du2 ( & exampleData ) ; je0z0vljge ( & partialPacketInitializer , 2 )
; loop_ub = partialPacketInitializer -> size [ 0 ] * partialPacketInitializer
-> size [ 1 ] ; partialPacketInitializer -> size [ 0 ] = success ; mvpwqbdywu
( partialPacketInitializer , loop_ub ) ; obj_g -> PartialPacket -> size [ 0 ]
= partialPacketInitializer -> size [ 0 ] ; no25st1du2 ( &
partialPacketInitializer ) ; obj_g -> PartialPacket -> size [ 1 ] = 0 ; obj_g
-> PartialPacketStart = 0.0 ; obj_g -> PartialPacketCount = 0.0 ;
streamImpl_p = obj_i -> StreamImpl ; success = coderStreamFlush (
streamImpl_p ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel (
streamImpl_p ) ; coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } obj_e = obj_p ; obj_j = obj_e ;
obj_j -> PartialPacket -> size [ 0 ] = 1 ; obj_j -> PartialPacket -> size [ 1
] = 0 ; obj_j -> PartialPacket -> size [ 0 ] = 0 ; obj_j -> PartialPacket ->
size [ 1 ] = 0 ; obj_e -> PartialPacketStart = 0.0 ; obj_e ->
PartialPacketCount = 0.0 ; obj_m = & obj_p -> OutputStream ; streamImpl =
obj_m -> StreamImpl ; success = coderStreamFlush ( streamImpl ) ; if (
success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } } } static void nou1hpy5dsb ( fxbyyv51o23 * pStruct )
{ no25st1du2 ( & pStruct -> PartialPacket ) ; no25st1du2 ( & pStruct ->
ExampleData ) ; } static void k3tawmpebkqp ( pxjtq3ygk0g * pStruct ) {
nou1hpy5dsb ( & pStruct -> InputStream ) ; no25st1du2 ( & pStruct ->
PartialPacket ) ; } static void g2pnvvig0q5 ( gegd1nhtzev * pStruct ) {
k3tawmpebkqp ( & pStruct -> UnreadDataBuffer ) ; pz01orbdte ( & pStruct ->
ByteOrder ) ; pz01orbdte ( & pStruct -> NativeDataType ) ; pz01orbdte ( &
pStruct -> DataFieldName ) ; } static void k3tawmpebkqpz ( dq2uwawv51k *
pStruct ) { nou1hpy5dsb ( & pStruct -> InputStream ) ; } static void
ilvxohevbyz ( ghe5ys4xtmd * pStruct ) { pz01orbdte ( & pStruct -> ByteOrder )
; pz01orbdte ( & pStruct -> NativeDataType ) ; pz01orbdte ( & pStruct ->
DataFieldName ) ; pz01orbdte ( & pStruct -> FlowControl ) ; pz01orbdte ( &
pStruct -> Parity ) ; g2pnvvig0q5 ( & pStruct -> _pobj0 ) ; k3tawmpebkqpz ( &
pStruct -> _pobj1 ) ; } static void iog4ofefsq ( m31jye1cpy * pStruct ) {
ilvxohevbyz ( & pStruct -> SerialObj ) ; } void MdlStart ( void ) {
av3iswzhoj * b_obj ; m31jye1cpy * b_obj_p ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} pd2s2ubq3l ( & rtDW . nvvrcl2if1 ) ; rtDW . nvvrcl2if1 . SerialObj . _pobj1
. InputStream . matlabCodegenIsDeleted = true ; rtDW . nvvrcl2if1 . SerialObj
. _pobj0 . UnreadDataBuffer . InputStream . matlabCodegenIsDeleted = true ;
rtDW . nvvrcl2if1 . SerialObj . _pobj1 . OutputStream .
matlabCodegenIsDeleted = true ; rtDW . nvvrcl2if1 . SerialObj . _pobj0 .
UnreadDataBuffer . OutputStream . matlabCodegenIsDeleted = true ; rtDW .
nvvrcl2if1 . SerialObj . _pobj1 . matlabCodegenIsDeleted = true ; rtDW .
nvvrcl2if1 . SerialObj . _pobj0 . UnreadDataBuffer . matlabCodegenIsDeleted =
true ; rtDW . nvvrcl2if1 . SerialObj . _pobj0 . matlabCodegenIsDeleted = true
; rtDW . nvvrcl2if1 . SerialObj . matlabCodegenIsDeleted = true ; rtDW .
nvvrcl2if1 . matlabCodegenIsDeleted = true ; b_obj = & rtDW . nvvrcl2if1 ;
b_obj -> isInitialized = 0 ; b_obj -> matlabCodegenIsDeleted = false ; rtDW .
nxejyg0ndb = true ; i44lbymuat ( & rtDW . nvvrcl2if1 ) ; prmzlmusmb ( & rtDW
. kbufajfwfx ) ; rtDW . kbufajfwfx . SerialObj . _pobj1 . InputStream .
matlabCodegenIsDeleted = true ; rtDW . kbufajfwfx . SerialObj . _pobj0 .
UnreadDataBuffer . InputStream . matlabCodegenIsDeleted = true ; rtDW .
kbufajfwfx . SerialObj . _pobj1 . OutputStream . matlabCodegenIsDeleted =
true ; rtDW . kbufajfwfx . SerialObj . _pobj0 . UnreadDataBuffer .
OutputStream . matlabCodegenIsDeleted = true ; rtDW . kbufajfwfx . SerialObj
. _pobj1 . matlabCodegenIsDeleted = true ; rtDW . kbufajfwfx . SerialObj .
_pobj0 . UnreadDataBuffer . matlabCodegenIsDeleted = true ; rtDW . kbufajfwfx
. SerialObj . _pobj0 . matlabCodegenIsDeleted = true ; rtDW . kbufajfwfx .
SerialObj . matlabCodegenIsDeleted = true ; rtDW . kbufajfwfx .
matlabCodegenIsDeleted = true ; rtDW . fx21jakcao = 0U ; rtDW . ke3ruqp2or =
true ; b_obj_p = & rtDW . kbufajfwfx ; b_obj_p -> isInitialized = 0 ; b_obj_p
-> matlabCodegenIsDeleted = false ; rtDW . aqjgqjs1ou = true ; i44lbymuat1 (
& rtDW . kbufajfwfx ) ; } void MdlOutputs ( int_T tid ) { if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { MdlOutputsTID1 ( tid ) ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID1 ( int_T tid ) { CoderChannel chImpl ; CoderInputStream
streamImpl ; coderTimespec b_timespec ; coderTimespec b_timespec_p ;
cxyaenft1d dataAvailable ; cxyaenft1d * dataAvailable_p ; fxbyyv51o23 * obj_g
; fxbyyv51o23 * obj_j ; gegd1nhtzev * obj_f ; gegd1nhtzev * obj_m ;
gegd1nhtzev * varargin_1 ; ghe5ys4xtmd * obj_e ; ghe5ys4xtmd * obj_i ;
ghe5ys4xtmd * serialObject ; houwmjnjpi b_obj ; houwmjnjpi * b_this ;
kw3w1cgktc * b_data ; kw3w1cgktc * b_rawData ; kw3w1cgktc * data ; kw3w1cgktc
* data_p ; kw3w1cgktc * rawData ; kw3w1cgktc * tempDataArray ; kw3w1cgktc * x
; lytfstpiri * byteOrder ; lytfstpiri * out ; m31jye1cpy * obj ; m31jye1cpy *
obj_p ; mzwzywjj5z * outpVal ; real_T delayInt ; real_T numBytesToRead ;
real_T startTic_tv_nsec ; real_T startTic_tv_sec ; int32_T kstr ; int32_T
success ; uint16_T tmp ; char_T errorID [ 1024 ] ; char_T errorText [ 1024 ]
; char_T b [ 13 ] ; char_T b_status_data [ 9 ] ; char_T x_p ; char_T y ;
boolean_T hasEnoughData ; boolean_T hasSyncError ; static const char_T tmp_p
[ 128 ] = { '\x00' , '\x01' , '\x02' , '\x03' , '\x04' , '\x05' , '\x06' ,
'\a' , '\b' , '\t' , '\n' , '\v' , '\f' , '\r' , '\x0e' , '\x0f' , '\x10' ,
'\x11' , '\x12' , '\x13' , '\x14' , '\x15' , '\x16' , '\x17' , '\x18' ,
'\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' , '\x1e' , '\x1f' , ' ' , '!' ,
'\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')' , '*' , '+' , ',' , '-' , '.'
, '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , ':' , ';'
, '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h'
, 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u'
, 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' , ']' , '^' , '_' , '`' , 'a' ,
'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' ,
'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '{' ,
'|' , '}' , '~' , '\x7f' } ; int32_T b_status_size [ 2 ] ; int32_T exitg3 ;
const char_T * table ; boolean_T exitg1 ; boolean_T exitg2 ; obj = & rtDW .
kbufajfwfx ; obj_p = obj ; if ( obj_p -> TunablePropsChanged ) { obj_p ->
TunablePropsChanged = false ; } b_obj . matlabCodegenIsDeleted = true ;
b_this = & b_obj ; b_this -> matlabCodegenIsDeleted = false ; b_obj .
contents = obj ; dataAvailable . contents = true ; dataAvailable_p = &
dataAvailable ; b_this = & b_obj ; serialObject = & b_this -> contents ->
SerialObj ; je0z0vljge ( & data , 2 ) ; data -> size [ 0 ] = 0 ; data -> size
[ 1 ] = 0 ; efyy0zkhpk ( ) ; je0z0vljge ( & rawData , 2 ) ; je0z0vljge ( &
b_rawData , 2 ) ; je0z0vljge ( & data_p , 2 ) ; je0z0vljge ( & tempDataArray
, 2 ) ; je0z0vljge ( & x , 2 ) ; jjdsoglm4u ( & out , 2 ) ; jjdsoglm4u ( &
byteOrder , 2 ) ; exitg1 = false ; while ( ( ! exitg1 ) && ( ganiwbrrxs ( ) <
cysnr0poffu ( serialObject ) ) ) { obj_e = serialObject ; obj_i = obj_e ;
h5nfwugf2uw ( obj_i ) ; obj_m = obj_e -> TransportChannel ; numBytesToRead =
dqiepqwwri ( & obj_m -> UnreadDataBuffer ) ; obj_g = & obj_m ->
AsyncIOChannel -> InputStream ; obj_j = obj_g ; streamImpl = obj_j ->
StreamImpl ; success = coderStreamGetDataAvailable ( streamImpl , & delayInt
) ; if ( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } delayInt += obj_g -> PartialPacketCount ;
numBytesToRead += delayInt ; if ( numBytesToRead >= 2.0 ) { obj_e =
serialObject ; h5nfwugf2uw ( obj_e ) ; varargin_1 = serialObject ->
TransportChannel ; obj_m = varargin_1 ; rawData -> size [ 0 ] = 0 ; rawData
-> size [ 1 ] = 0 ; obj_f = obj_m ; numBytesToRead = dqiepqwwri ( & obj_f ->
UnreadDataBuffer ) ; if ( numBytesToRead >= 2.0 ) { cwnteg5mpm ( obj_m , 2.0
, rawData ) ; } else { obj_f = obj_m ; numBytesToRead = dqiepqwwri ( & obj_f
-> UnreadDataBuffer ) ; numBytesToRead = 2.0 - numBytesToRead ; hasEnoughData
= false ; efyy0zkhpka ( & startTic_tv_sec , & startTic_tv_nsec ) ; exitg2 =
false ; while ( ( ! exitg2 ) && ( ganiwbrrxsb ( startTic_tv_sec ,
startTic_tv_nsec ) < obj_m -> AsyncIOChannel -> InputStream . Timeout ) ) {
obj_g = & obj_m -> AsyncIOChannel -> InputStream ; obj_j = obj_g ; streamImpl
= obj_j -> StreamImpl ; success = coderStreamGetDataAvailable ( streamImpl ,
& delayInt ) ; if ( success == 0 ) { chImpl = coderStreamGetChannel (
streamImpl ) ; coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( !
hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } delayInt += obj_g ->
PartialPacketCount ; if ( delayInt >= numBytesToRead ) { hasEnoughData = true
; exitg2 = true ; } else { b_timespec_p . tv_sec = 0.0 ; b_timespec_p .
tv_nsec = 1.0E+7 ; coderTimeSleep ( & b_timespec_p ) ; } } if ( hasEnoughData
) { obj_g = & obj_m -> AsyncIOChannel -> InputStream ; obj_j = obj_g ;
streamImpl = obj_j -> StreamImpl ; success = coderStreamGetDataAvailable (
streamImpl , & delayInt ) ; if ( success == 0 ) { chImpl =
coderStreamGetChannel ( streamImpl ) ; coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } delayInt += obj_g ->
PartialPacketCount ; j25i2ywt1j ( & obj_m -> AsyncIOChannel -> InputStream ,
delayInt , rawData , & numBytesToRead , b_status_data , b_status_size ) ;
mr4onm3rlx ( & obj_m -> UnreadDataBuffer , rawData ) ; cwnteg5mpm ( obj_m ,
2.0 , rawData ) ; } else if ( obj_m -> AllowPartialReads ) { obj_g = & obj_m
-> AsyncIOChannel -> InputStream ; obj_j = obj_g ; streamImpl = obj_j ->
StreamImpl ; success = coderStreamGetDataAvailable ( streamImpl , & delayInt
) ; if ( success == 0 ) { chImpl = coderStreamGetChannel ( streamImpl ) ;
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } delayInt += obj_g -> PartialPacketCount ; if (
delayInt > 0.0 ) { obj_g = & obj_m -> AsyncIOChannel -> InputStream ; obj_j =
obj_g ; streamImpl = obj_j -> StreamImpl ; success =
coderStreamGetDataAvailable ( streamImpl , & delayInt ) ; if ( success == 0 )
{ chImpl = coderStreamGetChannel ( streamImpl ) ; coderChannelHasSyncError (
chImpl , & hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } else {
coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] )
; } } delayInt += obj_g -> PartialPacketCount ; j25i2ywt1j ( & obj_m ->
AsyncIOChannel -> InputStream , delayInt , b_rawData , & numBytesToRead ,
b_status_data , b_status_size ) ; mr4onm3rlx ( & obj_m -> UnreadDataBuffer ,
b_rawData ) ; } obj_f = obj_m ; numBytesToRead = dqiepqwwri ( & obj_f ->
UnreadDataBuffer ) ; if ( numBytesToRead > 0.0 ) { obj_f = obj_m ;
startTic_tv_sec = dqiepqwwri ( & obj_f -> UnreadDataBuffer ) ; numBytesToRead
= muDoubleScalarMin ( 2.0 , startTic_tv_sec ) ; cwnteg5mpm ( obj_m ,
numBytesToRead , rawData ) ; } } } hasSyncError = ( rawData -> size [ 0 ] ==
0 ) ; hasEnoughData = ( rawData -> size [ 1 ] == 0 ) ; if ( hasSyncError ||
hasEnoughData ) { data -> size [ 0 ] = 0 ; data -> size [ 1 ] = 0 ; } else {
kstr = x -> size [ 0 ] * x -> size [ 1 ] ; x -> size [ 0 ] = 1 ; x -> size [
1 ] = rawData -> size [ 1 ] ; mvpwqbdywu ( x , kstr ) ; success = rawData ->
size [ 1 ] ; for ( kstr = 0 ; kstr < success ; kstr ++ ) { x -> data [ kstr ]
= rawData -> data [ rawData -> size [ 0 ] * kstr ] ; } success = x -> size [
1 ] ; kstr = tempDataArray -> size [ 0 ] * tempDataArray -> size [ 1 ] ;
tempDataArray -> size [ 0 ] = 1 ; tempDataArray -> size [ 1 ] = success ;
mvpwqbdywu ( tempDataArray , kstr ) ; memcpy ( ( void * ) & tempDataArray ->
data [ 0 ] , ( void * ) & x -> data [ 0 ] , ( uint32_T ) ( ( size_t ) success
* sizeof ( uint8_T ) ) ) ; obj_m = varargin_1 ; kstr = out -> size [ 0 ] *
out -> size [ 1 ] ; out -> size [ 0 ] = 1 ; out -> size [ 1 ] = obj_m ->
ByteOrder -> size [ 1 ] ; kpntjfigjo ( out , kstr ) ; success = obj_m ->
ByteOrder -> size [ 1 ] ; for ( kstr = 0 ; kstr < success ; kstr ++ ) { out
-> data [ kstr ] = obj_m -> ByteOrder -> data [ kstr ] ; } kstr = byteOrder
-> size [ 0 ] * byteOrder -> size [ 1 ] ; byteOrder -> size [ 0 ] = 1 ;
byteOrder -> size [ 1 ] = out -> size [ 1 ] ; kpntjfigjo ( byteOrder , kstr )
; success = out -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( &
byteOrder -> data [ 0 ] , & out -> data [ 0 ] , ( uint32_T ) success * sizeof
( char_T ) ) ; } kstr = out -> size [ 0 ] * out -> size [ 1 ] ; out -> size [
0 ] = 1 ; out -> size [ 1 ] = byteOrder -> size [ 1 ] ; kpntjfigjo ( out ,
kstr ) ; success = byteOrder -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy
( & out -> data [ 0 ] , & byteOrder -> data [ 0 ] , ( uint32_T ) success *
sizeof ( char_T ) ) ; } for ( kstr = 0 ; kstr < 13 ; kstr ++ ) { b [ kstr ] =
varargin_1 -> MachineByteOrder [ kstr ] ; } kstr = byteOrder -> size [ 0 ] *
byteOrder -> size [ 1 ] ; byteOrder -> size [ 0 ] = 1 ; byteOrder -> size [ 1
] = out -> size [ 1 ] ; kpntjfigjo ( byteOrder , kstr ) ; success = out ->
size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( & byteOrder -> data [ 0 ] , &
out -> data [ 0 ] , ( uint32_T ) success * sizeof ( char_T ) ) ; } kstr = out
-> size [ 0 ] * out -> size [ 1 ] ; out -> size [ 0 ] = 1 ; out -> size [ 1 ]
= byteOrder -> size [ 1 ] ; kpntjfigjo ( out , kstr ) ; success = byteOrder
-> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( & out -> data [ 0 ] , &
byteOrder -> data [ 0 ] , ( uint32_T ) success * sizeof ( char_T ) ) ; } kstr
= byteOrder -> size [ 0 ] * byteOrder -> size [ 1 ] ; byteOrder -> size [ 1 ]
= out -> size [ 1 ] ; kpntjfigjo ( byteOrder , kstr ) ; success = byteOrder
-> size [ 1 ] ; if ( success != 13 ) { } else { success = 1 ; do { exitg3 = 0
; if ( success - 1 < 13 ) { kstr = success - 1 ; x_p = out -> data [ kstr ] ;
table = & tmp_p [ 0 ] ; y = table [ ( uint8_T ) x_p & 127 ] ; x_p = b [ kstr
] ; table = & tmp_p [ 0 ] ; x_p = table [ ( uint8_T ) x_p & 127 ] ; if ( y !=
x_p ) { exitg3 = 1 ; } else { success ++ ; } } else { hasSyncError = true ;
exitg3 = 1 ; } } while ( exitg3 == 0 ) ; } hasSyncError = ! hasSyncError ; if
( hasSyncError ) { kstr = x -> size [ 0 ] * x -> size [ 1 ] ; x -> size [ 0 ]
= 1 ; x -> size [ 1 ] = tempDataArray -> size [ 1 ] ; mvpwqbdywu ( x , kstr )
; success = tempDataArray -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy (
& x -> data [ 0 ] , & tempDataArray -> data [ 0 ] , ( uint32_T ) success *
sizeof ( uint8_T ) ) ; } kstr = data_p -> size [ 0 ] * data_p -> size [ 1 ] ;
data_p -> size [ 0 ] = 1 ; data_p -> size [ 1 ] = x -> size [ 1 ] ;
mvpwqbdywu ( data_p , kstr ) ; success = x -> size [ 1 ] ; if ( success - 1
>= 0 ) { memcpy ( & data_p -> data [ 0 ] , & x -> data [ 0 ] , ( uint32_T )
success * sizeof ( uint8_T ) ) ; } } else { kstr = data_p -> size [ 0 ] *
data_p -> size [ 1 ] ; data_p -> size [ 0 ] = 1 ; data_p -> size [ 1 ] =
tempDataArray -> size [ 1 ] ; mvpwqbdywu ( data_p , kstr ) ; success =
tempDataArray -> size [ 1 ] ; if ( success - 1 >= 0 ) { memcpy ( & data_p ->
data [ 0 ] , & tempDataArray -> data [ 0 ] , ( uint32_T ) success * sizeof (
uint8_T ) ) ; } } kstr = data -> size [ 0 ] * data -> size [ 1 ] ; data ->
size [ 0 ] = 1 ; data -> size [ 1 ] = data_p -> size [ 1 ] ; mvpwqbdywu (
data , kstr ) ; success = data_p -> size [ 1 ] ; if ( success - 1 >= 0 ) {
memcpy ( & data -> data [ 0 ] , & data_p -> data [ 0 ] , ( uint32_T ) success
* sizeof ( uint8_T ) ) ; } } exitg1 = true ; } else { b_timespec . tv_sec =
0.0 ; b_timespec . tv_nsec = 1.0E+7 ; coderTimeSleep ( & b_timespec ) ; } }
pz01orbdte ( & byteOrder ) ; pz01orbdte ( & out ) ; no25st1du2 ( & x ) ;
no25st1du2 ( & tempDataArray ) ; no25st1du2 ( & data_p ) ; no25st1du2 ( &
b_rawData ) ; no25st1du2 ( & rawData ) ; hasSyncError = ( data -> size [ 0 ]
== 0 ) ; hasEnoughData = ( data -> size [ 1 ] == 0 ) ; if ( hasSyncError ||
hasEnoughData ) { dataAvailable_p -> contents = false ; tmp = b_this ->
contents -> SaveOutput ; } else { numBytesToRead = data -> size [ 0 ] * data
-> size [ 1 ] ; je0z0vljge ( & b_data , 1 ) ; kstr = b_data -> size [ 0 ] ;
b_data -> size [ 0 ] = ( int32_T ) numBytesToRead ; mvpwqbdywu ( b_data ,
kstr ) ; success = ( int32_T ) numBytesToRead ; if ( success - 1 >= 0 ) {
memcpy ( & b_data -> data [ 0 ] , & data -> data [ 0 ] , ( uint32_T ) success
* sizeof ( uint8_T ) ) ; } success = b_data -> size [ 0 ] ; if ( success != 0
) { success >>= 1 ; } lugd3mfxed ( & outpVal , 1 ) ; kstr = outpVal -> size [
0 ] ; outpVal -> size [ 0 ] = success ; fj1w0xx3g1 ( outpVal , kstr ) ;
memcpy ( ( void * ) & outpVal -> data [ 0 ] , ( void * ) & b_data -> data [ 0
] , ( uint32_T ) ( ( size_t ) success * sizeof ( uint16_T ) ) ) ; no25st1du2
( & b_data ) ; tmp = outpVal -> data [ 0 ] ; o4zpjin40n ( & outpVal ) ; }
no25st1du2 ( & data ) ; if ( dataAvailable . contents ) { b_obj . contents ->
SaveOutput = tmp ; } b_this = & b_obj ; if ( ! b_this ->
matlabCodegenIsDeleted ) { b_this -> matlabCodegenIsDeleted = true ; } rtB .
mvkxsctj2w = tmp ; rtB . ndxstghovv = ( uint32_T ) rtP . Gain_Gain * rtB .
mvkxsctj2w ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { CoderChannel chImpl
; av3iswzhoj * obj ; dq2uwawv51 * obj_c ; dq2uwawv51 * obj_i ; dq2uwawv51k *
obj_d ; dq2uwawv51k * obj_f2 ; fxbyyv51o2 * obj_g ; fxbyyv51o23 * obj_dz ;
gegd1nhtze * obj_p ; gegd1nhtzev * obj_n ; ghe5ys4xtm * obj_k ; ghe5ys4xtmd *
obj_kt ; m31jye1cpy * obj_b ; p4l4flmn41 * obj_m ; p4l4flmn410 * obj_o ;
pxjtq3ygk0 * obj_e ; pxjtq3ygk0 * obj_f ; pxjtq3ygk0 * obj_j ; pxjtq3ygk0g *
obj_ck ; pxjtq3ygk0g * obj_fs ; pxjtq3ygk0g * obj_l ; int32_T success ;
char_T errorID [ 1024 ] ; char_T errorText [ 1024 ] ; boolean_T hasSyncError
; boolean_T result ; obj = & rtDW . nvvrcl2if1 ; if ( ! obj ->
matlabCodegenIsDeleted ) { obj -> matlabCodegenIsDeleted = true ; if ( ( obj
-> isInitialized == 1 ) && obj -> isSetupComplete ) { obj_k = & obj ->
SerialObj ; epppntdrc4 ( obj_k -> AsyncIOChannel ) ; } } obj_k = & rtDW .
nvvrcl2if1 . SerialObj ; if ( ! obj_k -> matlabCodegenIsDeleted ) { obj_k ->
matlabCodegenIsDeleted = true ; epppntdrc4 ( obj_k -> AsyncIOChannel ) ; }
obj_p = & rtDW . nvvrcl2if1 . SerialObj . _pobj0 ; if ( ! obj_p ->
matlabCodegenIsDeleted ) { obj_p -> matlabCodegenIsDeleted = true ;
epppntdrc4k ( & obj_p -> UnreadDataBuffer ) ; } obj_e = & rtDW . nvvrcl2if1 .
SerialObj . _pobj0 . UnreadDataBuffer ; if ( ! obj_e ->
matlabCodegenIsDeleted ) { obj_e -> matlabCodegenIsDeleted = true ; obj_j =
obj_e ; obj_f = obj_j ; chImpl = obj_f -> ChannelImpl ; success =
coderChannelIsOpen ( chImpl , & result ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( result ) { epppntdrc4k ( obj_j ) ; } if ( ! (
obj_e -> ChannelImpl == 0 ) ) { obj_j = obj_e ; chImpl = obj_j -> ChannelImpl
; success = coderChannelIsOpen ( chImpl , & result ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( result ) { epppntdrc4k ( obj_e ) ; } chImpl =
obj_e -> ChannelImpl ; success = coderChannelTerm ( chImpl ) ; if ( success
== 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( !
hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } chImpl = obj_e -> ChannelImpl ;
coderChannelDestroy ( chImpl ) ; obj_e -> ChannelImpl = 0 ; } } obj_i = &
rtDW . nvvrcl2if1 . SerialObj . _pobj1 ; if ( ! obj_i ->
matlabCodegenIsDeleted ) { obj_i -> matlabCodegenIsDeleted = true ; if ( ! (
obj_i -> ChannelImpl == 0 ) ) { obj_c = obj_i ; chImpl = obj_c -> ChannelImpl
; success = coderChannelIsOpen ( chImpl , & result ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( result ) { epppntdrc4 ( obj_i ) ; } chImpl =
obj_i -> ChannelImpl ; success = coderChannelTerm ( chImpl ) ; if ( success
== 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( !
hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } chImpl = obj_i -> ChannelImpl ;
coderChannelDestroy ( chImpl ) ; obj_i -> ChannelImpl = 0 ; } } obj_m = &
rtDW . nvvrcl2if1 . SerialObj . _pobj0 . UnreadDataBuffer . OutputStream ; if
( ! obj_m -> matlabCodegenIsDeleted ) { obj_m -> matlabCodegenIsDeleted =
true ; } obj_m = & rtDW . nvvrcl2if1 . SerialObj . _pobj1 . OutputStream ; if
( ! obj_m -> matlabCodegenIsDeleted ) { obj_m -> matlabCodegenIsDeleted =
true ; } obj_g = & rtDW . nvvrcl2if1 . SerialObj . _pobj0 . UnreadDataBuffer
. InputStream ; if ( ! obj_g -> matlabCodegenIsDeleted ) { obj_g ->
matlabCodegenIsDeleted = true ; } obj_g = & rtDW . nvvrcl2if1 . SerialObj .
_pobj1 . InputStream ; if ( ! obj_g -> matlabCodegenIsDeleted ) { obj_g ->
matlabCodegenIsDeleted = true ; } aitoice2hy ( & rtDW . nvvrcl2if1 ) ; obj_b
= & rtDW . kbufajfwfx ; if ( ! obj_b -> matlabCodegenIsDeleted ) { obj_b ->
matlabCodegenIsDeleted = true ; if ( ( obj_b -> isInitialized == 1 ) && obj_b
-> isSetupComplete ) { obj_kt = & obj_b -> SerialObj ; epppntdrc4kd ( obj_kt
-> AsyncIOChannel ) ; } } obj_kt = & rtDW . kbufajfwfx . SerialObj ; if ( !
obj_kt -> matlabCodegenIsDeleted ) { obj_kt -> matlabCodegenIsDeleted = true
; epppntdrc4kd ( obj_kt -> AsyncIOChannel ) ; } obj_n = & rtDW . kbufajfwfx .
SerialObj . _pobj0 ; if ( ! obj_n -> matlabCodegenIsDeleted ) { obj_n ->
matlabCodegenIsDeleted = true ; epppntdrc4kdc ( & obj_n -> UnreadDataBuffer )
; } obj_l = & rtDW . kbufajfwfx . SerialObj . _pobj0 . UnreadDataBuffer ; if
( ! obj_l -> matlabCodegenIsDeleted ) { obj_l -> matlabCodegenIsDeleted =
true ; obj_fs = obj_l ; obj_ck = obj_fs ; chImpl = obj_ck -> ChannelImpl ;
success = coderChannelIsOpen ( chImpl , & result ) ; if ( success == 0 ) {
coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if ( ! hasSyncError )
{ coderChannelGetLastError ( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ;
} else { coderChannelGetLastSyncError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } } if ( result ) { epppntdrc4kdc ( obj_fs ) ; } if ( ! (
obj_l -> ChannelImpl == 0 ) ) { obj_fs = obj_l ; chImpl = obj_fs ->
ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( result ) { epppntdrc4kdc (
obj_l ) ; } chImpl = obj_l -> ChannelImpl ; success = coderChannelTerm (
chImpl ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } chImpl = obj_l ->
ChannelImpl ; coderChannelDestroy ( chImpl ) ; obj_l -> ChannelImpl = 0 ; } }
obj_d = & rtDW . kbufajfwfx . SerialObj . _pobj1 ; if ( ! obj_d ->
matlabCodegenIsDeleted ) { obj_d -> matlabCodegenIsDeleted = true ; if ( ! (
obj_d -> ChannelImpl == 0 ) ) { obj_f2 = obj_d ; chImpl = obj_f2 ->
ChannelImpl ; success = coderChannelIsOpen ( chImpl , & result ) ; if (
success == 0 ) { coderChannelHasSyncError ( chImpl , & hasSyncError ) ; if (
! hasSyncError ) { coderChannelGetLastError ( chImpl , & errorID [ 0 ] , &
errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError ( chImpl , &
errorID [ 0 ] , & errorText [ 0 ] ) ; } } if ( result ) { epppntdrc4kd (
obj_d ) ; } chImpl = obj_d -> ChannelImpl ; success = coderChannelTerm (
chImpl ) ; if ( success == 0 ) { coderChannelHasSyncError ( chImpl , &
hasSyncError ) ; if ( ! hasSyncError ) { coderChannelGetLastError ( chImpl ,
& errorID [ 0 ] , & errorText [ 0 ] ) ; } else { coderChannelGetLastSyncError
( chImpl , & errorID [ 0 ] , & errorText [ 0 ] ) ; } } chImpl = obj_d ->
ChannelImpl ; coderChannelDestroy ( chImpl ) ; obj_d -> ChannelImpl = 0 ; } }
obj_o = & rtDW . kbufajfwfx . SerialObj . _pobj0 . UnreadDataBuffer .
OutputStream ; if ( ! obj_o -> matlabCodegenIsDeleted ) { obj_o ->
matlabCodegenIsDeleted = true ; } obj_o = & rtDW . kbufajfwfx . SerialObj .
_pobj1 . OutputStream ; if ( ! obj_o -> matlabCodegenIsDeleted ) { obj_o ->
matlabCodegenIsDeleted = true ; } obj_dz = & rtDW . kbufajfwfx . SerialObj .
_pobj0 . UnreadDataBuffer . InputStream ; if ( ! obj_dz ->
matlabCodegenIsDeleted ) { obj_dz -> matlabCodegenIsDeleted = true ; } obj_dz
= & rtDW . kbufajfwfx . SerialObj . _pobj1 . InputStream ; if ( ! obj_dz ->
matlabCodegenIsDeleted ) { obj_dz -> matlabCodegenIsDeleted = true ; }
iog4ofefsq ( & rtDW . kbufajfwfx ) ; } static void mr_lab4_cacheDataAsMxArray
( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_lab4_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_lab4_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_lab4_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_lab4_cacheBitFieldToMxArray ( mxArray
* destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_lab4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_lab4_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_lab4_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_lab4_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_lab4_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_lab4_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_lab4_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_lab4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_lab4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal )
) ; } static uint_T mr_lab4_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_lab4_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_lab4_GetDWork ( ) { static const char_T * ssDWFieldNames [
3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_lab4_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 10 ] = {
"rtDW.kbufajfwfx" , "rtDW.nvvrcl2if1" , "rtDW.ld020lqr2s" , "rtDW.pj1ri2ahjl"
, "rtDW.fx21jakcao" , "rtDW.aqjgqjs1ou" , "rtDW.dycqrqqmxg" ,
"rtDW.ke3ruqp2or" , "rtDW.pkbyylsioi" , "rtDW.nxejyg0ndb" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 10 , rtdwDataFieldNames ) ;
mr_lab4_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW .
kbufajfwfx ) , sizeof ( rtDW . kbufajfwfx ) ) ; mr_lab4_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . nvvrcl2if1 ) , sizeof ( rtDW .
nvvrcl2if1 ) ) ; mr_lab4_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void
* ) & ( rtDW . ld020lqr2s ) , sizeof ( rtDW . ld020lqr2s ) ) ;
mr_lab4_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW .
pj1ri2ahjl ) , sizeof ( rtDW . pj1ri2ahjl ) ) ; mr_lab4_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . fx21jakcao ) , sizeof ( rtDW .
fx21jakcao ) ) ; mr_lab4_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void
* ) & ( rtDW . aqjgqjs1ou ) , sizeof ( rtDW . aqjgqjs1ou ) ) ;
mr_lab4_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW .
dycqrqqmxg ) , sizeof ( rtDW . dycqrqqmxg ) ) ; mr_lab4_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . ke3ruqp2or ) , sizeof ( rtDW .
ke3ruqp2or ) ) ; mr_lab4_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void
* ) & ( rtDW . pkbyylsioi ) , sizeof ( rtDW . pkbyylsioi ) ) ;
mr_lab4_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW .
nxejyg0ndb ) , sizeof ( rtDW . nxejyg0ndb ) ) ; mxSetFieldByNumber ( ssDW , 0
, 1 , rtdwData ) ; } return ssDW ; } void mr_lab4_SetDWork ( const mxArray *
ssDW ) { ( void ) ssDW ; mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtB
) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_lab4_restoreDataFromMxArray ( ( void
* ) & ( rtDW . kbufajfwfx ) , rtdwData , 0 , 0 , sizeof ( rtDW . kbufajfwfx )
) ; mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . nvvrcl2if1 ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . nvvrcl2if1 ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . ld020lqr2s ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . ld020lqr2s ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . pj1ri2ahjl ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . pj1ri2ahjl ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . fx21jakcao ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . fx21jakcao ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . aqjgqjs1ou ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . aqjgqjs1ou ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . dycqrqqmxg ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . dycqrqqmxg ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . ke3ruqp2or ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . ke3ruqp2or ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . pkbyylsioi ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . pkbyylsioi ) ) ;
mr_lab4_restoreDataFromMxArray ( ( void * ) & ( rtDW . nxejyg0ndb ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . nxejyg0ndb ) ) ; } } mxArray *
mr_lab4_GetSimStateDisallowedBlocks ( ) { mxArray * data = mxCreateCellMatrix
( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const char_T * blockType [
3 ] = { "Scope" , "MATLABSystem" , "MATLABSystem" , } ; static const char_T *
blockPath [ 3 ] = { "lab4/Time Scope" , "lab4/Serial Configuration" ,
"lab4/Serial Receive" , } ; static const int reason [ 3 ] = { 0 , 6 , 6 , } ;
for ( subs [ 0 ] = 0 ; subs [ 0 ] < 3 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0
; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 6 ) ;
ssSetNumBlockIO ( rtS , 2 ) ; ssSetNumBlockParams ( rtS , 1 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0001 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2762641875U ) ; ssSetChecksumVal ( rtS , 1 ,
2622381189U ) ; ssSetChecksumVal ( rtS , 2 , 860872257U ) ; ssSetChecksumVal
( rtS , 3 , 3961715350U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; } } mdlSampleHits [ 0 ] = 1 ; ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; } {
static int_T mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; ( void
) memset ( ( void * ) & mdlPerTaskSampleHits [ 0 ] , 0 , 2 * 2 * sizeof (
int_T ) ) ; ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] )
; } ssSetSolverMode ( rtS , SOLVER_MODE_MULTITASKING ) ; { ssSetBlockIO ( rtS
, ( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 ,
sizeof ( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS
, dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 28 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } lab4_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"lab4" ) ; ssSetPath ( rtS , "lab4" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , rtInf ) ; ssSetStepSize ( rtS , 0.0001 ) ;
ssSetFixedStepSize ( rtS , 0.0001 ) ; { static RTWLogInfo rt_DataLoggingInfo
; rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ;
rtliSetLogX ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo
( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ;
rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation (
ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" )
; rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetNumNonContDerivSigInfos ( rtS , 0 ) ;
ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
2762641875U ) ; ssSetChecksumVal ( rtS , 1 , 2622381189U ) ; ssSetChecksumVal
( rtS , 2 , 860872257U ) ; ssSetChecksumVal ( rtS , 3 , 3961715350U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 3 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_lab4_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_lab4_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_lab4_SetDWork )
; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS )
) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { UNUSED_PARAMETER ( tid ) ;
}
