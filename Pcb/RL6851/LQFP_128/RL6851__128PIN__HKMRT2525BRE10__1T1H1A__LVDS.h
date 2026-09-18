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
// ID Code      : _RL6851__128PIN__HKMRT2525BRE10__1A1T1H__LVDS.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(_PCB_TYPE == _RL6851__128PIN__HKMRT2525BRE10__1A1T1H__LVDS)


#if 0//(Project_ID == ID_JS_HP_252510_1A1H1D_EDID_HP_ZHAN_D25c_20251204)
#define _MAIN_PAGE_MODEL_NAME               _M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_H__,_P__,__,_Z__,_H__,_A__,_N__,__,_D__,_2__,_5__,_c__
#define _MAIN_PAGE_MODEL_NAME2               _M__,_o__,_d__,_e__,_l__,__,_COLON__,__,__,_Z__,_H__,_A__,_N__,__,_D__,_2__,_5__,_c__
#else
#define _MAIN_PAGE_MODEL_NAME               _M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_H__,_P__
#endif
#define _BURNIN_STR_IC_NAME                	_S__,_c__,_a__,_l__,_e__,_r__,_COLON__,_R__,_T__,_D__,_2__,_5__,_2__,_5__,_B__,_R__,_SLINE__,_E__,_S__,_SLINE__,_C__,_G__

#define _PCB_DEBUG_DDC                          _VGA_DDC


///////////////////
// External Xtal //
///////////////////
//#define _DEF_PCB_PORT_TYPEC						_D0_PORT_TYPE_C
/*
#define _D0_DP_PCB_LANE0_PN_SWAP                _OFF
#define _D0_DP_PCB_LANE1_PN_SWAP                _OFF
#define _D0_DP_PCB_LANE2_PN_SWAP                _OFF
#define _D0_DP_PCB_LANE3_PN_SWAP                _OFF
*/
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
#define _A0_EMBEDDED_DDCRAM_MAX_SIZE         	_EDID_SIZE_128
#define _A0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_FLASH
#endif

//--------------------------------------------------
// D1 Input Port
//--------------------------------------------------
#define _D0_INPUT_PORT_TYPE                     _D0_DP_PORT
#define _D0_DDC_CHANNEL_SEL                     _DDC1

#define _D0_EMBEDDED_DDCRAM_MAX_SIZE        	_EDID_SIZE_256
#if(_WRITE_EDID_TO_SYSTEM_EEPROM==_ON)
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_FLASH
#else
#define _D0_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_CODE
#endif
#define _D0_DP_LINK_CLK_RATE                    _DP_HIGH_SPEED_270MHZ
#define _D0_DP_CONNECTOR_TYPE                   _DP_CONNECTOR_NORMAL
#define _D0_DP_MAIN_LINK_LANES                  _DP_FOUR_LANE

//--------------------------------------------------
// D1 Input Port
//--------------------------------------------------
#define _D1_INPUT_PORT_TYPE                     _D1_HDMI_PORT
#define _D1_DDC_CHANNEL_SEL                     _DDC0
#if(_HDMI_24C02_SUPPORT)
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_NONE
#define _D1_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_USER
#else
#define _D1_EMBEDDED_DDCRAM_MAX_SIZE            _EDID_SIZE_256
#define _D1_EMBEDDED_DDCRAM_LOCATION            _EDID_TABLE_LOCATION_FLASH
#endif

//////////////////////////
// Search Group & Priority //
/////////////////////////////

//--------------------------------------------------
// Input Port Search Group Define
//--------------------------------------------------
#define _A0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D0_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0
#define _D1_INPUT_PORT_GROUP                    _INPUT_PORT_GROUP_0


//--------------------------------------------------
// Input Port Search Priority Define (Must Start From Valid Port)
//--------------------------------------------------
#define _INPUT_PORT_SEARCH_PRI_0                _A0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_1                _D0_INPUT_PORT
#define _INPUT_PORT_SEARCH_PRI_2                _D1_INPUT_PORT

#define _D0_DP_PCB_LANE0_MAPPING                _DP_SCALER_LANE0
#define _D0_DP_PCB_LANE1_MAPPING                _DP_SCALER_LANE1
#define _D0_DP_PCB_LANE2_MAPPING                _DP_SCALER_LANE2
#define _D0_DP_PCB_LANE3_MAPPING                _DP_SCALER_LANE3

////////////////////
// For LVDS Panel //
////////////////////

//--------------------------------------------------
// LVDS Port Config
//--------------------------------------------------

#define _LVDS_PORT_SEL                          _LVDS_2_PORT_CD
#define _LVDS_PORT_MIRROR                       _DISABLE
#define _LVDS_PORT_CD_SWAP                      _DISABLE
#define _LVDS_PN_SWAP                        	_DISABLE

//--------------------------------------------------
// LVDS Driving Config
//--------------------------------------------------
#if 1//(EMI_test)
#define _LVDS_DRIV_CONTROL                      _LVDS_DRIV_CONTROL_2_5
#define _LVDS_VCM_CONTROL             			_LVDS_VCM_NORMAL//_LVDS_VCM_HIGH
#else
#define _LVDS_DRIV_CONTROL                      _LVDS_DRIV_CONTROL_3_5
#define _LVDS_VCM_CONTROL             			_LVDS_VCM_NORMAL
#endif
#define _LVDS_SR_CONTROL                    	_LVDS_SR_CONTROL_0
#define _LVDS_PRE_EMPHASIS_CONTROL       		_LVDS_PRE_EMPHASIS_0
#define _LVDS_TERMINATION_CONTROL               _DISABLE

//--------------------------------------------------
// LVDS SSC Config
//--------------------------------------------------
#if 1//(EMI_test)
#define _LVDS_SPREAD_RANGE                       15
#else
#define _LVDS_SPREAD_RANGE                       0
#endif
#define _LVDS_SPREAD_SPEED                      _SPEED_33K



/////////
// PWM //
/////////

//--------------------------------------------------
// PWM Setting
//--------------------------------------------------
#define _PWM_DUT_RESOLUTION                     _PWM_8BIT

#define _BACKLIGHT_PWM                          _PWM0
#define _BACKLIGHT_PWM_INVERSE                 	_OFF

#define _PWM0_EN                                _ON
#define _PWM1_EN                          		_OFF
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
#define _PCB_SYS_EEPROM_IIC                     _SW_IIC_PIN_GPIO//_HW_IIC_PIN_47_48
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
#include "RL6851__128PIN__HKMRT2525BRE10__1T1H1A__LVDS__PINSHARE.h"

///////////////
// PCB Mode  //
///////////////

//---------------------------------------------------------------------------
// PCB Rule Select
//---------------------------------------------------------------------------

#define _HEADPHONE_CONNECT                      1
#define _HEADPHONE_DISCONNECT                   0

#define PCB_HEADPHONE_DETECT()                  (_PIN_53_MCU_REG)


#define bPCBAMPMUTECONTROL                      (_PIN_65_MCU_REG)
#define _AMP_MUTE_ON                            0
#define _AMP_MUTE_OFF                           1
#define PCB_AMP_MUTE(x)                         {\
                                                    bPCBAMPMUTECONTROL = (x);\
                                                }


				

//////////////////////
// GPIO Power Macro //
//////////////////////
//-----------------------------------------------

//#define _DEF_PCB_PD_SCALER_VCC_SWTICH				_ON	//PD芯片电源常高,断电操作由拉HPD去进行处理
#define PCB_Type_C_PC_Power						(MCU_FE0B_PORT53_PIN_REG)
	
#define Type_C_PC_Power_On						1
#define Type_C_PC_Power_Off						0
	
#define PCB_Type_C_PC_Power_Swtich(x)			(PCB_Type_C_PC_Power = (x))

#define PCB_ON_REGION_GPIO_SETTING_POWER_AC_ON(){\
													PCB_AMP_MUTE(_AMP_MUTE_ON);\
												}
												
#define PCB_OFF_REGION_GPIO_SETTING_POWER_AC_PD_PS_ON()\
														{\
															PCB_AMP_MUTE(_AMP_MUTE_ON);\
														}
												
												
#define PCB_GPIO_SETTING_POWER_NORMAL()         {\
						PCB_D0_HOTPLUG(_D0_HOT_PLUG_HIGH);\
	PCB_Type_C_PC_Power_Swtich(Type_C_PC_Power_On);\
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

#define PCB_EMBEDDED_LDO_DETECT()           	(_EMBEDDED_LDO_OFF)//       (_EMBEDDED_LDO_ON)


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
// Macro of System Eeprom WP High/Low
//-----------------------------------------------
#if(_HDMI_24C02_SUPPORT)
#define bEEPROM_WRITE_PROTECT                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS)
#else
#define bEEPROM_WRITE_PROTECT                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS) // Pin_xxx, Px.x
#endif

#define _EEPROM_WP_ENABLE                       1
#define _EEPROM_WP_DISABLE                      0

#define PCB_EEPROM_WRITE_PROTECT(x)             {\
                                                    bEEPROM_WRITE_PROTECT = (x);\
                                                }

#define PCB_EEPROM_WRITE_PROTECT_DETECT()       (bEEPROM_WRITE_PROTECT)

//-----------------------------------------------
// Macro of EDID Eeprom WP High/Low
//-----------------------------------------------
#define bEDID_WRITE_PROTECT                     (_PIN_46_MCU_REG)//MCU_EMPTY_PIN_ASSIGN_ADDRESS

#define _EDID_EEPROM_WP_ENABLE                  1	//保护
#define _EDID_EEPROM_WP_DISABLE                 0	//写

#define PCB_A0_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }

#define PCB_D0_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }

#define PCB_D1_EDID_EEPROM_WRITE_PROTECT(x)     {\
                                                    bEDID_WRITE_PROTECT = (x);\
                                                }


#if(_HDMI_24C02_SUPPORT)
#define bSWIIC_SYS_EEPROM_SCL                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS) 
#define bSWIIC_SYS_EEPROM_SDA                   (MCU_EMPTY_PIN_ASSIGN_ADDRESS) 
#define bVgaDDCIICSCL							(_PIN_100_MCU_REG) // _156PIN_PIN_100, 
#define bVgaDDCIICSDA							(_PIN_101_MCU_REG) // _156PIN_PIN_101,
#define bDDC0IICSCL         				   	(_PIN_110_MCU_REG) // _156PIN_PIN_110, 
#define bDDC0IICSDA          					(_PIN_111_MCU_REG) // _156PIN_PIN_111,
#define PCB_SW_IIC_SDA_SET()                    {\
                                                     if(GET_SW_IIC_STATUS() == _IIC_VGA_DDC)	\
                                                    {												\
                                                    	bVgaDDCIICSDA = _TRUE;						\
                                                    }												\
                                                  else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0)	\
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
                                                  else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0)	\
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
                                                          else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
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
                                                     else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
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
                                                    else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
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
                                                    else if(GET_SW_IIC_STATUS() == _IIC_FOR_DDC0) 	\
                                                    {                                          		\
                                                        x = bDDC0IICSCL;             				\
                                                    }                                          		\
                                                   else if(GET_SW_IIC_STATUS() == _IIC_SYS_EEPROM) \
                                                    {                                          		\
                                                        x = bSWIIC_SYS_EEPROM_SCL;             		\
                                                    }                                          		\
                                                }
#endif
////////////////////////
// Cable Status Macro //
////////////////////////
#define GET_TYPEC_SWITCH()						(_PIN_39_MCU_REG)

//-----------------------------------------------
// Macro of Input Cable Connect
//-----------------------------------------------
#define bD0_DP_PIN15_CONNECT                    _PIN_47_MCU_REG
#define bD0_DP_PIN16_CONNECT                    _PIN_45_MCU_REG
#define bD0_DP_PIN17_CONNECT                    _PIN_48_MCU_REG

#define bA0_CONNECT                             _PIN_36_MCU_REG
#define bD1_CONNECT                             _PIN_44_MCU_REG
//#define bD0_CONNECT                      		(((bit)bD0_DP_PIN15_CONNECT == _FALSE) && ((bit)bD0_DP_PIN16_CONNECT == _FALSE) && ((bit)bD0_DP_PIN17_CONNECT == _TRUE))
#define bD0_CONNECT                             _PIN_45_MCU_REG//(((bit)bD0_DP_PIN15_CONNECT == _TRUE) && ((bit)bD0_DP_PIN16_CONNECT == _FALSE) && ((bit)bD0_DP_PIN17_CONNECT == _FALSE))
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
#define bD0_HPD                                 _PIN_37_MCU_REG
#define bD1_HPD                               	_PIN_38_MCU_REG  

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
#define bLED6                                   _PIN_114_MCU_REG
#define bLED7                                   _PIN_115_MCU_REG


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


// Macro of Keypad Setting
//-----------------------------------------------
#define AD_KEY1                                 (MCU_FF09_ADC_A0_CONVERT_RESULT)
#define AD_KEY2                                 (MCU_FF0A_ADC_A1_CONVERT_RESULT)
	 
#define PCB_ADKEY1()                            (AD_KEY1)
#define PCB_ADKEY2()                            (AD_KEY2)


#define POWER_KEY								0
#define MENU_KEY								0x00
#define EXIT_KEY								0xAD
#define LEFT_KEY								0x00
#define RIGHT_KEY								0x7F
	
#define POWER_REG								1
#define MENU_REG								2
#define EXIT_REG								1
#define LEFT_REG								1
#define RIGHT_REG								2

	
#define UP_KEY									0X7F
#define DOWN_KEY								0xAD
#define UP_REG									2
#define DOWN_REG								1
	

	
#define bPOWER_KEY                            (_PIN_50_MCU_REG)
	
		
/*	
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
																		(ucKeyState) |= _POWER_KEY_MASK ;\
																	}\
																	if(!bPOWER_KEY)\
																	{\
																		(ucKeyState) |=  _POWER_KEY_MASK;\
																	}\																  
																}
*/

#define PCB_KEY_STATE(ucV0, ucV1, ucV2, ucV3, ucKeyState)   {\
														if(((0) <= (ucV1)) && ((ucV1) < (0x10)))\
                                                        {\
                                                            ucKeyState |= _MENU_KEY_MASK; \
                                                        }\
														if(((0x7F-10) <= (ucV1)) && ((ucV1) < 0x7F+10))\
                                                        {\
                                                            (ucKeyState) |= _EXIT_KEY_MASK;\
                                                        }\
														if(((0XAD-10) <= (ucV1)) && ((ucV1) < (0xAD+10)))\
                                                        {\
                                                            (ucKeyState) |= _LEFT_KEY_MASK;\
                                                        }\
														if(((0X7f-10) <= (ucV2)) && ((ucV2) < (0x7f+10)))\
                                                        {\
                                                            (ucKeyState) |= _RIGHT_KEY_MASK;\
                                                        }\
														if(((0) <= (ucV2)) && ((ucV2) < 0x10))\
                                                        {\
                                                            (ucKeyState) |= _POWER_KEY_MASK;\
                                                        }\
                                                    }



/////////////////
// Audio Macro //
/////////////////


//-----------------------------------------------
// Macro of PCB Audio Connect
//----------------------------------------------- 



//-----------------------------------------------
// Macro of Earphone Detect
//-----------------------------------------------
//UserInterfaceGetAudioDACOutput





//-----------------------------------------------
// Macro of PCB Audio AMP Control
//-----------------------------------------------













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


#if 1//_MPRT_CENTER_NEW
#define PCB_MPRT_TCON_PWM_ADJUST()              {\
                                                 	ScalerTcon13Adjust(0x00, 0x1FFF, ( (DWORD)(GET_MDOMAIN_OUTPUT_VHEIGHT())/2-g_MPRTValue), ( (DWORD)(GET_MDOMAIN_OUTPUT_VHEIGHT())/2+g_MPRTValue));\
												}


#else
#define PCB_MPRT_TCON_PWM_ADJUST()              {\
                                                 	ScalerTcon13Adjust(0x00, 0x1FFF, ( 0+_MPRT_OFFSET), (g_MPRTValue+_MPRT_OFFSET)>GET_MDOMAIN_OUTPUT_VTOTAL()?GET_MDOMAIN_OUTPUT_VTOTAL():(g_MPRTValue+_MPRT_OFFSET));\
												}

#endif

#endif



#endif // End of #if(_PCB_TYPE == _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS)



