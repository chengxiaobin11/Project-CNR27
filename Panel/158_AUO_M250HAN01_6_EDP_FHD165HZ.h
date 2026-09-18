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
#if(_PANEL_TYPE == _AUO_M250HAN01_6_EDP_FHD165HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 91_AUO_M270HAN02_2_165HZ).h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_20210913)||(Project_ID == ID_JINGBAO_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD1644HZ_20211122)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_A__,_U__,_O__,_M__,_2__,_7__,_0__,_H__,_A__,_N__,_0__,_3__,_DOT__,_2__
#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_202109131)||(Project_ID == ID_XHS_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_20220613)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_L__,_M__,_2__,_7__,_0__,_W__,_F__,_9__,_SLINE__,_S__,_S__,_C__,_1__

#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_A__,_U__,_O__,_M__,_2__,_5__,_0__,_H__,_A__,_N__,_0__,_1__,_DOT__,_6__
#endif
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE            1650

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx  Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_4
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE
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
#define _PANEL_MAX_FRAME_RATE          		    1660 
#define _PANEL_MIN_FRAME_RATE                   300


#define _PANEL_FREESYNC_MAX_FRAME_RATE          1650
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480


///////////////
// Parameter //
///////////////

//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2200
#define _PANEL_DH_TOTAL_MAX                     4000//2320
#define _PANEL_DH_TOTAL_MIN                     1984 

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX                     8000
#define _PANEL_DV_TOTAL_MIN                     1086//1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      297
#define _PANEL_PIXEL_CLOCK_MAX                  400
#define _PANEL_PIXEL_CLOCK_MIN                  136	


#define _PANEL_POWER_ON_T1                      30
#define _PANEL_POWER_ON_T2                      100
#define _PANEL_POWER_ON_T3                      800

#define _PANEL_POWER_OFF_T4                     130
#define _PANEL_POWER_OFF_T5                     20
#define _PANEL_POWER_OFF_T6                     1100


/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 300)

//--------------------------------------------------
// Definitions for Frame Sync Margin (Unit: 0.1Hz)
//--------------------------------------------------
#define _FRAME_SYNC_MARGIN                      20


///////////////////////////
// Color Characteristics //
///////////////////////////



/////////////////////////
// Color Default Table //
/////////////////////////

//--------------------------------------------------
// Color Default Value
//--------------------------------------------------
#include "./RTDColorDefaultTable/ColorTableInclude.h"

#endif // End of #if(_PANEL_TYPE == 91_AUO_M270HAN02_2_165HZ))


