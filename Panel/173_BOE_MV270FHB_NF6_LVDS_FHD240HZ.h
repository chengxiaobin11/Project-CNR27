#if(_PANEL_TYPE == _BOE_MV270FHB_NF6_LVDS_FHD240HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 167_HKC_SN238CS04_1_FHD165HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
//#if(Project_ID == ID_DX_2785E07_1P3H_AUO_M250HTN01_C_Sceptre_M27_20210122)

#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_V__,_2__,_7__,_0__,_F__,_H__,_B__,_SLINE__,_N__,_F__,_6__

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
#define _PANEL_MANUFACTURER                     _PANEL_SAMSUNG

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                   _PANEL_DISP_24_BIT

#define _PANEL_TYP_FRAME_RATE                   750//    600
#define _PANEL_MAX_FRAME_RATE           	    2420
#define _PANEL_MIN_FRAME_RATE                   480//630
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#if(_FREESYNC_SUPPORT == _ON)
#define _PANEL_FREESYNC_MAX_FRAME_RATE          2400
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480
#endif

///////////////
// Parameter //
///////////////

#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         1920                // Display Horizontal Width
#define _PANEL_DH_END                           1968                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                         2080//2100//      2120                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX          	        6000//2180//		3000                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                     2060//2080//2040                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1080                // Display Vertical Width
#define _PANEL_DV_END                           1086                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1110//      1110                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX                     10000//8000//5000//			4520               // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1105//         1098                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      282//   141                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX        		    600//440//420                // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN             		138//140               // Mininum Pixel Clock in MHz

#define _PANEL_POWER_ON_T1                      10//30                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      40//10                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      550//800                // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     110                // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     20//   120                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1050    

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

#endif 

