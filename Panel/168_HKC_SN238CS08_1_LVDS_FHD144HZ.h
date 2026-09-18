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

#if(_PANEL_TYPE == _HKC_SN238CS08_1_LVDS_FHD144HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : _HKC_SN238CS08_1_LVDS_FHD144HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(Project_ID    ==  _ID_HONGXIA_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20251107)
#if(MV270FHB_NY1_20260428)
//#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_V__,_2__,_7__,_0__,_F__,_H__,_B__,_SLINE__,_N__,_Y__,_1__
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_H__,_A__,_H__,_0__,_1__,_DOT__,_8__
#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_L__,_D__,_2__,_3__,_8__,_E__,_U__,_4__,_SLINE__,_S__,_U__,_A__,_1__
#endif
#else
#define _PANNEL_NAME                        	_P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_N__,_2__,_3__,_8__,_C__,_S__,_0__,_8__,_SLINE__,_1__
#endif


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
#if(Project_ID    ==  _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321)
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_2_4
#else
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#endif


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


#if(Project_ID    ==  _ID_HONGXIA_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20251107)
#define _PANEL_TYP_FRAME_RATE                   600

#define _PANEL_MAX_FRAME_RATE                 	1210//  760

#define _PANEL_MIN_FRAME_RATE                   480

#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------

#define _PANEL_FREESYNC_MAX_FRAME_RATE         	1200// 750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif

#else

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
#endif

///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#if 0//(Project_ID    ==  _ID_HONGXIA_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20251107)
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2084 //2100 //2084 - 因为有遇过闪屏 - 提高Htotal
#define _PANEL_DH_TOTAL_MAX                    	2240// 2348 //6000 //4000
#define _PANEL_DH_TOTAL_MIN                     2080//2040//2080

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                        1092// 1125 //1092
#define _PANEL_DV_TOTAL_MAX                    3000//4000// 2813//4000
#define _PANEL_DV_TOTAL_MIN                    1091// 1098 //1091

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144//210//144
#define _PANEL_PIXEL_CLOCK_MAX                  350//290//300
#define _PANEL_PIXEL_CLOCK_MIN                  110//190//110
/*
#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      50
#define _PANEL_POWER_ON_T3                      650

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     25 
#define _PANEL_POWER_OFF_T6                     1100
*/
#define _PANEL_POWER_ON_T1                      30
#define _PANEL_POWER_ON_T2                      40
#define _PANEL_POWER_ON_T3                     550
	
#define _PANEL_POWER_OFF_T4                    250
#define _PANEL_POWER_OFF_T5                     30
#define _PANEL_POWER_OFF_T6                   1100


#else

#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968
#if(Project_ID    ==  _ID_MXDZ_2513BRE03_SN238CS08_1_FHD144HZ_20251103)||(Project_ID    ==  _ID_MXDZ_2513BRE03_HV400FHB_F11_FHD60HZ_20260321)
#define _PANEL_DH_TOTAL                         2200
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV430FHB_F91_FHD60HZ_20260321)||(Project_ID    ==  _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321)
#define _PANEL_DH_TOTAL                         2200
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV236WHB_F10_FHD60HZ_20260321)||(Project_ID    ==  _ID_MXDZ_2513BRE03_HV320WHB_F73_FHD60HZ_20260321)
#define _PANEL_DH_TOTAL                         2200
#else
#define _PANEL_DH_TOTAL                         2040
#endif
#define _PANEL_DH_TOTAL_MAX                 	3000
#define _PANEL_DH_TOTAL_MIN                     2020

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1100
#define _PANEL_DV_TOTAL_MAX                    	3400
#define _PANEL_DV_TOTAL_MIN                     1098

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                 	400//350
#define _PANEL_PIXEL_CLOCK_MIN                  110


#define _PANEL_POWER_ON_T1                      30
#define _PANEL_POWER_ON_T2                      40
#define _PANEL_POWER_ON_T3                     550

#define _PANEL_POWER_OFF_T4                    250
#define _PANEL_POWER_OFF_T5                     30
#define _PANEL_POWER_OFF_T6                   1100
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
#endif // End of #if(_PANEL_TYPE == _AUO_M270DAN02V0_LVDS_QHD)

