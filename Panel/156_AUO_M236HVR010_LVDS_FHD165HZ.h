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

#if(_PANEL_TYPE == _AUO_M236HVR010_LVDS_FHD165HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 44_AUO_T215HVN05_1_LVDS_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#if(Project_ID == ID_CHANGJIA_HK2556E01_1P2H_M270HAN02_V6_FHD144HZ_20210908)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_7__,_0__,_1__,_B__,_0__,_1__,_SLINE__,_8__
#elif(Project_ID == ID_CHANGJIA_GS24S3F_HK2556E01_1P2H_M236HVR010_FHD144HZ_20210908)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_3__,_8__,_1__,_B__,_0__,_1__,_SLINE__,_2__

#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_3__,_6__,_H__,_V__,_R__,_0__,_1__,_DOT__,_0__


#endif




//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE         1650

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#define _LVDS_OUTPUT_PORT                       _LVDS_4_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_0

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


///////////////
// Parameter //
///////////////

#define _PANEL_TYP_FRAME_RATE                   1200
#define _PANEL_MAX_FRAME_RATE                  	1660
#if 0//(Project_ID == ID_CHANGJIA_GS24S3F_HK2556E01_1P2H_M236HVR010_FHD144HZ_20210908)
#define _PANEL_MIN_FRAME_RATE                  	480// 610//480

#else
#define _PANEL_MIN_FRAME_RATE                  	300// 610//480
#endif
#if(_FREESYNC_SUPPORT == _ON)
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE        	1650//  1440
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2080//2200
#define _PANEL_DH_TOTAL_MAX                 	6000//4092
#define _PANEL_DH_TOTAL_MIN                     2000

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1121//1130//1142
#define _PANEL_DV_TOTAL_MAX                		6415
#define _PANEL_DV_TOTAL_MIN                     1098

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      189//280
#define _PANEL_PIXEL_CLOCK_MAX             		450//     360
#define _PANEL_PIXEL_CLOCK_MIN                 	170// 130


#define _PANEL_POWER_ON_T1                      30
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                     600//550

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

#endif // End of #if(_PANEL_TYPE == _AUO_T215HVN05_1_LVDS_60HZ)


