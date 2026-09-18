/********************************************************************************/
/*   Copyright (c) 2021 Realtek Semiconductor Corp. All rights reserved.        */
/*                                                                              */
/*   SPDX-License-Identifier: LicenseRef-Realtek-Proprietary                    */
/*                                                                              */
/*   This software component is confidential and proprietary to Realtek         */
/*   Semiconductor Corp. Disclosure, reproduction, redistribution, in whole     */
/*   or in part, of this work and its derivatives without express permission    */
/*   is prohibited.                                                             */
/********************************************************************************/

//----------------------------------------------------------------------------------------------------
// ID Code      : ScalerDP_SeptPhyInclude.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

//****************************************************************************
// LAYER DEFINITIONS / MACROS
//****************************************************************************

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************


//****************************************************************************
// VARIABLE EXTERN
//****************************************************************************


//****************************************************************************
// FUNCTION EXTERN
//****************************************************************************
#if(_DP_SUPPORT == _ON)
extern void ScalerDpFakeLinkTrainingSetting(BYTE ucInputPort);
extern EnumDpPowerState ScalerDpGetPowerStatus(BYTE ucInputPort);
extern void ScalerDpJudgeHPDToggle(EnumPowerAction enumPowerAction);
extern void ScalerDpLowPowerProc(void);
extern void ScalerDpResetProc(void);
extern void ScalerDpTimerEventProc(EnumScalerTimerEventID enumEventID);
extern void ScalerDpRxAuxPreIntHandler_EXINT0(void);
extern BYTE ScalerDpRxGetDpcdBitInfo(BYTE ucInputPort, BYTE ucDpcdAccessPortH, BYTE ucDpcdAccessPortM, BYTE ucDpcdAccessPortL, BYTE ucDpcdBit);
extern bit ScalerDpGetSrcMstEnable(BYTE ucInputPort);

#if(_DP_MST_SUPPORT == _ON)
extern void ScalerDpMstReset(EnumDPMSTPort enumRxMstPort);

#if(_DP_MST_AUTO_SEARCH_SUPPORT == _ON)
extern void ScalerDpMstReset_EXINT0(EnumDPMSTPort enumRxMstPort);
#endif
#endif

#if(_DP_HDCP14_REPEATER_BIT_DISABLE_FOR_TX_CLONE_OFF == _ON)
extern bit ScalerDpRxHdcp14RepeaterCapabilitySwitchProc(EnumSourceSearchPort enumInputPort, bit bEnable);
#endif

#if(_DP_HDR10_SUPPORT == _ON)
#if(_DP_HDR_VENDOR_SUPPORT != _DP_HDR_VENDOR_SUPPORT_NONE)
extern EnumDpHdrSupport ScalerDpRxHdrGetSupport(BYTE ucInputPort);
extern void ScalerDpRxHdrDpcdSetting(BYTE ucInputPort);
#endif
#endif

extern bit ScalerDpRxChPowerDownResetCheck(BYTE ucInputPort);
extern bit ScalerDpRxGetLinkTrainingPass(BYTE ucInputPort);
extern BYTE ScalerDpRxGetLTStatus(BYTE ucInputPort);
#endif

