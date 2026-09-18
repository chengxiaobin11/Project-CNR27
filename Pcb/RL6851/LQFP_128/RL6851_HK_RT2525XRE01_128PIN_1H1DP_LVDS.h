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
// ID Code      : RL6851_DEMO_A_128PIN_1A1H1DP_LVDS.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(_PCB_TYPE == _RL6851_HK_RT2525XRE01_128PIN_1H1DP_LVDS)


///////////////////
// External Xtal //
///////////////////

//--------------------------------------------------
// External Xtal Define
//--------------------------------------------------
#define _EXT_XTAL                               _XTAL14318K


///////////////
// Debug DDC //
///////////////

//--------------------------------------------------
// Debug DDC Channel
//--------------------------------------------------
#define _PCB_DEBUG_DDC                          _DDC0


///////////////////////
// Input Port Config //
///////////////////////

//--------------------------------------------------
// A0 Input Port
//--------------------------------------------------
#define _A0_INPUT_PORT_TYPE                     _A0_NO_PORT
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_128
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE

//--------------------------------------------------
// D0 Input Port
//--------------------------------------------------
#define _D0_INPUT_PORT_TYPE                     _D0_HDMI_PORT
#define _D0_DDC_CHANNEL_SEL                     _DDC0
#if(_HDMI_24C02_SUPPORT)
#define _D0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_NONE
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_USER
#else
#define _D0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_256
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
#endif

//--------------------------------------------------
// D1 Input Port
//--------------------------------------------------
#define _D1_INPUT_PORT_TYPE                     _D1_DP_PORT
#define _D1_DDC_CHANNEL_SEL                     _DDC1
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_256
#define _D1_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
#define _D1_DP_LINK_CLK_RATE                    _DP_HIGH_SPEED_270MHZ
#define _D1_DP_MAIN_LINK_LANES                  _DP_FOUR_LANE


/////////////////////////////
// Search Group & Priority //
/////////////////////////////

//--------------------------------------------------
// Input Port Search Group Define
//--------------------------------------------------
#define _D0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0

//--------------------------------------------------
// Input Port Search Priority Define (Must Start From Valid Port)
//--------------------------------------------------
#define _INPUT_PORT_SEARCH_PRI_0                _D0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D1_INPUT_PORT


////////////////////
// For LVDS Panel //
////////////////////

//--------------------------------------------------
// LVDS Port Config
//--------------------------------------------------
#define _LVDS_PORT_SEL                          _LVDS_2_PORT_CD
#define _LVDS_PORT_MIRROR                       _DISABLE
#define _LVDS_PORT_CD_SWAP                      _DISABLE
#define _LVDS_PN_SWAP                           _DISABLE

//--------------------------------------------------
// LVDS Driving Config
//--------------------------------------------------
#define _LVDS_DRIV_CONTROL                      _LVDS_DRIV_CONTROL_3_0
#define _LVDS_VCM_CONTROL                       _LVDS_VCM_NORMAL
#define _LVDS_SR_CONTROL                        _LVDS_SR_CONTROL_0
#define _LVDS_PRE_EMPHASIS_CONTROL              _LVDS_PRE_EMPHASIS_0
#define _LVDS_TERMINATION_CONTROL               _DISABLE

//--------------------------------------------------
// LVDS SSC Config
//--------------------------------------------------
#define _LVDS_SPREAD_RANGE                      10
#define _LVDS_SPREAD_SPEED                      _SPEED_33K


/////////////////////////
// eDPTx 1.1 HBR Panel //
/////////////////////////

//--------------------------------------------------
// eDPTx 1.1 HBR Main Link Config
//--------------------------------------------------
#define _PANEL_DPTX_1_1_LANE_SWAP               _DISABLE               // Lane Port Swap
#define _PANEL_DPTX_1_1_LANE_PN_SWAP            _ENABLE                // Lane PN Swap
#define _PANEL_DPTX_1_1_SWING_LEVEL             _DP_SWING_800_MV       // Swing Level = 400,600,800,1200mV
#define _PANEL_DPTX_1_1_PREEMPHASIS_LEVEL       _DP_PREEMPHASIS_0_DB   // Preemphasis Level = 0,3.5,6,9.5dB

//--------------------------------------------------
// eDPTx 1.1 HBR SSC Config
//--------------------------------------------------
#define _PANEL_DPTX_1_1_SPREAD_RANGE            5                      // 0~15, 0 ~ disable, 15 ~ 0.98%
#define _PANEL_DPTX_1_1_SPREAD_SPEED            _SPEED_33K             // _SPEED_30K or _SPEED_33K


////////////////////////////
// eDPTx Panel AUX Config //
////////////////////////////

//--------------------------------------------------
// eDPTx AUX Swing Level
//--------------------------------------------------
#define _PANEL_DPTX_AUX_SWING_LEVEL             _DP_AUX_SWING_1100_MV


/////////
// PWM //
/////////

//--------------------------------------------------
// PWM Setting
//--------------------------------------------------
#define _PWM_DUT_RESOLUTION                     _PWM_8BIT

#define _BACKLIGHT_PWM                          _PWM0
#define _BACKLIGHT_PWM_INVERSE                  _OFF

#define _PWM0_EN                                _ON
#define _PWM1_EN                                _OFF
#define _PWM2_EN                                _OFF
#define _PWM3_EN                                _OFF
#define _PWM4_EN                                _OFF
#define _PWM5_EN                                _OFF

#define _PWM0_PSAV_EN                           _OFF
#define _PWM1_PSAV_EN                           _OFF
#define _PWM2_PSAV_EN                           _OFF
#define _PWM3_PSAV_EN                           _OFF
#define _PWM4_PSAV_EN                           _OFF
#define _PWM5_PSAV_EN                           _OFF

#define _PWM0_PDOW_EN                           _OFF
#define _PWM1_PDOW_EN                           _OFF
#define _PWM2_PDOW_EN                           _OFF
#define _PWM3_PDOW_EN                           _OFF
#define _PWM4_PDOW_EN                           _OFF
#define _PWM5_PDOW_EN                           _OFF

#define _PWM0_RST_EN                            _OFF
#define _PWM1_RST_EN                            _OFF
#define _PWM2_RST_EN                            _OFF
#define _PWM3_RST_EN                            _OFF
#define _PWM4_RST_EN                            _OFF
#define _PWM5_RST_EN                            _OFF
#define _PWM_RST_SIGNAL_SEL                     _DVS


/////////////////
// SW & HW IIC //
/////////////////

//--------------------------------------------------
// Sofware and Hardware IIC Option
//--------------------------------------------------
#define _SW_IIC_SUPPORT                         _ON
#define _SW_IIC_CLK_DIV                         _DIV_1

#define _HW_IIC_SUPPORT                         _OFF
#define _HW_IIC_SPEED                           _HW_IIC_LOW_SPEED_100K


///////////////////
// System Eeprom //
///////////////////

//--------------------------------------------------
// Eeprom System Data Storage Option
//--------------------------------------------------
#define _EEPROM_TYPE                            _EEPROM_24LC16
#define _EEPROM_SLAVE_ADDRESS                   0xA0
#define _PCB_SYS_EEPROM_IIC                     _NO_IIC_PIN


//////////
// Misc //
//////////

//--------------------------------------------------
// AD Key Option
//--------------------------------------------------
#define _AD_KEY_SUPPORT                         _ON

//--------------------------------------------------
// Low Speed ADC Option
//--------------------------------------------------
#define _LOW_SPEED_ADC_SUPPORT                  _ON


//////////////////////
// Series Pin Share //
//////////////////////
#include "./RL6851/LQFP_128/RL6851_HK_RT2525XRE01_128PIN_1H1DP_LVDS_PINSHARE.h"


//////////////////////
// GPIO Power Macro //
//////////////////////

//-----------------------------------------------
// Macro of Pcb GPIO ON/OFF Region Initial Setting
//-----------------------------------------------
#if(_PANEL_STYLE == _PANEL_DPTX)
#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
                                                    PCB_SET_LVDS_DPTX_SWITCH(_DPTX_PANEL_OUTPUT);\
                                                    PCB_D0_EXT_SWITCH(1);\
                                                 }
#elif(_PANEL_STYLE == _PANEL_LVDS)
#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
                                                    PCB_SET_LVDS_DPTX_SWITCH(_LVDS_PANEL_OUTPUT);\
                                                    PCB_D0_EXT_SWITCH(1);\
}
#endif

#define PCB_OFF_REGION_GPIO_SETTING_POWER_AC_PD_PS_ON()\
                                                {\
                                                }

#define PCB_GPIO_SETTING_POWER_NORMAL()         {\
                                                }

#define PCB_GPIO_SETTING_POWER_SAVING()         {\
                                                }

#define PCB_GPIO_SETTING_POWER_DOWN()           {\
                                                }


/////////////////////
// PCB Power Macro //
/////////////////////

//-----------------------------------------------
// Macro of Embedded LDO Support
//-----------------------------------------------
#define _EMBEDDED_LDO_OFF                       0
#define _EMBEDDED_LDO_ON                        1

#define PCB_EMBEDDED_LDO_DETECT()               (_EMBEDDED_LDO_OFF)


///////////////////////
// Panel Power Macro //
///////////////////////

//--------------------------------------------------
// Macro of Panel Power Up/Down
//--------------------------------------------------
#define bPANELPOWER                             _PIN_97_MCU_REG

#define _PANEL_CONTROL_ON                       1//0
#define _PANEL_CONTROL_OFF                      0//1

#define PCB_PANEL_POWER(x)                      {\
                                                    bPANELPOWER = (x);\
                                                }

#define PCB_PANEL_POWER_DETECT()                (bPANELPOWER)

//--------------------------------------------------
// Macro of Light Power Up/Down
//--------------------------------------------------
#define bBACKLIGHTPOWER                         _PIN_50_MCU_REG

#define _LIGHT_CONTROL_ON                       1//0
#define _LIGHT_CONTROL_OFF                      0//1

#define PCB_BACKLIGHT_POWER_PIN(x)              {\
                                                    bBACKLIGHTPOWER = (x);\
                                                }

#define PCB_BACKLIGHT_POWER(x)                  {\
                                                    if((x) == _LIGHT_CONTROL_ON)\
                                                    {\
                                                        ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_PANEL_USED_TIMER);\
														ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, 20000);\
                                                    }\
                                                    else\
                                                    {\
                                                        ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_PANEL_USED_TIMER);\
                                                    }\
                                                    PCB_BACKLIGHT_POWER_PIN(x)\
                                                }


/////////////////////////
// Write Protect Macro //
/////////////////////////

//-----------------------------------------------
// Macro of Flash write protect pin
//-----------------------------------------------
#define bFLASH_WRITE_PROTECT                    _PIN_96_MCU_REG

#define _FLASH_WRITE_PROTECT_ENABLE             0
#define _FLASH_WRITE_PROTECT_DISABLE            1

#define PCB_FLASH_WRITE_PROTECT(x)              {\
                                                    bFLASH_WRITE_PROTECT = (x);\
                                                }

//-----------------------------------------------
// Macro of TTS Flash write protect pin
//-----------------------------------------------
#define bTTS_FLASH_WRITE_PROTECT              (MCU_EMPTY_PIN_ASSIGN_ADDRESS)//    _PIN_98_MCU_REG

#define _TTS_FLASH_WRITE_PROTECT_ENABLE         0
#define _TTS_FLASH_WRITE_PROTECT_DISABLE        1

#define PCB_TTS_FLASH_WRITE_PROTECT(x)          {\
                                                    bTTS_FLASH_WRITE_PROTECT = (x);\
                                                }

//-----------------------------------------------
// Macro of System Eeprom WP High/Low
//-----------------------------------------------
#define bEEPROM_WRITE_PROTECT                  (MCU_EMPTY_PIN_ASSIGN_ADDRESS)// _PIN_66_MCU_REG

#define _EEPROM_WP_ENABLE                       1
#define _EEPROM_WP_DISABLE                      0

#define PCB_EEPROM_WRITE_PROTECT(x)             {\
                                                    bEEPROM_WRITE_PROTECT = (x);\
                                                }

#define PCB_EEPROM_WRITE_PROTECT_DETECT()       (bEEPROM_WRITE_PROTECT)

//-----------------------------------------------
// Macro of EDID Eeprom WP High/Low
//-----------------------------------------------
#define bEDID_WRITE_PROTECT                     _PIN_46_MCU_REG

#define _EDID_EEPROM_WP_ENABLE                  1
#define _EDID_EEPROM_WP_DISABLE                 0



#define PCB_D0_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }

#define PCB_MULTI_EDID_SWITCH(port, index)      {\
                                                }


#define FC_EDID_EEPROM_WP_ENABLE()	{\
									PCB_A0_EDID_EEPROM_WRITE_PROTECT(_EDID_EEPROM_WP_ENABLE);\
									PCB_D0_EDID_EEPROM_WRITE_PROTECT(_EDID_EEPROM_WP_ENABLE);\
									PCB_D1_EDID_EEPROM_WRITE_PROTECT(_EDID_EEPROM_WP_ENABLE);\
									}
#define FC_EDID_EEPROM_WP_DISABLE()	{\
									PCB_A0_EDID_EEPROM_WRITE_PROTECT(_EDID_EEPROM_WP_DISABLE);\
									PCB_D0_EDID_EEPROM_WRITE_PROTECT(_EDID_EEPROM_WP_DISABLE);\
									PCB_D1_EDID_EEPROM_WRITE_PROTECT(_EDID_EEPROM_WP_DISABLE);\
									}



// Macro of HDMI External EDID Switch : #if (_HDMI_MULTI_EDID_SUPPORT == _ON)
//-----------------------------------------------
#define bD0_EXT_SWITCH_EDID_0                    (_PIN_52_MCU_REG)//

#define PCB_D0_EXT_SWITCH(x)                        {\
                                                    bD0_EXT_SWITCH_EDID_0 = (x);\
                                                    }


////////////////////////
// Cable Status Macro //
////////////////////////

//-----------------------------------------------
// Macro of Input Cable Connect
//-----------------------------------------------


#define bD1_DP_PIN15_CONNECT                    _PIN_47_MCU_REG //DP_SINK_ASS_P
#define bD1_DP_PIN16_CONNECT                    _PIN_45_MCU_REG
#define bD1_DP_PIN17_CONNECT                    _PIN_48_MCU_REG//

#define bD0_CONNECT                             (_PIN_44_MCU_REG)
#define bD1_CONNECT                             (((bit)bD1_DP_PIN15_CONNECT == _TRUE) && ((bit)bD1_DP_PIN16_CONNECT == _TRUE) && ((bit)bD1_DP_PIN17_CONNECT == _FALSE))

#define PCB_D0_PIN()                            (bD0_CONNECT)
#define PCB_D1_PIN()                            (bD1_CONNECT)

//-----------------------------------------------
// Macro of DP Source Power
//-----------------------------------------------
#define GET_PCB_D1_DP_SOURCE_POWER()            (bD1_DP_PIN17_CONNECT)


////////////////////
// Hot Plug Macro //
////////////////////

//-----------------------------------------------
// Macro of Digital Hot Plug High/Low
//-----------------------------------------------
#define bD0_HPD                                 _PIN_38_MCU_REG
#define bD1_HPD                                 _PIN_37_MCU_REG

#define _D0_HOT_PLUG_HIGH                       1
#define _D0_HOT_PLUG_LOW                        0

#define _D1_HOT_PLUG_HIGH                       1
#define _D1_HOT_PLUG_LOW                        0

#define PCB_D0_HOTPLUG(x)                       {\
                                                    bD0_HPD = (x);\
                                                }

#define PCB_D1_HOTPLUG(x)                       {\
                                                    bD1_HPD = (x);\
                                                }

#define PCB_D0_HOTPLUG_DETECT()                 (bD0_HPD)
#define PCB_D1_HOTPLUG_DETECT()                 (bD1_HPD)

/*
///////////////////
// Display Macro //
///////////////////

//--------------------------------------------------
// Macro of LVDS eDP Panel model Switch Control
//--------------------------------------------------
#define bLVDSDPTX_GPU_SWICH                     _PIN_38_MCU_REG

#define _LVDS_PANEL_OUTPUT                      0
#define _DPTX_PANEL_OUTPUT                      1

#define PCB_SET_LVDS_DPTX_SWITCH(x)             {\
                                                    if((x) == _LVDS_PANEL_OUTPUT)\
                                                    {\
                                                        bLVDSDPTX_GPU_SWICH = (x);\
                                                    }\
                                                    else if((x) == _DPTX_PANEL_OUTPUT)\
                                                    {\
                                                        bLVDSDPTX_GPU_SWICH = (x);\
                                                    }\
                                                }
*/

///////////////
// PWM Macro //
///////////////

//-----------------------------------------------
// Macro of Pcb PWM Inital Setting
//-----------------------------------------------
#define PCB_PWM_SETTING()                       {\
                                                    ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, 20000);\
                                                }

#if(_PWM_DUT_RESOLUTION == _PWM_8BIT)

#define PCB_BACKLIGHT_PWM(x)                    {\
                                                    MCU_ADJUST_8BIT_PWM_DUTY(_BACKLIGHT_PWM, (x));\
                                                }

#define PCB_GET_BACKLIGHT_PWM()                 (MCU_GET_8BIT_PWM_DUTY(_BACKLIGHT_PWM))

#elif(_PWM_DUT_RESOLUTION == _PWM_12BIT)

#define PCB_BACKLIGHT_PWM(x)                    {\
                                                    MCU_ADJUST_12BIT_PWM_DUTY(_BACKLIGHT_PWM, (x));\
                                                }

#define PCB_GET_BACKLIGHT_PWM()                 (MCU_GET_12BIT_PWM_DUTY(_BACKLIGHT_PWM))

#endif

//////////////////
// SW IIC Macro //
//////////////////

//--------------------------------------------------
// Macro of IIC : (_SW_IIC_SUPPORT == _ON)
//--------------------------------------------------

//HDMI
#define bDDC0IICSCL         				    (_PIN_110_MCU_REG)	
#define bDDC0IICSDA          					(_PIN_111_MCU_REG)	



#define PCB_SW_IIC_SDA_SET()                    {\
                                                    if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0)	\
                                                    {												\
                                                    	bDDC0IICSDA = _TRUE;						\
                                                    }												\
                                                }
#define PCB_SW_IIC_SDA_CLR()                    {\
                                                    if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0)	\
                                                    {												\
                                                    	bDDC0IICSDA = _FALSE;						\
                                                    }												\
                                                }
#define PCB_SW_IIC_SDA_CHK(x)                   {\
                                                    if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
                                                    {                                          		\
                                                        x = bDDC0IICSDA;             				\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SCL_SET()                    {\
                                                    if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
                                                    {                                          		\
                                                        bDDC0IICSCL = _TRUE;         				\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SCL_CLR()                    {\
                                                    if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
                                                    {                                          		\
                                                        bDDC0IICSCL = _FALSE;        				\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SCL_CHK(x)                   {\
                                                    if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
                                                    {                                          		\
                                                        x = bDDC0IICSCL;             				\
                                                    }                                          		\
                                                }

///////////////
// LED Macro //
///////////////

//--------------------------------------------------
// Macro of LED On/Off
//--------------------------------------------------
#define bLED1                                   _PIN_114_MCU_REG
#define bLED2                                   _PIN_115_MCU_REG

#define _LED_ON                                 1
#define _LED_OFF                                0

#define PCB_LED_AC_ON_INITIAL()                 {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_ACTIVE()                        {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_ON;\
                                                }

#define PCB_LED_IDLE()                          {\
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_POWER_SAVING()                  {\
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_ON()                            {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_ON;\
                                                }

#define PCB_LED_OFF()                           {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_TYPE1()                         {\
                                                    bLED1 = _LED_ON;\
                                                }

#define PCB_LED_TYPE2()                         {\
                                                    bLED2 = _LED_ON;\
                                                }

#define PCB_LED_TYPE3()                         {\
                                                }

#define PCB_LED_TYPE4()                         {\
                                                }

#define PCB_LED_TYPE5()                         {\
                                                }

#define PCB_LED_TYPE_FLASH()                    {\
                                                }


//////////////////
// AD Key Macro //
//////////////////

//-----------------------------------------------
// Macro of Keypad Setting
//-----------------------------------------------

#if 1

#define AD_KEY1                                (MCU_FF09_ADC_A0_CONVERT_RESULT) // Pin_42
#define AD_KEY2                                (MCU_FF0A_ADC_A1_CONVERT_RESULT) // Pin_43
#define bPOWER_KEY                              (_PIN_35_MCU_REG)//Pin_195
//#define PCB_ADKEY0()                            (AD_KEY0)
//#define PCB_ADKEY1()                            (AD_KEY1)


#define POWER_KEY								0
#define MENU_KEY								0xAF
#define EXIT_KEY								0x80
#define LEFT_KEY								0x00
#define RIGHT_KEY								0x00
	
#define POWER_REG								3
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								2

	
	
#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
																	if((((KeyDefault[4]<10)? 0: KeyDefault[4]-10) <= ((KeyDefault[9]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[9]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[4]>237)? 247: KeyDefault[4]+10)))\
																	{\
																		(ucKeyState) |= _LEFT_KEY_MASK ;\
																	}\
																	if((((KeyDefault[3]<10)? 0: KeyDefault[3]-10) <= ((KeyDefault[8]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[8]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[3]>237)? 247: KeyDefault[3]+10)))\
																	{\
																		(ucKeyState) |= _RIGHT_KEY_MASK ;\
																	}\															   
																	if((((KeyDefault[2]<10)? 0: KeyDefault[2]-10) <= ((KeyDefault[7]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[7]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[2]>237)? 247: KeyDefault[2]+10)))\
																	{\
																		(ucKeyState) |= _EXIT_KEY_MASK ;\
																	}\												   
																	if((((KeyDefault[1]<10)? 0: KeyDefault[1]-10) <= ((KeyDefault[6]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[6]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[1]>237)? 247: KeyDefault[1]+10)))\
																	{\
																		(ucKeyState) |= _MENU_KEY_MASK ;\
																	}\																	
																	if(!bPOWER_KEY)\
																	{\
																		(ucKeyState) |=  _POWER_KEY_MASK;\
																	}\																  
																}


#else
#define AD_KEY0                                 (MCU_FF09_ADC_A0_CONVERT_RESULT) // Pin_42
#define AD_KEY1                                 (MCU_FF0A_ADC_A1_CONVERT_RESULT) // Pin_43
#define bPOWER_KEY                              (_PIN_35_MCU_REG)//Pin_195
#define PCB_ADKEY0()                            (AD_KEY0)
#define PCB_ADKEY1()                            (AD_KEY1)

#define PCB_KEY_STATE(ucV0, ucV1,\
						ucV2, ucV3, ucKeyState)   {\
													  if((0x00 <= (ucV1)) && ((ucV1) < 0x10))\
													  {\
														  (ucKeyState) |= _POWER_KEY_MASK;\
													  }\
													  if(!bPOWER_KEY)\
													  {\
														  (ucKeyState) |= _LEFT_KEY_MASK;\
													  }\
													  if((0x00 <= (ucV0)) && ((ucV0) < 0x10))\
													  {\
														  (ucKeyState) |= _RIGHT_KEY_MASK;\
													  }\
													  if((0x9d <= (ucV0)) && ((ucV0) < 0xbd))\
													  {\
														  (ucKeyState) |= _EXIT_KEY_MASK;\
													  }\
													  if((0x6f <= (ucV0)) && ((ucV0) < 0x8f))\
													  {\
														  (ucKeyState) |= _MENU_KEY_MASK;\
													  }\
												  }

#endif
#if 0//(_MPRT_SUPPORT == _ON)
/*

//---------------------------------------------------------------------------
// Function : BL_EN
// Pinshare : 0x1010
// MCU Ctrl : 0xFE00 at _PIN_50_MCU_REG
//---------------------------------------------------------------------------
#define _PIN_50                                 (_PIN_50_GPO_PP)

typedef enum
{
    _PIN_50_GPI = 0x00,
    _PIN_50_GPO_PP = 0x01,
    _PIN_50_GPO_OD = 0x02,
    _PIN_50_DDCSDA_ISP = 0x03,
    _PIN_50_DDCSDA_VGA_0_0 = 0x04,
    _PIN_50_UART_TX_0_1 = 0x05,
    _PIN_50_TCON11 = 0x09,
    _PIN_50_TCON13 = 0x0A,
    _PIN_50_TEST12B_OUT0 = 0x0B,
    _PIN_50_TEST12B_OUT1 = 0x0C,
    _PIN_50_TEST12B_OUT2 = 0x0D,
    _PIN_50_TEST12B_OUT3 = 0x0E,
    _PIN_50_TEST12B_OUT4 = 0x0F,
    _PIN_50_TEST12B_OUT5 = 0x10,
    _PIN_50_TEST12B_OUT6 = 0x11,
    _PIN_50_TEST12B_OUT7 = 0x12,
    _PIN_50_TEST12B_OUT8 = 0x13,
    _PIN_50_TEST12B_OUT9 = 0x14,
    _PIN_50_TEST12B_OUT10 = 0x15,
    _PIN_50_TEST12B_OUT11 = 0x16,
    _PIN_50_DDCCSL_MUX_SWAP_PIN_44 = 0x20,
    _PIN_50_NC = _PIN_50_GPO_PP,
} EnumPinshareInfoPIN50;
*/
//////////////////
// MPRT Macro //
//////////////////
	
#define bMPRT_BOOST_PIN                  (MCU_EMPTY_PIN_ASSIGN_ADDRESS)//     (MCU_FE23_PORT83_PIN_REG) // Pin_200
#define PCB_BL_BOOST(x) 				{\
											bMPRT_BOOST_PIN = (x);\
										}
	
#define _MPRT_MBR_PWM                       0
#define _MPRT_MBR_TCON                      1
	
#define PCB_MPRT_TCON_PIN_SHARE_CONFIG(x){\
											if(x == _ON)\
											{\
												ScalerSetByte(0x1010, (BYTE)(0x0A));\
											}\
											else\
											{\
												ScalerSetByte(0x1010, (BYTE)(0x01));\
											}\
										}
	
#define MPRT_MBR_ADIM_SWITCH(x){\
	                                if(x == _MPRT_MBR_PWM)\
	                                {\
	                                    ScalerTconEnable(_OFF);\
										ScalerTcon13Enable(_OFF);\
								        ScalerSetByte(0x1010, (BYTE)(0x01));\
									}\
                                    else\
 	                                {\
 	                                	ScalerTconEnable(_ON);\
                                        ScalerTcon13Enable(_ENABLE);\
										ScalerSetByte(0x1010, (BYTE)(0x0A));\
                                    }\
                                }	

#define BLUR_REDUCE_CONTROL(x,y){\
										if(x == _OFF)\
										{\
											PCB_BL_BOOST(_LOW);\
											UserAdjustBacklight(GET_OSD_BRIGHTNESS());\
											ScalerTimerDelayXms(5);\
											MPRT_MBR_ADIM_SWITCH(_MPRT_MBR_PWM);\
											ScalerTcon13Adjust( 0,0x1FFF,0,0x1FFF);\
										}\
										else\
										{\
											MPRT_MBR_ADIM_SWITCH(_MPRT_MBR_TCON);\
											ScalerTcon13Adjust(0,0x1FFF, GET_MDOMAIN_OUTPUT_VBSTART() , ((DWORD)(GET_MDOMAIN_OUTPUT_VTOTAL())*(((20-y)*_BL_MPRT_TCON_RATIO_A/19)+_BL_MPRT_TCON_RATIO_B)/100)); \
											PCB_BL_BOOST(_HIGH);\
										}\
									  }

#endif

#endif // End of #if(_PCB_TYPE == RL6851_DEMO_A_128PIN_1A1H1DP_LVDS)

