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
// ID Code      : ScalerPLLInterface.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
//****************************************************************************
// INTERFACE DEFINITIONS / MACROS
//****************************************************************************


//****************************************************************************
// INTERFACE VARIABLE DECLARATIONS
//****************************************************************************


//****************************************************************************
// INTERFACE FUNCTIONS
//****************************************************************************
extern void ScalerPLLM2PLLPower(BYTE ucOn);
extern void ScalerPLLSetDPLLSSC(BYTE ucDclkSpreadSpeed, BYTE ucSpreadRange);
extern bit ScalerAPLLFastLockAdjust(WORD usCurrHTotal);
extern void ScalerPLLSetPhase(BYTE ucPhase, WORD usVfreq);

#if(_VGA_SUPPORT == _ON)
#if(_VGA_APLL_HIGH_GAIN_MODE_SUPPORT == _ON)
extern void ScalerPLLSetApllHighGainMode(bit bEnable);
#endif
#endif

#if((_MEMORY_TYPE_CONFIG == _MEMORY_DDR3) && (_DDR3_MULTIPHASE_EXIST == _ON))
extern void ScalerPLLGetDDR3PhaseData(StructDDR3PhaseInfo *pstDdr3PhaseData);
#endif
