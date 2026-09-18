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
// ID Code      : RTD2014Key.c No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_KEY__

#include "UserCommonInclude.h"

#if(_OSD_TYPE == _REALTEK_2014_OSD)
code char KeyFlag[] = {"This is Keyboardflag Flag!"}; 
BYTE code KeyDefault[10] = 
{
	POWER_KEY,
	MENU_KEY,	
	EXIT_KEY,
	RIGHT_KEY,
	LEFT_KEY,
	
	POWER_REG,
	MENU_REG,	
	EXIT_REG,
	RIGHT_REG,
	LEFT_REG,
};

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************
//--------------------------------------------------
// Definitions of Key Mask
//--------------------------------------------------
#define _RELEASE_KEY_MASK                           0x00
#define _POWER_KEY_MASK                             0x01
#if 1//_DEF_OSD_KEY_2   KeyDefault和下面的对齐
#define _MENU_KEY_MASK                              0x02
#define _EXIT_KEY_MASK                              0x04 
#define _RIGHT_KEY_MASK                             0x08
#define _LEFT_KEY_MASK                              0x10 
#else
#define _MENU_KEY_MASK                              0x02
#define _RIGHT_KEY_MASK                             0x04
#define _LEFT_KEY_MASK                              0x08
#define _EXIT_KEY_MASK                              0x10
#endif
#define _UP_KEY_MASK                                0x20
#define _DOWN_KEY_MASK                              0x40
#define _OK_KEY_MASK                                0x80
#define _KEY5_MASK                                  0x20
#define _KEY6_MASK                                  0x40
#define _KEY7_MASK                                  0x80

#define _POWER_RIGHT_KEY_MASK                       (_POWER_KEY_MASK | _RIGHT_KEY_MASK)
#define _POWER_MENU_KEY_MASK                        (_POWER_KEY_MASK | _MENU_KEY_MASK)
#define _POWER_LEFT_RIGHT_KEY_MASK                  (_POWER_KEY_MASK | _LEFT_KEY_MASK | _RIGHT_KEY_MASK)
#define _POWER_EXIT_KEY_MASK                        (_POWER_KEY_MASK | _EXIT_KEY_MASK)

//--------------------------------------------------
// Definitions of IR Key Code
//--------------------------------------------------
#if(_IR_SUPPORT == _IR_HW_SUPPORT || _IR_VIRTUAL)
bit ir_Ready = 1;


#if(_IR_PROTOCAL == _IR_NEC_DTV328)

#define _IR_CODE_KEY_POWER                          0xB9FD
#define _IR_CODE_KEY_MENU                           0xF1FD
#define _IR_CODE_KEY_RIGHT                          0xB6FD
#define _IR_CODE_KEY_LEFT                           0xB1FD
#define _IR_CODE_KEY_EXIT                           0xF2FD


#define _IR_CODE_KEY_UP                          	0xB7FD
#define _IR_CODE_KEY_DOWN                           0xB2FD


#define _IR_CODE_KEY_SOURCE                         0xA7FD
#define _IR_CODE_KEY_MUTE                           0xA3FD
#define _IR_CODE_KEY_SCALE                          0xA0FD

#define _IR_CODE_KEY_OK                         	 0xB5FD
#define _IR_CODE_KEY_F1                         	 0xEDFD
#define _IR_CODE_KEY_P                          	 0xA1FD
#define _IR_CODE_KEY_F2                         	 0xA2FD

#define _IR_CODE_KEY_CHECK0							0X02
#define _IR_CODE_KEY_CHECK1							0XFD

#elif(_IR_PROTOCAL == _IR_SW_LGTV)

#define _IR_CODE_KEY_POWER                          0x08FB
#define _IR_CODE_KEY_SOURCE                         0x0BFB
#define _IR_CODE_KEY_SCALE                          0x4DFB

#define _IR_CODE_KEY_MENU                           0x43FB
#define _IR_CODE_KEY_EXIT                           0x5BFB
#define _IR_CODE_KEY_MUTE                           0x09FB

#define _IR_CODE_KEY_RIGHT                          0x02FB
#define _IR_CODE_KEY_LEFT                           0x03FB


#define _IR_CODE_KEY_UP                          	0x00FB
#define _IR_CODE_KEY_DOWN                           0x01FB
#define _IR_CODE_KEY_OK                         	 0x44FB

#define _IR_CODE_KEY_F1                         	 0xCEFB
#define _IR_CODE_KEY_F2                         	 0xCCFB

//#define _IR_CODE_KEY_P                          	 0x0000


#elif(_IR_PROTOCAL == _IR_SONY_B102P)
#define _IR_CODE_KEY_POWER                          0x0950
#define _IR_CODE_KEY_MENU                           0x0A50
#define _IR_CODE_KEY_RIGHT                          0x0920
#define _IR_CODE_KEY_LEFT                           0x0930
#define _IR_CODE_KEY_EXIT                           0x0940

#elif(_IR_PROTOCAL == _IR_PHILIPS_RC6)
#define _IR_CODE_KEY_POWER                          0x000C
#define _IR_CODE_KEY_MENU                           0x005C
#define _IR_CODE_KEY_RIGHT                          0x005B
#define _IR_CODE_KEY_LEFT                           0x005A
#define _IR_CODE_KEY_EXIT                           0x000A
#elif(_IR_PROTOCAL == _IR_HHT_NEC)
	#define _IR_CODE_KEY_POWER                          0x09CA
	#define _IR_CODE_KEY_MUTE                           0x46CA

	#define _IR_CODE_KEY_MENU                           0x0ECA
	#define _IR_CODE_KEY_RIGHT                          0x45CA
	#define _IR_CODE_KEY_LEFT                           0x0CCA
	#define _IR_CODE_KEY_EXIT                           0x52CA


	#define _IR_CODE_KEY_UP                          	0x0DCA
	#define _IR_CODE_KEY_DOWN                           0x5DCA

	#define _IR_CODE_KEY_P                          	 0x1BCA


	#define _IR_CODE_KEY_SOURCE                         0x1ECA
	#define _IR_CODE_KEY_SCALE                          0x17CA

	#define _IR_CODE_KEY_F1                         	 0x1DCA
	#define _IR_CODE_KEY_F2                         	 0x07CA

	#define _IR_CODE_KEY_OK                         	 0xB2FD
#elif(_IR_PROTOCAL == _IR_HHT_DZ_X5_147)
	#define _IR_CODE_KEY_POWER                          0x8716
	#define _IR_CODE_KEY_MUTE                           0xC816

	#define _IR_CODE_KEY_MENU                           0xB516
	#define _IR_CODE_KEY_RIGHT                          0x8E16
	#define _IR_CODE_KEY_LEFT                           0xBB16
	#define _IR_CODE_KEY_EXIT                           0x8916


	#define _IR_CODE_KEY_UP                          	0x8416
	#define _IR_CODE_KEY_DOWN                           0x8D16

	#define _IR_CODE_KEY_P                          	 0x8B16


	#define _IR_CODE_KEY_SOURCE                         0xDC16
	#define _IR_CODE_KEY_SCALE                          0x8A16

	#define _IR_CODE_KEY_F1                         	 0xB416
	#define _IR_CODE_KEY_F2                         	 0x8616

	#define _IR_CODE_KEY_OK                         	 0xB216
#elif(_IR_PROTOCAL == _IR_TAISHUO_NEC)
	
	#define _IR_CODE_KEY_POWER                          0x52DF
	#define _IR_CODE_KEY_SOURCE 						0x42DF

	#define _IR_CODE_KEY_OK 							0x4ADF
	#define _IR_CODE_KEY_UP                          	0x47DF
	#define _IR_CODE_KEY_DOWN                           0x4DDF
	#define _IR_CODE_KEY_RIGHT                          0x4BDF
	#define _IR_CODE_KEY_LEFT                           0x49DF

	#define _IR_CODE_KEY_EXIT                           0x53DF
	//#define _IR_CODE_KEY_AUTO_POWER                     0x48DF

	#define _IR_CODE_KEY_MENU                           0x0ADF
			
	#define _IR_CODE_KEY_F1              				0x02DF 
	#define _IR_CODE_KEY_F2              				0x09DF

	#define _IR_CODE_KEY_MUTE							0x48DF
	#define _IR_CODE_KEY_SCALE							0x8A16
#elif(_IR_PROTOCAL == _IR_MXDZ_NEC)
	#define _IR_CODE_KEY_POWER                          0x15EA
	/////eco
	#define _IR_CODE_KEY_SOURCE 						0x11EE
	#define _IR_CODE_KEY_MUTE							0x12ED
	
	#define _IR_CODE_KEY_OK 							0x37C8
	#define _IR_CODE_KEY_UP                          	0x4CB3
	#define _IR_CODE_KEY_DOWN                           0x4DB2
	//40bf 4Eb1 	
	#define _IR_CODE_KEY_RIGHT                          0x4EB1
	#define _IR_CODE_KEY_LEFT                           0x4FB0
	
	#define _IR_CODE_KEY_F1 							0X14EB//0x22DD 
	#define _IR_CODE_KEY_F2 							0X13EC

	#define _IR_CODE_KEY_EXIT                           0x3CC3
	#define _IR_CODE_KEY_EXIT2							0x38C7
	#define _IR_CODE_KEY_MENU                           0x22DD
				
	
	//#define _IR_CODE_KEY_SCALE							0x3CC3
#elif(_IR_PROTOCAL == _IR_SQY_YS14C)
	#define _IR_CODE_KEY_POWER                          0xE31C
	
	#define _IR_CODE_KEY_AUDIO 							0xAB54
	#define _IR_CODE_KEY_ECO 							0xA55A
	
	
	#define _IR_CODE_KEY_OK 							0xF906
	#define _IR_CODE_KEY_UP                          	0xE51A
	#define _IR_CODE_KEY_DOWN                           0xB748	
	#define _IR_CODE_KEY_RIGHT                          0xF807
	#define _IR_CODE_KEY_LEFT                           0xB847
	

	#define _IR_CODE_KEY_MENU  							0X9A65
	#define _IR_CODE_KEY_EXIT 							0XF50A
	#define _IR_CODE_KEY_SOURCE							0xE718

	#define _IR_CODE_KEY_MINUS							0xB04F
	#define _IR_CODE_KEY_ADD                            0xB44B
	
	#define _IR_CODE_KEY_MUTE							0xF708

#elif(_IR_PROTOCAL == _IR_SQY_XHK_0827)
	#define _IR_CODE_KEY_POWER                          0xDC
		
	#define _IR_CODE_KEY_AUDIO 							0xAB54
	#define _IR_CODE_KEY_ECO 							0xA55A
		
		
	#define _IR_CODE_KEY_OK 							0xCE
	#define _IR_CODE_KEY_UP                          	0xCA
	#define _IR_CODE_KEY_DOWN                           0xD2	
	#define _IR_CODE_KEY_RIGHT                          0x99
	#define _IR_CODE_KEY_LEFT                           0xC1
		
	
	#define _IR_CODE_KEY_MENU  							0X82
	#define _IR_CODE_KEY_EXIT 							0x95
	#define _IR_CODE_KEY_SOURCE							0x88
	
	#define _IR_CODE_KEY_MINUS							0x81
	#define _IR_CODE_KEY_ADD                            0x80
		
	#define _IR_CODE_KEY_MUTE							0xF708


#endif

#ifndef _IR_CODE_KEY_POWER
#define _IR_CODE_KEY_POWER                          0xB9FD
#endif

#ifndef _IR_CODE_KEY_MENU
#define _IR_CODE_KEY_MENU                           0xF1FD
#endif

#ifndef _IR_CODE_KEY_RIGHT
#define _IR_CODE_KEY_RIGHT                          0xB6FD
#endif

#ifndef _IR_CODE_KEY_LEFT
#define _IR_CODE_KEY_LEFT                           0xB1FD
#endif

#ifndef _IR_CODE_KEY_EXIT
#define _IR_CODE_KEY_EXIT                           0xF2FD
#endif

#ifndef _IR_CODE_KEY_EXIT2
#define _IR_CODE_KEY_EXIT2                           0x0000
#endif

#ifndef _IR_CODE_KEY_UP
#define _IR_CODE_KEY_UP                          	0xB7FD
#endif

#ifndef _IR_CODE_KEY_DOWN
#define _IR_CODE_KEY_DOWN                           0xB2FD
#endif

#ifndef _IR_CODE_KEY_SOURCE
#define _IR_CODE_KEY_SOURCE                         0xA7FD
#endif

#ifndef _IR_CODE_KEY_MUTE
#define _IR_CODE_KEY_MUTE                           0xA3FD
#endif

#ifndef _IR_CODE_KEY_SCALE
#define _IR_CODE_KEY_SCALE                          0xA0FD
#endif

#ifndef _IR_CODE_KEY_OK
#define _IR_CODE_KEY_OK                         	 0xB5FD
#endif

#ifndef _IR_CODE_KEY_F1
#define _IR_CODE_KEY_F1                         	 0xEDFD
#endif

#ifndef _IR_CODE_KEY_P
#define _IR_CODE_KEY_P                          	 0xA1FD
#endif

#ifndef _IR_CODE_KEY_F2
#define _IR_CODE_KEY_F2                         	 0xA2FD
#endif



#ifndef _IR_CODE_KEY_CHECK0
#define _IR_CODE_KEY_CHECK0							0X20
#endif

#ifndef _IR_CODE_KEY_CHECK1
#define _IR_CODE_KEY_CHECK1							0XDF
#endif

#ifndef _IR_CODE_KEY_MINUS
#define _IR_CODE_KEY_MINUS							0X0F
#endif

#ifndef _IR_CODE_KEY_ADD
#define _IR_CODE_KEY_ADD							0X1F
#endif

#ifndef _IR_CODE_KEY_SETTING
#define _IR_CODE_KEY_SETTING						0X2F
#endif

#ifndef _IR_CODE_KEY_AUDIO	
#define _IR_CODE_KEY_AUDIO							0X3F
#endif

#ifndef _IR_CODE_KEY_ECO	
#define _IR_CODE_KEY_ECO							0X4F
#endif


#endif

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************


//****************************************************************************
// CODE TABLES
//****************************************************************************


//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************
BYTE g_ucKeyStatePrev;
BYTE g_ucKeyStateCurr;
BYTE g_ucKeyStateSkip;

#if(_AD_KEY_SUPPORT == _ON)
BYTE g_ucBackupKeyState = 0xFF;
#endif

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void UserInterfaceKeyHandler(void);
void RTDKeyInitial(void);
bit RTDKeyScanReady(void);
BYTE RTDKeyScan(void);
bit RTDKeyPowerKeyProc(void);
void RTDKeyPowerKeyMix(void);
void RTDKeyMessageProc(void);
void RTDKeyMessageConvert(BYTE ucKeyMask, BYTE ucKeyMsg);

bit RTDKeySpecialProc(BYTE ucKeyMask);
void RTDKeyHoldKeyTimerCancel(void);
void RTDKeyHoldKeyCheck(void);

#if((_IR_SUPPORT == _IR_HW_SUPPORT)||(_IR_VIRTUAL==_ON))
BYTE RTDIRKeyScan(void);
#endif
#if _DEF_GuangGan_FUN
BYTE g_ucGuangGan = 80;
extern BYTE Get_tBacklight_Table_Value(BYTE X);
void UserGuangGanHandler(void)
{

#define _DEF_GuangGan_Bank_20		0x90//0xD0
#define _DEF_GuangGan_Bank_21		0x10//0x08
	if(GET_OSD_GuangGan())
	{
		//BYTE back=g_ucGuangGan;
#if 1
		WORD back1=PCB_ADKEY3();
		if(back1>_DEF_GuangGan_Bank_20)
			back1=100;
		else 
		if(back1<=_DEF_GuangGan_Bank_21)
			back1=0;
		else
			back1=(back1-_DEF_GuangGan_Bank_21)*100/(_DEF_GuangGan_Bank_20-_DEF_GuangGan_Bank_21);
#else
		BYTE back1=(PCB_ADKEY3())*100/255;
#endif		
	//	DebugMessageOsd("3.back",g_ucGuangGan);
	//	DebugMessageOsd("3.back1",back1);
		if(g_ucGuangGan>back1)
			g_ucGuangGan--;
		else if(g_ucGuangGan<back1)
			g_ucGuangGan++;
		//SET_OSD_BACKLIGHT(back);
		PCB_BACKLIGHT_PWM(Get_tBacklight_Table_Value(g_ucGuangGan));
	}
}
#endif

//****************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  : Key Handler, executed in the main loop.
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserInterfaceKeyHandler(void)
{
    // Skip key status update for tool
    if(g_ucKeyStateSkip != 0)
    {
        g_ucKeyStateSkip = 0;
        return;
    }

    // Clear the key message
    if(GET_KEYMESSAGE() != _HOLD_KEY_MESSAGE)
    {
        SET_KEYMESSAGE(_NONE_KEY_MESSAGE);
    }
#if _DEF_GuangGan_FUN
	UserGuangGanHandler();
#endif

    if(RTDKeyScanReady() == _TRUE)
    {
        // Store previous key state
        g_ucKeyStatePrev = g_ucKeyStateCurr;

        // Get current key state
        g_ucKeyStateCurr = RTDKeyScan();
#if(Project_ID == ID_ZQ_HK255XE03_1T1P1H_MV270QHBN50_LVDS_QHD75HZ_20230522)

#else				
		if(( SysPowerGetPowerStatus() == _POWER_STATUS_AC_ON) && (RTDKeyScan() == _MENU_KEY_MASK))
		{
				SET_OSD_FACTORY_MODE(_ON);				
				SET_OSD_BURNING_MODE(_ON);
				RTDNVRamSaveOSDData();
		}
#endif

#if(_OSD_5_KEY_SUPPROT)		


#elif(_DEF_POWER_LONG_KEY)
	if(SysPowerGetPowerStatus() != _POWER_STATUS_OFF)
	{
		if(RTDKeyPowerKeyProc() == _TRUE)
		{
			return;
		}
	}

#else

		// Power key process, return if power key is pressed
		if(RTDKeyPowerKeyProc() == _TRUE)
		{
			return;
		}

#endif
        // Convert key state to key message, store in (ucKeyNotify)
        RTDKeyMessageProc();
    }
}

//--------------------------------------------------
// Description  : Key intial.
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDKeyInitial(void)
{
    CLR_KEYSCANREADY();
    CLR_KEYSCANSTART();
}

//--------------------------------------------------
// Description  : Key scan ready process. We wait 0.02 sec in order to keep the keypad debounce
// Input Value  : None
// Output Value : None
//--------------------------------------------------
bit RTDKeyScanReady(void)
{
    if(((GET_KEYSCANSTART() == _TRUE) &&
       (GET_KEYSCANREADY() == _TRUE))|| (SysPowerGetPowerStatus() == _POWER_STATUS_AC_ON))
    {
        return _TRUE;
    }
    else if(GET_KEYSCANSTART() == _FALSE)
    {
        // Set Scan start flag.
        SET_KEYSCANSTART();

        // SET_KEYSCANREADY();
        // Wait 0.02 sec in order to keep the keypad debounce
        
#if(Project_ID == ID_TAISHUO_2795E06_1T1P1H_M280DCA_E3B_EDP4LAN_UHD60HZ_20211116)
	ScalerTimerReactiveTimerEvent(SEC(0.005), _USER_TIMER_EVENT_KEY_SCAN_READY);
#else
	ScalerTimerReactiveTimerEvent(SEC(0.01), _USER_TIMER_EVENT_KEY_SCAN_READY);
#endif

        return _FALSE;
    }

    return _FALSE;
}

//--------------------------------------------------
// Description  : Get key status
// Input Value  : None
// Output Value : Return Key status
//--------------------------------------------------
BYTE RTDKeyScan(void)
{
    BYTE ucKeyState = 0;
    BYTE ucVoltage0 = 0;
    BYTE ucVoltage1 = 0;
    BYTE ucVoltage2 = 0;
    BYTE ucVoltage3 = 0;
	BYTE retry_Key=0,temp=0;


#if(_AD_KEY_SUPPORT == _ON)
    ucVoltage0 = PCB_ADKEY0();
    ucVoltage1 = PCB_ADKEY1();
    ucVoltage2 = PCB_ADKEY2();
    ucVoltage3 = PCB_ADKEY3();

	retry_Key=3;
	while(retry_Key)
	{
		ucVoltage0 = PCB_ADKEY0();
		ScalerTimerDelayXms(3);
		temp = PCB_ADKEY0();
		if(abs(ucVoltage0-temp)<5)
			break;
		retry_Key--;
	}

	retry_Key=3;
	while(retry_Key)
	{
		ucVoltage1 = PCB_ADKEY1();
		ScalerTimerDelayXms(3);
		temp = PCB_ADKEY1();
		if(abs(ucVoltage1-temp)<5)
			break;
		retry_Key--;
	}

	retry_Key=3;
	while(retry_Key)
	{
		ucVoltage2 = PCB_ADKEY2();
		ScalerTimerDelayXms(3);
		temp = PCB_ADKEY2();
		if(abs(ucVoltage2-temp)<5)
			break;
		retry_Key--;
	}

	retry_Key=3;
	while(retry_Key)
	{
		ucVoltage3 = PCB_ADKEY3();
		ScalerTimerDelayXms(3);
		temp = PCB_ADKEY3();
		if(abs(ucVoltage3-temp)<5)
			break;
		retry_Key--;
	}
	//DebugMessageOsd("3.ucVoltage0",ucVoltage0);
#if 0
#undef    PCB_KEY_STATE
#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
																BYTE i;\
																for( i=0;i<5;i++)\
																{\
																	if((KeyDefault[i+5]>=0x80)?(!AD_KEY3):\
																		((KeyDefault[i]<DEF_KEY_SIZE ? 0 : KeyDefault[i]-DEF_KEY_SIZE)<=(KeyDefault[i+5]==1 ? AD_KEY1 : AD_KEY2))&&\
																		((KeyDefault[i]>(247-DEF_KEY_SIZE)? 247: KeyDefault[i]+DEF_KEY_SIZE)>((KeyDefault[i+5]==1)? AD_KEY1 : AD_KEY2)))\
																	{\
																		(ucKeyState) |= 1<<i;/*_LEFT_KEY_MASK*/ ;\
																	}\
																}\
															}
#endif

#if 0//_DEF_OSD_KEY_2
/*
BYTE code KeyDefault[10] = 
{
	POWER_KEY,
	MENU_KEY,	
	EXIT_KEY,
	RIGHT_KEY,
	LEFT_KEY,
	
	POWER_REG,
	MENU_REG,	
	EXIT_REG,
	RIGHT_REG,
	LEFT_REG,
};
*/
#if 1
{
	//BYTE i;
    PCB_KEY_STATE(ucVoltage0, ucVoltage1, ucVoltage2, ucVoltage3, ucKeyState);
}

#else
{
	BYTE i,x,y1,y2;
    PCB_KEY_STATE(ucVoltage0, ucVoltage1, ucVoltage2, ucVoltage3, ucKeyState);
}
#endif
#else
	//DebugMessageOsd("3.ucVoltage0",ucVoltage0);
	PCB_KEY_STATE(ucVoltage0, ucVoltage1, ucVoltage2, ucVoltage3, ucKeyState);
#endif
    if(g_ucBackupKeyState == ucKeyState)
    {
        if(GET_KEYREPEATENABLE() != _ON)
        {
            RTDKeyInitial();
        }

       // return g_ucBackupKeyState;
    }
    else
    {
        g_ucBackupKeyState = ucKeyState;
        ucKeyState = 0;
    }

#else
    PCB_KEY_STATE(ucVoltage0, ucVoltage1, ucVoltage2, ucVoltage3, ucKeyState);
#endif // End of #if(_AD_KEY_SUPPORT == _ON)

#if((_IR_SUPPORT == _IR_HW_SUPPORT)||(_IR_VIRTUAL==_ON))
    if(ucKeyState == 0x00)
    {
        ucKeyState = RTDIRKeyScan();
    }
#endif // End of #if(_IR_SUPPORT == _IR_HW_SUPPORT)

    if(ucKeyState != 0)
    {
        RTDKeyInitial();
    }

    return ucKeyState;
}

//--------------------------------------------------
// Description  : Power key process
// Input Value  : None
// Output Value : Return _TRUE if power key is pressed
//--------------------------------------------------
bit RTDKeyPowerKeyProc(void)
{
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)
#if(_PROJEC_ID_TYPE ==1)	

    if((g_ucKeyStateCurr & _EXIT_KEY_MASK) != 0)
    {
        if(((g_ucKeyStatePrev ^ g_ucKeyStateCurr) & _EXIT_KEY_MASK) != 0)
        {

            if(SysPowerGetPowerStatus() == _POWER_STATUS_OFF)
            {
            
				Cross_flag = 0;
                SET_OSD_STATE(_MENU_NONE);
                SET_OSD_IN_FACTORY_MENU_STATUS(_FALSE);
                SysPowerSetTargetPowerStatus(_POWER_STATUS_NORMAL);

                
                return _TRUE;
            }            

        }
    }
#endif

#endif
    if((g_ucKeyStateCurr & _POWER_KEY_MASK) != 0)
    {
        if(((g_ucKeyStatePrev ^ g_ucKeyStateCurr) & _POWER_KEY_MASK) != 0)
        {
            RTDKeyPowerKeyMix();

            if(SysPowerGetPowerStatus() == _POWER_STATUS_OFF)
            {
            
				Cross_flag = 0;
                SET_OSD_STATE(_MENU_NONE);
                SET_OSD_IN_FACTORY_MENU_STATUS(_FALSE);
                SysPowerSetTargetPowerStatus(_POWER_STATUS_NORMAL);
#if(_PCB_TYPE == _RL6432__216PIN__HKM_RT2785E17_1T1P2H_LVDS)
			ScalerTimerDelayXms(40);
			PCB_USB_HUB_RESET(_USB_POWER_ON);
			PCB_USB_SWITCH_SET(_USB_SWTICH_PC);
			PCB_USB_POWER(_USB_POWER_ON);
			PCB_LAN_POWER_EN(_PCB_LAN_POWER_ON);//网络芯片上电
#endif
#if(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E18_1DP2H1T_EDP)
			_TYPE_C_VCC_POWER_ON();
#endif
            }
            else
            {
			
            #if(_LONG_PRESS_POWER_DOWN == _ON)

				return _FALSE;

			#endif
			
			SET_OSD_AUTO_POWEROFF(_AutoPowerOff_OFF);
			ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_AUTO_POWER_DOWN);
			
#if(_MPRT_SUPPORT == _ON)
				UserAdjustLowMotionBlurDisplay(_OFF);
#endif
			#if(_NAVIGAT_MENU_SURPPORT)			
				if(((GET_OSD_STATE() == _MENU_NONE))&&(SysModeGetModeState() == _MODE_STATUS_ACTIVE) && (GET_OSD_FACTORY_MODE() == _OFF))
				{
					SET_OSD_STATE(_MENU_NAVIGAT_NONE);
					OsdDispNavigatMenu();			   
				}
				else if((GET_OSD_STATE() == _MENU_NAVIGAT_NONE)||(SysModeGetModeState() != _MODE_STATUS_ACTIVE) || (GET_OSD_FACTORY_MODE() == _ON))
				{
					SysPowerSetTargetPowerStatus(_POWER_STATUS_OFF);					
					SET_OSD_FACTORY_MODE(_OFF);
					SET_OSD_BURNING_MODE(_OFF);
					
					RTDNVRamSaveOSDData();
				}
					
			#else
				#if(Project_ID == ID_SHUNWEI_HK25561DP2HDMI_M270DAN09V0_QHD60HZ__20210319)
					ScalerTimerDelayXms(1500);
				#endif
					SysPowerSetTargetPowerStatus(_POWER_STATUS_OFF);
					SET_OSD_FACTORY_MODE(_OFF);					
					SET_OSD_BURNING_MODE(_OFF);
					
					RTDNVRamSaveOSDData();
				#endif            		
            }

        return _TRUE;
        }
    }

    return _FALSE;
}

//--------------------------------------------------
// Description  : We can add some settings here while combo key with power key
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDKeyPowerKeyMix(void)
{
    switch(g_ucKeyStateCurr)
    {
        case _POWER_RIGHT_KEY_MASK:
            break;

        case _POWER_MENU_KEY_MASK:
			
			SET_OSD_FACTORY_MODE(_ON); 				
			SET_OSD_BURNING_MODE(_ON);
			
            RTDNVRamSaveOSDData();
            break;
#if(Project_ID == ID_ZQ_HK255XE03_1T1P1H_MV270QHBN50_LVDS_QHD75HZ_20230522)
#else			
        case _POWER_EXIT_KEY_MASK:
			
			SET_OSD_FACTORY_MODE(_ON); 				
			SET_OSD_BURNING_MODE(_ON);
			
            RTDNVRamSaveOSDData();
            break;
#endif
        case _POWER_LEFT_RIGHT_KEY_MASK:
            break;

        default:
            break;
    }
}


//--------------------------------------------------
// Description  : Convert keypad status into key message, stores in ucKeyNotify
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDKeyMessageProc(void)
{
    switch(g_ucKeyStateCurr)
    {
#if(!_OSD_5_KEY_SUPPROT)	
		case _POWER_KEY_MASK:
			
            CLR_KEYREPEATENABLE();
            RTDKeyMessageConvert(_POWER_KEY_MASK, _POWER_KEY_MASK);
			break;
#endif
        case _MENU_KEY_MASK:
			
			CLR_KEYREPEATENABLE();
			RTDKeyMessageConvert(_MENU_KEY_MASK, _MENU_KEY_MESSAGE);

            break;

        case _RIGHT_KEY_MASK:
#if(Project_ID == ID_XINKEKEJI_2795E04_M280DCA_E3B_20201210)		
			RTDKeyMessageConvert(_RIGHT_KEY_MASK, _RIGHT_KEY_MESSAGE);	
#elif(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)	
        if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))         
            RTDKeyMessageConvert(_RIGHT_KEY_MASK, _NONE_KEY_MESSAGE);
        else
            RTDKeyMessageConvert(_RIGHT_KEY_MASK, _RIGHT_KEY_MESSAGE);  
#elif(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)	
#if(_PROJEC_ID_TYPE ==1)	
			RTDKeyMessageConvert(_RIGHT_KEY_MASK, _RIGHT_KEY_MESSAGE);	
#else
        if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))         
            RTDKeyMessageConvert(_RIGHT_KEY_MASK, _EXIT_KEY_MESSAGE);
        else
            RTDKeyMessageConvert(_RIGHT_KEY_MASK, _RIGHT_KEY_MESSAGE);  
#endif
#elif(_OSD_7_KEY_SUPPROT)		
			if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))			
	            RTDKeyMessageConvert(_RIGHT_KEY_MASK, _MENU_KEY_MESSAGE);
			else
				RTDKeyMessageConvert(_RIGHT_KEY_MASK, _RIGHT_KEY_MESSAGE);	
							
#else			
            RTDKeyMessageConvert(_RIGHT_KEY_MASK, _RIGHT_KEY_MESSAGE);
#endif
            break;

        case _LEFT_KEY_MASK:
#if(Project_ID == ID_XINKEKEJI_2795E04_M280DCA_E3B_20201210)	
        	RTDKeyMessageConvert(_LEFT_KEY_MASK, _LEFT_KEY_MESSAGE);
#elif(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)	||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)
            if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))         
                RTDKeyMessageConvert(_LEFT_KEY_MASK, _NONE_KEY_MESSAGE);
            else
                RTDKeyMessageConvert(_LEFT_KEY_MASK, _LEFT_KEY_MESSAGE);
#elif(_OSD_7_KEY_SUPPROT)	
			if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5)) 		
				RTDKeyMessageConvert(_LEFT_KEY_MASK, _EXIT_KEY_MESSAGE);
			else
				RTDKeyMessageConvert(_LEFT_KEY_MASK, _LEFT_KEY_MESSAGE);	
							
#else			
			RTDKeyMessageConvert(_LEFT_KEY_MASK, _LEFT_KEY_MESSAGE);
#endif
            break;

        case _EXIT_KEY_MASK:
            CLR_KEYREPEATENABLE();
            RTDKeyMessageConvert(_EXIT_KEY_MASK, _EXIT_KEY_MESSAGE);
            break;

#if(_OSD_6_KEY_SUPPROT)		
		case _UP_KEY_MASK:
			RTDKeyMessageConvert(_UP_KEY_MASK, _UP_KEY_MESSAGE);	
			break;
#endif

#if(_OSD_7_KEY_SUPPROT)		
		case _UP_KEY_MASK:
		
#if(Project_ID == ID_XINKEKEJI_2795E04_M280DCA_E3B_20201210)	
			RTDKeyMessageConvert(_UP_KEY_MASK, _UP_KEY_MESSAGE);
#elif(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)	||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)
            if(_MENU_FUN_LANGUAGE == GET_OSD_STATE())
                RTDKeyMessageConvert(_UP_KEY_MASK, _UP_KEY_MESSAGE);	
            else if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))         
                RTDKeyMessageConvert(_UP_KEY_MASK, _LEFT_KEY_MESSAGE);
            else
                RTDKeyMessageConvert(_UP_KEY_MASK, _NONE_KEY_MESSAGE);	
#else
			if(GET_OSD_STATE() == _MENU_NONE)
				RTDKeyMessageConvert(_UP_KEY_MASK, _UP_KEY_MESSAGE);
			else if(((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))||(GET_OSD_STATE() == _MENU_FUN_SOURCE_HOTKEY))
				RTDKeyMessageConvert(_UP_KEY_MASK, _LEFT_KEY_MESSAGE); 							
			else
				RTDKeyMessageConvert(_UP_KEY_MASK, _UP_KEY_MESSAGE);	
#endif
			break;

		case _DOWN_KEY_MASK:
#if(Project_ID == ID_XINKEKEJI_2795E04_M280DCA_E3B_20201210)	
				RTDKeyMessageConvert(_DOWN_KEY_MASK, _DOWN_KEY_MESSAGE);	
#elif(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)	||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)
                if(_MENU_FUN_LANGUAGE == GET_OSD_STATE())
                    RTDKeyMessageConvert(_DOWN_KEY_MASK, _DOWN_KEY_MESSAGE);	
                else if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))         
                    RTDKeyMessageConvert(_DOWN_KEY_MASK, _RIGHT_KEY_MESSAGE);
                
                else
                    RTDKeyMessageConvert(_DOWN_KEY_MASK, _NONE_KEY_MESSAGE);	
#else

			if(GET_OSD_STATE() == _MENU_NONE)
				RTDKeyMessageConvert(_DOWN_KEY_MASK, _DOWN_KEY_MESSAGE);
			else if(((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))||(GET_OSD_STATE() == _MENU_FUN_SOURCE_HOTKEY))
				RTDKeyMessageConvert(_DOWN_KEY_MASK, _RIGHT_KEY_MESSAGE );
			else
				RTDKeyMessageConvert(_DOWN_KEY_MASK, _DOWN_KEY_MESSAGE);	
#endif
			break;
#endif

#if(_OSD_5_KEY_SUPPROT)	

		case _POWER_KEY_MASK:
		if(GET_OSD_STATE() == _MENU_NONE)
		{
			CLR_KEYREPEATENABLE();
			RTDKeyMessageConvert(_POWER_KEY_MASK, _NONE_KEY_MESSAGE);

		}
		else
		{
			CLR_KEYREPEATENABLE();
			RTDKeyMessageConvert(_POWER_KEY_MASK, _MENU_KEY_MESSAGE);
		}
			break;
/*
		case _OK_KEY_MASK:
		if(GET_OSD_STATE() == _MENU_NONE)
		{
			CLR_KEYREPEATENABLE();
			RTDKeyMessageConvert(_OK_KEY_MASK, _NONE_KEY_MESSAGE);

		}
		else
		{
			CLR_KEYREPEATENABLE();
			RTDKeyMessageConvert(_OK_KEY_MASK, _MENU_KEY_MESSAGE);
		}
			break;
			*/
#endif

        default:
            if((g_ucKeyStateCurr == _RELEASE_KEY_MASK) &&
               (g_ucKeyStatePrev != _RELEASE_KEY_MASK))
            {
                RTDKeyHoldKeyCheck(); // Check key release
            }

            CLR_KEYREPEATSTART();
            CLR_KEYREPEATENABLE();
            ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_KEY_REPEAT_ENABLE);
            break;
    }
}

//--------------------------------------------------
// Description  : Key message translation
// Input Value  : ucKeyMask     --> Key mask
//                ucKeyMsg      --> Key message
// Output Value : None
//--------------------------------------------------
void RTDKeyMessageConvert(BYTE ucKeyMask, BYTE ucKeyMsg)
{
    // Key different
    if((g_ucKeyStatePrev != g_ucKeyStateCurr) && (ucKeyMask == g_ucKeyStateCurr))
    {
        // KeyLock function
        if (RTDKeySpecialProc(ucKeyMask) == _FALSE)
        {
            SET_KEYMESSAGE(ucKeyMsg);
            RTDKeyHoldKeyTimerCancel();
        }
    }
    else // Key the same
    {
        if(GET_KEYREPEATENABLE() == _TRUE)
        {
            if(GET_KEYREPEATSTART() == _TRUE)
            {
                SET_KEYMESSAGE(ucKeyMsg);
            }
            else
            {
                // Set repeat key after 500ms.
                ScalerTimerActiveTimerEvent(SEC(0.5), _USER_TIMER_EVENT_KEY_REPEAT_ENABLE);
            }
        }
    }
}


//--------------------------------------------------
// Description  :  for special key check
// Input Value  : scan Key data
// Output Value : None
//--------------------------------------------------
bit RTDKeySpecialProc(BYTE ucKeyMask)
{
	ucKeyMask = ucKeyMask;

#if(_DEF_MENU_LOCK)
    if((ucKeyMask == _MENU_KEY_MASK)&&(GET_OSD_STATE()==_MENU_NONE || GET_OSD_STATE()==_MENU_FUN_MENU_LOCK))
    {
        ScalerTimerActiveTimerEvent(SEC(5), _USER_TIMER_EVENT_MENU_LOCK);
     
         SET_KEY_HOLD();
         CLR_KEYREPEATENABLE(); 
         return _TRUE;
    }
    
    if(GET_OSD_MENU_LOCK_TYPE()==1) 
        return _FALSE;
#endif
    
#if(_LONG_PRESS_POWER_DOWN == _ON)
	
		if(ucKeyMask == _POWER_KEY_MASK)
		{
			ScalerTimerActiveTimerEvent(SEC(1.5), _USER_TIMER_EVENT_DO_POWER_DOWN);
		 
			 SET_KEY_HOLD();
			 CLR_KEYREPEATENABLE(); 
			 return _TRUE;
		}
	
#endif


#if(_DEF_POWER_LONG_KEY)

	if(ucKeyMask == _POWER_KEY_MASK)
	{
		if(SysPowerGetPowerStatus() == _POWER_STATUS_OFF)
		{
			ScalerTimerActiveTimerEvent(SEC(1.6), _USER_TIMER_EVENT_DO_POWER_DOWN);
		 
			 SET_KEY_HOLD();
			 CLR_KEYREPEATENABLE(); 
			 return _TRUE;
		}
	}

#endif


#if(_DEF_HOTKEY_LONG)

	if((ucKeyMask == _RIGHT_KEY_MASK)&&(GET_OSD_STATE()==_MENU_NONE))
		{
			ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_RIGHT_LONG);
		 
			 SET_KEY_HOLD();
			 CLR_KEYREPEATENABLE(); 
			 return _TRUE;
		}
	if((ucKeyMask == _LEFT_KEY_MASK)&&(GET_OSD_STATE()==_MENU_NONE))
		{
			ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_LEFT_LONG);
		 
			 SET_KEY_HOLD();
			 CLR_KEYREPEATENABLE(); 
			 return _TRUE;
		}	


#endif


#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)

#if(_PROJEC_ID_TYPE ==1)											
    if(ucKeyMask == _EXIT_KEY_MASK)
    {
		ScalerTimerActiveTimerEvent(SEC(1.2), _USER_TIMER_EVENT_DO_POWER_DOWN);
   	 
		 SET_KEY_HOLD();
		 CLR_KEYREPEATENABLE(); 
		 return _TRUE;
    }
#else
    if(ucKeyMask == _MENU_KEY_MASK)
    {
		ScalerTimerActiveTimerEvent(SEC(1.2), _USER_TIMER_EVENT_DO_POWER_DOWN);
   	 
		 SET_KEY_HOLD();
		 CLR_KEYREPEATENABLE(); 
		 return _TRUE;
    }
#endif

#endif

#if(_OSD_5_KEY_SUPPROT)		
    //if(ucKeyMask == _MENU_KEY_MASK)
	if(ucKeyMask == _POWER_KEY_MASK)
    {
		ScalerTimerActiveTimerEvent(SEC(2.5), _USER_TIMER_EVENT_DO_POWER_DOWN);
   	 
		 SET_KEY_HOLD();
		 CLR_KEYREPEATENABLE(); 
		 return _TRUE;
    }
#endif
#if(_VGA_SUPPORT == _ON)
    // Press Exit key for 3 sec to do Auto color
    if((GET_OSD_STATE() == _MENU_NONE) && (SysSourceGetSourceType() == _SOURCE_VGA))
    {
        if (ucKeyMask == _EXIT_KEY_MASK)
        {
            ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_DO_AUTO_COLOR);
            SET_KEY_HOLD();
            CLR_KEYREPEATENABLE();
            return _TRUE;
        }
    }
#endif

    return _FALSE;
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDKeyHoldKeyTimerCancel(void)
{
    if(GET_KEY_HOLD() == _TRUE)
    {
        CLR_KEY_HOLD();
		

        // list all off hold key timer event here!!!
        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_DO_AUTO_COLOR);
        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_DO_POWER_DOWN);
        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_DO_EXIT);
#if(_DP_SUPPORT == _ON)
        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_OSD_SHOW_DP_VERSION_SELECT);
#endif
		#if(_DEF_HOTKEY_LONG)	

        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_RIGHT_LONG);	
        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_LEFT_LONG);
		
		#endif		
        #if(_DEF_MENU_LOCK)	

        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_MENU_LOCK);	
		
		#endif
#if 0//_DEF_GuangGan_FUN
		ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_GuangGan_Back);	
#endif
    }
}

//--------------------------------------------------
// Description  : Hold Key check
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDKeyHoldKeyCheck(void)
{
    if(GET_KEY_HOLD() == _TRUE)
    {
        switch(g_ucKeyStatePrev)
        {
            case _EXIT_KEY_MASK:
                SET_KEYMESSAGE(_EXIT_KEY_MESSAGE);
                break;

            case _MENU_KEY_MASK:
                SET_KEYMESSAGE(_MENU_KEY_MESSAGE);
                break;
            case _RIGHT_KEY_MASK:
                SET_KEYMESSAGE(_RIGHT_KEY_MESSAGE);
                break;
            case _LEFT_KEY_MASK:
                SET_KEYMESSAGE(_LEFT_KEY_MESSAGE);
                break;
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)			
			case _POWER_KEY_MASK:
				SET_KEYMESSAGE(_EXIT_KEY_MESSAGE);
			break;
#endif	
				
            default:
                break;
        }
        RTDKeyHoldKeyTimerCancel();
    }
}
#if(_DEF_IR_TEST)
bit ir_test=1;
BYTE ir_code[4]={5,5,5,5};
#endif
#if(_DEF_IR_SHOW)
BYTE ir_show_data[4]={5,5,5,5};
#endif

#if((_IR_SUPPORT == _IR_HW_SUPPORT)||(_IR_VIRTUAL==_ON))
//--------------------------------------------------
// Description  : IR Key Scan
// Input Value  : None
// Output Value : Key Mask
//--------------------------------------------------
BYTE RTDIRKeyScan(void)
{
    BYTE pucIRCodeBuffer[8] = {0};
    WORD usKeyCode = 0;
    BYTE ucKeyState = 0;
	static BYTE ucin_factarystate=0;
	
#if(_DEF_IR_TEST)
    BYTE i = 0;
#endif
#if(_IR_VIRTUAL==_ON)
    if(f_resaveok)
	
#elif(_IR_SUPPORT == _IR_HW_SUPPORT)
	ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

	if(ScalerIRHWModeGetData(pucIRCodeBuffer) == _TRUE)
#endif
    {
	#if(_IR_VIRTUAL==_ON)
		{
			DebugMessageIR("r_data", r_data);
			pucIRCodeBuffer[0] =(r_data>>24)&0xff;
			pucIRCodeBuffer[1] =(r_data>>16)&0xff;
			pucIRCodeBuffer[2] =(r_data>>8)&0xff;
			pucIRCodeBuffer[3] =(r_data)&0xff;
			r_data = 0;
			f_resaveok = 0;
		}
	#endif
	
#if(!_DEF_IR_TEST&&_DEF_IR_SHOW)
	ir_show_data[0] =pucIRCodeBuffer[0];						
	ir_show_data[1] =pucIRCodeBuffer[1];						
	ir_show_data[2] =pucIRCodeBuffer[2];						
	ir_show_data[3] =pucIRCodeBuffer[3];						
					
#endif

#if(_DEF_IR_TEST)
		if(ir_test)
		{
			for(i=0;i<8;i++)
			{
				if(pucIRCodeBuffer[i] ==0)
		        {
		        }
				else if(pucIRCodeBuffer[i] ==_IR_CODE_KEY_CHECK0)
		        {
					ir_code[0]=i;
		        }
				else if(pucIRCodeBuffer[i] ==_IR_CODE_KEY_CHECK1)
		        {
					ir_code[1]=i;
		        }
				else 
				{
				 	switch(pucIRCodeBuffer[i])
					{
						case (_IR_CODE_KEY_POWER>>8):
						case (_IR_CODE_KEY_MENU>>8):
						case (_IR_CODE_KEY_RIGHT>>8):
						case (_IR_CODE_KEY_LEFT>>8):
						case (_IR_CODE_KEY_EXIT>>8):
						case (_IR_CODE_KEY_UP>>8):
						case (_IR_CODE_KEY_DOWN>>8):
						case (_IR_CODE_KEY_SOURCE>>8):
						case (_IR_CODE_KEY_MUTE>>8):
						case (_IR_CODE_KEY_SCALE>>8):
						case (_IR_CODE_KEY_OK>>8):
						case (_IR_CODE_KEY_F1>>8):
						case (_IR_CODE_KEY_P>>8):
						case (_IR_CODE_KEY_F2>>8):
							ir_test=0;
							ir_code[2]=i;
						#if(_DEF_IR_SHOW)
							ir_show_data[0] =pucIRCodeBuffer[0];						
							ir_show_data[1] =pucIRCodeBuffer[1];						
							ir_show_data[2] =pucIRCodeBuffer[2];						
							ir_show_data[3] =pucIRCodeBuffer[3];
							
							DebugMessageIR("ir_show_data", ir_show_data[0]);
							DebugMessageIR("ir_show_data", ir_show_data[1]);
							DebugMessageIR("ir_show_data", ir_show_data[2]);
							DebugMessageIR("ir_show_data", ir_show_data[3]);
						#endif
							break;
							
						default:
							break;
					}

				}
			}
		}
		
		usKeyCode = (((WORD)pucIRCodeBuffer[ir_code[2]]) << 8) + pucIRCodeBuffer[ir_code[1]];
	
#elif(_IR_PROTOCAL == _IR_NEC_DTV328)
		if((pucIRCodeBuffer[0] == ~(pucIRCodeBuffer[1])) && (pucIRCodeBuffer[2] == ~(pucIRCodeBuffer[3])))
		{
			usKeyCode = (((WORD)pucIRCodeBuffer[0]) << 8) + pucIRCodeBuffer[2];
		}
#elif(_IR_PROTOCAL == _IR_SW_LGTV)
		if((pucIRCodeBuffer[2] == ~(pucIRCodeBuffer[3])))
		{
			usKeyCode = (((WORD)pucIRCodeBuffer[0]) << 8) + pucIRCodeBuffer[3];
		}

#elif(_IR_PROTOCAL == _IR_SONY_B102P)
        usKeyCode = (((WORD)pucIRCodeBuffer[0]) << 8) + pucIRCodeBuffer[1];

#elif(_IR_PROTOCAL == _IR_PHILIPS_RC6)
        usKeyCode = (((WORD)pucIRCodeBuffer[2]) << 8) + pucIRCodeBuffer[3];


#elif(_IR_PROTOCAL == _IR_HHT_NEC)
        if((pucIRCodeBuffer[0] == ~(pucIRCodeBuffer[1])) && (pucIRCodeBuffer[2] == ~(pucIRCodeBuffer[3])))
        {
            usKeyCode = (((WORD)pucIRCodeBuffer[1]) << 8) + pucIRCodeBuffer[2];
        }

#elif(_IR_PROTOCAL == _IR_HHT_DZ_X5_147)
        if((pucIRCodeBuffer[0] == ~(pucIRCodeBuffer[1])) && (pucIRCodeBuffer[3] ==0x08))
        {
            usKeyCode = (((WORD)pucIRCodeBuffer[1]) << 8) + pucIRCodeBuffer[2];
        }
#elif(_IR_PROTOCAL == _IR_MXDZ_NEC)
		if((pucIRCodeBuffer[0] == ~(pucIRCodeBuffer[1])) && (pucIRCodeBuffer[2] == ~(pucIRCodeBuffer[3])))
		{
			usKeyCode = (((WORD)pucIRCodeBuffer[0]) << 8) + pucIRCodeBuffer[1];
		}
#elif(_IR_PROTOCAL == _IR_TAISHUO_NEC)
	
	if((pucIRCodeBuffer[0] == ~(pucIRCodeBuffer[1])) && (pucIRCodeBuffer[2] == ~(pucIRCodeBuffer[3])))
	{
		usKeyCode = (((WORD)pucIRCodeBuffer[1]) << 8) + pucIRCodeBuffer[2];
	}
#elif(_IR_PROTOCAL == _IR_SQY_YS14C)
		if((pucIRCodeBuffer[2] == 0x7F) && (pucIRCodeBuffer[3] == 0))
		{
			usKeyCode = (((WORD)pucIRCodeBuffer[0]) << 8) + pucIRCodeBuffer[1];
		}
#elif(_IR_PROTOCAL == _IR_SQY_XHK_0827)
	if((pucIRCodeBuffer[0] == 0x23)&&(pucIRCodeBuffer[2] == 0xAE) && (pucIRCodeBuffer[3] == 0x51))
	{
		usKeyCode = _IR_CODE_KEY_POWER;
	}
	else if((pucIRCodeBuffer[0] == 0x31)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_OK;
	}
	else if((pucIRCodeBuffer[0] == 0x35)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_UP;
	}
	else if((pucIRCodeBuffer[0] == 0x2D)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_DOWN;
	}
	else if((pucIRCodeBuffer[0] == 0x66)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_LEFT;
	}
	else if((pucIRCodeBuffer[0] == 0x3E)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_RIGHT;
	}
	else if((pucIRCodeBuffer[0] == 0x7D)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_MENU;
	}
	else if((pucIRCodeBuffer[0] == 0x6A)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_EXIT;
	}
	else if((pucIRCodeBuffer[0] == 0x7F)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_ADD;
	}
	else if((pucIRCodeBuffer[0] == 0x7E)&&(pucIRCodeBuffer[2] == 0xC5) && (pucIRCodeBuffer[3] == 0x3A))
	{
		usKeyCode = _IR_CODE_KEY_MINUS;
	}

#endif // End of #if(_IR_PROTOCAL == _IR_NEC_DTV328)		

		DebugMessageIR("usKeyCode", usKeyCode);
		DebugMessageOsd("usKeyCode", usKeyCode);


#if(_IR_SUPPORT == _IR_HW_SUPPORT)
		if(usKeyCode == _IR_CODE_KEY_POWER)
		{
			if(GET_IRSCANREADY())
			{
				CLR_IRSCANREADY();
				ScalerTimerReactiveTimerEvent(SEC(2.5),_USER_TIMER_EVENT_IR_PROC);
			}
			else
			{
				usKeyCode = 0;
			}
		}
#endif
		
        switch(usKeyCode)
        {
            case _IR_CODE_KEY_POWER:


				
				if(SysPowerGetPowerStatus() == _POWER_STATUS_OFF)
				{
				
					Cross_flag = 0;
					SET_OSD_STATE(_MENU_NONE);
					SET_OSD_IN_FACTORY_MENU_STATUS(_FALSE);
					SysPowerSetTargetPowerStatus(_POWER_STATUS_NORMAL);
					
					DebugMessageIR("on", SysPowerGetPowerStatus());
				}
				else
				{
				
#if(_MPRT_SUPPORT == _ON)
					UserAdjustLowMotionBlurDisplay(_OFF);
#endif
	#if(_NAVIGAT_MENU_SURPPORT)			
					if(((GET_OSD_STATE() == _MENU_NONE))&&(SysModeGetModeState() == _MODE_STATUS_ACTIVE) && (GET_OSD_FACTORY_MODE() == _OFF))
					{
						SET_OSD_STATE(_MENU_NAVIGAT_NONE);
						OsdDispNavigatMenu();			   
					}
					else if((GET_OSD_STATE() == _MENU_NAVIGAT_NONE)||(SysModeGetModeState() != _MODE_STATUS_ACTIVE) || (GET_OSD_FACTORY_MODE() == _ON))
					{
						SysPowerSetTargetPowerStatus(_POWER_STATUS_OFF);					
						SET_OSD_FACTORY_MODE(_OFF);
						SET_OSD_BURNING_MODE(_OFF);
						
						RTDNVRamSaveOSDData();
					}
						
	#else
					
						SysPowerSetTargetPowerStatus(_POWER_STATUS_OFF);
						SET_OSD_FACTORY_MODE(_OFF); 				
						SET_OSD_BURNING_MODE(_OFF);
						ucin_factarystate=0;
						RTDNVRamSaveOSDData();
						
						DebugMessageIR("off", SysPowerGetPowerStatus());
	#endif            		
				}


                break;

            case _IR_CODE_KEY_MENU:
                ucKeyState = _MENU_KEY_MASK;
				DebugMessageOsd("IR_MENU GET_OSD_VOLUME_MUTE()", GET_OSD_VOLUME_MUTE());
                break;
				
			case _IR_CODE_KEY_OK:
				if(0 < GET_OSD_STATE())
				ucKeyState = _MENU_KEY_MASK;
				if(SysModeGetModeState() != _MODE_STATUS_ACTIVE && ucin_factarystate == 0)
				{
					ucin_factarystate=1;
					DebugMessageIR("Infac", ucin_factarystate);
				}
				break;
				
			case _IR_CODE_KEY_EXIT:
				if(0 < GET_OSD_STATE())
					ucKeyState = _EXIT_KEY_MASK;
				break;
				
			case _IR_CODE_KEY_EXIT2:
				if(0 < GET_OSD_STATE())
					OsdDispDisableOsd();
				break;

			case _IR_CODE_KEY_AUDIO:
			if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
			{
				if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur!= _MENU_FUN_AUDOIVOLUME)&&(OSD_SubMenuCur!= _MENU_FUN_LOWBLUE))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
				{
					RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_BACKLIGHT-_MENU_FUN_BACKLIGHT);
				}
			}
			break;
			case _IR_CODE_KEY_ECO:
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if(_MENU_NONE == GET_OSD_STATE())
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_ECO-_MENU_FUN_BACKLIGHT);
					}
					else if((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur == _MENU_FUN_ECO))
					{
						ucKeyState = _RIGHT_KEY_MASK;
					}
				}	
				
				ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				break;
				
            case _IR_CODE_KEY_RIGHT:
			case _IR_CODE_KEY_ADD:	
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
				
					if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))
		                ucKeyState = _MENU_KEY_MASK;
					#if(_DEF_IR_PROTOCAL == _IR_SQY_YS14C)||(_DEF_IR_PROTOCAL == _IR_SQY_XHK_0827)
					else if(_MENU_NONE == GET_OSD_STATE() && usKeyCode == _IR_CODE_KEY_ADD)
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
					#else
					else if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur!= _MENU_FUN_AUDOIVOLUME)&&(OSD_SubMenuCur!= _MENU_FUN_LOWBLUE))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
	
					}
					#endif
					else if(_MENU_HOT_KEY_FUNC == GET_OSD_STATE())				
						ucKeyState = _RIGHT_KEY_MASK;
					else if((_MENU_FUN_BACKLIGHT <= GET_OSD_STATE()) && (GET_OSD_STATE() < _MENU_NULL))				
						ucKeyState = _RIGHT_KEY_MASK;

					
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				else if(ucin_factarystate == 2 && usKeyCode == _IR_CODE_KEY_RIGHT)
				{
					ucin_factarystate=3;
					DebugMessageIR("Infac", ucin_factarystate);
					ucin_factarystate=0;
					SET_OSD_FACTORY_MODE(_ON); 				
					SET_OSD_BURNING_MODE(_ON);
					RTDNVRamSaveOSDData();
				}
                break;			

            case _IR_CODE_KEY_LEFT:
			case _IR_CODE_KEY_MINUS:	
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if((_OSD_MAIN_PICTURE <= GET_OSD_STATE()) && (GET_OSD_STATE() < _MENU_MISC_TATE5))
		                ucKeyState = _EXIT_KEY_MASK;	
					#if(_DEF_IR_PROTOCAL == _IR_SQY_YS14C)||(_DEF_IR_PROTOCAL == _IR_SQY_XHK_0827)
					else if(_MENU_NONE == GET_OSD_STATE() && usKeyCode == _IR_CODE_KEY_MINUS)
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
					#else
					else if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur!= _MENU_FUN_AUDOIVOLUME)&&(OSD_SubMenuCur!= _MENU_FUN_LOWBLUE))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
						
					}
					#endif
					else if(_MENU_HOT_KEY_FUNC == GET_OSD_STATE())				
						ucKeyState = _LEFT_KEY_MASK;			
					else if((_MENU_FUN_BACKLIGHT <= GET_OSD_STATE()) && (GET_OSD_STATE() < _MENU_NULL))				
						ucKeyState = _LEFT_KEY_MASK;

				
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				else if(ucin_factarystate == 1 && usKeyCode == _IR_CODE_KEY_LEFT)
				{
					ucin_factarystate=2;
					DebugMessageIR("Infac", ucin_factarystate);
				}
                break;

			case _IR_CODE_KEY_UP:
				if(0 < GET_OSD_STATE())
					ucKeyState = _RIGHT_KEY_MASK;
				else if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(_HOT_KEY_LOS_TYPE1 != OSD_SubMenuCur))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						RTDOsdDispHotkeyFuncAdjust(_HOT_KEY_LOS_TYPE1-_MENU_FUN_BACKLIGHT);
					}
				break;

			case _IR_CODE_KEY_DOWN:
				
					if(_MENU_NONE < GET_OSD_STATE())
					ucKeyState = _LEFT_KEY_MASK;
					else if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(_HOT_KEY_LOS_TYPE1 != OSD_SubMenuCur))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						RTDOsdDispHotkeyFuncAdjust(_HOT_KEY_LOS_TYPE1-_MENU_FUN_BACKLIGHT);
					}
					
					ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_OSD_DISABLE);
				break;

			case _IR_CODE_KEY_SOURCE:
#if(_IR_PROTOCAL == _IR_MXDZ_NEC)
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if(_MENU_NONE < GET_OSD_STATE())
						ucKeyState = _RIGHT_KEY_MASK;
					else if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(_HOT_KEY_LOS_TYPE1 != OSD_SubMenuCur))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_ECO-_MENU_FUN_BACKLIGHT);
					}
					
					ScalerTimerCancelTimerEvent( _USER_TIMER_EVENT_OSD_DISABLE);
				}

#else
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if((_MENU_NONE == GET_OSD_STATE())||(_MENU_HOT_KEY_FUNC == GET_OSD_STATE()))
					{
						//OsdInputSourceHotkey();
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_SOURCE_HOTKEY-_MENU_FUN_BACKLIGHT);
					}
					else if(_MENU_FUN_SOURCE_HOTKEY == GET_OSD_STATE())
					{
						ucKeyState = _RIGHT_KEY_MASK;
					}
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				
#if(_SOURCE_AUTO_ON)
				 if(SysModeGetModeState() == _MODE_STATUS_POWER_SAVING)
				 {
				 	PCB_OFF_REGION_GPIO_SETTING_POWER_AC_PD_PS_ON();
					SET_OSD_POWER_SAVING_SHOW_SOURCE(_TRUE);
					if((SysPowerGetPowerStatus() == _POWER_STATUS_SAVING))
					{
						SysPowerSetTargetPowerStatus(_POWER_STATUS_NORMAL);
					}
				 }
#endif  
#endif
				break;

#if(_IR_PROTOCAL == _IR_SW_LGTV)

			case _IR_CODE_KEY_F1:
			case _IR_CODE_KEY_F2:
				#if(_PCB_TYPE==_RL6432__156PIN__HKMRT2556E01__2H1DP__LVDS)
				if((usKeyCode==_IR_CODE_KEY_F1 ?  _OSD_INPUT_D1: _OSD_INPUT_D3) == OsdFuncGetOsdItemFlag())
				{
					OsdDispOsdMessage(_OSD_DISP_INPUT_SIGNAL_MSG);
					ScalerTimerActiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				else
				{	SET_OSD_INPUT_PORT_OSD_ITEM((usKeyCode==_IR_CODE_KEY_F1 ? _OSD_INPUT_D1 : _OSD_INPUT_D3));
					SET_FORCE_POW_SAV_STATUS(_FALSE);
					SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
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
				#endif
				break;
				
#elif(_IR_PROTOCAL == _IR_TAISHUO_NEC)
				
				case _IR_CODE_KEY_F1:
					if(_MENU_NONE == GET_OSD_STATE())
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
					}
					else if(_MENU_HOT_KEY_FUNC == GET_OSD_STATE()&&OSD_SubMenuCur==_MENU_FUN_AUDOIVOLUME)
					{
						ucKeyState = _RIGHT_KEY_MASK;
					}
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
					break;
					
				case _IR_CODE_KEY_F2:
					if(_MENU_NONE == GET_OSD_STATE())
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
					}
					else if(_MENU_HOT_KEY_FUNC == GET_OSD_STATE()&&OSD_SubMenuCur==_MENU_FUN_AUDOIVOLUME)
					{
						ucKeyState = _LEFT_KEY_MASK;
					}
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
					break;
#elif(_IR_PROTOCAL == _IR_MXDZ_NEC)
			case _IR_CODE_KEY_F1:
				
				if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur!= _MENU_FUN_AUDOIVOLUME)&&(OSD_SubMenuCur!= _MENU_FUN_LOWBLUE))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
					}
					else if(_MENU_HOT_KEY_FUNC == GET_OSD_STATE())				
					{
						ucKeyState = _LEFT_KEY_MASK;
					}
				
				break;
				
			case _IR_CODE_KEY_F2:
				
				if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur!= _MENU_FUN_AUDOIVOLUME)&&(OSD_SubMenuCur!= _MENU_FUN_LOWBLUE))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_AUDOIVOLUME-_MENU_FUN_BACKLIGHT);
					}
					else if(_MENU_HOT_KEY_FUNC == GET_OSD_STATE())				
					{
						ucKeyState = _RIGHT_KEY_MASK;
					}
				
				break;						
#else
		case _IR_CODE_KEY_F1:
				
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
					{
						if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(_MENU_FUN_LOWBLUE != OSD_SubMenuCur))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
						{
							RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_LOWBLUE-_MENU_FUN_BACKLIGHT);
						}
					}		
					
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				
				break;
				
			case _IR_CODE_KEY_F2:
				
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
					{
						if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(_MENU_FUN_OD != OSD_SubMenuCur))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
						{
							RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_OD-_MENU_FUN_BACKLIGHT);
						}
						else if((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur == _MENU_FUN_OD))
						{
							ucKeyState = _RIGHT_KEY_MASK;
						}
					}	
					
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				
				break;




#endif
			case _IR_CODE_KEY_P:
				
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
					{
						if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(_MENU_FUN_ECO != OSD_SubMenuCur))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
						{
							RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_ECO-_MENU_FUN_BACKLIGHT);
						}
						else if((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur == _MENU_FUN_ECO))
						{
							ucKeyState = _RIGHT_KEY_MASK;
						}
					}	
					
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				
				break;

			case _IR_CODE_KEY_MUTE:
				
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())))
					{			
						SET_OSD_VOLUME_MUTE((GET_OSD_VOLUME_MUTE()? 0:1));

						RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_SOURCE_MUTEICON-_MENU_FUN_BACKLIGHT);
						RTDNVRamSaveOSDData();
						DebugMessageOsd("IR GET_OSD_VOLUME_MUTE()", GET_OSD_VOLUME_MUTE());
					}
					else if((_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
					{
						ucKeyState = _RIGHT_KEY_MASK;
					}
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				break;
			

			case _IR_CODE_KEY_SCALE:
				
				if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
				{
					if(SysModeGetModeState() == _MODE_STATUS_ACTIVE)
					{
						if((_MENU_NONE == GET_OSD_STATE())||((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(_MENU_FUN_ASPECT != OSD_SubMenuCur))||(_MENU_FUN_SOURCE_MUTEICON == GET_OSD_STATE()))
						{
							RTDOsdDispHotkeyFuncAdjust(_MENU_FUN_ASPECT-_MENU_FUN_BACKLIGHT);
						}
						else if((_MENU_HOT_KEY_FUNC == GET_OSD_STATE())&&(OSD_SubMenuCur == _MENU_FUN_ASPECT))
						{
							ucKeyState = _RIGHT_KEY_MASK;
						}
					}	
					
					ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
				}
				
				break;

				
			


            default:
                ucKeyState = 0x00;
                break;
        }
    }

    return ucKeyState;
}
#endif // End of #if(_IR_SUPPORT == _IR_HW_SUPPORT)

#endif//#if(_OSD_TYPE == _REALTEK_2014_OSD)
