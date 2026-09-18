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
#if(_PANEL_TYPE == _HKC_PN238CT02_14_LVDS_FHD100HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : _CSOT_SG2701B08_1_LVDS_FHD120HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(Project_ID == _ID_MNT_2313BRE01_PN238CS02_2_FHD100HZ_20260427)
#if(PN270CU01_6)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_P__,_N__,_2__,_7__,_0__,_C__,_U__,_0__,_1__,_SLINE__,_6__
#elif(SG2701B08_1)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_7__,_0__,_1__,_B__,_0__,_8__,_SLINE__,_1__
#elif(SG2701B08_1_144||SG2701B08_1_144_27M56)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_7__,_0__,_1__,_B__,_0__,_8__,_SLINE__,_1__
#elif(SG2381B04_1)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_3__,_8__,_1__,_B__,_0__,_4__,_SLINE__,_1__
#elif(SG2701B08_1_LONG)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_7__,_0__,_1__,_B__,_0__,_8__,_SLINE__,_1__
#elif(SG2381B04_144||SG2381B04_144_2)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_3__,_8__,_1__,_B__,_0__,_4__,_SLINE__,_1__
#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_P__,_N__,_2__,_3__,_8__,_C__,_S__,_0__,_2__,_SLINE__,_2__
#endif
#elif(Project_ID == _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_7__,_0__,_1__,_B__,_0__,_8__,_SLINE__,_1__
#elif(Project_ID == _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_3__,_8__,_1__,_B__,_0__,_4__,_SLINE__,_1__
#elif(Project_ID == _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427)
#if(SG2701B08_1)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_7__,_0__,_1__,_B__,_0__,_8__,_SLINE__,_1__
#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_L__,_D__,_2__,_3__,_8__,_E__,_U__,_4__,_SLINE__,_S__,_U__,_A__,_1__
#endif
#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_P__,_N__,_2__,_3__,_8__,_C__,_T__,_0__,_2__,_SLINE__,_1__,_4__
#endif
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE            1200

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
#if(Project_ID == _ID_MNT_2313BRE01_PN238CS02_2_FHD100HZ_20260427)
#define _PANEL_TYP_FRAME_RATE                   600
#if((SG2701B08_1)||(SG2381B04_1)||SG2701B08_1_LONG)
#define _PANEL_MAX_FRAME_RATE                 	1210//  760
#elif((SG2701B08_1_144)||(SG2381B04_144)||SG2381B04_144_2||SG2701B08_1_144_27M56)
#define _PANEL_MAX_FRAME_RATE                 	1450//  760
#else
#define _PANEL_MAX_FRAME_RATE                 	1010//  760
#endif
#define _PANEL_MIN_FRAME_RATE                   480

#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#if((SG2701B08_1)||(SG2381B04_1)||SG2701B08_1_LONG)
#define _PANEL_FREESYNC_MAX_FRAME_RATE                 	1200//  760
#elif((SG2701B08_1_144)||(SG2381B04_144)||SG2381B04_144_2||SG2701B08_1_144_27M56)
#define _PANEL_FREESYNC_MAX_FRAME_RATE                 	1440//  760
#else
#define _PANEL_FREESYNC_MAX_FRAME_RATE         	1000// 750
#endif
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif
#elif(Project_ID == _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730)
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

#elif(Project_ID == _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629)
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
#define _PANEL_MAX_FRAME_RATE                 	1010//  760
#define _PANEL_MIN_FRAME_RATE                   480

#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------

#define _PANEL_FREESYNC_MAX_FRAME_RATE         	1000// 750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif

#endif
///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#if(Project_ID == _ID_MNT_2313BRE01_PN238CS02_2_FHD100HZ_20260427)
#if(SG2381B04_1_shan)
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                       	2080//  2200
#define _PANEL_DH_TOTAL_MAX                    	3000// 4000
#define _PANEL_DH_TOTAL_MIN                     2040

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                       	1101// 1125
#define _PANEL_DV_TOTAL_MAX                  	4000//   3000//1600
#define _PANEL_DV_TOTAL_MIN                   	1098

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                  300
#define _PANEL_PIXEL_CLOCK_MIN                  110

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     25
#define _PANEL_POWER_OFF_T6                     1100
#elif(SG2701B08_1_LONG)
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                       	2080//  2200
#define _PANEL_DH_TOTAL_MAX                    	3000// 4000
#define _PANEL_DH_TOTAL_MIN                     2040

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                       	1101// 1125
#define _PANEL_DV_TOTAL_MAX                  	4000//   3000//1600
#define _PANEL_DV_TOTAL_MIN                   	1098

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                  300
#define _PANEL_PIXEL_CLOCK_MIN                  110

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     25
#define _PANEL_POWER_OFF_T6                     1100

#else

#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                       	2200//  2200
#define _PANEL_DH_TOTAL_MAX                    	3000// 4000
#define _PANEL_DH_TOTAL_MIN                     2100

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX                  	4000//   3000//1600
#define _PANEL_DV_TOTAL_MIN                   	1110

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#if((SG2701B08_1)||(SG2381B04_1)||SG2701B08_1_LONG)
#define _PANEL_PIXEL_CLOCK_MAX                  300
#elif((SG2701B08_1_144)||(SG2381B04_144)||SG2381B04_144_2||SG2701B08_1_144_27M56)
#define _PANEL_PIXEL_CLOCK_MAX                  400
#else
#define _PANEL_PIXEL_CLOCK_MAX                  250
#endif
#define _PANEL_PIXEL_CLOCK_MIN                  110

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      500

#define _PANEL_POWER_OFF_T4                     100
#define _PANEL_POWER_OFF_T5                     25
#define _PANEL_POWER_OFF_T6                     1100
#endif
#elif(Project_ID == _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730)
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                       	2080//  2200
#define _PANEL_DH_TOTAL_MAX                    	3000// 4000
#define _PANEL_DH_TOTAL_MIN                     2040

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                       	1101// 1125
#define _PANEL_DV_TOTAL_MAX                  	4000//   3000//1600
#define _PANEL_DV_TOTAL_MIN                   	1098

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                  300
#define _PANEL_PIXEL_CLOCK_MIN                  110

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     25
#define _PANEL_POWER_OFF_T6                     1100

#elif(Project_ID == _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629)
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                       	2200//  2200
#define _PANEL_DH_TOTAL_MAX                    	3000// 4000
#define _PANEL_DH_TOTAL_MIN                     2100

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX                  	4000//   3000//1600
#define _PANEL_DV_TOTAL_MIN                   	1110

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                  300
#define _PANEL_PIXEL_CLOCK_MIN                  110

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     25
#define _PANEL_POWER_OFF_T6                     1100
#elif(Project_ID == _ID_CLP_2513BRE02_SG2381B04_1_FHD120HZ_20260702)
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                       	2200//  2200
#define _PANEL_DH_TOTAL_MAX                    	3000// 4000
#define _PANEL_DH_TOTAL_MIN                     2100

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX                  	4000//   3000//1600
#define _PANEL_DV_TOTAL_MIN                   	1110

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                  300
#define _PANEL_PIXEL_CLOCK_MIN                  110

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     25
#define _PANEL_POWER_OFF_T6                     1100
#else
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                       	2200//  2200
#define _PANEL_DH_TOTAL_MAX                    	3000// 4000
#define _PANEL_DH_TOTAL_MIN                     2100

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX                  	4000//   3000//1600
#define _PANEL_DV_TOTAL_MIN                   	1110

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      144
#define _PANEL_PIXEL_CLOCK_MAX                  250
#define _PANEL_PIXEL_CLOCK_MIN                  110

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     25
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

