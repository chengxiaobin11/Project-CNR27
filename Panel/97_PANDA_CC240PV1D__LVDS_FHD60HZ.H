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

#if(_PANEL_TYPE == _PANDA_CC240PV1D__LVDS_FHD60HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 97_PANDA_CC240PV1D__LVDS_FHD60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_PANDA_CC240LV2D_MF23BB30__20201228)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_C__,_C__,_2__,_4__,_0__,_L__,_V__,_2__,_D__
#elif(Project_ID == ID_HUIXIONG_HK2513E02_1V1H__CC240PV1D_B245H__20210330)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_4__,_0__,_H__,_T__,_N__,_0__,_1__,_DOT__,_2__
#elif(Project_ID == ID_DX_2513E02_1A1H_M270HAN01_0_FHD75HZ_RUSSIAN_LOGO_HPR_20221201)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_H__,_A__,_N__,_0__,_1__,_DOT__,_0__
#elif(Project_ID == ID_DX_2513E02_1A1H_SG2381B01_1_FHD75HZ_ENGLISH_LOGO_EKO_20221130)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_3__,_8__,_1__,_B__,_0__,_1__,_SLINE__,_1__
#elif(Project_ID == ID_DX_2513E02_1A1H_P320HVN06_1_FHD75HZ_ENGLISH_LOGO_AAA_20221220)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_P__,_3__,_2__,_0__,_H__,_V__,_N__,_0__,_6__,_SLINE__,_1__
#elif(Project_ID == ID_DX_2513E02_1A1H_P320HVN061_FHD75HZ_RUSSIAN_LOGO_DEPO_20230525)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_P__,_3__,_2__,_0__,_H__,_V__,_N__,_0__,_6__,_SLINE__,_1__
#elif(Project_ID == ID_DX_2513E02_1A1H_T320HVN05D_FHD75HZ_ENGLISH_LOGO_LOGO_amazon_basics_20240319)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_T__,_3__,_2__,_0__,_H__,_V__,_N__,_0__,_5__,_SLINE__,_D__
#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_C__,_C__,_2__,_4__,_0__,_P__,_V__,_1__,_D__
#endif

//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE            750

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
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_1

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
#define _PANEL_TYP_FRAME_RATE                   640
#define _PANEL_MAX_FRAME_RATE                   1600//660
#define _PANEL_MIN_FRAME_RATE                   480


///////////////
// Parameter //
///////////////
//#define _IMD_DOMAIN_ULTRA_HIGH_SPEED_SUPPORT                    _ON

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         2560//1280//1440//2560
#define _PANEL_DH_END                           2608//1328//1488//2608

#define _PANEL_DH_TOTAL                         2680//2720//1880//1520//1700//2720
#define _PANEL_DH_TOTAL_MAX                     2784
#define _PANEL_DH_TOTAL_MIN                     2680//1800//1500//1600//2680

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1440//1024//1440
#define _PANEL_DV_END                           1446//1030//1446

#define _PANEL_DV_TOTAL                         1481//1050//1481
#define _PANEL_DV_TOTAL_MAX                     12000//8000//3000
#define _PANEL_DV_TOTAL_MIN                     1460//1044//1460

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      180//246
#define _PANEL_PIXEL_CLOCK_MAX                  800//400//300//320//400
#define _PANEL_PIXEL_CLOCK_MIN                  30//160

#define _PANEL_POWER_ON_T1                      50
#define _PANEL_POWER_ON_T2                      80
#define _PANEL_POWER_ON_T3                      400

#define _PANEL_POWER_OFF_T4                     250
#define _PANEL_POWER_OFF_T5                     20
#define _PANEL_POWER_OFF_T6                     800




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
