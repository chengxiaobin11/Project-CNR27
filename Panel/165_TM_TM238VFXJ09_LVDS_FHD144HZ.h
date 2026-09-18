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

#if(_PANEL_TYPE == _TM_TM238VFXJ09_LVDS_FHD144HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define _PANNEL_NAME                        	_P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_T__,_M__,_2__,_3__,_8__,_V__,_F__,_X__,_J__,_0__,_9__
//////////////////
// General Info //
//////////////////

#define _PANEL_PRESET_MODE_FRAME_RATE            600

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#define _LVDS_OUTPUT_PORT                       _LVDS_2_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3



#define _LVDS_CABLE_TYPE                    	_LVDS_CABLE_TYPE_0
//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_CSOT

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT



#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE                 	1440
#define _PANEL_MIN_FRAME_RATE                   480


#if(_FREESYNC_SUPPORT == _ON)
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE         	1440
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2080
#define _PANEL_DH_TOTAL_MAX                 	3000
#define _PANEL_DH_TOTAL_MIN                     2020

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1100
#define _PANEL_DV_TOTAL_MAX                    	3400
#define _PANEL_DV_TOTAL_MIN                     1099

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                 	350
#define _PANEL_PIXEL_CLOCK_MIN                  110


#define _PANEL_POWER_ON_T1                      30
#define _PANEL_POWER_ON_T2                      40
#define _PANEL_POWER_ON_T3                     550

#define _PANEL_POWER_OFF_T4                    250
#define _PANEL_POWER_OFF_T5                     30
#define _PANEL_POWER_OFF_T6                   1100



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
#endif // End of #if(_PANEL_TYPE == _AUO_M270DAN02V0_LVDS_QHD)

