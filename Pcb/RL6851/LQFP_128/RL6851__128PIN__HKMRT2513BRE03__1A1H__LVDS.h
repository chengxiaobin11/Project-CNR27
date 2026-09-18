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
#if(_PCB_TYPE == _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS)

#define _MAIN_PAGE_MODEL_NAME                 _M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_R__,_T__,_D__,_2__,_5__,_1__,_3__,_B__,_R__
#define _BURNIN_STR_IC_NAME                	 _H__,_K__,_DOT__,_M__,_DOT__,_R__,_T__,_2__,_5__,_1__,_3__,_B__,_R__,_E__,_0__,_1__


///////////////////
// External Xtal //
///////////////////

//--------------------------------------------------
// External Xtal Define
//--------------------------------------------------
#define _EXT_XTAL                               _XTAL14318K

#define _PCB_DEBUG_DDC          _DDC1

///////////////////////
// Input Port Config //
///////////////////////

//--------------------------------------------------
// A0 Input Port
//--------------------------------------------------
#define _A0_INPUT_PORT_TYPE                     _A0_VGA_PORT
#if(_HDMI_24C02_SUPPORT)
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_NONE
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_USER
#else
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_128
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
#endif

//--------------------------------------------------
// D0 Input Port
//--------------------------------------------------
#define _D1_INPUT_PORT_TYPE                     _D1_HDMI_PORT
#define _D1_DDC_CHANNEL_SEL                     _DDC1
#if(_HDMI_24C02_SUPPORT)
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_NONE
#define _D1_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_USER
#else
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_256
#define _D1_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
#endif


/////////////////////////////
// Search Group & Priority //
/////////////////////////////

//--------------------------------------------------
// Input Port Search Group Define
//--------------------------------------------------
#define _A0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0

//--------------------------------------------------
// Input Port Search Priority Define (Must Start From Valid Port)
//--------------------------------------------------
#define _INPUT_PORT_SEARCH_PRI_0                _A0_INPUT_PORT
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
#if 0//(Project_ID == _ID_MXDZ_2513BRE03_HV400FHB_F11_FHD60HZ_20260321)
#define _LVDS_PN_SWAP                           _ENABLE//_ENABLE
#else
#define _LVDS_PN_SWAP                           _DISABLE//_ENABLE
#endif
//--------------------------------------------------
// LVDS Driving Config
//--------------------------------------------------
#define _LVDS_DRIV_CONTROL                      _LVDS_DRIV_CONTROL_3_5
#define _LVDS_VCM_CONTROL                       _LVDS_VCM_NORMAL
#define _LVDS_SR_CONTROL                        _LVDS_SR_CONTROL_0
#define _LVDS_PRE_EMPHASIS_CONTROL              _LVDS_PRE_EMPHASIS_0
#define _LVDS_TERMINATION_CONTROL               _DISABLE

//--------------------------------------------------
// LVDS SSC Config
//--------------------------------------------------
#define _LVDS_SPREAD_RANGE                      15
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
#if(Project_ID == _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321)
#define _BACKLIGHT_PWM_INVERSE                 	_ON//_ON
#else
#define _BACKLIGHT_PWM_INVERSE                 	_OFF//_ON
#endif
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
#if(_HDMI_24C02_SUPPORT)
#define _SW_IIC_SUPPORT                         _ON
#else
#define _SW_IIC_SUPPORT                         _OFF
#endif

#define _SW_IIC_CLK_DIV                         _DIV_1

#define _HW_IIC_SUPPORT                         _ON
#define _HW_IIC_SPEED                           _HW_IIC_LOW_SPEED_100K


///////////////////
// System Eeprom //
///////////////////

//--------------------------------------------------
// Eeprom System Data Storage Option
//--------------------------------------------------
#define _EEPROM_TYPE                            _EEPROM_24LC16
#define _EEPROM_SLAVE_ADDRESS                   0xA0
#if(_HDMI_24C02_SUPPORT)
#define _PCB_SYS_EEPROM_IIC                     _SW_IIC_PIN_GPIO
#else
#define _PCB_SYS_EEPROM_IIC                     _HW_IIC_PIN_47_48
#endif


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
#include "RL6851__128PIN__HKMRT2513BRE03__1A1H_PINSHARE.h"


//////////////////////
// GPIO Power Macro //
//////////////////////
#if(_IR_VIRTUAL)	
#define IR_STATUS                  (P3_5&&P3_6)
#endif

#define  	_OSD_LED_ON       1//         1
#define  	_OSD_LED_OFF      0// 0

#define   OSD_LED_CONTRL(x)          (P3_7=x)//_156PIN_PIN_49,   P3D7
#define   GET_LED_STATUS()          (P3_7)


//-----------------------------------------------
// Macro of Pcb GPIO ON/OFF Region Initial Setting
//-----------------------------------------------
#if (_IR_VIRTUAL)	
#define PCB_GPIO_SETTING_POWER_SAVING()         {\
													OSD_LED_CONTRL(_OSD_LED_ON);\													
												}

#define PCB_GPIO_SETTING_POWER_DOWN()           {\
													OSD_LED_CONTRL(_OSD_LED_ON);\													
 												}

#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
													OSD_LED_CONTRL(_OSD_LED_ON);\													
												}

#define PCB_OFF_REGION_GPIO_SETTING_POWER_AC_PD_PS_ON()\
                                                {\
                  					  		 	}


#define PCB_GPIO_SETTING_POWER_NORMAL()         {\
													OSD_LED_CONTRL(_OSD_LED_ON);\													
												}

#else

#if(_PANEL_STYLE == _PANEL_DPTX)
#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
                                                }
#elif(_PANEL_STYLE == _PANEL_LVDS)
#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
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

#endif
/////////////////////
// PCB Power Macro //
/////////////////////

//-----------------------------------------------
// Macro of Embedded LDO Support
//-----------------------------------------------
#define _EMBEDDED_LDO_OFF                       0
#define _EMBEDDED_LDO_ON                        1

#define PCB_EMBEDDED_LDO_DETECT()              (_EMBEDDED_LDO_OFF)// (_EMBEDDED_LDO_ON)


///////////////////////
// Panel Power Macro //
///////////////////////

//--------------------------------------------------
// Macro of Panel Power Up/Down
//--------------------------------------------------
#define bPANELPOWER                             _PIN_97_MCU_REG

#define _PANEL_CONTROL_ON                     1//  0
#define _PANEL_CONTROL_OFF                    0//  1

#define PCB_PANEL_POWER(x)                      {\
                                                    bPANELPOWER = (x);\
                                                }

#define PCB_PANEL_POWER_DETECT()                (bPANELPOWER)

//--------------------------------------------------
// Macro of Light Power Up/Down
//--------------------------------------------------






#define PCB_BACKLIGHT_POWER(x)                  {\
                                                    if((x) == _LIGHT_CONTROL_ON)\
                                                    {\
                                                        ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_PANEL_USED_TIMER);\
                                                        PCB_PWM_SETTING();/*ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, 20000);*/\
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
// Macro of EDID Eeprom WP High/Low
//-----------------------------------------------


#define bEDID_WRITE_PROTECT                     _PIN_46_MCU_REG

#define _EDID_EEPROM_WP_ENABLE                  1
#define _EDID_EEPROM_WP_DISABLE                 0

#define PCB_A0_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }

#define PCB_D1_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }


////////////////////////
// Cable Status Macro //
////////////////////////

//-----------------------------------------------
// Macro of Input Cable Connect
//-----------------------------------------------
#define bA0_CONNECT                             (_PIN_36_MCU_REG)
#define bD1_CONNECT                             (_PIN_45_MCU_REG) //  HDMI 2

#define PCB_A0_PIN()                            (bA0_CONNECT)
#define PCB_D1_PIN()                            (bD1_CONNECT)



////////////////////
// Hot Plug Macro //
////////////////////

//-----------------------------------------------
// Macro of Digital Hot Plug High/Low
//-----------------------------------------------
#define bD1_HPD                                 _PIN_37_MCU_REG// HDMI 2

#define _D1_HOT_PLUG_HIGH                       1
#define _D1_HOT_PLUG_LOW                        0

#define PCB_D1_HOTPLUG(x)                       {\
                                                    bD1_HPD = (x);\
                                                }


#define PCB_D1_HOTPLUG_DETECT()                 (bD1_HPD)


//-----------------------------------------------
// Macro of System Eeprom WP High/Low
//-----------------------------------------------
#define bEEPROM_WRITE_PROTECT                   MCU_EMPTY_PIN_ASSIGN_ADDRESS

#define _EEPROM_WP_ENABLE                       1
#define _EEPROM_WP_DISABLE                      0

#define PCB_EEPROM_WRITE_PROTECT(x)             {\
                                                    bEEPROM_WRITE_PROTECT = (x^1);\
                                                }

#define PCB_EEPROM_WRITE_PROTECT_DETECT()       (bEEPROM_WRITE_PROTECT)


///////////////////
// Display Macro //
///////////////////

//--------------------------------------------------
// Macro of LVDS eDP Panel model Switch Control
//--------------------------------------------------


///////////////
// PWM Macro //
///////////////

//-----------------------------------------------
// Macro of Pcb PWM Inital Setting
//-----------------------------------------------
#if(Project_ID    ==  _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321)
#define PCB_PWM_SETTING()                       {\
                                                    ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, 10000);\
                                                }

#else
#define PCB_PWM_SETTING()                       {\
                                                    ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, 20000);\
                                                }
#endif
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
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_IDLE()                          {\
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_POWER_SAVING()                  {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_ON;\
                                                }

#define PCB_LED_ON()                            {\
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_OFF()                           {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_TYPE1()                         {\
                                                    bLED1 = _LED_ON;\
                                                }

#define PCB_LED_TYPE2()                         {\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_TYPE3()                         {\
                                                }

#define PCB_LED_TYPE4()                         {\
                                                }

#define PCB_LED_TYPE5()                         {\
                                                }

#define PCB_LED_TYPE_FLASH()                    {\
                                                }

//-----------------------------------------------
// Macro of PCB Audio Connect
//-----------------------------------------------

#define bAUDIODETECT                            (MCU_EMPTY_PIN_ASSIGN_ADDRESS)

#define _AUDIO_CONNECT                          0
#define _AUDIO_DISCONNECT                       1

#define PCB_AUDIO_DETECT()                      (bAUDIODETECT)


#define bPCBAMPMUTECONTROL                      (_PIN_66_MCU_REG)

#define _AMP_MUTE_ON                            1
#define _AMP_MUTE_OFF                           0

#define PCB_AMP_MUTE(x)                         {\
                                                    bPCBAMPMUTECONTROL = (x);\
                                                }


#define bHeadphoneDetect                           (_PIN_53_MCU_REG)

#define _HEADPHONE_CONNECT                      1
#define _HEADPHONE_DISCONNECT                   0


#define PCB_HEADPHONE_DETECT()                  (bHeadphoneDetect)

#if(_HDMI_24C02_SUPPORT)

#define bSWIIC_SYS_EEPROM_SCL                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS) 
#define bSWIIC_SYS_EEPROM_SDA                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS) 

//VGA
#define bVgaDDCIICSCL							(MCU_FE21_PORT81_PIN_REG) // _156PIN_PIN_100, 
#define bVgaDDCIICSDA							(MCU_FE22_PORT82_PIN_REG) // _156PIN_PIN_101,

//HDMI1
#define bDDC0IICSCL         				    	    MCU_FE27_PORT87_PIN_REG //_PIN_112_MCU_REG
#define bDDC0IICSDA          					        MCU_FE28_PORT90_PIN_REG //_PIN_113_MCU_REG

//#define bDDC0IICSCL         				    	    MCU_FE25_PORT85_PIN_REG //_PIN_110_MCU_REG
//#define bDDC0IICSDA          					        MCU_FE26_PORT86_PIN_REG //_PIN_111_MCU_REG




#define PCB_SW_IIC_SDA_SET()                    {\
                                                     if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC)	\
                                                    {												\
                                                    	bVgaDDCIICSDA = _TRUE;						\
                                                    }												\
                                                  else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
                                                    {												\
                                                    	bDDC0IICSDA = _TRUE;						\
                                                    }												\
                                                   else if(GET_SW_IIC_STATUS() == _IIC_SYS_EEPROM) \
                                                    {                                          		\
                                                        bSWIIC_SYS_EEPROM_SDA = _TRUE;         		\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SDA_CLR()                    {\
                                                     if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC)	\
                                                    {												\
                                                    	bVgaDDCIICSDA = _FALSE;						\
                                                    }												\
                                                  else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
                                                    {												\
                                                    	bDDC0IICSDA = _FALSE;						\
                                                    }												\
                                                   else if(GET_SW_IIC_STATUS() == _IIC_SYS_EEPROM) \
                                                    {                                          		\
                                                        bSWIIC_SYS_EEPROM_SDA = _FALSE;        		\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SDA_CHK(x)                   {\
                                                     if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 	\
                                                    {                                          		\
                                                        x = bVgaDDCIICSDA;             				\
                                                    }                                          		\
                                                          else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1) 	\
                            					{                                          		\
                                                        x = bDDC0IICSDA;             				\
                                                    }                                          		\
                                                  else if(GET_SW_IIC_STATUS() == _IIC_SYS_EEPROM) \
                                                    {                                          		\
                                                        x = bSWIIC_SYS_EEPROM_SDA;             		\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SCL_SET()                    {\
                                                     if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 	\
                                                    {                                          		\
                                                        bVgaDDCIICSCL = _TRUE;         				\
                                                    }                                          		\
                                                     else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1) 	\
                                                    {                                          		\
                                                        bDDC0IICSCL = _TRUE;         				\
                                                    }                                          		\
                                                    else if(GET_SW_IIC_STATUS() == _IIC_SYS_EEPROM) \
                                                    {                                          		\
                                                        bSWIIC_SYS_EEPROM_SCL = _TRUE;         		\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SCL_CLR()                    {\
                                                     if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 	\
                                                    {                                          		\
                                                        bVgaDDCIICSCL = _FALSE;        				\
                                                    }                                          		\
                                                    else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1) 	\
                                                    {                                          		\
                                                        bDDC0IICSCL = _FALSE;        				\
                                                    }                                          		\
                                                else if(GET_SW_IIC_STATUS() == _IIC_SYS_EEPROM) \
                                                    {                                          		\
                                                        bSWIIC_SYS_EEPROM_SCL = _FALSE;        		\
                                                    }                                          		\
                                                }
#define PCB_SW_IIC_SCL_CHK(x)                   {\
                                                     if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 	\
                                                    {                                          		\
                                                        x = bVgaDDCIICSCL;             				\
                                                    }                                          		\
                                                    else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1) 	\
                                                    {                                          		\
                                                        x = bDDC0IICSCL;             				\
                                                    }                                          		\
                                                   else if(GET_SW_IIC_STATUS() == _IIC_SYS_EEPROM) \
                                                    {                                          		\
                                                        x = bSWIIC_SYS_EEPROM_SCL;             		\
                                                    }                                          		\
                                                }



#endif

//////////////////
// AD Key Macro //
//////////////////

//-----------------------------------------------
// Macro of Keypad Setting
//-----------------------------------------------
#define AD_KEY1                                 (MCU_FF09_ADC_A0_CONVERT_RESULT) // 156PIN_PIN_143,A-ADC0
#define AD_KEY2                                 (MCU_FF0A_ADC_A1_CONVERT_RESULT) // 156PIN_PIN_144,A-ADC1

#define AD_KEY3                              (MCU_FE00_PORT40_PIN_REG)// Pin_50 P5.0

//power adckey1=00; menu adc1 78;down adc1 d0;   up adc2:00 ;exit==adc2 d0 ;  
#define PCB_ADKEY1()                            (AD_KEY1)
#define PCB_ADKEY2()                            (AD_KEY2)
#if 1//(Project_ID == ID_CHANGHON_HK2513BRE01_MF215FHB_NX0_FHD100HZ_20231025)
//#define POWER_KEY								0xD0
//#define MENU_KEY								0XE4//0xA8
//#define EXIT_KEY								0XE4
//#define LEFT_KEY							    0XE9//	0X80
//#define RIGHT_KEY								0xed

//#define POWER_REG								2
//#define MENU_REG								1//2
//#define EXIT_REG								2
//#define LEFT_REG								1//2
//#define RIGHT_REG								1//2
//#define  bPOWER_KEY                              (MCU_FE00_PORT40_PIN_REG)// Pin_50 P5.0



// 测试用
#define POWER_KEY								1
#define MENU_KEY								0X00//0xA8
#define EXIT_KEY								0X00
#define LEFT_KEY							    0X7F//	0X80
#define RIGHT_KEY								0Xad

#define POWER_REG								0x80
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#define  bPOWER_KEY                              (MCU_FE00_PORT40_PIN_REG)

#else
#define POWER_KEY								0xD0
#define MENU_KEY								0X38//0xA8
#define EXIT_KEY								0X00
#define LEFT_KEY							    0XB0//	0X80
#define RIGHT_KEY								0x00

#define POWER_REG								2
#define MENU_REG								1//2
#define EXIT_REG								1
#define LEFT_REG								1//2
#define RIGHT_REG								1//2
#define  bPOWER_KEY                              (MCU_FE00_PORT40_PIN_REG)// Pin_50 P5.0

#endif
#if !_DEF_OSD_KEY_2
#if 0//
#define PCB_KEY_STATE(ucV0, ucV1,\
                      ucV2, ucV3, ucKeyState)   {\
                                                    if((0xaa <= (ucV2)) && ((ucV2) < 0xaf))\
                                                    {\
                                                        (ucKeyState) |= _LEFT_KEY_MASK  ;\
                                                    }\
                                                    if((0x00 <= (ucV1)) && ((ucV1) < 0x0a))\
                                                    {\
                                                        (ucKeyState) |= _EXIT_KEY_MASK  ;\
                                                    }\
                                                    if((0x00 <= (ucV2)) && ((ucV2) < 0x0a))\
                                                    {\
                                                        (ucKeyState) |=  _MENU_KEY_MASK ;\
                                                    }\
                                                    if((0x7a <= (ucV2)) && ((ucV2) < 0x88))\
                                                    {\
                                                        (ucKeyState) |=  _RIGHT_KEY_MASK;\
                                                    }\
                                                        if(!bPOWER_KEY)\
                                                    {\
                                                        (ucKeyState) = (ucKeyState) | _OK_KEY_MASK;\
                                                    }\
												}
#else
// 测试用
//menu :0xa3 v1
//left :0x00 v1
//right :0x00 v2
//exit :0x7a v2
#define PCB_KEY_STATE(ucV0, ucV1,\
                      ucV2, ucV3, ucKeyState)   {\
                                                    if((0x7a <= (ucV1)) && ((ucV1) < 0x88))\
                                                    {\
                                                        (ucKeyState) |=   _LEFT_KEY_MASK;\
                                                    }\
                                                    if((0xA3 <= (ucV1)) && ((ucV1) < 0xB7))\
                                                    {\
                                                        (ucKeyState) |= _MENU_KEY_MASK  ;\
                                                    }\
                                                    if((0x00 <= (ucV2)) && ((ucV2) < 0x0a))\
                                                    {\
                                                        (ucKeyState) |=   _RIGHT_KEY_MASK;\
                                                    }\
                                                    if((0x00 <= (ucV1)) && ((ucV1) < 0x0a))\
                                                    {\
                                                        (ucKeyState) |= _EXIT_KEY_MASK ;\
                                                    }\
                                                        if(!bPOWER_KEY)\
                                                    {\
                                                        (ucKeyState) = (ucKeyState) | _POWER_KEY_MASK;\
                                                    }\
												}
#endif
#endif
#if _DEF_OSD_KEY_2
#define DEF_KEY_SIZE	20
#if 1
//需要注意==0情况
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


#else
#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
																for(i=0;i<5;i++)\
																{\
																	x=((KeyDefault[i+5]==1)? (AD_KEY1) : ((KeyDefault[i+5]>=0x80)? (AD_KEY3) : (AD_KEY2)));\	
																	y1=(((KeyDefault[i]<10)? 0: KeyDefault[i]-10));\	
																	y2=((KeyDefault[i]>237)? 247: KeyDefault[i]+10);\	
																	if((x==AD_KEY3)?(!x):((y1 <= x) && (x < y2)))\
																	{\
																		(ucKeyState) |= 1<<i;/*_LEFT_KEY_MASK*/ ;\
																	}\
																}\
                                                            }
#endif

#endif
#if(_MPRT_SUPPORT == _ON)
//-----------------------------------------------
// Macro of MPRT CONTROL
//-----------------------------------------------
#define PCB_MPRT_TCON_PIN_SHARE_CONFIG(x)       {\
													if(x == _ON)\
													{\
														ScalerSetByte(0X1003, (BYTE)(8));\
													}\
													else\
													{\
														ScalerSetByte(0X1003, (BYTE)(1));\
													}\
												}

#define PCB_MPRT_TCON_ENABLE(x)                 {\
													if(x == _ON)\
													{\
														ScalerTcon13Enable(_ENABLE);\
													}\
													else\
													{\
														ScalerTcon13Enable(_DISABLE);\
													}\
												}

#define PCB_MPRT_TCON_INVERTED_OUTPUT()         {\
													ScalerSetDataPortBit(0x15A3,  0xE8, ~(_BIT6), _BIT6  );\
												}


#define PCB_MPRT_TCON_PWM_ADJUST()              {\
                                                 	ScalerTcon13Adjust(0x00, 0x1FFF, ( g_MPRTValue), GET_MDOMAIN_OUTPUT_VTOTAL());\
												}

#endif
#define bBACKLIGHTPOWER                         _PIN_35_MCU_REG

#define _LIGHT_CONTROL_ON                   1//    0
#define _LIGHT_CONTROL_OFF                  0//    1

#if(_MPRT_SUPPORT)
#define PCB_BACKLIGHT_POWER_PIN(x)              {\	 
                                                    bBACKLIGHTPOWER = (x);\
													if(x == _LIGHT_CONTROL_OFF)\
													PCB_MPRT_TCON_PIN_SHARE_CONFIG(_OFF);\
                                                }

#else

#define PCB_BACKLIGHT_POWER_PIN(x)              {\	   
                                                    bBACKLIGHTPOWER = (x);\
                                                }


#endif

#define _PCB_MBR_TCON_PIN                       _TCON13
#define _PCB_MBR_DRIVER_IC_MAX_FREQ             20

#endif // End of #if(_PCB_TYPE == RL6851_DEMO_A_128PIN_1A1H1DP_LVDS)
