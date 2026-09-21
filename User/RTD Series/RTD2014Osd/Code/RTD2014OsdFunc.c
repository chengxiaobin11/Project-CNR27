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
// ID Code      : RTD2014OsdFunc.c No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_OSDFUNC__

#include "UserCommonInclude.h"

#if(_OSD_TYPE == _REALTEK_2014_OSD)

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************

//****************************************************************************
// CODE TABLES
//****************************************************************************

//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************
WORD g_usFontSelectStart;
WORD g_usFontTableStart;
BYTE g_ucOsdWidth;
BYTE g_ucOsdHeight;
BYTE g_ucOsdWidthB;
BYTE g_ucOsdHeightB;
BYTE g_ucFontPointer0 = _OSD_PAGE_0_START;
BYTE g_ucFontPointer1 = _OSD_PAGE_1_START;
BYTE g_ucFontPointer2 = _OSD_PAGE_2_START;
#if(_LED_EFFECT)
extern BYTE led_start;
#endif

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void OsdFuncApplyMap(BYTE ucWidth, BYTE ucHeight, BYTE ucColor);
void OsdFuncSetPosition(EnumOsdPositionType enumOsdPositionType, WORD usX, WORD usY);
void OsdFuncTransparency(BYTE ucTrans);
void OsdFuncBlending(BYTE ucType);
void OsdFuncCloseWindow(EnumOsdWindowsType enumWinIndex);
void OsdFuncDisableOsd(void);
void OsdFuncEnableOsd(void);
void OsdFuncSet2BitIconOffset(WORD ucOffset);
void OsdFuncSet4BitIconOffset(WORD ucOffset);
void OsdFuncClearOsd(BYTE ucRow, BYTE ucCol, BYTE ucWidth, BYTE ucHeight);
#if(_PCM_FUNCTION == _ON)
void OsdFuncColorPcmAdjust(void);
#endif
void OsdFuncSetOsdItemFlag(void);

#if(_FREEZE_SUPPORT == _ON)
bit OsdFuncCheckFreezeDisable(void);
#endif

#if(_HDMI_MULTI_EDID_SUPPORT == _ON)
BYTE OsdFuncGetHdmiPortVersion(EnumSourceSearchPort enumSearchPort);
void OsdFuncSetHdmiPortVersion(EnumSourceSearchPort enumSearchPort,BYTE ucValue);
#endif
BYTE OsdFuncGetOsdItemFlag(void);
void OsdFuncAdj(void);
void Osd3thInterfaceAdjust(void);
void OsdFuncAdjHotKey(void);
void OsdHotKeyFuncSpacialProc(void);
void OsdFuncChangeColor1Bit(BYTE ucRow, BYTE ucCol, BYTE ucWidth, BYTE ucHeight, BYTE ucColor, BYTE ucFontSelectFrom);
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)||(Project_ID == ID_CW_HK2556E18_2T1H_SN238CS041_LVDS_FDH60HZ_20230522)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
			
extern BYTE xdata g_SouceSelect;
#endif
extern void OsdFuncOsdToEnergyMsg();

//****************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description	:
// Input Value	: None
// Output Value : None
//--------------------------------------------------
void OsdHotKeyFuncSpacialProc(void)
{
	switch(OSD_SubMenuCur)
	{ 
		case _MENU_FUN_FREESYNC:
			
			if((GET_KEYMESSAGE() == _MENU_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{
				#if(_FREESYNC_SUPPORT == _ON)
					UserCommonInterfaceFreeSyncSupportSwitch();
				#endif	
			}
			else if(GET_KEYMESSAGE() == _EXIT_KEY_MESSAGE)
			{
				SET_OSD_FREE_SYNC_STATUS(g_usBackupValue);
			}
			
				break;
	
		case _MENU_FUN_SIGNAL:	
			
			if((GET_KEYMESSAGE() == _MENU_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)||(Project_ID == ID_CW_HK2556E18_2T1H_SN238CS041_LVDS_FDH60HZ_20230522)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
			
				g_SouceSelect = 0;
#endif
				SET_FORCE_POW_SAV_STATUS(_FALSE);
				SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
		
	#if(_SOURCE_AUTO_ON)
				if(GET_OSD_INPUT_PORT_OSD_ITEM() == _OSD_INPUT_AUTO)
				{
					SysSourceSetScanType(_SOURCE_SWITCH_AUTO_IN_GROUP);
					
					if(UserCommonNVRamGetSystemData(_SOURCE_SCAN_TYPE) != SysSourceGetScanType())
					{
						UserCommonNVRamSetSystemData(_SOURCE_SCAN_TYPE, SysSourceGetScanType());
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG);
					}
				}
				else
				{		
					SysSourceSwitchInputPort(OsdFuncGetOsdItemFlag());
					SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
					if((UserCommonNVRamGetSystemData(_SEARCH_PORT) != SysSourceGetInputPort()) ||
					   (UserCommonNVRamGetSystemData(_SOURCE_SCAN_TYPE) != SysSourceGetScanType()))
					{
						UserCommonNVRamSetSystemData(_SEARCH_PORT, SysSourceGetInputPort());
						UserCommonNVRamSetSystemData(_SOURCE_SCAN_TYPE, SysSourceGetScanType());
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG);
					}
				}
	#else					
				SysSourceSwitchInputPort(OsdFuncGetOsdItemFlag());
			#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)
				if(GET_OSD_BURNING_MODE())
					SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
				else
			#endif	
				SysSourceSetScanType(_SOURCE_SWITCH_AUTO_IN_GROUP);
				if((UserCommonNVRamGetSystemData(_SEARCH_PORT) != SysSourceGetInputPort()) ||
				   (UserCommonNVRamGetSystemData(_SOURCE_SCAN_TYPE) != SysSourceGetScanType()))
				{
					UserCommonNVRamSetSystemData(_SEARCH_PORT, SysSourceGetInputPort());
					UserCommonNVRamSetSystemData(_SOURCE_SCAN_TYPE, SysSourceGetScanType());
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG);
				}						
	#endif				
			}
			else
			{
				
				SET_OSD_INPUT_PORT_OSD_ITEM(g_usBackupValue);
			}
				break;
				
#if(_VGA_SUPPORT == _ON)

		case _MENU_FUN_AUTO_ADJUST:
			if(GET_KEYMESSAGE() == _MENU_KEY_MESSAGE)
			{
				if((SysModeGetModeState() == _MODE_STATUS_ACTIVE)&& (SysSourceGetSourceType() == _SOURCE_VGA))
				{
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_DO_AUTO_CONFIG_MSG);
				}
			}
			break;
		
		case _MENU_FUN_AUTO_COLOR:
			if(GET_KEYMESSAGE() == _MENU_KEY_MESSAGE)
			{
				if((SysModeGetModeState() == _MODE_STATUS_ACTIVE)&& (SysSourceGetSourceType() == _SOURCE_VGA))
				{
					OsdDisplayAutoBalanceProc();
				}
			}
			break;	
#endif
		case _MENU_FUN_RESET:
		
			if(GET_KEYMESSAGE() == _MENU_KEY_MESSAGE)
			{
				OsdDispOsdReset();
			}
			break;

		case _MENU_FUN_LANGUAGE:		
			
			if(GET_KEYMESSAGE() == _EXIT_KEY_MESSAGE)
			{		
				SET_OSD_LANGUAGE(g_usBackupValue);
			}
			break;
	}
	
	SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
}

#if(_DEF_DX_LED_MODE3)
void DaoXing_LedModeAdjustrRGB(BYTE ucstate)
{
	if(ucstate == 1)
	{
		Led_SetLedSDA();
		ScalerTimerDelayXms(4);
		Led_ClrLedSCL();

	}
	else if(ucstate == 2)
	{
		Led_SetLedSDA();
		ScalerTimerDelayXms(4);
		Led_SetLedSCL();
	}
	else if(ucstate == 3)
	{
		Led_ClrLedSDA();
		ScalerTimerDelayXms(4);
		Led_SetLedSCL();
	}
	else
	{
		Led_ClrLedSCL();
		ScalerTimerDelayXms(4);
		Led_ClrLedSDA();
	}

}

#endif


#if(_DEF_DX_LED_MODE)

void SCL_DATA_1()
{

	hw_ClrLedSCL();
	ScalerTimerDelayXms(4);
	hw_SetLedSCL();
	ScalerTimerDelayXms(12);
	
}

void SCL_DATA_0()
{
	hw_ClrLedSCL();
	ScalerTimerDelayXms(4);
	hw_SetLedSCL();
	ScalerTimerDelayXms(4);
}


void Translate_DOCI_IIC_LED(BYTE order)
{
	BYTE i,instru;
	BYTE command_len;
	BYTE temp = order;
	
	command_len = 5;

	for(i=0;i<command_len;i++)
	{	
		instru = (temp>>((command_len-1)-i))&0x01;
		if(instru)
			SCL_DATA_1();
		else
			SCL_DATA_0();
	}
}


void MENU_AdjustRGBLedState(BYTE ucstate)
{

#if(_DEF_DX_LED_MODE2)
	BYTE LED_ORDER_SET[4] ={0x00,0x01,0x03,0x02};
#else
	BYTE LED_ORDER_SET[8] ={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07};
#endif

	if(ucstate)
	{
		OSD_LED_CONTRL(_OSD_LED_ON);	//hw_SetLed_EN();
	}
	else
	{
		OSD_LED_CONTRL(_OSD_LED_OFF);
	}
	
	ScalerTimerDelayXms(20);
	hw_ClrLedSCL();
	ScalerTimerDelayXms(32);
	hw_SetLedSCL();
	ScalerTimerDelayXms(8);

	Translate_DOCI_IIC_LED(LED_ORDER_SET[ucstate]);

	hw_ClrLedSCL();
  	ScalerTimerDelayXms(8);
  	hw_SetLedSCL();
		

}

#elif(_DEF_DX_LED_MODE2)

void SCL_DATA_1()
{

	hw_ClrLedSCL();
	ScalerTimerDelayXms(4);
	hw_SetLedSCL();
	//ScalerTimerDelayXms(12);
	
}

void SCL_DATA_0()
{
	hw_ClrLedSCL();
}


void SDA_DATA_1()
{

	Led_ClrLedSDA();
	ScalerTimerDelayXms(4);
	Led_SetLedSDA();
	//ScalerTimerDelayXms(12);
	
}

void SDA_DATA_0()
{
	Led_ClrLedSDA();
}

void MENU_AdjustRGBLedState(BYTE ucstate)
{

	if(ucstate)
	{
		OSD_LED_CONTRL(_OSD_LED_ON);
	}
	else
	{
		OSD_LED_CONTRL(_OSD_LED_OFF);
		return;
	}

	if(ucstate == 1)
	{
		SCL_DATA_1();
		SDA_DATA_0();
	}
	else if(ucstate == 2)
	{
		SCL_DATA_1();
		SDA_DATA_1();
	}
	else if(ucstate == 3)
	{
		SDA_DATA_1();
		SCL_DATA_0();
	}
}

#endif

//--------------------------------------------------
// Description	:
// Input Value	: None
// Output Value : None
//--------------------------------------------------
/*
void OsdFuncAdjHotKey(void)
{
	BYTE i=0;
	g_usAdjustValue = GetOsdValue(OSD_SubMenuCur);

	switch(OSD_SubMenuCur)
	{ 
		case _MENU_FUN_ECO:
		
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _COLOREFFECT_AMOUNT, _COLOREFFECT_STANDARD, _ON);
		#if _DEF_Energy_Msg
			switch(g_usAdjustValue)
			{
				case _COLOREFFECT_MOVIE :
					i = _ECO_MOVIE_BACKLIGHT;
					break;
					
				case _COLOREFFECT_GAME:
					i = _ECO_GAME_BACKLIGHT;
					break;
					
				case _COLOREFFECT_PHOTO :
					i = _ECO_TEXT_BACKLIGHT;
					break;
					
				case _COLOREFFECT_STANDARD :
					i = GET_OSD_BACKLIGHT();
					break;
					
			#if(_EOC_RTS_FPS_SUPPORT == _ON)
				case _COLOREFFECT_FPS:
					i = _ECO_FPS_BACKLIGHT;
					break;
					
				case _COLOREFFECT_RTS :
					i = _ECO_RTS_BACKLIGHT;
					break;		
		
			#endif
		
				default:
					break;
			}
			if(i>_DEF_Energy_Value&&GET_OSD_EnergyMsg())
			{
				OsdFuncOsdToEnergyMsg();
				return ;
			}
		#endif
			SET_OSD_COLOR_EFFECT(g_usAdjustValue);		
			if((GET_OSD_COLOR_EFFECT()!= _COLOREFFECT_STANDARD))
			{
				SET_OSD_DCR_STATUS(_OFF);
#if 1//(_OSD_POWER_SAVING_MODE)
				SET_OSD_POWER_SAVING(_OFF);
#endif
			}
		
			UserAdjustBacklight(GET_OSD_BACKLIGHT());
			UserAdjustContrast(GET_OSD_CONTRAST());
			UserAdjustBrightness(GET_OSD_BRIGHTNESS()); 
#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))    
			UserAdjustColorEffectMode();
#endif


#if(Project_ID == ID_HHT_HK2795E041DP2HDMI__M280DCA_UHD60HZ__20201214)||(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH180HZ_20210106)
			UserAdjustGamma(GET_OSD_GAMMA());
			ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
			UserCommonAdjustGammaRegionEnable(_FUNCTION_ON);
#endif 

	break;
		
		case _MENU_FUN_DCR:
			
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _ON, _OFF, _ON);
		#if _DEF_Energy_Msg
			if(g_usAdjustValue>_OFF&&GET_OSD_EnergyMsg())
			{
				OsdFuncOsdToEnergyMsg();
				return ;
			}
		#endif
			SET_OSD_DCR_STATUS(g_usAdjustValue);

			if(GET_OSD_DCR_STATUS() != _OFF)
			{
#if 1//(_OSD_POWER_SAVING_MODE)
				SET_OSD_POWER_SAVING(_OFF);
#endif
				SET_OSD_COLOR_EFFECT(_COLOREFFECT_STANDARD);
				UserAdjustBacklight(GET_OSD_BACKLIGHT());
				UserAdjustContrast(GET_OSD_CONTRAST());
				UserAdjustBrightness(GET_OSD_BRIGHTNESS()); 
#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))    
				UserAdjustColorEffectMode();
#endif
			}
			
				break;
		
#if 1//(_OSD_POWER_SAVING_MODE)
		case _MENU_FUN_POWER_SAVING:
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_POWER_SAVING(g_usAdjustValue);		
			UserAdjustBacklight(GET_OSD_BACKLIGHT());
			break;
#endif
		case _MENU_FUN_HDR:		
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _HDR10_MODE_END, _HDR10_MODE_OFF, _ON);
		#if _DEF_Energy_Msg
			if(g_usAdjustValue>_OFF&&GET_OSD_EnergyMsg())
			{
				OsdFuncOsdToEnergyMsg();
				return ;
			}
		#endif
			SET_OSD_HDR_MODE(g_usAdjustValue);
			
			if(GET_OSD_HDR_MODE() != _HDR10_MODE_OFF)
			{	
#if 1//(_OSD_POWER_SAVING_MODE)
				SET_OSD_POWER_SAVING(_OFF);
#endif
				SET_OSD_GAMMA(_GAMMA_OFF);
				SET_OSD_PCM_STATUS(_PCM_OSD_NATIVE);
				SET_OSD_COLOR_EFFECT(_COLOREFFECT_STANDARD);
				SET_OSD_DCR_STATUS(_OFF);
				
				UserAdjustBrightness(GET_OSD_BRIGHTNESS()); 
#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))    
				UserAdjustColorEffectMode();
#endif
			}
			
			UserAdjustBacklight(GET_OSD_BACKLIGHT());
			
#if(_HDR10_SUPPORT == _ON)						
			ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
			UserCommonHDRAdjust(_HDR_FLOW_OSD_MODE_CHANGE);
			UserCommonHDR10SupportSwitch(); 
#endif	

#if((_HDR10_SUPPORT == _OFF)&&(_PROJECT == _RL6463_PROJECT))
			MockHdrEffect();
#endif

			break;
		case _MENU_FUN_ASPECT:
		
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _OSD_ASPECT_RATIO_AMOUNT, 0, _ON);			
			
			SET_OSD_ASPECT_RATIO_TYPE(g_usAdjustValue);
			SysModeSetResetTarget(_MODE_ACTION_RESET_TO_DISPLAY_SETTING);
				break;
		
		case _MENU_FUN_COLORTEMP:	
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
		
#if(!(_CT_7500_SUPPRT&&_CT_5800_SUPPRT&&_CT_sRGB_SUPPRT))
			while(g_usAdjustValue==_CT_7500 || g_usAdjustValue==_CT_5800 || g_usAdjustValue==_CT_SRGB)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif(!(_CT_7500_SUPPRT&&_CT_5800_SUPPRT))
			while(g_usAdjustValue==_CT_7500 || g_usAdjustValue==_CT_5800)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif(!(_CT_7500_SUPPRT&&_CT_sRGB_SUPPRT))
			while(g_usAdjustValue==_CT_7500 ||g_usAdjustValue==_CT_SRGB)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
			
#elif(!(_CT_5800_SUPPRT&&_CT_sRGB_SUPPRT))
			while(g_usAdjustValue==_CT_5800 || g_usAdjustValue==_CT_SRGB)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif(!_CT_7500_SUPPRT)
			while(g_usAdjustValue==_CT_7500)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}

#elif(!_CT_5800_SUPPRT)
			while(g_usAdjustValue==_CT_5800)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif(!_CT_sRGB_SUPPRT)
			while(g_usAdjustValue==_CT_SRGB)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#endif

			
			SET_COLOR_TEMP_TYPE(g_usAdjustValue);
			
			RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
			
			UserAdjustContrast(GET_OSD_CONTRAST());
			g_usAdjustValue = GET_COLOR_TEMP_TYPE(); 
			break;
		
		case _MENU_FUN_LED:
        #if(Project_ID==ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH180HZ_20210106)
            if(GET_KEYMESSAGE()==_UP_KEY_MESSAGE)
                g_usAdjustValue =((GET_OSD_LED_TYPE()+1)>2?0:(GET_OSD_LED_TYPE()+1));
        #else
            g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(GET_OSD_LED_TYPE() , _OSDLedType_END, _OSDLedType_OFF, _ON));
        #endif
       		SET_OSD_LED_TYPE(g_usAdjustValue);
        #if(_LED_EFFECT)
            SET_OSD_PRE_LED_TYPE(GET_OSD_LED_TYPE());   
            led_start =1;
		    ScalerTimerDelayXms(30);
	    #else
			if(GET_OSD_LED_TYPE() == _OSDLedType_OFF)
			{
				ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_LED_MODE_FLICKER); 

				OSD_LED_CONTRL(_OSD_LED_OFF);
			}
			else if(GET_OSD_LED_TYPE() == _OSDLedType_ON)
			{
				ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_LED_MODE_FLICKER); 

				OSD_LED_CONTRL(_OSD_LED_ON);

			}
			else if(GET_OSD_LED_TYPE() == _OSDLedType_FLASH)
			{
				ScalerTimerActiveTimerEvent(SEC(0.5), _USER_TIMER_EVENT_LED_MODE_FLICKER); 
				
			}
			#endif
			break;
		
		case _MENU_FUN_POWER_OFF:
		
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _AutoPowerOff_END, _AutoPowerOff_OFF, _ON));
			SET_OSD_AUTO_POWEROFF(g_usAdjustValue);
			if(GET_OSD_AUTO_POWEROFF() == _AutoPowerOff_OFF)
			{					
					ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}
			else if((_AutoPowerOff_10 <= GET_OSD_AUTO_POWEROFF())&&(GET_OSD_AUTO_POWEROFF() <= _AutoPowerOff_60))
			{
				g_usPowerDownCount = 10*GET_OSD_AUTO_POWEROFF();
				ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}
			else if(GET_OSD_AUTO_POWEROFF() == _AutoPowerOff_120)
			{
				g_usPowerDownCount = 120;
				ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}	
			else if(GET_OSD_AUTO_POWEROFF() == _AutoPowerOff_240)
			{
				g_usPowerDownCount = 240;
				ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}	
				break;
		
		case _MENU_FUN_OD:
		
#if(_OD_WEAK_MID_HIGH)
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , 3, _OFF, _ON));
#else
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));

#endif
			SET_OSD_OD_STATUS(g_usAdjustValue); 		

#if(_OD_WEAK_MID_HIGH)
			if(GET_OSD_OD_STATUS() == 1)
			{
				SET_OSD_OD_GAIN(_OD_WEAK);

			}
			else if(GET_OSD_OD_STATUS() == 2)
			{
				SET_OSD_OD_GAIN(_OD_MID);

			}
			else if(GET_OSD_OD_STATUS() == 3)
			{
				SET_OSD_OD_GAIN(_OD_STRONG);

			}
#endif
#if(_OD_SUPPORT == _ON)
			ScalerODEnable(GET_OSD_OD_STATUS());
			ScalerODAdjustDeltaGain(GET_OSD_OD_GAIN());
#endif

				break;
		
		case _MENU_FUN_FREESYNC:
			
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_FREE_SYNC_STATUS(g_usAdjustValue);
				break;
		
		case _MENU_FUN_AUDOIMUTE:
		
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_VOLUME_MUTE(g_usAdjustValue);
			UserAdjustAudioMuteSwitch();
				break;

		case _MENU_FUN_HOTLEFT:

			g_usAdjustValue = (BYTE)(DetOverRangeForHotkeySelect(g_usAdjustValue , _MENU_HOT_KEY_FUNC- _MENU_FUN_BACKLIGHT-1, 0, _ON));
			SET_OSD_HOTKEY_LEFT(g_usAdjustValue);
				break;

		case _MENU_FUN_HOTRIGHT:

			g_usAdjustValue = (BYTE)(DetOverRangeForHotkeySelect(g_usAdjustValue , _MENU_HOT_KEY_FUNC- _MENU_FUN_BACKLIGHT-1, 0, _ON));
			SET_OSD_HOTKEY_RIGHT(g_usAdjustValue);
				break;

	
		case _MENU_FUN_SIGNAL:	
			
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _OSD_INPUT_AMOUNT-1, 0, _ON));
			SET_OSD_INPUT_PORT_OSD_ITEM(g_usAdjustValue);
				break;
				
#if(_VGA_SUPPORT == _ON)

		case _MENU_FUN_AUTO_ADJUST:
		
			if((SysModeGetModeState() == _MODE_STATUS_ACTIVE)&& (SysSourceGetSourceType() == _SOURCE_VGA))
			{
				SET_OSD_EVENT_MESSAGE(_OSDEVENT_DO_AUTO_CONFIG_MSG);
			}
			break;
		
		case _MENU_FUN_AUTO_COLOR:
		
			if((SysModeGetModeState() == _MODE_STATUS_ACTIVE)&& (SysSourceGetSourceType() == _SOURCE_VGA))
			{
				OsdDisplayAutoBalanceProc();
			}
			break;	
#endif
		case _MENU_FUN_RESET:
		
			OsdDispOsdReset();
			break;

		case _MENU_FUN_LANGUAGE:		
		#if(_DEF_OSD_LANGUAGE_ARROW) 
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _LANGUAGE_AMOUNT, 0, _ON));
		#else
		
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRangeRotation(g_usAdjustValue , _LANGUAGE_AMOUNT, 0, _ON));
		#endif
		SET_OSD_LANGUAGE(g_usAdjustValue);
			
			break;
			
		case _MENU_FUN_FLICKER_FREE:
			
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_FLICKER_FREE_STATUS(g_usAdjustValue);
			//ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, GET_OSD_FLICKER_FREE_STATUS()? 20000: (((DWORD)_PANEL_TYP_FRAME_RATE * 160) / 100));
			break;
			
		case _MENU_FUN_MPRT:
					
			#if(_MPRT_WEAK_MID_HIGH)
				g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , 3, _OFF, _ON));
			#else
				g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			#endif
			#if _DEF_Energy_Msg
				if(g_usAdjustValue>_OFF&&GET_OSD_EnergyMsg())
				{
					OsdFuncOsdToEnergyMsg();
					return ;
				}
			#endif
				SET_OSD_MPRT(g_usAdjustValue);
#if(_MPRT_SUPPORT == _ON)
			
			if(GET_OSD_MPRT())
			{
				SET_OSD_OD_STATUS(_ON); 
			#if(_MPRT_WEAK_MID_HIGH)
				SET_OSD_OD_STATUS(g_usAdjustValue); 
				if(GET_OSD_MPRT()==1)
					SET_OSD_OD_GAIN(_OD_WEAK);
				else if(GET_OSD_MPRT()==2)
					SET_OSD_OD_GAIN(_OD_MID);
				else if(GET_OSD_MPRT()==3)
					SET_OSD_OD_GAIN(_OD_STRONG);
				ScalerODAdjustDeltaGain(GET_OSD_OD_GAIN());
			#elif(_OD_WEAK_MID_HIGH)
				SET_OSD_OD_STATUS(3); 
				SET_OSD_OD_GAIN(_OD_STRONG);
					
				ScalerODAdjustDeltaGain(GET_OSD_OD_GAIN());
			#endif
				UserAdjustLowMotionBlurDisplay(GET_OSD_MPRT());
	
			}
			else
			{
				SET_OSD_OD_STATUS(_OFF); 		
				PCB_BACKLIGHT_POWER(_LIGHT_CONTROL_OFF);
				UserAdjustLowMotionBlurDisplay(GET_OSD_MPRT());
				ScalerTimerActiveTimerEvent(SEC(0.1), _USER_TIMER_EVENT_MPRT);
			}
	
			 
#if(_OD_SUPPORT == _ON)
			  ScalerODEnable(GET_OSD_OD_STATUS());
#endif		
#endif
			break;


		case _MENU_FUN_GAMMA:
		   g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_GAMMA_26,_GAMMA_OFF,_ON);
		   
		   SET_OSD_GAMMA(g_usAdjustValue);
	
			if(GET_OSD_GAMMA() != _GAMMA_OFF)
			{
			//	SET_COLOR_TEMP_TYPE(_CT_USER);
			//	RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());		 
			//	UserAdjustContrast(GET_OSD_CONTRAST());
				
				UserAdjustGamma(GET_OSD_GAMMA());
				ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
				UserCommonAdjustGammaRegionEnable(_FUNCTION_ON);
			}
			else
			{
			//	SET_COLOR_TEMP_TYPE(_DEF_COLORTEMP);
			//	RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());		 
			//	UserAdjustContrast(GET_OSD_CONTRAST());
				
				UserCommonAdjustGammaRegionEnable(_FUNCTION_OFF);
			
			}
		 break;

		case _MENU_FUN_COLORGAMUT:
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_PCM_OSD_NATIVE,_PCM_OSD_SRGB,_ON);
			SET_OSD_PCM_STATUS(g_usAdjustValue);
#if(_OCC_SUPPORT == _ON)
			OsdFuncColorPcmAdjust();
#endif

		break;

		case _MENU_FUN_OVERCLOCK:
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_ON,_OFF,_ON);
			SET_OSD_OVERCLOCK(g_usAdjustValue);

		break;
		
	}
	
	UpdateMaskValue();
	//UpdateItemMaskValue();
	RTDNVRamSaveOSDData();
}*/
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if((_HDR10_SUPPORT == _OFF)&&((_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6369_PROJECT)||(_PROJECT == _RL6851_PROJECT)))

extern void ScalerGetDataPortByte(WORD usAddr, BYTE ucValue, WORD usLength, BYTE *pucArray, bit bAutoInc);

void ScalerGetHDR10Data_MOCK(BYTE *pucHDRData)
{
#if 1//new
	pucHDRData[0] = ScalerTMDSRx0HdmiGetAVIInfo(_AVI_INFO_EXTENDED_COLORIMETRY);
	if(pucHDRData[0] == _AVI_COLORIMETRY_EXT_ITUR_BT2020_1	|| pucHDRData[0] == _AVI_COLORIMETRY_EXT_ITUR_BT2020_2)
	{
		pucHDRData[0] = 1;
		pucHDRData[1] = 0x1A;
		pucHDRData[2] = 2;

	}

#else
    ScalerGetDataPortByte(0x02CD, 0xAC, 2, &pucHDRData[0], _AUTOINC);
    ScalerGetDataPortByte(0x02CD, 0xAF, 2, &pucHDRData[2], _AUTOINC);
    ScalerGetDataPortByte(0x02CD, 0xB1, 24, &pucHDRData[4], _AUTOINC);
#endif
}

void UserCommonHDRContrast(BYTE ucContrast)
{
    WORD pusData[4] = {0};

    pusData[3] = 0x80;
	
	pusData[0] = (WORD)(((DWORD)pusData[3] * (ucContrast + 200) / 200) > 4095) ? 4095 : (WORD)((DWORD)pusData[3] * (ucContrast + 200) / 200);
    pusData[1] = pusData[0];
    pusData[2] = pusData[0];

    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    ScalerColorContrastAdjust(_CONTRAST_COEF_A, pusData);
    ScalerColorContrastEnable(_FUNCTION_ON);
}


//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void MockHdrEffect(void)
{
	BYTE i = 0;
	BYTE pucHDRInfoData[_HW_DP_INFOFRAME_RSV0_LENGTH];

	ScalerGetHDR10Data_MOCK(pucHDRInfoData);

	
    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

	
	if(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084)
	{
		
		ScalerColorOutputGammaEnable(_FUNCTION_OFF);
		ScalerColorSRGBEnable(_FUNCTION_OFF);
		ScalerColorPCMInputGammaEnable(_FUNCTION_OFF);
		
		ScalerColorPCMInputGammaAdjust(0,_OGC_FLASH_BANK);
		ScalerColorPCMOutputGammaAdjust(880, _OGC_FLASH_BANK);
		ScalerColorPCMSRGBAdjust(_SRGB_0_BIT_SHIFT_LEFT, 862, _OGC_FLASH_BANK, _OCC_COLORMATRIX_TABLE_SIZE);
		ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
		ScalerColorOutputGammaEnable(_FUNCTION_ON);
		ScalerColorSRGBEnable(_FUNCTION_ON);
		ScalerColorPCMInputGammaEnable(_FUNCTION_ON);
		UserAdjustBacklight(100);
		
#if(_CONTRAST_SUPPORT == _ON)
		UserCommonHDRContrast(0);
#endif
	}
	else if((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(pucHDRInfoData[0] == 1)&&(pucHDRInfoData[1] == 0x1A)&&(pucHDRInfoData[2] == 2))
	{
		ScalerColorOutputGammaEnable(_FUNCTION_OFF);
		ScalerColorSRGBEnable(_FUNCTION_OFF);
		ScalerColorPCMInputGammaEnable(_FUNCTION_OFF);

		ScalerColorPCMInputGammaAdjust(606,_OGC_FLASH_BANK);
		ScalerColorPCMOutputGammaAdjust(880, _OGC_FLASH_BANK);
		ScalerColorPCMSRGBAdjust(_SRGB_0_BIT_SHIFT_LEFT, 862, _OGC_FLASH_BANK, _OCC_COLORMATRIX_TABLE_SIZE);
		ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
		ScalerColorOutputGammaEnable(_FUNCTION_ON);
		ScalerColorSRGBEnable(_FUNCTION_ON);
		ScalerColorPCMInputGammaEnable(_FUNCTION_ON);
		UserAdjustBacklight(100);
		
#if(_CONTRAST_SUPPORT == _ON)
		UserCommonHDRContrast(0);
#endif
	}	
	else
	{
		if(GET_OSD_GAMMA() == _GAMMA_OFF)
		{
			ScalerColorOutputGammaEnable(_FUNCTION_OFF);
		}
		ScalerColorPCMInputGammaEnable(_FUNCTION_OFF);
#if(_GLOBAL_HUE_SATURATION == _ON)
		if(GET_OSD_COLOR_EFFECT() == _COLOREFFECT_VIVID)
		{
			UserAdjustGlobalHueSat((SWORD)GET_OSD_HUE(), 140);
		}
		else
		{
			UserAdjustGlobalHueSat((SWORD)GET_OSD_HUE(), GET_OSD_SATURATION());
		}
#endif  // End of #if(_GLOBAL_HUE_SATURATION == _ON)
#if(_CONTRAST_SUPPORT == _ON)
			UserAdjustContrast(GET_OSD_CONTRAST());
#endif

	}
}

#endif

void OsdHdrAdj(void)
{
	DebugMessageHDR("OsdHdrAdj",111);
	SET_OSD_GAMMA(_GAMMA_OFF);
	SET_OSD_PCM_STATUS(_PCM_OSD_NATIVE);
	SET_OSD_COLOR_EFFECT(_COLOREFFECT_STANDARD);
	SET_OSD_DCR_STATUS(_OFF);
	
#if(_DEF_HDR_MPRT_GRAY) 
	SET_OSD_MPRT(_OFF);
#endif

	UserAdjustBrightness(GET_OSD_BRIGHTNESS()); 
#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))    
	UserAdjustColorEffectMode();
#endif
}
//����
void OsdFuncAdj1()
{
	BYTE j=OSD_MAIN_MENU_ITEM<<4|OSD_SubMenuCur;
	extern void OsdDispMainMenu_1(void);
	extern void OSDSubMenuMove1(void);
	
	DebugMessageOsd("3.OSD_SubMenuCur",OSD_SubMenuCur);
	OsdFuncDisableOsd();
	OsdDispMainMenu_1();
	OSD_MAIN_MENU_ITEM=(j>>4);

	//OsdFuncDisableOsd();
	//while(OSD_MAIN_MENU_ITEM==(j>>4))
	{
		//SET_KEYMESSAGE(_RIGHT_KEY_MESSAGE);
		UpdateOSDMainInterface(_OSD_MAIN_PICTURE+OSD_MAIN_MENU_ITEM);
	}
	SET_KEYMESSAGE(_MENU_KEY_MESSAGE);
	OSDSubMenuMove1();
	OSD_SubMenuCur=0;
	DebugMessageOsd("3.OSD_SubMenuCur",OSD_SubMenuCur);
	DebugMessageOsd("3.(j&0xf)",(j&0xf));
	while(OSD_SubMenuCur!=(j&0xf))
	{
		SET_KEYMESSAGE(_RIGHT_KEY_MESSAGE);
		OSDSubMenuMove1();
	}
	SET_KEYMESSAGE(_MENU_KEY_MESSAGE);
	OSDSubMenuMove1();			
	OsdFuncEnableOsd();
}


//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void Osd3thChange(BYTE ucOsdState)
{
	//BYTE i=OSDAPI_GetIndentIndex();

#if 1
	UpdateMaskValue();
	if(GET_OSD_STATE() != _MENU_HOT_KEY_FUNC)
	{
		//OSDAPI_SetIndentIndex(_OSD_SUB_FUN_START+_OSD_SUB_FUN_CHANGE*(OSD_ITEM(ucOsdState)&0x0f));
		switch(GetOsdShowType(ucOsdState))
		{ 
			case _TYPE_SLIDER:
				if(OSD_ITEM(ucOsdState)>>4 == OSD_MAIN_MENU_ITEM)
				{
					OsdDispSliderAndNumber_1(ROW(_OSD_ITEM_ROW_START+(OSD_ITEM(ucOsdState)&0x0f)*_OSD_ITEM_ROW_CHANGE),ucOsdState , GetOsdValue(ucOsdState),0);
				}
				break;

			case _TYPE_ARROW:
				if(OSD_ITEM(ucOsdState)>>4 == OSD_MAIN_MENU_ITEM)
				{
					OsdFuncClearOsd(ROW(_OSD_ITEM_ROW_START+(OSD_ITEM(ucOsdState)&0x0f)*_OSD_ITEM_ROW_CHANGE), COL(_OSD_ITEM_COL_SLIDER+1), WIDTH(12) , HEIGHT(1));					 
					//OSDFunPutString(ROW(_OSD_ITEM_ROW_START+(OSD_ITEM(ucOsdState)&0x0f)*2),COL( _OSD_ITEM_COL_SLIDER+1),LENGTH(11),(_PFONT_PAGE_ITEM_1+(OSD_ITEM(ucOsdState)&0x0f)), ucOsdState,  GetOsdValue(ucOsdState),OSD_ALIGN_CENTER, _COLOR_MENU_FONT, GET_OSD_LANGUAGE());
					RTDOsdTableFuncPutStringCenter(_OSD_ITEM_ROW_START+(OSD_ITEM(ucOsdState)&0x0f)*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_SLIDER+1, _OSD_ITEM_COL_SLIDER+12, _PFONT_PAGE_ITEM_1 + (OSD_ITEM(ucOsdState)&0x0f), 
						(OsdStateDefine((OSD_ITEM(ucOsdState)>>4),(OSD_ITEM(ucOsdState)&0x0f))),	GetOsdValue(OsdStateDefine((OSD_ITEM(ucOsdState)>>4),(OSD_ITEM(ucOsdState)&0x0f))), COLOR(_COLOR_MENU_FONT, _CP_BG), 0, GET_OSD_LANGUAGE());			

				}
				break;

			case _TYPE_SUBMENU:
				if(OSD_ITEM(ucOsdState)>>4 == OSD_MAIN_MENU_ITEM)
				{
					OsdFuncClearOsd(ROW(_OSD_ITEM_ROW_START+(OSD_ITEM(ucOsdState)&0x0f)*_OSD_ITEM_ROW_CHANGE), COL(_OSD_ITEM_COL_SLIDER+1), WIDTH(12) , HEIGHT(1)); 				 
					RTDOsdTableFuncPutStringCenter(_OSD_ITEM_ROW_START+(OSD_ITEM(ucOsdState)&0x0f)*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_SLIDER+1, _OSD_ITEM_COL_SLIDER+12, _PFONT_PAGE_ITEM_1 + (OSD_ITEM(ucOsdState)&0x0f), 
						(OsdStateDefine((OSD_ITEM(ucOsdState)>>4),(OSD_ITEM(ucOsdState)&0x0f))),	GetOsdValue(OsdStateDefine((OSD_ITEM(ucOsdState)>>4),(OSD_ITEM(ucOsdState)&0x0f))), COLOR(_COLOR_MENU_FONT, _CP_BG), 0, GET_OSD_LANGUAGE());			
				}
				break;
							
			default :
				break;
		}

	}
#endif	
}

void OsdFuncAdj(void)
{
	BYTE i=0,j=0;
	BYTE us_osdstate=OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur);
	if(GET_OSD_STATE()==_MENU_HOT_KEY_FUNC)
	{
		us_osdstate=OSD_SubMenuCur;
	}

	if(us_osdstate==_MENU_FUN_SIGNAL || us_osdstate==_MENU_FUN_FREESYNC)
	{

	}
	else
		g_usAdjustValue = GetOsdValue(us_osdstate);

	switch(us_osdstate)
	{ 
		case _MENU_FUN_ECO:
		
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _COLOREFFECT_AMOUNT, _COLOREFFECT_STANDARD, _ON);
			
	#if _DEF_Energy_Msg
			#if(!_MC_EUROPE)
			j=GET_OSD_COLOR_EFFECT();
			SET_OSD_COLOR_EFFECT(g_usAdjustValue);
			i=GetOsdValue(_MENU_FUN_BACKLIGHT);
			SET_OSD_COLOR_EFFECT(j);
			if(i>_DEF_Energy_Value&&GET_OSD_EnergyMsg())
			{
				OsdFuncOsdToEnergyMsg();
				return ;
			}
			#endif
	#endif
			SET_OSD_COLOR_EFFECT(g_usAdjustValue);
			if((GetOsdValue(_MENU_FUN_ECO)!= _COLOREFFECT_STANDARD))
			{
				if(GetOsdValue(_MENU_FUN_DCR)!= _OFF)
				{	
					SET_OSD_DCR_STATUS(_OFF);
					SET_OSD_POWER_SAVING(_OFF);
				}
				else if(GetOsdValue(_MENU_FUN_POWER_SAVING))
				{	
					SET_OSD_POWER_SAVING(_OFF);
				}
			}
			
			Osd3thChange(_MENU_FUN_DCR);
			Osd3thChange(_MENU_FUN_POWER_SAVING);
			Osd3thChange(_MENU_FUN_BACKLIGHT);
			Osd3thChange(_MENU_FUN_CONTRAST);
			Osd3thChange(_MENU_FUN_BRIGHTNESS);

			UserAdjustBacklight(GET_OSD_BACKLIGHT());
			UserAdjustContrast(GET_OSD_CONTRAST());
			UserAdjustBrightness(GET_OSD_BRIGHTNESS()); 
#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))    
			UserAdjustColorEffectMode();
#endif

    #if(Project_ID == ID_HHT_HK2795E041DP2HDMI__M280DCA_UHD60HZ__20201214)||(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH180HZ_20210106)
			UserAdjustGamma(GET_OSD_GAMMA());
			ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
			UserCommonAdjustGammaRegionEnable(_FUNCTION_ON);
    #endif 
				break;
		
		case _MENU_FUN_DCR:
			
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _ON, _OFF, _ON);
			
	#if _DEF_Energy_Msg
			#if(!_MC_EUROPE)
			if(g_usAdjustValue>_OFF&&GET_OSD_EnergyMsg())
			{
				OsdFuncOsdToEnergyMsg();
				return ;
			}
			#endif
	#endif
			SET_OSD_DCR_STATUS(g_usAdjustValue);
			if(GetOsdValue(_MENU_FUN_DCR)!= _OFF)
			{
				if(GetOsdValue(_MENU_FUN_ECO)!= _COLOREFFECT_STANDARD)
				{	
					SET_OSD_COLOR_EFFECT( _COLOREFFECT_STANDARD);
					SET_OSD_POWER_SAVING(_OFF);
				}
				else if(GetOsdValue(_MENU_FUN_POWER_SAVING)!= _OFF)
				{	
					SET_OSD_POWER_SAVING(_OFF);
				}
			}
			Osd3thChange(_MENU_FUN_ECO);
			Osd3thChange(_MENU_FUN_POWER_SAVING);
			Osd3thChange(_MENU_FUN_BACKLIGHT);
			Osd3thChange(_MENU_FUN_CONTRAST);
			Osd3thChange(_MENU_FUN_BRIGHTNESS);
			Osd3thChange(_MENU_FUN_POWER_SAVING);
			//Osd3thChange(_MENU_FUN_SHARPNESS);

			
			UserAdjustBacklight(GET_OSD_BACKLIGHT());
			UserAdjustContrast(GET_OSD_CONTRAST());
			UserAdjustBrightness(GET_OSD_BRIGHTNESS()); 
#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))    
			UserAdjustColorEffectMode();
#endif
				break;

				
#if 1//(_OSD_POWER_SAVING_MODE)
		case _MENU_FUN_POWER_SAVING:
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_POWER_SAVING(g_usAdjustValue);		
			Osd3thChange(_MENU_FUN_BACKLIGHT);
			UserAdjustBacklight(GET_OSD_BACKLIGHT());
			
			#if(_MC_EUROPE)
			if(GET_OSD_POWER_SAVING())
			{
				SET_OSD_EnergyMsg(_ON);
			}
			#endif
			
			break;
#endif

		case _MENU_FUN_HDR:
		
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _HDR10_MODE_END, _HDR10_MODE_OFF, _ON); 
	#if _DEF_Energy_Msg
			#if(!_MC_EUROPE)
			if(g_usAdjustValue>_OFF&&GET_OSD_EnergyMsg())
			{
				OsdFuncOsdToEnergyMsg();
				return ;
			}
			#endif
	#endif
			SET_OSD_HDR_MODE(g_usAdjustValue);
			
			Osd3thChange(_MENU_FUN_ECO);
			Osd3thChange(_MENU_FUN_POWER_SAVING);
			Osd3thChange(_MENU_FUN_BACKLIGHT);
			Osd3thChange(_MENU_FUN_CONTRAST);
			Osd3thChange(_MENU_FUN_BRIGHTNESS);
			Osd3thChange(_MENU_FUN_DCR);
			Osd3thChange(_MENU_FUN_DCC);
			
			if(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084)
			{
				OsdHdrAdj();
			}
			
#if(_DEF_HDR_MPRT_GRAY)
			if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(GET_HDR10_EOTF_SETTING() == _HDR_TARGET_STATUS_SMPTE_ST_2084))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
			{
				Osd3thChange(_MENU_FUN_MPRT);
			}
#endif

			UserAdjustBacklight(GET_OSD_BACKLIGHT());
#if(_HDR10_SUPPORT == _ON)
			ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
			UserCommonHDRAdjust(_HDR_FLOW_OSD_MODE_CHANGE);
			UserCommonHDR10SupportSwitch(); 
#endif

#if((_HDR10_SUPPORT == _OFF)&&(_PROJECT == _RL6463_PROJECT))
			MockHdrEffect();
#endif

			break;

		case _MENU_FUN_ASPECT:
		
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _OSD_ASPECT_RATIO_AMOUNT, 0, _ON);			
			
			SET_OSD_ASPECT_RATIO_TYPE(g_usAdjustValue);
			SysModeSetResetTarget(_MODE_ACTION_RESET_TO_DISPLAY_SETTING);
				break;
		
		case _MENU_FUN_COLORTEMP:	
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#if((_CT_7500_SUPPRT&&_CT_5800_SUPPRT&&_CT_sRGB_SUPPRT))
#elif((_CT_7500_SUPPRT&&_CT_5800_SUPPRT))
			while(g_usAdjustValue==_CT_SRGB)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif((_CT_7500_SUPPRT&&_CT_sRGB_SUPPRT))
			while(g_usAdjustValue==_CT_5800)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif((_CT_5800_SUPPRT&&_CT_sRGB_SUPPRT))
			while(g_usAdjustValue==_CT_7500)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif(_CT_7500_SUPPRT)
			while(g_usAdjustValue==_CT_SRGB ||g_usAdjustValue==_CT_5800)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}

#elif(_CT_5800_SUPPRT)
			while(g_usAdjustValue==_CT_7500 ||g_usAdjustValue==_CT_5800)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#elif(_CT_sRGB_SUPPRT)
			while(g_usAdjustValue==_CT_7500 ||g_usAdjustValue==_CT_5800)
			{
				g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _CT_USER, _CT_9300, _ON);
			}
#endif


			SET_COLOR_TEMP_TYPE(g_usAdjustValue);
			RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
			Osd3thChange(_MENU_FUN_R);
			Osd3thChange(_MENU_FUN_G);
			Osd3thChange(_MENU_FUN_B);
		 
			UserAdjustContrast(GET_OSD_CONTRAST());
			g_usAdjustValue = GET_COLOR_TEMP_TYPE(); 
			break;
		
		case _MENU_FUN_LED:
			
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(GET_OSD_LED_TYPE() , _OSDLedType_END, _OSDLedType_OFF, _ON));
			SET_OSD_LED_TYPE(g_usAdjustValue);

			
#if(_DEF_DX_LED_MODE || _DEF_DX_LED_MODE2)
			MENU_AdjustRGBLedState(GET_OSD_LED_TYPE());
#elif(_DEF_DX_LED_MODE3)
			DaoXing_LedModeAdjustrRGB(GET_OSD_LED_TYPE());

#elif(_LED_EFFECT)
			SET_OSD_PRE_LED_TYPE(GET_OSD_LED_TYPE());	
			led_start = 1;
			ScalerTimerDelayXms(30);
#else
			if(GET_OSD_LED_TYPE() == _OSDLedType_OFF)
			{
				ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_LED_MODE_FLICKER); 

				OSD_LED_CONTRL(_OSD_LED_OFF);
			}
			else if(GET_OSD_LED_TYPE() == _OSDLedType_ON)
			{
				ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_LED_MODE_FLICKER); 

				OSD_LED_CONTRL(_OSD_LED_ON);

			}
			else if(GET_OSD_LED_TYPE() == _OSDLedType_FLASH)
			{
				ScalerTimerActiveTimerEvent(SEC(0.5), _USER_TIMER_EVENT_LED_MODE_FLICKER); 
				
			}
	#endif
			break;
		
		case _MENU_FUN_POWER_OFF:
		
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _AutoPowerOff_END, _AutoPowerOff_OFF, _ON));
			SET_OSD_AUTO_POWEROFF(g_usAdjustValue);
			if(GET_OSD_AUTO_POWEROFF() == _AutoPowerOff_OFF)
			{					
					ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}
			else if((_AutoPowerOff_10 <= GET_OSD_AUTO_POWEROFF())&&(GET_OSD_AUTO_POWEROFF() <= _AutoPowerOff_60))
			{
				g_usPowerDownCount = 10*GET_OSD_AUTO_POWEROFF();
				ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}
			else if(GET_OSD_AUTO_POWEROFF() == _AutoPowerOff_120)
			{
				g_usPowerDownCount = 120;
				ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}	
			else if(GET_OSD_AUTO_POWEROFF() == _AutoPowerOff_240)
			{
				g_usPowerDownCount = 240;
				ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_AUTO_POWER_DOWN); 
			}	
				break;
		
		case _MENU_FUN_OD:
		
#if(_OD_WEAK_MID_HIGH)
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , 3, _OFF, _ON));
#else
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
		
#endif
			
			SET_OSD_OD_STATUS(g_usAdjustValue); 		

#if(_OD_WEAK_MID_HIGH)
			if(GET_OSD_OD_STATUS() == 1)
			{
				SET_OSD_OD_GAIN(_OD_WEAK);

			}
			else if(GET_OSD_OD_STATUS() == 2)
			{
				SET_OSD_OD_GAIN(_OD_MID);

			}
			else if(GET_OSD_OD_STATUS() == 3)
			{
				SET_OSD_OD_GAIN(_OD_STRONG);

			}
#endif

#if(_OD_SUPPORT == _ON)
			ScalerODEnable(UserInterfaceGetODEnableStatus());
			ScalerODAdjustDeltaGain(GET_OSD_OD_GAIN());
#endif
				break;
		
		case _MENU_FUN_FREESYNC:
			
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_FREE_SYNC_STATUS(g_usAdjustValue);
		#if(_FREESYNC_LEFT_RIGHT_EFFECT)
			#if(_FREESYNC_SUPPORT == _ON)
			UserCommonInterfaceFreeSyncSupportSwitch();
			#endif
		#endif
			break;
		
		case _MENU_FUN_AUDOIMUTE:
		
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_VOLUME_MUTE(g_usAdjustValue);
			UserAdjustAudioMuteSwitch();
				break;
				
		case _MENU_FUN_HOTLEFT:
		
			g_usAdjustValue = (BYTE)(DetOverRangeForHotkeySelect(g_usAdjustValue , _MENU_HOT_KEY_FUNC- _MENU_FUN_BACKLIGHT-1, 0, _ON));
			SET_OSD_HOTKEY_LEFT(g_usAdjustValue);
				break;
		
		case _MENU_FUN_HOTRIGHT:
		
			g_usAdjustValue = (BYTE)(DetOverRangeForHotkeySelect(g_usAdjustValue , _MENU_HOT_KEY_FUNC- _MENU_FUN_BACKLIGHT-1, 0, _ON));
			SET_OSD_HOTKEY_RIGHT(g_usAdjustValue);
				break;
		
		case _MENU_FUN_SIGNAL:	
			
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _OSD_INPUT_AMOUNT-1, 0, _ON));
			SET_OSD_INPUT_PORT_OSD_ITEM(g_usAdjustValue);
				break;
				
#if(_VGA_SUPPORT == _ON)

		case _MENU_FUN_AUTO_ADJUST:
		
			if((SysModeGetModeState() == _MODE_STATUS_ACTIVE)&& (SysSourceGetSourceType() == _SOURCE_VGA))
			{
				SET_OSD_EVENT_MESSAGE(_OSDEVENT_DO_AUTO_CONFIG_MSG);
			}
			break;
		
		case _MENU_FUN_AUTO_COLOR:
		
			if((SysModeGetModeState() == _MODE_STATUS_ACTIVE)&& (SysSourceGetSourceType() == _SOURCE_VGA))
			{
				OsdDisplayAutoBalanceProc();
			}
			break;	
#endif
		case _MENU_FUN_RESET:
		
			OsdDispOsdReset();
			break;

		case _MENU_FUN_LANGUAGE:
#if(_DEF_OSD_LANGUAGE_ARROW)
		#if (Project_ID == _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue ? 1 : 0, 1, 0, _ON));
		#else
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _LANGUAGE_AMOUNT, 0, _ON));
		#endif
	#if(Project_ID == ID_CHANGJIA_GS24S3F_HK2556E01_1P2H_M236HVR010_FHD144HZ_20210908)||(Project_ID == ID_CHANGJIA_HK2556E01_1P2H_M270HAN02_V6_FHD144HZ_20210908) 
		if(g_usAdjustValue==_FRENCH)
				g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _LANGUAGE_AMOUNT, 0, _ON));
	#endif
	
	#if 0//(_OSD_LANGUAGE_DELET)
		while(g_usAdjustValue ==_DUTCH || g_usAdjustValue== _SVENSKA || g_usAdjustValue==_SUOMI || g_usAdjustValue == _CESTINA || g_usAdjustValue== _KOREAN || g_usAdjustValue== _CHINESE_F || g_usAdjustValue== _XILAYU|| g_usAdjustValue== _MAGYAR|| g_usAdjustValue== _TURKISH||g_usAdjustValue ==_HEBREW || g_usAdjustValue ==_ARABIC)
		{
				g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _LANGUAGE_AMOUNT, 0, _ON));
		}
	#endif
			#if (Project_ID == _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)
			SET_OSD_LANGUAGE(g_usAdjustValue ? _JAPANESE : _ENGLISH);
			#else
			SET_OSD_LANGUAGE(g_usAdjustValue);
			#endif
			OsdFuncClearOsd(ROW(1), COL(7), WIDTH(_OSD_MAIN_MENU_WIDTH-7), HEIGHT(_OSD_MAIN_MENU_HEIGHT-4));					
			RTDOsdTableFuncPutStringCenter(_TITLE_ROW_START, _TITLE_COL_START, _TITLE_COL_END, _PFONT_PAGE_0, _OSD_STRING_TITLE, OSD_MAIN_MENU_ITEM - _OSD_MAIN_PICTURE+1,COLOR(_CP_WHITE, _CP_BG), _TITLE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 
			j=GET_KEYMESSAGE();
			SET_KEYMESSAGE(_NONE_KEY_MESSAGE);

			for(i=0; i<6; i++)
			{
				if(OsdStateDefine(OSD_MAIN_MENU_ITEM,i) == _MENU_NULL)
				{

					OSD_MASKSET(OSD_MAIN_MENU_ITEM,i);	

				}
				else
				{
					SG_PutStringProp(_ITEM_1_ROW+i*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START, _PFONT_PAGE_1, _OSD_STRING_ITEM, OsdStateDefine(OSD_MAIN_MENU_ITEM,i), COLOR(_COLOR_MENU_FONT, _CP_BG),GET_OSD_LANGUAGE());
				}
			}
			///UpdateMaskValue();
			SET_KEYMESSAGE(j);
#else
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRangeRotation(g_usAdjustValue , _LANGUAGE_AMOUNT, 0, _ON));
			SET_OSD_LANGUAGE(g_usAdjustValue);
//			  DebugMessageOsd("77.usValue",g_usAdjustValue);
#if(Project_ID == ID_CH_HK2556E02DP1HDMI__BOE_MV238QHM_N10_LVDS_QHD75HZ_20210115)
			if(GET_OSD_ROTATE_STATUS())
				OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, _OSD_WINDOW_X_START + (g_usAdjustValue%4)*108, _OSD_WINDOW_Y_START+((g_usAdjustValue/4))*36+102, _OSD_WINDOW_X_START + (g_usAdjustValue%4)*108+72, _OSD_WINDOW_Y_START+((g_usAdjustValue/4)%5)*36+18+102, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, _ENABLE);	
			else
				OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, _OSD_WINDOW_X_START + (g_usAdjustValue%4)*108, _OSD_WINDOW_Y_START+((g_usAdjustValue/4))*36, _OSD_WINDOW_X_START + (g_usAdjustValue%4)*108+72, _OSD_WINDOW_Y_START+((g_usAdjustValue/4)%5)*36+18, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, _ENABLE); 
#else
			if(GET_OSD_ROTATE_STATUS())
				OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, _OSD_WINDOW_X_START + ((g_usAdjustValue - g_usAdjustValue%5)%4)*108, _OSD_WINDOW_Y_START+(g_usAdjustValue%5)*36+102, _OSD_WINDOW_X_START + ((g_usAdjustValue - g_usAdjustValue%5)%4)*108+72, _OSD_WINDOW_Y_START+(g_usAdjustValue%5)*36+18+102, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, _ENABLE);	
			else
			#if(_DEF_OSD_LANGUAGE_PAGE_RANK_4x6)
					OsdWindowDrawingHighlight(_OSD_WINDOW_4_8,( _OSD_WINDOW_X_START + (g_usAdjustValue/6)*(8*12)+12), _OSD_WINDOW_Y_START+(g_usAdjustValue%6)*36, (_OSD_WINDOW_X_START + (g_usAdjustValue/6)*(8*12)+12+7*12), _OSD_WINDOW_Y_START+(g_usAdjustValue%6)*36+18, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, _ENABLE); 
			#else
					OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, _OSD_WINDOW_X_START + ((g_usAdjustValue - g_usAdjustValue%5)%4)*108, _OSD_WINDOW_Y_START+(g_usAdjustValue%5)*36, _OSD_WINDOW_X_START + ((g_usAdjustValue - g_usAdjustValue%5)%4)*108+72+4, _OSD_WINDOW_Y_START+(g_usAdjustValue%5)*36+18, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, _ENABLE); 
			#endif
				
				
#endif	
#endif
				break;
		case _MENU_FUN_FLICKER_FREE:
			
			g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
			SET_OSD_FLICKER_FREE_STATUS(g_usAdjustValue);
			//ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, GET_OSD_FLICKER_FREE_STATUS()? 20000: (((DWORD)_PANEL_TYP_FRAME_RATE * 160) / 100));
			break;

		case _MENU_FUN_MPRT:
			
		#if(_MPRT_WEAK_MID_HIGH)
				g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , 3, _OFF, _ON));
		#else
				g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , _ON, _OFF, _ON));
		#endif
		#if _DEF_Energy_Msg
				#if(!_MC_EUROPE)
				if(g_usAdjustValue>_OFF&&GET_OSD_EnergyMsg())
				{
					OsdFuncOsdToEnergyMsg();
					return ;
				}
				#endif
		#endif
			SET_OSD_MPRT(g_usAdjustValue);
			
#if(_DEF_HDR_MPRT_GRAY)	
			if(GET_OSD_MPRT()!=_OFF)
			{
				SET_OSD_HDR_MODE(_OFF);
				if(OSD_ITEM(_MENU_FUN_HDR)>>4 == OSD_MAIN_MENU_ITEM)
				{			
					Osd3thChange(_MENU_FUN_HDR);
				}
			}
#endif

#if(_MPRT_SUPPORT == _ON)
			
			if(GET_OSD_MPRT())
			{
				SET_OSD_OD_STATUS(_ON); 
		#if(_MPRT_WEAK_MID_HIGH)
				SET_OSD_OD_STATUS(g_usAdjustValue); 
				if(GET_OSD_MPRT()==1)
					SET_OSD_OD_GAIN(_OD_WEAK);
				else if(GET_OSD_MPRT()==2)
					SET_OSD_OD_GAIN(_OD_MID);
				else if(GET_OSD_MPRT()==3)
					SET_OSD_OD_GAIN(_OD_STRONG);
				ScalerODAdjustDeltaGain(GET_OSD_OD_GAIN());
		#elif(_OD_WEAK_MID_HIGH)
				SET_OSD_OD_STATUS(3); 
				SET_OSD_OD_GAIN(_OD_STRONG);
		#endif
				ScalerODAdjustDeltaGain(GET_OSD_OD_GAIN());
				UserAdjustLowMotionBlurDisplay(GET_OSD_MPRT());
	
			}
			else
			{
				SET_OSD_OD_STATUS(_OFF);		
				PCB_BACKLIGHT_POWER(_LIGHT_CONTROL_OFF);
				UserAdjustLowMotionBlurDisplay(GET_OSD_MPRT());
				ScalerTimerActiveTimerEvent(SEC(0.1), _USER_TIMER_EVENT_MPRT);
			}
	
			 
			  SET_OSD_OD_STATUS(g_usAdjustValue);		  
#if(_OD_SUPPORT == _ON)
			  ScalerODEnable(UserInterfaceGetODEnableStatus());
#endif	
#endif
			break;
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
		 case _MENU_FUN_MBRSYNC:								 
			// g_usAdjustValue = (BYTE)(OsdDisplayDetOverRange(g_usAdjustValue , 3, _OFF, _ON));
#if _DEF_Energy_Msg
			 #if(!_MC_EUROPE)
			 if(g_usAdjustValue>_OFF&&GET_OSD_EnergyMsg())
			 {
				 OsdFuncOsdToEnergyMsg();
				 return ;
			 }
			 #endif
#endif
#if _MOTION_BLUR_REDUCTION_SUPPORT
			//SET_OSD_MBR_STATUS(g_usAdjustValue);
			if(GET_OSD_MBR_STATUS() == _OSD_MBR_USER_DISABLE)
			{
				SET_OSD_MBR_STATUS(_OSD_MBR_USER_ENABLE);
				UserInterfaceMbrBacklightAdjust(_BACKLIGHT_MODE_STROBE_USER_CUSTOMIZE_MBR, _LIGHT_CONTROL_ON, GET_MBR_DVTOTAL());
				//switch
			}
#if((_DRR_MOTION_BLUR_REDUCTION_SUPPORT == _ON) ||(_RTK_ADVANCED_MOTION_BLUR_REDUCTION_SUPPORT == _ON))
			else if(GET_OSD_MBR_STATUS() == _OSD_MBR_USER_DISABLE )//_OSD_MBR_USER_ENABLE
			{
				SET_OSD_MBR_STATUS(_OSD_RTK_ADV_MBR_USER_ENABLE);
				UserCommonInterfaceMbrAdvAdjust(GET_OSD_MBR_DUTY(), GET_OSD_MBR_POSITION(), _LIGHT_CONTROL_ON);
				//switch
			}
#endif
			else
			{
				SET_OSD_MBR_STATUS(_OSD_MBR_USER_DISABLE);
				//switch
			}
			// Reset to display setting to re-set backlight parameters
			// Caustion!! RTK_Adv_MBR requires "reset to display setting to be effective
#if(_MOTION_BLUR_REDUCTION_MODE_SWITCH_NO_MUTE_SUPPORT == _ON)
			UserCommonInterfaceMbrStrobeBacklightCtrl(_LIGHT_CONTROL_ON);
#else
			SysModeSetResetTarget(_MODE_ACTION_RESET_TO_DISPLAY_SETTING);
#endif
#endif
			 break;
#endif


		case _MENU_FUN_GAMMA:
		   g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_GAMMA_AMOUNT,_GAMMA_OFF,_ON);
		   
		   SET_OSD_GAMMA(g_usAdjustValue);
		   
#if(_GAMMA_FUNCTION == _ON)
			if(GET_OSD_GAMMA() != _GAMMA_OFF)
			{
				//SET_COLOR_TEMP_TYPE(_CT_USER);
			   // RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());		 
				//UserAdjustContrast(GET_OSD_CONTRAST());
				
				UserAdjustGamma(GET_OSD_GAMMA());
				ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
				UserCommonAdjustGammaRegionEnable(_FUNCTION_ON);
			}
			else
			{
				//SET_COLOR_TEMP_TYPE(_DEF_COLORTEMP);
				//RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());		 
				//UserAdjustContrast(GET_OSD_CONTRAST());
				
				UserCommonAdjustGammaRegionEnable(_FUNCTION_OFF);
		
			}
#endif
		 break;

		case _MENU_FUN_COLORGAMUT:
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_PCM_OSD_NATIVE,_PCM_OSD_SRGB,_ON);
			SET_OSD_PCM_STATUS(g_usAdjustValue);
#if(_OCC_SUPPORT == _ON)//����Ҫ���µ�
			OsdFuncColorPcmAdjust();
#endif
	
			break;

		case _MENU_FUN_OVERCLOCK:
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_ON,_OFF,_ON);
			SET_OSD_OVERCLOCK(g_usAdjustValue);
		
		break;
#if _DEF_GuangGan_FUN
		case _MENU_FUN_GunagGan:
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_ON,_OFF,_ON);
			SET_OSD_GuangGan(g_usAdjustValue);
			if(GET_OSD_GuangGan())
			{
			extern void UserGuangGanHandler(void);
				UserGuangGanHandler();
			}
			else
				UserAdjustBacklight(GET_OSD_BACKLIGHT());
		break;
#endif
		
#if(_ROTATE_FUN_SUPPORT)
		case _MENU_FUN_ROTATE:
#if 0//��֧��
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,3,_DISP_ROTATE_0,_ON);
			SET_OSD_ROTATE_STATUS(g_usAdjustValue);
			SET_OSD_DISP_ROTATE(g_usAdjustValue);
#else
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_ON,_OFF,_ON);
#if(_DISPLAY_ROTATION_180_SUPPORT == _ON)
			if(g_usAdjustValue == _ON)
			{
				SET_OSD_ROTATE_STATUS(_OSD_ROTATE_DEGREE_180);
				SET_OSD_DISP_ROTATE(_DISP_ROTATE_180);
			}
			else
			{
				SET_OSD_ROTATE_STATUS(_OSD_ROTATE_DEGREE_0);
				SET_OSD_DISP_ROTATE(_DISP_ROTATE_0);
			}	
#endif
#endif
			OsdDispDisableOsd();
			SET_OSD_STATE(_MENU_NONE);
			SysModeSetResetTarget(_MODE_ACTION_RESET_TO_DISPLAY_SETTING);
		break;

		case _MENU_FUN_OSD_ROTATE:
			{
			BYTE code tOSD_OSD_ROTATE2[]={_OSD_ROTATE_DEGREE_0,_OSD_ROTATE_DEGREE_90,_OSD_ROTATE_DEGREE_180,_OSD_ROTATE_DEGREE_270};
			//BYTE code tOSD_OSD_ROTATE1[]={_OSD_ROTATE_DEGREE_0,_OSD_ROTATE_DEGREE_90,_OSD_ROTATE_DEGREE_270,_OSD_ROTATE_DEGREE_180};
			g_usAdjustValue =tOSD_OSD_ROTATE2[g_usAdjustValue];
			g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,3,_OSD_ROTATE_DEGREE_0,_ON);
#if !_MEW_OSD_FONT
			while(g_usAdjustValue==_OSD_ROTATE_DEGREE_270||g_usAdjustValue==_OSD_ROTATE_DEGREE_90)////90or270hz ����������ʾ �������ȵ���
				g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,3,_OSD_ROTATE_DEGREE_0,_ON);
#endif
			g_usAdjustValue =tOSD_OSD_ROTATE2[g_usAdjustValue];
			}
			SET_OSD_ROTATE_STATUS(g_usAdjustValue);//_OSD_ROTATE_DEGREE_0
			OsdFuncAdj1();
			
			//SET_OSD_DISP_ROTATE(_DISP_ROTATE_180);
			//OsdDispDisableOsd();
			//SET_OSD_STATE(_MENU_NONE);
			//SysModeSetResetTarget(_MODE_ACTION_RESET_TO_DISPLAY_SETTING);
		break;
#endif

#if _DEF_KVM_FUN
		case _MENU_FUN_KVM:
			g_usAdjustValue = (BYTE)OsdDisplayDetOverRangeRotation(g_usAdjustValue, 2, _OFF, _ON);
			SET_FUN_KVM(g_usAdjustValue);
#if(_PCB_TYPE == _RL6432__156PIN__HKMRT255XE08__1T1H1DP_LVDS)
			if(GET_FUN_KVM() == _OFF)//�Զ�
			{
				if(SysSourceGetInputPort()== _D0_INPUT_PORT )
				{
						HUB_SWITCH(0);
						HUB_SWITCH2(0);
				}
				else
				{
					HUB_SWITCH(1);
					HUB_SWITCH2(1);
				`}
			}
			else
			{
				if(GET_FUN_KVM() == 1)	//PC
				{
					HUB_SWITCH(1);
					HUB_SWITCH2(1);
				}
				else if(GET_FUN_KVM() == 2) //Type-c
				{
					HUB_SWITCH(0);
					HUB_SWITCH2(0);
				}
				else
				{
					HUB_SWITCH(0);
					HUB_SWITCH2(0);
				}
			}
#endif
			break;
#endif


	}
		
		UpdateMaskValue();
		
		RTDNVRamSaveOSDData();
}




//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void Osd3thInterfaceAdjust(void)
{
	switch(GetOsdShowType(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)))
	{ 
		case _TYPE_SLIDER:
		
			OsdDispSliderAndNumber(_ITEM_1_ROW+OSD_SubMenuCur*_OSD_ITEM_ROW_CHANGE, (OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)) , GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)));
			break;

		case _TYPE_ARROW:
		
			OsdFuncAdj();	
			ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
			if(GET_OSD_STATE()!=_MENU_FUN_Energy)
			{
				Osd3thChange(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur));
			//	OsdFuncClearOsd(_ITEM_1_ROW+OSD_SubMenuCur*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_SLIDER+1, 12 , 1);					 
			//	RTDOsdTableFuncPutStringCenter(_ITEM_1_ROW+OSD_SubMenuCur*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_SLIDER+1, _OSD_ITEM_COL_SLIDER+12, _PFONT_PAGE_ITEM_1 + OSD_SubMenuCur, (OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)),  GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)), COLOR(_COLOR_MENU_FONT, _CP_BG), 0, GET_OSD_LANGUAGE());
			}
			break;

		case _TYPE_SUBMENU:
	
			OsdFuncAdj();			
			break;
						
		default :
			break;
	}
	
}


//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------

#if(_PCB_TYPE == _RL6432__156PIN__HKMRT2556E01__2H1DP__LVDS)
BYTE OsdFuncGetOsdItemFlag(void)
{    
    switch(GET_OSD_INPUT_PORT_OSD_ITEM())
    {		
		
#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)        
		case _OSD_INPUT_D0 :
			return _D0_INPUT_PORT;
			break;
#endif

#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)        
		case _OSD_INPUT_D1:
			return _D3_INPUT_PORT;
			break;
#endif


#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)        
		case _OSD_INPUT_D2:
			return _D2_INPUT_PORT;
			break;
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)        
		case _OSD_INPUT_D3:
			return _D1_INPUT_PORT;
			break;
#endif

#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)        
		case _OSD_INPUT_D4:
			return _D4_INPUT_PORT;
			break;
#endif
		

#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)        
		case _OSD_INPUT_D5:
            return _D5_INPUT_PORT;
			break;
#endif

#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)        
		case _OSD_INPUT_D6:
            return _D6_INPUT_PORT;
			break;
#endif

        default:
            break;
    }
    
	return _NO_INPUT_PORT;
}
#elif(_PCB_TYPE == _RL6463__128PIN__HKMRT2525E02__1A2H__LVDS && _DEF_HDMI_SWAP)
BYTE OsdFuncGetOsdItemFlag(void)
{    
    switch(GET_OSD_INPUT_PORT_OSD_ITEM())
    {		
		
#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)        
		case _OSD_INPUT_D0 :
			return _D1_INPUT_PORT;
			break;
#endif

#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)        
		case _OSD_INPUT_D1:
			return _D0_INPUT_PORT;
			break;
#endif


#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)        
		case _OSD_INPUT_D2:
			return _D2_INPUT_PORT;
			break;
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)        
		case _OSD_INPUT_D3:
			return _D3_INPUT_PORT;
			break;
#endif

#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)        
		case _OSD_INPUT_D4:
			return _D4_INPUT_PORT;
			break;
#endif
		

#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)        
		case _OSD_INPUT_D5:
            return _D5_INPUT_PORT;
			break;
#endif

#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)        
		case _OSD_INPUT_D6:
            return _D6_INPUT_PORT;
			break;
#endif

        default:
            break;
    }
    
	return _NO_INPUT_PORT;
}
#else
BYTE OsdFuncGetOsdItemFlag(void)
{    
    switch(GET_OSD_INPUT_PORT_OSD_ITEM())
    {

#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)        
        case _OSD_INPUT_A0 :
            return _A0_INPUT_PORT;
            break;
#endif
#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)        
        case _OSD_INPUT_D0 :
            return _D0_INPUT_PORT;
            break;
#endif

#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)        
		case _OSD_INPUT_D1:
            return _D1_INPUT_PORT;
			break;
#endif

#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)        
		case _OSD_INPUT_D2:
            return _D2_INPUT_PORT;
			break;
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)        
		case _OSD_INPUT_D3:
            return _D3_INPUT_PORT;
			break;
#endif

#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)        
		case _OSD_INPUT_D4:
            return _D4_INPUT_PORT;
			break;
#endif

#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)        
		case _OSD_INPUT_D5:
            return _D5_INPUT_PORT;
			break;
#endif

#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)        
		case _OSD_INPUT_D6:
            return _D6_INPUT_PORT;
			break;
#endif

        default:
            break;
    }
    
	return _NO_INPUT_PORT;
}

#endif

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncApplyMap(BYTE ucWidth, BYTE ucHeight, BYTE ucColor)
{
    BYTE ucI = 0;
    BYTE ucTmp = 17; // Row Height = 18

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
       (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
    {
        ucI = ucWidth;
        ucWidth = ucHeight;
        ucHeight = ucI;
        ucTmp = 11;  // Row Height = 12
    }
#endif

    // Row Command
    
    for(ucI = 0; ucI < ucHeight; ucI++)
    {
        ScalerOsdCommandAllByte(ucI, 0x80, ucTmp, ucWidth);
    }
    
    // Row Command end
    ScalerOsdCommandByte(ucHeight, _OSD_BYTE0, 0x00);

    // Frame Control (set font start address)
    g_usFontSelectStart = ucHeight + 1;
    g_usFontTableStart = g_usFontSelectStart + (WORD)(ucWidth * ucHeight);
    ScalerOsdSramBaseAddressSet(_OSD_A, 0, g_usFontSelectStart, g_usFontTableStart);

    // Character Command initial
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
       (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
    {
        ucTmp = 0x4E;  // 18 Pixel
    }
    else
#endif
    {
        ucTmp = 0x4C;  // 12 Pixel
    }

    ScalerOsdCharCommandByteSeries(g_usFontSelectStart, _OSD_BYTE0, ucTmp, (WORD)ucWidth * ucHeight);
    ScalerOsdCharCommandByteSeries(g_usFontSelectStart, _OSD_BYTE1, 0, (WORD)ucWidth * ucHeight);
    ScalerOsdCharCommandByteSeries(g_usFontSelectStart, _OSD_BYTE2, ucColor, (WORD)ucWidth * ucHeight);

    g_ucOsdWidth = ucWidth; // for calculation (unit: word count)
    g_ucOsdHeight = ucHeight;
    SET_OSD_MAPA_COL_MAX(WIDTH(g_ucOsdWidth));

    ScalerOsdVerticalStartSelect(_OSD_VSYNC_SELECT_DVS);
    ScalerOsdDoubleFunction(GET_OSD_DOUBLE_SIZE(), GET_OSD_DOUBLE_SIZE());
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncSetPosition(EnumOsdPositionType enumOsdPositionType, WORD usX, WORD usY)
{
#if(_D_DOMAIN_PATH == _D_DOMAIN_4_PATH)
    WORD usShiftValue = 0;
    BYTE ucXdouble = 1;
    WORD usTemp = 0;

    if(GET_OSD_DOUBLE_SIZE() == _ON)
    {
        ucXdouble = 2;
    }

    if(ScalerOsdGetHorizontalDelayStep() == _OSD_HORIZONTAL_DELAY_STEP_4_PIXEL)
    {
        // change horizontal delay step to 1 pixel for FB shift
        ScalerOsdHorizontalDelayStep(_OSD_HORIZONTAL_DELAY_STEP_1_PIXEL);
        usX *= 4;
    }

#if(_OSD_POSITION_OFFSET_CORRECTION == _ON)
    if(CHECK_OSD_POSITION_POST_V_OFFSET_COMPENSATION() == _TRUE)
    {
        usY = GET_OSD_POSITION_POST_V_OFFSET_COMPENSATION(usY);
    }
    else
    {
        usY = (usY >= GET_OSD_POSITION_V_OFFSET_CORRECT_COMPENSATION()) ? (usY - GET_OSD_POSITION_V_OFFSET_CORRECT_COMPENSATION()) : (usY);
    }
#endif

    if(enumOsdPositionType == _OSD_POSITION_GLOBAL_A)
    {
        if((usX * ucXdouble) <= 100)
        {
//            ScalerOsdPosition(enumOsdPositionType, (usX * ucXdouble), usY);
            ScalerOsdPosition(enumOsdPositionType, (usX), usY);
            ScalerOsdFBShiftValue(_OSD_FRONT_BACK_SHIFT_OUTSIDE, 0);
        }
        else if((usX * ucXdouble) <= (4094 + 100))
        {
            ScalerOsdPosition(enumOsdPositionType, 100 / ucXdouble, usY);
            ScalerOsdFBShiftValue(_OSD_FRONT_BACK_SHIFT_OUTSIDE, (usX * ucXdouble) - 100);
        }
        else // > 4095+100
        {
            ScalerOsdPosition(enumOsdPositionType, ((usX * ucXdouble) - 4094) / ucXdouble, usY);
            ScalerOsdFBShiftValue(_OSD_FRONT_BACK_SHIFT_OUTSIDE, 4094);
        }

        ScalerOsdFBShiftValue(_OSD_FRONT_BACK_SHIFT_INSIDE, 0x00);
        ScalerOsdFBShiftBoundarySize(0x00, 0x00);
        ScalerOsdFBShiftEn(_ENABLE);
    }
    else if(enumOsdPositionType == _OSD_POSITION_GLOBAL_B)
    {
        usShiftValue = ScalerOsdGetFBShiftValue(_OSD_FRONT_BACK_SHIFT_OUTSIDE);

        if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_0) ||
           (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_180))
        {
            usTemp = g_ucOsdWidthB * 12;
        }
        else
        {
            usTemp = g_ucOsdHeightB * 18;
        }

        // if HPOS over halt of Panel width + shift value, adjust to adaptable HPOS
        if((usX * ucXdouble) > ((_PANEL_DH_WIDTH / 2 + usShiftValue) - (usTemp * ucXdouble)))
        {
            ScalerOsdPosition(enumOsdPositionType, (((_PANEL_DH_WIDTH / 2 + usShiftValue) - (usTemp * ucXdouble)) / ucXdouble), usY);
        }
        else
        {
            ScalerOsdPosition(enumOsdPositionType, ((usX * ucXdouble) - usShiftValue) / ucXdouble, usY);
        }
    }
#else

#if(_OSD_POSITION_OFFSET_CORRECTION == _ON)
    if(CHECK_OSD_POSITION_POST_V_OFFSET_COMPENSATION() == _TRUE)
    {
        usY = GET_OSD_POSITION_POST_V_OFFSET_COMPENSATION(usY);
    }
    else
    {
        usY = (usY >= GET_OSD_POSITION_V_OFFSET_CORRECT_COMPENSATION()) ? (usY - GET_OSD_POSITION_V_OFFSET_CORRECT_COMPENSATION()) : (usY);
    }
#endif

    ScalerOsdPosition(enumOsdPositionType, usX, usY);
#endif

    ScalerTimerWaitForEvent(_EVENT_DVS);
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncTransparency(BYTE ucTrans)
{
#if 0//(_PROJECT == _RL6463_PROJECT) ||(_PROJECT == _RL6851_PROJECT)
	ucTrans=(ucTrans/13)<<4;
#endif
    ScalerOsdSetTransparency(ucTrans);
}

//--------------------------------------------------
// Description  :
// Input Value  : Blending type1:Only windows blending.
//                Blending type2:All blending.
//                Blending type3:Windows & Character background blending.
// Output Value : None
//--------------------------------------------------
void OsdFuncBlending(BYTE ucType)
{
    ScalerOsdVerticalStartSelect(_OSD_VSYNC_SELECT_DVS);
    ScalerOsdWindow7SpecialFunction(_OSD_WINDOW_7_FUNCTION_MASK_REGION_TRANSPARENT_ALL);
    ScalerOsdSetTransparencyType(ucType);
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncCloseWindow(EnumOsdWindowsType enumWinIndex)
{
    ScalerOsdWindowDisable(enumWinIndex);
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncDisableOsd(void)
{
    ScalerOsdDisableOsd();
#if(_INTERNAL_AUDIO_TEST_SUPPORT == _ON)
    if(ScalerAudioGetInternalAudioGenEnable(SysSourceGetInputPort()) == _ENABLE)
    {
        SysAudioInternalGenTestProc(_OFF);
	}
#endif
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
  //  ScalerOsd2FontFunction(_DISABLE);
  //  ScalerOsdDisableOsd();
  //  OsdFuncCloseWindow(_OSD_WINDOW_ALL);
    g_stOsdInfo.b1DynamicDiapointStatus = _FALSE;
#endif
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncEnableOsd(void)
{
    ScalerOsdEnableOsd();
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if 0
void OsdFuncChangeIconColor1Bit(BYTE ucRow, BYTE ucItem, BYTE ucWidth, BYTE ucHeight, BYTE ucColor)
{
    // BYTE ucRow;
    BYTE ucCol = 3;

    if((ucRow == 18) || (ucRow == 8))
    {
        OsdFuncChangeColor1Bit(ucRow, ucCol, 8, ucHeight, (ucColor << 4) & 0xF0, _FONTFROM_256_512);
    }
    else
    {
        ucCol = COL(4) + ((ucItem % 4) * 10) - 2;
        OsdFuncChangeColor1Bit(ucRow, ucCol, ucWidth, ucHeight, (ucColor << 4) & 0xF0, _FONTFROM_0_255);
    }
}
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncChangeColor1Bit(BYTE ucRow, BYTE ucCol, BYTE ucWidth, BYTE ucHeight, BYTE ucColor, BYTE ucFontSelectFrom)
{
    WORD usOsdAddr = (WORD)ucRow * g_ucOsdWidth + ucCol + g_usFontSelectStart;
    BYTE ucHeightCount = 0;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    BYTE ucWidthCount = 0;

    if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
    {
        for(ucWidthCount = 0; ucWidthCount < ucWidth; ucWidthCount++)
        {
            usOsdAddr = (WORD)(g_ucOsdWidth - ucRow - ucHeight) + g_ucOsdWidth * (ucCol + ucWidthCount) + g_usFontSelectStart;
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE0, (0x4E | ucFontSelectFrom), ucHeight);
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE2, ucColor, ucHeight);
        }
    }
    else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
    {
        for(ucWidthCount = 0; ucWidthCount < ucWidth; ucWidthCount++)
        {
            usOsdAddr = (WORD)(g_ucOsdHeight - 1 - ucCol - ucWidthCount) * g_ucOsdWidth + ucRow + g_usFontSelectStart;
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE0, (0x4E | ucFontSelectFrom), ucHeight);
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE2, ucColor, ucHeight);
        }
    }
    else
#endif
    {
        for(ucHeightCount = 0; ucHeightCount < ucHeight; ucHeightCount++)
        {
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE0, (0x4C | ucFontSelectFrom), ucWidth);
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE2, ucColor, ucWidth);
            usOsdAddr += g_ucOsdWidth;
        }
    }
}
#endif

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncSet2BitIconOffset(WORD ucOffset)
{
    ScalerOsd2BitFontOffset(ucOffset);
}
void OsdFuncSet4BitIconOffset(WORD ucOffset)
{
#if _PROJECT == _RL6463_PROJECT	 ||	   _PROJECT == _RL6851_PROJECT
	ucOffset=ucOffset;
#else
    ScalerOsd4BitFontOffset(ucOffset);
#endif
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncClearOsd(BYTE ucRow, BYTE ucCol, BYTE ucWidth, BYTE ucHeight)
{
    WORD usOsdAddr = (WORD)ucRow * g_ucOsdWidth + ucCol + g_usFontSelectStart;
    BYTE ucHeightCount = 0;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    BYTE ucWidthCount = 0;

    if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
    {
        for(ucWidthCount = 0; ucWidthCount < ucWidth; ucWidthCount++)
        {
            usOsdAddr = (WORD)(g_ucOsdWidth - ucRow - ucHeight) + g_ucOsdWidth * (ucCol + ucWidthCount) + g_usFontSelectStart;
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE0, 0x4E, ucHeight);
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE1, 0x00, ucHeight);
        }
    }
    else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
    {
        for(ucWidthCount = 0; ucWidthCount < ucWidth; ucWidthCount++)
        {
            usOsdAddr = (WORD)(g_ucOsdHeight - 1 - ucCol - ucWidthCount) * g_ucOsdWidth + ucRow + g_usFontSelectStart;
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE0, 0x4E, ucHeight);
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE1, 0x00, ucHeight);
        }
    }
    else
#endif
    {
        for(ucHeightCount = 0; ucHeightCount < ucHeight; ucHeightCount++)
        {
            // 1 Bit Font
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE0, 0x4C, ucWidth);
            ScalerOsdCharCommandByteSeries(usOsdAddr, _OSD_BYTE1, 0x00, ucWidth);
            usOsdAddr += g_ucOsdWidth;
        }
    }
}

#if(_SIX_COLOR_SUPPORT == _ON)
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncSixColorAdjust(void)
{
    ScalerColorSixColorAdjust(GET_OSD_SIX_COLOR(), GET_OSD_SIX_COLOR_HUE(), GET_OSD_SIX_COLOR_SATURATION());
}
#endif

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if 0
void OsdFuncColorFormatAdjust(void)
{
    switch(SysSourceGetInputPort())
    {
        case _A0_INPUT_PORT:

            if(GET_OSD_COLOR_FORMAT() == _COLOR_SPACE_RGB)
            {
                SET_VGA_COLOR_FORMAT_STATUS(_COLOR_SPACE_RGB);
            }
            else
            {
                SET_VGA_COLOR_FORMAT_STATUS(_COLOR_SPACE_YPBPR);
            }

            break;

#if(_D0_INPUT_PORT_TYPE == _D0_DVI_PORT)
        case _D0_INPUT_PORT:
#endif

#if(_D1_INPUT_PORT_TYPE == _D1_DVI_PORT)
        case _D1_INPUT_PORT:
#endif

#if(_D2_INPUT_PORT_TYPE == _D2_DVI_PORT)
        case _D2_INPUT_PORT:
#endif

#if(_D3_INPUT_PORT_TYPE == _D3_DVI_PORT)
        case _D3_INPUT_PORT:
#endif

            if(GET_OSD_COLOR_FORMAT() == _COLOR_SPACE_RGB)
            {
                SET_DVI_COLOR_FORMAT_STATUS(_COLOR_SPACE_RGB);
            }
            else
            {
                SET_DVI_COLOR_FORMAT_STATUS(_COLOR_SPACE_YPBPR);
            }

            break;

        default:
            break;
    }

#if(_OVERSCAN_SUPPORT == _ON)
    if(GET_OSD_OVERSCAN_STATUS() == _ON)
    {
        SysModeSetResetTarget(_MODE_ACTION_RESET_TO_DISPLAY_SETTING);
    }
    else
#endif
    {
        SysModeColorSpaceConvert(UserCommonInterfaceGetColorFormat(), _DB_APPLY_POLLING);
#if((_GLOBAL_HUE_SATURATION == _ON) && (_GLOBAL_COLOR_CONVERT_HUE_SATURATION_FUNCTION == _ON))
        if(GET_OSD_PCM_STATUS() != _PCM_OSD_NATIVE)
        {
            UserAdjustGlobalHueSat((SWORD)GET_OSD_HUE(), GET_OSD_SATURATION());
        }
#endif
    }
}
#endif
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if(_OCC_SUPPORT == _ON)//����Ҫ���µ�
void OsdFuncColorPcmAdjust(void)
{
#if(_PCM_FUNCTION == _ON)
    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

    UserCommonAdjustGammaRegionEnable(_FUNCTION_OFF);
    ScalerColorSRGBEnable(_FUNCTION_OFF);
    ScalerColorPCMInputGammaEnable(_FUNCTION_OFF);

#if((_OCC_SUPPORT == _ON) && (_RGB_3D_GAMMA == _ON))
    ScalerColorRGB3DGammaEnable(_FUNCTION_OFF);

#endif
    if(GET_OSD_PCM_STATUS() != _PCM_OSD_NATIVE)
    {
#if((_OCC_SUPPORT == _ON) && (_RGB_3D_GAMMA == _ON))
        if(GET_OSD_PCM_STATUS() == _PCM_OSD_SOFT_PROFT)
        {
            UserAdjust3DGamma(GET_OSD_PCM_SOFT_PROFT_MODE());
        }
#endif
        UserAdjustPCM(GET_OSD_PCM_STATUS());
        ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

#if(_BRIGHTNESS_SUPPORT == _ON)
        ScalerColorBrightnessEnable(_FUNCTION_OFF);
#endif

#if(_CONTRAST_SUPPORT == _ON)
        ScalerColorContrastEnable(_FUNCTION_OFF);
#endif

#if((_GLOBAL_HUE_SATURATION == _ON) && (_GLOBAL_COLOR_CONVERT_HUE_SATURATION_FUNCTION == _ON))
        UserAdjustGlobalHueSat((SWORD)GET_OSD_HUE(), GET_OSD_SATURATION());
#endif

        UserCommonAdjustGammaRegionEnable(_FUNCTION_ON);
        ScalerColorSRGBEnable(_FUNCTION_ON);
        ScalerColorPCMInputGammaEnable(_FUNCTION_ON);

#if((_OCC_SUPPORT == _ON) && (_RGB_3D_GAMMA == _ON))
        if(GET_OSD_PCM_STATUS() == _PCM_OSD_SOFT_PROFT)
        {
            ScalerColorRGB3DGammaEnable(_FUNCTION_ON);
        }
#endif
    }
    else
    {
#if(_GAMMA_FUNCTION == _ON)
#if(_OCC_PCM_GAMMA_SUPPORT == _ON)
        UserAdjustPCM(GET_OSD_PCM_STATUS());
#else
        UserAdjustGamma(GET_OSD_GAMMA());
#endif
#endif

#if(_GLOBAL_HUE_SATURATION == _ON)
        UserAdjustGlobalHueSat((SWORD)GET_OSD_HUE(), GET_OSD_SATURATION());
#endif

#if((_GAMMA_FUNCTION == _ON) || (_GLOBAL_HUE_SATURATION == _ON))
        ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

#if(_GAMMA_FUNCTION == _ON)
        if(GET_OSD_GAMMA() != _GAMMA_OFF)
        {
            UserCommonAdjustGammaRegionEnable(_FUNCTION_ON);

#if(_RGB_GAMMA_FUNCTION == _ON)
            ScalerColorRGBOutputGammaEnable(_FUNCTION_ON);
#endif
        }
#endif

#if(_GLOBAL_HUE_SATURATION == _ON)
        ScalerColorSRGBEnable(_FUNCTION_ON);
#endif

#if(_OCC_PCM_GAMMA_SUPPORT == _ON)
#if(_BRIGHTNESS_SUPPORT == _ON)
        ScalerColorBrightnessEnable(_FUNCTION_OFF);
#endif

#if(_CONTRAST_SUPPORT == _ON)
        ScalerColorContrastEnable(_FUNCTION_OFF);
#endif

#else
#if(_CONTRAST_SUPPORT == _ON)
        UserAdjustContrast(GET_OSD_CONTRAST());
#endif

#if(_BRIGHTNESS_SUPPORT == _ON)
        UserAdjustBrightness(GET_OSD_BRIGHTNESS());
#endif
#endif

#endif  // End of #if((_GAMMA_FUNCTION == _ON) || (_GLOBAL_HUE_SATURATION == _ON))

    }
#endif  // End of #if(_PCM_FUNCTION == _ON)
}
#endif 

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if(_PCB_TYPE == _RL6432__156PIN__HKMRT2556E01__2H1DP__LVDS)
void OsdFuncSetOsdItemFlag(void)
{
    // input port
#if(_SOURCE_AUTO_ON)
    if(SysSourceGetScanType() == _SOURCE_SWITCH_AUTO_IN_GROUP)
    {
        SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_AUTO);
    }
    else
#endif    
    {
        switch(SysSourceGetInputPort())
        {
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)        
            case _A0_INPUT_PORT:
                SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_A0);
                break;
#endif

#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)        
            case _D0_INPUT_PORT:
                SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D0);
                break;
#endif

#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)        
			case _D1_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D3);
				break;
#endif

#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)        
			case _D2_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D2);
				break;
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)        
			case _D3_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D1);
				break;
#endif

#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)        
			case _D4_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D4);
				break;
#endif

#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)        
			case _D5_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D5);
				break;
#endif

#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)        
			case _D6_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D6);
				break;
#endif
            default:
                break;
        }
    }
}
#elif(_PCB_TYPE == _RL6463__128PIN__HKMRT2525E02__1A2H__LVDS && _DEF_HDMI_SWAP)
void OsdFuncSetOsdItemFlag(void)
{
    // input port
#if(_SOURCE_AUTO_ON)
    if(SysSourceGetScanType() == _SOURCE_SWITCH_AUTO_IN_GROUP)
    {
        SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_AUTO);
    }
    else
#endif    
    {
        switch(SysSourceGetInputPort())
        {
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)        
            case _A0_INPUT_PORT:
                SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_A0);
                break;
#endif

#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)        
            case _D0_INPUT_PORT:
                SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D1);
                break;
#endif

#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)        
			case _D1_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D0);
				break;
#endif

#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)        
			case _D2_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D2);
				break;
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)        
			case _D3_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D3);
				break;
#endif

#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)        
			case _D4_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D4);
				break;
#endif

#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)        
			case _D5_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D5);
				break;
#endif

#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)        
			case _D6_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D6);
				break;
#endif
            default:
                break;
        }
    }
}
#else

void OsdFuncSetOsdItemFlag(void)
{
    // input port
#if(_SOURCE_AUTO_ON)
    if(SysSourceGetScanType() == _SOURCE_SWITCH_AUTO_IN_GROUP)
    {
        SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_AUTO);
    }
    else
#endif    
    {
        switch(SysSourceGetInputPort())
        {
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)        
            case _A0_INPUT_PORT:
                SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_A0);
                break;
#endif

#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)        
            case _D0_INPUT_PORT:
                SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D0);
                break;
#endif

#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)        
			case _D1_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D1);
				break;
#endif

#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)        
			case _D2_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D2);
				break;
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)        
			case _D3_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D3);
				break;
#endif

#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)        
			case _D4_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D4);
				break;
#endif

#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)        
			case _D5_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D5);
				break;
#endif

#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)        
			case _D6_INPUT_PORT:
				SET_OSD_INPUT_PORT_OSD_ITEM(_OSD_INPUT_D6);
				break;
#endif
            default:
                break;
        }
    }
}
#endif
#if(_FREEZE_SUPPORT == _ON)
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : _TRUE / _FALSE
//--------------------------------------------------
bit OsdFuncCheckFreezeDisable(void)
{
   /* if(((((GET_OSD_STATE() >= _MENU_DISPLAY_AUTO) &&
          (GET_OSD_STATE() <= _MENU_DISPLAY_PHASE)) ||
         (GET_OSD_STATE() == _MENU_COLOR_FORMAT) ||
         (GET_OSD_STATE() == _MENU_ADVANCE_ITEM) ||
         (GET_OSD_STATE() == _MENU_OTHER_RESET) ||
         (GET_OSD_STATE() == _MENU_DISPLAY_LATENCY)) &&
        (GET_KEYMESSAGE() == _MENU_KEY_MESSAGE)) ||
       ((GET_OSD_STATE() == _MENU_ADVANCE_ULTRA_VIVID_ADJUST) && (GET_OSD_ULTRA_VIVID_STATUS() == _ULTRA_VIVID_OFF) && (GET_KEYMESSAGE() == _RIGHT_KEY_MESSAGE)) ||
       ((GET_OSD_STATE() == _MENU_ADVANCE_ULTRA_VIVID_ADJUST) && (GET_OSD_ULTRA_VIVID_STATUS() == _ULTRA_VIVID_L) && (GET_KEYMESSAGE() == _LEFT_KEY_MESSAGE)))
   */
   if(0){
        OsdDispOsdMessage(_OSD_DISP_DISABLE_FREEZE_MSG);
        ScalerTimerActiveTimerEvent(SEC(1), _USER_TIMER_EVENT_OSD_DISABLE_FREEZE_MSG);
        SET_OSD_STATE(GET_OSD_STATE_PREVIOUS());
        SET_OSD_FREEZE_STATUS(_OFF);
        UserCommonAdjustDisplayFreeze(_OFF);
#if(_URGENT_EVENT_CHECK_MODE == _OFF)
        SET_FREEZE_DISABLE_MSG_STATE(_ON);
#endif
        return _TRUE;
    }
    return _FALSE;
}


#endif

#if(_HDMI_MULTI_EDID_SUPPORT == _ON)
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
BYTE OsdFuncGetHdmiPortVersion(EnumSourceSearchPort enumSearchPort)
{
    switch(enumSearchPort)
    {
#if(_D0_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D0_INPUT_PORT:
            return (GET_OSD_D0_HDMI_VER());
            break;
#endif

#if(_D1_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D1_INPUT_PORT:
            return (GET_OSD_D1_HDMI_VER());
            break;
#endif

#if(_D2_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D2_INPUT_PORT:
            return (GET_OSD_D2_HDMI_VER());
            break;
#endif

#if(_D3_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D3_INPUT_PORT:
            return (GET_OSD_D3_HDMI_VER());
            break;
#endif

#if(_D4_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D4_INPUT_PORT:
            return (GET_OSD_D4_HDMI_VER());
            break;
#endif

#if(_D5_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D5_INPUT_PORT:
            return (GET_OSD_D5_HDMI_VER());
            break;
#endif

        default:
            return 0;
            break;
    }
}
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFuncSetHdmiPortVersion(EnumSourceSearchPort enumSearchPort,BYTE ucValue)
{
    ucValue = ucValue;

    switch(enumSearchPort)
    {
#if(_D0_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D0_INPUT_PORT:
            SET_OSD_D0_HDMI_VER(ucValue);
            break;
#endif

#if(_D1_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D1_INPUT_PORT:
            SET_OSD_D1_HDMI_VER(ucValue);
            break;
#endif

#if(_D2_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D2_INPUT_PORT:
            SET_OSD_D2_HDMI_VER(ucValue);
            break;
#endif

#if(_D3_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D3_INPUT_PORT:
            SET_OSD_D3_HDMI_VER(ucValue);
            break;
#endif

#if(_D4_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D4_INPUT_PORT:
            SET_OSD_D4_HDMI_VER(ucValue);
            break;
#endif

#if(_D5_HDMI_MULTI_EDID_SUPPORT == _ON)
        case _D5_INPUT_PORT:
            SET_OSD_D5_HDMI_VER(ucValue);
            break;
#endif
        default:
            break;
    }
}
#endif
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
void OsdMainLoopPollingfunction(void)
{
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
    UserAdjustSmartCrosshairHandler();
#endif

}
#endif

#endif // End of #if(_OSD_TYPE == _REALTEK_2014_OSD)

