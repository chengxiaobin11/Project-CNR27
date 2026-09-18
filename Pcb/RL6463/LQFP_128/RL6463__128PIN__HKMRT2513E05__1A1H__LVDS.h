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
// ID Code      : _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(_PCB_TYPE == _RL6463__128PIN__HKMRT2513E05__1A1H__LVDS)


#define _PCB_DEBUG_DDC                          _VGA_DDC2

#define _BURNIN_STR_IC_NAME                	 	_H__,_K__,_DOT__,_M__,_DOT__,_R__,_T__,_2__,_5__,_1__,_3__,_E__,_0__,_5__
//#define _MAIN_PAGE_MODEL_NAME               	_M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_R__,_T__,_D__,_2__,_5__,_1__,_3__,_A__,_R__
#define _MAIN_PAGE_MODEL_NAME               	_M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_M__,_N__,_T__

///////////////////
// External Xtal //
///////////////////

//--------------------------------------------------
// External Xtal Define
//--------------------------------------------------
#define _EXT_XTAL                               _XTAL14318K


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
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE//_EDID_TABLE_LOCATION_PC99
//#define _A0_PC99_EMBEDDED_EDID_TABLE            "./EDID/EdidVga/EDID_VGA_1920x1200@60.h"
#endif
//--------------------------------------------------
// D0 Input Port
//--------------------------------------------------
#if 0//(_HDMI_24C02_SUPPORT)
#define _D0_INPUT_PORT_TYPE                     _D0_HDMI_PORT
#define _D0_DDC_CHANNEL_SEL                     _DDC0
#define _D0_EMBEDDED_DDCRAM_MAX_SIZE           _EDID_SIZE_NONE// _EDID_SIZE_256
#define _D0_EMBEDDED_DDCRAM_LOCATION           _EDID_TABLE_LOCATION_USER// _EDID_TABLE_LOCATION_CODE

#else

#define _D0_INPUT_PORT_TYPE                     _D0_NO_PORT//_D0_DP_PORT
#define _D0_DDC_CHANNEL_SEL                     _DDC0//_DDC1
#define _D0_EMBEDDED_DDCRAM_MAX_SIZE                _EDID_SIZE_NONE//_EDID_SIZE_256
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_USER
#endif
//--------------------------------------------------
// D1 Input Port
//--------------------------------------------------
#define _D1_INPUT_PORT_TYPE                     _D1_HDMI_PORT
#define _D1_DDC_CHANNEL_SEL                     _DDC1
#if(_HDMI_24C02_SUPPORT)
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE           _EDID_SIZE_NONE// _EDID_SIZE_256
#define _D1_EMBEDDED_DDCRAM_LOCATION           _EDID_TABLE_LOCATION_USER// _EDID_TABLE_LOCATION_CODE
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

#define _LVDS_PORT_SEL                          _LVDS_2_PORT_AB
#define _LVDS_PORT_MIRROR                       _DISABLE

#define _LVDS_PORT_AB_SWAP            _DISABLE   //       _DISABLE


#define _LVDS_PN_SWAP                 _DISABLE//

//--------------------------------------------------
// LVDS Driving Config
//--------------------------------------------------
#define _LVDS_DRIV_CONTROL             _LVDS_DRIV_CONTROL_3_0//    _LVDS_DRIV_CONTROL_3_0  //   _LVDS_DRIV_CONTROL_3_0
#define _LVDS_VCM_CONTROL              _LVDS_VCM_NORMAL//_LVDS_VCM_LOW//  //   _LVDS_VCM_NORMAL//    _LVDS_VCM_NORMAL
#define _LVDS_SR_CONTROL               _LVDS_SR_CONTROL_0//    _LVDS_SR_CONTROL_0
#define _LVDS_PRE_EMPHASIS_CONTROL     _LVDS_PRE_EMPHASIS_0//       _LVDS_PRE_EMPHASIS_0
#define _LVDS_TERMINATION_CONTROL      _DISABLE

//--------------------------------------------------
// LVDS SSC Config
//--------------------------------------------------

#define _LVDS_SPREAD_RANGE                       10//     0//5//10   20211221
#define _LVDS_SPREAD_SPEED                      _SPEED_33K



/////////
// PWM //
/////////

//--------------------------------------------------
// PWM Setting
//--------------------------------------------------
#define _PWM_DUT_RESOLUTION                     _PWM_8BIT

#define _BACKLIGHT_PWM                          _PWM0
#define _BACKLIGHT_PWM_INVERSE                 	_OFF//_ON// 
#define _AUDIO_VOLUMN_PWM					    _NO_PWM//	_PWM1
#define _AUDIO_VOLUMN_PWM_INVERSE				_OFF

#define _PWM0_EN                                _ON
#define _PWM1_EN                          		_OFF//      _ON//_OFF
#define _PWM2_EN                                _OFF//_OFF
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

#define _PWM0_RST_BY_DVS                        _OFF
#define _PWM1_RST_BY_DVS                        _OFF
#define _PWM2_RST_BY_DVS                        _OFF
#define _PWM3_RST_BY_DVS                        _OFF
#define _PWM4_RST_BY_DVS                        _OFF
#define _PWM5_RST_BY_DVS                        _OFF
#define _PWM_RST_BY_TCON                        _OFF


/////////////////
// SW & HW IIC //
/////////////////

//--------------------------------------------------
// Sofware and Hardware IIC Option
//--------------------------------------------------
#define _SW_IIC_SUPPORT                         _ON//_OFF
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
#define _PCB_SYS_EEPROM_IIC                     _SW_IIC_PIN_GPIO//_HW_IIC_PIN_47_48


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
#include "RL6463__128PIN__HKMRT2513E05__1A1H_PINSHARE.h"

///////////////
// PCB Mode  //
///////////////

//---------------------------------------------------------------------------
// PCB Rule Select
//---------------------------------------------------------------------------
#define _PCB_NEW_MODE_SUPPORT                   _ON

#define _RELEASE_KEY_MASK        				0x00


#if(_HDMI_24C02_SUPPORT)
				
		
				
				//HDMI1
			//sbit bDDC1IICSCL							_76PIN_PIN_70;//  =P3^2; // _76PIN_PIN_70, //	  =P3^2; // _156PIN_PIN_137, 
			//sbit bDDC1IICSDA							_76PIN_PIN_71;//=P3^3; // _76PIN_PIN_71,//	=P3^3; // _156PIN_PIN_138,
		//	#define bDDC1IICSCL 						_76PIN_PIN_70;			//	=P3^2; // _76PIN_PIN_70, //   =P3^2; // _156PIN_PIN_137, 
		//	#define bDDC1IICSDA 						_76PIN_PIN_71;		//=P3^3; // _76PIN_PIN_71,//  =P3^3; // _156PIN_PIN_138,
				
#define bSWIIC_SYS_EEPROM_SCL                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS)
#define bSWIIC_SYS_EEPROM_SDA                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS)
			
#define bPANELI2CSDA                            (MCU_EMPTY_PIN_ASSIGN_ADDRESS)
#define bPANELI2CSCL                            (MCU_EMPTY_PIN_ASSIGN_ADDRESS)
			
#define bDDC1IICSCL 							(_PIN_112_MCU_REG)
#define bDDC1IICSDA 							(_PIN_113_MCU_REG)
			
#define bDDCVGAIICSCL                           (_PIN_100_MCU_REG)
#define bDDCVGAIICSDA                           (_PIN_101_MCU_REG)
		

#define PCB_SW_IIC_SDA_SET()                    {\
															if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 		\
															{												\
																bDDCVGAIICSDA = _TRUE;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
															{												\
																bDDC1IICSDA = _TRUE;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_VCOM)	\
															{												\
																bPANELI2CSDA = _TRUE;						\
															}												\
														}
#define PCB_SW_IIC_SDA_CLR()                    {\
															if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 		\
															{												\
																bDDCVGAIICSDA = _FALSE; 					\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
															{												\
																bDDC1IICSDA = _FALSE;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_VCOM)	\
															{												\
																bPANELI2CSDA = _FALSE;						\
															}												\
														}
#define PCB_SW_IIC_SDA_CHK(x)                   {\
															if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 		\
															{												\
																(x) = bDDCVGAIICSDA;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
															{												\
																(x) = bDDC1IICSDA;							\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_VCOM)	\
															{												\
																(x) = bPANELI2CSDA; 						\
															}												\
														}
#define PCB_SW_IIC_SCL_SET()                    {\
															if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 		\
															{												\
																bDDCVGAIICSCL = _TRUE;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
															{												\
																bDDC1IICSCL = _TRUE;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_VCOM)	\
															{												\
																bPANELI2CSCL = _TRUE;						\
															}												\
														}
#define PCB_SW_IIC_SCL_CLR()                    {\
															if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 		\
															{												\
																bDDCVGAIICSCL = _FALSE; 					\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
															{												\
																bDDC1IICSCL = _FALSE;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_VCOM)	\
															{												\
																bPANELI2CSCL = _FALSE;						\
															}												\
														}
#define PCB_SW_IIC_SCL_CHK(x)                   {\
															if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC) 		\
															{												\
																(x) = bDDCVGAIICSCL;						\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC1)	\
															{												\
																(x) = bDDC1IICSCL;							\
															}												\
															else if(GET_SW_IIC_STATUS() == _IIC_FOR_VCOM)	\
															{												\
																(x) = bPANELI2CSCL; 						\
															}												\
														}
		
		

				
#endif

//////////////////////
// GPIO Power Macro //
//////////////////////

#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
                                                }

#define PCB_OFF_REGION_GPIO_SETTING_POWER_AC_PD_PS_ON()\
                                                {\
  													PCB_AMP_MUTE(_AMP_MUTE_ON);\
  							   }


#define PCB_GPIO_SETTING_POWER_NORMAL()         {\
												}

#define PCB_GPIO_SETTING_POWER_SAVING()         {\
													PCB_AMP_MUTE(_AMP_MUTE_ON);\
}

#define PCB_GPIO_SETTING_POWER_DOWN()           {\
													PCB_AMP_MUTE(_AMP_MUTE_ON);\
 }



/////////////////////
// PCB Power Macro //
/////////////////////

//-----------------------------------------------
// Macro of Embedded LDO Support
//-----------------------------------------------
#define _EMBEDDED_LDO_OFF                       0
#define _EMBEDDED_LDO_ON                        1

#define PCB_EMBEDDED_LDO_DETECT()           (_EMBEDDED_LDO_OFF)//       (_EMBEDDED_LDO_ON)


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
#define bBACKLIGHTPOWER                        _PIN_35_MCU_REG

#define _LIGHT_CONTROL_ON                    1//   0
#define _LIGHT_CONTROL_OFF                  0//    1

#define PCB_BACKLIGHT_POWER_PIN(x)              {\
                                                    bBACKLIGHTPOWER = (x);\
                                                }

#define PCB_BACKLIGHT_POWER(x)                  {\
                                                    if((x) == _LIGHT_CONTROL_ON)\
                                                    {\
                                                         ScalerTimerActiveTimerEvent(SEC(60), _USER_TIMER_EVENT_PANEL_USED_TIMER);\
                                                         ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM, 25000);\
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
// Macro of System Eeprom WP High/Low
//-----------------------------------------------
#define bEEPROM_WRITE_PROTECT                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS)

#define _EEPROM_WP_ENABLE                       1
#define _EEPROM_WP_DISABLE                      0

#define PCB_EEPROM_WRITE_PROTECT(x)             {\
                                                    bEEPROM_WRITE_PROTECT = (x);\
                                                }

#define PCB_EEPROM_WRITE_PROTECT_DETECT()       (bEEPROM_WRITE_PROTECT)

//-----------------------------------------------
// Macro of EDID Eeprom WP High/Low
//-----------------------------------------------
#define bEDID_WRITE_PROTECT                     (_PIN_38_MCU_REG)

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

sbit bA0_CONNECT                              = P1 ^ 4;//_PIN_36_MCU_REG
#define bD1_CONNECT                             _PIN_45_MCU_REG

#define PCB_A0_PIN()                            (bA0_CONNECT)
#define PCB_D1_PIN()                            (bD1_CONNECT)


////////////////////
// Hot Plug Macro //
////////////////////

//-----------------------------------------------
// Macro of Digital Hot Plug High/Low
//-----------------------------------------------
#define bD1_HPD                                 _PIN_37_MCU_REG


#define _D1_HOT_PLUG_HIGH                       1
#define _D1_HOT_PLUG_LOW                        0


#define PCB_D1_HOTPLUG(x)                       {\
                                                    bD1_HPD = (x);\
                                                }

#define PCB_D1_HOTPLUG_DETECT()                 (bD1_HPD)



///////////////
// PWM Macro //
///////////////

//-----------------------------------------------
// Macro of Pcb PWM Inital Setting
//-----------------------------------------------
#define PCB_PWM_SETTING()                       {\
                                                    ScalerMcuPwmAdjustFrequency(_BACKLIGHT_PWM,25000);\
                                                }
#if(_PWM_DUT_RESOLUTION == _PWM_8BIT)

#define PCB_AUDIO_PWM(x)                   {\
                                                    MCU_ADJUST_8BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM, (x));\
                                                }

#define PCB_GET_AUDIO_PWM()                 (MCU_GET_8BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM))

#elif(_PWM_DUT_RESOLUTION == _PWM_12BIT)

#define PCB_AUDIO_PWM(x)                    {\
                                                    MCU_ADJUST_12BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM, (x));\
                                                }

#define PCB_GET_AUDIO_PWM()                 (MCU_GET_12BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM))

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
//蓝灯换红灯，红灯变蓝灯
#define bLED1                                   _PIN_115_MCU_REG
#define bLED2                                   _PIN_114_MCU_REG 

#define _LED_ON                                 1
#define _LED_OFF                                0

//开机蓝灯，待机红灯，老化、工厂菜单都红蓝闪烁,关机灯灭  //改这里作用不大
#if 0//(Project_ID == ID_TianJi_HK2513E05_MV270FHM_N42_FHD75HZ_EDID_M2750H_20240812)
#define PCB_LED_AC_ON_INITIAL()                 {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_OFF;\
                                                }
//开机
#define PCB_LED_ACTIVE()                        {\
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_IDLE()                          {\
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }
//待机
#define PCB_LED_POWER_SAVING()                  {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_ON;\
                                                }

#define PCB_LED_ON()                            {\
                                                    bLED1 = _LED_ON;\
                                                    bLED2 = _LED_OFF;\
                                                }
//关机
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
													bLED2 = ~bLED2;\
                                                }


#else

#define PCB_LED_AC_ON_INITIAL()                 {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_ON;\
                                                }

#define PCB_LED_ACTIVE()                        {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_ON;\
                                                }

#define PCB_LED_IDLE()                          {\
                                                    bLED1 = _LED_OFF;\
                                                    bLED2 = _LED_ON;\
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
                                                    bLED2 = _LED_OFF;\
                                                }

#define PCB_LED_TYPE3()                         {\
                                                }

#define PCB_LED_TYPE4()                         {\
                                                }

#define PCB_LED_TYPE5()                         {\
                                                }

#define PCB_LED_TYPE_FLASH()                    {\
													bLED2 = ~bLED2;\
                                                }

#endif
//-----------------------------------------------
// Macro of Keypad Setting
//-----------------------------------------------
#define AD_KEY0                                 (MCU_FF09_ADC_A0_CONVERT_RESULT) // Pin_42
#define AD_KEY1                                 (MCU_FF0A_ADC_A1_CONVERT_RESULT) // Pin_43

#define PCB_ADKEY0()                            (AD_KEY0)
#define PCB_ADKEY1()                            (AD_KEY1)

#define  bPOWER_KEY                              (_PIN_44_MCU_REG)// Pin_71 P3.0
/*

//A2按键
#define POWER_KEY								0xF8
#define EXIT_KEY								0x78
#define RIGHT_KEY  								0x00 
#define MENU_KEY 								0XA8
#define LEFT_KEY 								0X00 

#define POWER_REG								1
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								2
*/


//A1按键
#define POWER_KEY								0x80
#define EXIT_KEY								0xA8
#define RIGHT_KEY  								0x00 
#define MENU_KEY 								0X80
#define LEFT_KEY 								0XD0 

#define POWER_REG								1
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1


#if(0)//(_XHR_TEST)
#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)	{\
																					if(((0xA0) <= (ucV2)) && ((ucV2) < (0xB0)))\
																					{\
																						ucKeyState |= _2_KEY_MASK;\
																					}\
																					if(((0x70) <= (ucV1)) && ((ucV1) < (0x88)))\
																					{\
																						ucKeyState |=_4_KEY_MASK;\
																					}\
																					if(((0x70) <= (ucV2)) && ((ucV2) < (0x88)))\
																					{\
																						ucKeyState |= _1_KEY_MASK ;\
																					}\
																					if(((0xA0) <= (ucV1)) && ((ucV1) < (0xB0)))\
																					{\
																						ucKeyState |=_3_KEY_MASK ;\
																					}\
																					if(!bPOWER_KEY)\
																					{\
																						ucKeyState |=_5_KEY_MASK ;\
																					}\
																				}
#else
/*//A1按键
#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
                                                                if((0x80-10 <= (ucV2)) && ((ucV2) < 0X80+10))\
                                                                {\
                                                                    (ucKeyState) |=_EXIT_KEY_MASK    ;\
                                                                }\
                                                                if((0xC0 <= (ucV1)) && ((ucV1) < 0xE0))\
                                                                {\
                                                                    (ucKeyState) |= _MENU_KEY_MASK  ;\
                                                                }\
																if((0x00 <= (ucV1)) && ((ucV1) < 0x10))\
																{\
																	(ucKeyState) |= _RIGHT_KEY_MASK ;\
																}\
																	if((0x98 <= (ucV1)) && ((ucV1) < 0xb8))\
																{\
																	(ucKeyState) |= _LEFT_KEY_MASK ;\
																}\
																if((0x70 <= (ucV1)) && ((ucV1) < 0x90))\
																{\
																	(ucKeyState) |= _POWER_KEY_MASK;\
																}\
                                                               }


*/
//A2按键
#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
																	if((0x78-10 <= (ucV0)) && ((ucV0) < 0X78+10))\
																	{\
																		(ucKeyState) |=_EXIT_KEY_MASK	 ;\
																	}\
																	if((0xA8-10 <= (ucV0)) && ((ucV0) < 0xA8+10))\
																	{\
																		(ucKeyState) |= _MENU_KEY_MASK	;\
																	}\
																	if((0x00 <= (ucV0)) && ((ucV0) < 0x10))\
																	{\
																		(ucKeyState) |= _RIGHT_KEY_MASK ;\
																	}\
																	if((0x00 <= (ucV1)) && ((ucV1) < 0x10))\
																	{\
																		(ucKeyState) |= _LEFT_KEY_MASK ;\
																	}\
																	if(!bPOWER_KEY)\
																	{\
																	(ucKeyState) |= _POWER_KEY_MASK;\
																	}\
																   }

#endif

/*

//2513E02
if((((KeyDefault[0]<10)? 0: KeyDefault[0]-10) <= ((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[0]>237)? 247: KeyDefault[0]+10)))\
                                                                {\
                                                                    (ucKeyState) |= _POWER_KEY_MASK;\
                                                                }\



                                                                //2513E03
                                                                if(bPOWER_KEY == 0)\
																{\
																	(ucKeyState) = (ucKeyState) | _POWER_KEY_MASK;\
																}\  

*/


// Audio Macro //
/////////////////

//-----------------------------------------------
// Macro of PCB Audio Connect
//-----------------------------------------------
#define bAUDIODETECT                            (MCU_EMPTY_PIN_ASSIGN_ADDRESS)
//WZP加的
#define _AUDIO_CONNECT                          0
#define _AUDIO_DISCONNECT                       1

#define PCB_AUDIO_DETECT()                      (bAUDIODETECT)

#define bHeadphoneDetect                        (_PIN_53_MCU_REG)

#define _HEADPHONE_CONNECT                      1
#define _HEADPHONE_DISCONNECT                   0


#define PCB_HEADPHONE_DETECT()                  (bHeadphoneDetect) 

//-----------------------------------------------
// Macro of Earphone Detect
//-----------------------------------------------
//UserInterfaceGetAudioDACOutput
#define bPCB_HP_SENSE_DETECT                   (_PIN_53_MCU_REG)     

#define _HP_CONNECTED            				1
#define _HP_DISCONNECTED         				0

#define PCB_EARPHONE_CONNECTED()      			(bPCB_HP_SENSE_DETECT == _HP_CONNECTED)
#define PCB_EARPHONE_DISCONNECTED()   			(bPCB_HP_SENSE_DETECT == _HP_DISCONNECTED)



//-----------------------------------------------
// Macro of PCB Audio AMP Control
//-----------------------------------------------
#define bPCBAMPMUTECONTROL                      (_PIN_65_MCU_REG)

#define _AMP_MUTE_ON                            1
#define _AMP_MUTE_OFF                           0

#define PCB_AMP_MUTE(x)                         {\
                                                    bPCBAMPMUTECONTROL = (x);\
                                                }


#define _VOLUME_MAX                             255
#define _VOLUME_MIN                             0
#define _AUDIO_VOLUME_PWM_INVERSE				_OFF


#if(_PWM_DUT_RESOLUTION == _PWM_8BIT)

#define PCB_AUDIO_VOLUME_PWM(x)                 {\
                                                    MCU_ADJUST_8BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM, (x));\
                                                }

#define PCB_GET_AUDIO_VOLUME_PWM()              (MCU_GET_8BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM))

#endif




#if(_MPRT_SUPPORT == _ON)
//-----------------------------------------------
// Macro of MPRT CONTROL
//-----------------------------------------------
#define bMPRT_CURRENT_CONTROL                            (_PIN_34_MCU_REG)	// Pin_21
													
#define _MPRT_CURRENT_SWITCH_ON                            1
#define _MPRT_CURRENT_SWITCH_OFF                           0

#define PCB_MPRT_CURRENT_CONTROL(x)                    {\
                                                                  bMPRT_CURRENT_CONTROL = (x);\
                                                       }
 
#define PCB_MPRT_TCON_PIN_SHARE_CONFIG(x)       {\
													if(x == _ON)\
													{\
														ScalerSetByte(0x1003, (BYTE)(7));\
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
													ScalerSetDataPortBit(0x15A3,  0xe8, ~(_BIT6), _BIT6  );\
												}


#define PCB_MPRT_TCON_PWM_ADJUST()              {\
                                                 	ScalerTcon13Adjust(0x00, 0x1FFF, ( g_MPRTValue), GET_MDOMAIN_OUTPUT_VTOTAL());\
												}


/*
#define bMPRT_CONTROL                            (_PIN_35_MCU_REG)	// Pin_22
#define _MPRT_GPIO_ON                            1
#define _MPRT_GPIO_OFF                           0
#define PCB_MPRT_GPIO_CONTROL(x)                    {\
                                                                  bMPRT_CONTROL = (x);\
                                                }
*/
#endif



#endif // End of #if(_PCB_TYPE == _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS)




