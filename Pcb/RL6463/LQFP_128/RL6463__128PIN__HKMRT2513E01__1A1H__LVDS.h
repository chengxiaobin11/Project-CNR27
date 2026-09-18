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
#if(_PCB_TYPE == _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS)


#define _PCB_DEBUG_DDC                          _DDC1//_VGA_DDC


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
#if _VGA1_SUPPORT
#define _A0_INPUT_PORT_TYPE                     _A0_VGA_PORT
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE                _EDID_SIZE_128
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE//_EDID_TABLE_LOCATION_PC99
#define _A0_PC99_EMBEDDED_EDID_TABLE            "./EDID/EdidVga/EDID_VGA_1920x1200@60.h"
#else
#define _A0_INPUT_PORT_TYPE                     _A0_NO_PORT
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE                _EDID_SIZE_NONE
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE

#endif
//--------------------------------------------------
// D0 Input Port
//--------------------------------------------------
#define _D0_INPUT_PORT_TYPE                     _D0_NO_PORT//_D0_DP_PORT
#define _D0_DDC_CHANNEL_SEL                     _DDC0//_DDC1
#define _D0_EMBEDDED_DDCRAM_MAX_SIZE                _EDID_SIZE_NONE//_EDID_SIZE_256
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_USER
//#define _D0_DP_LINK_CLK_RATE                    _DP_HIGH_SPEED_270MHZ
//#define _D0_DP_MAIN_LINK_LANES                  _DP_FOUR_LANE

//--------------------------------------------------
// D1 Input Port
//--------------------------------------------------
#define _D1_INPUT_PORT_TYPE                     _D1_HDMI_PORT
#define _D1_DDC_CHANNEL_SEL                     _DDC1
#if(_HDMI_24C02_SUPPORT)
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE          _EDID_SIZE_NONE//      _EDID_SIZE_256
#define _D1_EMBEDDED_DDCRAM_LOCATION       _EDID_TABLE_LOCATION_USER//     _EDID_TABLE_LOCATION_CODE

#else
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE                _EDID_SIZE_256
#define _D1_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
//#define _D1_PC99_EMBEDDED_EDID_TABLE            "./EDID/EdidHdmi/EDID_HDMI_1920x1080@60.h"
#endif
//#define _D1_PC99_EMBEDDED_EDID_TABLE            "./EDID/EdidHdmi/EDID_HDMI_1920x1080@60.h"



/////////////////////////////
// Search Group & Priority //
/////////////////////////////

//--------------------------------------------------
// Input Port Search Group Define
//--------------------------------------------------
#if _VGA1_SUPPORT
#define _A0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#endif
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0

//--------------------------------------------------
// Input Port Search Priority Define (Must Start From Valid Port)
//--------------------------------------------------
#if _VGA1_SUPPORT
#define _INPUT_PORT_SEARCH_PRI_0                _A0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D1_INPUT_PORT
#else
#define _INPUT_PORT_SEARCH_PRI_0                _D1_INPUT_PORT
#endif

////////////////////
// For LVDS Panel //
////////////////////

//--------------------------------------------------
// LVDS Port Config
//--------------------------------------------------
#define _LVDS_PORT_SEL                          _LVDS_2_PORT_AB
#define _LVDS_PORT_MIRROR                       _DISABLE


#if(Project_ID == ID_DX_2513E02_1A1H_P320HVN06_1_FHD75HZ_ENGLISH_LOGO_AAA_20221220)||(Project_ID == ID_DX_2513E02_1A1H_P320HVN061_FHD75HZ_RUSSIAN_LOGO_DEPO_20230525)||(Project_ID == ID_DX_2513E02_1A1H_T320HVN05D_FHD75HZ_ENGLISH_LOGO_LOGO_amazon_basics_20240319)
#define _LVDS_PORT_AB_SWAP                      _ENABLE   //       _DISABLE
#elif(Project_ID == ID_DX_2513E02_DV320FHB_NV0_FHD75HZ_20231010)
#define _LVDS_PORT_AB_SWAP                      _ENABLE   //       _DISABLE
#else
#define _LVDS_PORT_AB_SWAP            _DISABLE   //       _DISABLE

#endif
#define _LVDS_PN_SWAP                           _DISABLE//_ENABLE

//--------------------------------------------------
// LVDS Driving Config
//--------------------------------------------------
#define _LVDS_DRIV_CONTROL             _LVDS_DRIV_CONTROL_3_0//    _LVDS_DRIV_CONTROL_3_0  //   _LVDS_DRIV_CONTROL_3_0
#define _LVDS_VCM_CONTROL                _LVDS_VCM_NORMAL//   _LVDS_VCM_NORMAL//    _LVDS_VCM_NORMAL
#define _LVDS_SR_CONTROL                    _LVDS_SR_CONTROL_0//    _LVDS_SR_CONTROL_0
#define _LVDS_PRE_EMPHASIS_CONTROL       _LVDS_PRE_EMPHASIS_0//       _LVDS_PRE_EMPHASIS_0
#define _LVDS_TERMINATION_CONTROL               _DISABLE

//--------------------------------------------------
// LVDS SSC Config
//--------------------------------------------------
#define _LVDS_SPREAD_RANGE                      5//5//10

#define _LVDS_SPREAD_SPEED                      _SPEED_33K


/////////
// PWM //
/////////

//--------------------------------------------------
// PWM Setting
//--------------------------------------------------
#define _PWM_DUT_RESOLUTION                     _PWM_8BIT

#define _BACKLIGHT_PWM                          _PWM0
#if(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)
#define _BACKLIGHT_PWM_INVERSE                 	_OFF// _OFF
#else
#define _BACKLIGHT_PWM_INVERSE                 	_ON// _OFF
#endif
#define _AUDIO_VOLUMN_PWM					_NO_PWM//	_PWM1
#define _AUDIO_VOLUMN_PWM_INVERSE				_OFF

#define _PWM0_EN                                _ON
#define _PWM1_EN                          _OFF//      _ON//_OFF
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
#define _SW_IIC_SUPPORT                         _OFF
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
#define _PCB_SYS_EEPROM_IIC                     _HW_IIC_PIN_47_48


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
#include "RL6463__128PIN__HKMRT2513E01__1A1H_PINSHARE.h"


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
#define bEDID_WRITE_PROTECT                    ( MCU_EMPTY_PIN_ASSIGN_ADDRESS)

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

#define bA0_CONNECT                             _PIN_36_MCU_REG
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
#if(Project_ID == ID_TIEMU_HK2513E02_1V1H__SGM2701B01_2_FHD75HZ__20200718)||(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__M215HGE_L33__B225H__20201209)//||(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_B2475H__20201030)

#define  bLED2                                  _PIN_114_MCU_REG
#define  bLED1                                  _PIN_115_MCU_REG
#else
#define bLED1                                   _PIN_114_MCU_REG
#define bLED2                                   _PIN_115_MCU_REG

#endif

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
													bLED2 = ~bLED2;\
                                                }


//-----------------------------------------------
// Macro of Keypad Setting
//-----------------------------------------------
#define AD_KEY1                                 (MCU_FF09_ADC_A0_CONVERT_RESULT) // Pin_42
#define AD_KEY2                                 (MCU_FF0A_ADC_A1_CONVERT_RESULT) // Pin_43

#define PCB_ADKEY1()                            (AD_KEY1)
#define PCB_ADKEY2()                            (AD_KEY2)
#if(Project_ID == ID_TIEMU_HK2513E02_1V1H__SGM2701B01_2_FHD75HZ__20200718)

#define EXIT_KEY 								0x80
#define MENU_KEY								0x80
#define POWER_KEY								0XD0
#define RIGHT_KEY								0X0A
#define LEFT_KEY 								0XA8

#define EXIT_REG 								1
#define MENU_REG								2
#define POWER_REG								1
#define RIGHT_REG 								1
#define LEFT_REG								1
#elif(ID_TIEMU_HK2513E02_1V1H__M270HVR01_1_FHD75HZ__20200908 == Project_ID)
#define EXIT_KEY 								0x80
#define MENU_KEY								0x80
#define POWER_KEY								0XD0
#define LEFT_KEY 								0X0A
#define RIGHT_KEY 								0XA8

#define EXIT_REG 								1
#define MENU_REG								2
#define POWER_REG								1
#define LEFT_REG  								1
#define RIGHT_REG								1
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__M270HTN02_5_M2750H__20201022)
#define POWER_KEY								0x80
#define EXIT_KEY								0x00
#define RIGHT_KEY  								0Xa8
#define MENU_KEY 								0X80
#define LEFT_KEY 								0Xd0

#define POWER_REG								2
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__M270HTN02_5_M275H_CHINESE_20210421)
#define POWER_KEY								0x80
#define EXIT_KEY								0x00
#define RIGHT_KEY  								0Xa8
#define MENU_KEY 								0X80
#define LEFT_KEY 								0Xd0

#define POWER_REG								2
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_B2475H__20201030)
#define POWER_KEY								0xA8
#define EXIT_KEY								0x80
#define RIGHT_KEY  								0X80
#define MENU_KEY 								0XD0
#define LEFT_KEY 								0X00

#define POWER_REG								1
#define EXIT_REG								2
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_B245H__20200113)
#define POWER_KEY								0x80
#define EXIT_KEY								0xD0
#define RIGHT_KEY  								0XA8
#define MENU_KEY 								0X80
#define LEFT_KEY 								0X00

#define POWER_REG								1
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__INN_M200FGE_L20__20200309)
#define POWER_KEY								0x80
#define EXIT_KEY								0xD0
#define RIGHT_KEY  								0XA8
#define MENU_KEY 								0X80
#define LEFT_KEY 								0X00

#define POWER_REG								1
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1



#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__M215HGE_L33__B225H__20201209)
#define POWER_KEY								0x80
#define EXIT_KEY								0xD0
#define RIGHT_KEY  								0X00
#define MENU_KEY 								0X80
#define LEFT_KEY 								0XA8
#define POWER_REG								1
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__LC185TT7A__B195H__20201225)
#define POWER_KEY								0x80
#define EXIT_KEY								0xD0
#define LEFT_KEY   								0X00
#define MENU_KEY 								0X80
#define RIGHT_KEY 								0XA8

#define POWER_REG								1
#define EXIT_REG								1
#define LEFT_REG   								1
#define MENU_REG 								2
#define RIGHT_REG 								1

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ__20200805)

#if(1)
#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define MENU_KEY 								0X0A
#define LEFT_KEY								0XA8 
#define RIGHT_KEY								0XD0

#define POWER_REG								1
#define EXIT_REG								2
#define MENU_REG 								1
#define LEFT_REG								1
#define RIGHT_REG								1
#elif 0
#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define MENU_KEY 								0XD0
#define LEFT_KEY								0X0A
#define RIGHT_KEY								0XA8

#define POWER_REG								1
#define EXIT_REG								2
#define MENU_REG 								1
#define LEFT_REG								1
#define RIGHT_REG								1
#else //MF238B30
#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define RIGHT_KEY  								0XD0
#define MENU_KEY 								0X0A
#define LEFT_KEY 								0XA8

#define POWER_REG								1
#define EXIT_REG								2
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1

#endif
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_CC240PV1D_FHD60HZ_X248VH_20210406)

#if(1)
#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define MENU_KEY 								0XD0
#define LEFT_KEY								0X0A
#define RIGHT_KEY								0XA8

#define POWER_REG								1
#define EXIT_REG								2
#define MENU_REG 								1
#define LEFT_REG								1
#define RIGHT_REG								1
#else //MF238B30
#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define RIGHT_KEY  								0XD0
#define MENU_KEY 								0X0A
#define LEFT_KEY 								0XA8

#define POWER_REG								1
#define EXIT_REG								2
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1

#endif
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_CC240PV1D_FHD60HZ_HYD_C2415S_20210423)

#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define RIGHT_KEY  								0XD0
#define MENU_KEY 								0X0A
#define LEFT_KEY 								0XA8

#define POWER_REG								1
#define EXIT_REG								2
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ__20210330)

#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define RIGHT_KEY  								0XD0
#define MENU_KEY 								0X0A
#define LEFT_KEY 								0XA8

#define POWER_REG								1
#define EXIT_REG								2
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1
#elif(Project_ID == ID_DX_2513E02_1A1H_PT320CT01_3_FHD75HZ_ENGLISH_LOGO_EKO_20221130)
#define POWER_KEY								0x80
#define EXIT_KEY								0xA8
#define RIGHT_KEY  								0XD0
#define MENU_KEY 								0X80
#define LEFT_KEY 								0
#define POWER_REG								1
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
#elif(Project_ID == ID_DX_2513E02_1A1H_SG2381B01_1_FHD75HZ_ENGLISH_LOGO_EKO_20221130)
#define POWER_KEY								0x80
#define RIGHT_KEY								0xA8
#define EXIT_KEY  								0XD0
#define MENU_KEY 								0X80
#define LEFT_KEY 								0
#define POWER_REG								1
#define RIGHT_REG								1
#define EXIT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
#elif(Project_ID == ID_DX_2513E02_1A1H_P320HVN06_1_FHD75HZ_ENGLISH_LOGO_AAA_20221220)
#define POWER_KEY								0x80
#define RIGHT_KEY								0xA8
#define EXIT_KEY  								0XD0
#define MENU_KEY 								0X80
#define LEFT_KEY 								0
#define POWER_REG								1
#define RIGHT_REG								1
#define EXIT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
#elif(Project_ID == ID_DX_2513E02_1A1H_T320HVN05D_FHD75HZ_ENGLISH_LOGO_LOGO_amazon_basics_20240319)
#define POWER_KEY								0x80
#define RIGHT_KEY								0xA8
#define EXIT_KEY  								0XD0
#define MENU_KEY 								0X80
#define LEFT_KEY 								0
#define POWER_REG								1
#define RIGHT_REG								1
#define EXIT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
#elif(Project_ID == ID_DX_2513E02_1A1H_MV215FHBNX1_FHD75HZ_20240325)
#define POWER_KEY								0x80
#define RIGHT_KEY								0x00
#define EXIT_KEY  								0X80
#define MENU_KEY 								0xA8
#define LEFT_KEY 								0XD0

#define POWER_REG								1
#define RIGHT_REG								1
#define EXIT_REG  								2
#define MENU_REG 								1 // WWQ 20240327
#define LEFT_REG 								1

/*
#define POWER_KEY								0x80
#define RIGHT_KEY								0xA8
#define EXIT_KEY  								0XD0
#define MENU_KEY 								0X80
#define LEFT_KEY 								0
#define POWER_REG								1
#define RIGHT_REG								1
#define EXIT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
*/
#elif(Project_ID == ID_DX_2513E02_1A1H_P320HVN061_FHD75HZ_RUSSIAN_LOGO_DEPO_20230525)
#define POWER_KEY								0x80
#define RIGHT_KEY								0xA8
#define EXIT_KEY  								0XD0
#define MENU_KEY 								0X80
#define LEFT_KEY 								0
#define POWER_REG								1
#define RIGHT_REG								1
#define EXIT_REG  								1
#define MENU_REG 								2
#define LEFT_REG 								1
#elif(Project_ID == ID_DX_2513E02_1A1H_M270HAN01_0_FHD75HZ_RUSSIAN_LOGO_HPR_20221201)
#define POWER_KEY								0x80
#define MENU_KEY								0xA8
#define LEFT_KEY								0XD0
#define EXIT_KEY								0X80
#define RIGHT_KEY								0
#define POWER_REG								1
#define MENU_REG								1
#define LEFT_REG  								1
#define EXIT_REG 								2
#define RIGHT_REG 								1
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ_24FX75__20200918)
#define POWER_KEY								0x80
#define EXIT_KEY								0x80
#define RIGHT_KEY  								0XD0
#define MENU_KEY 								0X0A
#define LEFT_KEY 								0XA8

#define POWER_REG								1
#define EXIT_REG								2
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1
#elif(Project_ID == ID_DATONG_HK2513E02_1V1H__238FHD75_AXMT248__20201024)
#define POWER_KEY								0x80
#define EXIT_KEY								0x00
#define RIGHT_KEY  								0XA8
#define MENU_KEY 								0x80
#define LEFT_KEY 								0XD0

#define POWER_REG								2
#define EXIT_REG								1
#define RIGHT_REG  								1
#define MENU_REG 								1
#define LEFT_REG 								1

#elif(Project_ID == ID_HONGHETAI_HK2513E02__BOE_MV270FHB_N20_FHD75HZ__20200827)
#define POWER_KEY								0x80
#define EXIT_KEY 								0x80
#define MENU_KEY								0XD0
#define LEFT_KEY								0X0A
#define RIGHT_KEY								0XA8

#define POWER_REG								1
#define EXIT_REG 								2
#define MENU_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1




#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_PANDA_CC240LV2D_MF23BB30__20201228)
#define RIGHT_KEY  								0x80
#define EXIT_KEY 								0x80
#define MENU_KEY    							0XD0
#define LEFT_KEY  								0X0A
#define POWER_KEY   							0XA8

#define RIGHT_REG   							1
#define EXIT_REG  								2
#define MENU_REG  								1
#define LEFT_REG   								1
#define POWER_REG   							1
#elif(Project_ID == ID_CJTV_2513_MV238FHB_N30_20201013_CAB)
#define POWER_KEY								0x80
#define EXIT_KEY 								0XD0
#define MENU_KEY								0x80
#define LEFT_KEY								0XA8
#define RIGHT_KEY								0X00

#define POWER_REG								1
#define EXIT_REG 								1
#define MENU_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1


												
#elif(Project_ID == ID_CJTV_2513_MV238FHB_N30_20201013_FAB)
#define POWER_KEY								0x80
#define EXIT_KEY 								0x80
#define MENU_KEY								0XA8 
#define LEFT_KEY								0XD0 
#define RIGHT_KEY								0X00

#define POWER_REG								1
#define EXIT_REG 								2
#define MENU_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_CHANGJIA_HK2513E01_1V1H_M238HVN01_2_FHD75HZ_20200122)
#define POWER_KEY								0x80
#define EXIT_KEY 								0XD0
#define MENU_KEY								0x80
#define LEFT_KEY								0XA8
#define RIGHT_KEY								0X00

#define POWER_REG								1
#define EXIT_REG 								1
#define MENU_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_HUIXIONG_2513_M240UAN020_20210329)
#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0XD0
#define RIGHT_KEY 								0x0A
#define LEFT_KEY								0xA8

#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define RIGHT_REG 								1
#define LEFT_REG								1
#elif(Project_ID == ID_KANGJIA_HK2513AR_1V1H_PN238CT0214_FD75HZ_20210415)
#define POWER_KEY								0x80
#define EXIT_KEY 								0XD0
#define MENU_KEY								0x80
#define LEFT_KEY								0X0A
#define RIGHT_KEY								0XA8

#define POWER_REG								1
#define EXIT_REG 								1
#define MENU_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID ==ID_SONGREN_HK2513E01_1V1H_SG2381B01_20210129)
#define POWER_KEY								0x80
#define EXIT_KEY								0x00
#define MENU_KEY 								0XA8
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X80

#define POWER_REG								2
#define EXIT_REG								2
#define MENU_REG 								2
#define LEFT_REG								2
#define RIGHT_REG								1
#elif(Project_ID ==ID_SONGREN_HK2513E01_1V1H_ST215B042_20210329)
#define POWER_KEY								0x80
#define EXIT_KEY								0XD0
#define MENU_KEY 								0X80
#define LEFT_KEY								0XA8
#define RIGHT_KEY								0X00

#define POWER_REG								1
#define EXIT_REG								1
#define MENU_REG 								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID ==ID_DR_2513E02_SG2701B01_20210813)

#define POWER_KEY								0xA8
#define MENU_KEY								0xE0
#define EXIT_KEY								0XCC//0XD0
#define LEFT_KEY								0XA8
#define RIGHT_KEY								0XE3//0XE0

#define POWER_REG								2
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID ==ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_20220224)

#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_PORTUGUESE_LOGO_XZONE_20220622)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2525E01_1A1H_SG2381B011_FHD75HZ_ENGLISH_LOGO_EKO_20221012)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_ENGLISH_LOGO_QMAX_20221101)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B011_FHD100HZ_SPANISH_LOGO_NONE_20230512)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B01_A_FHD75HZ_GERMAN_LOGO_3KO_20221017)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B01_A_FHD100HZ_ENGLISH_LOGO_3KO_20230614)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B01_7_FHD100HZ_ENGLISH_LOGO_3KO_20230615)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B01_1_FHD100HZ_SPANISH_LOGO_TEROS_20230619)
#define POWER_KEY								0x00
#define MENU_KEY								0X80
#define EXIT_KEY								0xA8
#define LEFT_KEY								0X80
#define RIGHT_KEY								0XD0

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								2
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B01_1_FHD100HZ_RUSSIAN_LOGO_NONE_20240416)

#define POWER_KEY								0X80
#define MENU_KEY								0xA8
#define EXIT_KEY								0X80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0x00

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

/*
#define POWER_KEY								0x00
#define MENU_KEY								0X80
#define EXIT_KEY								0xA8
#define LEFT_KEY								0X80
#define RIGHT_KEY								0XD0

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								2
#define RIGHT_REG								1
*/
#elif(Project_ID == ID_DX_2513E01_1A1H_P270HVN020_FHD75HZ_20220302)

#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0X0A
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0XA8

#define POWER_REG								2
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_XKBH_2513E01_1A1H_P270HVN020_FHD75HZ_20220629)

#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0X0A
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0XA8

#define POWER_REG								2
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E01_1A1H_M238HVN021_FHD75HZ_20220423)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

/*
#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0X0A
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0XA8

#define POWER_REG								2
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1
*/
#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_RUSSIAN_LOGO_DEPO_20230525)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_HK2513E02_SG2381B02_2_FHD75HZ_20231012)
#define POWER_KEY								0x80
#define MENU_KEY								0xA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_ODT_HK2513E02_OSP245FB52_FHD120HZ_20240507)
#define POWER_KEY								0x80
#define MENU_KEY								0xA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E02_HV320FHB_F41_FHD75HZ_20240330)
#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0XD0
#define LEFT_KEY								0xA8
#define RIGHT_KEY								0

#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E02_DV320FHB_NV0_FHD75HZ_20231010)
#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0XD0
#define LEFT_KEY								0xA8
#define RIGHT_KEY								0

#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_ENGLISH_20230525)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A
#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E01_1A1H_SG2151B052_FHD75HZ_SPANISH_LOGO_TEROS_20230627)
#define POWER_KEY								0x00
#define MENU_KEY								0X80
#define EXIT_KEY								0xA8
#define LEFT_KEY								0X80
#define RIGHT_KEY								0XD0

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								2
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_M270HVN02_FHD96HZ_ENGLISH_20230525)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B052_FHD100HZ_ENGLISH_20240304)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B052_FHD100HZ_LOGO_Blaupunkt_20240402)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX2405018S_2513E02_1A1H_SG2701B052_FHD100HZ_20240603)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0X0A//0x80
#define LEFT_KEY								0x80//0XD0
#define RIGHT_KEY								0XD0//0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								1
#define LEFT_REG								2
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_GJH_2513E01_1A1H_FHD100HZ_LOGO_DUALSHINE_20240411)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B012_FHD100HZ_ENGLISH_LOGO_STEALTH_20240311)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX_2513E01_1A1H_HSD238HCAY4A_FHD100HZ_ENGLISH_LOGO_EKO_20240311)||(Project_ID == ID_DX_2513E01_1A1H_HSD238HCAY4A_FHD100HZ_ENGLISH_LOGO_STEALTH_20240311)
#define POWER_KEY								0x80
#define MENU_KEY								0XA8
#define EXIT_KEY								0x80
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								1
#define EXIT_REG								2
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == ID_DX240437S_2513E02_1H_SG2151B061_FHD75HZ_20240528)
#define POWER_KEY								0x80
#define MENU_KEY								0x80//0XA8
#define EXIT_KEY								0XD0///0x80
#define LEFT_KEY								0XA8 ///0XD0
#define RIGHT_KEY								0X0A //0X0A

#define POWER_REG								1
#define MENU_REG								2///1
#define EXIT_REG								1///2
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX240438S_2513E02_1H_SG2361B023_FHD75HZ_20240528)
#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0XA8 
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1
#elif(Project_ID == ID_DX2405003S_2513E02_1H_SG2361B023_FHD100HZ_20240606)
#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0XA8 
#define LEFT_KEY								0XD0
#define RIGHT_KEY								0X0A

#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1

#elif(Project_ID == _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427)
#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0XD0
#define LEFT_KEY								0X0A
#define RIGHT_KEY								0XA8

#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1

#else

#define POWER_KEY								0x80
#define MENU_KEY								0x80
#define EXIT_KEY								0XD0
#define LEFT_KEY								0X0A
#define RIGHT_KEY								0XA8

#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								1


#endif
#if(Project_ID == ID_MXDZ_HK2513E02_1V1H_CSOT_SG2701B01_2_LVDS_FHD75HZ_20210107)

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
#elif(Project_ID == ID_MXDZ_HK2513E02_1V1H_INL_M236HJJP02_LVDS_FHD_60HZ_20210108)

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

#elif(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)

#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
                                                                if((0x98 <= (ucV1)) && ((ucV1) < 0xb8))\
                                                                {\
                                                                    (ucKeyState) |=_EXIT_KEY_MASK    ;\
                                                                }\
                                                                if((0x00 <= (ucV1)) && ((ucV1) < 0x10))\
                                                                {\
                                                                    (ucKeyState) |= _MENU_KEY_MASK  ;\
                                                                }\
																if((0x00 <= (ucV2)) && ((ucV2) < 0x10))\
																{\
																	(ucKeyState) |= _RIGHT_KEY_MASK ;\
																}\
																if((0x70 <= (ucV2)) && ((ucV2) < 0x90))\
																{\
																	(ucKeyState) |= _DOWN_KEY_MASK ;\
																}\
																if((0x98 <= (ucV2)) && ((ucV2) < 0xb8))\
                                                                {\
                                                                    (ucKeyState) |=  _UP_KEY_MASK  ;\
                                                                }\
																if((0xC0 <= (ucV1)) && ((ucV1) < 0xE0))\
																{\
																	(ucKeyState) |= _LEFT_KEY_MASK ;\
																}\
																if((0x70 <= (ucV1)) && ((ucV1) < 0x90))\
																{\
																	(ucKeyState) |= _POWER_KEY_MASK;\
																}\
                                                               }

#elif(Project_ID == _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427)
#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
                                                                if((((KeyDefault[4]<10)? 0: KeyDefault[4]-10) <= ((KeyDefault[9]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[9]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[4]>237)? 247: KeyDefault[4]+10)))\
                                                                {\
                                                                    (ucKeyState) |= _RIGHT_KEY_MASK ;\
                                                                }\
                                                                if((((KeyDefault[3]<10)? 0: KeyDefault[3]-10) <= ((KeyDefault[8]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[8]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[3]>237)? 247: KeyDefault[3]+10)))\
                                                                {\
                                                                    (ucKeyState) |= _MENU_KEY_MASK ;\
                                                                }\                                                             
                                                                if((((KeyDefault[2]<10)? 0: KeyDefault[2]-10) <= ((KeyDefault[7]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[7]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[2]>237)? 247: KeyDefault[2]+10)))\
                                                                {\
                                                                    (ucKeyState) |= _LEFT_KEY_MASK ;\
                                                                }\                                                 
                                                                if((((KeyDefault[1]<10)? 0: KeyDefault[1]-10) <= ((KeyDefault[6]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[6]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[1]>237)? 247: KeyDefault[1]+10)))\
                                                                {\
																	(ucKeyState) |= _EXIT_KEY_MASK ;\
                                                                }\
                                                                if((((KeyDefault[0]<10)? 0: KeyDefault[0]-10) <= ((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2)) && (((KeyDefault[5]==1)? AD_KEY1 : AD_KEY2) < ((KeyDefault[0]>237)? 247: KeyDefault[0]+10)))\
                                                                {\
                                                                    (ucKeyState) |= _POWER_KEY_MASK;\
                                                                }\                                                                
                                                            }

#else

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
                                                                    (ucKeyState) |= _POWER_KEY_MASK;\
                                                                }\                                                                
                                                            }

#endif



// Audio Macro //
/////////////////

//-----------------------------------------------
// Macro of PCB Audio Connect
//-----------------------------------------------
#define bAUDIODETECT                            (MCU_EMPTY_PIN_ASSIGN_ADDRESS)

#define _AUDIO_CONNECT                          0
#define _AUDIO_DISCONNECT                       1

#define PCB_AUDIO_DETECT()                      (bAUDIODETECT)



#define bHeadphoneDetect                           (_PIN_53_MCU_REG)

#define _HEADPHONE_CONNECT                      1
#define _HEADPHONE_DISCONNECT                   0


#define PCB_HEADPHONE_DETECT()                  (bHeadphoneDetect)



//-----------------------------------------------
// Macro of PCB Audio AMP Control
//-----------------------------------------------
#define bPCBAMPMUTECONTROL                      (_PIN_65_MCU_REG)

#define _AMP_MUTE_ON                            1
#define _AMP_MUTE_OFF                           0

#define PCB_AMP_MUTE(x)                         {\
                                                    bPCBAMPMUTECONTROL = (x);\
                                                }

#if (_PWM_DUT_RESOLUTION == _PWM_8BIT)

#define PCB_AUDIO_VOLUME_PWM(x)                 {\
                                                    MCU_ADJUST_8BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM, (x));\
                                                }

#define PCB_GET_AUDIO_VOLUME_PWM()              (MCU_GET_8BIT_PWM_DUTY(_AUDIO_VOLUMN_PWM))

#endif


#define _MAIN_PAGE_MODEL_NAME               _M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_R__,_T__,_D__,_2__,_5__,_1__,_3__
#define _BURNIN_STR_IC_NAME                	 _H__,_K__,_DOT__,_M__,_DOT__,_R__,_T__,_2__,_5__,_1__,_3__,_E__,_0__,_1__


#if(_MPRT_SUPPORT == _ON)
//-----------------------------------------------
// Macro of MPRT CONTROL
//-----------------------------------------------
#define PCB_MPRT_TCON_PIN_SHARE_CONFIG(x)       {\
													if(x == _ON)\
													{\
														ScalerSetByte(0x1003, (BYTE)(5));\
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

#endif

#endif // End of #if(_PCB_TYPE == _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS)

