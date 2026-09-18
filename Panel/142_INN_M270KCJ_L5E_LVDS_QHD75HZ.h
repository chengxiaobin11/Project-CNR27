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

#if(_PANEL_TYPE == _INN_M270KCJ_L5E_LVDS_QHD75HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : _INN_M270KCJ_L5E_LVDS_QHD75HZ.h No.0000
// Update Note  :


#define _PANEL_PRESET_MODE_FRAME_RATE            750

//////////////////
// General Info // 
//////////////////
#if(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270KCJ_L5Z_QHD75HZ_20210126)
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_2__,_7__,_0__,_K__,_C__,_J__,_L__,_5__,_Z__
#elif(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270KCJ_L5Z_QHD75HZ_20210126)
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_2__,_7__,_0__,_K__,_C__,_J__,_L__,_5__,_Z__
#elif(Project_ID == ID_HHT_HK2556E06_1P1H_INN_M270KCJ_L5E_QHD75HZ_20210120 &&(_PROJEC_ID_TYPE==1||_PROJEC_ID_TYPE==2))
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_2__,_7__,_0__,_K__,_C__,_J__,_L__,_5__,_B__
#elif(Project_ID == ID_MC_HK2556E01_1P2H_INNOLUX_M270KCJ_L5Z_LVDS_QHD75HZ_20211206)
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_2__,_7__,_0__,_K__,_C__,_J__,_L__,_5__,_Z__
#else
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_2__,_7__,_0__,_K__,_C__,_J__,_L__,_5__,_E__
#endif

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
#if(Project_ID == ID_MC_HK2556E01_1P2H_INNOLUX_M270KCJ_L5Z_LVDS_QHD75HZ_20211206)
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
#define _PANEL_MANUFACTURER                     _PANEL_INNOLUX

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#if 0//(Project_ID    ==  ID_CS_OSD_LOGO_OTHER)
#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE                   1020
#define _PANEL_MIN_FRAME_RATE                   480

//--------------------------------------------------
// Definitions for FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          1000//750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         2560                // Display Horizontal Width
#define _PANEL_DH_END                           2608                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                         2720//2792                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX                     4000//2800                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                     2676//2680//784                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1440                // Display Vertical Width
#define _PANEL_DV_END                           1446                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1481                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX                     4000//1487                // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1456//1460//1479                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      248                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX                  500//600//400//320// 312                 // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  180//190                 // Mininum Pixel Clock in MHz


#define _PANEL_POWER_ON_T1                      30                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      600//550                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     250//150                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     25                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1300                // Panel Power Off T6 (ms)

#else

#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE                   760
#define _PANEL_MIN_FRAME_RATE                   480

//--------------------------------------------------
// Definitions for FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         2560                // Display Horizontal Width
#define _PANEL_DH_END                           2608                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                         2720//2792                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX                     4000//2800                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                     2676//2680//784                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1440                // Display Vertical Width
#define _PANEL_DV_END                           1446                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1481                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX                     4000//1487                // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1456//1460//1479                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      248                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX                  320// 312                 // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  180//190                 // Mininum Pixel Clock in MHz


#define _PANEL_POWER_ON_T1                      30                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      600//550                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     250//150                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     25                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1300                // Panel Power Off T6 (ms)
#endif

/////////////
// Display //
/////////////

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



