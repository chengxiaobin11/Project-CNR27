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

#if(_PANEL_TYPE == _AUO_M238HVN01_2_LVDS_FHD75HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 44_AUO_T215HVN05_1_LVDS_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#if(Project_ID == ID_KANGJIA_HK2513AR_1V1H_PN238CT0214_FD75HZ_20210415)
//PN238CT02-14
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_P__,_N__,_2__,_3__,_8__,_C__,_T__,_0_,_2__,_SLINE__,_1__,_4__
#elif(Project_ID ==ID_SONGREN_HK2513E01_1V1H_SG2381B01_20210129)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_3__,_8__,_1__,_B__,_0__,_1__
#elif(Project_ID    ==  ID_CS_2513E03_M270HAN0_1_FHD10Z)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_H__,_A__,_N__,_0__,_DOT__,_1__

#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_3__,_8__,_H__,_V__,_N__,_0__,_1__,_DOT__,_2__
#endif
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE           750//600

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
#define _PANEL_TYP_FRAME_RATE                   600
#if(Project_ID    ==  ID_CS_2513E03_M270HAN0_1_FHD10Z)
#define _PANEL_MAX_FRAME_RATE                  1010
#else
#define _PANEL_MAX_FRAME_RATE                  770

#endif
#define _PANEL_MIN_FRAME_RATE                   480


#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#if(Project_ID    ==  ID_CS_2513E03_M270HAN0_1_FHD10Z)
#define _PANEL_FREESYNC_MAX_FRAME_RATE          1010
#else
#define _PANEL_FREESYNC_MAX_FRAME_RATE          750

#endif
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif



///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#if(Project_ID    ==  ID_CS_2513E03_M270HAN0_1_FHD10Z)
#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         1920                // Display Horizontal Width
#define _PANEL_DH_END                           1968                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                     	2100//2080//2200                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX                 	2300//2200                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                		2040//2050//2100                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1080                // Display Vertical Width
#define _PANEL_DV_END                           1086                // Display Vertical End Position

#define _PANEL_DV_TOTAL                    		1160//1125                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX              		2500//3604                    // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1100//1108                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                   	144//132//148                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX                  250//250//230//235						// Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  110//105//80                  // Mininum Pixel Clock in MHz

#define _PANEL_POWER_ON_T1                   	10                    // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                    	40//50//40						// Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                    	450//300                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                		120//120//300//510//300                  // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                  	50//40//25                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                  	1100                 // Panel Power Off T6 (ms)

#else

#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2100
#define _PANEL_DH_TOTAL_MAX                     4000//3356
#define _PANEL_DH_TOTAL_MIN                     2040//2000

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1130
#define _PANEL_DV_TOTAL_MAX           			2000// 1836
#define _PANEL_DV_TOTAL_MIN                     1098

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      148
#define _PANEL_PIXEL_CLOCK_MAX                  180
#define _PANEL_PIXEL_CLOCK_MIN                  107


#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      30
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     220
#define _PANEL_POWER_OFF_T5               		 25
#define _PANEL_POWER_OFF_T6                     1100
#endif


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


