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
// ID Code      : RTD2014Osd.c No.0000  //IDO
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_OSD__

#include "UserCommonInclude.h"
#define _DEF_OSD_SIZE1		6

#if(_OSD_TYPE == _REALTEK_2014_OSD)
#if _DEF_OSD_2525
BYTE code OsdStateDefine1[6][6]={     

	{// 1
		_DEF_P1_PICTURE_ITEM0,
		_DEF_P1_PICTURE_ITEM1,
		_DEF_P1_PICTURE_ITEM2,
		_DEF_P1_PICTURE_ITEM3,
		_DEF_P1_PICTURE_ITEM4,
		_DEF_P1_PICTURE_ITEM5
	},

	{// 2
		_DEF_P2_DISPLAY_ITEM0,
		_DEF_P2_DISPLAY_ITEM1,
		_DEF_P2_DISPLAY_ITEM2,
		_DEF_P2_DISPLAY_ITEM3,
		_DEF_P2_DISPLAY_ITEM4,
		_DEF_P2_DISPLAY_ITEM5
	},

	{// 3
		_DEF_P3_COLORTEMP_ITEM0,
		_DEF_P3_COLORTEMP_ITEM1,
		_DEF_P3_COLORTEMP_ITEM2,
		_DEF_P3_COLORTEMP_ITEM3,
		_DEF_P3_COLORTEMP_ITEM4,
		_DEF_P3_COLORTEMP_ITEM5
	},

	{// 4
		_DEF_P4_OSDSETTING_ITEM0,
		_DEF_P4_OSDSETTING_ITEM1,
		_DEF_P4_OSDSETTING_ITEM2,
		_DEF_P4_OSDSETTING_ITEM3,
		_DEF_P4_OSDSETTING_ITEM4,
		_DEF_P4_OSDSETTING_ITEM5
	},

	{// 5
		_DEF_P5_RESET_ITEM0,
		_DEF_P5_RESET_ITEM1,
		_DEF_P5_RESET_ITEM2,
		_DEF_P5_RESET_ITEM3,
		_DEF_P5_RESET_ITEM4,
		_DEF_P5_RESET_ITEM5
	},

	{// 6
		_DEF_P6_MISC_ITEM0,
		_DEF_P6_MISC_ITEM1,
		_DEF_P6_MISC_ITEM2,
		_DEF_P6_MISC_ITEM3,
		_DEF_P6_MISC_ITEM4,
		_DEF_P6_MISC_ITEM5
	},

};
#else

BYTE xdata OsdStateDefine1[6][6]={0};
#endif
#if _DEF_Energy_Msg
BYTE xdata OSD_EnergyValue = 0;
#endif
#if !_DEF_OSD_2525
BYTE xdata OSD_MAIN_MENU_ITEM = 0;
BYTE xdata OSD_SubMenuCur = 0;

BYTE xdata OSD_MASK[10] = {0};
BYTE xdata OSD_ITEM_BASE[_MENU_NULL - _MENU_FUN_BACKLIGHT] = {0};
BYTE xdata OSD_ITEM_MASK[10] = {0}; 
#else
BYTE idata OSD_MAIN_MENU_ITEM = 0;
BYTE idata OSD_SubMenuCur = 0;
BYTE idata OSD_ITEM_MASK[6] = {0}; 
#endif


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
StructOsdInfo g_stOsdInfo;

WORD g_usAdjustValue;
WORD g_usBackupValue;
BYTE g_ucLogoTimerCounter;
WORD g_usPowerDownCount;

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void UserOsdHandler(void);
void RTDOsdSystemFlowProc(void);
void RTDOsdEventMsgProc(void);
#if((_HDMI_HDR10_SUPPORT == _ON) && (_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT) &&(_HDMI_MAC_PAGE72_USE == _ON))
extern void ScalerTMDSRx3GetHDR10Data(BYTE *pucHDRData);
#endif

#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)||(Project_ID == ID_CW_HK2556E18_2T1H_SN238CS041_LVDS_FDH60HZ_20230522)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
			
BYTE xdata g_SouceSelect = 1;
#endif

#if (_LED_EFFECT)
extern BYTE led_start;
#endif
//***************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  : OSD Handler, executed in the main loop
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if _DEF_OSD_2525
BYTE GetOsdStateDefine(BYTE i,BYTE j)
{
	return OsdStateDefine1[i][j];
}

BYTE GetOsdStateSubMenuCur(BYTE suber)
{
	BYTE i=0,j=0;

	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
		{
			if(OsdStateDefine1[i][j]==suber)
				return i;
		}
	
	return 0XFF;
}

BYTE GetOsdStateSubMenuCur_1(BYTE suber2,BYTE suber )
{
	BYTE i=0,j=0;

	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(OsdStateDefine1[i][j]==suber)
			break;
	}
	if(suber2==i)
		return _TRUE;
	else
		return _FALSE;
}

#endif
extern void ScalerDpRx0SetDpLaneMapping(EnumTypeCPinCfgType enumPinAssignment, EnumTypeCOrientation enumOrientation);
extern void ScalerDpRx1SetDpLaneMapping(EnumTypeCPinCfgType enumPinAssignment, EnumTypeCOrientation enumOrientation);
void TypeC_Proc(void)
{
#if(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E20__1T1DP2H__eDPVB1||_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2775E05__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E18_1DP2H1T_EDP)
		ScalerDpRx0SetDpLaneMapping(0,0);
	
#endif
#if(_PCB_TYPE == _RL6851__128PIN__HKMRT2525BRE10__1A1T1H__LVDS)
	//TPYEC_PN_SWAP_FLAG();
ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
#endif	                                                                                                                                              
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)
		if(GET_OSD_LANGUAGE() == _ENGLISH)
		{
			_LANGUAGE_SWITCH(0);
		}
		else
		{
			_LANGUAGE_SWITCH(1);
		}

	if(bD0_DP_PIN16_CONNECT == _FALSE)
		ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
	if(bD1_DP_PIN16_CONNECT == _FALSE)
		ScalerDpRx1SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);


	if((g_SouceSelect != 0))
	{	
		
		if((bD0_DP_PIN16_CONNECT == _FALSE)&&((MCU_FFE4_DDC0_EDID_IRQ & _BIT0) == _TRUE)&&(SysSourceGetInputPort() != _D1_INPUT_PORT))
		{

			if(SysSourceGetInputPort() != _D0_INPUT_PORT)
			{
			
				SET_FORCE_POW_SAV_STATUS(_FALSE);
				SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
				MCU_FFE4_DDC0_EDID_IRQ |=  (_BIT0);
				SysSourceSwitchInputPort(_D0_INPUT_PORT);
				SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
			}

		}	 
		 else if(!PCB_D1_PIN()&&(SysSourceGetInputPort() != _D0_INPUT_PORT)&&((MCU_FFE5_DDC1_EDID_IRQ & _BIT0) == _TRUE))
		 {	 
			 if(SysSourceGetInputPort() != _D1_INPUT_PORT)
			 {	 
			 
				 SET_FORCE_POW_SAV_STATUS(_FALSE);
				 SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);				 
				 MCU_FFE5_DDC1_EDID_IRQ |=	(_BIT0);
				 SysSourceSwitchInputPort(_D1_INPUT_PORT);
				 SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
			 }
			 
		 }
		 

	}



	ScalerSetByte(0x1022, (BYTE)0); // D
	ScalerSetByte(0x1023, (BYTE)0); // A

    ScalerSetByte(0X102F, (BYTE)1); // 66 C
    ScalerSetBit(0X1030, ~(_BIT7 | _BIT2 | _BIT1 | _BIT0), (BYTE)1); // 67 B
	_ROTATION_OUT_B = 0;
	_ROTATION_OUT_C = 0;
	


	if(_ROTATION_IN_A == 0)
	{
		_3036_ROTATION1 = 1;
		
		_ROTATION_OUT_B = 1;

		if(_ROTATION_IN_A == 0)
		{
			_3036_ROTATION2 = 0;
		}
		else
		{
			_3036_ROTATION2 = 1;
		}
		

	}
	else if(_ROTATION_IN_D == 0)
	{
	
		_3036_ROTATION1 = 0;

		
		_ROTATION_OUT_B = 1;

		if(_ROTATION_IN_D== 0)
		{
			_3036_ROTATION2 = 0;
		}
		else
		{
			_3036_ROTATION2 = 1;
		}

	}

#endif

#if(Project_ID == ID_CW_HK2556E18_2T1H_SN238CS041_LVDS_FDH60HZ_20230522)
	if(bD0_DP_PIN16_CONNECT == _FALSE)
		ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
	if(bD1_DP_PIN16_CONNECT == _FALSE)
		ScalerDpRx1SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);


#endif
#if 0//(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
			

	ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
	if(SysSourceGetInputPort()== _D0_INPUT_PORT )
	{
		HUB_SWITCH(0);

	}
	else
	{

		HUB_SWITCH(1);
	}
	
	if((g_SouceSelect != 0))
	{	

		if((bD0_DP_PIN16_CONNECT == _FALSE)&&((MCU_FFE4_DDC0_EDID_IRQ & _BIT0) == _TRUE)&&(SysSourceGetInputPort() != _D1_INPUT_PORT || SysSourceGetInputPort() != _D2_INPUT_PORT))
		{

			if(SysSourceGetInputPort() != _D0_INPUT_PORT)
			{
			
				SET_FORCE_POW_SAV_STATUS(_FALSE);
				SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
				MCU_FFE4_DDC0_EDID_IRQ |=  (_BIT0);
				SysSourceSwitchInputPort(_D0_INPUT_PORT);
				SysSourceSetScanType(_SOURCE_SWITCH_AUTO_IN_GROUP);
			}

		}	
	}

#endif
#if(Project_ID == ID_2795E02_1TYEPC1DP1HDMI_20201119)||(Project_ID == ID_CHANGJIA_2795E02_1T1DP1H_AUO_M270HTN02_2_VBY_144HZ_20210202)//||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)


	ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
	if(SysSourceGetInputPort()== _D0_INPUT_PORT )
	{
		if(HUB_SWITCH_GET() == 1)
		{
			HUB_SWITCH(0);
		}
	}
	else
	{
		if(HUB_SWITCH_GET() == 1)
		{
			HUB_SWITCH(1);
		}
	}
#endif

#if(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2775E04__1T1DP1H__eDPVB1)
			
	if(SysSourceGetInputPort()== _D0_INPUT_PORT &&  GET_HUB_SWITCH()!=_HUB_C)
	{
		HUB_SWITCH(_HUB_C);
		HUB_SWITCH_INIT(_HUB_INIT_ON);
		ScalerTimerDelayXms(100);
		HUB_SWITCH_INIT(_HUB_INIT_OFF);

	}
	else if(SysSourceGetInputPort()!= _D0_INPUT_PORT &&  GET_HUB_SWITCH()!=_HUB_B)
	{
		HUB_SWITCH(_HUB_B);
		HUB_SWITCH_INIT(_HUB_INIT_ON);
		ScalerTimerDelayXms(100);
		HUB_SWITCH_INIT(_HUB_INIT_OFF);

	}	
#endif
#if(_PCB_TYPE == _RL6432__156PIN__HKMRT2557E17_1T1P1H_LVDS)
ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
#endif
#if(_PCB_TYPE == _RL6432__156PIN__HKMRT255XE08__1T1H1DP_LVDS)||(_PCB_TYPE == _RL6432__156PIN__HKMRT2557E09__1T1H1DP_EDP)
	PCB_D0_HOTPLUG(1);
	ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
	
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
		}
	}
	else
	{
		if(GET_FUN_KVM() == 1)	//PC
		{
			HUB_SWITCH(1);
		    HUB_SWITCH2(1);
		}
		else if(GET_FUN_KVM() == 2)	//Type-c
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
#if(Project_ID == ID_2795E02_1TYEPC1DP1HDMI_20201119)||(Project_ID == ID_CHANGJIA_2795E02_1T1DP1H_AUO_M270HTN02_2_VBY_144HZ_20210202)\
	||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6432__216PIN__HKM_RT2785E17_1T1P2H_LVDS)\
	||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2775E05__1T1DP1H__eDPVB1)
	
    ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
//	ScalerDpRx0SetDpLaneMapping(0);
#endif
#if (  (_PCB_TYPE == _RL6449__216PIN__HK_M_RT2795E12_1HDMIDP1DPOUT1TYPEC_EDP)\
	||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1))
					

					if(GET_FUN_KVM() == _OFF)//�Զ�   TypeC_Proc
					{
						if(SysSourceGetInputPort()== _D0_INPUT_PORT )
						  {
								HUB_SWITCH(0);
								//HUB_SWITCH2(0);
						   }
						else
						 {
							HUB_SWITCH(1);
							//HUB_SWITCH2(1);
						 }
					}
					else
					{
						if(GET_FUN_KVM() == 1)	//PC
						 {
							HUB_SWITCH(1);
							//HUB_SWITCH2(1);
						 }
						else if(GET_FUN_KVM() == 2) //Type-c
						{
							HUB_SWITCH(0);
							//HUB_SWITCH2(0);
						 }
						else
						{
							HUB_SWITCH(0);
							//HUB_SWITCH2(0);
						 }
					}
#endif
#if(_PCB_TYPE == _RL6432__216PIN__HKM_RT2785E19_1T1P1H_LVDS)
	ScalerDpRx0SetDpLaneMapping(_TYPE_C_PIN_ASSIGNMENT_C, _TYPE_C_ORIENTATION_UNFLIP);
#endif

}


void UserOsdHandler(void)
{	
    RTDOsdSystemFlowProc();
    RTDOsdEventMsgProc();
	TypeC_Proc();
}

//--------------------------------------------------
// Description  : OSD system flow
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDOsdSystemFlowProc(void)
{
	#if(Project_ID == ID_TIEMU_HK2513E02_1V1H__SGM2701B01_2_FHD75HZ__20200718)
	static BYTE count = 0;

	#endif
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
    OsdMainLoopPollingfunction();
	//DebugMessageSystem("SysModeGetModeState()", SysModeGetModeState());
#endif
    switch(SysModeGetModeState())
    {
        case _MODE_STATUS_POWER_OFF:
		#if _DEF_DX_KEY_LED
			ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_RG_LED_FLICKER);
		#endif

            if(SysModeGetModeStateChange() == _TRUE)
            {
                SET_FORCE_POW_SAV_STATUS(_FALSE);
            }

            break;

        case _MODE_STATUS_INITIAL:
			
			
            if(SysModeGetModeStateChange() == _TRUE)
            {
            DebugMessageOsd("1.Start", 1111);
#if(_FREESYNC_OD_MEASURE == _ON)
                UserAdjustFREESYNCODMeasure();
#endif
#if(_LOGO_TYPE != _LOGO_NONE)
    			if(GET_OSD_BURNING_MODE() == _OFF)
				{
#if(Project_ID == ID_DX_HK2556E01_1P2H_SG3151B053_FHD165HZ_20230726)	              
	                UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
					OsdDispShowLogo();
#else
	                OsdDispShowLogo();
	                UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
#endif
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
					SET_OSD_DIAL_POINT_STYLE(_OFF);
#endif

					ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE);				
					ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_BUININ_MSG);
#if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
                ScalerTimerActiveTimerEvent(SEC(2), _USER_TIMER_EVENT_AUDIO_TTS_SHOW_LOGO);
#else
	                ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE_OSD_LOGO);
#endif
				}
				else
				{
					OsdDispDisableOsd();
				}
#else				
				OsdDispDisableOsd();
#endif
				#if(Project_ID == ID_SHUNWEI_HK27851DP2HDMI__AUO_M270DAN02_0_QHD60HZ__20200706)||(Project_ID == ID_SHUNWEI_HK27851DP2HDMI__BOE_MV315QHB_N10_QHD75HZ__20201128)||(Project_ID == ID_SHUNWEI_NYC_HK27851DP2HDMI__AUO_M270DAN02_0_QHD60HZ__20200706)||(Project_ID == ID_SHUNWEI_NYC_HK2785E02_1P2H_AUO_P270DAN01_0_QHD60HZ_20210524)

				PCB_D1_HOTPLUG(_D1_HOT_PLUG_LOW);
				ScalerTimerDelayXms(300);
				PCB_D1_HOTPLUG(_D1_HOT_PLUG_HIGH);

				PCB_D2_HOTPLUG(_D2_HOT_PLUG_LOW);
				ScalerTimerDelayXms(300);
				PCB_D2_HOTPLUG(_D2_HOT_PLUG_HIGH);
				
				#endif

			//2556E02  2556E06	
			#if(Project_ID == ID_HHT_HK2556E06_1P1H_INN_M270KCJ_L5E_QHD75HZ_20210120)

				PCB_D1_HOTPLUG(_D1_HOT_PLUG_LOW);
				ScalerTimerDelayXms(300);
				PCB_D1_HOTPLUG(_D1_HOT_PLUG_HIGH);
			#endif

				
			#if(Project_ID == ID_SHUNWEI_HK2561DP1HDMI__COST_SG2701B05_3_FHD165HZ__20200604)
				#if(_D0_INPUT_PORT_TYPE==_D0_HDMI_PORT)
					PCB_D0_HOTPLUG(_D0_HOT_PLUG_LOW);
				#endif
				#if(_D1_INPUT_PORT_TYPE==_D1_HDMI_PORT)
					PCB_D1_HOTPLUG(_D1_HOT_PLUG_LOW);
				#endif
				#if(_D2_INPUT_PORT_TYPE==_D2_HDMI_PORT)
					PCB_D2_HOTPLUG(_D2_HOT_PLUG_LOW);
				#endif
				#if(_D3_INPUT_PORT_TYPE==_D3_HDMI_PORT)
					PCB_D3_HOTPLUG(_D3_HOT_PLUG_LOW);
				#endif
				#if(_D4_INPUT_PORT_TYPE==_D4_HDMI_PORT)
					PCB_D4_HOTPLUG(_D4_HOT_PLUG_LOW);
				#endif
				#if(_D5_INPUT_PORT_TYPE==_D5_HDMI_PORT)
					PCB_D5_HOTPLUG(_D5_HOT_PLUG_LOW);
				#endif
					ScalerTimerDelayXms(300);
				#if(_D0_INPUT_PORT_TYPE==_D0_HDMI_PORT)
					PCB_D0_HOTPLUG(_D0_HOT_PLUG_HIGH);
				#endif
				#if(_D1_INPUT_PORT_TYPE==_D1_HDMI_PORT)
					PCB_D1_HOTPLUG(_D1_HOT_PLUG_HIGH);
				#endif
				#if(_D2_INPUT_PORT_TYPE==_D2_HDMI_PORT)
					PCB_D2_HOTPLUG(_D2_HOT_PLUG_HIGH);
				#endif
				#if(_D3_INPUT_PORT_TYPE==_D3_HDMI_PORT)
					PCB_D3_HOTPLUG(_D3_HOT_PLUG_HIGH);
				#endif
				#if(_D4_INPUT_PORT_TYPE==_D4_HDMI_PORT)
					PCB_D4_HOTPLUG(_D4_HOT_PLUG_HIGH);
				#endif
				#if(_D5_INPUT_PORT_TYPE==_D5_HDMI_PORT)
					PCB_D5_HOTPLUG(_D5_HOT_PLUG_HIGH);
				#endif
			#endif
			}

            break;

        case _MODE_STATUS_SEARCH:

            if(SysModeGetModeStateChange() == _TRUE)
            {
#if(_FREEZE_SUPPORT == _ON)
                if(GET_OSD_FREEZE_STATUS() == _ON)
                {
                    SET_OSD_FREEZE_STATUS(_OFF);
                }
#endif
                if(SysPowerGetPowerStatus() == _POWER_STATUS_NORMAL)
                {
                    UserInterfaceKeyPadLedControl(_LED_POWER_SEARCH);
                }
            }

            break;

        case _MODE_STATUS_DISPLAY_SETTING:

            break;

        case _MODE_STATUS_ACTIVE:
			/*
			DebugMessageSystem("-------------------Input----------------------", 0);
			DebugMessageSystem("Input Timing H Polarity", GET_INPUT_TIMING_H_POLARITY());
			DebugMessageSystem("Input Timing V Polarity", GET_INPUT_TIMING_V_POLARITY());
			DebugMessageSystem("Input Timing InterLace", GET_INPUT_TIMING_INTERLACE_FLG());
			DebugMessageSystem("Input Timing HFreq", GET_INPUT_TIMING_HFREQ());
			DebugMessageSystem("Input Timing HTotal", GET_INPUT_TIMING_HTOTAL());
			DebugMessageSystem("Input Timing HStart", GET_INPUT_TIMING_HSTART());
			DebugMessageSystem("Input Timing HWidth", GET_INPUT_TIMING_HWIDTH());
			DebugMessageSystem("Input Timing HSyncWidth", GET_INPUT_TIMING_HSYNCWIDTH());
			DebugMessageSystem("Input Timing VFreq", GET_INPUT_TIMING_VFREQ());
			DebugMessageSystem("Input Timing VTotal", GET_INPUT_TIMING_VTOTAL());
			DebugMessageSystem("Input Timing VStart", GET_INPUT_TIMING_VSTART());
			DebugMessageSystem("Input Timing VHeight", GET_INPUT_TIMING_VHEIGHT());
			DebugMessageSystem("Input Timing VSyncSWidth", GET_INPUT_TIMING_VSYNCWIDTH());
			*/
			
            if(SysModeGetModeStateChange() == _TRUE)
            {
	            if((GET_OSD_FREE_SYNC_STATUS() != _OFF)||(GET_INPUT_TIMING_VFREQ()<= _MPRT_MIN_FRAME_RATE))
				{	
					#if(_MPRT_SUPPORT == _ON)
					if(GET_OSD_MPRT()!=_OFF)
	            	{
	            		SET_OSD_MPRT(_OFF);
						SET_OSD_OD_STATUS(_OFF);		
						PCB_BACKLIGHT_POWER(_LIGHT_CONTROL_OFF);
#if(_MPRT_SUPPORT == _ON)
						UserAdjustLowMotionBlurDisplay(GET_OSD_MPRT());
#endif
						ScalerTimerActiveTimerEvent(SEC(0.1), _USER_TIMER_EVENT_MPRT);
	            	}
					#endif
				}
			#if _DEF_DX_KEY_LED
				ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_RG_LED_FLICKER);
			#endif
#if 0//(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)||(Project_ID == ID_2795E02_1TYEPC1DP1HDMI_20201119)||(Project_ID == ID_HHT_2795E06_1T1P1H_M280DCA_E3B_20210330)  ||(Project_ID == ID_HUIXIONG_CROSSOVER_2795E06_1T1P1H_M350QVR010_VBY_WQHD100HZ_20210427)
							PCB_USB_HUB_POWER(0);
							ScalerTimerDelayXms(300);
							PCB_USB_HUB_POWER(1);
							PCB_USB_POWER(_USB_POWER_ON);
							ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_USB_POWER_ON);
#elif(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
							PCB_USB_HUB_POWER(0);
							ScalerTimerDelayXms(300);
							PCB_USB_HUB_POWER(1);
#elif 0//(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E18_1DP2H1T_EDP)
							_TYPE_C_VCC_POWER_OFF();
							ScalerTimerDelayXms(300);
							_TYPE_C_VCC_POWER_ON();
#elif 0//(_PCB_TYPE == _RL6432__216PIN__HKM_RT2785E17_1T1P2H_LVDS)
				//
							if(g_ucSearchIndexPre != SysSourceGetInputPort())
							{
								PCB_USB_POWER(_USB_POWER_OFF);
				
								if(SysSourceGetInputPort() == _D0_INPUT_PORT)
								{
									if(PCB_USB_SWITCH_GET() == _USB_SWTICH_PC)
									{
										PCB_USB_SWITCH_SET(_USB_SWTICH_Type_C);
									}
				
								}
								else
								{
									if(PCB_USB_SWITCH_GET() == _USB_SWTICH_Type_C)
									{
										PCB_USB_SWITCH_SET(_USB_SWTICH_PC);
									}
								}	
								ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_USB_POWER_ON);
				
								g_ucSearchIndexPre = SysSourceGetInputPort();
							}
#endif

#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)/*||(Project_ID == ID_CW_HK2556E18_2T1H_SN238CS041_LVDS_FDH60HZ_20230522)*/||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
			
				PCB_USB_HUB_POWER(0);
				ScalerTimerDelayXms(300);
				PCB_USB_HUB_POWER(1);
#endif

#if(_DEF_DX_LED_MODE || _DEF_DX_LED_MODE2)
			MENU_AdjustRGBLedState(GET_OSD_LED_TYPE());
#elif(_DEF_DX_LED_MODE3)
			DaoXing_LedModeAdjustrRGB(GET_OSD_LED_TYPE());
#elif(_LED_EFFECT == _OFF)
						
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
#if(_MPRT_SUPPORT == _ON)
				UserAdjustLowMotionBlurDisplay(GET_OSD_MPRT());			
#endif

                if(SysPowerGetPowerStatus() == _POWER_STATUS_NORMAL)
                {
                    UserInterfaceKeyPadLedControl(_LED_POWER_ACTIVE);

#if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
                    UserAdjustAudioTtsPlayEvent(_AUDIO_TTS_EVENT_POWER_ON);
#endif // End of #if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
                }

            }

            break;

        case _MODE_STATUS_NOSUPPORT:

            if(SysModeGetModeStateChange() == _TRUE)
            {
                if(SysPowerGetPowerStatus() == _POWER_STATUS_NORMAL)
                {
                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SHOW_NOSUPPORT_MSG);
                    UserInterfaceKeyPadLedControl(_LED_POWER_NOSUPPORT);
                }
            }

            break;

        case _MODE_STATUS_NOSIGNAL:
								

            if(SysModeGetModeStateChange() == _TRUE)
            {
    			if(GET_OSD_BURNING_MODE() == _ON)
    			{
    				//RTDBurnInMenu();
					
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)
					SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
#else					
					SysSourceSetScanType(_SOURCE_SWITCH_AUTO_IN_GROUP);
#endif
					ScalerTimerActiveTimerEvent(SEC(2), _USER_TIMER_EVENT_BUININ_MSG);

					#if(_BURNIN_MSG_MENU_SUPPORT==_ON)
						#if(_BURN_IN_LED)
						UserInterfaceKeyPadLedControl(_LED_POWER_SAVING);
						#endif
						RTDBurnInMenu();
					#endif

					UserAdjustContrast(100);
					UserAdjustBacklight(100);
					UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
				}
				else
				{

			       ScalerTimerActiveTimerEvent(SEC(2), _USER_TIMER_EVENT_OSD_SHOW_NO_SIGNAL);

				}
            }
			
            break;

        case _MODE_STATUS_POWER_SAVING:

            if(SysSourceGetCableDetect(SysSourceGetInputPort()) == _FALSE)
            {
                SET_FORCE_POW_SAV_STATUS(_FALSE);
            }

            if(SysPowerGetPowerStatus() == _POWER_STATUS_NORMAL)
            {
#if(_SOURCE_AUTO_ON)
				DebugMessageOsd("7.AUTO SOURCE",2);
                if(GET_OSD_POWER_SAVING_SHOW_SOURCE() == _TRUE)
                {
                    SET_OSD_POWER_SAVING_SHOW_SOURCE(_FALSE);
			
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SHOW_CHANGE_SOURCE_MENU_MSG);
                }
 #endif
            }
		 else if(GET_OSD_WAKE_UP_SWITCH_DDCCI_PORT() == _TRUE)
            {
                SET_OSD_WAKE_UP_SWITCH_DDCCI_PORT(_FALSE);

                SET_OSD_EVENT_MESSAGE(_OSDEVENT_WAKE_UP_SWITCH_DDCCI_PORT_MSG);
            }
#if(_DP_SUPPORT == _ON)
            else if(GET_OSD_POWER_SAVING_SHOW_DP_OPTION() == _TRUE)
            {
                SET_OSD_POWER_SAVING_SHOW_DP_OPTION(_FALSE);
                SET_OSD_EVENT_MESSAGE(_OSDEVENT_DP_VERSIOM_MSG);
            }
#endif
#if(_DP_DEBUG_MSG == _ON)
            else if(GET_OSD_POWER_SAVING_SHOW_DP_INFO() == _TRUE)
            {
                SET_OSD_POWER_SAVING_SHOW_DP_INFO(_FALSE);

                OsdDispOsdMessage(_OSD_DISP_INPUT_SIGNAL_MSG);
                UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
            }
#endif


#if(Project_ID == ID_TIEMU_HK2513E02_1V1H__SGM2701B01_2_FHD75HZ__20200718)
			count++;

			if(count == 30)
			{

				count = 0;
				
				PCB_LED_TYPE_FLASH();

			}

			
#endif
            break;

        case _MODE_STATUS_FACTORY:

            break;

        default:

            break;
    }

#if(_DP_EMBEDDED_SWITCH_SUPPORT_TYPE == _DP_EMBEDDED_SWITCH_2_DP)
    // Check embedded DP switch status
    UserCommonAdjustEmbeddedDpSwitch();
#endif

    if(GET_KEYMESSAGE() < _KEY_AMOUNT)
    {
        // hot key
        if((SysModeGetModeState() == _MODE_STATUS_ACTIVE) ||    
           (SysModeGetModeState() == _MODE_STATUS_NOSUPPORT) ||
           (SysModeGetModeState() == _MODE_STATUS_NOSIGNAL) ||
           (SysModeGetModeState() == _MODE_STATUS_POWER_SAVING))
        {
			if((((GET_OSD_STATE() < _MENU_NULL)&&(_MENU_FUN_BACKLIGHT <= GET_OSD_STATE())&& GetOsdShowType(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)) == _TYPE_SLIDER)||(_MENU_HOT_KEY_FUNC == GET_OSD_STATE() && GetOsdShowType(OSD_SubMenuCur) == _TYPE_SLIDER) )&& ((GET_KEYMESSAGE() == _LEFT_KEY_MESSAGE) || (GET_KEYMESSAGE() == _RIGHT_KEY_MESSAGE)))
			{
                SET_KEYREPEATENABLE();
            }
        }

        if(GET_OSD_IN_FACTORY_MENU_STATUS() == _TRUE)
        {
            RTDFactoryMenuOperation();
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE);
        }
        else
        {
#if(_FREEZE_SUPPORT == _ON)
#if(_URGENT_EVENT_CHECK_MODE == _ON)
            if(ScalerTimerSearchActiveTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE_FREEZE_MSG) == _TRUE)
            {
                return;
            }
#else
            if(GET_FREEZE_DISABLE_MSG_STATE() == _ON)
            {
                return;
            }
#endif
#endif
            // back up previous OSD State
            SET_OSD_STATE_PREVIOUS(GET_OSD_STATE());
#if(_FREEZE_SUPPORT == _ON)
            if(GET_OSD_FREEZE_STATUS() == _ON) // Confirm whether disable the freeze status
            {
                if(OsdFuncCheckFreezeDisable() == _TRUE)
                {
                    return;
                }
            }
#endif

            (*OperationTable[GET_OSD_STATE()])();

            if(GET_OSD_IN_FACTORY_MENU_STATUS() == _FALSE)
            {
	#if(_DEF_HOTKEY_TIME)
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE && GET_OSD_STATE() >= _MENU_FUN_SOURCE_HOTKEY)
                {
                    ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
                }
				else
	#endif
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE &&((GET_OSD_STATE() < _MENU_END)&&(_MENU_NONE < GET_OSD_STATE())))
                {
                #if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
                	if((GET_OSD_TIME_OUT() < 5) || (GET_OSD_STATE() == _HOT_KEY_LOS_TYPE1) || (GET_OSD_STATE() == _HOT_KEY_LOS_TYPE2))
                #else
					if((GET_OSD_TIME_OUT() < 10) || (GET_OSD_STATE() == _HOT_KEY_LOS_TYPE1) || (GET_OSD_STATE() == _HOT_KEY_LOS_TYPE2))
				#endif
                  	{
                        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE);
                    }
                    else
                    {
                        ScalerTimerReactiveTimerEvent(SEC(GET_OSD_TIME_OUT()), _USER_TIMER_EVENT_OSD_DISABLE);
                    }
                }
            }


/*
            if((GET_OSD_STATE() >= _MENU_NONE) &&
                (GET_OSD_STATE() < _MENU_END) &&
                ((SysModeGetModeState() == _MODE_STATUS_POWER_SAVING) || (SysModeGetModeState() == _MODE_STATUS_NOSIGNAL)))
            {
                ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE);
                ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_SHOW_POWER_SAVING);
            }
            else//(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
            {
                ScalerTimerReactiveTimerEvent(SEC(GET_OSD_TIME_OUT()), _USER_TIMER_EVENT_OSD_DISABLE);
            }

            if(GET_OSD_IN_FACTORY_MENU_STATUS())
            {
                ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE);
            }
*/
        }
    }
}

//--------------------------------------------------
// Description  : OSD event message processing function
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDOsdEventMsgProc(void)
{//DebugMessageSystem("OSD_EVENT_MESSAGE",GET_OSD_EVENT_MESSAGE());
    switch(GET_OSD_EVENT_MESSAGE())
    {
        case _OSDEVENT_SHOW_NOSIGNAL_MSG:
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)
 		if(GET_OSD_BURNING_MODE()==_OFF)
		{
			SET_FORCE_POW_SAV_STATUS(_FALSE);
			SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);				
			SysSourceSwitchInputPort(_D3_INPUT_PORT);
			SysSourceSetScanType(_SOURCE_SWITCH_AUTO_IN_GROUP);
		}
 		else
#endif
		{
			ScalerDDomainBackgroundSetColor(0, 0, 0);
			ScalerDDomainBackgroundEnable(_ENABLE);
			OsdDispOsdMessage(_OSD_DISP_NOSIGNAL_MSG);
			UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
			ScalerTimerActiveTimerEvent(SEC(_DEF_OSD_DISP_NOSIGNAL_MSG_TIME), _USER_TIMER_EVENT_OSD_SHOW_POWER_SAVING);
		}
            break;

        case _OSDEVENT_SHOW_NOCABLE_MSG:
			ScalerDDomainBackgroundSetColor(0, 0, 0);
			ScalerDDomainBackgroundEnable(_ENABLE);
            OsdDispOsdMessage(_OSD_DISP_NOCABLE_MSG);
            UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
            ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_SHOW_POWER_SAVING);
            break;

        case _OSDEVENT_SHOW_NOSUPPORT_MSG:

            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_CABLE);
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_SIGNAL);

            OsdDispOsdMessage(_OSD_DISP_NOSUPPORT_MSG);
            UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
            ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_SHOW_POWER_SAVING);
            break;

        case _OSDEVENT_SHOW_FAIL_SAFE_MODE_MSG:
            OsdDispOsdMessage(_OSD_DISP_FAIL_SAFE_MODE_MSG);
            break;

       /* case _OSDEVENT_SHOW_CHANGE_SOURCE_MENU_MSG:
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_GO_TO_POWER_SAVING);
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_CABLE);
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_SIGNAL);
            SET_OSD_STATE(_MENU_HOTKEY_SOURCE);
            OsdFuncSetOsdItemFlag();
            g_usBackupValue = GET_OSD_INPUT_PORT_OSD_ITEM();
            OsdDispHotKeySourceMenu();

            ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_SHOW_POWER_SAVING);
            UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
            break;

        case _OSDEVENT_WAKE_UP_SWITCH_DDCCI_PORT_MSG:

            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_GO_TO_POWER_SAVING);
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_CABLE);
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_SIGNAL);
            SET_OSD_STATE(_MENU_HOTKEY_DDCCI);
            OsdDispHotKeyOptionMenu(_HOTKEY_DDCCI);
            ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_SHOW_POWER_SAVING);
            UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);

            break;
		*/

        case _OSDEVENT_SHOW_POWER_SAVING_EVENT_MSG:
            OsdDispDisableOsd();
			#if(_ENABLE_PAWER_SAVING_MENU == _ON)
			UserCommonInterfacePanelPowerAction(_BACKLIGHT_OFF);
          	OsdDispOsdMessage(_OSD_DISP_POWER_SAVING_MSG);
         	UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
			#endif
#if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
            UserAdjustAudioTtsPlayEvent(_AUDIO_TTS_EVENT_POWER_SAVING);
#endif // End of #if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
         
#if(_MPRT_SUPPORT == _ON)
			UserAdjustLowMotionBlurDisplay(_OFF);
#endif
			#if(_ENABLE_PAWER_SAVING_MENU == _ON)
            ScalerTimerActiveTimerEvent(SEC(2), _USER_TIMER_EVENT_GO_TO_POWER_SAVING);//ScalerTimerActiveTimerEvent(SEC(0.1), _USER_TIMER_EVENT_GO_TO_POWER_SAVING);
			#else
            ScalerTimerActiveTimerEvent(10, _USER_TIMER_EVENT_GO_TO_POWER_SAVING);
			#endif
            break;

        case _OSDEVENT_GO_TO_POWER_SAVING_EVENT_MSG:
			Cross_flag = 0;

            OsdDispDisableOsd();

#if(_LED_EFFECT)
                         SET_OSD_PRE_LED_TYPE(GET_OSD_LED_TYPE());	
                        SET_OSD_LED_TYPE(_OSDLedType_OFF);
				led_start =1;           //      //�رյ�Ч
                         // ScalerTimerDelayXms(30);
#endif
			
            SysPowerSetTargetPowerStatus(_POWER_STATUS_SAVING);
            break;

#if(_VGA_SUPPORT == _ON)
        case _OSDEVENT_DO_AUTO_CONFIG_MSG:
#if(_FREEZE_SUPPORT == _ON)
            ScalerTimerWaitForActiveTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE_FREEZE_MSG);
#endif
            OsdDispAutoConfigProc();
            break;
#endif

        case _OSDEVENT_ACTIVE_DO_ONE_TIME_MSG:

#if(_FREEZE_SUPPORT == _ON)
            ScalerTimerWaitForActiveTimerEvent(_USER_TIMER_EVENT_OSD_DISABLE_FREEZE_MSG);
#endif

#if(_VGA_SUPPORT == _ON)
            if(SysSourceGetSourceType() == _SOURCE_VGA)
            {
                if(UserInterfaceGetFirstAutoConfigStatus() == _TRUE)
                {
                    OsdDispAutoConfigProc();
                }
            }
#endif


            if(GET_OSD_STATE() == _MENU_NONE)
            {
#if 0//(_DIALPOINT_SUPPORT == _ON)
				if((SysModeGetModeState() ==_MODE_STATUS_ACTIVE)&&(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF))
				{
					OsdMenuDiaPointNFrameCounter();
				}
				else
#endif
				if(Cross_flag == 1)
				{
					RTDOsdDispHotkeyFuncAdjust(_HOT_KEY_LOS_TYPE1-_MENU_FUN_BACKLIGHT);				
				}
				else
				{
					OsdDispOsdMessage(_OSD_DISP_INPUT_SIGNAL_MSG);
#if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
                ScalerTimerActiveTimerEvent(SEC(11), _USER_TIMER_EVENT_OSD_DISABLE);
#else
                ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
#endif // End of #if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
				}
            }
            break;

        case _OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG:
            UserCommonNVRamSaveSystemData();
            break;

#if(_VGA_SUPPORT == _ON)
        case _OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG:
            UserCommonNVRamSaveModeUserData();
            break;
#endif
        case _OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG:
            RTDNVRamSaveOSDData();
            break;

#if(_VGA_SUPPORT == _ON)
        case _OSDEVENT_SAVE_NVRAM_ADCDATA_MSG:
            if(ScalerColorGetColorSpaceRGB(UserCommonInterfaceGetColorFormat()) == _TRUE)
            {
                UserCommonNVRamSaveADCSetting(_COLOR_SPACE_RGB);
            }
            else
            {
                UserCommonNVRamSaveADCSetting(_COLOR_SPACE_YPBPR);
            }
            break;
#endif

        case _OSDEVENT_SAVE_NVRAM_COLORPROC_MSG:
            RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());
            break;

        case _OSDEVENT_SAVE_NVRAM_BRICON_MSG:
            RTDNVRamSaveBriCon(SysSourceGetSourceType());
            break;

        case _OSDEVENT_SAVE_NVRAM_OSDSIXCOLORDATA_MSG:
            RTDNVRamSaveSixColorData();
            break;

	    case _OSDEVENT_SHOW_CHANGE_SOURCE_MENU_MSG:
			DebugMessageOsd("7.AUTO SOURCE",0);
			SET_OSD_POWER_SAVING_SHOW_SOURCE(_FALSE);
	    	ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_GO_TO_POWER_SAVING);
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_CABLE);
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_NO_SIGNAL);
            OsdFuncSetOsdItemFlag();
            UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
            ScalerTimerReactiveTimerEvent(SEC(GET_OSD_TIME_OUT()), _USER_TIMER_EVENT_OSD_SHOW_POWER_SAVING);
						
			OsdInputSourceHotkey();
			break;

		case _OSDEVENT_BUININ_MSG:
			
	        if((SysModeGetModeState() == _MODE_STATUS_NOSIGNAL) && GET_OSD_BURNING_MODE())
	        {
				FactoryBurnInEvent();	
				
			//	DebugMessageOsd("1.8",MCU_DDCRAM_A0[0X08]);
			//	DebugMessageOsd("1.9",MCU_DDCRAM_A0[0X09]);
	    	}
			else
			{
			
#if (_BURNIN_MSG_MENU_SUPPORT==_ON)
				OsdDispDisableOsd();
#endif
				ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_BUININ_MSG);
			}
			break;
#if 0//(_DP_SUPPORT == _ON)
        case _OSDEVENT_DP_VERSIOM_MSG:
            SET_OSD_STATE(_MENU_HOTKEY_DP_OPTION);

            if(SysSourceGetSourceType() == _SOURCE_DP)
            {
                if(SysSourceGetInputPort() == _D0_INPUT_PORT)
                {
                    OsdDispHotKeyOptionMenu(_HOTKEY_DP_D0_OPTION);
                }
                else if(SysSourceGetInputPort() == _D1_INPUT_PORT)
                {
                    OsdDispHotKeyOptionMenu(_HOTKEY_DP_D1_OPTION);
                }
                else if(SysSourceGetInputPort() == _D2_INPUT_PORT)
                {
                    OsdDispHotKeyOptionMenu(_HOTKEY_DP_D2_OPTION);
                }
                else if(SysSourceGetInputPort() == _D6_INPUT_PORT)
                {
                    OsdDispHotKeyOptionMenu(_HOTKEY_DP_D6_OPTION);
                }
            }
            else
            {
#if (_D0_INPUT_PORT_TYPE == _D0_DP_PORT)
                OsdDispHotKeyOptionMenu(_HOTKEY_DP_D0_OPTION);
#elif (_D1_INPUT_PORT_TYPE == _D1_DP_PORT)
                OsdDispHotKeyOptionMenu(_HOTKEY_DP_D1_OPTION);
#elif (_D2_INPUT_PORT_TYPE == _D2_DP_PORT)
                OsdDispHotKeyOptionMenu(_HOTKEY_DP_D2_OPTION);
#elif (_D6_INPUT_PORT_TYPE == _D6_DP_PORT)
                OsdDispHotKeyOptionMenu(_HOTKEY_DP_D6_OPTION);
#else
                SET_OSD_STATE(_MENU_NONE);
#endif
            }

            UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);
            break;
#endif
        default:
            break;
    }

    SET_OSD_EVENT_MESSAGE(_OSDEVENT_NONE_MSG);
}

#if(_NAVIGAT_MENU_SURPPORT)

void MenuNavigatNone(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
			
            if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
            {
                SET_OSD_STATE(_MENU_NAVIGAT_NONE);
				
				if(GET_OSD_FACTORY_MODE() == _ON)
				{
					RTDFactoryMainMenu();
				}
				else
				{
					OsdDispNavigatMenu();			   
				}
            }

			break;
        case _RIGHT_KEY_MESSAGE:
        case _LEFT_KEY_MESSAGE:
            if((SysModeGetModeState() == _MODE_STATUS_ACTIVE) && (GET_OSD_FACTORY_MODE() == _OFF))
            {
                SET_OSD_STATE(_MENU_NAVIGAT_NONE);
				
				OsdDispNavigatMenu();			   
            }
            break;
		case _EXIT_KEY_MESSAGE:
            if((SysModeGetModeState() == _MODE_STATUS_ACTIVE) && (GET_OSD_FACTORY_MODE() == _OFF))
			 {
				 SET_OSD_STATE(_MENU_NAVIGAT_NONE);
				 OsdDispNavigatMenu();				
			 }
            
#if(_SOURCE_AUTO_ON)
			else if(SysModeGetModeState() == _MODE_STATUS_POWER_SAVING)
			{
				SET_OSD_POWER_SAVING_SHOW_SOURCE(_TRUE);

				if((SysPowerGetPowerStatus() == _POWER_STATUS_SAVING))
				{
					SysPowerSetTargetPowerStatus(_POWER_STATUS_NORMAL);
				}
			}
#endif            
			break;

        default:
            break;
    }
}

#endif
void MenuNone(void)
{
#if(_DEF_MENU_LOCK)
if(GET_OSD_MENU_LOCK_TYPE()==1)
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
        case _RIGHT_KEY_MESSAGE:
        case _LEFT_KEY_MESSAGE:
        case _EXIT_KEY_MESSAGE:
            RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_MENU_LOCK - _MENU_FUN_BACKLIGHT);
            break;

        default:
            break;
    }
else 
#endif
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
            if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
            {
                OsdFuncSetOsdItemFlag();
				
#if(!_ENABLE_MAIN_MENU_F_ICON)
				if(GET_OSD_FACTORY_MODE() == _ON)
				{
					RTDFactoryMainMenu();
				}
				else
#endif
				
				{
	                OsdDispMainMenu();
				}
            }
            break;

        case _RIGHT_KEY_MESSAGE:
			
            if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
            {
            
			//RTDOsdDispHotkeyFuncAdjust(GET_OSD_HOTKEY_RIGHT());

        	}
  
            break;

        case _LEFT_KEY_MESSAGE:

            if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
            {
#if(Project_ID == ID_CHANGJIA_GS24S3F_HK2556E01_1P2H_M236HVR010_FHD144HZ_20210908)||(ID_CHANGJIA_HK2556E01_1P2H_M270HAN02_V6_FHD144HZ_20210908 == Project_ID)
							SET_OSD_CROSS_HAIR_TYPE1(0);
#endif
            #if(Project_ID == ID_DR_HK2785E02_1P3H_MV315QHBN10_QHD75HZ_FHD144HZ_20210428)
				SET_OSD_OVERCLOCK(GET_OSD_OVERCLOCK()+1==1?1:0);
				SET_OSD_FREE_SYNC_STATUS(_OFF);
				UserCommonInterfaceFreeSyncSupportSwitch();
				OsdGameModeInputLow();
				UserCommonInterfaceLoadEmbeddedEdidData();
				OsdGameModeInputHigh();
			#else
			#if((usKeyCode == _IR_CODE_KEY_ADD)||(usKeyCode == _IR_CODE_KEY_MINUS))
				//RTDOsdDispHotkeyFuncAdjust(GET_OSD_HOTKEY_LEFT());
			#endif
			#endif

        	}
            break;
#if(Project_ID != ID_XKBH_HK2561DP1HDMI__AUO_P320HVN05_0_FHD144HZ__20201218)
#if(_OSD_7_KEY_SUPPROT)||(_OSD_6_KEY_SUPPROT)		
			
		case _UP_KEY_MESSAGE:
			
            if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
            {
				RTDOsdDispHotkeyFuncAdjust(_DEF_HOTKEY_UP - _MENU_FUN_BACKLIGHT);
        	}
			break;
#endif

#if(_OSD_7_KEY_SUPPROT)		
					
		case _DOWN_KEY_MESSAGE:
			
			if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
			{
				RTDOsdDispHotkeyFuncAdjust(_DEF_HOTKEY_DOWN - _MENU_FUN_BACKLIGHT);
			}
			break;
#endif
#endif
        case _EXIT_KEY_MESSAGE:
#if((_NAVIGAT_MENU_SURPPORT == _OFF)&&(_SOURCE_AUTO_ON))
            if(SysModeGetModeState() == _MODE_STATUS_POWER_SAVING)
            {
                SET_OSD_POWER_SAVING_SHOW_SOURCE(_TRUE);
				DebugMessageOsd("7.AUTO SOURCE",1);

                if((SysPowerGetPowerStatus() == _POWER_STATUS_SAVING))
                {
                    SysPowerSetTargetPowerStatus(_POWER_STATUS_NORMAL);
                }
            }
			
#endif  

#if(_NAVIGAT_MENU_SURPPORT == _OFF)
            if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
        	{	
        		#if(Project_ID == ID_ZHEHAO_HK2795E041DP2HDMI__AUO_M315DVR01_9_QHD165HZ__20201104)||(Project_ID == ID_TIEMU_HK2513E02_1V1H__SGM2701B01_2_FHD75HZ__20200718)\
                    ||(ID_TIEMU_HK2513E02_1V1H__M270HVR01_1_FHD75HZ__20200908 == Project_ID)||(ID_TJ_HK2795E051DP2HDMI__AUO_M270KCJ_K7B_QHD165HZ__20200917 == Project_ID)\
                    ||(ID_ZHEHAO_HK2795E041DP2HDMI__M280DCA_UHD60HZ__20201230 == Project_ID)
	
					RTDOsdDispHotkeyFuncAdjust(_HOT_KEY_LOS_TYPE1 - _MENU_FUN_BACKLIGHT);
				#elif(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)
					RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUTO_ADJUST - _MENU_FUN_BACKLIGHT);
				#elif(Project_ID == ID_MXDZ_HK2556E02_1P1H_LSM315HP04_FHD165HZ_20210426)
					RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_ECO- _MENU_FUN_BACKLIGHT);
				#elif(_ENABLE_VGA_AUTO_ADJUST == _ON)
					if(SysSourceGetSourceType() != _SOURCE_VGA)
					{
						OsdDispDisableOsd();
						OsdInputSourceHotkey();
					}
					else
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUTO_ADJUST - _MENU_FUN_BACKLIGHT);
					}
				#elif(Project_ID    ==  ID_CS_2513E03_GuangGan_FHD60HZ)
				#else

				OsdDispDisableOsd();
				OsdInputSourceHotkey();

				#endif   	
        	}

#endif
            break;

        default:
            break;
    }
}

void OSDMainMenuMove()
{    
	switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
		#if _ENABLE_MAIN_MENU_F_ICON
			if(GET_OSD_STATE()==_OSD_MAIN_F)
			RTDFactoryMainMenu();
			else
		#endif
			OSDSubMenuMove();

            break;

        case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
			UpdateOSDMainInterface((BYTE)OsdDisplayDetOverRange(GET_OSD_STATE(), (_OSD_MAIN_END+_ENABLE_MAIN_MENU_F_ICON*GET_OSD_FACTORY_MODE()), _OSD_MAIN_START, _ON));
            break;


        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();
#if 0//(_DIALPOINT_SUPPORT == _ON)
			if((SysModeGetModeState() ==_MODE_STATUS_ACTIVE)&&(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF))
			{
#if (_DEF_HOTKEY_LEFT==_HOT_KEY_LOS_TYPE2||_DEF_HOTKEY_RIGHT==_HOT_KEY_LOS_TYPE2)
				RTDOsdDispHotkeyFuncAdjust(_HOT_KEY_LOS_TYPE2-_MENU_FUN_BACKLIGHT);
#else
				RTDOsdDispHotkeyFuncAdjust(_HOT_KEY_LOS_TYPE1-_MENU_FUN_BACKLIGHT);
#endif
			}
#endif
            break;

        default:
            break;
    }
}
/*
void MenuPicture(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
			OSDSubMenuMove();

            break;

        case _RIGHT_KEY_MESSAGE:
			#if(_ENABLE_MAIN_MENU_F_ICON == _ON)
			if(GET_OSD_FACTORY_MODE() == _ON)
            UpdateOSDMainInterface(_OSD_MAIN_F);
			else
			#endif
			UpdateOSDMainInterface(_OSD_MAIN_MISC);

            break;

        case _LEFT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_DISPLAY);



            break;

        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();

            break;

        default:
            break;
    }
}

void MenuDisplay(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
        
			OSDSubMenuMove();
            break;

        case _RIGHT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_PICTURE);

            break;

        case _LEFT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_COLORTEMP);



            break;

        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();


            break;

        default:
            break;
    }
}
void MenuColorTemp(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
        
			OSDSubMenuMove();
            break;

        case _RIGHT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_DISPLAY);

            break;

        case _LEFT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_OSDSETTING );



            break;

        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();


            break;

        default:
            break;
    }
}

void MenuOSDSetting(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
        	
			OSDSubMenuMove();
            break;

        case _RIGHT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_COLORTEMP);

            break;

        case _LEFT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_RESET );



            break;

        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();


            break;

        default:
            break;
    }
}

void MenuReset(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
        	
			OSDSubMenuMove();
            break;

        case _RIGHT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_OSDSETTING);

            break;

        case _LEFT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_MISC );



            break;

        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();


            break;

        default:
            break;
    }
}
void MenuMisc(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
        	
			OSDSubMenuMove();
            break;

        case _RIGHT_KEY_MESSAGE:
			UpdateOSDMainInterface(_OSD_MAIN_RESET);

            break;

        case _LEFT_KEY_MESSAGE:
			#if(_ENABLE_MAIN_MENU_F_ICON == _ON)
			if(GET_OSD_FACTORY_MODE() == _ON)
            UpdateOSDMainInterface(_OSD_MAIN_F);
			else
			#endif
			UpdateOSDMainInterface(_OSD_MAIN_PICTURE );



            break;

        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();


            break;

        default:
            break;
    }
}
#if(_ENABLE_MAIN_MENU_F_ICON == _ON)
void MenuF(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE:
			RTDFactoryMainMenu();//OSDSubMenuMove();
            break;

        case _RIGHT_KEY_MESSAGE:
		#if(_ENABLE_MAIN_MENU_F_ICON == _ON)
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(1), HEIGHT(1), FG_COLOR(_CP_WHITE), BG_COLOR(_CP_BG));
		#endif
			UpdateOSDMainInterface(_OSD_MAIN_MISC);
            break;

        case _LEFT_KEY_MESSAGE:
		#if(_ENABLE_MAIN_MENU_F_ICON == _ON)
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(1), HEIGHT(1), FG_COLOR(_CP_WHITE), BG_COLOR(_CP_BG));
		#endif
			UpdateOSDMainInterface(_OSD_MAIN_PICTURE );
            break;

        case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();
            break;

        default:
            break;
    }
}
#endif
*/
void MENU_FUN_COMMON(void)
{
    switch(GET_KEYMESSAGE())
    {
        case _MENU_KEY_MESSAGE: 
        case _EXIT_KEY_MESSAGE:

	        OSDSubMenuMove();
            break;

        case _RIGHT_KEY_MESSAGE:
        case _LEFT_KEY_MESSAGE:
        
			Osd3thInterfaceAdjust();
            break;
#if(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)	||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)
    if( _MENU_FUN_LANGUAGE==GET_OSD_STATE())
    {
        case _UP_KEY_MESSAGE:
        case _DOWN_KEY_MESSAGE:  	
            Osd3thInterfaceAdjust();
            break; 
    }  
#endif

        default:
            break;
    }
}
extern void OsdFuncEnergyMsgToOsd();

void MENU_HOT_KEY_FUNC_Energy(void)
{
	switch(GET_KEYMESSAGE())
	{
		case _MENU_KEY_MESSAGE: 
			SET_OSD_EnergyMsg(1-g_usAdjustValue);
			OsdFuncEnergyMsgToOsd();
			break;
			
		case _EXIT_KEY_MESSAGE:
			OsdFuncEnergyMsgToOsd();
			break;
			
		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
			if(OSD_SubMenuCur == _MENU_FUN_Energy )
			{
				g_usAdjustValue = OsdDisplayDetOverRange(g_usAdjustValue,_ON,_OFF,_ON);
				ScalerOsdChange1BitColor( ROW(6),COL(18-18*g_usAdjustValue),LENGTH(18), HEIGHT(1), FG_COLOR(_COLOR_MENU_FONT_SELECT), BG_COLOR(_CP_BG));
				ScalerOsdChange1BitColor( ROW(6),COL(0+18*g_usAdjustValue),LENGTH(18), HEIGHT(1), FG_COLOR(_COLOR_MENU_FONT), BG_COLOR(_CP_BG));
				return;
			}

			break;

		default:
			break;
	}


}
void MENU_HOT_KEY_FUNC(void)
{

	switch(GET_KEYMESSAGE())
	{
		case _MENU_KEY_MESSAGE: 
		case _EXIT_KEY_MESSAGE:

			OsdHotKeyFuncSpacialProc();			
			OsdDispDisableOsd();		
			break;
			
		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
		#if(_OSD_6_KEY_SUPPROT)
		case _UP_KEY_MESSAGE:
        #endif    
			if(OSD_SubMenuCur == 0xff)
				return;
			switch(GetOsdShowType(OSD_SubMenuCur))
			{
				case _TYPE_SLIDER:
					OsdDispSliderAndNumber(_HOTKEY_ROW_START, OSD_SubMenuCur, GetOsdValue(OSD_SubMenuCur));			
						break;
			
				case _TYPE_ARROW:
					
					//OsdFuncAdjHotKey();	
					OsdFuncAdj();
					OsdFuncClearOsd(_HOTKEY_ROW_START, _HOTKEY_SLIDER_COL+1+3, 12 , 1);					 
					RTDOsdTableFuncPutStringCenter(_HOTKEY_ROW_START, _HOTKEY_SLIDER_COL+1+3, _HOTKEY_SLIDER_COL+12+3, _PFONT_PAGE_ITEM_1 , OSD_SubMenuCur,  GetOsdValue(OSD_SubMenuCur), COLOR(_COLOR_MENU_FONT, _CP_BG), 0, GET_OSD_LANGUAGE());
						break;
			
				case _TYPE_SUBMENU:	
					
					//OsdFuncAdjHotKey();	
					OsdFuncAdj();
					OsdFuncClearOsd(_HOTKEY_ROW_START, _HOTKEY_SLIDER_COL+1, 12 , 1);					 
					RTDOsdTableFuncPutStringCenter(_HOTKEY_ROW_START, _HOTKEY_SLIDER_COL+1, _HOTKEY_SLIDER_COL+12, _PFONT_PAGE_ITEM_1 , OSD_SubMenuCur,  GetOsdValue(OSD_SubMenuCur), COLOR(_COLOR_MENU_FONT, _CP_BG), 0, 0);
						break;
							
				default :
					break;	
			
			}
			break;

		default:
			break;
	}
}

void MENU_HOT_KEY_LOS1(void)
{

	switch(GET_KEYMESSAGE())
	{
#if(Project_ID == ID_TIEMU_HK2513E02_1V1H__SGM2701B01_2_FHD75HZ__20200718)||(ID_TIEMU_HK2513E02_1V1H__M270HVR01_1_FHD75HZ__20200908 == Project_ID)||(ID_TJ_HK2795E051DP2HDMI__AUO_M270KCJ_K7B_QHD165HZ__20200917 == Project_ID)

		case _EXIT_KEY_MESSAGE:
			SET_OSD_CROSS_HAIR_TYPE1(GET_OSD_CROSS_HAIR_TYPE1()+1);
			if(GET_OSD_CROSS_HAIR_TYPE1()>3)
				SET_OSD_CROSS_HAIR_TYPE1(0);
					
			if(0 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_RED, _CP_BG), 0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_RED, _CP_BG), 0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_GREEN, _CP_BG), 0);
			else
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_GREEN, _CP_BG), 0);
#if _DYNAMIC_COLOR_AUTO_MEASURE
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(4), HEIGHT(2), FG_COLOR(_CP_RED), BG_COLOR(_CP_BG));
			SET_OSD_DIAL_POINT_STYLE(_ON);
			if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
			{
				g_stOsdInfo.b1DynamicDiapointStatus = _TRUE;
				//ScalerOsdSetColorPalette(_CP_RED,0xd1,0x05,0x00);//default diapoint color
				DebugMessageOsd("3.234",g_stOsdInfo.b1DynamicDiapointStatus);
			}
			/*if(SysSourceGetSourceType() == _SOURCE_VGA)
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_ANALOG_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_ANALOG_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			else
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_DIGITAL_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_DIGITAL_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			OsdFuncSetPosition( _OSD_POSITION_GLOBAL_A, usHCenter, usVCenter);*/
#endif

            	RTDNVRamSaveOSDData();

			
			break;
#else
		case _EXIT_KEY_MESSAGE:
			Cross_flag = 0;
			
			OsdDispDisableOsd();		

		break;

#endif
	
		case _MENU_KEY_MESSAGE: 
			Cross_flag = 0;

			OsdDispDisableOsd();		
				break;

#if(Project_ID == ID_CHANGJIA_GS24S3F_HK2556E01_1P2H_M236HVR010_FHD144HZ_20210908)||(ID_CHANGJIA_HK2556E01_1P2H_M270HAN02_V6_FHD144HZ_20210908 == Project_ID)

		case _LEFT_KEY_MESSAGE:
			SET_OSD_CROSS_HAIR_TYPE1(GET_OSD_CROSS_HAIR_TYPE1()+1);
					
			if(0 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_RED, _CP_BG), 0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_RED, _CP_BG), 0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_GREEN, _CP_BG), 0);
			else if(3 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_GREEN, _CP_BG), 0);
			else if(4 == GET_OSD_CROSS_HAIR_TYPE1())
			{
				Cross_flag = 0;
				OsdDispDisableOsd();	
			}
            RTDNVRamSaveOSDData();
				break;
				
		case _RIGHT_KEY_MESSAGE:
			Cross_flag = 0;
			OsdDispDisableOsd();
			
			RTDOsdDispHotkeyFuncAdjust(GET_OSD_HOTKEY_RIGHT());
			RTDNVRamSaveOSDData();
				break;
			
#else
		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
			SET_OSD_CROSS_HAIR_TYPE1(OsdDisplayDetOverRange(GET_OSD_CROSS_HAIR_TYPE1() ,3 ,0 , _ON));
					
			if(0 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_RED, _CP_BG), 0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_RED, _CP_BG), 0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_GREEN, _CP_BG), 0);
			else
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_GREEN, _CP_BG), 0);
#if _DYNAMIC_COLOR_AUTO_MEASURE
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(4), HEIGHT(2), FG_COLOR(_CP_RED), BG_COLOR(_CP_BG));
			SET_OSD_DIAL_POINT_STYLE(_ON);
			if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
			{
				g_stOsdInfo.b1DynamicDiapointStatus = _TRUE;
				//ScalerOsdSetColorPalette(_CP_RED,0xd1,0x05,0x00);//default diapoint color
				DebugMessageOsd("3.234",g_stOsdInfo.b1DynamicDiapointStatus);
			}
			/*if(SysSourceGetSourceType() == _SOURCE_VGA)
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_ANALOG_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_ANALOG_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			else
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_DIGITAL_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_DIGITAL_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			OsdFuncSetPosition( _OSD_POSITION_GLOBAL_A, usHCenter, usVCenter);*/
#endif

            RTDNVRamSaveOSDData();
				break;

#endif			
		
					
		default :
			break;				
	}
}

#if(_DEF_MENU_LOCK)
void MENU_HOT_KEY_MENU_LOCK(void)
{
            if(1 == GET_OSD_MENU_LOCK_TYPE())
            {
                OsdFontPut1BitTable(ROW(0), COL(0), tOSD_MENULOCK_ICON0, COLOR(_CP_RED, _CP_BG), 0);
            }
            else if(0 == GET_OSD_MENU_LOCK_TYPE())
            {
                OsdFontPut1BitTable(ROW(0), COL(0), tOSD_MENULOCK_ICON1, COLOR(_CP_RED, _CP_BG), 0);
                SET_OSD_STATE(_MENU_NONE);
            }
            OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
            RTDNVRamSaveOSDData();
}
#endif
void MENU_HOT_KEY_MUTEICON(void)
{
	switch(GET_KEYMESSAGE())
	{
		case _MENU_KEY_MESSAGE: 								
		case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();		
			break;

		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
			
			SET_OSD_VOLUME_MUTE(OsdDisplayDetOverRange(GET_OSD_VOLUME_MUTE() ,1 ,0 , _ON));
			if(GET_OSD_VOLUME_MUTE())
				OsdFontPut1BitTable( ROW(0), COL(0), tOSD_MUTE_ICON1, COLOR(_COLOR_BG_0, _CP_BG), 0);
			else
				OsdFontPut1BitTable( ROW(0), COL(0), tOSD_MUTE_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);

			break;
	}
}
#if(_DEF_ECO_ICON)

void DrawMenuEcoIcon(void)
{
switch(GET_OSD_COLOR_EFFECT())
{
 case _COLOREFFECT_STANDARD:
 	OsdFontPut2BitTable(ROW(3), COL(13), tOSD_ECO_STANDART_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_CP_BLACK), COLOR1(_CP_BLUE), COLOR2(_CP_DARKBLUE), COLOR3(_CP_LIGHTBLUE));
 break;
 
 case _COLOREFFECT_PHOTO:
 	OsdFontPut2BitTable(ROW(3), COL(13), tOSD_ECO_TEXT_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_CP_BLACK) ,COLOR1(_CP_BLUE) ,COLOR2(_CP_DARKBLUE) ,COLOR3(_CP_WHITE));
 break;

 case _COLOREFFECT_GAME:
 	OsdFontPut2BitTable(ROW(3), COL(13), tOSD_ECO_GAME_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_CP_BLACK) ,COLOR1(_CP_LIGHTBLUE) ,COLOR2(_CP_BLUE) ,COLOR3(_CP_YELLOW));
 //OsdFontPut2BitTable( ROW(3), COL(13), tOSD_ECO_RTS_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);
 //OsdFontPut2BitTable( ROW(3), COL(13), tOSD_ECO_GAME_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);
 //ScalerOsdChange2BitColor(ROW(3), COL(13), LENGTH(4), HEIGHT(3), COLOR00(0), COLOR01(1), COLOR10(3), COLOR11(9));
 break;

 case _COLOREFFECT_MOVIE:
 	OsdFontPut2BitTable(ROW(3), COL(13), tOSD_ECO_MOVIE_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_CP_BLACK) ,COLOR1(_CP_YELLOW) ,COLOR2(_CP_BLUE) ,COLOR3(_CP_RED));
 //OsdFontPut2BitTable( ROW(3), COL(13), tOSD_ECO_RTS_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);
 //OsdFontPut2BitTable( ROW(3), COL(13), tOSD_ECO_MOVIE_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);
 //ScalerOsdChange2BitColor(ROW(3), COL(13), LENGTH(4), HEIGHT(3), COLOR00(0), COLOR01(1), COLOR10(3), COLOR11(9));
 break;

 case _COLOREFFECT_FPS:
 	OsdFontPut2BitTable(ROW(3), COL(13), tOSD_ECO_FPS_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_CP_BLACK) ,COLOR1(_CP_LIGHTBLUE) ,COLOR2(_CP_LIGHTBLUE) ,COLOR3(_CP_WHITE));
 //OsdFontPut2BitTable( ROW(3), COL(13), tOSD_ECO_RTS_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);
 //OsdFontPut2BitTable( ROW(3), COL(13), tOSD_ECO_FPS_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);
 //ScalerOsdChange2BitColor(ROW(3), COL(13), LENGTH(4), HEIGHT(3), COLOR00(0), COLOR01(1), COLOR10(3), COLOR11(9));
 break;

 case _COLOREFFECT_RTS:
 	OsdFontPut2BitTable(ROW(3), COL(13), tOSD_ECO_RTS_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_CP_BLACK) ,COLOR1(_CP_LIGHTBLUE) ,COLOR2(_CP_LIGHTBLUE) ,COLOR3(_CP_WHITE));
 //OsdFontPut2BitTable( ROW(3), COL(13), tOSD_ECO_RTS_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);
 // ScalerOsdChange2BitColor(ROW(1), COL(13), LENGTH(4), HEIGHT(3), COLOR00(0), COLOR01(1), COLOR10(3), COLOR11(9));
 break;

}
g_usAdjustValue = GET_OSD_COLOR_EFFECT();

}

void MENU_HOT_KEY_ECOICON(void)
{
	switch(GET_KEYMESSAGE())
	{
		case _MENU_KEY_MESSAGE: 								
		case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();		
			break;

		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
		if(OSD_MASK_GET(_MENU_FUN_ECO_ICON))
        DrawMenuEcoIcon();
		else
		{
		g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, _COLOREFFECT_AMOUNT, _COLOREFFECT_STANDARD, _ON);
	    SET_OSD_COLOR_EFFECT(g_usAdjustValue);	
		DrawMenuEcoIcon();
		UserAdjustBacklight(GET_OSD_BACKLIGHT());
		UserAdjustContrast(GET_OSD_CONTRAST());
		UserAdjustBrightness(GET_OSD_BRIGHTNESS()); 
		#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))    
		UserAdjustColorEffectMode();
		#endif 
		}
		break;
	}
}

#endif
void MENU_HOT_KEY_SOURCE(void)
{
	switch(GET_KEYMESSAGE())
	{
		case _MENU_KEY_MESSAGE: 
			
			if(g_usBackupValue == GET_OSD_INPUT_PORT_OSD_ITEM())
				OsdDispDisableOsd();	
			else
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
			
			break;
					
		case _EXIT_KEY_MESSAGE:
			OsdDispDisableOsd();		
			break;

		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
			
			SET_OSD_INPUT_PORT_OSD_ITEM(OsdDisplayDetOverRangeRotation(GET_OSD_INPUT_PORT_OSD_ITEM() , _OSD_INPUT_AMOUNT-1, 0, _ON));
			
			OsdWindowDrawingHighlight(_OSD_WINDOW_4_1, 0, (2+GET_OSD_INPUT_PORT_OSD_ITEM()*2)*18, 13*12, (3+GET_OSD_INPUT_PORT_OSD_ITEM()*2)*18, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, _ENABLE); 
			break;
	}
}

void MENU_HOT_KEY_LOS2(void)
{

	switch(GET_KEYMESSAGE())
	{
		case _MENU_KEY_MESSAGE: 
		case _EXIT_KEY_MESSAGE:

			OsdDispDisableOsd();		
				break;
			
		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
			SET_OSD_CROSS_HAIR_TYPE2(OsdDisplayDetOverRange(GET_OSD_CROSS_HAIR_TYPE2() ,5 ,0 , _ON));
					
			if(0 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON1, COLOR(_CP_YELLOW, _CP_BG),0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON2, COLOR(_CP_RED, _CP_BG),0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON3, COLOR(_CP_YELLOW, _CP_BG),0);
			else if(3 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON4, COLOR(_CP_RED, _CP_BG),0);
			else if(4 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON5, COLOR(_CP_YELLOW, _CP_BG),0);
			else if(5 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON6, COLOR(_CP_RED, _CP_BG),0);
#if _DYNAMIC_COLOR_AUTO_MEASURE
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(8), HEIGHT(6), FG_COLOR(_CP_RED), BG_COLOR(_CP_BG));
			SET_OSD_DIAL_POINT_STYLE(_ON);
			if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
			{
				g_stOsdInfo.b1DynamicDiapointStatus = _TRUE;
				//ScalerOsdSetColorPalette(_CP_RED,0xd1,0x05,0x00);//default diapoint color
				DebugMessageOsd("3.234",g_stOsdInfo.b1DynamicDiapointStatus);
			}
			/*if(SysSourceGetSourceType() == _SOURCE_VGA)
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_ANALOG_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_ANALOG_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			else
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_DIGITAL_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_DIGITAL_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			OsdFuncSetPosition( _OSD_POSITION_GLOBAL_A, usHCenter, usVCenter);*/
#endif

            RTDNVRamSaveOSDData();
				break;
					
		default :
			break;				
	}
}
#if(_DEF_LOS_TYPE3)

void MENU_HOT_KEY_LOS3(void)
{

	switch(GET_KEYMESSAGE())
	{
		case _MENU_KEY_MESSAGE: 
		

			OsdDispDisableOsd();		
				break;
			
		case _RIGHT_KEY_MESSAGE:
		case _LEFT_KEY_MESSAGE:
			
			/*if(GET_OSD_CROSS_HAIR_TYPE2()==2)
            SET_OSD_CROSS_HAIR_TYPE2(0);
			else
			SET_OSD_CROSS_HAIR_TYPE2(GET_OSD_CROSS_HAIR_TYPE2()+1);
			
            if(0 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON1, COLOR(_CP_RED, _CP_BG),0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON2, COLOR(_CP_RED, _CP_BG),0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON3, COLOR(_CP_RED, _CP_BG),0);
			
            RTDNVRamSaveOSDData();*/
				break;

		case _EXIT_KEY_MESSAGE:
			if(GET_OSD_CROSS_HAIR_TYPE2()==2)
			{
            SET_OSD_CROSS_HAIR_TYPE2(0);
			OsdDispDisableOsd();		
			}
			else
			SET_OSD_CROSS_HAIR_TYPE2(GET_OSD_CROSS_HAIR_TYPE2()+1);
			
            if(0 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON1, COLOR(_CP_RED, _CP_BG),0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON2, COLOR(_CP_RED, _CP_BG),0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON3, COLOR(_CP_RED, _CP_BG),0);
			break;
					
		default :
			break;				
	}
}
#endif

void MENU_FUN_NULL(void)//����һЩ��ʱ���õĺ������ֲ��붯kernel���֣���ֹ������������
{
	BYTE test = 0;
	
	if(test == 1)
	{
 		OsdMenuDrawingHighlight(_OSD_WINDOW_4_1, _CP_GRAY, _CP_BG, _ENABLE);
#if(_PROJECT != _RL6463_PROJECT)
		OsdFontPut4BitTable(0,0,0);
#endif

#if((_EMBEDDED_EDID_SUPPORT == _ON) && (_DP_HDR10_SUPPORT == _ON) && (_DP_SUPPORT == _ON))
		UserAdjustHdrCheckDpVersion(0);
#endif
		OsdFuncSet4BitIconOffset( 0);
		OsdDisplaySixColorGetOneColor(0);
		OsdDisplaySixColorSetOneColor(0);
		RTDOsdDispHotkeyFuncAdjust_Energy(0);
		OsdFuncOsdToEnergyMsg();
		UserInterfaceGetdNoSupportStatus();
		UserCommonInterfaceCheckResolutionNoSupport();
#if(_HDMI_SUPPORT == _ON)
		ScalerTMDSYUV420SupportCheck(0);		
#endif
#if(_SIX_COLOR_SUPPORT == _ON)		
		ScalerColorSixColorInitial();
		ScalerColorSixColorAdjust(0,0,0);
#endif
		ScalerOsdDataPort(0);
		ScalerOsdSramAddressCount(0,0,_OSD_BYTE0);	
		UserInterfaceGetNVRamDataStatus(_CHECK_ADC_SAVE);		
#if(_FREESYNC_SUPPORT == _ON)
		ScalerFreeSyncGetFreeSyncInfo(_NO_INPUT_PORT,_SPD_INFO_OUI);
#endif
#if((_HDMI_HDR10_SUPPORT == _ON) && (_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT) &&(_HDMI_MAC_PAGE72_USE == _ON))
		ScalerTMDSRx3GetHDR10Data(pData);
#endif
	}
}


code void (*OperationTable[])(void) =
{
#if(_NAVIGAT_MENU_SURPPORT)
	MenuNavigatNone,
#endif
    MenuNone,
    
	OSDMainMenuMove,//MenuPicture,
	OSDMainMenuMove,//MenuDisplay,
	OSDMainMenuMove,//MenuColorTemp,
	OSDMainMenuMove,//MenuOSDSetting,
	OSDMainMenuMove,//MenuReset,
	OSDMainMenuMove,//MenuMisc,
	#if(_ENABLE_MAIN_MENU_F_ICON == _ON)
	 OSDMainMenuMove,//MenuF,
	#endif
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,

	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,
	OSDSubMenuMove,


	
	MENU_FUN_COMMON,//MENU_FUN_BACKLIGHT,	
	MENU_FUN_COMMON,//MENU_FUN_CONTRAST,
	MENU_FUN_COMMON,//MENU_FUN_BRIGHTNESS,
	MENU_FUN_COMMON,//MENU_FUN_SHARPNESS,
	MENU_FUN_COMMON,//MENU_FUN_ECO,
	MENU_FUN_COMMON,//MENU_FUN_DCR,
	MENU_FUN_COMMON,//MENU_FUN_HDR,
	MENU_FUN_COMMON,//_MENU_FUN_DCC,

	MENU_FUN_COMMON,//MENU_FUN_VGA_HPOSITON,	
	MENU_FUN_COMMON,//MENU_FUN_VGA_VPOSITON,	
	MENU_FUN_COMMON,//MENU_FUN_VGA_CLK, 
	MENU_FUN_COMMON,//MENU_FUN_VGA_PHASE,
	MENU_FUN_COMMON,//MENU_FUN_ASPECT,

	
	MENU_FUN_COMMON,//MENU_FUN_COLORTEMP,	
	MENU_FUN_COMMON,//MENU_FUN_R,	
	MENU_FUN_COMMON,//MENU_FUN_G,	
	MENU_FUN_COMMON,//MENU_FUN_B,	

	MENU_FUN_COMMON,	
	MENU_FUN_COMMON,//MENU_FUN_OSD_HPOSITON, 
	MENU_FUN_COMMON,//MENU_FUN_OSD_VPOSITON, 
	MENU_FUN_COMMON,//MENU_FUN_OSD_TIME, 
	MENU_FUN_COMMON,//MENU_FUN_OSD_TRANS, 

	
	MENU_FUN_NULL,//MENU_FUN_AUTO_ADJUST,	
	MENU_FUN_NULL,//MENU_FUN_AUTO_COLOR,	
	MENU_FUN_NULL,//MENU_FUN_RESET,	
#if _DEF_GuangGan_FUN
	MENU_FUN_COMMON,//_MENU_FUN_GunagGan, //3//
#endif

	MENU_FUN_COMMON,//MENU_FUN_SIGNAL,	
	MENU_FUN_COMMON,//MENU_FUN_LOWBLUE,		
	MENU_FUN_COMMON,//MENU_FUN_AUDOIMUTE,
	MENU_FUN_COMMON,//MENU_FUN_AUDOIVOLUME,
	
	MENU_FUN_COMMON,//MENU_FUN_FREESYNC,
	MENU_FUN_COMMON,//MENU_FUN_OD,
	MENU_FUN_COMMON,//MENU_FUN_POWER_OFF,
	MENU_FUN_COMMON,//MENU_FUN_LED,

	MENU_FUN_COMMON,//_MENU_FUN_FLICKER_FREE,
	MENU_FUN_COMMON,//_MENU_FUN_MPRT,
	MENU_FUN_COMMON,//_MENU_FUN_GAMMA,	
	MENU_FUN_COMMON,//_MENU_FUN_COLORGAMUT,
	MENU_FUN_COMMON,//_MENU_FUN_SATURATION
	MENU_FUN_COMMON,//_MENU_FUN_OVERCLOCK,
#if(_ROTATE_FUN_SUPPORT)
	MENU_FUN_COMMON,//_MENU_FUN_ROTATE,	//��ת
	MENU_FUN_COMMON,//_MENU_FUN_OSD_ROTATE, //��ת
#endif
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
	MENU_FUN_COMMON,//_MENU_FUN_MBRSYNC
#endif
	MENU_FUN_COMMON,//_MENU_FUN_HOTLEFT,
	MENU_FUN_COMMON,//MENU_FUN_HOTRIGHT,	
#if 1//(_OSD_POWER_SAVING_MODE)
	MENU_FUN_COMMON,//_MENU_FUN_POWER_SAVING
#endif
#if _DEF_KVM_FUN
	MENU_FUN_COMMON,//_MENU_FUN_KVM
#endif

	MENU_FUN_NULL,//_MENU_NULL
/***********************Spacil Hotkey*****************************/
	MENU_HOT_KEY_LOS1,//MENU_HOT_KEY_LOS
	MENU_HOT_KEY_LOS2,//MENU_HOT_KEY_LOS2
	MENU_HOT_KEY_SOURCE,//MENU_HOT_KEY_LOS2
	MENU_HOT_KEY_MUTEICON,//MENU_HOT_KEY_LOS2
#if(_DEF_MENU_LOCK)
    MENU_HOT_KEY_MENU_LOCK,//_MENU_FUN_MENU_LOCK,
#endif
#if(_DEF_ECO_ICON)
  MENU_HOT_KEY_ECOICON,
  #endif
  #if(_DEF_LOS_TYPE3)
    MENU_HOT_KEY_LOS3,//MENU_HOT_KEY_LOS2
  #endif
/*****************************************************************/

  	MENU_HOT_KEY_FUNC_Energy,//_MENU_FUN_Energy,
	MENU_HOT_KEY_FUNC,//_MENU_HOT_KEY_FUNC
	MENU_FUN_NULL,//_MENU_END, _OSD_MSG_MENU
};

#endif//#if(_OSD_TYPE == _REALTEK_2014_OSD)
