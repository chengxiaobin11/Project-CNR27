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

#if(_PANEL_TYPE == _SAMSUNG_LSM315DP02_EDP_QHD75HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : _BOE_MV315QHB_N10_LVDS_75HZ.h No.0000
// Update Note  :

#define _PANEL_PRESET_MODE_FRAME_RATE            750

//////////////////
// General Info // 
//////////////////
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_L__,_S__,_M__,_3__,_1__,_5__,_D__,_P__,_0__,_2__


//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR//_PANEL_DPTX_LINK_HBR2
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_4
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE

//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_BOE

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
#define _PANEL_DH_TOTAL_MAX                     4000//2736                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                    2664// 2704                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1440                // Display Vertical Width
#define _PANEL_DV_END                           1446                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1490                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX                     5000//2347                // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1452                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      242                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX                  330//314                 // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  189                 // Mininum Pixel Clock in MHz


#define _PANEL_POWER_ON_T1                      20                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      450                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     300                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     30                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     700                // Panel Power Off T6 (ms)

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

#endif // End of #if(_PANEL_TYPE == _AUO_M270DAN02V0_LVDS_QHD)




