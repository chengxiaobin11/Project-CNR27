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
#if(_PANEL_TYPE == _SAMSUNG_LSM270HP06_LVDS_FHD144HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 44_AUO_T215HVN05_1_LVDS_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_L__,_S__,_M__,_2__,_7__,_0__,_H__,_P__,_0__,_6__

//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE            1650

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#if PANEL_TEST

#define _LVDS_OUTPUT_PORT                       _LVDS_4_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_0
#else
#define _LVDS_OUTPUT_PORT                       _LVDS_4_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_2_SECTION
#if(Project_ID == ID_SHUNWEI_HK2561DP1HDMI__COST_SG2701B05_3_FHD165HZ__20200604)
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_2_4
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_1
#else
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_1
#endif
#endif

//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_SAMSUNG

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT




#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE               1660//    1450
#define _PANEL_MIN_FRAME_RATE               480//    470


#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE         1650//1800// 1440
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------

#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         1920                // Display Horizontal Width
#define _PANEL_DH_END                           1968                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                         2120                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX               4000//      2180                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                    2000// 2000//2100                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1080                // Display Vertical Width
#define _PANEL_DV_END                           1086                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1110                // Display Vertical Total Clock Number in One Display Line

#define _PANEL_DV_TOTAL_MAX                5000//     3354                // Maxinum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DV_TOTAL_MIN                     1098//1106                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      170                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX            420//      360                 // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  116                 // Mininum Pixel Clock in MHz


#define _PANEL_POWER_ON_T1                      25                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      1100                // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     110                // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     120                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1200                // Panel Power Off T6 (ms)

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

//--------------------------------------------------
// Definitions for Display HDR
//--------------------------------------------------
#define _PANEL_MAX_LUMINANCE                    0x62 // from OGC Tool
#define _PANEL_MAX_FRAME_AVERAGE_LUMINANCE      0x62 // from OGC Tool


/////////////////////////
// Color Default Table //
/////////////////////////

//--------------------------------------------------
// Color Default Value
//--------------------------------------------------
#include "./RTDColorDefaultTable/ColorTableInclude.h"

#endif // End of #if(_PANEL_TYPE == _AUO_T215HVN05_1_LVDS_60HZ)


