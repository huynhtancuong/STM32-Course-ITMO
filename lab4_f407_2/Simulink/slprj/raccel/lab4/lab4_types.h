#ifndef RTW_HEADER_lab4_types_h_
#define RTW_HEADER_lab4_types_h_
#include "rtwtypes.h"
#include "asynciocoder_api.hpp"
#ifndef struct_tag_s43XKLGK5AGjzcvq3BstyyF
#define struct_tag_s43XKLGK5AGjzcvq3BstyyF
struct tag_s43XKLGK5AGjzcvq3BstyyF { boolean_T CTS ; boolean_T DSR ;
boolean_T CD ; boolean_T RING ; boolean_T InitAccess ; real_T SharedTimeout ;
uint64_T LatestNumBytesWrittenToDevice ; } ;
#endif
#ifndef typedef_j133oyq043
#define typedef_j133oyq043
typedef struct tag_s43XKLGK5AGjzcvq3BstyyF j133oyq043 ;
#endif
#include "asynciocoder_api.hpp"
#include "asynciocoder_api.hpp"
#include "asynciocoder_api.hpp"
#ifndef struct_tag_3L4TIW7t3lcOvasXsqWatD
#define struct_tag_3L4TIW7t3lcOvasXsqWatD
struct tag_3L4TIW7t3lcOvasXsqWatD { boolean_T matlabCodegenIsDeleted ;
CoderOutputStream StreamImpl ; } ;
#endif
#ifndef typedef_p4l4flmn41
#define typedef_p4l4flmn41
typedef struct tag_3L4TIW7t3lcOvasXsqWatD p4l4flmn41 ;
#endif
#include "coder_posix_time.h"
#ifndef struct_tag_sdAmwXbnJnEmimT0NaJRtAD
#define struct_tag_sdAmwXbnJnEmimT0NaJRtAD
struct tag_sdAmwXbnJnEmimT0NaJRtAD { real_T tv_sec ; real_T tv_nsec ; } ;
#endif
#ifndef typedef_g2xqav1jii
#define typedef_g2xqav1jii
typedef struct tag_sdAmwXbnJnEmimT0NaJRtAD g2xqav1jii ;
#endif
#ifndef struct_tag_Io6M0197HNvEktjdcNX3TH
#define struct_tag_Io6M0197HNvEktjdcNX3TH
struct tag_Io6M0197HNvEktjdcNX3TH { boolean_T matlabCodegenIsDeleted ; real_T
Timeout ; CoderOutputStream StreamImpl ; } ;
#endif
#ifndef typedef_p4l4flmn410
#define typedef_p4l4flmn410
typedef struct tag_Io6M0197HNvEktjdcNX3TH p4l4flmn410 ;
#endif
#ifndef struct_tag_0kISbK0xQLLLeUfZadl9lH
#define struct_tag_0kISbK0xQLLLeUfZadl9lH
struct tag_0kISbK0xQLLLeUfZadl9lH { boolean_T contents ; } ;
#endif
#ifndef typedef_cxyaenft1d
#define typedef_cxyaenft1d
typedef struct tag_0kISbK0xQLLLeUfZadl9lH cxyaenft1d ;
#endif
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T { char_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_lytfstpiri
#define typedef_lytfstpiri
typedef struct emxArray_char_T lytfstpiri ;
#endif
#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T
struct emxArray_uint8_T { uint8_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_kw3w1cgktc
#define typedef_kw3w1cgktc
typedef struct emxArray_uint8_T kw3w1cgktc ;
#endif
#ifndef struct_tag_Lg49zQshP9C0AXZ4N6qODG
#define struct_tag_Lg49zQshP9C0AXZ4N6qODG
struct tag_Lg49zQshP9C0AXZ4N6qODG { boolean_T matlabCodegenIsDeleted ;
CoderInputStream StreamImpl ; kw3w1cgktc * ExampleData ; } ;
#endif
#ifndef typedef_fxbyyv51o2
#define typedef_fxbyyv51o2
typedef struct tag_Lg49zQshP9C0AXZ4N6qODG fxbyyv51o2 ;
#endif
#ifndef struct_tag_h0WOkcoQcZpfv6d8TeqtaF
#define struct_tag_h0WOkcoQcZpfv6d8TeqtaF
struct tag_h0WOkcoQcZpfv6d8TeqtaF { boolean_T matlabCodegenIsDeleted ;
fxbyyv51o2 InputStream ; p4l4flmn41 OutputStream ; CoderChannel ChannelImpl ;
j133oyq043 CustomProps ; } ;
#endif
#ifndef typedef_dq2uwawv51
#define typedef_dq2uwawv51
typedef struct tag_h0WOkcoQcZpfv6d8TeqtaF dq2uwawv51 ;
#endif
#ifndef struct_tag_CzLkcKogofxqo4QO1GQ8cB
#define struct_tag_CzLkcKogofxqo4QO1GQ8cB
struct tag_CzLkcKogofxqo4QO1GQ8cB { boolean_T matlabCodegenIsDeleted ;
fxbyyv51o2 InputStream ; p4l4flmn41 OutputStream ; CoderChannel ChannelImpl ;
} ;
#endif
#ifndef typedef_pxjtq3ygk0
#define typedef_pxjtq3ygk0
typedef struct tag_CzLkcKogofxqo4QO1GQ8cB pxjtq3ygk0 ;
#endif
#ifndef struct_tag_ptzh78Hhthrz9LFfFZlkYD
#define struct_tag_ptzh78Hhthrz9LFfFZlkYD
struct tag_ptzh78Hhthrz9LFfFZlkYD { boolean_T matlabCodegenIsDeleted ;
dq2uwawv51 * AsyncIOChannel ; pxjtq3ygk0 UnreadDataBuffer ; lytfstpiri *
ByteOrder ; } ;
#endif
#ifndef typedef_gegd1nhtze
#define typedef_gegd1nhtze
typedef struct tag_ptzh78Hhthrz9LFfFZlkYD gegd1nhtze ;
#endif
#ifndef struct_tag_CGZCsUpX3uxkzZ3wDaKypC
#define struct_tag_CGZCsUpX3uxkzZ3wDaKypC
struct tag_CGZCsUpX3uxkzZ3wDaKypC { boolean_T matlabCodegenIsDeleted ;
lytfstpiri * ByteOrder ; lytfstpiri * NativeDataType ; lytfstpiri *
DataFieldName ; dq2uwawv51 * AsyncIOChannel ; gegd1nhtze * TransportChannel ;
char_T Port [ 4 ] ; boolean_T IsWriteOnly ; boolean_T IsSharingPort ;
boolean_T IsSharingExistingTimeout ; real_T BaudRate ; lytfstpiri *
FlowControl ; lytfstpiri * Parity ; real_T StopBits ; real_T DataBits ;
real_T Timeout ; real_T InputBufferSize ; real_T OutputBufferSize ;
gegd1nhtze _pobj0 ; dq2uwawv51 _pobj1 ; } ;
#endif
#ifndef typedef_ghe5ys4xtm
#define typedef_ghe5ys4xtm
typedef struct tag_CGZCsUpX3uxkzZ3wDaKypC ghe5ys4xtm ;
#endif
#ifndef struct_tag_Re0ax2BeVjxKpXvnyAxnGG
#define struct_tag_Re0ax2BeVjxKpXvnyAxnGG
struct tag_Re0ax2BeVjxKpXvnyAxnGG { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; ghe5ys4xtm SerialObj ; }
;
#endif
#ifndef typedef_av3iswzhoj
#define typedef_av3iswzhoj
typedef struct tag_Re0ax2BeVjxKpXvnyAxnGG av3iswzhoj ;
#endif
#ifndef struct_tag_eqMNxBm2oqiBys2eK2JbWF
#define struct_tag_eqMNxBm2oqiBys2eK2JbWF
struct tag_eqMNxBm2oqiBys2eK2JbWF { boolean_T matlabCodegenIsDeleted ; real_T
Timeout ; CoderInputStream StreamImpl ; kw3w1cgktc * PartialPacket ; real_T
PartialPacketStart ; real_T PartialPacketCount ; kw3w1cgktc * ExampleData ; }
;
#endif
#ifndef typedef_fxbyyv51o23
#define typedef_fxbyyv51o23
typedef struct tag_eqMNxBm2oqiBys2eK2JbWF fxbyyv51o23 ;
#endif
#ifndef struct_tag_piYPCuT2WONZKl8C3uwajD
#define struct_tag_piYPCuT2WONZKl8C3uwajD
struct tag_piYPCuT2WONZKl8C3uwajD { boolean_T matlabCodegenIsDeleted ;
fxbyyv51o23 InputStream ; p4l4flmn410 OutputStream ; CoderChannel ChannelImpl
; j133oyq043 CustomProps ; } ;
#endif
#ifndef typedef_dq2uwawv51k
#define typedef_dq2uwawv51k
typedef struct tag_piYPCuT2WONZKl8C3uwajD dq2uwawv51k ;
#endif
#ifndef struct_tag_fS4Rk6jhpXOyxKX9dbYsfE
#define struct_tag_fS4Rk6jhpXOyxKX9dbYsfE
struct tag_fS4Rk6jhpXOyxKX9dbYsfE { boolean_T matlabCodegenIsDeleted ;
fxbyyv51o23 InputStream ; p4l4flmn410 OutputStream ; CoderChannel ChannelImpl
; real_T TotalElementsWritten ; kw3w1cgktc * PartialPacket ; real_T
PartialPacketStart ; real_T PartialPacketCount ; real_T BytesPerElement ; } ;
#endif
#ifndef typedef_pxjtq3ygk0g
#define typedef_pxjtq3ygk0g
typedef struct tag_fS4Rk6jhpXOyxKX9dbYsfE pxjtq3ygk0g ;
#endif
#ifndef struct_tag_TvdzfIqS9kAaUtSwGMJTQ
#define struct_tag_TvdzfIqS9kAaUtSwGMJTQ
struct tag_TvdzfIqS9kAaUtSwGMJTQ { boolean_T matlabCodegenIsDeleted ; char_T
MachineByteOrder [ 13 ] ; dq2uwawv51k * AsyncIOChannel ; pxjtq3ygk0g
UnreadDataBuffer ; lytfstpiri * ByteOrder ; lytfstpiri * NativeDataType ;
lytfstpiri * DataFieldName ; boolean_T AllowPartialReads ; } ;
#endif
#ifndef typedef_gegd1nhtzev
#define typedef_gegd1nhtzev
typedef struct tag_TvdzfIqS9kAaUtSwGMJTQ gegd1nhtzev ;
#endif
#ifndef struct_tag_2UUdMbtAs2qayQBis2rrm
#define struct_tag_2UUdMbtAs2qayQBis2rrm
struct tag_2UUdMbtAs2qayQBis2rrm { boolean_T matlabCodegenIsDeleted ;
lytfstpiri * ByteOrder ; lytfstpiri * NativeDataType ; lytfstpiri *
DataFieldName ; dq2uwawv51k * AsyncIOChannel ; gegd1nhtzev * TransportChannel
; char_T Port [ 4 ] ; boolean_T IsWriteOnly ; boolean_T IsSharingPort ;
boolean_T IsSharingExistingTimeout ; real_T BaudRate ; lytfstpiri *
FlowControl ; lytfstpiri * Parity ; real_T StopBits ; real_T DataBits ;
real_T Timeout ; real_T InputBufferSize ; real_T OutputBufferSize ;
gegd1nhtzev _pobj0 ; dq2uwawv51k _pobj1 ; } ;
#endif
#ifndef typedef_ghe5ys4xtmd
#define typedef_ghe5ys4xtmd
typedef struct tag_2UUdMbtAs2qayQBis2rrm ghe5ys4xtmd ;
#endif
#ifndef struct_tag_CXpPhKNbOWm1G0KFjhuM2D
#define struct_tag_CXpPhKNbOWm1G0KFjhuM2D
struct tag_CXpPhKNbOWm1G0KFjhuM2D { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; boolean_T
TunablePropsChanged ; ghe5ys4xtmd SerialObj ; uint16_T SaveOutput ; } ;
#endif
#ifndef typedef_m31jye1cpy
#define typedef_m31jye1cpy
typedef struct tag_CXpPhKNbOWm1G0KFjhuM2D m31jye1cpy ;
#endif
#ifndef struct_tag_CdfRROB8oawAIvSzeGk57G
#define struct_tag_CdfRROB8oawAIvSzeGk57G
struct tag_CdfRROB8oawAIvSzeGk57G { boolean_T matlabCodegenIsDeleted ;
m31jye1cpy * contents ; } ;
#endif
#ifndef typedef_houwmjnjpi
#define typedef_houwmjnjpi
typedef struct tag_CdfRROB8oawAIvSzeGk57G houwmjnjpi ;
#endif
#ifndef struct_emxArray_uint16_T
#define struct_emxArray_uint16_T
struct emxArray_uint16_T { uint16_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_mzwzywjj5z
#define typedef_mzwzywjj5z
typedef struct emxArray_uint16_T mzwzywjj5z ;
#endif
#ifndef struct_tag_nwNlNAh44luWuWarnUt9lF
#define struct_tag_nwNlNAh44luWuWarnUt9lF
struct tag_nwNlNAh44luWuWarnUt9lF { kw3w1cgktc * f1 ; } ;
#endif
#ifndef typedef_p4uhdr1bdf
#define typedef_p4uhdr1bdf
typedef struct tag_nwNlNAh44luWuWarnUt9lF p4uhdr1bdf ;
#endif
#ifndef struct_tag_tVNDDbBfXx0nORXjehL0f
#define struct_tag_tVNDDbBfXx0nORXjehL0f
struct tag_tVNDDbBfXx0nORXjehL0f { kw3w1cgktc * f1 ; } ;
#endif
#ifndef typedef_cjy55fimls
#define typedef_cjy55fimls
typedef struct tag_tVNDDbBfXx0nORXjehL0f cjy55fimls ;
#endif
#ifndef struct_emxArray_tag_tVNDDbBfXx0nORXjeh
#define struct_emxArray_tag_tVNDDbBfXx0nORXjeh
struct emxArray_tag_tVNDDbBfXx0nORXjeh { cjy55fimls * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_aa5bqgvdkq
#define typedef_aa5bqgvdkq
typedef struct emxArray_tag_tVNDDbBfXx0nORXjeh aa5bqgvdkq ;
#endif
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T { boolean_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_bvpcxluwvo
#define typedef_bvpcxluwvo
typedef struct emxArray_boolean_T bvpcxluwvo ;
#endif
#ifndef struct_emxArray_tag_nwNlNAh44luWuWarnU
#define struct_emxArray_tag_nwNlNAh44luWuWarnU
struct emxArray_tag_nwNlNAh44luWuWarnU { p4uhdr1bdf data ; int32_T size [ 2 ]
; } ;
#endif
#ifndef typedef_eaumivaow2
#define typedef_eaumivaow2
typedef struct emxArray_tag_nwNlNAh44luWuWarnU eaumivaow2 ;
#endif
#ifndef struct_emxArray_b_tag_nwNlNAh44luWuWar
#define struct_emxArray_b_tag_nwNlNAh44luWuWar
struct emxArray_b_tag_nwNlNAh44luWuWar { p4uhdr1bdf data ; int32_T size ; } ;
#endif
#ifndef typedef_ouk2ljbqp0
#define typedef_ouk2ljbqp0
typedef struct emxArray_b_tag_nwNlNAh44luWuWar ouk2ljbqp0 ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 22
#endif
#ifndef SS_INT64
#define SS_INT64 23
#endif
typedef struct P_ P ;
#endif
