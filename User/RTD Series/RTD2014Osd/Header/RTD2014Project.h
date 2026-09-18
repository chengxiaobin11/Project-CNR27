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

//----------------------------------------------------------------------------------------------------
// ID Code      : RTD2014Project.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define _OSD_3D_FUNCTION                            _OFF
#define _FACTORY_ONE_PIECE_MARK_SUPPORT             _OFF
#define _OSD_FONT_MODE_FORCE_256_511                _ON

//-------------------------------------------------
// Define OSD Rotate Type
//-------------------------------------------------
#if 0//(_PCB_TYPE==_RL6463__128PIN__HKMRT2525E04__1A1P1H__LVDS)
#define _OSD_ROTATE_FUNCTION                        _OSD_ROTATE_OFF
#else
#define _OSD_ROTATE_FUNCTION                        _OSD_ROTATE_HARDWARE
#endif
//--------------------------------------------------
// Definitions of IR Protocal
//--------------------------------------------------
#define _IR_NEC_DTV328                              0
#define _IR_SONY_B102P                              1
#define _IR_PHILIPS_RC6                             2
//HHT 
#define _IR_HHT_NEC                             	3
#define _IR_HHT_DZ_X5_147                           4

//SW
#define _IR_SW_LGTV                           		5
//OTHER
#define _IR_TAISHUO_NEC                           	6
#define _IR_MXDZ_NEC                           		7
#define _IR_SQY_YS14C								8
#define _IR_SQY_XHK_0827							9


#define _IR_PROTOCAL                                _DEF_IR_PROTOCAL

//--------------------------------------------------
// Definitions of DP extra infomation for debug , DP Support must set ON
//--------------------------------------------------
#define _DP_DEBUG_MSG                              _OFF


//--------------------------------------------------
// Definitions of Local Dimming OSD Menu
//--------------------------------------------------
#if (_LOCAL_DIMMING_SUPPORT == _ON)
#define _OSD_LOCAL_DIMMING_SUPPORT                 _ON
#else
#define _OSD_LOCAL_DIMMING_SUPPORT                 _OFF
#endif

