/********************************************************************************/
/*   The  Software  is  proprietary,  confidential,  and  valuable to Realtek   */
/*   Semiconductor  Corporation  ("Realtek").  All  rights, including but not   */
/*   limited  to  copyrights,  patents,  trademarks, trade secrets, mask work   */
/*   rights, and other similar rights and interests, are reserved to Realtek.   */
/*   Without  prior  written  consent  from  Realtek,  copying, reproduction,   */
/*   modification,  distribution,  or  otherwise  is strictly prohibited. The   */
/*   Software  shall  be  kept  strictly  in  confidence,  and  shall  not be   */
/*   disclosed to or otherwise accessed by any third party.                     */
/*   c<2003> - <2012>                                                           */
/*   The Software is provided "AS IS" without any warranty of any kind,         */
/*   express, implied, statutory or otherwise.                                  */
/********************************************************************************/

#if(_PANEL_TYPE == _AUO_M270HAN03_0_8HBR_FHD240)
//----------------------------------------------------------------------------------------------------
// ID Code      : 95_BOE_MV238FHB_NG0_LVDS_165HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_A__,_U__,_O__,__,_M__,_2__,_7__,_0__,_H__,_A__,_N__,_0__,_3__,_0__

#define _PANEL_PRESET_MODE_FRAME_RATE            2400

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR2
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_8
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE

//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF


//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_LGD

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT


//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
/*
#define _PANEL_TYP_FRAME_RATE               2000//    2400
#define _PANEL_MAX_FRAME_RATE         2810//   2810//   3010
#define _PANEL_MIN_FRAME_RATE            480//      480//1210

*/


#define _PANEL_TYP_FRAME_RATE                  2000// 1800
#define _PANEL_MAX_FRAME_RATE                   2410
#define _PANEL_MIN_FRAME_RATE                   610//1210


//--------------------------------------------------
// Definitions for FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          2400
#define _PANEL_FREESYNC_MIN_FRAME_RATE            480


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
/*
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                   2480//    2304
#define _PANEL_DH_TOTAL_MAX              8184//7080//       4088
#define _PANEL_DH_TOTAL_MIN             1968// 2240//      1968// 2240

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX             10510//        8000
#define _PANEL_DV_TOTAL_MIN         1086//  1086//   1100//   1086//  1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                 558//     568
#define _PANEL_PIXEL_CLOCK_MAX         720//  700//      720
#define _PANEL_PIXEL_CLOCK_MIN           200//  272//     200



*/



#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2160
#define _PANEL_DH_TOTAL_MAX                 8184//    4088
#define _PANEL_DH_TOTAL_MIN                    2000// 2152

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1315
#define _PANEL_DV_TOTAL_MAX                8000
#define _PANEL_DV_TOTAL_MIN                 1096//     1086// 1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      568
#define _PANEL_PIXEL_CLOCK_MAX                  700
#define _PANEL_PIXEL_CLOCK_MIN                  200


#define _PANEL_POWER_ON_T1                      200
#define _PANEL_POWER_ON_T2                      300
#define _PANEL_POWER_ON_T3                      610

#define _PANEL_POWER_OFF_T4                     130
#define _PANEL_POWER_OFF_T5                     20
#define _PANEL_POWER_OFF_T6                     1100



/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 150)

//--------------------------------------------------
// Definitions for Frame Sync Margin (Unit: 0.1Hz)
//--------------------------------------------------
#define _FRAME_SYNC_MARGIN                      20

//--------------------------------------------------
// Definitions for Panel DCLK Unit
//--------------------------------------------------
#define _PANEL_PIXEL_CLOCK_UNIT                 _PANEL_CLOCK_MHZ

//--------------------------------------------------
// Definitions for video compensation
//-------------------------------------------------
#define BYPASS_VIDEO_COMPENSATION(Vin, Vout)    ((Vin) == ((Vout) >> 1))


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


///////////////////////////
// Color Characteristics //
///////////////////////////
#define _PANEL_MAX_LUMINANCE                    0x62 // from OGC Tool
#define _PANEL_MAX_FRAME_AVERAGE_LUMINANCE      0x62 // from OGC Tool



/////////////////////////
// Color Default Table //
/////////////////////////

//--------------------------------------------------
// Color Default Value
//--------------------------------------------------
#include "./RTDColorDefaultTable/ColorTableInclude.h"


#endif // End of #if(_PANEL_TYPE == _BOE_MV238FHB_NG0_LVDS_165HZ)
