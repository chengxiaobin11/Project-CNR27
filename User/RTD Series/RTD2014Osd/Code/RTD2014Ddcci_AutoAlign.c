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

#define __RTD2011_ALIGN__

#include "UserCommonInclude.h"
extern void ScalerMcuDdcciReleaseScl(void);

#if(_OSD_TYPE == _REALTEK_2014_OSD)
#if  _Def_AutoAlign_Type==1
//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************
#if 0//_DEF_FAC_UpData
extern void UpdataFactoryCT(void);
#endif

bit ubAutoAlign=_FALSE;
void CAlignSendAckCmd(BYTE Status)
{

	if(Status == _SUCCESS)
	{
		g_pucDdcciTxBuf[0] = 0x6E;
		g_pucDdcciTxBuf[1] = 0x82;	
		g_pucDdcciTxBuf[2] = 0x00;	
		g_pucDdcciTxBuf[3] = 0x4f;
		g_pucDdcciTxBuf[4] =0xF3;
	}
	else
	{
		g_pucDdcciTxBuf[0] = 0x6E;
		g_pucDdcciTxBuf[1] = 0x82;	
		g_pucDdcciTxBuf[2] = 0x03;	
		g_pucDdcciTxBuf[3] = 0x58;
		g_pucDdcciTxBuf[4] =0xE7;

	}



    ScalerMcuDdcciSendData(g_pucDdcciTxBuf);
	ScalerMcuDdcciReleaseScl();

}

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************

void RTDDdcciAutoAlignPro(void);
//--------------------------------------------------
// Description  : 
// Input Value  : None
// Output Value : None
//--------------------------------------------------

bit IS_OSD_RESET(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x01));
}

bit IS_AUTO_COLOR(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x02));
}
/********************************************************************/
bit IS_TEST_LIGHTMAX(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x03));
}

bit IS_LOAD_RGB(void)
{
	return ((g_pucDdcciRxBuf[4]==0xff)&&(g_pucDdcciRxBuf[5]==0x04));
}
bit IS_ALIGN_FINISH(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x05));
}
bit IS_TIME_CLEAR(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x06));
}
bit IS_CHANGE_LANGUAGE(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x07));
}

bit IS_START(void)
{
	return ((g_pucDdcciRxBuf[4]==0xff)&&(g_pucDdcciRxBuf[5]==0xFF));
}

/*******************************************************************/

bit IS_RGB_ADJ(void)
{
	return ((g_pucDdcciRxBuf[4]==0x20)&&(g_pucDdcciRxBuf[5]==0x01));
}

/*******************************************************************/
bit IS_SAVE_9300(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x00));
}

bit IS_SAVE_7500(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x01));
}

bit IS_SAVE_6500(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x02));
}

bit IS_SAVE_5800(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x03));
}

bit IS_SAVE_sRGB(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x04));
}

bit IS_SAVE_USER(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x05));
}


//*****************************************************

//--------------------------------------------------
// Description  : RTDDdccireply
// Input Value  : None
// Output Value : None
//--------------------------------------------------
extern void RTDDdccireply(BYTE Flag);
//BYTE xdata DDC1[256]={0};
WORD edid_cont=0;
WORD edid_pointer=0;

//--------------------------------------------------
// Description  : 
// Input Value  : None
// Output Value : None
//--------------------------------------------------
//3.RTDDdcciAutoAlignPro函数里，所有调用的RTDDdccireply函数务必挪到最后
void RTDDdcciAutoAlignPro(void)
{
  /************************FUNC***********************************/
  
  if(IS_TIME_CLEAR())//清除时间
  {
	  SET_PANEL_TIME_HOUR(0);
	  SET_PANEL_TIME_MIN(0);
	  SET_PANEL_BURN_TIME_HOUR(0);
	  SET_PANEL_BURN_TIME_MIN(0);
	  RTDNVRamSavePanelUsedTimeData();
	  CAlignSendAckCmd(_SUCCESS); 
  } 
  if(IS_CHANGE_LANGUAGE())//未实装
  {
	SET_OSD_LANGUAGE(g_pucDdcciRxBuf[6]);
	SET_OSD_LANGUAGE_INIT(g_pucDdcciRxBuf[6]);
	RTDNVRamSaveOSDData();
	RTDDdccireply(_TRUE);
  }
	if(IS_OSD_RESET())
	{
	
		OsdDispOsdReset();
	    RTDDdccireply(_TRUE);
	}

	if(IS_AUTO_COLOR())
	{
	
#if(_VGA_SUPPORT != _ON)
		RTDDdccireply(0X02);
		return;
#endif
		if(SysSourceGetSourceType() != _SOURCE_VGA)
		{	
			RTDDdccireply(_FALSE);
		}
		else
		{
		
#if(_VGA_SUPPORT == _ON)	
            OsdDisplayAutoBalanceProc();
			RTDDdccireply(_TRUE);
#endif
		}
	}
   /****************************CT**********************************/
   
   if(IS_TEST_LIGHTMAX())
   {
   
	   if(ScalerTimerSearchActiveTimerEvent(_USER_TIMER_EVENT_BUININ_MSG))
	   {
		   ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_BUININ_MSG);
		   OsdFuncDisableOsd();
		   ScalerDDomainPatternGenAdjustColor(255,255,255);
		   ScalerDDomainPatternGenEnable(_ENABLE);
		   ScalerDDomainBackgroundEnable(_DISABLE);
	   
	   }
	   else
	   {
		   OsdFuncDisableOsd();
	   }
	   
	   SET_COLOR_TEMP_TYPE_USER_R(128);
	   SET_COLOR_TEMP_TYPE_USER_G(128);
	   SET_COLOR_TEMP_TYPE_USER_B(128);
	   UserAdjustContrast(100);
	   UserAdjustBacklight(100);
       RTDDdccireply(_TRUE);
   }

   if(IS_START())
   {
   	   
	   RTDNVRamRestoreBriCon();
	   RTDNVRamRestoreBacklight();
	   UserAdjustBacklight(GET_OSD_BACKLIGHT());
	   UserAdjustBrightness(GET_OSD_BRIGHTNESS());	   
	   RTDDdccireply(_TRUE);
	   
   }
   
   if(IS_LOAD_RGB())
   {
   
	   SET_COLOR_TEMP_TYPE_USER_R(g_pucDdcciRxBuf[6]);
	   SET_COLOR_TEMP_TYPE_USER_G(g_pucDdcciRxBuf[7]);
	   SET_COLOR_TEMP_TYPE_USER_B(g_pucDdcciRxBuf[8]); 
	   UserAdjustContrast(GET_OSD_CONTRAST());
       RTDDdccireply(_TRUE);
   }
   

   /************************************R G B**************************/     
	if(IS_RGB_ADJ())
	{
	
		SET_COLOR_TEMP_TYPE_USER_R(g_pucDdcciRxBuf[6]);
		SET_COLOR_TEMP_TYPE_USER_G(g_pucDdcciRxBuf[7]);
		SET_COLOR_TEMP_TYPE_USER_B(g_pucDdcciRxBuf[8]);
		
		UserAdjustContrast(GET_OSD_CONTRAST());
	    RTDDdccireply(_TRUE);
	}
		
	
	/***********************************SAVE****************************/
	 if(IS_SAVE_9300())
	 {
	 
		 SET_COLOR_TEMP_TYPE(_CT_9300);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	     RTDDdccireply(_TRUE);
	 }
	 if(IS_SAVE_7500())
	 {
	 
		 SET_COLOR_TEMP_TYPE(_CT_7500);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	     RTDDdccireply(_TRUE);
	 }
	 if(IS_SAVE_6500())
	 {
	 
		 SET_COLOR_TEMP_TYPE(_CT_6500);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
		 RTDDdccireply(_TRUE);
	 }
	 if(IS_SAVE_5800())
	 {
		 SET_COLOR_TEMP_TYPE(_CT_5800);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
		 RTDDdccireply(_TRUE);
	 }
	 if(IS_SAVE_sRGB())
	 {
		 SET_COLOR_TEMP_TYPE(_CT_SRGB);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	     RTDDdccireply(_TRUE);
	 }
	 if(IS_SAVE_USER())
	 {
		 SET_COLOR_TEMP_TYPE(_CT_USER);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	     RTDDdccireply(_TRUE);
 	 }
	 if(IS_TIME_CLEAR())
	 {
		 RTDFlashRestorePanelUsedTimeData();
 	 }
	/* if(IS_CHANGE_LANGUAGE())
	 {
		 SET_OSD_LANGUAGE(g_pucDdcciRxBuf[6]);
		 SET_OSD_LANGUAGE_(g_pucDdcciRxBuf[6]);
 	 }*/
	 if(IS_ALIGN_FINISH())
	 {
	 
		SET_COLOR_TEMP_TYPE(_DEF_COLORTEMP);  // 20211019
		RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
		RTDNVRamSaveOSDData();
		UserAdjustContrast(GET_OSD_CONTRAST());

		if(GET_OSD_BURNING_MODE() && SysModeGetModeState() == _MODE_STATUS_NOSIGNAL)
		{
			ScalerTimerActiveTimerEvent(SEC(0.01),_USER_TIMER_EVENT_BUININ_MSG);
			OsdFuncEnableOsd();
		}
		
#if 0//_DEF_FAC_UpData
		UpdataFactoryCT();
#endif
	    RTDDdccireply(_TRUE);
     }


	 
}

#else
//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************


//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************

void RTDDdcciAutoAlignPro(void);
//--------------------------------------------------
// Description  : 
// Input Value  : None
// Output Value : None
//--------------------------------------------------

bit IS_OSD_RESET(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x01));
}

bit IS_AUTO_COLOR(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x02));
}
/********************************************************************/
bit IS_TEST_LIGHTMAX(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x03));
}

bit IS_LOAD_RGB(void)
{
	return ((g_pucDdcciRxBuf[4]==0xff)&&(g_pucDdcciRxBuf[5]==0x04));
}
bit IS_ALIGN_FINISH(void)
{
	return ((g_pucDdcciRxBuf[4]==0xFF)&&(g_pucDdcciRxBuf[5]==0x05));
}

bit IS_START(void)
{
	return ((g_pucDdcciRxBuf[4]==0xff)&&(g_pucDdcciRxBuf[5]==0xFF));
}

/*******************************************************************/

bit IS_RGB_ADJ(void)
{
	return ((g_pucDdcciRxBuf[4]==0x20)&&(g_pucDdcciRxBuf[5]==0x01));
}

/*******************************************************************/
bit IS_SAVE_9300(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x00));
}

bit IS_SAVE_7500(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x01));
}

bit IS_SAVE_6500(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x02));
}

bit IS_SAVE_5800(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x03));
}

bit IS_SAVE_sRGB(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x04));
}

bit IS_SAVE_USER(void)
{
	return ((g_pucDdcciRxBuf[4]==0x30)&&(g_pucDdcciRxBuf[5]==0x05));
}

//*****************************************************

//--------------------------------------------------
// Description  : RTDDdccireply
// Input Value  : None
// Output Value : None
//--------------------------------------------------
extern void RTDDdccireply(BYTE Flag);

//--------------------------------------------------
// Description  : 
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDDdcciAutoAlignPro(void)
{
  /************************FUNC***********************************/
	if(IS_OSD_RESET())
	{
	
	    RTDDdccireply(_TRUE);
		OsdDispOsdReset();
	}

	if(IS_AUTO_COLOR())
	{
	
#if(_VGA_SUPPORT != _ON)
		RTDDdccireply(0X02);
		return;
#endif
		if(SysSourceGetSourceType() != _SOURCE_VGA)
		{	
			RTDDdccireply(_FALSE);
		}
		else
		{
		
#if(_VGA_SUPPORT == _ON)	
			RTDDdccireply(_TRUE);
            OsdDisplayAutoBalanceProc();
#endif
		}
	}
   /****************************CT**********************************/
   
   if(IS_TEST_LIGHTMAX())
   {
   
       RTDDdccireply(_TRUE);
	   RTDFactoryOsdFuncDisableOsd();
	   SET_COLOR_TEMP_TYPE_USER_R(128);
	   SET_COLOR_TEMP_TYPE_USER_G(128);
	   SET_COLOR_TEMP_TYPE_USER_B(128);
	   UserAdjustContrast(100);
	   UserAdjustBacklight(100);
   }

   if(IS_START())
   {
	   RTDDdccireply(_TRUE);
   	   
	   RTDNVRamRestoreBriCon();
	   RTDNVRamRestoreBacklight();
	   UserAdjustBacklight(GET_OSD_BACKLIGHT());
	   UserAdjustBrightness(GET_OSD_BRIGHTNESS());
	   
   }
   
   if(IS_LOAD_RGB())
   {
   
       RTDDdccireply(_TRUE);
	   SET_COLOR_TEMP_TYPE_USER_R(g_pucDdcciRxBuf[6]);
	   SET_COLOR_TEMP_TYPE_USER_G(g_pucDdcciRxBuf[7]);
	   SET_COLOR_TEMP_TYPE_USER_B(g_pucDdcciRxBuf[8]); 
	   UserAdjustContrast(GET_OSD_CONTRAST());
   }
   

   /************************************R G B**************************/     
	if(IS_RGB_ADJ())
	{
	
	    RTDDdccireply(_SUCCESS);
		SET_COLOR_TEMP_TYPE_USER_R(g_pucDdcciRxBuf[6]);
		SET_COLOR_TEMP_TYPE_USER_G(g_pucDdcciRxBuf[7]);
		SET_COLOR_TEMP_TYPE_USER_B(g_pucDdcciRxBuf[8]);
		
		UserAdjustContrast(GET_OSD_CONTRAST());
	}
		
	
	/***********************************SAVE****************************/
	 if(IS_SAVE_9300())
	 {
	 
	     RTDDdccireply(_TRUE);
		 SET_COLOR_TEMP_TYPE(_CT_9300);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	 }
	 if(IS_SAVE_7500())
	 {
	 
	     RTDDdccireply(_TRUE);
		 SET_COLOR_TEMP_TYPE(_CT_7500);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	 }
	 if(IS_SAVE_6500())
	 {
	 
	     RTDDdccireply(_TRUE);
		 //spt
		 SET_COLOR_TEMP_TYPE(_CT_6500);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	 }
	 if(IS_SAVE_5800())
	 {
	 	//spt
		 SET_COLOR_TEMP_TYPE(_CT_5800);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
		 RTDDdccireply(_TRUE);
	 }
	 if(IS_SAVE_sRGB())
	 {
	 
	     RTDDdccireply(_TRUE);
		 SET_COLOR_TEMP_TYPE(_CT_SRGB);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
	 }
	 if(IS_SAVE_USER())
	 {
	 
	     RTDDdccireply(_TRUE);
		 SET_COLOR_TEMP_TYPE(_CT_USER);
		 RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
 	}
	 if(IS_ALIGN_FINISH())
	 {
	 
	    RTDDdccireply(_TRUE);
		SET_COLOR_TEMP_TYPE(_DEF_COLORTEMP);  // 20211019
		RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
		RTDNVRamSaveOSDData();
 	}


	 
}
#endif //end of 


#endif


