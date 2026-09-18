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
#if(_PANEL_TYPE == _AUO_M250HAN01_7_EDP_FHD240HZ)
//----------------------------------------------------------------------------------------------------
// ID Code      : 91_AUO_M270HAN02_2_165HZ).h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(Project_ID == ID_XHS_HK2795E04_1P2H1U_AUO_M250HTN01_9_20210226)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_5__,_0__,_H__,_T__,_N__,_1__,_DOT__,_9__
#elif(Project_ID == ID_GDL_HK2795E04_1P2H1U_AUO_M250HTN01_7_20210917)
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_5__,_0__,_H__,_A__,_N__,_0__,_1__,_DOT__,_7__

#else
#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_5__,_0__,_H__,_A__,_N__,_0__,_1__
#endif
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE            2400

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx  Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_8
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE
//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_LGD

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------

#if(Project_ID == ID_XHS_HK2795E04_1P2H1U_AUO_M250HAN01_3_20200921)||(Project_ID == ID_XHS_HK2795E04_1P2H1U_AUO_M250HTN01_9_20210226)

#define _PANEL_TYP_FRAME_RATE                   2000
#define _PANEL_MAX_FRAME_RATE          		    3010//2410 
#define _PANEL_MIN_FRAME_RATE                   610


#define _PANEL_FREESYNC_MAX_FRAME_RATE          2800//2400
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480


///////////////
// Parameter //
///////////////

//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2480
#define _PANEL_DH_TOTAL_MAX                     2720
#define _PANEL_DH_TOTAL_MIN                     2000 // 2440 

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX                     8200//6360
#define _PANEL_DV_TOTAL_MIN                     1098//1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      558
#define _PANEL_PIXEL_CLOCK_MAX                  670
#define _PANEL_PIXEL_CLOCK_MIN                  120	


#define _PANEL_POWER_ON_T1                      100
#define _PANEL_POWER_ON_T2                      30
#define _PANEL_POWER_ON_T3                      550

#define _PANEL_POWER_OFF_T4                     100
#define _PANEL_POWER_OFF_T5                     20
#define _PANEL_POWER_OFF_T6                     1100


/////////////////////////////////////////
#else
#define _PANEL_TYP_FRAME_RATE                   2000
#define _PANEL_MAX_FRAME_RATE          		    2820//2410 
#define _PANEL_MIN_FRAME_RATE                   480//610


#define _PANEL_FREESYNC_MAX_FRAME_RATE          2800//2400
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480


///////////////
// Parameter //
///////////////

//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#define _PANEL_DH_TOTAL                         2480
#define _PANEL_DH_TOTAL_MAX                     5000//2720
#define _PANEL_DH_TOTAL_MIN                     2000 // 2440 

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1125
#define _PANEL_DV_TOTAL_MAX                     9000//6360
#define _PANEL_DV_TOTAL_MIN                     1098//1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      558
#define _PANEL_PIXEL_CLOCK_MAX                  700//670
#define _PANEL_PIXEL_CLOCK_MIN                  250//120	


#define _PANEL_POWER_ON_T1                      100
#define _PANEL_POWER_ON_T2                      30
#define _PANEL_POWER_ON_T3                      550

#define _PANEL_POWER_OFF_T4                     100
#define _PANEL_POWER_OFF_T5                     20
#define _PANEL_POWER_OFF_T6                     1100
#endif

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


