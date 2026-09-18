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

#if(_PANEL_TYPE == _BOE_MV238QHB_N10_LVDS_QHD_75HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : _AUO_M270DAN02V0_LVDS_QHD_60HZ.h No.0000
// Update Note  :
//通过FRC 最高超到120，画面变模糊

#define _PANEL_PRESET_MODE_FRAME_RATE            750

//////////////////
// General Info // 
//////////////////
#if(Project_ID == ID_XHS_HK2556E02_BOE_MV238QHB_N20_QHD75HZ_EDID_N240QHD_20210111)
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_V__,_2__,_3__,_8__,_Q__,_H__,_B__,_N__,_2__,_0__
#elif(Project_ID == ID_XHS_HK2556E02_BOE_MV238QHB_N20_QHD75HZ_EDID_N240QHD_20210903)
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_V__,_2__,_7__,_0__,_Q__,_H__,_B__,_N__,_2__,_0__
#elif(Project_ID == ID_AS_HK2556E02_1P1H_SG2701B01_8_LVDS_FHD165_20211027)
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_2__,_7__,_0__,_D__,_A__,_N__,_0__,_9__,_DOT__,_0__
#elif(Project_ID == ID_ZQ_HK255XE03_1T1P1H_MV270QHBN50_LVDS_QHD75HZ_20230522)
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_V__,_2__,_7__,_0__,_Q__,_H__,_B__,_N__,_5__,_0__
#elif(Project_ID == ID_TJ_HK2556E01_1P2H_M270DAN07_V700_QHD100HZ_20230906)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_D__,_A__,_N__,_0__,_7__,_DOT__,_7__
#else
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_V__,_2__,_3__,_8__,_Q__,_H__,_B__,_N__,_1__,_0__
#endif

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#define _LVDS_OUTPUT_PORT                       _LVDS_4_PORT
#if(Project_ID == ID_XHS_HK2556E02_BOE_MV238QHB_N20_QHD75HZ_EDID_N240QHD_20210903)
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_2_SECTION

#else
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#endif
#if(Project_ID == ID_XHS_HK2556E02_BOE_MV238QHB_N20_QHD75HZ_EDID_N240QHD_20210111)
	#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_2_4
#else
	#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#endif

#if(Project_ID == ID_TJ_HK2556E01_1P2H_M270DAN07_V700_QHD100HZ_20230906)
#define  _LVDS_CABLE_TYPE						_LVDS_CABLE_TYPE_1
#else
#define  _LVDS_CABLE_TYPE						_LVDS_CABLE_TYPE_0
#endif
//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_BOE
#if(Project_ID == ID_ZQ_HK255XE03_1T1P1H_MV270QHBN50_LVDS_QHD75HZ_20230522)
//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------


#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE                   760//750
#define _PANEL_MIN_FRAME_RATE                   480

#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         2560                // Display Horizontal Width
#define _PANEL_DH_END                           2608                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                         2760//3520//2720                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX                     4092// 2736                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                     2756//2760                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1440                // Display Vertical Width
#define _PANEL_DV_END                           1446                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1481                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX                     2347                // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1452                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      245//242                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX              	340//314//304//314//    304                 // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  192                 // Mininum Pixel Clock in MHz


#define _PANEL_POWER_ON_T1                      20                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      800                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     250                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     30                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1100                // Panel Power Off T6 (ms)

/////////////
// Display //
/////////////

#elif(Project_ID == ID_TJ_HK2556E01_1P2H_M270DAN07_V700_QHD100HZ_20230906)
//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT



#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE                   1010
#define _PANEL_MIN_FRAME_RATE                   480

#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          1000
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif


///////////////
// Parameter //
/////////////// 

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         2560
#define _PANEL_DH_END                           2608

#define _PANEL_DH_TOTAL                         2720
#define _PANEL_DH_TOTAL_MAX                     4092
#define _PANEL_DH_TOTAL_MIN                     2680

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1440
#define _PANEL_DV_END                           1446

#define _PANEL_DV_TOTAL                         1481
#define _PANEL_DV_TOTAL_MAX                     4000
#define _PANEL_DV_TOTAL_MIN                     1452

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      240
#define _PANEL_PIXEL_CLOCK_MAX                  420// 400
#define _PANEL_PIXEL_CLOCK_MIN                  188


#define _PANEL_POWER_ON_T1                      20                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      50                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      600                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     250                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     30                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1300                // Panel Power Off T6 (ms)


#else
//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------


#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE                   760//750
#define _PANEL_MIN_FRAME_RATE                   480

#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         2560                // Display Horizontal Width
#define _PANEL_DH_END                           2608                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                         2720                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX                    4092// 2736                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                     2704                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1440                // Display Vertical Width
#define _PANEL_DV_END                           1446                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1481                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX                     2347                // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1452                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      242                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX              314//304//314//    304                 // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  192                 // Mininum Pixel Clock in MHz


#define _PANEL_POWER_ON_T1                      20                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      800                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     250                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     30                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1100                // Panel Power Off T6 (ms)

/////////////
// Display //
/////////////
#endif
//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 200)

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

#endif // End of #if(_PANEL_TYPE == _AUO_M270DAN02V0_LVDS_QHD)

