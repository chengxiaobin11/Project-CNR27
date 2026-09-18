#if(_PCB_TYPE == _RL6851__128PIN__HKMRT2525BRE01__1A1H1P__LVDS)


///////////////////
// External Xtal //
///////////////////
#define _MAIN_PAGE_MODEL_NAME               _M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_B__,_2__,_7__,_7__

#define _BURNIN_STR_IC_NAME                	_R__,_T__,_D__,_2__,_5__,_2__,_5__,_B__,_R__,_SLINE__,_E__,_S__

//--------------------------------------------------
// External Xtal Define
//--------------------------------------------------
#define _EXT_XTAL                               _XTAL14318K

#define  _PCB_DEBUG_DDC   						_DDC1

///////////////////////
// Input Port Config //
///////////////////////

//--------------------------------------------------
// A0 Input Port
//--------------------------------------------------
#if 1//_DEF_VGA_SUPPORT
#define _A0_INPUT_PORT_TYPE                     _A0_VGA_PORT
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_128
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_FLASH
#else
#define _A0_INPUT_PORT_TYPE                     _A0_NO_PORT
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_NONE
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
#endif
#if 1//(_DEF_DP_SUPPORT)
//--------------------------------------------------
// D0 Input Port
//--------------------------------------------------
#define _D0_INPUT_PORT_TYPE                     _D0_DP_PORT
#define _D0_DDC_CHANNEL_SEL                     _DDC0
#define _D0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_256
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_FLASH
#define _D0_DP_LINK_CLK_RATE                    _DP_HIGH_SPEED2_540MHZ
#define _D0_DP_MAIN_LINK_LANES                  _DP_FOUR_LANE
#else
//--------------------------------------------------
// D0 Input Port
//--------------------------------------------------
#define _D0_INPUT_PORT_TYPE                     _D0_NO_PORT
#define _D0_DDC_CHANNEL_SEL                     _DDC0
#define _D0_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_NONE
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
#define _D0_DP_LINK_CLK_RATE                    _DP_HIGH_SPEED_270MHZ
#define _D0_DP_MAIN_LINK_LANES                  _DP_FOUR_LANE
#endif
//--------------------------------------------------
// D1 Input Port
//--------------------------------------------------
#define _D1_INPUT_PORT_TYPE                     _D1_HDMI_PORT
#define _D1_DDC_CHANNEL_SEL                     _DDC1
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_256
#define _D1_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_FLASH


/////////////////////////////
// Search Group & Priority //
/////////////////////////////

//--------------------------------------------------
// Input Port Search Group Define
//--------------------------------------------------
#if 1//(_DEF_VGA_SUPPORT&& _DEF_DP_SUPPORT)
#define _A0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#elif(_DEF_VGA_SUPPORT)
#define _A0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#elif(_DEF_DP_SUPPORT)
#define _D0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0

#else
#define _A0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0

#endif

//--------------------------------------------------
// Input Port Search Priority Define (Must Start From Valid Port)
//--------------------------------------------------
#if 1//(_DEF_DP_SUPPORT &&_DEF_VGA_SUPPORT&& _Source_DP_HDMI_VGA)
#define _INPUT_PORT_SEARCH_PRI_0                _D0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D1_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_2                _A0_INPUT_PORT

#elif(_DEF_DP_SUPPORT && _Source_DP_HDMI_VGA)
#define _INPUT_PORT_SEARCH_PRI_0                _D0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D1_INPUT_PORT
//#define _INPUT_PORT_SEARCH_PRI_2                _A0_INPUT_PORT

#elif(_DEF_DP_SUPPORT&&_DEF_VGA_SUPPORT )
#define _INPUT_PORT_SEARCH_PRI_0                _A0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_2                _D1_INPUT_PORT

#elif(_DEF_DP_SUPPORT )
#define _INPUT_PORT_SEARCH_PRI_0                _D0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D1_INPUT_PORT
#elif(_Source_DP_HDMI_VGA)
#define _INPUT_PORT_SEARCH_PRI_0                _D1_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _A0_INPUT_PORT
#else
#define _INPUT_PORT_SEARCH_PRI_0                _A0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D1_INPUT_PORT

#endif

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
#ifndef _LVDS_DRIV_CONTROL
#define _LVDS_DRIV_CONTROL                      _LVDS_DRIV_CONTROL_3_5
#endif
#define _LVDS_VCM_CONTROL                       _LVDS_VCM_NORMAL
#define _LVDS_SR_CONTROL                        _LVDS_SR_CONTROL_0
#define _LVDS_PRE_EMPHASIS_CONTROL              _LVDS_PRE_EMPHASIS_0
#define _LVDS_TERMINATION_CONTROL               _DISABLE

//--------------------------------------------------
// LVDS SSC Config
//--------------------------------------------------
/*
#if(Project_ID == ID_ACER_RTD2525E01BR_LVDS_FHD_120_20240430_B247Y )||(Project_ID == ID_ACER_RTD2313E01BR_LVDS_FHD_120_20240430_B247Y )
#if(_DEF_PANEL_SELECT==1)//Q238HAE000-C20  SG2381B04-1 H.2 


#define _LVDS_SPREAD_RANGE                     6// 3//10
#define _LVDS_SPREAD_SPEED                      _SPEED_33K

#elif(_DEF_PANEL_SELECT==0)//1.Q238HANE00-B70 MV238FHB-NY1 


#define _LVDS_SPREAD_RANGE                     10// 5//10
#define _LVDS_SPREAD_SPEED                      _SPEED_33K
#endif

#else
#if 0//(_PANEL_TYPE ==	_ACER_SG2701B08_C00_LVDS_FHD120HZ)
#define _LVDS_SPREAD_RANGE                      4
#define _LVDS_SPREAD_SPEED                      _SPEED_33K

#else
#define _LVDS_SPREAD_RANGE                      8//10
#define _LVDS_SPREAD_SPEED                      _SPEED_33K
#endif

#endif
*/



#define _LVDS_SPREAD_RANGE                     10// 5//10
#define _LVDS_SPREAD_SPEED                      _SPEED_33K

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
#include "RL6851__128PIN__HKMRT2525BRE01__1A1H1P_PINSHARE.h"


//////////////////////
// GPIO Power Macro //
//////////////////////
#define WakeUp_low									0
#define WakeUp_Hight								1
#if 1//_DEF_Wakeup_Support power on不设置引脚，默认是1

#define VGA_WakeUp_Pin(x)						(_PIN_122_MCU_REG=x)
#define HDMI_WakeUp_Pin(x)                    	(_PIN_123_MCU_REG=x)
#define DP_WakeUp_Pin(x)                    	(_PIN_124_MCU_REG=x)
#else

#define VGA_WakeUp_Pin(x)						;//(_PIN_122_MCU_REG=x)
#define HDMI_WakeUp_Pin(x)                    	;//(_PIN_123_MCU_REG=x)
#define DP_WakeUp_Pin(x)                    	;///(_PIN_124_MCU_REG=x)

#endif
//-----------------------------------------------
// Macro of Pcb GPIO ON/OFF Region Initial Setting
//-----------------------------------------------
#if(_PANEL_STYLE == _PANEL_DPTX)
#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
													VGA_WakeUp_Pin(WakeUp_low);\
													HDMI_WakeUp_Pin(WakeUp_low);\
													DP_WakeUp_Pin(WakeUp_low);\
                                                }
#elif(_PANEL_STYLE == _PANEL_LVDS)
#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
													VGA_WakeUp_Pin(WakeUp_low);\
													HDMI_WakeUp_Pin(WakeUp_low);\
													DP_WakeUp_Pin(WakeUp_low);\
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

#define _PANEL_CONTROL_ON                       1
#define _PANEL_CONTROL_OFF                      0

#define PCB_PANEL_POWER(x)                      {\
                                                    bPANELPOWER = (x);\
                                                }

#define PCB_PANEL_POWER_DETECT()                (bPANELPOWER)

//--------------------------------------------------
// Macro of Light Power Up/Down
//--------------------------------------------------
#define bBACKLIGHTPOWER                         _PIN_35_MCU_REG

#define _LIGHT_CONTROL_ON                       1
#define _LIGHT_CONTROL_OFF                      0

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
#define PCB_BACKLIGHT_POWER(x)                  {\
                                                    if((x) == _LIGHT_CONTROL_ON)\
                                                    {\
                                                        ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_PANEL_USED_TIMER);\
                                                        ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, (25000));\
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
#define bEDID_WRITE_PROTECT                     MCU_EMPTY_PIN_ASSIGN_ADDRESS

#define _EDID_EEPROM_WP_ENABLE                  1
#define _EDID_EEPROM_WP_DISABLE                 0

#define PCB_A0_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }

#define PCB_D0_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }


////////////////////////
// Cable Status Macro //
////////////////////////

//-----------------------------------------------
// Macro of Input Cable Connect
//-----------------------------------------------
#define bD0_DP_PIN15_CONNECT                    _PIN_50_MCU_REG
#define bD0_DP_PIN16_CONNECT                    _PIN_99_MCU_REG
#define bD0_DP_PIN17_CONNECT                    _PIN_49_MCU_REG

#define bA0_CONNECT                             _PIN_36_MCU_REG
#define bD0_CONNECT                             (((bit)bD0_DP_PIN15_CONNECT == _TRUE) && ((bit)bD0_DP_PIN16_CONNECT == _TRUE) && ((bit)bD0_DP_PIN17_CONNECT == _FALSE))
#define bD1_CONNECT                             _PIN_21_MCU_REG

#define PCB_A0_PIN()                            (bA0_CONNECT)
#define PCB_D0_PIN()                            (bD0_CONNECT)
#define PCB_D1_PIN()                            (bD1_CONNECT)

//-----------------------------------------------
// Macro of DP Source Power
//-----------------------------------------------
#define GET_PCB_D0_DP_SOURCE_POWER()            (bD0_DP_PIN17_CONNECT)


////////////////////
// Hot Plug Macro //
////////////////////

//-----------------------------------------------
// Macro of Digital Hot Plug High/Low
//-----------------------------------------------
#define bD0_HPD                                 _PIN_98_MCU_REG
#define bD1_HPD                                 _PIN_39_MCU_REG

#define _D0_HOT_PLUG_HIGH                       1
#define _D0_HOT_PLUG_LOW                        0

#define _D1_HOT_PLUG_HIGH                       0
#define _D1_HOT_PLUG_LOW                        1

#define PCB_D0_HOTPLUG(x)                       {\
                                                    bD0_HPD = (x);\
                                                }

#define PCB_D1_HOTPLUG(x)                       {\
                                                    bD1_HPD = (x);\
                                                }

#define PCB_D0_HOTPLUG_DETECT()                 (bD0_HPD)
#define PCB_D1_HOTPLUG_DETECT()                 (bD1_HPD)



///////////////
// PWM Macro //
///////////////

//-----------------------------------------------
// Macro of Pcb PWM Inital Setting
//-----------------------------------------------
#define PCB_PWM_SETTING()                       {\
                                                    ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, 25000);\
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



#define _HEADPHONE_CONNECT                      1
#define _HEADPHONE_DISCONNECT                   0

#define PCB_HEADPHONE_DETECT()                  (_PIN_53_MCU_REG)


///////////////
// LED Macro //
///////////////

//--------------------------------------------------
// Macro of LED On/Off
//--------------------------------------------------
#define bLED2                                   _PIN_115_MCU_REG
#define bLED1                                   _PIN_114_MCU_REG


//--------------------------------------------------
// Macro of KeyPad LED On/Off
//--------------------------------------------------
#define bLED6                                   _PIN_114_MCU_REG
#define bLED7                                   _PIN_115_MCU_REG

#define _LED_ON                                 0///1
#define _LED_OFF                                1///0

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
														bLED2 = _LED_OFF;\
													}
	
#define PCB_LED_TYPE2()                         {\
														bLED1 = _LED_ON;\
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


#define bPCBAMPMUTECONTROL                      (_PIN_66_MCU_REG)

#define _AMP_MUTE_ON                            1
#define _AMP_MUTE_OFF                           0

#define PCB_AMP_MUTE(x)                         {\
                                                    bPCBAMPMUTECONTROL = (x);\
                                                }

//////////////////
// AD Key Macro //
//////////////////

#define AD_KEY1                                 (MCU_FF09_ADC_A0_CONVERT_RESULT)
#define AD_KEY2                                 (MCU_FF0A_ADC_A1_CONVERT_RESULT)
	
#define PCB_ADKEY1()                            (AD_KEY1)
#define PCB_ADKEY2()                            (AD_KEY2)


#if 1
#define POWER_KEY								0x00//OK键范围改为0-0X20
#define MENU_KEY								0X8C
#define EXIT_KEY								0X57 
#define RIGHT_KEY 								0xC4
#define LEFT_KEY								0X2D
	
#define POWER_REG								2
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1
	
	
	
	
#define bPOWER_KEY                            (_PIN_52_MCU_REG)
	
		
	
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
																	if((((KeyDefault[0]<10)? 0: KeyDefault[0]-10) <= ((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[0]>237)? 247: KeyDefault[0]+0X20)))\
																	{\
																		(ucKeyState) |=  _OK_KEY_MASK;\
																	}\	
																	if(!bPOWER_KEY)\
																	{\
																		(ucKeyState) |=  _POWER_KEY_MASK;\
																	}\																  
																}


#else
#define POWER_KEY								0xa9
#define MENU_KEY								0xDF
#define EXIT_KEY								0xAD 
#define LEFT_KEY								0x6A
#define RIGHT_KEY								0xF2
	
#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								2
	
	
	
	
#define bPOWER_KEY                            (_PIN_52_MCU_REG)
	
		
	
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
																	if((((KeyDefault[0]<10)? 0: KeyDefault[0]-10) <= ((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[0]>237)? 247: KeyDefault[0]+10)))\
																	{\
																		(ucKeyState) |=  _OK_KEY_MASK;\
																	}\	
																	if((AD_KEY1> (0x2C-10)) && (AD_KEY1< (0x2C+10)))\
																	{\
																		(ucKeyState) |=  _POWER_KEY_MASK;\
																	}\																  
																}


#endif




#if(_MPRT_SUPPORT == _ON)
#define _MPRT_OFFSET                0xb0
//-----------------------------------------------
// Macro of MPRT CONTROL
//-----------------------------------------------
#define PCB_MPRT_TCON_PIN_SHARE_CONFIG(x)       {\
													if(x == _ON)\
													{\
														ScalerSetByte(0x1003, (BYTE)(8));\
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

/*
#define PCB_MPRT_TCON_INVERTED_OUTPUT()         {\
													ScalerSetDataPortBit(0x15A3,  0xe8, ~(_BIT6), _BIT6  );\
												}
*/

#define PCB_MPRT_TCON_INVERTED_OUTPUT()         {\
												}

#if 1
#define PCB_MPRT_TCON_PWM_ADJUST()              {\
                                                 	ScalerTcon13Adjust(0x00, 0x1FFF, ( g_MPRTValue), GET_MDOMAIN_OUTPUT_VTOTAL());\
												}

#elif _MPRT_CENTER_NEW
#define PCB_MPRT_TCON_PWM_ADJUST()              {\
                                                 	ScalerTcon13Adjust(0x00, 0x1FFF, ( (DWORD)(GET_MDOMAIN_OUTPUT_VHEIGHT())/2-g_MPRTValue), ( (DWORD)(GET_MDOMAIN_OUTPUT_VHEIGHT())/2+g_MPRTValue));\
												}


#else
#define PCB_MPRT_TCON_PWM_ADJUST()              {\
                                                 	ScalerTcon13Adjust(0x00, 0x1FFF, ( 0+_MPRT_OFFSET), (g_MPRTValue+_MPRT_OFFSET)>GET_MDOMAIN_OUTPUT_VTOTAL()?GET_MDOMAIN_OUTPUT_VTOTAL():(g_MPRTValue+_MPRT_OFFSET));\
												}

#endif

#endif

#endif 

