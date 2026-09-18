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

#if(_PANEL_TYPE == _AUO_M250HAN03_5_FHD300HZ)
//----------------------------------------------------------------------------------------------------
#define _PANEL_NAME      		_P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_5__,_0__,_H__,_A__,_N__,_0__,_3__,_DOT__,_5__


#define _PANEL_PRESET_MODE_FRAME_RATE            3000//3200


//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX
#define _PANEL_PIXEL_TYPE                       _PANEL_PIXEL_LCD

//--------------------------------------------------
// Definitions for DPTx Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR2
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_4
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE
#define _PANEL_DPTX_MSA_TIMING_PAR_IGNORE_EN    _ENABLE

//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF


//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_AUO

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------

#define _PANEL_TYP_FRAME_RATE              		2700    
#define _PANEL_MAX_FRAME_RATE            		3000//3200
#define _PANEL_MIN_FRAME_RATE              		480    

#if(_FREESYNC_SUPPORT == _ON)
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          3000//3200
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480
#endif

#define _PANEL_DP_FREESYNC_MAX_FRAME_RATE        3000//3200
#define _PANEL_DP_FREESYNC_MIN_FRAME_RATE       480

#define _PANEL_HDMI_FREESYNC_MAX_FRAME_RATE      3000//3200
#define _PANEL_HDMI_FREESYNC_MIN_FRAME_RATE     480

#define _PANEL_HDMI21_VRR_MAX_FRAME_RATE         3000//3200
#define _PANEL_HDMI21_VRR_MIN_FRAME_RATE        480

//#define _DPLL_JITTER_MARGIN                     _DPLL_NO_JITTER_MARGIN

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------

#define _PANEL_DH_START                         48//72
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           (_PANEL_DH_START + _PANEL_DH_WIDTH)

#define _PANEL_DH_TOTAL                         2120//2216
#define _PANEL_DH_TOTAL_MAX                     2720//8000
#define _PANEL_DH_TOTAL_MIN                     2020//2080

#define _PANEL_DV_START                         10
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1090

#define _PANEL_DV_TOTAL                         1125//1160
#define _PANEL_DV_TOTAL_MAX                     12000
#define _PANEL_DV_TOTAL_MIN                     1105//1100


#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                   	573
#define _PANEL_PIXEL_CLOCK_MAX           		680   
#define _PANEL_PIXEL_CLOCK_MIN                	100


#define _PANEL_POWER_ON_T1                      10//100
#define _PANEL_POWER_ON_T2                      150
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     200
#define _PANEL_POWER_OFF_T5                     30
#define _PANEL_POWER_OFF_T6                     1100

/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _PANEL_LAST_LINE_MAX                    (_PANEL_DH_TOTAL - 200)
#define _PANEL_LAST_LINE_MIN                    (_PANEL_DH_TOTAL - 200)

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

#endif // End of #if(_PANEL_TYPE == _AUO_MV270_NF4_FHD_360HZ)

