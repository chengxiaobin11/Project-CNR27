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

#if(_PANEL_TYPE == _INN_M270HCA_L7B_LVDS_FHD_165HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 44_AUO_T215HVN05_1_LVDS_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#if (Project_ID ==ID_HHT_HK2556E02_1P1H_INN_M270HCA_P7B_FHD165HZ_20210127 )
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_H__,_C__,_A__,_P__,_7__,_B__
#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_H__,_C__,_A__,_L__,_7__,_B__
#endif
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE           1650

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#define _LVDS_OUTPUT_PORT                       _LVDS_4_PORT//_LVDS_2_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#if(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270HCA_P7B_FHD165HZ_20210127)||(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270HCA_L7B_FHD165HZ_20201228)\
    ||(Project_ID == ID_HHT_HK2556E06_1P1H_INN_M270HCA_L7B_FHD165HZ_20210222)\
    ||(Project_ID == ID_CS_HK2785E06_1P1H1U_CSOT_SG2701B01_3_165HZ_20210303)\
    ||(Project_ID == ID_JX_HK2556E02_1P1H_M270HCA_L7B_LVDS_FHD165HZ_20211012)\
    ||(Project_ID    ==  ID_CS_2556)
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_0
#else
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_1
#endif
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
#define _PANEL_TYP_FRAME_RATE                   750
#define _PANEL_MAX_FRAME_RATE                  2440//1660
#define _PANEL_MIN_FRAME_RATE                480//590//   480


#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          2400//1650//750
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

#define _PANEL_DH_TOTAL                   2120// 2120// 2176//    2100
#define _PANEL_DH_TOTAL_MAX                  14000//4000//   3356
#define _PANEL_DH_TOTAL_MIN                    2080//2000// 2000//2120

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1111
#define _PANEL_DV_TOTAL_MAX                    8000// 3365//1836
#define _PANEL_DV_TOTAL_MIN                     1098//1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                     141// 148
#define _PANEL_PIXEL_CLOCK_MAX                600//400// 190//   180
#define _PANEL_PIXEL_CLOCK_MIN                 110// 106//110


#define _PANEL_POWER_ON_T1                      20//10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     300//210
#define _PANEL_POWER_OFF_T5               		 25
#define _PANEL_POWER_OFF_T6                     1500


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
#define _FRAME_SYNC_MARGIN               40//       20

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
