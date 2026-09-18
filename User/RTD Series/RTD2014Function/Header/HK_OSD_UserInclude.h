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
// ID Code      : HK_OSD_UserInclude.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(_OSD_TYPE == _REALTEK_2014_OSD)
#include"Logo.h"
#include"LuoGang_OSD_UserInclude.h"
/////////////////////////////////////////////////////Project_ID////////////////////////////////////////////////////////////////////////////////

#ifndef _HDR_SUPPORT//||_EDID_HDMI_HDR_SUPPORT||_EDID_HDMI_HDR_SUPPORT
#if(_PROJECT == _RL6463_PROJECT)
#define _HDR_SUPPORT								_OFF//代码 带不带HDR
#elif(_PROJECT == _RL6432_PROJECT)||(_PROJECT == _RL6449_PROJECT)||(_PROJECT == _RL6851_PROJECT)
#define _HDR_SUPPORT								_ON//代码 带不带HDR
#endif
#endif


//--------------------------------------------------
// Definitions of MBR Backlight Range
//--------------------------------------------------
#define _OSD_MBR_DUTY_MAX                           100
#define _OSD_MBR_DUTY_MIN                           0
#define _OSD_MBR_DUTY_CENTER                        (((_OSD_MBR_DUTY_MAX - _OSD_MBR_DUTY_MIN) / 2) + _OSD_MBR_DUTY_MIN)
#define _OSD_MBR_DUTY_DEFAULT                       40
#define _OSD_MBR_POS_MAX                            100
#define _OSD_MBR_POS_MIN                            0
#define _OSD_MBR_POS_CENTER                         (((_OSD_MBR_POS_MAX - _OSD_MBR_POS_MIN) / 2) + _OSD_MBR_POS_MIN)
#define _OSD_MBR_POS_DEFAULT                        _OSD_MBR_POS_CENTER


#ifndef EDID_HDR_SC//||_EDID_HDMI_HDR_SUPPORT||_EDID_HDMI_HDR_SUPPORT
#if(_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6851_PROJECT)
#define EDID_HDR_SC								_HDR_SUPPORT//_OFF//代码 带不带HDR
#elif(_PROJECT == _RL6432_PROJECT)||(_PROJECT == _RL6449_PROJECT)
#define EDID_HDR_SC								_HDR_SUPPORT//_ON//代码 带不带HDR
#else
#warning "zhe is HDR is fail!!"
#endif
#endif
#include"HK_OSD_FuncDefine.h"

/*
		常用功能定义
*/
#ifndef _MC_LANGUAGE
#define _MC_LANGUAGE                                       _OFF
#endif

#ifndef _MC_EUROPE
#define _MC_EUROPE                                      	_OFF//君星杰欧洲客户需求
#endif

#ifndef _DEF_Energy_Value
#define _DEF_Energy_Value									_DEF_BACKLIGHT//能效提醒亮度
#endif

#ifndef _DEF_Energy_Msg
#define _DEF_Energy_Msg										_OFF//能效提示开关
#endif

#ifndef _OSD_BLACK_WHITE_TYPE
#define	_OSD_BLACK_WHITE_TYPE								_OFF //黑白和蓝白菜单选择
#endif

#ifndef _NAVIGAT_MENU_SURPPORT
#define _NAVIGAT_MENU_SURPPORT						  		_OFF  //导航菜单
#endif
#ifndef _ENABLE_VGA_AUTO_ADJUST
#define _ENABLE_VGA_AUTO_ADJUST						  		_OFF  //VGA通道退出键改为自动校正功能
#endif

#ifndef _DEF_DX_LED_MODE
#define _DEF_DX_LED_MODE									_OFF //稻兴LED灯模式
#endif

#ifndef _DEF_DX_LED_MODE2
#define _DEF_DX_LED_MODE2									_OFF //稻兴LED灯模式2 Spectrum：101-Marquee:110-Rotate：011
#endif

#ifndef _DEF_DX_LED_MODE3
#define _DEF_DX_LED_MODE3									_OFF //稻兴LED灯模式3 Spectrum：101-Marquee:110-Rotate：011   只控制SCL和SDA
#endif


#ifndef _OSD_DX_RUSSIAN_TEXT
#define _OSD_DX_RUSSIAN_TEXT								_OFF //稻兴翻译
#endif

#ifndef _SOURCE_AUTO_ON
#define _SOURCE_AUTO_ON								        _OFF //信号切换是否带auto
#endif

#ifndef	_EOC_RTS_FPS_SUPPORT
#define _EOC_RTS_FPS_SUPPORT					     	    _ON  //ECO模式是否带 RTS和FPS
#endif

#ifndef	_EOC_ENERGY_SUPPORT
#define _EOC_ENERGY_SUPPORT					     	    _OFF  //宏夏能源中心
#endif



/*
#ifndef _CT_7500_5800_sRGB_SUPPRT
#define _CT_7500_5800_sRGB_SUPPRT							_OFF  //色温是否带7500.5800.sRGB
#endif

#ifndef _CT_7500_SUPPRT
#define _CT_7500_SUPPRT										_ON//色温是否带7500
#endif

#ifndef _CT_5800_sRGB_SUPPRT
#define _CT_5800_sRGB_SUPPRT							    _OFF  //色温是否带5800.sRGB
#endif


#ifndef _CT_sRGB_SUPPRT
#define _CT_sRGB_SUPPRT							    		_OFF  //色温是否带sRGB
#endif
*/
#ifndef _CT_7500_SUPPRT
#define _CT_7500_SUPPRT										_OFF//色温是否带7500
#endif
	
#ifndef _CT_5800_SUPPRT
#define _CT_5800_SUPPRT							    		_OFF  //色温是否带5800
#endif
	
#ifndef _CT_sRGB_SUPPRT
#define _CT_sRGB_SUPPRT							    		_OFF  //色温是否带sRGB
#endif


#ifndef _RESET_KEEP_LANGUAGE
#define _RESET_KEEP_LANGUAGE								_OFF //复位是否恢复语言
#endif

#ifndef _OSD_RECALL_FUNC
#define _OSD_RECALL_FUNC									_OFF  //退出菜单是否记忆前面的状态
#endif

#ifndef _DCR_PANEL_ON_OFF
#define _DCR_PANEL_ON_OFF									_OFF //DCR打开，黑场是否关背光
#endif 

#ifndef _ADJ_BACKLIGHT_BY_TABLE
#define _ADJ_BACKLIGHT_BY_TABLE								_OFF //背光调节方式 
#endif
//使用TABLE方式时，请同时也定义_BACKLIGHT_DEF_PWM  _BACKLIGHT_MIN _BACKLIGHT_MAX (for DCR Mode)

#ifndef _OSD_7_KEY_SUPPROT
#define _OSD_7_KEY_SUPPROT									_OFF // 7键的开关
#endif

#ifndef _OSD_5_KEY_SUPPROT
#define _OSD_5_KEY_SUPPROT									_OFF // 5键的开关
#endif


#ifndef _BOARD_LINE_IN
#define _BOARD_LINE_IN										_OFF // 音频输入
#endif

#ifndef _LONG_PRESS_POWER_DOWN
#define _LONG_PRESS_POWER_DOWN								_OFF // 
#endif


#ifndef _OD_WEAK_MID_HIGH
#define _OD_WEAK_MID_HIGH									_OFF // OD 强中弱
#endif

#ifndef _MPRT_WEAK_MID_HIGH
#define _MPRT_WEAK_MID_HIGH									_OFF //mprt强中弱
#endif

#ifndef _OSD_FLICKER_FREE
#define _OSD_FLICKER_FREE									_OFF//菜单上带flick标志
#endif

#ifndef _OSD_SHOW_SYNC
#define _OSD_SHOW_SYNC										_ON//菜单上显示sync
#endif

#ifndef _OSD_POWER_SAVING_MODE
#define _OSD_POWER_SAVING_MODE								_OFF//是否支持省电模式
#endif

#ifndef _DEF_1080I_RESET
#define _DEF_1080I_RESET									_OFF//针对1080i切换后状态没有恢复
#endif

#ifndef _DEF_POWER_LONG_KEY
#define _DEF_POWER_LONG_KEY									_OFF//电源键长按开机
#endif

#ifndef _BURN_IN_LED
#define _BURN_IN_LED                                        _OFF //老化指示灯
#endif

#ifndef _MENU_INFOR_SHOW_HDR
#define	_MENU_INFOR_SHOW_HDR								_OFF//菜单信息页面显示 HDR
#endif




















//SET_COLOR_DEPTH(_COLOR_DEPTH_10_BITS);
/*		  常用默认值定义            */
#ifndef _DEF_BACKLIGHT
#define _DEF_BACKLIGHT                                		80//默认改为80  50//背光默认值
#endif


#ifndef _DEF_OSD_BACKLIGHT
#define _DEF_OSD_BACKLIGHT                               	_OFF//0//背光osd默认值和曲线默认值不一致时设置osd默认值
#endif

#ifndef _DEF_H_POS
#define _DEF_H_POS                                   		50//默认osd水平位置
#endif

#ifndef _DEF_V_POS
#define _DEF_V_POS                                       	50//默认osd垂直位置
#endif

#ifndef _DEF_OSD_TIMEOUT
#define _DEF_OSD_TIMEOUT                                    10
#endif

#ifndef _DEF_CONTRAST
#define _DEF_CONTRAST                                      	50//默认对比度
#endif

#ifndef _DEF_LANGUAGE
#define _DEF_LANGUAGE										_CHINESE_S//默认语言
#endif

#ifndef _DEF_COLORTEMP
#define _DEF_COLORTEMP										_CT_6500//默认色温
#endif

#ifndef _DEF_GAMMA
#define _DEF_GAMMA										    _GAMMA_OFF//默认gamma
#endif

#ifndef _DEF_VOLUME
#define _DEF_VOLUME										     50//音量osd默认值
#endif

#ifndef _DEF_VOLUME_PWM
#define _DEF_VOLUME_PWM										 80//音量曲线默认值 //没有用
#endif

#ifndef _DEF_OD
#define _DEF_OD										         _OFF//od默认开关
#endif

#ifndef _DEF_FREESYNC
#define _DEF_FREESYNC									     _OFF//freesync默认开关
#endif

#ifndef _DEF_HDR_MODE
#define _DEF_HDR_MODE									     _HDR10_MODE_OFF//hdr默认值
#endif

#ifndef _DEF_FACTORY_MODE
#define _DEF_FACTORY_MODE								     _ON//工厂模式默认开关
#endif

#ifndef _DEF_BURNING_MODE
#define _DEF_BURNING_MODE								     _ON//老化模式默认开关
#endif

#ifndef _SMALL_LOGO_TYPE
#define _SMALL_LOGO_TYPE                      				_SMALL_LOGO_TYPE_NONE
#endif

#ifndef _LOGO_TYPE
#define _LOGO_TYPE								    		 _LOGO_NONE//默认logo
#endif

#ifndef _OSD_LOGO_TYPE
#define _OSD_LOGO_TYPE								    	_OSD_LOGO_None//默认logo
#endif

#ifndef _OSD_LANGUAGE_DELETE
#define _OSD_LANGUAGE_DELETE                                 _OFF//删除不常用语言
#endif

#ifndef _DEF_OSD_LANGUAGE_ARROW
#define _DEF_OSD_LANGUAGE_ARROW								_OFF//osd语言变为左右切换选择
#endif

#ifndef _DEF_OSD_LANGUAGE_SHOW
#define _DEF_OSD_LANGUAGE_SHOW								_OFF//osd语言在主菜单显示当前语言
#endif

#ifndef _DEF_OSD_LANGUAGE_PAGE_RANK_4x6
#define _DEF_OSD_LANGUAGE_PAGE_RANK_4x6                     _ON//选择语言页面行列数 4X6,关闭则是 4x5 
#endif
#if(Project_ID == _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427)
#ifndef _DEF_DIGITAL_VOL_MAX
#define _DEF_DIGITAL_VOL_MAX								 0xFB8//音量最大值
#endif
#ifndef _DEF_DIGITAL_VOL_CENTER
#define _DEF_DIGITAL_VOL_CENTER								 0x9F5//音量默认值
#endif
#elif(Project_ID == _ID_2513ARE02_PN238CS02_2_FHD100HZ_20260713)
#ifndef _DEF_DIGITAL_VOL_MAX
#define _DEF_DIGITAL_VOL_MAX								 0xFB8//音量最大值
#endif
#ifndef _DEF_DIGITAL_VOL_CENTER
#define _DEF_DIGITAL_VOL_CENTER								 0x9F5//音量默认值
#endif
#else
#ifndef _DEF_DIGITAL_VOL_MAX
#define _DEF_DIGITAL_VOL_MAX								 0X2000//音量最大值
#endif
#ifndef _DEF_DIGITAL_VOL_CENTER
#define _DEF_DIGITAL_VOL_CENTER								 0X1600//音量默认值
#endif

#endif

#ifndef _DEF_DIGITAL_VOL_MIN
#define _DEF_DIGITAL_VOL_MIN							     0//音量最小值
#endif


#ifndef _DEF_LINEIN_VOL_MAX
#define _DEF_LINEIN_VOL_MAX								     0X2000
#endif


#ifndef _DEF_LINEIN_VOL_CENTER
#define _DEF_LINEIN_VOL_CENTER								 0X1600
#endif


#ifndef _DEF_LINEIN_VOL_MIN
#define _DEF_LINEIN_VOL_MIN							          0
#endif   


#ifndef _DEF_OD_60HZ
#define _DEF_OD_60HZ							              0x18//60hz od gain
#endif   

#ifndef _DEF_OD_75HZ
#define _DEF_OD_75HZ							              0x20//75hz od gain
#endif   

#ifndef _DEF_OD_100HZ
#define _DEF_OD_100HZ							              0x28//100hz od gain
#endif   

#ifndef _DEF_OD_144HZ
#define _DEF_OD_144HZ							              0x30//144hz od gain
#endif   

#ifndef _DEF_OD_165HZ
#define _DEF_OD_165HZ							              0x38//165hz od gain
#endif  

#ifndef _DEF_OD_240HZ
#define _DEF_OD_240HZ							              0x40//240hz od gain
#endif   

#ifndef _ENABLE_PAWER_SAVING_MENU
#define _ENABLE_PAWER_SAVING_MENU								    	_ON//关掉后PAWERSAVING菜单不显示
#endif

/*           不常用 				*/
#ifndef _DEF_BRIGHTNESS
#define _DEF_BRIGHTNESS                                      50//osd数字亮度
#endif

#ifndef _DEF_SHAPNESS
#define _DEF_SHAPNESS                                        2//锐利度
#endif

#ifndef _DEF_ECO
#define _DEF_ECO                                             _COLOREFFECT_STANDARD//eco
#endif

#ifndef _DEF_DCR
#define _DEF_DCR											_OFF//dcr
#endif

#ifndef _DEF_OD_GAIN
#define _DEF_OD_GAIN										0x20
#endif

#ifndef _DEF_OSDROTATE
#define _DEF_OSDROTATE										_OSD_ROTATE_DEGREE_0//osd 旋转
#endif

#ifndef _DEF_DISP_ROTATE
#define _DEF_DISP_ROTATE									_DISP_ROTATE_0//图像旋转
#endif

#ifndef _DEF_AUDIO_SOURCE
#define _DEF_AUDIO_SOURCE                 				    _DIGITAL_AUDIO//
#endif

#ifndef _DEF_OSD_DOUBLE
#define _DEF_OSD_DOUBLE                 				    _OFF
#endif

#ifndef _DEF_OSD_LEDTYPE
#define _DEF_OSD_LEDTYPE                 				    _OSDLedType_ON
#endif

#ifndef _BURNIN_MSG_MENU_SUPPORT
#define _BURNIN_MSG_MENU_SUPPORT                 		    _ON
#endif

#ifndef _DEF_HOTKEY_LEFT
#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
#endif

#ifndef _DEF_HOTKEY_RIGHT
#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_ECO
#endif


#ifndef _DEF_HOTKEY_UP
#define _DEF_HOTKEY_UP                 				        _MENU_FUN_DCR
#endif

#ifndef _DEF_HOTKEY_DOWN
#define _DEF_HOTKEY_DOWN                				    _MENU_FUN_CONTRAST
#endif

#ifndef _DEF_FLICKER_FREE
#define _DEF_FLICKER_FREE									     _ON//默认开，背光频率>20000
#endif

#ifndef _DEF_MPRT
#define _DEF_MPRT									   			 _OFF
#endif


#ifndef _OD_WEAK
#define _OD_WEAK									   			 0X18
#endif

#ifndef _OD_MID
#define _OD_MID									   				 0X30
#endif

#ifndef _OD_STRONG
#define _OD_STRONG									   			 0X40
#endif

#ifndef _DEF_DDCCIStatus
#define _DEF_DDCCIStatus									   	_ON
#endif

#ifndef _DEF_AspectRatio
#define _DEF_AspectRatio									   	_OSD_ASPECT_RATIO_FULL
#endif

#ifndef _DEF_CT_USER_OSD_R
#define _DEF_CT_USER_OSD_R									   	128
#endif

#ifndef _DEF_CT_USER_OSD_G
#define _DEF_CT_USER_OSD_G									   	128
#endif

#ifndef _DEF_CT_USER_OSD_B
#define _DEF_CT_USER_OSD_B									   	128
#endif


#ifndef _DEF_GAME_MODE
#define _DEF_GAME_MODE								     	_OFF//DP,HDMI游戏模式
#endif

#ifndef _DEF_GAME_FREESYNC
#define _DEF_GAME_FREESYNC								   	_OFF//游戏模式关闭freesync
#endif

#ifndef _DEF_DP_GAME_MODE
#define _DEF_DP_GAME_MODE								     _OFF//DP单模式游戏模式
#endif

#ifndef _DEF_DP_OVERCLOCK
#define _DEF_DP_OVERCLOCK								     _OFF//DP超频
#endif

#ifndef _DEF_HDMI_OVERCLOCK
#define _DEF_HDMI_OVERCLOCK								     _OFF//HDMI超频
#endif

#ifndef _ROTATE_FUN_SUPPORT
#if 1//_DISPLAY_ROTATION_SUPPORT
#define _ROTATE_FUN_SUPPORT								      _ON//_OFF//超频默认状态
#else
#define _ROTATE_FUN_SUPPORT								      _OFF//_OFF//超频默认状态
#endif
#endif

#ifndef _DEF_OVERCLOCK
#define _DEF_OVERCLOCK								         _OFF//超频默认状态
#endif

#ifndef _DEF_IR_PROTOCAL
#define _DEF_IR_PROTOCAL                                    _IR_NEC_DTV328
#endif

#ifndef _MPRT_DCR_REPULSION
#define	_MPRT_DCR_REPULSION                                 _OFF //DCR和MPRT互斥
#endif

#ifndef _DEF_OSD_DISP_NOSIGNAL_MSG_TIME
#define _DEF_OSD_DISP_NOSIGNAL_MSG_TIME                     3
#endif

#ifndef _DEF_FACTORY_EDIDINFO
#define _DEF_FACTORY_EDIDINFO                               _OFF//factory显示edid信息，未完善
#endif

#ifndef _DEF_DCC
#define _DEF_DCC                               0
#endif

#ifndef _DEF_VIVID
#define _DEF_VIVID                               _ULTRA_VIVID_OFF
#endif



#ifndef _OSD_6_KEY_SUPPROT
#define _OSD_6_KEY_SUPPROT									_OFF // 7键的开关
#endif

#ifndef _DEF_MENU_LOCK
#define _DEF_MENU_LOCK									    _OFF //
#endif

#ifndef _DEF_HOTKEY_LONG
#define _DEF_HOTKEY_LONG									_OFF //
#endif

#ifndef _DEF_HOTKEY_TIME
#define _DEF_HOTKEY_TIME									_OFF //快捷菜单自动关闭时间
#endif

#ifndef _ENABLE_MAIN_MENU_F_ICON
#define _ENABLE_MAIN_MENU_F_ICON							_ON//工厂老化模式
#endif

#ifndef _DEF_ECO_ICON
#define _DEF_ECO_ICON										_OFF //有问题
#endif		

#ifndef _DEF_LOS_TYPE3
#define _DEF_LOS_TYPE3										_OFF //快捷菜单自动关闭
#endif


#ifndef _DEF_TIMING_PI
#define _DEF_TIMING_PI								         _OFF//osd显示分辨率是否带P，I//NO USE
#endif

#ifndef _DEF_HDR_540
#define _DEF_HDR_540								         _OFF//HDR指定亮度
#endif

#ifndef _DEF_DCR_ECO_GRAY
#define _DEF_DCR_ECO_GRAY								_OFF
#endif

#ifndef _DEF_HDR_MPRT_GRAY
#define _DEF_HDR_MPRT_GRAY								_OFF
#endif

#ifndef _DEF_IR_TEST
#define _DEF_IR_TEST								_OFF
#endif

#ifndef _DEF_IR_SHOW
#define _DEF_IR_SHOW								_OFF
#endif

#ifndef _DEF_BURN_EDID
#define _DEF_BURN_EDID								_ON
#endif

#ifndef OSD_TRANS
#define OSD_TRANS								_OFF//一次20
#endif

#ifndef _DEF_BURN_EDID2
#define _DEF_BURN_EDID2                             _OFF//补充name sn
#endif

#ifndef _DEF_RESET_FACTORY_OFF
#define _DEF_RESET_FACTORY_OFF							_ON//工厂重置关闭老化
#endif

#ifndef _DEF_ASPECT_RATIO_AMOUNT
#define _DEF_ASPECT_RATIO_AMOUNT                 	_OSD_ASPECT_RATIO_4_BY_3
#endif

#ifndef _HDR10_MODE_END
#define _HDR10_MODE_END                 	_HDR10_MODE_AUTO//_HDR10_MODE_FORCE_2084
#endif

#ifndef _DEF_VGA_HDR_GRAY
#define _DEF_VGA_HDR_GRAY									_ON//VGA禁止HDR
#endif

#ifndef _DEF_OSD_BRIGHT_CHANGE
#define _DEF_OSD_BRIGHT_CHANGE								_ON//ECO切换亮度变化
#endif

#ifndef _DEF_DX_KEY_LED
#define _DEF_DX_KEY_LED										_OFF//ECO切换亮度变化
#endif

#ifndef _FREESYNC_LEFT_RIGHT_EFFECT
#define _FREESYNC_LEFT_RIGHT_EFFECT                        _OFF //左右键切换freesync生效
#endif
//--------------------------------------------------
// Definitions of Backlight Range
//--------------------------------------------------
#ifndef _BACKLIGHT_MAX
	#if(_PWM_DUT_RESOLUTION == _PWM_8BIT)
		#define _BACKLIGHT_MAX                              255
	#else
		#define _BACKLIGHT_MAX                              4095
	#endif
#endif

#ifndef _BACKLIGHT_MIN
#define _BACKLIGHT_MIN                          		    10
#endif

#ifndef _BACKLIGHT_DEF_PWM
#define _BACKLIGHT_DEF_PWM									 0x80
#endif

#ifndef _MPRT_PWM_MAX
#define _MPRT_PWM_MAX          0xf0
#endif

#ifndef _MPRT_PWM_DEF
#define _MPRT_PWM_DEF          0xD0
#endif


#ifndef _MPRT_PWM_MIN
#define _MPRT_PWM_MIN          0x60
#endif

#ifndef _MPRT_LOW_PERCENT
#define _MPRT_LOW_PERCENT          80
#endif


#ifndef _MPRT_MID_PERCENT
#define _MPRT_MID_PERCENT          60
#endif

#ifndef _MPRT_HIGH_PERCENT
#define _MPRT_HIGH_PERCENT          40
#endif

/********************************For ECO MODE******************************************/

#ifndef _ECO_MOVIE_BACKLIGHT
#define _ECO_MOVIE_BACKLIGHT					100
#endif

#ifndef _ECO_GAME_BACKLIGHT
#define _ECO_GAME_BACKLIGHT						60
#endif

#ifndef _ECO_TEXT_BACKLIGHT
#define _ECO_TEXT_BACKLIGHT						50
#endif

#ifndef _ECO_MOVIE_CONTRAST
#define _ECO_MOVIE_CONTRAST						55
#endif

#ifndef _ECO_GAME_CONTRAST
#define _ECO_GAME_CONTRAST						50
#endif

#ifndef _ECO_TEXT_CONTRAST
#define _ECO_TEXT_CONTRAST						45
#endif

#ifndef _ECO_MOVIE_BLACKLEVEL
#define _ECO_MOVIE_BLACKLEVEL					50
#endif

#ifndef _ECO_GAME_BLACKLEVEL
#define _ECO_GAME_BLACKLEVEL					50
#endif

#ifndef _ECO_TEXT_BLACKLEVEL
#define _ECO_TEXT_BLACKLEVEL					40
#endif

#if(_EOC_RTS_FPS_SUPPORT == _ON)
#ifndef _ECO_FPS_BACKLIGHT
#define _ECO_FPS_BACKLIGHT						100
#endif

#ifndef _ECO_RTS_BACKLIGHT
#define _ECO_RTS_BACKLIGHT						90
#endif

#ifndef _ECO_FPS_CONTRAST
#define _ECO_FPS_CONTRAST						60
#endif

#ifndef _ECO_RTS_CONTRAST
#define _ECO_RTS_CONTRAST						60
#endif

#ifndef _ECO_FPS_BLACKLEVEL
#define _ECO_FPS_BLACKLEVEL						60
#endif

#ifndef _ECO_RTS_BLACKLEVEL
#define _ECO_RTS_BLACKLEVEL						50
#endif

#endif



#ifndef _MEW_FONT
#define _MEW_FONT								_ON
#endif

#ifndef _MEW_OSD_FONT
#define _MEW_OSD_FONT								_ON
#endif

#ifndef _DEF_KVM_FUN
#define _DEF_KVM_FUN								_ON
#endif

///////////////////////////////////////pcb ////////////////////////////////////////////////

#if (_BACKLIGHT_MAX<_BACKLIGHT_DEF_PWM)
#warning "zhe is _BACKLIGHT_MAX error!!"

#elif 0//_BACKLIGHT_PWM_INVERSE &&(_BACKLIGHT_MAX>_BACKLIGHT_DEF_PWM)
#warning "zhe is _BACKLIGHT_MAX error!!"
#elif 0//(!_BACKLIGHT_PWM_INVERSE)&&(_BACKLIGHT_MAX<_BACKLIGHT_DEF_PWM)
#warning "zhe is _BACKLIGHT_MAX error!!"
#endif

#if(_CTS_TYPE == _CTS_GEN_1_12BIT && _CONTRAST_MAX<1000)
	#warning "zhe is _CONTRAST_MAX error!!"
#elif(_CTS_TYPE == _CTS_GEN_0_8BIT && _CONTRAST_MAX>1000)
	#warning "zhe is _CONTRAST_MAX error!!"
#endif


///////////////////////////////////////EDID SET////////////////////////////////////////////////
#ifndef _MEW_EDID_WRITE
#define _MEW_EDID_WRITE							_ON
#define _MEW_EDID_DP_WRITE						_ON
#define _MEW_EDID_HDMI_WRITE					_ON
#define _MEW_EDID_VGA_WRITE						_ON
#define _MEW_EDID_EDID_WRITE					_ON
#endif

#ifndef _MEW_EDID_EDID_WRITE
#define _MEW_EDID_DP_WRITE						_OFF
#define _MEW_EDID_HDMI_WRITE					_OFF
#define _MEW_EDID_VGA_WRITE						_OFF
#define _MEW_EDID_EDID_WRITE					_OFF

#endif

#define _MEW_EDID_TYPE_HIGHT					10//160 23xy/(50000-y) x=1080,y=144  jiegou:77
#define _MEW_EDID_TYPE_MIDEL					11//160 41
#define _MEW_EDID_TYPE_LOW						12//120,25
#define _MEW_EDID_TYPE_USER						12//自定义

#ifndef _MEW_EDID_TYPE
#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
#endif

#ifndef _PANEL_DP_MAX_FRAME_RATE
#define _PANEL_DP_MAX_FRAME_RATE				_PANEL_MAX_FRAME_RATE
#endif

#ifndef _PANEL_HDMI_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE				_PANEL_MAX_FRAME_RATE
#endif

#ifndef _PANEL_VGA_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE				_PANEL_MAX_FRAME_RATE
#endif

//先统一打开吧
#define _EDID_HDR_SUPPORT							_ON//直接 带不带HDR//废弃，暂不用

#ifndef _EDID_HDR_SUPPORT//||_EDID_HDMI_HDR_SUPPORT||_EDID_HDMI_HDR_SUPPORT
#if(_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6851_PROJECT)
#define _EDID_HDR_SUPPORT							_OFF//直接 带不带HDR
#elif(_PROJECT == _RL6432_PROJECT)||(_PROJECT == _RL6449_PROJECT)
#define _EDID_HDR_SUPPORT							_ON//直接 带不带HDR
#else
#warning "zhe is HDR is fail!!"
#endif
#endif

#if((_PROJECT == _RL6463_PROJECT)&&(_PANEL_HDMI_MAX_FRAME_RATE>=1150))
#warning "The _RL6463_PROJECT refresh rate of the project is greater than 1150!!"
#endif



#ifndef _EDID_HDMI_HDR_SUPPORT
#define _EDID_HDMI_HDR_SUPPORT						EDID_HDR_SC//_EDID_HDR_SUPPORT
#define _EDID_DP_HDR_SUPPORT						EDID_HDR_SC//_EDID_HDR_SUPPORT
#endif

#if	(_EDID_HDMI_HDR_SUPPORT!=EDID_HDR_SC)
#warning "zhe is HDR is fail!!"
#endif
#if	(_EDID_DP_HDR_SUPPORT!=EDID_HDR_SC)
#warning "zhe is HDR is fail!!"
#endif

#ifndef EDID_SIZE_WR
#define EDID_SIZE_WR								_ON//写入尺寸
#endif

#ifndef EDID_COLOR_CHARACTERISTICS_INFO
#define EDID_COLOR_CHARACTERISTICS_INFO				_OFF//写入color characteristics info
#endif

#ifndef _DEF_HDR_STATIC
#define _DEF_HDR_STATIC								_OFF//写入HDR Static Metadata data block
#endif

#ifndef EDID_ESTABLISHED_INFO
#define EDID_ESTABLISHED_INFO						_OFF//写入established TIMING info
#endif

#ifndef EDID_STANDARD_TIMING_INFO
#define EDID_STANDARD_TIMING_INFO					_OFF//写入stardard timings info
#endif

#ifndef EDID_color_depth_INFO
#define EDID_color_depth_INFO						_OFF//写入EDID_color_depth_INFO info youwenti
#endif

#ifndef EDID_ADD_VIDEO_CAPABILITY_DATA
#define EDID_ADD_VIDEO_CAPABILITY_DATA				_OFF//写入EDID_ADD_VIDEO_CAPABILITY_DATA info 修改
#endif

#ifndef EDID_TIMING_XG
#define EDID_TIMING_XG								_OFF//写入timing info 修改 不建议用
#endif

#ifndef VGA_EDID_table
#define VGA_EDID_table                          "VGA"
#endif

#ifndef DP_EDID_table
#define DP_EDID_table                          	"DP"
#endif

#ifndef HDMI_EDID_table
#define HDMI_EDID_table                         "HDMI"
#endif

#ifndef DP1_EDID_table
#define DP1_EDID_table                          DP_EDID_table//"DP"
#endif

#ifndef DP2_EDID_table
#define DP2_EDID_table                          DP_EDID_table//"DP"
#endif

#ifndef DP3_EDID_table
#define DP3_EDID_table                          DP_EDID_table//"DP"
#endif

#ifndef HDMI1_EDID_table
#define HDMI1_EDID_table                        HDMI_EDID_table//"HDMI"
#endif

#ifndef HDMI2_EDID_table
#define HDMI2_EDID_table                        HDMI_EDID_table//"HDMI"
#endif

#ifndef HDMI3_EDID_table
#define HDMI3_EDID_table                        HDMI_EDID_table//"HDMI"
#endif

#ifndef EDID_ID_NAME
#define EDID_ID_NAME                            "HKM"
#endif

#ifndef EDID_ID_CODE
#define EDID_ID_CODE                            0x2700
#endif


#ifndef EDID_ID_SIZE
#define EDID_ID_SIZE                            2700//0x0000
#endif

#ifndef EDID_YEAR_table
#define EDID_YEAR_table                         2025//年份
#endif

#ifndef EDID_WEEK_table
#define EDID_WEEK_table                         1//周别
#endif

#include"Logo_define.h"

#endif

