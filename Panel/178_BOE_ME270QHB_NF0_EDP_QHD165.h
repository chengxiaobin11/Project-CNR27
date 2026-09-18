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
#if(_PANEL_TYPE == _BOE_ME270QHB_NF0_EDP_QHD165)
//----------------------------------------------------------------------------------------------------
// ID Code      : _BOE_ME270QHB_NF0_EDP_QHD165.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE            1650

//////////////////
// General Info // 
//////////////////
#if(Project_ID ==ID_CHUANGWU_2795E18_2P2H_ME270QHM_NF0_EDP_QHD165HZ)	
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_E__,_2__,_7__,_0__,_Q__,_H__,_M__,_SLINE__,_N__,_F__,_0__
#else
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_E__,_2__,_7__,_0__,_Q__,_H__,_B__,_SLINE__,_N__,_F__,_0__
#endif

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR2
#if(Project_ID ==ID_CLP_2795E01_2P2H_SG2701G02_2_EDP_QHD165HZ)	
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_4//_PANEL_DPTX_LANE_NUMBER_4
#else
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_8//_PANEL_DPTX_LANE_NUMBER_4
#endif
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
#if(Project_ID ==ID_CLP_2795E01_2P2H_SG2701G02_2_EDP_QHD165HZ)	
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT
#else
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_30_BIT
#endif
//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#if(Project_ID ==ID_CHUANGWU_2795E18_2P2H_ME270QHM_NF0_EDP_QHD165HZ)	
#define _PANEL_TYP_FRAME_RATE                 1000
#define _PANEL_MAX_FRAME_RATE                 1440
#define _PANEL_MIN_FRAME_RATE                 480//610//480//  480

#if(_FREESYNC_SUPPORT == _ON)
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE         1440
#define _PANEL_FREESYNC_MIN_FRAME_RATE        	480
#endif
#else
#define _PANEL_TYP_FRAME_RATE                 1440
#define _PANEL_MAX_FRAME_RATE                 1660
#define _PANEL_MIN_FRAME_RATE                 1000//610//480//  480

#if(_FREESYNC_SUPPORT == _ON)
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE         1650
#define _PANEL_FREESYNC_MIN_FRAME_RATE        	480
#endif
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

#define _PANEL_DH_TOTAL              			2960//2800//2760//   2696//       2720
#define _PANEL_DH_TOTAL_MAX       				8184 // 2760//  2960//  
#define _PANEL_DH_TOTAL_MIN            			2960//2676//  2680//  2648

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1440
#define _PANEL_DV_END                           1446

#define _PANEL_DV_TOTAL                      	1585//1480
#define _PANEL_DV_TOTAL_MAX    					8100   //   8190//  4470// 8190
#define _PANEL_DV_TOTAL_MIN     				1500//1452//  1466//    1452// 1470

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                 		676//588//243
#define _PANEL_PIXEL_CLOCK_MAX          		774//690//   668
#define _PANEL_PIXEL_CLOCK_MIN        			403//180//   189


#define _PANEL_POWER_ON_T1                      20                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      600                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     350//250                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     10                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     800//1400                // Panel Power Off T6 (ms)


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
#endif // End of #if(_PANEL_TYPE == _BOE_ME270QHB_NF0_EDP_QHD165)

