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

#if(_PANEL_TYPE == _AUO_M315QAN01_0_UHD60HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 48_AUO_M315DVR01_0_EDP_165HZ.h No.0000
// Update Note  :


#define _PANEL_PRESET_MODE_FRAME_RATE            600

//////////////////
// General Info // 
//////////////////
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_3__,_1__,_5__,_Q__,_A__,_N__,_0__,_1__


//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------

#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR2
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_4
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE

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
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_30_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_TYP_FRAME_RATE                   620
#define _PANEL_MAX_FRAME_RATE                   600
#define _PANEL_MIN_FRAME_RATE                   470

#if(_FREESYNC_SUPPORT == _ON)
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          620
#define _PANEL_FREESYNC_MIN_FRAME_RATE          470
#endif

///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         3840
#define _PANEL_DH_END                           3888

#define _PANEL_DH_TOTAL                         4000
#define _PANEL_DH_TOTAL_MAX                     5296
#define _PANEL_DH_TOTAL_MIN                     3936

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        2160
#define _PANEL_DV_END                           2166

#define _PANEL_DV_TOTAL                         2222
#define _PANEL_DV_TOTAL_MAX         			2990
#define _PANEL_DV_TOTAL_MIN                     2200

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      533
#define _PANEL_PIXEL_CLOCK_MAX           		552
#define _PANEL_PIXEL_CLOCK_MIN                  405



#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      200
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     150
#define _PANEL_POWER_OFF_T5                     50
#define _PANEL_POWER_OFF_T6                     1000




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

#endif // End of #if(_PANEL_TYPE == _AUO_M315DVR01_0_EDP_165HZ)

