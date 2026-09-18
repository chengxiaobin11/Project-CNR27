#if(Project_ID == ID_HONGHETAI_HK2513E02__BOE_MV270FHB_N20_FHD75HZ__20200827)

#if(_AUO_M270HAN01_1_75HZ == _PANEL_TYPE)

	#define _DEF_BACKLIGHT                                       80
	#define _BACKLIGHT_DEF_PWM									 0x94
	#define _BACKLIGHT_MAX										 0XA4
#else

	#define _BACKLIGHT_DEF_PWM									 0x80
	#define _BACKLIGHT_MAX										 0XA0	

#endif
	#define _BACKLIGHT_MIN										 0X10


	#define _DEF_LANGUAGE										 _KOREAN
	
	#define _DEF_P1_PICTURE_ITEM2								 _MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM3								 _MENU_FUN_ECO	
	#define _DEF_P1_PICTURE_ITEM4       						 _MENU_FUN_HDR
	
	#define _DEF_P6_MISC_ITEM3      	 						 _MENU_FUN_OD 
	#define _DEF_P6_MISC_ITEM4      							 _MENU_FUN_FREESYNC

	#define _DEF_COLORTEMP    					 				 _CT_6500

#elif(Project_ID == ID_XKBH_HK2561DP1HDMI__AUO_P320HVN05_0_FHD144HZ__20201218)

	#define _DEF_DIGITAL_VOL_MAX								 3500
	#define _DEF_DIGITAL_VOL_CENTER                              2300
	
	#define _DEF_LINEIN_VOL_MAX								     0X2F00
	#define _DEF_LINEIN_VOL_CENTER								 0X2400
	#define _DEF_BACKLIGHT                                       50
	#define _MPRT_RATIO 								         50
		
	#define _DEF_HOTKEY_LEFT									 _HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									 _MENU_FUN_ECO
	
	
	#define _BACKLIGHT_MAX 										 0XFF 
		
	#define _BACKLIGHT_DEF_PWM 									 0X90
		
	#define _BACKLIGHT_MIN										 10 
	
	
	#define _MPRT_PWM_MAX          								 0xE0
	
	#define _MPRT_PWM_DEF         								 0xC0
	
	
	#define _MPRT_PWM_MIN         								 0x60
	
	#define _DEF_LANGUAGE										 _ENGLISH
		
	#define _DEF_COLORTEMP    					 				 _CT_USER
	#define _DEF_HDR_MODE    						             _HDR10_MODE_OFF
	

	#define _OSD_7_KEY_SUPPROT									 _ON// 7键的开关 
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_0__,_2__,_5__


#elif(Project_ID == ID_TIEMU_HK2561DP1HDMI__COST_SG2381B01_2_FHD165HZ__T3207QP_20201113)
#define _LOGO_TYPE											     _LOGO_BRAUMERS
	
#define _DEF_DIGITAL_VOL_MAX								     3500
#define _DEF_DIGITAL_VOL_CENTER                                  2300
	
#define _DEF_BACKLIGHT                                           80
#define _MPRT_RATIO 								             50
	
#define _DEF_HOTKEY_LEFT									     _HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									     _MENU_FUN_ECO
	
	
#define _BACKLIGHT_MAX 						 					 88 //360MA
		
#define _BACKLIGHT_DEF_PWM 									     75//300MA
		
#define _BACKLIGHT_MIN											 10 
	
	
#define _MPRT_PWM_MAX          									 0xB0
	
#define _MPRT_PWM_DEF          									 0x90
	
	
#define _MPRT_PWM_MIN         									 0x60
	
#define _DEF_LANGUAGE											 _ENGLISH
	
#define _DEF_P6_MISC_ITEM4      								_MENU_FUN_FLICKER_FREE 
	
	
#define _DEF_COLORTEMP    					 					_CT_9300
#define _DEF_HDR_MODE    					 					_HDR10_MODE_OFF
	

#define _LONG_PRESS_POWER_DOWN               					_ON

#define _DEF_FLICKER_FREE                    					_ON

#define _CT_7500_SUPPRT										    _ON

#elif(Project_ID == ID_SHUNWEI_HK2561DP1HDMI__COST_SG3151B05_3_FHD165HZ__F32_20200615)

#define _LOGO_TYPE											    _LOGO_NONE
	
#define _DEF_DIGITAL_VOL_MAX								    0X1B16
#define _DEF_DIGITAL_VOL_CENTER                                 0XEB8
	

#define _MPRT_RATIO 								            50
	
#define _DEF_HOTKEY_LEFT									   _HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									   _MENU_FUN_AUDOIVOLUME
	
	
#define _BACKLIGHT_MAX 						                   149 //360MA
		
#define _BACKLIGHT_DEF_PWM 									   0X80//300MA
		
#define _BACKLIGHT_MIN										   30 
	
	
#define _MPRT_PWM_MAX          						           0xE0
	
#define _MPRT_PWM_DEF                                          0xC0
		
#define _MPRT_PWM_MIN          								   0x60
	
#define _DEF_LANGUAGE										   _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE								   _ON //黑白和蓝白菜单选择
	
	
#define _DEF_COLORTEMP    						               _CT_USER
#define _DEF_HDR_MODE    									   _HDR10_MODE_AUTO
#elif(Project_ID == ID_SHUNWEI_HK25561DP1HDMI_LG_LM270WQ5_SSA1_QHD60HZ__20201225)

#define _DEF_DIGITAL_VOL_MAX								    0X1B16
#define _DEF_DIGITAL_VOL_CENTER                                 0XEB8
	
#define _DEF_LANGUAGE										   _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE								   _ON //黑白和蓝白菜单选择
#define _DEF_COLORTEMP    						               _CT_USER
#define _DEF_HDR_MODE    									   _HDR10_MODE_AUTO
	
#elif(Project_ID == ID_NYC_SHUNWEI_HK2556E02_1P1H_AUO_P320HVN05_FHD165HZ_20201123)

#define _LOGO_TYPE											 _LOGO_NONE
	
	
#define _MPRT_RATIO 								        50
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
	
#define _BACKLIGHT_MAX 						 				173 //360MA
		
#define _BACKLIGHT_DEF_PWM 								    139//300MA
		
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_KOREAN
#define _DEF_P5_RESET_ITEM2    	  	  _MENU_FUN_LED							
	
#define _DEF_P5_RESET_ITEM3    	 	  _MENU_FUN_RESET

#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_2__,_2__,_2__

#elif(Project_ID == ID_SHUNWEI_HK2556E06_1P1H_M270HVR013_LVDS_FHD165_20210525)
#define _DEF_LANGUAGE										_ENGLISH
#define _LOGO_TYPE											 _LOGO_JVC	
#define _MPRT_RATIO 								        60
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
//#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_DCR
//#define _DEF_P1_PICTURE_ITEM3      							_MENU_FUN_ECO
//#define _DEF_P1_PICTURE_ITEM4      							_MENU_FUN_HDR 
//#define _DEF_P1_PICTURE_ITEM5      							_MENU_FUN_MPRT
	
//#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
#define _BACKLIGHT_MAX 						 				117//173 //360MA
		
#define _BACKLIGHT_DEF_PWM 								    77//117//139//300MA
		
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
	
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
#define _LONG_PRESS_POWER_DOWN               				_ON
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_7__,_0__,_1__




#define _DEF_P1_PICTURE_ITEM0      	_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      	_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      	_MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      	_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4		_MENU_FUN_HDR				
#define _DEF_P1_PICTURE_ITEM5     	_MENU_FUN_MPRT



#define _DEF_P2_DISPLAY_ITEM0		_MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1      	_MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      	_MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      	_MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      	_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      	_MENU_FUN_LOWBLUE

#define _DEF_P3_COLORTEMP_ITEM0		_MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1     _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2     _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3    	_MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4     _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM5     _MENU_NULL




//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL


#define _DEF_P6_MISC_ITEM0     	 	_MENU_FUN_SIGNAL

#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_OD

#elif(Project_ID == ID_SHUNWEI_HK2556E06_1P1H_SG2701B01_8_LVDS_FHD165_20211023)
//0:默认  1:LT-GN27225U 2:LT-GN27225

//#define _MPRT_MIN_FRAME_RATE          						590
	#define _DEF_KEHU_ID									2	
#if(_DEF_KEHU_ID==1)
	#define _DEF_LANGUAGE										_SPANISH
#elif(_DEF_KEHU_ID==2)
	#define _DEF_LANGUAGE										_ENGLISH
#else
	#define _DEF_LANGUAGE										_ENGLISH
#endif
#define _LOGO_TYPE											 _LOGO_JVC	
#define _MPRT_RATIO 								        60
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
//#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_DCR
//#define _DEF_P1_PICTURE_ITEM3      							_MENU_FUN_ECO
//#define _DEF_P1_PICTURE_ITEM4      							_MENU_FUN_HDR 
//#define _DEF_P1_PICTURE_ITEM5      							_MENU_FUN_MPRT
	
//#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
#define _BACKLIGHT_MAX 						 				117//173 //360MA
		
#define _BACKLIGHT_DEF_PWM 								    77//117//139//300MA
		
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
	
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
#define _LONG_PRESS_POWER_DOWN               				_ON
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_0__,_2__,_7__




#define _DEF_P1_PICTURE_ITEM0      	_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      	_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      	_MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      	_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4		_MENU_FUN_HDR				
#define _DEF_P1_PICTURE_ITEM5     	_MENU_FUN_MPRT



#define _DEF_P2_DISPLAY_ITEM0		_MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1      	_MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      	_MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      	_MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      	_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      	_MENU_FUN_LOWBLUE

#define _DEF_P3_COLORTEMP_ITEM0		_MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1     _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2     _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3    	_MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4     _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM5     _MENU_NULL




//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL


#define _DEF_P6_MISC_ITEM0     	 	_MENU_FUN_SIGNAL

#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_OD
			 			 
#elif(Project_ID == ID_JX_HK2556E02_1P1H_M270HCA_L7B_LVDS_FHD165HZ_20211012)

#define _LOGO_TYPE											_LOGO_MUCAI// _LOGO_NONE
//#define _MPRT_RATIO 								        60
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
//#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_DCR
//#define _DEF_P1_PICTURE_ITEM3      							_MENU_FUN_ECO
//#define _DEF_P1_PICTURE_ITEM4      							_MENU_FUN_HDR 
//#define _DEF_P1_PICTURE_ITEM5      							_MENU_FUN_MPRT
	
//#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
#define _BACKLIGHT_MAX 						 				117//173 //360MA
		
#define _BACKLIGHT_DEF_PWM 								    77//117//139//300MA
		
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_CHINESE_S//_ENGLISH
	
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
#define _DEF_DIGITAL_VOL_MAX								0xD33
#define _DEF_DIGITAL_VOL_CENTER 							0x8CC  

//#define _LONG_PRESS_POWER_DOWN               				_ON
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_0__,_1__,_9__

#elif(Project_ID == ID_AS_HK2556E02_1P1H_SG2701B01_8_LVDS_FHD165_20211027)

#define _LOGO_TYPE											_LOGO_NONE
//#define _MPRT_RATIO 								        60
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
//#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_DCR
//#define _DEF_P1_PICTURE_ITEM3      							_MENU_FUN_ECO
//#define _DEF_P1_PICTURE_ITEM4      							_MENU_FUN_HDR 
//#define _DEF_P1_PICTURE_ITEM5      							_MENU_FUN_MPRT
	
//#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
#define _BACKLIGHT_MAX 						 				117//173 //360MA
		
#define _BACKLIGHT_DEF_PWM 								    77//117//139//300MA
		
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_CHINESE_S//_ENGLISH
	
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
#define _DEF_P5_RESET_ITEM2    	  	  _MENU_FUN_LED//预留灯效位置
#define _DEF_P5_RESET_ITEM3    	  	  _MENU_FUN_RESET//预留灯效位置

//#define _LONG_PRESS_POWER_DOWN               				_ON
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_0__,_2__,_7__


	

#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_M315HVR016_LVDS_FHD165_20210605)

	#define _LOGO_TYPE											 _LOGO_JVC	
	#define _MPRT_RATIO 										60

	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

	#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_HDR 
	#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_MPRT
	#define _DEF_P6_MISC_ITEM3									_MENU_NULL

	#define _BACKLIGHT_MAX										117//173 //360MA
	#define _BACKLIGHT_DEF_PWM									77//117//139//300MA
	#define _BACKLIGHT_MIN										30 

	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60

	#define _DEF_LANGUAGE										_ENGLISH
	#define _DEF_COLORTEMP										_CT_6500
	#define _DEF_HDR_MODE										_HDR10_MODE_AUTO
	#define _LONG_PRESS_POWER_DOWN								_ON

	#define _LONG_PRESS_POWER_DOWN               				_ON
#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M240HW01V8_LVDS_FHD165HZ_20210608)
//	HDR默认AUTO  包含OFF 2084打开MPRT需要屏蔽FRESSYNC功能 默认亮度改90
//需要更新MPRT HDR数据
	#define _LOGO_TYPE											_LOGO_JAPANNEXT	
	#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	//#define _DEF_FACTORY_MODE								     _OFF

	//#define _DEF_BURNING_MODE								     _OFF
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	
	#define _BACKLIGHT_MAX 						 				125//117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    101//77//117//139//300MA
	#define _BACKLIGHT_MIN								        30 
	
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	
	#define _DEF_LANGUAGE										_JAPANESE
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	//#define _LONG_PRESS_POWER_DOWN               				_ON
	#define _SOURCE_AUTO_ON								        _ON //信号切换是否带auto
	#define _CT_sRGB_SUPPRT							    		_ON  //色温是否带sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
	#define _HDR10_MODE_END                 					_HDR10_MODE_AUTO

	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_6__,_2__,_1__

	#define _DEF_P1_PICTURE_ITEM0	   							_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1	   							_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2	   							_MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3	  							_MENU_FUN_ECO 
	#define _DEF_P1_PICTURE_ITEM4	   							_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM5	   							_MENU_FUN_SHARPNESS 
	
	#define _DEF_P2_DISPLAY_ITEM0	   							_MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1	   							_MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2	   							_MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3	   							_MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4	   							_MENU_FUN_ASPECT								//预留gamma位置 
	#define _DEF_P2_DISPLAY_ITEM5	  							_MENU_FUN_POWER_SAVING								//预留色域模式位置 
			
	#define _DEF_P3_COLORTEMP_ITEM0 	 						_MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 	 						_MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 	 						_MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 	 						_MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 	 						_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 	 						_MENU_NULL
	
	#define _DEF_P4_OSDSETTING_ITEM0	  						_MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1	  						_MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2	  						_MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3	  						_MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4	  						_MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5	  						_MENU_NULL 
	
	#define _DEF_P5_RESET_ITEM0 		  						_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1 		  						_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2 		  						_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3 		  						_MENU_FUN_POWER_OFF								
	#define _DEF_P5_RESET_ITEM4 		  						_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM5 		  						_MENU_FUN_MPRT
					
	
	#define _DEF_P6_MISC_ITEM0			 						_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1			 						_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2			 						_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3			 						_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4			 						_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5			 						_MENU_NULL
#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_MT236FHB_N10_LVDS_FHD165HZ_20211015)
	//	HDR默认AUTO  包含OFF 2084打开MPRT需要屏蔽FRESSYNC功能 默认亮度改90
	//需要更新MPRT HDR数据
	#define _LOGO_TYPE											_LOGO_JAPANNEXT	
	#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	//#define _DEF_HDR_MPRT_GRAY									_ON
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
		//#define _DEF_FACTORY_MODE 								 _OFF
	
		//#define _DEF_BURNING_MODE 								 _OFF
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
		
		
	#define _BACKLIGHT_MAX 						 				0x9A//125//117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    0x7D//125//101//77//117//139//300MA
	#define _BACKLIGHT_MIN								        0x15//30 
		
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
		
	#define _DEF_LANGUAGE										_JAPANESE
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
		//#define _LONG_PRESS_POWER_DOWN							_ON
	#define _SOURCE_AUTO_ON								        _ON //信号切换是否带auto
	#define _CT_sRGB_SUPPRT							    		_ON  //色温是否带sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_1__,_0__,_8__
	
	#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
	#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
	#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT//_MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING//_MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2								_MENU_NULL//_MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3								_MENU_NULL//_MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4								_MENU_NULL//_MENU_FUN_ASPECT								//预留gamma位置 
	#define _DEF_P2_DISPLAY_ITEM5								_MENU_NULL//_MENU_FUN_POWER_SAVING								//预留色域模式位置 
			
	#define _DEF_P3_COLORTEMP_ITEM0 							_MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 							_MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 							_MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 							_MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 							_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 							_MENU_NULL
	
	#define _DEF_P4_OSDSETTING_ITEM0							_MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1							_MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2							_MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3							_MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4							_MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5							_MENU_NULL 
	
	#define _DEF_P5_RESET_ITEM0 								_MENU_FUN_RESET//_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_POWER_OFF//_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_HDR//_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3 								_MENU_FUN_MPRT//_MENU_FUN_POWER_OFF 							
	#define _DEF_P5_RESET_ITEM4 								_MENU_NULL//_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL//_MENU_FUN_MPRT
					
	
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL
	
#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M250HAN01_8_LVDS_FHD165HZ_20211117)
	
	#if(_PROJEC_ID_TYPE==2)
		#define _LOGO_TYPE										_LOGO_JAPANNEXT 
		#define _OD_WEAK										0X18
		#define _OD_MID 										0X30
		#define _OD_STRONG										0X40
		#define _OD_WEAK_MID_HIGH								_ON // OD 强中弱
		#define _DEF_LANGUAGE									_JAPANESE
		#define _BACKLIGHT_MAX									0x9A//125//117//173 //360MA
		#define _BACKLIGHT_DEF_PWM								0x7D//125//101//77//117//139//300MA
		#define _BACKLIGHT_MIN									0x15//30 
		#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_1__,_2__,_4__
	#elif(_PROJEC_ID_TYPE==4)
		#define _LOGO_TYPE										_LOGO_NONE
		#define _DEF_LANGUAGE									_ENGLISH
		#define _BACKLIGHT_MAX									0x70//125//117//173 //360MA
		#define _BACKLIGHT_DEF_PWM								0x56//125//101//77//117//139//300MA
		#define _BACKLIGHT_MIN									0x15//30 
		#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_3__,_2__,_9__
	#else
		#define _LOGO_TYPE										_LOGO_JAPANNEXT 
		#define _DEF_LANGUAGE									_JAPANESE
		#define _BACKLIGHT_MAX									0x9A//125//117//173 //360MA
		#define _BACKLIGHT_DEF_PWM								0x7D//125//101//77//117//139//300MA
		#define _BACKLIGHT_MIN									0x15//30 
		#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_1__,_1__,_2__
	#endif

	#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300

	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
#if 0//PCB 300ma	
	#define _BACKLIGHT_MAX 						 				0xFF//125//117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    0xB1//125//101//77//117//139//300MA
	#define _BACKLIGHT_MIN								        0x15//30 
#else
#endif
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
		
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO

	#define _SOURCE_AUTO_ON								        _ON //信号切换是否带auto
	#define _CT_sRGB_SUPPRT							    		_ON  //色温是否带sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO

	
	#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
	#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
	#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING
	#define _DEF_P2_DISPLAY_ITEM2								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM3								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM4								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM5								_MENU_NULL
			
	#define _DEF_P3_COLORTEMP_ITEM0 							_MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 							_MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 							_MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 							_MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 							_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 							_MENU_NULL
	
	#define _DEF_P4_OSDSETTING_ITEM0							_MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1							_MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2							_MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3							_MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4							_MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5							_MENU_NULL 
	
	#define _DEF_P5_RESET_ITEM0 								_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_POWER_OFF
	#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM3 								_MENU_FUN_MPRT						
	#define _DEF_P5_RESET_ITEM4 								_MENU_FUN_LED
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
	
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL
	
#elif(Project_ID == ID_MC_HK2556E01_1P2H_INNOLUX_M270KCJ_L5Z_LVDS_QHD75HZ_20211206)
	#define _LOGO_TYPE											_LOGO_JAPANNEXT	
	#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
			
	#define _BACKLIGHT_MAX 						 				0x92//280NIT
	#define _BACKLIGHT_DEF_PWM 								    0x7D//300MA 240NIT
	#define _BACKLIGHT_MIN								        0x15//30 
			
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
			
	#define _DEF_LANGUAGE										_JAPANESE
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //信号切换是否带auto
	#define _CT_sRGB_SUPPRT							    		_ON  //色温是否带sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_2__,_1__,_7__
		
	#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
	#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
		
	#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING
	#define _DEF_P2_DISPLAY_ITEM2								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM3								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM4								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM5								_MENU_NULL
				
	#define _DEF_P3_COLORTEMP_ITEM0 							_MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 							_MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 							_MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 							_MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 							_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 							_MENU_NULL
		
	#define _DEF_P4_OSDSETTING_ITEM0							_MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1							_MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2							_MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3							_MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4							_MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5							_MENU_NULL 
		
	#define _DEF_P5_RESET_ITEM0 								_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_POWER_OFF
	#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM3 								_MENU_NULL//_MENU_FUN_MPRT						
	#define _DEF_P5_RESET_ITEM4 								_MENU_NULL//_MENU_FUN_LED
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
						
		
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL

#elif(Project_ID == ID_MC_HK2556E01_1P2H_AUO_M250HAN01_8_LVDS_FHD165HZ_20211122)
	#define _LOGO_TYPE											_LOGO_BLUE_BG//_LOGO_NONE
	#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
			
	#define _BACKLIGHT_MAX 						 				0XA2//0x9A   //125//117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    0X80//0x7D   //125   //101//77//117//139//300MA
	#define _BACKLIGHT_MIN								        0x15//30 
			
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
			
	#define _DEF_LANGUAGE										_DUTCH
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	#define _DEF_GAMMA											_GAMMA_22
	
	#define _OD_WEAK										0X18
	#define _OD_MID 										0X30
	#define _OD_STRONG										0X40
	#define _OD_WEAK_MID_HIGH								_ON // OD 强中弱
	
	#define _SOURCE_AUTO_ON								        _ON //信号切换是否带auto
	//#define _DEF_DDCCIStatus									_OFF 
	//#define _CT_sRGB_SUPPRT							    		_ON  //色温是否带sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_2__,_1__,_0__
		
	#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
	#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
		
	#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING
	#define _DEF_P2_DISPLAY_ITEM2								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM3								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM4								_MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM5								_MENU_NULL
				
	#define _DEF_P3_COLORTEMP_ITEM0 							_MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 							_MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 							_MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 							_MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 							_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 							_MENU_NULL
		
	#define _DEF_P4_OSDSETTING_ITEM0							_MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1							_MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2							_MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3							_MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4							_MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5							_MENU_NULL 
		
	#define _DEF_P5_RESET_ITEM0 								_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_POWER_OFF
	#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM3 								_MENU_FUN_MPRT						
	#define _DEF_P5_RESET_ITEM4 								_MENU_FUN_LED
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
						
		
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL

#elif(Project_ID == ID_SHUNWEI_HK2556E02_1P1H_BOE_MT236FHM_N10_FHD165HZ_20210607)
	#define _LOGO_TYPE											_LOGO_NONE
	#define _MPRT_RATIO 								        60
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
//#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_DCR
//#define _DEF_P1_PICTURE_ITEM3      							_MENU_FUN_ECO
//#define _DEF_P1_PICTURE_ITEM4      							_MENU_FUN_HDR 
//#define _DEF_P1_PICTURE_ITEM5      							_MENU_FUN_MPRT
	
	#define _DEF_DIGITAL_VOL_MAX								 0X1600
	#define _DEF_DIGITAL_VOL_CENTER								 0X1000
	#define _DEF_DIGITAL_VOL_MIN							     0

	#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
	#define _BACKLIGHT_MAX 						 				117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    77//139//300MA
	#define _BACKLIGHT_MIN								        30 
	
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	
	#define _DEF_LANGUAGE										_KOREAN
	
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_2__,_1__,_5__
	//#define _LONG_PRESS_POWER_DOWN               				_ON
#elif(Project_ID == ID_SHUNWEI_HK2556E02_1P1H_AUO_M236HVR010_LVDS_FHD165HZ_20210611)
	#define _DEF_BACKLIGHT										50
	#define _LOGO_TYPE											_LOGO_NONE
	#define _MPRT_RATIO 								        60
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	//#define _DEF_P1_PICTURE_ITEM2 								_MENU_FUN_DCR
	//#define _DEF_P1_PICTURE_ITEM3 								_MENU_FUN_ECO
	//#define _DEF_P1_PICTURE_ITEM4 								_MENU_FUN_HDR 
	//#define _DEF_P1_PICTURE_ITEM5 								_MENU_FUN_MPRT
		
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
	#define _BACKLIGHT_MAX 						 				117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    89//77//139//300MA
	#define _BACKLIGHT_MIN								        30 
		
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
		
	#define _DEF_LANGUAGE										_KOREAN
		
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
		//#define _LONG_PRESS_POWER_DOWN							_ON
#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_6__,_1__,_6__

#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M250HAN016_EDP4LAN_FHD165HZ_20210713)
	#define _DEF_BACKLIGHT										50
	#define _LOGO_TYPE											_LOGO_NONE
	#define _MPRT_RATIO 								        60
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	//#define _DEF_P1_PICTURE_ITEM2 								_MENU_FUN_DCR
	//#define _DEF_P1_PICTURE_ITEM3 								_MENU_FUN_ECO
	//#define _DEF_P1_PICTURE_ITEM4 								_MENU_FUN_HDR 
	//#define _DEF_P1_PICTURE_ITEM5 								_MENU_FUN_MPRT
		
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
	#define _BACKLIGHT_MAX 						 				117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    89//77//139//300MA
	#define _BACKLIGHT_MIN								        30 
		
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
		
	#define _DEF_LANGUAGE										_KOREAN
		
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
		//#define _LONG_PRESS_POWER_DOWN							_ON
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_6__,_1__,_6__

#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_20210913)
	#define _OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择


		
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
		
#if(_PROJEC_ID_TYPE==1)
	#define _MPRT_RATIO 										60
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

	#define _DEF_BACKLIGHT										50//100
	#define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_LANGUAGE										_KOREAN
	
	#define _BACKLIGHT_MAX										0X84//0XC4 //450MA
	#define _BACKLIGHT_DEF_PWM									0X5C//0X6C//300MA
	#define _BACKLIGHT_MIN										30 	
	
	//#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	//#define _DEF_DIGITAL_VOL_MAX								 0X1700//0X2000 
	//#define _DEF_DIGITAL_VOL_CENTER 							 0X13CC//0X1600 
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	#define _SOURCE_AUTO_ON 									_ON //信号切换是否带auto
	
	#define _DEF_COLORTEMP    					 			    _CT_USER
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_0__,_2__,_6__
	//#define _LONG_PRESS_POWER_DOWN							_ON
#elif(_PROJEC_ID_TYPE==2)
	#define _MPRT_RATIO 										40
	#define _LOGO_TYPE											_LOGO_JAPANNEXT 
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	#define _DEF_BACKLIGHT										80
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _SOURCE_AUTO_ON 									_ON //信号切换是否带auto
	#define _CT_sRGB_SUPPRT 									_ON  //色温是否带sRGB
	
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_1__,_1__,_1__
			
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _BACKLIGHT_MAX										0X64//0X84//0XC4 //450MA
	#define _BACKLIGHT_DEF_PWM									0X54//0X5C//0X6C//300MA
	#define _BACKLIGHT_MIN										30 
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
		
	#define _DEF_LANGUAGE										_JAPANESE
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	#define _OSD_POWER_SAVING_MODE								_ON
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO



	#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
	#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
	#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT//_MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING//_MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2								_MENU_NULL//_MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3								_MENU_NULL//_MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4								_MENU_NULL//_MENU_FUN_ASPECT								//预留gamma位置 
	#define _DEF_P2_DISPLAY_ITEM5								_MENU_NULL//_MENU_FUN_POWER_SAVING								//预留色域模式位置 
			
	#define _DEF_P3_COLORTEMP_ITEM0 							_MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 							_MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 							_MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 							_MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 							_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 							_MENU_NULL
	
	#define _DEF_P4_OSDSETTING_ITEM0							_MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1							_MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2							_MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3							_MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4							_MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5							_MENU_NULL 
	
	#define _DEF_P5_RESET_ITEM0 								_MENU_FUN_RESET//_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_POWER_OFF//_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_HDR//_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3 								_MENU_FUN_MPRT//_MENU_FUN_POWER_OFF 							
	#define _DEF_P5_RESET_ITEM4 								_MENU_FUN_LED//_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL//_MENU_FUN_MPRT
					
	
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL//_MENU_FUN_LED
#endif
#elif(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_202109131)
	#define _OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
		

	#define _MPRT_RATIO 										40
	#define _LOGO_TYPE											_LOGO_JAPANNEXT 
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	#define _DEF_BACKLIGHT										80
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _SOURCE_AUTO_ON 									_ON //信号切换是否带auto
	#define _CT_sRGB_SUPPRT 									_ON  //色温是否带sRGB
	
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_5__,_1__,_3__
			
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _BACKLIGHT_MAX										0X64//0X84//0XC4 //450MA
	#define _BACKLIGHT_DEF_PWM									0X54//0X5C//0X6C//300MA
	#define _BACKLIGHT_MIN										30 
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
		
	#define _DEF_LANGUAGE										_JAPANESE
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	#define _OSD_POWER_SAVING_MODE								_ON
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO



	#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
	#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
	#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT//_MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING//_MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2								_MENU_NULL//_MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3								_MENU_NULL//_MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4								_MENU_NULL//_MENU_FUN_ASPECT								//预留gamma位置 
	#define _DEF_P2_DISPLAY_ITEM5								_MENU_NULL//_MENU_FUN_POWER_SAVING								//预留色域模式位置 
			
	#define _DEF_P3_COLORTEMP_ITEM0 							_MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 							_MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 							_MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 							_MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 							_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 							_MENU_NULL
	
	#define _DEF_P4_OSDSETTING_ITEM0							_MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1							_MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2							_MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3							_MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4							_MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5							_MENU_NULL 
	
	#define _DEF_P5_RESET_ITEM0 								_MENU_FUN_RESET//_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_POWER_OFF//_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_HDR//_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3 								_MENU_FUN_MPRT//_MENU_FUN_POWER_OFF 							
	#define _DEF_P5_RESET_ITEM4 								_MENU_FUN_LED//_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL//_MENU_FUN_MPRT
					
	
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL//_MENU_FUN_LED

#elif(Project_ID == ID_JINGBAO_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD1644HZ_20211122)
		
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
		
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

	#define _DEF_BACKLIGHT										80//100
	#define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_LANGUAGE										_ENGLISH
	
	#define _BACKLIGHT_MAX										0X64//0X84//0XC4 //450MA
	#define _BACKLIGHT_DEF_PWM									0X54//0X5C//0X6C//300MA
	#define _BACKLIGHT_MIN										30 

	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_1__,_2__,_2__

#elif(Project_ID == ID_SHUNWEI_HK2556E10_1P1H_LG_LM290WW2_SSC1_LVDS_WFHD75HZ_20210712)
	#define _DEF_BACKLIGHT										100//50
	#define _LOGO_TYPE											_LOGO_NONE
	#define _MPRT_RATIO 								        60
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	//#define _DEF_P1_PICTURE_ITEM2 								_MENU_FUN_DCR
	//#define _DEF_P1_PICTURE_ITEM3 								_MENU_FUN_ECO
	//#define _DEF_P1_PICTURE_ITEM4 								_MENU_FUN_HDR 
	//#define _DEF_P1_PICTURE_ITEM5 								_MENU_FUN_MPRT
	//#define _LONG_PRESS_POWER_DOWN							_ON
	
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
	#define _BACKLIGHT_MAX 						 				117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    89//77//139//300MA
	#define _BACKLIGHT_MIN								        30 
		
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	#define _DEF_LANGUAGE										_KOREAN
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	#define _DEF_ASPECT_RATIO_AMOUNT                 			_OSD_ASPECT_RATIO_21_BY_9
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_1__,_1__,_9__
	
	#undef _BURNIN_STR_IC_NAME
	#define _BURNIN_STR_IC_NAME                	 _H__,_K__,_DOT__,_M__,_DOT__,_R__,_T__,_2__,_5__,_5__,_6__,_E__,_1__,_0__
	
//#define _DEF_IR_PROTOCAL                                    _IR_SW_LGTV
#elif (Project_ID == ID_CS_2556)
#define	_OSD_BLACK_WHITE_TYPE								1 //黑白和蓝白菜单选择
	/*#define _DEF_BACKLIGHT										50
	#define _LOGO_TYPE											_LOGO_NONE
	#define _MPRT_RATIO 								        60
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT		_OSD_BLACK_WHITE_TYPE							_MENU_FUN_AUDOIVOLUME
		//#define _DEF_P1_PICTURE_ITEM2 								_MENU_FUN_DCR
		//#define _DEF_P1_PICTURE_ITEM3 								_MENU_FUN_ECO
		//#define _DEF_P1_PICTURE_ITEM4 								_MENU_FUN_HDR 
		//#define _DEF_P1_PICTURE_ITEM5 								_MENU_FUN_MPRT
		//#define _LONG_PRESS_POWER_DOWN							_ON
		
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
	#define _BACKLIGHT_MAX 						 				117//173 //360MA
	#define _BACKLIGHT_DEF_PWM 								    89//77//139//300MA
	#define _BACKLIGHT_MIN								        30 
			
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	#define _DEF_LANGUAGE										_KOREAN
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_FACTORY_MODE	0
	#define _DEF_ASPECT_RATIO_AMOUNT                 			_OSD_ASPECT_RATIO_21_BY_9
	#define _DEF_AspectRatio									   	_OSD_ASPECT_RATIO_4_BY_3*/
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_1__,_0__,_1__,_7__
	//#define _DEF_IR_PROTOCAL									  _IR_SW_LGTV
#undef _MAIN_PAGE_MODEL_NAME 

#define _MAIN_PAGE_MODEL_NAME               _M__,_o__,_d__,_e__,_l__,__,_COLON__,__,_R__,_T__,_D__,_2__,_0__,_2__,_1__
#elif (Project_ID    ==  ID_RD_HK2557E02_1P1H_SN238CS041_LVDS_FDH180HZ_20230522)

#define _LOGO_TYPE											 _LOGO_NONE
	
#define _MPRT_RATIO 								        50
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
#define _DEF_BACKLIGHT                                           80
#define _BACKLIGHT_MAX									   (0XFF-0X77)//	0X70// 0xB0    
#define _BACKLIGHT_DEF_PWM								  (0XFF-0X84)// 0X50//	0X5B//0x98
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_ENGLISH
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_5__,_2__,_2__
#elif (Project_ID    ==  ID_WM_HK2557E04_1P2H_SG2701B018_LVDS_FDH200HZ_20230517)

#define _LOGO_TYPE											 _LOGO_NONE//_LOGO_NONE
	
#define _MPRT_RATIO 								        50
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
#define _DEF_BACKLIGHT                                           80
#define _BACKLIGHT_MAX									   (0XFF-0X77)//	0X70// 0xB0    
#define _BACKLIGHT_DEF_PWM								  (0XFF-0X84)// 0X50//	0X5B//0x98
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_ENGLISH
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_5__,_2__,_2__

#elif(Project_ID == ID_DR_HK2556E02_MV270FHB_NF0_FHD144HZ_20210406)

#define _LOGO_TYPE											 _LOGO_NONE
	
#define _MPRT_RATIO 								        50
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
#define _DEF_BACKLIGHT                                           80
#define _BACKLIGHT_MAX									   (0XFF-0X77)//	0X70// 0xB0    
#define _BACKLIGHT_DEF_PWM								  (0XFF-0X84)// 0X50//	0X5B//0x98
#define _BACKLIGHT_MIN								        30 
	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_KOREAN
	
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
			
#define _DEF_OD_60HZ							              0x18

#define _DEF_OD_75HZ							              0x20

#define _DEF_OD_100HZ							              0x28

#define _DEF_OD_144HZ							              0x30				
#elif(Project_ID == ID_HUIXIONG_HK2556E01_MV238FHM_NG0_FHD165HZ_BG245165_20210402)

#define _LOGO_TYPE											 _LOGO_NONE
	
	
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
	
#define _BACKLIGHT_MAX									   	0X60//	0X70// 0xB0    
#define _BACKLIGHT_DEF_PWM								 	0X49// 0X50//	0X5B//0x98
		
#define _BACKLIGHT_MIN								        30 
	

	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_KOREAN
	
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
			
#define _DEF_OD_60HZ							              0x18

#define _DEF_OD_75HZ							              0x20

#define _DEF_OD_100HZ							              0x28

#define _DEF_OD_144HZ							              0x30
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_7__,_2__,_9__
#define _MPRT_MIN_FRAME_RATE          							900

#elif(Project_ID == ID_HUIXIONG_HK2556E01_MV238FHM_NG0_FHD165HZ_244F165_20210402)

#define _LOGO_TYPE											_LOGO_NONE
#if 0//(_PROJEC_ID_TYPE==1)//更换模组，修改色温，亮度
#define _BACKLIGHT_MAX									   	0XCF//0XB1//	0X70// 0xB0    
#define _BACKLIGHT_DEF_PWM								  	0XC6//0XA1// 0X50//	0X5B//0x98
		
#define _BACKLIGHT_MIN								        30 
	

#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_6__,_1__,_6__

#else
#define _BACKLIGHT_MAX									   	0X60//	0X70// 0xB0    
#define _BACKLIGHT_DEF_PWM								 	0X49// 0X50//	0X5B//0x98
		
#define _BACKLIGHT_MIN								        30 
	

#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_7__,_2__,_9__

#endif
	
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

	
	
#define _MPRT_PWM_MAX         							    0xE0
	
#define _MPRT_PWM_DEF          								0xC0
	
#define _MPRT_PWM_MIN         								0x60
	
#define _DEF_LANGUAGE										_KOREAN
	
		
#define _DEF_COLORTEMP    					 			    _CT_6500
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO

			
#define _DEF_OD_60HZ							              0x18

#define _DEF_OD_75HZ							              0x20

#define _DEF_OD_100HZ							              0x28

#define _DEF_OD_144HZ							              0x30

//#define _DEF_OD_165HZ							              0x38
			
#define _MPRT_MIN_FRAME_RATE          							900

#elif(Project_ID == ID_SHUNWEI_HK2561DP1HDMI__COST_SG3151B05_3_FHD165HZ__20200615)
#define _LOGO_TYPE											 _LOGO_NONE

#define _DEF_DIGITAL_VOL_MAX								 0X1EEE
#define _DEF_DIGITAL_VOL_CENTER                              0X1417

#define _MPRT_RATIO 								         50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 										 170 //360MA

#define _BACKLIGHT_DEF_PWM 									 133 //300MA

#define _BACKLIGHT_MIN										 30 

#define _MPRT_PWM_MAX          								 0xE0

#define _MPRT_PWM_DEF         								 0xC0


#define _MPRT_PWM_MIN          								 0x60

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								 _ON //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO


#elif(Project_ID == ID_TRD_HK27851DP3HDMI__BOE_MV238FHB_NG0_FHD165HZ__20200628)

#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 						 			    0xff

#define _BACKLIGHT_DEF_PWM 								    0X80

#define _BACKLIGHT_MIN								        20 

#define _MPRT_PWM_MAX          								0xE0

#define _MPRT_PWM_DEF         								0xC0


#define _MPRT_PWM_MIN          								0x60

#define _DEF_LANGUAGE										_CHINESE_S


#define _DEF_COLORTEMP    								   _CT_USER
#define _DEF_HDR_MODE    								   _HDR10_MODE_AUTO


#elif(Project_ID == ID_DATONG_HK25561DP1HDMI__AUO_M270R01_2_FHD165HZ__202001204)

#define _LOGO_TYPE											 _LOGO_ASTEX
#define _DEF_BACKLIGHT                                       80
#define _OD_WEAK_MID_HIGH                                    _ON



#define _MPRT_RATIO 								         50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 										 (0xff - 0X87) 

#define _BACKLIGHT_DEF_PWM 									(0XFF - 0X90)

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX         								(0xE0)

#define _MPRT_PWM_DEF         								 0xC0


#define _MPRT_PWM_MIN          								 0x60

#define _DEF_LANGUAGE										 _JAPANESE


#define _DEF_COLORTEMP    									 _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO


#define _DEF_GAMMA										    _GAMMA_26 


#elif(Project_ID == ID_HHT_HK2795E041DP2HDMI__M280DCA_UHD60HZ__20201214)
#define _LOGO_TYPE											 _LOGO_QNIX
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_GAMMA											 _GAMMA_22

#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT

#define _DEF_HOTKEY_RIGHT                				    _HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX 									   (0xff - 0X54) 

#define _BACKLIGHT_DEF_PWM 								   (0x80)

#define _BACKLIGHT_MIN								       20 

#define _DEF_COLORTEMP    									 _CT_USER

#define _CT_7500_SUPPRT										_ON  //色温是否带7500

#define _ECO_FPS_CONTRAST						50

#define _ECO_RTS_CONTRAST						50

#define _ECO_FPS_BLACKLEVEL						50

#define _ECO_RTS_BLACKLEVEL						50

#elif(Project_ID == ID_DATONG_HK2795E041DP1HDMI__AUO_M270R01_2_FHD240HZ__202001204)

#define _LOGO_TYPE											 _LOGO_ASTEX
#define _DEF_BACKLIGHT                                       80
#define _OD_WEAK_MID_HIGH                                    _ON



#define _MPRT_RATIO 								        50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 									   (0xff - 0X85) 

#define _BACKLIGHT_DEF_PWM 								   (0XFF - 0X90)

#define _BACKLIGHT_MIN								       20 

#define _MPRT_PWM_MAX          							   (0xE0)

#define _MPRT_PWM_DEF         								 0xC0


#define _MPRT_PWM_MIN        								  0x60

#define _DEF_LANGUAGE										 _JAPANESE


#define _DEF_COLORTEMP    									 _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO


#define _DEF_GAMMA										    _GAMMA_26 


#elif(Project_ID == ID_DATONG_HK25561DP1HDMI__AUO_M215HTN03_0_FHD165HZ__202001026)
#define _LOGO_TYPE											 _LOGO_ASTEX
#define _DEF_BACKLIGHT                                       80
#define _OD_WEAK_MID_HIGH                                       _ON


#define _MPRT_RATIO 								        50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 									   (0xff - 0x90) 

#define _BACKLIGHT_DEF_PWM 								   (0XFF - 0X9C)

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX          								(0xE0)

#define _MPRT_PWM_DEF          								0xC0


#define _MPRT_PWM_MIN          								0x60

#define _DEF_LANGUAGE										_JAPANESE


#define _DEF_COLORTEMP    					 				_CT_6500
#define _DEF_HDR_MODE    					 				_HDR10_MODE_AUTO


#define _DEF_GAMMA										    _GAMMA_26

#elif(Project_ID == ID_SHUNWEI_HK2561DP1HDMI__COST_SG2701B05_3_FHD165HZ__20200604)
#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 						 				(130) 

#define _BACKLIGHT_DEF_PWM 									(102)

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX          								(0xE0)

#define _MPRT_PWM_DEF          								0xC0


#define _MPRT_PWM_MIN          								0x60

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								_OFF//_ON //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				_CT_6500//_CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_3__,_1__,_5__


#elif(Project_ID == ID_SHUNWEI_HK27851DP3HDMI__COST_SG2701B05_3_FHD180HZ__20200530)


#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        30

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 						 				(0xff-0x9d) //360MA

#define _BACKLIGHT_DEF_PWM 									(0xff-0xc2)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX          								(0xff)

#define _MPRT_PWM_DEF         								 0xE0


#define _MPRT_PWM_MIN          								0x60

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    									_CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#elif(Project_ID == ID_SHUNWEI_HK2785E02_1P3H_AUO_M270HTN010_FHD165HZ_20210408)

	#define _LOGO_TYPE											 _LOGO_NONE
	#define _MPRT_RATIO 								        30
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	#define _BACKLIGHT_MAX 						 				(0xff-0x9d) //360MA
	#define _BACKLIGHT_DEF_PWM 									(0xff-0xc2)//300MA
	#define _BACKLIGHT_MIN										20 
	#define _MPRT_PWM_MAX          								(0xff)
	#define _MPRT_PWM_DEF         								 0xE0
	#define _MPRT_PWM_MIN          								0x60
	#define _DEF_LANGUAGE										 _KOREAN
	#define _DEF_COLORTEMP    									_CT_6500
	#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
	#define _DEF_OSDROTATE										_OSD_ROTATE_DEGREE_180
	#define _DEF_DISP_ROTATE									_DISP_ROTATE_180
	 
#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_M250HTN01C_FHD165HZ_20210823)

	#define _LOGO_TYPE											 _LOGO_NONE
	//#define _MPRT_RATIO 										30
	#define _BACKLIGHT_MAX 									    0XC4//360MA
	
	#define _BACKLIGHT_DEF_PWM 									0XA5
	
	#define _BACKLIGHT_MIN										0X20 
	
	
	#define _OD_WEAK_MID_HIGH									_ON // OD 强中弱
	#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
	
	#define _MPRT_RATIO 										50
	#define _MPRT_MID_RATIO 									40
	#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
	
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
	

	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
	
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _DEF_COLORTEMP										_CT_6500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_4__,_0__,_3__
	
#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_SG315B058_FHD165HZ_ENGLISH_202230605)

	#define _LOGO_TYPE											 _LOGO_NONE
	#define _DEF_DX_KEY_LED 									_ON
	//#define _MPRT_RATIO 										30
	#define _BACKLIGHT_MAX 									    0XC4//360MA
	
	#define _BACKLIGHT_DEF_PWM 									0XA5
	
	#define _BACKLIGHT_MIN										0X20 
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	
	#define _OD_WEAK_MID_HIGH									_ON // OD 强中弱
	#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
	
	#define _MPRT_RATIO 										50
	#define _MPRT_MID_RATIO 									40
	#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
	
	#define _DEF_DIGITAL_VOL_MAX								0X1300//0X1300 3.4V 0X1000 2.9V 0XF5C 2.8V 0X0D14//2.3V 0X0B33//2.0V//0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                            	0X0D00//2.0V 0X8F0//0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
	

	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
	
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_0__,_5__

#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_M238HVN020_FHD165HZ_ENGLISH_202230606)
	#define _LOGO_TYPE											 _LOGO_NONE
	#define _DEF_DX_KEY_LED 									_ON
	//#define _MPRT_RATIO 										30
	#define _BACKLIGHT_MAX 									    0XC4//360MA
	
	#define _BACKLIGHT_DEF_PWM 									0XA5
	
	#define _BACKLIGHT_MIN										0X20 
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	
	#define _OD_WEAK_MID_HIGH									_ON // OD 强中弱
	#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
	
	#define _MPRT_RATIO 										50
	#define _MPRT_MID_RATIO 									40
	#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
	
	#define _DEF_DIGITAL_VOL_MAX								0X1300//0X1300 3.4V 0X1000 2.9V 0XF5C 2.8V 0X0D14//2.3V 0X0B33//2.0V//0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                            	0X0D00//2.0V 0X8F0//0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
	

	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
	
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_0__,_7__
	
#elif(Project_ID == ID_DX_HK2785E07_1P3H_CSOT_SG315B05_3_FHD165HZ_20220218)
	
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_QUASAR
	#define _DEF_BACKLIGHT                                		80//背光默认值
		//#define _MPRT_RATIO										30
	#define _BACKLIGHT_MAX 									    0XDE//360MA
		
	#define _BACKLIGHT_DEF_PWM 									0XC5
		
	#define _BACKLIGHT_MIN										0X20 
		
		
	#define _OD_WEAK_MID_HIGH									_ON // OD 强中弱
	#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
		
	#define _MPRT_RATIO 										50
	#define _MPRT_MID_RATIO 									40
	#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
		
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
		
	
	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
		
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_2__,_2__,_4__
#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_M236HVR010_FHD165HZ_20220520)
	
	#define _LOGO_TYPE											_LOGO_QTOUCH//_LOGO_QUASAR
	#define _DEF_BACKLIGHT                                		80//背光默认值
		//#define _MPRT_RATIO										30
	#define _BACKLIGHT_MAX 									    0XDE//360MA
		
	#define _BACKLIGHT_DEF_PWM 									0XC5
		
	#define _BACKLIGHT_MIN										0X20 
		
		
	#define _OD_WEAK_MID_HIGH									_ON // OD 强中弱
	#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
		
	#define _MPRT_RATIO 										50
	#define _MPRT_MID_RATIO 									40
	#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
		
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
		
	
	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
		
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_5__,_2__,_0__
	
#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_M238HVN020_FHD165HZ_20220622)	
	#define _LOGO_TYPE											_LOGO_XZONE//_LOGO_QUASAR
	#define _DEF_BACKLIGHT                                		80//背光默认值
		//#define _MPRT_RATIO										30
	#define _BACKLIGHT_MAX 									    0XC4
		
	#define _BACKLIGHT_DEF_PWM 									0XA5
		
	#define _BACKLIGHT_MIN										0X20 
		
		
	//#define _OD_WEAK_MID_HIGH									_ON // OD 强中弱
	//#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
		
	//#define _MPRT_RATIO 										50
	//#define _MPRT_MID_RATIO 									40
	//#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
		
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
		
	
	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
		
	#define _DEF_LANGUAGE										_PORTUGUESE// _ENGLISH
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_6__,_2__,_2__

#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_SG2381B016_FHD165HZ_GERMAN_LOGO_3KO_20221012)	
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_QUASAR
	#define _DEF_BACKLIGHT                                		80//背光默认值
	#define _DEF_DX_KEY_LED 									_ON
			//#define _MPRT_RATIO										30
	#define _BACKLIGHT_MAX 									    0XB1
			
	#define _BACKLIGHT_DEF_PWM 									0X88
			
	#define _BACKLIGHT_MIN										0X20 
			
			
		//#define _OD_WEAK_MID_HIGH 								_ON // OD 强中弱
		//#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
			
		//#define _MPRT_RATIO										50
		//#define _MPRT_MID_RATIO									40
		//#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
			
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
			
		
	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
			
	#define _DEF_LANGUAGE										_GERMAN// _ENGLISH
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_1__,_0__,_1__,_8__
	
#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_SG2701B022_FHD165HZ_GERMAN_LOGO_3KO_20221018)    	
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_QUASAR
	#define _DEF_BACKLIGHT                                		80//背光默认值
	#define _DEF_DX_KEY_LED 									_ON
			//#define _MPRT_RATIO										30
	#define _BACKLIGHT_MAX 									    0XFF
			
	#define _BACKLIGHT_DEF_PWM 									0XD1
			
	#define _BACKLIGHT_MIN										0X20 
			
			
		//#define _OD_WEAK_MID_HIGH 								_ON // OD 强中弱
		//#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
			
		//#define _MPRT_RATIO										50
		//#define _MPRT_MID_RATIO									40
		//#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
			
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
			
		
	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
			
	#define _DEF_LANGUAGE										_GERMAN// _ENGLISH
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_1__,_0__,_1__,_8__
	
#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_SG2701B022_FHD165HZ_ENGLISH_LOGO_QMAX_20221104)    	
	#define _LOGO_TYPE											_LOGO_QMAX//_LOGO_QUASAR
	#define _DEF_BACKLIGHT                                		80//背光默认值
	#define _DEF_DX_KEY_LED 									_ON
				//#define _MPRT_RATIO										30
	#define _BACKLIGHT_MAX 									    0XC1
				
	#define _BACKLIGHT_DEF_PWM 									0XA1
				
	#define _BACKLIGHT_MIN										0X20 
				
	#define _DEF_P5_RESET_ITEM2    	 	  						_MENU_FUN_LED
	#define _DEF_P5_RESET_ITEM3    	 	  						_MENU_FUN_RESET
				
			//#define _OD_WEAK_MID_HIGH 								_ON // OD 强中弱
			//#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
				
			//#define _MPRT_RATIO										50
			//#define _MPRT_MID_RATIO									40
			//#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
				
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
				
			
	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
				
	#define _DEF_LANGUAGE										_ENGLISH// _ENGLISH
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_1__,_1__,_0__,_7__

#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_27_FHD165HZ_20220622)	
	#define _LOGO_TYPE											_LOGO_XZONE//_LOGO_QUASAR
	#define _DEF_BACKLIGHT                                		80//背光默认值
			//#define _MPRT_RATIO										30
	#define _BACKLIGHT_MAX 									    0XC4
			
	#define _BACKLIGHT_DEF_PWM 									0XA5
			
	#define _BACKLIGHT_MIN										0X20 
	#define _DEF_DX_KEY_LED 									_ON
			
			
		//#define _OD_WEAK_MID_HIGH 								_ON // OD 强中弱
		//#define _MPRT_WEAK_MID_HIGH									_ON //mprt强中弱
			
		//#define _MPRT_RATIO										50
		//#define _MPRT_MID_RATIO									40
		//#define _MPRT_HIGH_RATIO									30
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
			
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
	#define _DEF_P5_RESET_ITEM2      	                         _MENU_FUN_LED 
	#define _DEF_P5_RESET_ITEM3    	 	  						_MENU_FUN_RESET
	#define _DEF_OD_60HZ										0x18
	#define _DEF_OD_75HZ										0x22
	#define _DEF_OD_100HZ										0x2B
	#define _DEF_OD_144HZ										0x36
	#define _DEF_OD_165HZ										0x3D
			
		
	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
			
	#define _DEF_LANGUAGE										_PORTUGUESE// _ENGLISH
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_6__,_2__,_3__

#elif(Project_ID == ID_DX_HK2785E07_1P3H_AUO_M270HTN022_FHD165HZ_20210823)

	#define _LOGO_TYPE											 _LOGO_NONE
	#define _MPRT_RATIO 										30
	#define _BACKLIGHT_MAX 									    0XC4//360MA
	
	#define _BACKLIGHT_DEF_PWM 									0XA5
	
	#define _BACKLIGHT_MIN										0X20 
	
	
	
	#define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
	
	#define _DEF_DIGITAL_VOL_MAX								0XA50//0X0E14  
	#define _DEF_DIGITAL_VOL_CENTER                             0X8F0//0x0c52
	#define _DEF_DIGITAL_VOL_MIN							    0
	

	#define _MPRT_PWM_MAX										(0xff)
	#define _MPRT_PWM_DEF										 0xE0
	#define _MPRT_PWM_MIN										0x60
	
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _DEF_COLORTEMP										_CT_6500
	#define _DEF_HDR_MODE										 _HDR10_MODE_AUTO
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_8__,_2__,_3__

#elif(Project_ID == ID_SHUNWEI_HK27951DP2HDMI__AUO_M270DAN06_6_QHD165HZ__20200606)
#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        30

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0xff) //360MA

#define _BACKLIGHT_DEF_PWM 									(0xb2)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX          								(0xff)

#define _MPRT_PWM_DEF         								 0xE0


#define _MPRT_PWM_MIN          								0x60

#define _DEF_LANGUAGE										 _CHINESE_S


#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				_CT_USER
#define _DEF_HDR_MODE    					 				_HDR10_MODE_AUTO
#elif(Project_ID 	==	ID_SHUNWEI_HK2795E041DP2HDMI__AUO_M315DVR01_3_QHD165HZ__20200706)
#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        30

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 						 				(113) //360MA

#define _BACKLIGHT_DEF_PWM 									(90)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX          								(0xff)

#define _MPRT_PWM_DEF         								 0xE0


#define _MPRT_PWM_MIN         								0x60

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				_CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO


#elif(Project_ID == ID_TIEMU_HK2795E031DP2HDMI__AUO_M315DVR01_9_QHD165HZ__20201112)

#define _LOGO_TYPE											 _LOGO_NONE

#define _DEF_BACKLIGHT                                       80

#define _MPRT_RATIO 								        30

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										(162)// (0xff-0x49) //360MA

#define _BACKLIGHT_DEF_PWM 									(130)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX         								 (0xff)

#define _MPRT_PWM_DEF          								0xE0


#define _MPRT_PWM_MIN         								 0x60

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO


#elif(Project_ID == ID_ZHEHAO_HK2795E041DP2HDMI__AUO_M315DVR01_9_QHD165HZ__20201104)

#define _LOGO_TYPE											 _LOGO_HSO
#define _DEF_BACKLIGHT                                       80


#define _MPRT_RATIO 								        30

#define _DEF_HOTKEY_LEFT									_MENU_FUN_ECO
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 						      			 (0XFF) 

#define _BACKLIGHT_DEF_PWM 					       			 (0XFF - 0X30)

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX         								 (0xff)

#define _MPRT_PWM_DEF         								 0xE0


#define _MPRT_PWM_MIN          								0x60

#define _DEF_LANGUAGE										 _CHINESE_S


#define	_OSD_BLACK_WHITE_TYPE								 _OFF //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				_CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#elif(Project_ID == ID_ZHEHAO_HK2795E041DP2HDMI__M280DCA_UHD60HZ__20201230)

#define _LOGO_TYPE                                          _LOGO_UNOEROOG
    #define _DEF_BACKLIGHT                                      80
    #define _MPRT_RATIO                                         30
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_ECO
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME
    #define _BACKLIGHT_MAX                                      (0x85) 
    #define _BACKLIGHT_DEF_PWM                                  (0x7a)
    #define _BACKLIGHT_MIN                                      20 
    #define _MPRT_PWM_MAX                                       (0xff)
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0x60
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_HDR_MODE                                       _HDR10_MODE_AUTO
    #define _DEF_FACTORY_MODE                                   _OFF
    #define _DEF_OSD_DISP_NOSIGNAL_MSG_TIME                     10

    #define _DEF_DIGITAL_VOL_MAX                                0X1500
    #define _DEF_DIGITAL_VOL_CENTER                             0XE70
    #define _DEF_DIGITAL_VOL_MIN                                0


#elif(Project_ID == ID_CHANGHONG_HK2795E031DP2HDMI__AUO_M315DVR01_9_QHD165HZ__20201104)


#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        30

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 						 				(0XFF) //360MA

#define _BACKLIGHT_DEF_PWM 									(0X80)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX          								(0xff)

#define _MPRT_PWM_DEF         								 0xE0


#define _MPRT_PWM_MIN          								0x60

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								_OFF //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				_CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#elif(Project_ID == ID_TIEMU_HK2513E02_1V1H__M270HVR01_1_FHD75HZ__20200908)
	
#define _LOGO_TYPE											 _LOGO_TIEMU
	
#define _DEF_HOTKEY_LEFT									_MENU_FUN_DCC
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_ECO
	
#define _BACKLIGHT_MAX 						 				(166) //360MA
#define _BACKLIGHT_DEF_PWM 									(157)//300MA
	
#define _BACKLIGHT_MIN										20 
#define _DEF_LANGUAGE										 _PORTUGUESE
	
#define _DEF_COLORTEMP    					 				_CT_6500
	
#define _DEF_BACKLIGHT                                       80


#elif(Project_ID == ID_TIEMU_HK2513E02_1V1H__SGM2701B01_2_FHD75HZ__20200718)

#define _LOGO_TYPE											 _LOGO_TIEMU

#define _DEF_HOTKEY_LEFT									_MENU_FUN_DCC
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_ECO

#define _BACKLIGHT_MAX 										 (166) //360MA
#define _BACKLIGHT_DEF_PWM 									(157)//300MA

#define _BACKLIGHT_MIN										20 
#define _DEF_LANGUAGE										 _CHINESE_S

#define _DEF_COLORTEMP    									 _CT_6500

#define _DEF_BACKLIGHT                                       80
 #elif(Project_ID == ID_DATONG_HK2513E02_1V1H__238FHD75_AXMT248__20201024)
#define _LOGO_TYPE											 _LOGO_ASTEX
#define _DEF_BACKLIGHT                                       80
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 						 				(0XFF - 0X58 ) //360MA

#define _BACKLIGHT_DEF_PWM 									(0XFF - 0X70)//300MA

#define _BACKLIGHT_MIN										20 

#define _DEF_LANGUAGE										 _JAPANESE

#define _DEF_COLORTEMP    									 _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#elif(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)

	#define _BACKLIGHT_MAX                                       (0XFF) //360MA

    #define _BACKLIGHT_DEF_PWM                                  (0X9E)//    //(0XC9)//300MA

    #define _BACKLIGHT_MIN                                      20 
    #define _DEF_BACKLIGHT                                      80

    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
//#define _DEF_HOTKEY_UP                                        _MENU_FUN_CONTRAST
//#define _DEF_HOTKEY_DOWN                                          _MENU_FUN_CONTRAST

    #define _OSD_7_KEY_SUPPROT                                      _ON// 7键的开关

    #define _DEF_P6_MISC_ITEM1                                      _MENU_FUN_ASPECT//_MENU_FUN_MAXBACKLIGHT  
    #define _DEF_P6_MISC_ITEM2                                      _MENU_FUN_SHARPNESS// _MENU_FUN_GAMMA

    #define _DEF_P2_DISPLAY_ITEM4                                   _MENU_NULL//_MENU_FUN_BRIGHTNESS 
    #define _DEF_P2_DISPLAY_ITEM5                                   _MENU_NULL//_MENU_FUN_SATURATION  

    #define _DEF_LANGUAGE                                           _ENGLISH
    #define _DEF_FACTORY_MODE                                       _OFF
    //#define _DEF_GAMMA                                             _GAMMA_OFF
    //#define _DEF_DDCCIStatus                                     _ON
    //#define _DEF_BRIGHTNESS                                         75
    //#define _DEFAULT_SATURATION                                     (60*2)
    //#define _DEF_DCC                                                7
    //#define _DEF_VIVID                                              _ULTRA_VIVID_L
	//#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_0__,_2__,_6__
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_1__,_7__

    #define _DEF_COLORTEMP                                          _CT_7500
    #define _CT_7500_SUPPRT										    _ON  //色温是否带7500

    #define _ECO_MOVIE_BACKLIGHT                    100
    #define _ECO_GAME_BACKLIGHT                     60
    #define _ECO_TEXT_BACKLIGHT                     50
    #define _ECO_FPS_BACKLIGHT                      100
    #define _ECO_RTS_BACKLIGHT                      85

    #define _ECO_MOVIE_CONTRAST                     55
    #define _ECO_GAME_CONTRAST                      50
    #define _ECO_TEXT_CONTRAST                      45
    #define _ECO_FPS_CONTRAST                       65
    #define _ECO_RTS_CONTRAST                       60

    #define _ECO_MOVIE_BLACKLEVEL                   50
    #define _ECO_GAME_BLACKLEVEL                    50
    #define _ECO_TEXT_BLACKLEVEL                    50
    #define _ECO_FPS_BLACKLEVEL                     50
    #define _ECO_RTS_BLACKLEVEL                     50

#elif(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)

	#define _BACKLIGHT_MAX                                       (0XFF) //360MA

    #define _BACKLIGHT_DEF_PWM                                  (0X9E)//    //(0XC9)//300MA

    #define _BACKLIGHT_MIN                                      20 
    #define _DEF_BACKLIGHT                                      80

    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
//#define _DEF_HOTKEY_UP                                        _MENU_FUN_CONTRAST
//#define _DEF_HOTKEY_DOWN                                          _MENU_FUN_CONTRAST

    #define _OSD_7_KEY_SUPPROT                                      _ON// 7键的开关

    #define _DEF_P6_MISC_ITEM1                                      _MENU_FUN_ASPECT//_MENU_FUN_MAXBACKLIGHT  
    #define _DEF_P6_MISC_ITEM2                                      _MENU_FUN_SHARPNESS// _MENU_FUN_GAMMA

    #define _DEF_P2_DISPLAY_ITEM4                                   _MENU_NULL//_MENU_FUN_BRIGHTNESS 
    #define _DEF_P2_DISPLAY_ITEM5                                   _MENU_NULL//_MENU_FUN_SATURATION  

    #define _DEF_LANGUAGE                                           _CHINESE_S
    #define _DEF_FACTORY_MODE                                       _OFF
    //#define _DEF_GAMMA                                             _GAMMA_OFF
    //#define _DEF_DDCCIStatus                                     _ON
    //#define _DEF_BRIGHTNESS                                         75
    //#define _DEFAULT_SATURATION                                     (60*2)
    //#define _DEF_DCC                                                7
    //#define _DEF_VIVID                                              _ULTRA_VIVID_L
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_9__,_2__,_7__

    #define _DEF_COLORTEMP                                          _CT_7500
    #define _CT_7500_SUPPRT										    _ON  //色温是否带7500

    #define _ECO_MOVIE_BACKLIGHT                    100
    #define _ECO_GAME_BACKLIGHT                     60
    #define _ECO_TEXT_BACKLIGHT                     50
    #define _ECO_FPS_BACKLIGHT                      100
    #define _ECO_RTS_BACKLIGHT                      85

    #define _ECO_MOVIE_CONTRAST                     55
    #define _ECO_GAME_CONTRAST                      50
    #define _ECO_TEXT_CONTRAST                      45
    #define _ECO_FPS_CONTRAST                       65
    #define _ECO_RTS_CONTRAST                       60

    #define _ECO_MOVIE_BLACKLEVEL                   50
    #define _ECO_GAME_BLACKLEVEL                    50
    #define _ECO_TEXT_BLACKLEVEL                    50
    #define _ECO_FPS_BLACKLEVEL                     50
    #define _ECO_RTS_BLACKLEVEL                     50

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ_24FX75__20200918)

#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										(143) //360MA

#define _BACKLIGHT_DEF_PWM 									(119)//300MA

#define _BACKLIGHT_MIN										39 

#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC

#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                           			  _ON
#define	_OSD_BLACK_WHITE_TYPE								  _ON //黑白和蓝白菜单选择
#define _LONG_PRESS_POWER_DOWN              				  _ON

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__M270HTN02_5_M2750H__20201022)

#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _BACKLIGHT_MAX 										 (80) //360MA

#define _BACKLIGHT_DEF_PWM 									(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    									 _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                        				  _ON

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__M270HTN02_5_M275H_CHINESE_20210421)
//修改成现代的软件，加LOGO，默认中文，去掉声音，加上白平衡

#define _LOGO_TYPE											 _LOGO_HYINGDA
#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _BACKLIGHT_MAX 										 (80) //360MA

#define _BACKLIGHT_DEF_PWM 									(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _CHINESE_S

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_NULL
#define _DEF_P6_MISC_ITEM3      							 _MENU_NULL
#define _DEF_P6_MISC_ITEM1      	 						_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 						_MENU_FUN_HDR


#define _DEF_COLORTEMP    									 _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                        				  _ON

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__M215HGE_L33__B225H__20201209)


#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										 (122)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 								 	(102)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
		
#define _BOARD_LINE_IN                        			     _ON
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_M230FHM_B2375IPS__M2300__20201228)
#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										 (52)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 								 	(40)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
		
#define _BOARD_LINE_IN                        			     _ON
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_PANDA_CC240LV2D_MF23BB30__20201228)
#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _BACKLIGHT_MAX 										 (122)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 								 	(102)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _CHINESE_S

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__LC185TT7A__B195H__20201225)

#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										 (84)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 								 	(75)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
		
#define _BOARD_LINE_IN                        			     _ON
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_B245H__20200113)
#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										 (118)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 									 (98)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                           			 _ON

#elif(Project_ID == ID_HUIXIONG_HK2513E02_1V1H__CC240PV1D_B245H__20210330)
#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										 (0xff-0x55)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 									 (0xff-0x70)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                           			 _ON

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__INN_M200FGE_L20__20200309)
#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										 (118)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 									 (98)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                           			 _ON

	
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_B2475H__20201030)

#define _DEF_DIGITAL_VOL_MAX								 0XC4C
#define _DEF_DIGITAL_VOL_CENTER                              0XA00


#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _BACKLIGHT_MAX 										 (122)//(0xFF) //360MA

#define _BACKLIGHT_DEF_PWM 									 (102)//(64)//300MA

#define _BACKLIGHT_MIN										13 
#define _DEF_LANGUAGE										 _KOREAN

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#define _DEF_COLORTEMP    								     _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                           			 _ON
#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_3__,_0__,_4__

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ__20200805)

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1


#define _DEF_LANGUAGE										 _KOREAN


#if 1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _OSD_FLICKER_FREE									_ON//菜单上带flick标志

#define _BACKLIGHT_MAX 										 (0XFF-0X71) //360MA

#define _BACKLIGHT_DEF_PWM 									 (0XFF-0X84)//300MA

#define _BACKLIGHT_MIN										 39 

#define _DEF_COLORTEMP    								    _CT_6500//_CT_USER
#define _DEF_P1_PICTURE_ITEM0       						_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1       						_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2       						_MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3       						_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4       						_MENU_FUN_HDR
#define _DEF_P1_PICTURE_ITEM5      							_MENU_NULL

#define _DEF_P2_DISPLAY_ITEM5      							_MENU_NULL

//page2
#define _DEF_P2_DISPLAY_ITEM0      							_MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1      							_MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      							_MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      							_MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      							_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      							_MENU_NULL 

//page3
#define _DEF_P3_COLORTEMP_ITEM0      						_MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1      						_MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2      						_MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3      						_MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4      						_MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM5      						_MENU_NULL

//page 4
#define _DEF_P4_OSDSETTING_ITEM0      						_MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1      						_MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2      						_MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3      						_MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4      						_MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5      						_MENU_NULL

//page5
#define _DEF_P5_RESET_ITEM0     	 						_MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 						_MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 						_MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 						_MENU_NULL 
#define _DEF_P5_RESET_ITEM4     	 						_MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 						_MENU_NULL

//page 6
#define _DEF_P6_MISC_ITEM0      	 						_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1      	 						_MENU_FUN_POWER_OFF
#define _DEF_P6_MISC_ITEM2      	 						_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3      	 						_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4      	 						_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM5      	 						_MENU_NULL

#else
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _BACKLIGHT_MAX 										 (126) //360MA

#define _BACKLIGHT_DEF_PWM 									 (104)//300MA

#define _BACKLIGHT_MIN										 39 

#define _DEF_COLORTEMP    								     _CT_USER
#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC


#endif
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                          			 _ON
#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_4__,_2__,_8__
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_CC240PV1D_FHD60HZ_X248VH_20210406)

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _BACKLIGHT_MAX 										 (126) //360MA

#define _BACKLIGHT_DEF_PWM 									 (104)//300MA

#define _BACKLIGHT_MIN										 39 

#define _DEF_LANGUAGE										 _CHINESE_S

#define _DEF_P1_PICTURE_ITEM5       						 _MENU_FUN_HDR
//#define _DEF_P6_MISC_ITEM3      							 _MENU_FUN_FREESYNC

#define _DEF_P6_MISC_ITEM1      							 _MENU_NULL
#define _DEF_P6_MISC_ITEM2      							 _MENU_NULL

#define _DEF_COLORTEMP    								     _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _BOARD_LINE_IN                          			 _ON

#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ__20210330)
#define _LOGO_TYPE								    		 _LOGO_FMDISPLAY

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _BACKLIGHT_MAX 										 (126) //360MA

#define _BACKLIGHT_DEF_PWM 									 (104)//300MA

#define _BACKLIGHT_MIN										 39 
#define _DEF_P6_MISC_ITEM1      	 						_MENU_NULL
#define _DEF_P6_MISC_ITEM2      	 						_MENU_NULL

#define _DEF_LANGUAGE										 _CHINESE_S

#define _DEF_COLORTEMP    								     _CT_USER

#define _BOARD_LINE_IN                          			 _ON
#elif(Project_ID == ID_SHUNWEI_HK2513E02_1V1H_CC240PV1D_FHD60HZ_HYD_C2415S_20210423)
#define _LOGO_TYPE								    		_LOGO_HYINGDA
//#define _DEF_CONTRAST										 55

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _BACKLIGHT_MAX 										 149//(126) //360MA

#define _BACKLIGHT_DEF_PWM 									 126//(104)//300MA

#define _BACKLIGHT_MIN										 39 
#define _DEF_P6_MISC_ITEM1      	 						_MENU_NULL
#define _DEF_P6_MISC_ITEM2      	 						_MENU_NULL

//#define _DEF_P6_MISC_ITEM1      	 						_MENU_FUN_BRIGHTNESS
//#define _DEF_P6_MISC_ITEM2      	 						_MENU_FUN_DCC
//#define _DEF_P6_MISC_ITEM3      	 						_MENU_FUN_GAMMA

#define _DEF_LANGUAGE										 _CHINESE_S

#define _DEF_COLORTEMP    								     _CT_6500
#define _BOARD_LINE_IN                          			 _ON
#define _DEF_DCC											10
//#define _DEF_BRIGHTNESS										75
#define _DEF_GAMMA											_GAMMA_22
#define _FW_VERSION   											_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_9__,_1__,_4__


#elif(Project_ID == ID_DX_2513E02_1A1H_PT320CT01_3_FHD75HZ_ENGLISH_LOGO_EKO_20221130)


#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500

	
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
#define _BACKLIGHT_MAX 										 (0xff-0x80)//(0xFF) //310MA
#define _BACKLIGHT_DEF_PWM 									 (0xff-0x95)//(64)//240MA

#define _BACKLIGHT_MIN											25 

#define _LOGO_TYPE								_LOGO_EKO//_LOGO_MECER_BIG
//#define _LOGO_POS_H                				  			60//50


#define _DEF_LANGUAGE										 _ENGLISH

	
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL
	
#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1     _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4      _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
	
#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
	
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
	
#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_OD 
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
	

#define _BOARD_LINE_IN                           			 _ON



#elif(Project_ID == ID_DX_2513E02_1A1H_SG2381B01_1_FHD75HZ_ENGLISH_LOGO_EKO_20221130)


#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500
#define	_LONG_PRESS_POWER_DOWN								_ON //长按关机

	
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
#define _BACKLIGHT_MAX 										 (0xff-0x50)//(0xFF) //310MA
#define _BACKLIGHT_DEF_PWM 									 (0xff-0x60)//(64)//240MA
#define _BACKLIGHT_MIN											25 

#define _LOGO_TYPE									_LOGO_EKO//_LOGO_MECER_BIG
//#define _LOGO_POS_H                				  			60//50


#define _DEF_LANGUAGE										 _ENGLISH

	
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL
	
#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1     _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4      _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
	
#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
	
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
	
#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_OD 
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
	

#define _BOARD_LINE_IN                           			 _ON



#elif(Project_ID == ID_DX_2513E02_1A1H_P320HVN06_1_FHD75HZ_ENGLISH_LOGO_AAA_20221220)
#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_0__,_9__


#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500//_CT_6500
#define	_LONG_PRESS_POWER_DOWN								_ON //长按关机

	
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
#define _BACKLIGHT_MAX 										 (0xff-0x50)//(0xFF) //310MA
#define _BACKLIGHT_DEF_PWM 									 (0xff-0x60)//(64)//240MA
#define _BACKLIGHT_MIN											25 

#define _LOGO_TYPE									_LOGO_BLAUPUNKT//_LOGO_MECER_BIG
//#define _LOGO_POS_H                				  			60//50


#define _DEF_LANGUAGE										 _ENGLISH

	
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL
	
#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1     _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4      _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
	
#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
	
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
	
#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_OD 
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
	

//#define _BOARD_LINE_IN                           			 _ON
#elif(Project_ID == ID_DX_2513E02_1A1H_T320HVN05D_FHD75HZ_ENGLISH_LOGO_LOGO_amazon_basics_20240319)
	#define _LOGO_TYPE											_LOGO_amazon_basics//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X48)//450MA (0XFF-0X6D)//36MA (0XFF-0X60)//380MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X5D)//400MA /(0XFF-0X7D)//320MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_3__,_2__,_1__
	#define _DEF_P6_MISC_ITEM3      				 			_MENU_FUN_FREESYNC//_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM4									 _MENU_NULL//_MENU_FUN_FREESYNC
	//#define _BOARD_LINE_IN										 _ON
	//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
	//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
	#define	_LONG_PRESS_POWER_DOWN								_ON //长按关机
#elif(Project_ID == ID_DX_2513E02_1A1H_MV215FHBNX1_FHD75HZ_20240325)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X6D)//360MA (0XFF-0X60)//380MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X7D)//320MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_3__,_2__,_7__
	#define _DEF_P6_MISC_ITEM3      				 			_MENU_FUN_FREESYNC//_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM4									 _MENU_NULL//_MENU_FUN_FREESYNC
	//#define _BOARD_LINE_IN										 _ON
	//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
	//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
	//#define	_LONG_PRESS_POWER_DOWN								_ON //长按关机

#elif(Project_ID == ID_DX_2513E02_1A1H_M270HAN01_0_FHD75HZ_RUSSIAN_LOGO_HPR_20221201)


#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500
#define	_LONG_PRESS_POWER_DOWN								_OFF //长按关机

	
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
#define _BACKLIGHT_MAX 										 (0xff-0x70)//(0xFF) //310MA
#define _BACKLIGHT_DEF_PWM 									 (0xff-0x90)//(64)//240MA
#define _BACKLIGHT_MIN											25 

#define _LOGO_TYPE								_LOGO_HARPER//_LOGO_MECER_BIG
//#define _LOGO_POS_H                				  			60//50


#define _DEF_LANGUAGE										 _RUSSIAN

	
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL
	
#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1     _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4      _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
	
#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
	
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
	
#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_OD 
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
	

#define _BOARD_LINE_IN                           			 _ON
#elif(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__AUO_M270KCJ_K7B_QHD165HZ__20200917)
#define _LOGO_TYPE											 _LOGO_NONE
#define _DEF_DIGITAL_VOL_MAX								 2664
#define _DEF_DIGITAL_VOL_CENTER                              1844


#define _MPRT_RATIO 								        40

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										(105)// (96) //360MA

#define _BACKLIGHT_DEF_PWM 									(93)//(66)//300MA

#define _BACKLIGHT_MIN										16 


#define _MPRT_PWM_MAX        								 (0xE0)
	
#define _MPRT_PWM_DEF         								 0xC0
	
	
#define _MPRT_PWM_MIN        								  0x63

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								 _OFF //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				 _CT_6500
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _DEF_P5_RESET_ITEM3      	                         _MENU_FUN_LED 

#elif(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__M270KCJ_K7B_QHD165HZ_279Q3_20210327)
#define _LOGO_TYPE											 _LOGO_NONE
#define _DEF_DIGITAL_VOL_MAX								 2664
#define _DEF_DIGITAL_VOL_CENTER                              1844
#define _DEF_P5_RESET_ITEM3    	  	  						_MENU_FUN_LED			

#define _SOURCE_AUTO_ON								        _ON 
#define _MPRT_RATIO 								        40

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (87) //360MA

#define _BACKLIGHT_DEF_PWM 									(66)//300MA

#define _BACKLIGHT_MIN										16 


#define _MPRT_PWM_MAX        								 (0xE0)
	
#define _MPRT_PWM_DEF         								 0xC0
	
	
#define _MPRT_PWM_MIN        								  0x63

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								 _ON //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#elif(Project_ID == ID_HHT_2795E06_1T1P1H_M280DCA_E3B_20210330)
#define _LOGO_TYPE											 _LOGO_NONE
		
#define	_OSD_BLACK_WHITE_TYPE								 _ON //黑白和蓝白菜单选择

#define _DEF_BACKLIGHT                                       80
#define _DEF_LANGUAGE										 _KOREAN//_CHINESE_S

#define _BACKLIGHT_MAX 										 (0XC9)//(0XB0) //360MA

#define _BACKLIGHT_DEF_PWM 									(0XA4)//(0X92)//300MA

#define _BACKLIGHT_MIN										6 

#define _MPRT_PWM_MAX        								 (0xE0)
	
#define _MPRT_PWM_DEF         								 0xC0
	
#define _MPRT_PWM_MIN        								  0x63

#define _DEF_COLORTEMP    					 				 _CT_USER
#define _DEF_IR_PROTOCAL                                  _IR_HHT_DZ_X5_147

#elif(Project_ID == ID_HUIXIONG_CROSSOVER_2795E06_1T1P1H_M350QVR010_VBY_WQHD100HZ_20210427)
#define _LOGO_TYPE												_LOGO_NONE
//#define	_OSD_BLACK_WHITE_TYPE									_ON //黑白和蓝白菜单选择
#define _DEF_BACKLIGHT                                       	80
#define _DEF_LANGUAGE										 	_KOREAN//_CHINESE_S
#define _CT_7500_SUPPRT											_ON  //色温是否带7500

#define _BACKLIGHT_MAX 										 	(0XB0) //360MA
#define _BACKLIGHT_DEF_PWM 										(0X92)//300MA
#define _BACKLIGHT_MIN											6 

#define _MPRT_PWM_MAX        								 	(0xE0)
#define _MPRT_PWM_DEF         								 	0xC0
#define _MPRT_PWM_MIN        								  	0x63

#define _DEF_COLORTEMP    					 				 	_CT_6500
#define _DEF_P1_PICTURE_ITEM5	   								_MENU_NULL 
#elif(Project_ID == ID_TAISHUO_2795E06_1T1P1H_M280DCA_E3B_EDP4LAN_UHD60HZ_20211116)
#define _LOGO_TYPE												_LOGO_NONE
//#define	_OSD_BLACK_WHITE_TYPE									_ON //黑白和蓝白菜单选择
#define _DEF_BACKLIGHT                                       	50//80
#define _DEF_LANGUAGE										 	_KOREAN//_ENGLISH//_CHINESE_S

#define _BACKLIGHT_MAX 										 	(0XB0) //360MA
#define _BACKLIGHT_DEF_PWM 										(0X83) //(0X92)//300MA
#define _BACKLIGHT_MIN											6 
#define _DEF_COLORTEMP    					 				 	_CT_USER
#define _DEF_OSD_LANGUAGE_SHOW									_ON
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_1__,_1__,_9__
#define _DEF_IR_PROTOCAL                                    _IR_TAISHUO_NEC
#define _CT_7500_SUPPRT										_ON //色温是否带7500
#define _DEF_BURN_EDID										_OFF

//#define _DEF_P5_RESET_ITEM2    	 	  _MENU_FUN_POWER_OFF
//#define _DEF_P5_RESET_ITEM3    	  	  _MENU_FUN_RESET								 //预留灯效位置

#elif(Project_ID == ID_WANMEI_HK2795E051DP2HDMI__AUO_M270KCJ_K7B_QHD165HZ__20201120)
#define _LOGO_TYPE											 _LOGO_NONE

#define _DEF_DIGITAL_VOL_MAX								 3600
#define _DEF_DIGITAL_VOL_CENTER                              2400

#define _OD_WEAK_MID_HIGH                                       _ON

#define _RESET_KEEP_LANGUAGE								_ON //复位是否恢复语言

#define _MPRT_RATIO 								        50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 									   (0X87) //360MA

#define _BACKLIGHT_DEF_PWM 								   (0x65 )//300MA

#define _BACKLIGHT_MIN										20 


#define _MPRT_PWM_MAX         								 (0xF0)
	
#define _MPRT_PWM_DEF        								  0xC0
	
	
#define _MPRT_PWM_MIN        								 0x70

#define _DEF_LANGUAGE										 _ENGLISH



#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO


#elif(Project_ID == ID_KTC_HK2795E051DP2HDMI__SG2701G01_QHD165HZ__20201030)

#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        60

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0X75) //360MA

#define _BACKLIGHT_DEF_PWM 									(0x65 )//300MA

#define _BACKLIGHT_MIN										16 


#define _MPRT_PWM_MAX        								 (0xD0)
	
#define _MPRT_PWM_DEF        								  0xBB
	
	
#define _MPRT_PWM_MIN        								  0x63

#define _DEF_LANGUAGE										 _CHINESE_S


#define	_OSD_BLACK_WHITE_TYPE								_OFF //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
#define _DEF_P5_RESET_ITEM4      	                         _MENU_FUN_LED 

#elif(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__COST_SG3151B05_9_FHD240HZ__20200920)
#define _LOGO_TYPE											 _LOGO_NONE

#define _DEF_DIGITAL_VOL_MAX								 2664
#define _DEF_DIGITAL_VOL_CENTER                              1844
	
	
#define _MPRT_RATIO 								        60
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										(0X75) //360MA
	
#define _BACKLIGHT_DEF_PWM 									(0x65 )//300MA
	
#define _BACKLIGHT_MIN										16 
	
	
#define _MPRT_PWM_MAX         								 (0xD0)
		
#define _MPRT_PWM_DEF         								 0xBB
		
		
#define _MPRT_PWM_MIN        								  0x63
	
#define _DEF_LANGUAGE										 _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	
	
#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    								     _HDR10_MODE_AUTO

#elif(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__M270DAN03_0_FHD240HZ__20201211)
#define _LOGO_TYPE											 _LOGO_NONE
	
#define _DEF_DIGITAL_VOL_MAX								 2664
#define _DEF_DIGITAL_VOL_CENTER                              1844
	
#define _MPRT_RATIO 								        60
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										(0X5C) //360MA
	
#define _BACKLIGHT_DEF_PWM 									(0x48 )//300MA
	
#define _BACKLIGHT_MIN										16 
	
	
#define _MPRT_PWM_MAX         								 157
		
#define _MPRT_PWM_DEF          								 139
		
		
#define _MPRT_PWM_MIN          								 0x63
	
#define _DEF_LANGUAGE										 _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	
#define	_LONG_PRESS_POWER_DOWN								_ON //长按关机
	
#define _DEF_COLORTEMP    					 				_CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#elif(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__MV340VWB_N10__20201214)
#define _LOGO_TYPE											 _LOGO_NONE
	
	
#define _MPRT_RATIO 								        60
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0X6B) //360MA
	
#define _BACKLIGHT_DEF_PWM 									(0x48 )//300MA
	
#define _BACKLIGHT_MIN										16 
	
	
#define _MPRT_PWM_MAX        								  (0xD0)
		
#define _MPRT_PWM_DEF        								  0xBB
		
		
#define _MPRT_PWM_MIN       								   0x63
	
#define _DEF_LANGUAGE										 _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE									_ON //黑白和蓝白菜单选择
	
	
#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
#elif(Project_ID == ID_SHUNWEI_HK2795E05_1P2H_AUO_M350QVR015_EDP8LAN_WQHD120HZ_20211211)
#define _LOGO_TYPE											 _LOGO_NONE
#define	_OSD_BLACK_WHITE_TYPE									_ON //黑白和蓝白菜单选择
#define _MPRT_RATIO 								        60
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0X6B) //360MA
#define _BACKLIGHT_DEF_PWM 									(0x48 )//300MA
#define _BACKLIGHT_MIN										16 
#define _MPRT_PWM_MAX        								  (0xD0)
#define _MPRT_PWM_DEF        								  0xBB				
#define _MPRT_PWM_MIN       								   0x63	
#define _DEF_LANGUAGE										 _KOREAN
//#define _HDR10_MODE_END                 					_HDR10_MODE_AUTO
#define _DEF_ASPECT_RATIO_AMOUNT                 			_OSD_ASPECT_RATIO_21_BY_9
#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_2__,_1__,_1__

#elif(Project_ID == ID_SONGREN_HK2795E041DP2HDMI__LG_LM270WR2_QHD165HZ__20201128)
#define _LOGO_TYPE											_LOGO_SONGREN//	 _LOGO_NONE

#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0x7a) //400
	
#define _BACKLIGHT_DEF_PWM 									(0x6b)//360
			
#define _BACKLIGHT_MIN										16 
#define _DEF_LANGUAGE										 _CHINESE_S

#define _DEF_BACKLIGHT                                       80

#define _CT_7500_SUPPRT										_ON
#elif(Project_ID == ID_TJ_HK2795E051DP2HDMI__AUO_M270KCJ_K7B_QHD165HZ__20200917)
#define _LOGO_TYPE										_LOGO_ONN//	 _LOGO_NONE

#define _DEF_DIGITAL_VOL_MAX								 2664
#define _DEF_DIGITAL_VOL_CENTER                              1844
	
	
#define _DEF_BACKLIGHT                                       80
#define _MPRT_RATIO 								        50
#define _DEF_VOLUME										     50
	
#define _DEF_HOTKEY_LEFT								_MENU_FUN_BACKLIGHT//	_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT								_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 									 (82) //360MA
	
#define _BACKLIGHT_DEF_PWM 								 (71)//300MA
	
#define _BACKLIGHT_MIN									 0X08 
	
#define _MPRT_PWM_MAX         							 (0xb3)
	
#define _MPRT_PWM_DEF        							  0x90
	
	
#define _MPRT_PWM_MIN         							 0x63
	
#define _DEF_LANGUAGE									_ENGLISH//////// 
	
	
	
#define _DEF_GAMMA    									 _GAMMA_OFF
#define _DEF_COLORTEMP    								 _CT_6500
#define _DEF_HDR_MODE    								 _HDR10_MODE_AUTO
				
#define _CT_5800_sRGB_SUPPRT							 _ON

#elif(Project_ID == ID_SHUNWEI_SG2795_1DP2HDMI1USB__AUO_M270K7B_QHD165HZ_20200608)
#define _LOGO_TYPE											 _LOGO_NONE

#define _DEF_DIGITAL_VOL_MAX								 0x1222
#define _DEF_DIGITAL_VOL_CENTER								 0X0800


#define _MPRT_RATIO 								        35
#define _DEF_VOLUME										     50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 										 (0x4F) //360MA

#define _BACKLIGHT_DEF_PWM 									(0X44)//300MA

#define _BACKLIGHT_MIN										0X08 

#define _MPRT_PWM_MAX         								 (0xFF)

#define _MPRT_PWM_DEF         								 0xD0


#define _MPRT_PWM_MIN         								 0x90

#define _DEF_LANGUAGE										_KOREAN//_CHINESE_S////// 


#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择

#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
#define _DEF_P5_RESET_ITEM3    	  	  						_MENU_FUN_RESET//预留灯效位置

#define _DEF_GAMMA    										 _GAMMA_OFF
#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
#elif(Project_ID == ID_SHUNWEI_HK25561DP1HDMI_M240HW01_FHD165HZ_24F144_20200615)
#define _LOGO_TYPE											 _LOGO_NONE
	
#define _DEF_DIGITAL_VOL_MAX								 6334
#define _DEF_DIGITAL_VOL_CENTER                              5344
	
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0x68) //360MA
	
#define _BACKLIGHT_DEF_PWM 									(79)//300MA
	
#define _BACKLIGHT_MIN										20 
	
	
#define _DEF_LANGUAGE										 _KOREAN
	
	
#define _DEF_COLORTEMP    								   _CT_6500
#define _DEF_HDR_MODE    					 			   _HDR10_MODE_AUTO



#elif(Project_ID == ID_SHUNWEI_NYC_HK27851DP2HDMI__AUO_M270DAN02_0_QHD60HZ__20200706)
#define _LOGO_TYPE											 _LOGO_NONE
	
#define _DEF_DIGITAL_VOL_MAX								 6334
#define _DEF_DIGITAL_VOL_CENTER                              5344
	
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0x7b) //360MA
	
#define _BACKLIGHT_DEF_PWM 									(0x68)//300MA
	
#define _BACKLIGHT_MIN										20 
	
	
#define _DEF_LANGUAGE										 _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE								_OFF //黑白和蓝白菜单选择
	
#define _DEF_COLORTEMP    								   _CT_6500
#define _DEF_HDR_MODE    					 			   _HDR10_MODE_AUTO

#define _LONG_PRESS_POWER_DOWN               				_OFF

#elif(Project_ID == ID_SHUNWEI_NYC_HK2785E02_1P2H_AUO_P270DAN01_0_QHD60HZ_20210524)
#define _LOGO_TYPE											 _LOGO_NONE
	
#define _DEF_DIGITAL_VOL_MAX								 6334
#define _DEF_DIGITAL_VOL_CENTER                              5344
	
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0x7b) //360MA
	
#define _BACKLIGHT_DEF_PWM 									(0x68)//300MA
	
#define _BACKLIGHT_MIN										20 
	
	
#define _DEF_LANGUAGE										 _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE								_OFF //黑白和蓝白菜单选择
	
#define _DEF_COLORTEMP    								   _CT_6500
#define _DEF_HDR_MODE    					 			   _HDR10_MODE_AUTO

#define _LONG_PRESS_POWER_DOWN               				_OFF

#elif(Project_ID == ID_SHUNWEI_HK27851DP2HDMI__BOE_MV315QHB_N10_QHD75HZ__20201128)
	
#define _LOGO_TYPE											 _LOGO_NONE
	
#define _DEF_DIGITAL_VOL_MAX								0x1000// 0x1EEE
#define _DEF_DIGITAL_VOL_CENTER                             0x800// 0X1100
	
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										171//197//(0xff) //360MA
	
#define _BACKLIGHT_DEF_PWM 									153//165//(155)//300MA
	
#define _BACKLIGHT_MIN										47 
		
#define _DEF_LANGUAGE										 _KOREAN
		
#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	
#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON                                      _ON
#elif(Project_ID == ID_SHUNWEI_HK25561DP2HDMI_M270DAN09V0_QHD60HZ__20210319)
		
#define _LOGO_TYPE											 _LOGO_NONE
		
#define _SOURCE_AUTO_ON								        _ON//信号切换是否带auto
		
#define _DEF_DIGITAL_VOL_MAX								 0x1EEE
#define _DEF_DIGITAL_VOL_CENTER                              0X1100
#define _MPRT_RATIO 								        30
		
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (184) 
		
#define _BACKLIGHT_DEF_PWM 									(155)
		
#define _BACKLIGHT_MIN										20 
		
#define _DEF_LANGUAGE										 _KOREAN
		
		
#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
		
#define _DEF_COLORTEMP    								    _CT_USER
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
//#define _LONG_PRESS_POWER_DOWN            				    _ON
	
	
#elif(Project_ID == ID_SHUNWEI_HK27851DP2HDMI__AUO_M270DAN02_0_QHD60HZ__20200706)
	
#define _LOGO_TYPE											 _LOGO_NONE
	
#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_BRIGHTNESS
	
#define _DEF_DIGITAL_VOL_MAX								 0x1EEE
#define _DEF_DIGITAL_VOL_CENTER                              0X1100
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (184) 
	
#define _BACKLIGHT_DEF_PWM 									(155)
	
#define _BACKLIGHT_MIN										20 
	
#define _DEF_LANGUAGE										 _KOREAN
	
	
#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
	
#define _DEF_COLORTEMP    								    _CT_USER
#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO

#define _LONG_PRESS_POWER_DOWN            				    _ON

#define _DEF_BRIGHTNESS                                     55
#elif(Project_ID == ID_HONGHETAI_HK27851DP3HDMI__BOE_MV315QHB_N10_QHD75HZ__20200826)
	
#define _LOGO_TYPE											 _LOGO_NONE
	
	
#define _MPRT_RATIO 								        30
	
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										(0xff) //360MA
	
#define _BACKLIGHT_DEF_PWM 									(0x90)//300MA
	
#define _BACKLIGHT_MIN										20 
		
#define _DEF_LANGUAGE										 _KOREAN
	
	
	
#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
#define _DEF_IR_PROTOCAL									_IR_HHT_NEC


#elif(Project_ID == ID_HUIXIONG_HK2785E02_AUO_M320DVN02_LVDS_QHD_QHD75HZ__20210330)
        
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_BACKLIGHT                                       80
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
                
    #define _BACKLIGHT_MAX                                   0X99//  0XFF//   0X70// 0xB0    
    #define _BACKLIGHT_DEF_PWM                                 0X55//0XD9//   0X5B//0x98
    #define _BACKLIGHT_MIN                                      20 
                
    #define _DEF_LANGUAGE                                      _CHINESE_S///	 _ENGLISH
        
    #define _MPRT_RATIO                                         30

    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60   		  


#elif(Project_ID == ID_CHANGHONG_HK27851DP2HDMI__CSOT_SG2701B01_FHD165HZ__20200505)



#define _LOGO_TYPE											_LOGO_NONE


#define _MPRT_RATIO 										 50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0xff-0x43) //560MA

#define _BACKLIGHT_DEF_PWM 									(0xff-0x6C)//450

#define _BACKLIGHT_MIN										32 

#define _MPRT_PWM_MAX         								 (0xff)

#define _MPRT_PWM_DEF        								  0xD0


#define _MPRT_PWM_MIN        								  0x60

#define _DEF_LANGUAGE										 _PORTUGUESE

#elif(Project_ID == ID_CHANGHONG_HK27851DP2HDMI__PANDA_LC238LF1F_FHD165HZ__20201023)


#define _LOGO_TYPE											_LOGO_NONE


#define _MPRT_RATIO 										 50

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (0xff-0x75) //420

#define _BACKLIGHT_DEF_PWM 									(0xff-0X8C)//350

#define _BACKLIGHT_MIN										32 

#define _MPRT_PWM_MAX        							   (0xff)

#define _MPRT_PWM_DEF         								 0xD0


#define _MPRT_PWM_MIN        								  0x60

#define _DEF_LANGUAGE										 _PORTUGUESE

#elif(Project_ID == ID_NYC_SHUNWEI_HK27851DP3HDMI__AUO_M270HAN02_2_FHD144HZ__20210203)

#define _LOGO_TYPE											 _LOGO_NONE
#define _DEF_DIGITAL_VOL_MAX								 0X17FF
#define _DEF_DIGITAL_VOL_CENTER                              0XBFF


#define _MPRT_RATIO 								        38

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 									   (0xff-0xA5) //360MA

#define _BACKLIGHT_DEF_PWM 									(0xff-0xC3)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX        							  (0xe0)

#define _MPRT_PWM_DEF        							  (0xe0)


#define _MPRT_PWM_MIN         							  (0xe0)

#define _DEF_LANGUAGE									  _KOREAN



#define _DEF_GAMMA    										 _GAMMA_OFF
#define _DEF_COLORTEMP    									 _CT_6500
#define _DEF_HDR_MODE    								   _HDR10_MODE_AUTO

//#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_1__,_2__,_0__
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_8__,_2__,_0__

#elif(Project_ID == ID_NYC_SW_HK2785E07_1P3H_AUO_M270HAN036_FHD165HZ_20220503)

#define _LOGO_TYPE											 _LOGO_NONE
#define _DEF_DIGITAL_VOL_MAX								 0X17FF
#define _DEF_DIGITAL_VOL_CENTER                              0XBFF


#define _MPRT_RATIO 								        45

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX 									   (0X9E) //360MA

#define _BACKLIGHT_DEF_PWM 									(0X8C)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE									  _KOREAN



#define _DEF_GAMMA    										 _GAMMA_OFF
#define _DEF_COLORTEMP    									 _CT_6500
#define _DEF_HDR_MODE    								   _HDR10_MODE_AUTO

#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_5__,_0__,_6__

#elif(Project_ID == ID_SHUNWEI_HK27851DP3HDMI__AUO_M270HAN02_2_FHD165HZ__20200521)

#define _LOGO_TYPE											 _LOGO_NONE
#define _DEF_DIGITAL_VOL_MAX								 0X17FF
#define _DEF_DIGITAL_VOL_CENTER                              0XBFF


#define _MPRT_RATIO 								        38

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 									   (0xff-0xA5) //360MA

#define _BACKLIGHT_DEF_PWM 									(0xff-0xC3)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX        							  (0xe0)

#define _MPRT_PWM_DEF        							  (0xe0)


#define _MPRT_PWM_MIN         							  (0xe0)

#define _DEF_LANGUAGE									  _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择


#define _DEF_GAMMA    										 _GAMMA_22
#define _DEF_COLORTEMP    									 _CT_USER
#define _DEF_HDR_MODE    								   _HDR10_MODE_AUTO

#elif 0//(Project_ID == ID_CS_2795) 
         //FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA   
   
//#define _DEF_OSD_LANGUAGE_ARROW								_ON
    
	#define _DEF_BACKLIGHT										 80
	#define _DEF_LANGUAGE									  	_ENGLISH
	#define _LOGO_TYPE											 _LOGO_NONE//_LOGO_NONE
	//#define _DEF_HOTKEY_LONG                                    _ON//
	//#define _DEF_MENU_LOCK                                          _ON//
          
    //#define _DEF_COLORTEMP                                      _CT_USER
    //#define _DEF_OVERCLOCK                                      _ON
    //#define _DEF_DP_OVERCLOCK                                   _ON//DP超频
    //#define _DEF_HDMI_OVERCLOCK                                 _ON//DP超频
	#define _MPRT_RATIO 										30
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
    
	#define _BACKLIGHT_MAX										 (0XCD)//(0XFF) 
	#define _BACKLIGHT_DEF_PWM									 (0XAA)//(0X80)
	#define _BACKLIGHT_MIN										 20 
    
	//#define _MPRT_PWM_MAX										 0xE0
	//#define _MPRT_PWM_DEF										 0xC0
	//#define _MPRT_PWM_MIN										 0x60

    
	//#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_MPRT
    //#define _DEF_H_POS                                          99
    //#define _DEF_V_POS                                          6
	//#define _DEF_P5_RESET_ITEM2 		  _MENU_FUN_LED
    //#define _DEF_P5_RESET_ITEM3    	 	  _MENU_FUN_RESET


    #define _DEF_IR_PROTOCAL                                    _IR_NEC_DTV328
#if 0
#if(_PROJECT == _RL6463_PROJECT)
    #define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
    #define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
    #define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
    #define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
    #define _DEF_P1_PICTURE_ITEM4      _MENU_FUN_ECO
    #define _DEF_P1_PICTURE_ITEM5      _MENU_NULL									//预留HDR位置
    #define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
    #define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_VGA_VPOSITON
    #define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
    #define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
    #define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
    #define _DEF_P2_DISPLAY_ITEM5      _MENU_FUN_SHARPNESS 

    #define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
    #define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
    #define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
    #define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
    #define _DEF_P3_COLORTEMP_ITEM4      _MENU_NULL
    #define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL

    #define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
    #define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
    #define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
    #define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
    #define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
    #define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL

    #define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
    #define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
    #define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
    #define _DEF_P5_RESET_ITEM3    	  	 _MENU_FUN_LOWBLUE 
    #define _DEF_P5_RESET_ITEM4     	 _MENU_NULL  
    #define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
  
  //page 6
    #define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
    #define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_AUDOIMUTE  
    #define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIVOLUME  
    #define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_OD
    #define _DEF_P6_MISC_ITEM4      	 _MENU_NULL  
    #define _DEF_P6_MISC_ITEM5      	 _MENU_NULL

  
#else //if(_PROJECT == _RL6463_PROJECT)
    #define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
    #define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
    #define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
    #define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
    #define _DEF_P1_PICTURE_ITEM4      _MENU_FUN_ECO
    #define _DEF_P1_PICTURE_ITEM5      _MENU_FUN_HDR 
//page2
    #define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_SATURATION
    #define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_LOWBLUE
    #define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_SHARPNESS 
    #define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_ASPECT
    #define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL 								//预留gamma位置 
    #define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL								//预留色域模式位置 
//page3
    #define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
    #define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
    #define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
    #define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
    #define _DEF_P3_COLORTEMP_ITEM4      _MENU_NULL
    #define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
//page 4
    #define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
    #define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
    #define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
    #define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
    #define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
    #define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL 
//page5
    #define _DEF_P5_RESET_ITEM0     	  _MENU_FUN_AUDOIMUTE
    #define _DEF_P5_RESET_ITEM1     	  _MENU_FUN_AUDOIVOLUME 
    #define _DEF_P5_RESET_ITEM2    	 	  _MENU_FUN_RESET
    #define _DEF_P5_RESET_ITEM3    	  	  _MENU_NULL								 //预留灯效位置
    #define _DEF_P5_RESET_ITEM4     	  _MENU_NULL
    #define _DEF_P5_RESET_ITEM5      	  _MENU_NULL
//page 6
    #define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
    #define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC  
    #define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_OD
    #define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_MPRT 
    #define _DEF_P6_MISC_ITEM4      	 _MENU_NULL										//预留超频位置			
    #define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
  



#endif
#endif

#elif(Project_ID == ID_DR_HK2785E02_1P3H_MV315QHBN10_QHD75HZ_FHD144HZ_20210428) 
	#define _LOGO_TYPE											_LOGO_IFOVED_R
	#define _DEF_BACKLIGHT                                       80
	
	#define _DEF_GAME_MODE										 _ON

	#define _DEF_HOTKEY_LEFT									_MENU_FUN_OVERCLOCK
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	#define _BACKLIGHT_MAX 						 				(0xff-0X89) //420
	#define _BACKLIGHT_DEF_PWM 									(0xFF-0X9D)//350
	#define _BACKLIGHT_MIN											32 
	#define _DEF_LANGUAGE										_CHINESE_S// _ENGLISH
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_FUN_OVERCLOCK										//预留超频位置			
  

#elif(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908) 
// _PROJEC_ID_TYPE ==1   jinpin

#if(_PROJEC_ID_TYPE ==1)//jinpin											

#if 1
    #define _LOGO_TYPE                                          _LOGO_NONE//_LOGO_PREMIER
	//#define _SOURCE_AUTO_ON											1
    #define _DEF_BACKLIGHT                                      50
	#define _LONG_PRESS_POWER_DOWN                              _ON
    #define _MPRT_RATIO                                         30
            
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME  
    
    #define _BACKLIGHT_DEF_PWM                                  0X90
    #define _BACKLIGHT_MAX                                      0XFF    
    #define _BACKLIGHT_MIN                                      29//8
    
    #define _DEF_LANGUAGE                                      _JAPANESE//_SPANISH
    //#define _DEF_BURNING_MODE                                  _OFF
   //I #define _DEF_FACTORY_MODE                                  _OFF
    #define _DEF_COLORTEMP                                     _CT_7500
    
    #define _CT_7500_SUPPRT                                     _ON
    
    #define _DEF_P6_MISC_ITEM1      	                        _MENU_FUN_OD  
    #define _DEF_P6_MISC_ITEM2      	                        _MENU_NULL

#else //送样


 	#define _LOGO_TYPE 										 	_LOGO_NONE
 	#define _DEF_BACKLIGHT 									 	50
 	#define _LONG_PRESS_POWER_DOWN 							 	_ON
 	#define _MPRT_RATIO										 	30
		 
 	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
 	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME	
 
 	#define _BACKLIGHT_DEF_PWM 								 	0X90
 	#define _BACKLIGHT_MAX 									 	0XFF	 
 	#define _BACKLIGHT_MIN 									 	29//8
 
 	#define _DEF_LANGUAGE										_CHINESE_S
	#define _DEF_BURNING_MODE								  	_OFF
	#define _DEF_FACTORY_MODE								   	_OFF
 	#define _DEF_COLORTEMP 										_CT_7500
 
 	#define _CT_7500_SUPPRT									 	_ON
 
 	#define _DEF_P6_MISC_ITEM1 								 	_MENU_FUN_OD  
 	#define _DEF_P6_MISC_ITEM2 								 	_MENU_NULL
#endif
#else
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_ANMTE
	#define _DEF_BACKLIGHT										80
	#define _LONG_PRESS_POWER_DOWN                              _ON
    #define _MPRT_RATIO                                         30
				
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME  
		
    #define _BACKLIGHT_DEF_PWM                                  0XE8
    #define _BACKLIGHT_MAX                                      0XFF    
    #define _BACKLIGHT_MIN                                      8
		
    #define _DEF_LANGUAGE                                      _ENGLISH
    #define _DEF_BURNING_MODE                                  _OFF
    #define _DEF_FACTORY_MODE                                  _OFF
    #define _DEF_COLORTEMP                                     _CT_7500

		
    #define _CT_7500_SUPPRT                                     _ON
		
    #define _DEF_P6_MISC_ITEM1      	                        _MENU_FUN_OD  
    #define _DEF_P6_MISC_ITEM2      	                        _MENU_NULL

#endif
  
#elif(Project_ID == ID_CW_HK2556E18_2T1H_SN238CS041_LVDS_FDH60HZ_20230522)
 #define _LOGO_TYPE 										 _LOGO_NONE//_LOGO_PREMIER
 //#define _SOURCE_AUTO_ON											 1
 #define _DEF_BACKLIGHT 									 50
 #define _LONG_PRESS_POWER_DOWN 							 _ON
 #define _MPRT_RATIO										 30
		 
 #define _DEF_HOTKEY_LEFT									 _MENU_FUN_BACKLIGHT
 #define _DEF_HOTKEY_RIGHT									 _MENU_FUN_AUDOIVOLUME	
 
 #define _BACKLIGHT_DEF_PWM 								 0X90
 #define _BACKLIGHT_MAX 									 0XFF	 
 #define _BACKLIGHT_MIN 									 29//8
 
 #define _DEF_LANGUAGE										_JAPANESE//_SPANISH
 //#define _DEF_BURNING_MODE								  _OFF
//I #define _DEF_FACTORY_MODE								   _OFF
 #define _DEF_COLORTEMP 									_CT_7500
 
 #define _CT_7500_SUPPRT									 _ON
 
 #define _DEF_P6_MISC_ITEM1 								 _MENU_FUN_OD  
 #define _DEF_P6_MISC_ITEM2 								 _MENU_NULL

#elif(Project_ID == ID_CHANGJIA_2795E02_1T1DP1H_AUO_M270HTN02_2_VBY_144HZ_20210202) 
    #define _LOGO_TYPE                                          _LOGO_NONE
    #define _DEF_BACKLIGHT                                      80
    #define _DEF_LANGUAGE                                       _ENGLISH
    #define _DEF_HOTKEY_LEFT                                    _MENU_NULL
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    #define _BACKLIGHT_MAX                                      (0XFF-0X72)     
    #define _BACKLIGHT_DEF_PWM                                  (0XFF-0X80) 
    #define _BACKLIGHT_MIN                                      8
    #define _DEF_P5_RESET_ITEM3                                 _MENU_FUN_LED                                //预留灯效位置                

    

    
#elif(Project_ID == ID_RD_HK2561DP1HDMI_AUO_M270HVR01_LVDS_FHD165_20200118)
    
    #define _DEF_BACKLIGHT                                      80
    #define _MPRT_RATIO                                         70
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    
    #define _BACKLIGHT_MAX                                       0XFF 
    #define _BACKLIGHT_DEF_PWM                                   (0XFF-0X20)
    #define _BACKLIGHT_MIN                                       20 
    
    #define _MPRT_PWM_MAX                                        0xE0
    #define _MPRT_PWM_DEF                                        0xE0
    #define _MPRT_PWM_MIN                                        0xE0
        
    #define _DEF_LANGUAGE                                        _CHINESE_S
    #define _DEF_HDR_MODE                                        _HDR10_MODE_OFF
    
#elif(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270HCA_L7B_FHD165HZ_20201228)
    //FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA   
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_BACKLIGHT                                       50
                
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME

    #define _BACKLIGHT_MAX                                      (0XFF-0X80)//(0XFF-0X58) 
    #define _BACKLIGHT_DEF_PWM                                  0x5F//(0XFF-0X90)
    #define _BACKLIGHT_MIN                                      30 
            
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_COLORTEMP                                      _CT_USER
    #define _DEF_P6_MISC_ITEM2                                  _MENU_FUN_OD
    #define _DEF_DIGITAL_VOL_MAX                                0xD33
    #define _DEF_DIGITAL_VOL_CENTER                             0x8CC   
    #define _DEF_CT_USER_OSD_R                                  _CTUSER_RED>>4
    #define _DEF_CT_USER_OSD_G                                  _CTUSER_GREEN>>4
    #define _DEF_CT_USER_OSD_B                                  _CTUSER_BLUE>>4
    #define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147
    
#elif(Project_ID == ID_HHT_HK2556E06_1P1H_INN_M270HCA_L7B_FHD165HZ_20210222)
        //FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA 

#if(_PROJEC_ID_TYPE==1)
	#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#else
	#define _DEF_CT_USER_OSD_R									_CTUSER_RED>>4
	#define _DEF_CT_USER_OSD_G									_CTUSER_GREEN>>4
	#define _DEF_CT_USER_OSD_B									_CTUSER_BLUE>>4

#endif
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_BACKLIGHT                                       50
    #define _MPRT_RATIO                                         50
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME
    #define _BACKLIGHT_MAX                                      0xb7//420ma 0xC6    
    #define _BACKLIGHT_DEF_PWM                                  0x79//280ma 0x9B
    #define _BACKLIGHT_MIN                                      50//30 
    //#define _BACKLIGHT_MAX                                      (0XFF-0X80)//(0XFF-0X58) 
    //#define _BACKLIGHT_DEF_PWM                                  0x5F//(0XFF-0X90)
    //#define _BACKLIGHT_MIN                                      50 

    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60
                
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_COLORTEMP                                      _CT_USER
    #define _DEF_P6_MISC_ITEM2                                  _MENU_FUN_OD
    #define _DEF_DIGITAL_VOL_MAX                                0xD33
    #define _DEF_DIGITAL_VOL_CENTER                             0x8CC   

    #define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147
#elif(Project_ID == ID_HHT_HK2556E06_1P1H_AUO_M270HVR01_FHD165_20210302)
            //FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA   
    #define _LOGO_TYPE                                          _LOGO_NONE
    #define _DEF_BACKLIGHT                                      50
    #define _MPRT_RATIO                                         50
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME
        
    #define _BACKLIGHT_MAX                                      (0XFF-0X80)//(0XFF-0X58) 
    #define _BACKLIGHT_DEF_PWM                                  0x5F//(0XFF-0X90)
    #define _BACKLIGHT_MIN                                      50 
    
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60
                    
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_COLORTEMP                                      _CT_USER
   // #define _DEF_P6_MISC_ITEM2                                  _MENU_FUN_OD
    #define _DEF_DIGITAL_VOL_MAX                                0xD33
    #define _DEF_DIGITAL_VOL_CENTER                             0x8CC   
    #define _DEF_CT_USER_OSD_R                                  _CTUSER_RED>>4
    #define _DEF_CT_USER_OSD_G                                  _CTUSER_GREEN>>4
    #define _DEF_CT_USER_OSD_B                                  _CTUSER_BLUE>>4
    #define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147

#elif(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270HCA_P7B_FHD165HZ_20210127)
//FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA       
    #define _LOGO_TYPE                                          _LOGO_NONE
    #define _DEF_BACKLIGHT                                      50
    #define _OSD_BLACK_WHITE_TYPE                               _ON //黑白和蓝白菜单选择
    #define _SOURCE_AUTO_ON                                     _ON
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME               
    #define _BACKLIGHT_MAX                                      (0xFF-0X65)
    #define _BACKLIGHT_DEF_PWM                                  (0xFF-0X79)
    #define _BACKLIGHT_MIN                                      20 
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_COLORTEMP                                      _CT_USER
    #define _DEF_CT_USER_OSD_R                                  _CTUSER_RED>>4
    #define _DEF_CT_USER_OSD_G                                  _CTUSER_GREEN>>4
    #define _DEF_CT_USER_OSD_B                                  _CTUSER_BLUE>>4
    #define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147
#elif(Project_ID == ID_WCH_HK2556E02_1P1H_MV238FHB_NG0_LOGO_NCT_EDID_DFI24144_20210303)
#define _LOGO_TYPE											_LOGO_NCT
    
#define _MPRT_RATIO 								 30
    
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
    
#define _BACKLIGHT_MAX									 (0XFF-0x9C)//300MA//	 0X80	
#define _BACKLIGHT_DEF_PWM							 (0XFF-0xAE)	// 240MA  //	 0x60
#define _BACKLIGHT_MIN										8
    
#define _DEF_LANGUAGE									_CHINESE_S//	 _ENGLISH
    
        
#elif(Project_ID == ID_HHT_HK2556E06_1P1H_INN_M270KCJ_L5E_QHD75HZ_20210120)

#if(_PROJEC_ID_TYPE==1)//xin M270KCJ_L5B
        
    #define _DEF_BACKLIGHT                                      80
    #define _BACKLIGHT_MAX                                      0xC6    
    #define _BACKLIGHT_DEF_PWM                                  0XAF//0x9B
    #define _BACKLIGHT_MIN                                      30 
	#define _DEF_COLORTEMP										_CT_USER
	
	#define _DEF_CT_USER_OSD_R									117
	#define _DEF_CT_USER_OSD_G								  120
	#define _DEF_CT_USER_OSD_B								  120
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_8__,_1__,_9__
#elif(_PROJEC_ID_TYPE==2)//BITM M270KCJ_L5B
	
      
	#define _DEF_BACKLIGHT										50
	#define _BACKLIGHT_MAX										0XFF//0xC6	
	#define _BACKLIGHT_DEF_PWM									0XAD//0x9B //0x9B
	#define _BACKLIGHT_MIN										30 
                
	#define _DEF_COLORTEMP										_CT_USER

	#define _DEF_HDR_MODE										_HDR10_MODE_AUTO
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_8__,_1__,_9__
#elif 0//(_PROJEC_ID_TYPE==3)//BITM M270KCJ_L5E
		
		  
	#define _DEF_BACKLIGHT										 50
	#define _BACKLIGHT_MAX										0XD1//0xC6	
	#define _BACKLIGHT_DEF_PWM									0x9B //0x9B
	#define _BACKLIGHT_MIN										30 
					
	#define _DEF_COLORTEMP										_CT_USER
	
	#define _DEF_HDR_MODE										_HDR10_MODE_AUTO
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_8__,_1__,_9__
                
#else//old M270KCJ_L5E
        
    #define _DEF_BACKLIGHT                                       50
    #define _BACKLIGHT_MAX                                      0xC6    
    #define _BACKLIGHT_DEF_PWM                                  0x9B
    #define _BACKLIGHT_MIN                                      30 
	#define _DEF_COLORTEMP										_CT_USER
	//#define _DEF_CT_USER_OSD_R									117
  //	#define _DEF_CT_USER_OSD_G								  120
  	//#define _DEF_CT_USER_OSD_B								  120
#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_5__,_1__,_1__
                
#endif 
	#define _LOGO_TYPE                                        	_LOGO_NONE
    #define _OSD_BLACK_WHITE_TYPE                               _ON //黑白和蓝白菜单选择
    #define _SOURCE_AUTO_ON                                     _ON

    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME
                
                 
    #define _DEF_LANGUAGE                                       _KOREAN
	#define _DEF_DIGITAL_VOL_MAX								 3379//3500
	#define _DEF_DIGITAL_VOL_CENTER 							 2400
	
        
      #define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147



 #elif(Project_ID == ID_HHT_HK2556E06_1P1H_LG_LM270WQ5_SSA1_QHD60HZ_20210308)
        
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_BACKLIGHT                                       50
    #define _OSD_BLACK_WHITE_TYPE                               _ON //黑白和蓝白菜单选择
    #define _SOURCE_AUTO_ON                                     _ON

    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME
                
    #define _BACKLIGHT_MAX                                      0xC6    
    #define _BACKLIGHT_DEF_PWM                                  0x9B
    #define _BACKLIGHT_MIN                                      30 
                
    #define _DEF_LANGUAGE                                       _KOREAN
        
    #define _DEF_COLORTEMP                                      _CT_USER
    #define _DEF_CT_USER_OSD_R                                  _CTUSER_RED>>4
    #define _DEF_CT_USER_OSD_G                                  _CTUSER_GREEN>>4
    #define _DEF_CT_USER_OSD_B                                  _CTUSER_BLUE>>4
    #define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147
 
	
#elif(Project_ID == ID_HUIXIONG_HK2785E02_AUO_M320DVN02_LVDS_QHD_QHD75HZ__20210330)
        
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_BACKLIGHT                                       80
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
                
    #define _BACKLIGHT_MAX                                     0XFF//   0X70// 0xB0    
    #define _BACKLIGHT_DEF_PWM                                 0XD9//   0X5B//0x98
    #define _BACKLIGHT_MIN                                      20 
                
    #define _DEF_LANGUAGE                                      _CHINESE_S///	 _ENGLISH
        
    #define _MPRT_RATIO                                         30

    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60   		  

          
#elif(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270KCJ_L5Z_QHD75HZ_20210126)
//FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA       
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_BACKLIGHT                                       50
    #define _OSD_BLACK_WHITE_TYPE                               _ON //黑白和蓝白菜单选择
    #define _SOURCE_AUTO_ON                                     _ON
                    
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME
                
    #define _BACKLIGHT_MAX                                      (0xFF-0X84)
    #define _BACKLIGHT_DEF_PWM                                  (0xFF-0X96)
    #define _BACKLIGHT_MIN                                      20 
                
    #define _DEF_LANGUAGE                                       _KOREAN
   	#define _DEF_DIGITAL_VOL_MAX								 3379//3500
	#define _DEF_DIGITAL_VOL_CENTER 							 2400
	 
	#define _FW_VERSION   _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_6__,_1__,_2__
    #define _DEF_COLORTEMP                                      _CT_USER
    #define _DEF_CT_USER_OSD_R                                  117
    #define _DEF_CT_USER_OSD_G                                  120
    #define _DEF_CT_USER_OSD_B                                  120

    #define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147
            
#elif(Project_ID == ID_CH_HK2556E02DP1HDMI__BOE_MV238QHM_N10_LVDS_QHD75HZ_20210115)
    
    #define _LOGO_TYPE                                          _LOGO_NONE
    #define _DEF_BACKLIGHT                                      50//80  
    #define _DEF_H_POS                                          88
    #define _DEF_V_POS                                          01
    
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_AUDOIVOLUME
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    #define _NAVIGAT_MENU_SURPPORT						  		_ON  //导航菜单
    #define _OD_WEAK_MID_HIGH									_ON // OD 强中弱
    
    #define _BACKLIGHT_MAX                                      (0xFF-0x9D)//(0xFF-0x9A)
    #define _BACKLIGHT_DEF_PWM                                  (0xFF-0XC8)//(0xFF-0XB0)
    #define _BACKLIGHT_MIN                                      20 
        
    #define _DEF_LANGUAGE                                       _ENGLISH
    #define _DEF_COLORTEMP                                      _CT_6500
    
    #define _DEF_P1_PICTURE_ITEM2                               _MENU_FUN_DCR
    #define _DEF_P1_PICTURE_ITEM3                               _MENU_FUN_ECO
    #define _DEF_P1_PICTURE_ITEM4                               _MENU_NULL
    #define _DEF_P1_PICTURE_ITEM5                               _MENU_NULL 
    #define _DEF_P6_MISC_ITEM1                                  _MENU_FUN_OD
    #define _DEF_P6_MISC_ITEM2                                  _MENU_NULL
    #define _DEF_DIGITAL_VOL_MAX                                0xDCC
    #define _DEF_DIGITAL_VOL_CENTER                             0x932

#elif(Project_ID == ID_2795E04_CS_LOGO_20210128)

    #define _LOGO_TYPE                                          _LOGO_NONE
    #define _DEF_BACKLIGHT                                      80  
	#define _SOURCE_AUTO_ON								        _ON //信号切换是否带auto

    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT

    #define _BACKLIGHT_MAX                                      (0xA0)//(0xFF-0x9A)
    #define _BACKLIGHT_DEF_PWM                                  (0x95)//(0xFF-0XB0)
    
    #define _BACKLIGHT_MIN                                      0X18 
    #define _MPRT_RATIO                                         50
    #define _MPRT_MID_RATIO                                     40
    #define _MPRT_HIGH_RATIO                                    30

    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60            
    
    #define _DEF_LANGUAGE                                       _CHINESE_S
    #define _DEF_COLORTEMP                                      _CT_6500
    #define _CT_7500_SUPPRT                                     _ON  //色温是否带7500
    //#define _OD_WEAK_MID_HIGH                                   _ON // OD 强中弱
    //#define _MPRT_WEAK_MID_HIGH                                 _ON // OD 强中弱
   // #define _DEF_P5_RESET_ITEM3                                 _MENU_FUN_LED                                //预留灯效位置

#elif(Project_ID == ID_TIANJI_HK2556E06_1H1DP_BOE_MV257VUB_N10_LVDS_WFHD100HZ_20210126)
    
    #define _LOGO_TYPE                                          _LOGO_GENLOVE
    #define _DEF_BACKLIGHT                                      80  

    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT

    #define _BACKLIGHT_MAX                                      (0xA0)//(0xFF-0x9A)
    #define _BACKLIGHT_DEF_PWM                                  (0x95)//(0xFF-0XB0)
    
    #define _BACKLIGHT_MIN                                      0X18 

    #define _MPRT_RATIO                                         50
    #define _MPRT_MID_RATIO                                     40
    #define _MPRT_HIGH_RATIO                                    30

    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60            
    
    #define _DEF_LANGUAGE                                       _CHINESE_S
    #define _DEF_COLORTEMP                                      _CT_6500
    #define _CT_7500_SUPPRT                                     _ON  //色温是否带7500
    #define _OD_WEAK_MID_HIGH                                   _ON // OD 强中弱
    #define _MPRT_WEAK_MID_HIGH                                 _ON // OD 强中弱
    #define _DEF_P5_RESET_ITEM3                                 _MENU_FUN_LED                                //预留灯效位置
    #define _OD_WEAK                                            0X18
    #define _OD_MID                                             0X30
    #define _OD_STRONG                                          0X40
#elif(Project_ID == ID_HAOTIAN_HK2556E02_1H1DP_BOE_MV257VUB_N10_LVDS_WFHD75HZ_20210303)
        
    #define _LOGO_TYPE                                          _LOGO_NONE
    #define _DEF_BACKLIGHT                                      80  
    
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    
    #define _BACKLIGHT_MAX                                      (0xA0)//(0xFF-0x9A)
    #define _BACKLIGHT_DEF_PWM                                  (0x95)//(0xFF-0XB0)
        
    #define _BACKLIGHT_MIN                                      0X18 
    
    #define _MPRT_RATIO                                         50
    #define _MPRT_MID_RATIO                                     40
    #define _MPRT_HIGH_RATIO                                    30
    
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60            
        
    #define _DEF_LANGUAGE                                       _CHINESE_S
    #define _DEF_COLORTEMP                                      _CT_6500
  

#elif(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH180HZ_20210106)
        //FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA  
        
    #define _LOGO_TYPE                                         	_LOGO_QNIX1
    #define _DEF_BACKLIGHT                                     	50
//	#define _DEF_OSD_BACKLIGHT                                 	70
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_ECO
    #define _DEF_HOTKEY_UP                                      _MENU_FUN_LED
    #define _OSD_6_KEY_SUPPROT                                  _ON
    
    #define _DEF_HOTKEY_LONG									_ON//
    #define _DEF_MENU_LOCK                                      _ON//
    #define _DEF_P5_RESET_ITEM2    	 	                        _MENU_FUN_LED
    #define _DEF_P5_RESET_ITEM3    	  	                        _MENU_FUN_RESET
    
	#define _DEF_HOTKEY_TIME									_ON //快捷菜单自动关闭
    #define _BACKLIGHT_MAX                                      0x92//0xC7
    #define _BACKLIGHT_DEF_PWM                                  0X6F//0x59//0x62
    #define _BACKLIGHT_MIN                                      30 
                
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_COLORTEMP                                      _CT_USER//_CT_USER
    #define _DEF_P6_MISC_ITEM3                                  _MENU_FUN_OVERCLOCK
   // #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_GAMMA 	
    #define _DEF_OVERCLOCK                                      _ON
    #define _DEF_DP_OVERCLOCK                                   _ON//DP超频
    #define _DEF_HDMI_OVERCLOCK                                 _ON//DP超频

    
    #define _DEF_GAMMA                                          _GAMMA_22
    //#define _DEF_DDCCIStatus								    _OFF
    #define _DEF_H_POS                                          99
    #define _DEF_V_POS                                          6
	#define _DEF_DIGITAL_VOL_MAX								 3400//3500
	#define _DEF_DIGITAL_VOL_CENTER                              2200
	
	
    #define _ECO_MOVIE_BACKLIGHT					100
    #define _ECO_GAME_BACKLIGHT						60
    #define _ECO_TEXT_BACKLIGHT						50
    #define _ECO_FPS_BACKLIGHT                      100
    #define _ECO_RTS_BACKLIGHT                      90
    
    #define _ECO_MOVIE_BLACKLEVEL                   50
    #define _ECO_GAME_BLACKLEVEL                    50
    #define _ECO_TEXT_BLACKLEVEL                    40    
    #define _ECO_FPS_BLACKLEVEL						50
    #define _ECO_RTS_BLACKLEVEL						50

    #define _ECO_MOVIE_CONTRAST						55
    #define _ECO_GAME_CONTRAST						50
    #define _ECO_TEXT_CONTRAST						45
    #define _ECO_FPS_CONTRAST						50
    #define _ECO_RTS_CONTRAST						50
    #define _DEF_IR_PROTOCAL                                    _IR_HHT_NEC
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_0__,_2__,_7__


#elif(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_M315HVR010_FDH200HZ_20210608)
			//FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA  
			
    #define _LOGO_TYPE                                         	_LOGO_NONE
    #define _DEF_BACKLIGHT                                     	50
	//	#define _DEF_OSD_BACKLIGHT								70
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    //#define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_ECO
    //#define _DEF_HOTKEY_UP                                      _MENU_FUN_LED
    //#define _OSD_6_KEY_SUPPROT                                  _ON
		
   // #define _DEF_HOTKEY_LONG									_ON//
    //#define _DEF_MENU_LOCK                                      _ON//
    #define _DEF_P5_RESET_ITEM2    	 	                        _MENU_FUN_LED
    #define _DEF_P5_RESET_ITEM3    	  	                        _MENU_FUN_RESET
		
	#define _DEF_HOTKEY_TIME									_ON //快捷菜单自动关闭
    #define _BACKLIGHT_MAX                                      0x92//0xC7
    #define _BACKLIGHT_DEF_PWM                                  0X6F//0x59//0x62
    #define _BACKLIGHT_MIN                                      30 
					
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_COLORTEMP                                      _CT_USER//_CT_USER
    #define _DEF_P6_MISC_ITEM3                                  _MENU_FUN_OVERCLOCK
	   // #define _DEF_P2_DISPLAY_ITEM4 							  _MENU_FUN_GAMMA	
    #define _DEF_OVERCLOCK                                      _ON
    #define _DEF_DP_OVERCLOCK                                   _ON//DP超频
    #define _DEF_HDMI_OVERCLOCK                                 _ON//DP超频
	
		
   // #define _DEF_GAMMA                                          _GAMMA_22
		//#define _DEF_DDCCIStatus									_OFF
  //  #define _DEF_H_POS                                          99
  //  #define _DEF_V_POS                                          6
	#define _DEF_DIGITAL_VOL_MAX								 3400//3500
	#define _DEF_DIGITAL_VOL_CENTER                              2200
		
		
    #define _ECO_MOVIE_BACKLIGHT					100
    #define _ECO_GAME_BACKLIGHT						60
    #define _ECO_TEXT_BACKLIGHT						50
    #define _ECO_FPS_BACKLIGHT                      100
    #define _ECO_RTS_BACKLIGHT                      90
		
    #define _ECO_MOVIE_BLACKLEVEL                   50
    #define _ECO_GAME_BLACKLEVEL                    50
    #define _ECO_TEXT_BLACKLEVEL                    40    
    #define _ECO_FPS_BLACKLEVEL						50
    #define _ECO_RTS_BLACKLEVEL						50
	
    #define _ECO_MOVIE_CONTRAST						55
    #define _ECO_GAME_CONTRAST						50
    #define _ECO_TEXT_CONTRAST						45
    #define _ECO_FPS_CONTRAST						50
    #define _ECO_RTS_CONTRAST						50
    #define _DEF_IR_PROTOCAL                                    _IR_HHT_NEC
	
 #elif(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH200HZ_20210324)
        //FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA   
    #define _LOGO_TYPE                                           _LOGO_APEX//_LOGO_PREMIER//_LOGO_ODNA//_LOGO_APEX//_LOGO_QNIX1//_LOGO_ODNA
    #define _DEF_BACKLIGHT                                       80
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_ECO
   // #define _DEF_HOTKEY_UP                                      _MENU_FUN_LED
   // #define _OSD_6_KEY_SUPPROT                                  _ON
	#define _DEF_DIGITAL_VOL_MAX								0xE5B//0X151E// 0X3200
	#define _DEF_DIGITAL_VOL_CENTER								0X799//0x0CAB//5413//0X1600
    #define _DEF_HOTKEY_LONG									_ON//
    #define _DEF_MENU_LOCK                                      _ON//
   // #define _DEF_P5_RESET_ITEM2    	 	                        _MENU_FUN_LED
   // #define _DEF_P5_RESET_ITEM3    	  	                        _MENU_FUN_RESET
    
    #define _BACKLIGHT_MAX                                      0x92//0xC7
    #define _BACKLIGHT_DEF_PWM                                 134//123// 0x59//0x62
    #define _BACKLIGHT_MIN                                      30 
                
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_COLORTEMP                                      _CT_USER//_CT_9300
    #define _DEF_P6_MISC_ITEM3                                  _MENU_FUN_OVERCLOCK
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_GAMMA 	
    #define _DEF_OVERCLOCK                                      _ON
    #define _DEF_DP_OVERCLOCK                                   _ON//DP超频
    #define _DEF_HDMI_OVERCLOCK                                 _ON//DP超频

    
    #define _DEF_GAMMA                                          _GAMMA_22
    //#define _DEF_H_POS                                          99
   // #define _DEF_V_POS                                          6
    
    //#define _DEF_IR_PROTOCAL                                    _IR_HHT_DZ_X5_147
       
#elif(Project_ID == ID_CS_HK2785E06_1P1H1U_CSOT_SG2701B01_3_165HZ_20210303)
            //FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA   
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_BACKLIGHT                                       80
    //#define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    //#define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_ECO
        
    #define _BACKLIGHT_MAX                                      0XC0//0xC7
    #define _BACKLIGHT_DEF_PWM                                  0x86
    #define _BACKLIGHT_MIN                                      30 
                    
    #define _DEF_LANGUAGE                                       _ENGLISH
    #define _MPRT_RATIO                                         50
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0xE0  

        
#elif(Project_ID == ID_WCH_HK2561DP1HDMI_BOE_MT236FHM_N10_FHD165HZ_20210106)
        
    #define _LOGO_TYPE                                         _LOGO_NONE// _LOGO_SEVENWIN
    #define _MPRT_RATIO                                         30
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    #define _DEF_BACKLIGHT                                       80

    #define _BACKLIGHT_MAX                                      (0XFF-0x9C)//300MA//     0X80   
    #define _BACKLIGHT_DEF_PWM                                  (0XFF-0xAE) // 240MA  //     0x60
    #define _BACKLIGHT_MIN                                      20
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0xE0        
    #define _DEF_LANGUAGE                                       _CHINESE_S//     _ENGLISH
#elif(Project_ID == ID_XHS_HK2556E02_BOE_MV238QHB_N10_QHD75HZ_EDID_N240QHD_20210109)
    //_LOGO_NONE  _LOGO_MUCAI  _LOGO_DIANJING  _LOGO_BEZEL  _LOGO_JIAMEIWEI  _LOGO_GUANJIE  _LOGO_GJMXJ
    #define _LOGO_TYPE                                          _LOGO_GJMXJ
    #define _MPRT_RATIO                                         35
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    #define _DEF_BACKLIGHT                                       80
    #define _BACKLIGHT_MAX                                      (0xff-0xA8)  //340mA
    #define _BACKLIGHT_DEF_PWM                                  (0XFF-0xBB) 
    #define _BACKLIGHT_MIN                                       20 
/*  #define _BACKLIGHT_MAX                                      (0xff-0xC3)  //280mA
    #define _BACKLIGHT_DEF_PWM                                  (0XFF-0xD0) 
    #define _BACKLIGHT_MIN                                       20
*/
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0xE0        
    #define _DEF_LANGUAGE                                       _CHINESE_S//     _ENGLISH   

   
#elif(Project_ID == ID_XHS_HK2556E02_BOE_MV238QHB_N20_QHD75HZ_EDID_N240QHD_20210111)
    //_LOGO_NONE  _LOGO_MUCAI  _LOGO_DIANJING  _LOGO_BEZEL  _LOGO_JIAMEIWEI  _LOGO_GUANJIE  _LOGO_GJMXJ
    #define _LOGO_TYPE                                          _LOGO_GJMXJ
    #define _MPRT_RATIO                                         35
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    #define _DEF_BACKLIGHT                                       80
        
    #define _BACKLIGHT_MAX                                      (0xff-0xA8)  //340mA
    #define _BACKLIGHT_DEF_PWM                                (0XFF-0xBB) 
    #define _BACKLIGHT_MIN                                       20
    
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0xE0        
    #define _DEF_LANGUAGE                                       _CHINESE_S//     _ENGLISH   
#elif(Project_ID == ID_XHS_2556E02_LG_LM238WQ1_LVDS_QHD75HZ_20210115)

   	#define _LOGO_TYPE                                          _LOGO_NONE//_LOGO_GJMXJ
    #define _MPRT_RATIO                                         35
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    #define _DEF_BACKLIGHT                                       80
        
    #define _BACKLIGHT_MAX                                      (0xff-0xA8)  //340mA
    #define _BACKLIGHT_DEF_PWM                                (0XFF-0xBB) 
    #define _BACKLIGHT_MIN                                       20
    
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0xE0        
    #define _DEF_LANGUAGE                                       _CHINESE_S//     _ENGLISH   
#elif(Project_ID == ID_XHS_HK2556E02_BOE_MV238QHB_N20_QHD75HZ_EDID_N240QHD_20210903)
	
   	#define _LOGO_TYPE                                          _LOGO_NONE//_LOGO_GJMXJ
    #define _MPRT_RATIO                                         35
    #define _DEF_HOTKEY_LEFT                                    _HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    #define _DEF_BACKLIGHT                                       80
			
    #define _BACKLIGHT_MAX                                      (0xff-0xA8)  //340mA
    #define _BACKLIGHT_DEF_PWM                                (0XFF-0xBB) 
    #define _BACKLIGHT_MIN                                       20
		
    #define _MPRT_PWM_MAX                                       0xE0
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0xE0        
    #define _DEF_LANGUAGE                                       _CHINESE_S//     _ENGLISH   
		
    
#elif(Project_ID == ID_XINKEKEJI_2795E04_M280DCA_E3B_20201210)
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_LANGUAGE                                        _CHINESE_S
    #define _OSD_7_KEY_SUPPROT                                  _ON// 7键的开关
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME //_HOT_KEY_LOS_TYPE1
    #define _DEF_HOTKEY_UP                                      _MENU_FUN_DCR

    #if 1
        #define _BACKLIGHT_MAX                                  (0xff-0x74)//520ma         //max 720ma
        #define _BACKLIGHT_DEF_PWM                              (0xff-0x90)//420ma        //max 720ma
    #else
        #define _BACKLIGHT_MAX                                  (0xff-0x56)//520ma         //max 600ma
        #define _BACKLIGHT_DEF_PWM                              (0xff-0x74)//430ma        //max 600ma
    #endif
    
    #define _BACKLIGHT_MIN                                      30//    40mA
    #define _DEF_OSD_DOUBLE                                     _ON



#elif(Project_ID == ID_XINKE_HK2795E04_1P2H1U_LM340WW2_2k144HZ_20201223)
    #define _LOGO_TYPE                                           _LOGO_NONE
    #define _DEF_LANGUAGE                                        _CHINESE_S
    #define _DEF_BACKLIGHT                                       80
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME //_HOT_KEY_LOS_TYPE1

    #define _BACKLIGHT_MAX                                      (0xff)//520ma         //max 720ma
    #define _BACKLIGHT_DEF_PWM                                  (0xff-0x35)//420ma        //max 720ma

    #define _BACKLIGHT_MIN                                      30//    40mA

#elif(Project_ID == ID_GZB_HK2795E04_1P2H1U_SAMSUNG_LSM270DP01_0_EDP2_144HZ_20210126)
    #define _LOGO_TYPE                                          _LOGO_NONE
    #define _DEF_LANGUAGE                                       _CHINESE_S
    #define _DEF_BACKLIGHT                                      80
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _HOT_KEY_LOS_TYPE1
    #define _BACKLIGHT_MAX                                      (0xff-0X7A)//400ma  
    #define _BACKLIGHT_DEF_PWM                                  (0xff-0X87)//420ma 
    #define _BACKLIGHT_MIN                                      20//    40mA

#elif(Project_ID == ID_ZHEHAO_HK2795E041DP2HDMI__M280DCA_UHD60HZ__20201230)

    #define _LOGO_TYPE                                          _LOGO_UNOEROOG
    #define _DEF_BACKLIGHT                                      80
    #define _MPRT_RATIO                                         30
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_ECO
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_AUDOIVOLUME
    #define _BACKLIGHT_MAX                                      (0x85) 
    #define _BACKLIGHT_DEF_PWM                                  (0x7a)
    #define _BACKLIGHT_MIN                                      20 
    #define _MPRT_PWM_MAX                                       (0xff)
    #define _MPRT_PWM_DEF                                       0xE0
    #define _MPRT_PWM_MIN                                       0x60
    #define _DEF_LANGUAGE                                       _KOREAN
    #define _DEF_HDR_MODE                                       _HDR10_MODE_AUTO
    #define _DEF_FACTORY_MODE                                   _OFF
    #define _DEF_OSD_DISP_NOSIGNAL_MSG_TIME                     10

    #define _DEF_DIGITAL_VOL_MAX                                0X1500
    #define _DEF_DIGITAL_VOL_CENTER                             0XE70
    #define _DEF_DIGITAL_VOL_MIN                                0

#elif(Project_ID == ID_SY_HK2795E04_1P2H1U_AUO_M270KCJ_K7B_QHD165HZ_20210329)
	#define _LOGO_TYPE								            _LOGO_NONE//
	#define _DEF_LANGUAGE										_ENGLISH//
	#define _MPRT_RATIO 										30
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT//  
	#define _DEF_HOTKEY_RIGHT                				    _HOT_KEY_LOS_TYPE1
		
	#define _BACKLIGHT_MAX			                            (0xff-0x80)//
	#define _BACKLIGHT_DEF_PWM	                                (0xff-0x9f)//
    #define _BACKLIGHT_MIN			                            20//		12//	10

	#define _MPRT_PWM_MAX										(0xE0)
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60

#elif(Project_ID == ID_XHS_2795_M270KCJ_K7B_20191127)
	#define _LOGO_TYPE								            _LOGO_BEZEL//_LOGO_CERBERUS
	#define _DEF_LANGUAGE										_ENGLISH// _CHINESE_S
	
    #define _DEF_GAME_MODE								        _ON//DP,HDMI游戏模式
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT//    _MENU_FUN_ECO
	#define _DEF_HOTKEY_RIGHT                				    _HOT_KEY_LOS_TYPE1
    
	#define _BACKLIGHT_MAX			                            255//157//对应 380 MA
	#define _BACKLIGHT_DEF_PWM	                                (0xff-0x90)//148//对应 360MA
    #define _BACKLIGHT_MIN			                            20//		12//	10
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_GAMMA 								//预留gamma位置 
    
    #define _DEF_P5_RESET_ITEM2                                 _MENU_FUN_LED
    #define _DEF_P5_RESET_ITEM3    	 	                        _MENU_FUN_RESET
    
    #define _DEF_OD_60HZ							            0x16
    #define _DEF_OD_75HZ							            0x20
    #define _DEF_OD_100HZ							            0x25
    #define _DEF_OD_144HZ							            0x30
    #define _DEF_OD_165HZ							            0x30
    #define _DEF_OD_240HZ							            0x30

/*    #define _DEF_P1_PICTURE_ITEM0                               _MENU_FUN_BACKLIGHT
    #define _DEF_P1_PICTURE_ITEM1                               _MENU_FUN_CONTRAST
    #define _DEF_P1_PICTURE_ITEM2                               _MENU_FUN_DCC
    #define _DEF_P1_PICTURE_ITEM3                               _MENU_FUN_ECO   
    #define _DEF_P1_PICTURE_ITEM4                               _MENU_FUN_DCR 
    #define _DEF_P1_PICTURE_ITEM5                               _MENU_FUN_SHARPNESS 
    #define _DEF_P2_DISPLAY_ITEM0                               _MENU_FUN_VGA_HPOSITON
    #define _DEF_P2_DISPLAY_ITEM1                               _MENU_FUN_VGA_VPOSITON
    #define _DEF_P2_DISPLAY_ITEM2                               _MENU_FUN_VGA_CLK
    #define _DEF_P2_DISPLAY_ITEM3                               _MENU_FUN_VGA_PHASE
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_ASPECT
    #define _DEF_P2_DISPLAY_ITEM5                               _MENU_FUN_LED
    #define _DEF_P3_COLORTEMP_ITEM0                             _MENU_FUN_COLORTEMP
    #define _DEF_P3_COLORTEMP_ITEM1                             _MENU_FUN_R
    #define _DEF_P3_COLORTEMP_ITEM2                             _MENU_FUN_G
    #define _DEF_P3_COLORTEMP_ITEM3                             _MENU_FUN_B
    #define _DEF_P3_COLORTEMP_ITEM4                             _MENU_FUN_SATURATION
    #define _DEF_P3_COLORTEMP_ITEM5                             _MENU_NULL
    #define _DEF_P4_OSDSETTING_ITEM0                            _MENU_FUN_LANGUAGE
    #define _DEF_P4_OSDSETTING_ITEM1                            _MENU_FUN_OSD_HPOSITON
    #define _DEF_P4_OSDSETTING_ITEM2                            _MENU_FUN_OSD_VPOSITON
    #define _DEF_P4_OSDSETTING_ITEM3                            _MENU_FUN_OSD_TIME
    #define _DEF_P4_OSDSETTING_ITEM4                            _MENU_FUN_OSD_TRANS
    #define _DEF_P4_OSDSETTING_ITEM5                            _MENU_NULL
    #define _DEF_P5_RESET_ITEM0                                 _MENU_FUN_AUTO_ADJUST
    #define _DEF_P5_RESET_ITEM1                                 _MENU_FUN_AUTO_COLOR
    #define _DEF_P5_RESET_ITEM2                                 _MENU_FUN_RESET
    #define _DEF_P5_RESET_ITEM3                                 _MENU_FUN_HDR
    #define _DEF_P5_RESET_ITEM4                                 _MENU_FUN_MPRT
    #define _DEF_P5_RESET_ITEM5                                 _MENU_FUN_GAMMA
    #define _DEF_P6_MISC_ITEM0                                 _MENU_FUN_SIGNAL
    #define _DEF_P6_MISC_ITEM1                                 _MENU_FUN_LOWBLUE
    #define _DEF_P6_MISC_ITEM2                                 _MENU_FUN_AUDOIVOLUME
    #define _DEF_P6_MISC_ITEM3                                 _MENU_FUN_FREESYNC 
    #define _DEF_P6_MISC_ITEM4                                 _MENU_FUN_OD//  _MENU_NULL
    #define _DEF_P6_MISC_ITEM5                                 _MENU_NULL//  _MENU_FUN_SATURATION// 
*/
			
#elif(Project_ID == ID_XHS_HK2795E04_LG_LM270WR2_EDP_UHD_60HZ_20201026)
    
    #define _DEF_HDR_MODE    					                _HDR10_MODE_AUTO
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT//    _MENU_FUN_ECO
	#define _DEF_HOTKEY_RIGHT                				    _HOT_KEY_LOS_TYPE2
                                                                        
    #define _LOGO_TYPE								    		_LOGO_NONE// _LOGO_MUCAI//_LOGO_JIAMEIWEI
	#define _DEF_LANGUAGE									    _CHINESE_S
	#define _OSD_GAMMA_SUPPORT					     	        _ON//菜单是否带色域
                
    #define _BACKLIGHT_MAX			                            0X90//157//对应 380 MA
	#define _BACKLIGHT_DEF_PWM		                            0x60//148//对应 360MA
	#define _BACKLIGHT_MIN			                            20//		12//	10
	#define _DEF_P5_RESET_ITEM2                                 _MENU_FUN_LED
    #define _DEF_P5_RESET_ITEM3    	 	                        _MENU_FUN_RESET
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_GAMMA
    #define _DEF_P2_DISPLAY_ITEM5                               _MENU_FUN_COLORGAMUT
/*    
    #define _DEF_P1_PICTURE_ITEM0                               _MENU_FUN_BACKLIGHT
    #define _DEF_P1_PICTURE_ITEM1                               _MENU_FUN_CONTRAST
    #define _DEF_P1_PICTURE_ITEM2                               _MENU_FUN_DCC
    #define _DEF_P1_PICTURE_ITEM3                               _MENU_FUN_ECO   
    #define _DEF_P1_PICTURE_ITEM4                               _MENU_FUN_DCR 
    #define _DEF_P1_PICTURE_ITEM5                               _MENU_FUN_SHARPNESS 

	#define _DEF_P2_DISPLAY_ITEM0                               _MENU_FUN_SATURATION
	#define _DEF_P2_DISPLAY_ITEM1                               _MENU_FUN_LOWBLUE  
	#define _DEF_P2_DISPLAY_ITEM2                               _MENU_FUN_COLORGAMUT  
	#define _DEF_P2_DISPLAY_ITEM3                               _MENU_FUN_GAMMA 
	#define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_HDR  
    #define _DEF_P2_DISPLAY_ITEM5                               _MENU_NULL

    #define _DEF_P3_COLORTEMP_ITEM0                             _MENU_FUN_COLORTEMP
    #define _DEF_P3_COLORTEMP_ITEM1                             _MENU_FUN_R
    #define _DEF_P3_COLORTEMP_ITEM2                             _MENU_FUN_G
    #define _DEF_P3_COLORTEMP_ITEM3                             _MENU_FUN_B
    #define _DEF_P3_COLORTEMP_ITEM4                             _MENU_NULL
    #define _DEF_P3_COLORTEMP_ITEM5                             _MENU_NULL
    
    #define _DEF_P4_OSDSETTING_ITEM0                             _MENU_FUN_LANGUAGE
    #define _DEF_P4_OSDSETTING_ITEM1                             _MENU_FUN_OSD_HPOSITON
    #define _DEF_P4_OSDSETTING_ITEM2                             _MENU_FUN_OSD_VPOSITON
    #define _DEF_P4_OSDSETTING_ITEM3                             _MENU_FUN_OSD_TIME
    #define _DEF_P4_OSDSETTING_ITEM4                             _MENU_FUN_OSD_TRANS
    #define _DEF_P4_OSDSETTING_ITEM5                             _MENU_FUN_ASPECT
    
    #define _DEF_P5_RESET_ITEM0                                 _MENU_FUN_LED
    #define _DEF_P5_RESET_ITEM1                                 _MENU_FUN_RESET
    #define _DEF_P5_RESET_ITEM2                                 _MENU_FUN_AUDOIVOLUME
    #define _DEF_P5_RESET_ITEM3                                 _MENU_FUN_RESET
    #define _DEF_P5_RESET_ITEM4                                 _MENU_NULL
    #define _DEF_P5_RESET_ITEM5                                 _MENU_NULL

    #define _DEF_P6_MISC_ITEM0                                  _MENU_FUN_SIGNAL
    #define _DEF_P6_MISC_ITEM1                                  _MENU_FUN_AUDOIVOLUME 
    #define _DEF_P6_MISC_ITEM2                                  _MENU_FUN_OD
    #define _DEF_P6_MISC_ITEM3                                  _MENU_FUN_FREESYNC 
    #define _DEF_P6_MISC_ITEM4                                  _MENU_NULL
    #define _DEF_P6_MISC_ITEM5                                  _MENU_NULL                                        
*/

#elif(Project_ID == ID_XHS_HK2795E04_1P2H1U_AUO_M250HAN01_3_20200921)
    
    
    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _DEF_DP_OVERCLOCK								    _ON	
    #define _LOGO_TYPE											_LOGO_MUCAI// _LOGO_NONE
	#define _DEF_LANGUAGE									    _CHINESE_S
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT//    _MENU_FUN_ECO
	#define _DEF_HOTKEY_RIGHT                				    _HOT_KEY_LOS_TYPE1
                
    
	#define _BACKLIGHT_MAX			                            (0xff-0xA0)//对应 270 MA
    #define _BACKLIGHT_DEF_PWM	                                (0xff-0xb0)//对应 
	#define _BACKLIGHT_MIN			                            8//		12//	10
    
	#define _MPRT_PWM_MAX                                       0x80
	#define _MPRT_PWM_DEF                                       0x68
	#define _MPRT_PWM_MIN                                       0x30

    #define _DEF_P5_RESET_ITEM2                                 _MENU_FUN_LED
    #define _DEF_P5_RESET_ITEM3    	 	                        _MENU_FUN_RESET
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_GAMMA

#elif(Project_ID == ID_XHS_HK2795E04_1P2H1U_AUO_M250HTN01_9_20210226)
        
        
    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _DEF_DP_OVERCLOCK								    _ON	
    #define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_LANGUAGE									    _CHINESE_S
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT//    _MENU_FUN_ECO
	#define _DEF_HOTKEY_RIGHT                				    _HOT_KEY_LOS_TYPE1
                    
        
	#define _BACKLIGHT_MAX			                            (0xff-0xA0)//对应 270 MA
    #define _BACKLIGHT_DEF_PWM	                                (0xff-0xb0)//对应 
	#define _BACKLIGHT_MIN			                            8//		12//	10
        
	#define _MPRT_PWM_MAX                                       0x80
	#define _MPRT_PWM_DEF                                       0x68
	#define _MPRT_PWM_MIN                                       0x30
    
    #define _DEF_P5_RESET_ITEM2                                 _MENU_FUN_LED
    #define _DEF_P5_RESET_ITEM3    	 	                        _MENU_FUN_RESET
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_GAMMA

    //#define _DEF_P2_DISPLAY_ITEM5                               _MENU_FUN_COLORGAMUT
/*
    #define _DEF_P1_PICTURE_ITEM2	  _MENU_FUN_DCC
        

#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2     _MENU_FUN_DCC
#define _DEF_P1_PICTURE_ITEM3    _MENU_FUN_ECO   
#define _DEF_P1_PICTURE_ITEM4     _MENU_FUN_DCR 
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_SHARPNESS 
#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5      _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_FUN_SATURATION
#define _DEF_P3_COLORTEMP_ITEM5	         _MENU_FUN_LED
    
#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM4    	  	 _MENU_FUN_MPRT
#define _DEF_P5_RESET_ITEM5    	  	 _MENU_FUN_GAMMA
        
    
#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1			_MENU_FUN_AUDOIVOLUME 
#define _DEF_P6_MISC_ITEM2			_MENU_FUN_FREESYNC	
#define _DEF_P6_MISC_ITEM3			_MENU_FUN_OD   
#define _DEF_P6_MISC_ITEM4		  _MENU_FUN_OVERCLOCK 
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
  */          
#elif(Project_ID == ID_GDL_HK2795E04_1P2H1U_AUO_M250HTN01_7_20210917)
				
				
    //#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    //#define _DEF_DP_OVERCLOCK								    _ON	
    #define _LOGO_TYPE											_LOGO_DUAM//_LOGO_EXAN//_LOGO_DUAM//_LOGO_NONE
	#define _DEF_LANGUAGE									    _CHINESE_S
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT//    _MENU_FUN_ECO
	#define _DEF_HOTKEY_RIGHT                				    _HOT_KEY_LOS_TYPE1
							
				
	#define _BACKLIGHT_MAX			                            (0xff-0xA0)//对应 270 MA
    #define _BACKLIGHT_DEF_PWM	                                (0xff-0xb0)//对应 
	#define _BACKLIGHT_MIN			                            8//		12//	10
				
	#define _MPRT_PWM_MAX                                       0x80
	#define _MPRT_PWM_DEF                                       0x68
	#define _MPRT_PWM_MIN                                       0x30
			
	#define _DEF_COLORTEMP										_CT_USER
  //  #define _DEF_P5_RESET_ITEM2                                 _MENU_FUN_LED
   // #define _DEF_P5_RESET_ITEM3    	 	                        _MENU_FUN_RESET
  //  #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_GAMMA
	
	//#define _DEF_P6_MISC_ITEM3									_MENU_FUN_OVERCLOCK 
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_FUN_OVERCLOCK//_MENU_NULL 
	#define _DEF_OVERCLOCK										_OFF
	#define _DEF_DP_OVERCLOCK									_ON//DP超频
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_0__,_9__,_2__,_6__

#elif(Project_ID == ID_2513E02_CS_LOGO_20210128)
    
    #define _BACKLIGHT_MAX                                       (0XFF) //360MA
    
    #define _BACKLIGHT_DEF_PWM                                  (0XC9)//300MA
    
    #define _BACKLIGHT_MIN                                      20 
    #define _DEF_BACKLIGHT                                      80
    
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _MENU_FUN_BACKLIGHT
    //#define _DEF_HOTKEY_UP                                        _MENU_FUN_CONTRAST
    //#define _DEF_HOTKEY_DOWN                                  _MENU_FUN_CONTRAST
    
    #define _OSD_7_KEY_SUPPROT                                   _ON// 7键的开关
    
    #define _DEF_P6_MISC_ITEM1                               _MENU_FUN_ASPECT//_MENU_FUN_MAXBACKLIGHT  
    #define _DEF_P6_MISC_ITEM2                              _MENU_FUN_SHARPNESS// _MENU_FUN_GAMMA
    
    #define _DEF_P2_DISPLAY_ITEM4                             _MENU_NULL 
    #define _DEF_P2_DISPLAY_ITEM5                             _MENU_NULL  
    
    #define _DEF_LANGUAGE                                        _ENGLISH
    #define _DEF_FACTORY_MODE                                    _OFF
        //#define _DEF_GAMMA                                             _GAMMA_OFF
        //#define _DEF_DDCCIStatus                                     _ON
    
    #define _DEF_COLORTEMP                                       _CT_9300//_CT_USER
    #define _CT_7500_SUPPRT										_ON  //色温是否带7500
    #define _DEF_FACTORY_EDIDINFO                               _ON
    #define _ECO_MOVIE_BACKLIGHT                    100
    #define _ECO_GAME_BACKLIGHT                     60
    #define _ECO_TEXT_BACKLIGHT                     50
    #define _ECO_FPS_BACKLIGHT                      100
    #define _ECO_RTS_BACKLIGHT                      85
    
    #define _ECO_MOVIE_CONTRAST                     55
    #define _ECO_GAME_CONTRAST                      50
    #define _ECO_TEXT_CONTRAST                      45
    #define _ECO_FPS_CONTRAST                       65
    #define _ECO_RTS_CONTRAST                       60
    
    #define _ECO_MOVIE_BLACKLEVEL                   50
    #define _ECO_GAME_BLACKLEVEL                    50
    #define _ECO_TEXT_BLACKLEVEL                    50
    #define _ECO_FPS_BLACKLEVEL                     50
    #define _ECO_RTS_BLACKLEVEL                     50

#elif(Project_ID == ID_CJTV_2513_MV238FHB_N30_20201013_CAB)
    #define _LOGO_TYPE                                  _LOGO_MOOB//_LOGO_NONE//_LOGO_G_PLUS
    #define _DEF_LANGUAGE                                       _PORTUGUESE// _ENGLISH
       
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_ECO
    #define _DEF_HOTKEY_RIGHT                                   _HOT_KEY_LOS_TYPE1
   
    #define _BACKLIGHT_MAX                    (0xFF-0X7C)// 300MA (0XFF-0X8C) //240MA //(0xB0)//360mA
       
    #define _BACKLIGHT_DEF_PWM               (0XFF-0X91) //240MA (0XFF-0xA0)// 200MA //(0x8F)// 300MA
       
    #define _BACKLIGHT_MIN                              20//    40mA
   
    #define _DEF_BACKLIGHT                           80
    #define _DEF_BRIGHTNESS                                      30


#elif(Project_ID == ID_CJTV_2513_MV238FHB_N30_20201013_FAB)
    #define _LOGO_TYPE                                  _LOGO_MOOB//_LOGO_NONE//_LOGO_G_PLUS
    #define _DEF_LANGUAGE                                       _PORTUGUESE// _ENGLISH
       
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_ECO
    #define _DEF_HOTKEY_RIGHT                                   _HOT_KEY_LOS_TYPE1
    #define _BACKLIGHT_MAX                    (0XFF-0X8C) //240MA //(0xB0)//360mA
    #define _BACKLIGHT_DEF_PWM               (0XFF-0xA0)// 200MA //(0x8F)// 300MA
    #define _BACKLIGHT_MIN                              20//    40mA
    #define _DEF_BACKLIGHT                           80
    
#elif(Project_ID == ID_CHANGJIA_HK2513E01_1V1H_M238HVN01_2_FHD75HZ_20200122)
    #define _LOGO_TYPE                                  _LOGO_NONE//_LOGO_G_PLUS
    #define _DEF_LANGUAGE                               _ENGLISH
    #define _DEF_BACKLIGHT                              80
    #define _DEF_HOTKEY_LEFT                            _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                           _HOT_KEY_LOS_TYPE1
          
    #define _BACKLIGHT_MAX                              (0XFF-0X8C) //240MA //(0xB0)//360mA
    #define _BACKLIGHT_DEF_PWM                          (0XFF-0xA0)// 200MA //(0x8F)// 300MA
    #define _BACKLIGHT_MIN                              20//    40mA
#elif(Project_ID == ID_HUIXIONG_2513_M240UAN020_20210329)
    #define _LOGO_TYPE                                  _LOGO_NONE//_LOGO_G_PLUS
    #define _DEF_LANGUAGE                               _ENGLISH
    #define _DEF_BACKLIGHT                              80
    #define _DEF_HOTKEY_LEFT                            _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                           _HOT_KEY_LOS_TYPE1
			  
    #define _BACKLIGHT_MAX                              (0XFF-0X8C) //240MA //(0xB0)//360mA
    #define _BACKLIGHT_DEF_PWM                          (0XFF-0xA0)// 200MA //(0x8F)// 300MA
    #define _BACKLIGHT_MIN                              20//    40mA

#elif(Project_ID == ID_MXDZ_HK2513E02_1V1H_CSOT_SG2701B01_2_LVDS_FHD75HZ_20210107)

    #define _BACKLIGHT_MAX                                      (0XFF-0X4B) //400MA
    #define _BACKLIGHT_DEF_PWM                                  (0XFF-0X5C)//360MA
    #define _BACKLIGHT_MIN                                      20 

	#define _ENABLE_VGA_AUTO_ADJUST								_ON
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_ECO 
    #define _DEF_HOTKEY_RIGHT                                    _MENU_FUN_AUDOIVOLUME
    //#define _OSD_5_KEY_SUPPROT                                     _ON// 5键的开关
    #define _DEF_LANGUAGE                                        _ENGLISH
    
#elif(Project_ID == ID_MXDZ_HK2513E02_1V1H_INL_M236HJJP02_LVDS_FHD_60HZ_20210108)
    #define _BACKLIGHT_MAX                                      (0XFF-0X5C) //360MA
    #define _BACKLIGHT_DEF_PWM                                  (0XFF-0X68)//330MA
    #define _BACKLIGHT_MIN                                      20 
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_ECO 
    #define _DEF_HOTKEY_RIGHT                                    _MENU_FUN_AUDOIVOLUME
    //#define _OSD_5_KEY_SUPPROT                                     _ON// 5键的开关
    #define _DEF_LANGUAGE                                        _ENGLISH
	#define _ENABLE_VGA_AUTO_ADJUST								_ON


#elif(Project_ID == ID_XHS_2556E03_PANDA_LC238LF_LVDS_FHD_165HZ_20201113)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _LOGO_TYPE									_LOGO_GJMXJ//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S
    #define _OSD_5_KEY_SUPPROT									_OFF// 5 向摇杆键的开关
    #define _OSD_MPRT_SUPPORT					     	    _ON//  菜单是否带 MPRT
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						    _HOT_KEY_LOS_TYPE1
			
    #define _DEF_DIGITAL_VOL_MAX                                 0x1C28
    #define _DEF_DIGITAL_VOL_CENTER                              0X10E4
    #define _DEF_DIGITAL_VOL_MIN                                 0

    #define _BACKLIGHT_MAX										(0XFF-0x94)  //320mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0xA4) 
    #define _BACKLIGHT_MIN										 20

/*
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
*/			 




//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20


//MPRT

	

#elif(Project_ID == ID_XHS_2556E03_CSOT_SG2701B01_3_165HZ_20201113)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _LOGO_TYPE									_LOGO_GUANJIE//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						    _HOT_KEY_LOS_TYPE1
			
    #define _BACKLIGHT_MAX										(0XFF-0x94)  //320mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0xA4) 
    #define _BACKLIGHT_MIN										 20

//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20

/*
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 




//MPRT

#define _PWM_MPRT          0x80//  0xff
	
*/
#elif(Project_ID == ID_XHS_2556E03_MT236FHMN10_LVDS_FHD_LOGO_MUCAI)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _LOGO_TYPE									_LOGO_MUCAI//_LOGO_BEZEL//_LOGO_MUCAI//_LOGO_DIANJING//_LOGO_MUCAI//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						    _HOT_KEY_LOS_TYPE1

    #define _BACKLIGHT_MAX										(0XFF-0xAE)  //240mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0xbe) 
    #define _BACKLIGHT_MIN										 20

//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20

/*
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 



//MPRT

#define _PWM_MPRT          0x80//  0xff*/


#elif(Project_ID == ID_XHS_HK2556E02_1P1H_MV238FHB_NG0_FHD165HZ_EDID_N2488HZ_20210222)
//_LOGO_NONE  _LOGO_MUCAI  _LOGO_DIANJING  _LOGO_BEZEL  _LOGO_JIAMEIWEI  _LOGO_GUANJIE  _LOGO_GJMXJ
    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _LOGO_TYPE							                _LOGO_GJMXJ
    #define _DEF_LANGUAGE									    _CHINESE_S//_CHINESE_S

    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						            _HOT_KEY_LOS_TYPE1
			
    #define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
    #define _BACKLIGHT_DEF_PWM							        (0XFF-0xB1)
    #define _BACKLIGHT_MIN									    20
    #define _MPRT_RATIO                                         40

    #define _MPRT_PWM_MAX                                       (0xE0)
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60
#elif(Project_ID == ID_XHS_HK2556E02_1P1H_M238HCA_L7Z_FHD165HZ_EDID_N2488HZ_20210410)
	//_LOGO_NONE  _LOGO_MUCAI  _LOGO_DIANJING  _LOGO_BEZEL	_LOGO_JIAMEIWEI  _LOGO_GUANJIE	_LOGO_GJMXJ
    #define _LOGO_TYPE							               _LOGO_MUCAI
    #define _DEF_LANGUAGE									    _CHINESE_S//_CHINESE_S
	
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						            _HOT_KEY_LOS_TYPE1
				
    #define _BACKLIGHT_MAX										(0XFF-0x84)
    #define _BACKLIGHT_DEF_PWM							        (0XFF-0x95)
    #define _BACKLIGHT_MIN									    20
    #define _MPRT_RATIO                                         40
	
    #define _MPRT_PWM_MAX                                       (0xE0)
    #define _MPRT_PWM_DEF                                       0xC0
    #define _MPRT_PWM_MIN                                       0x60
#elif(Project_ID == ID_XHS_2556E02_AUO_M240HW01_V8_LVDS_FHD_144HZ_20210115)
	//使用logo _LOGO_NONE _LOGO_MUCAI _LOGO_DIANJING _LOGO_JIAMEIWEI _LOGO_BEZEL
#define _LOGO_TYPE											_LOGO_JIAMEIWEI// _LOGO_MUCAI
#define _DEF_BACKLIGHT                                       80
				
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
			
#define _BACKLIGHT_MAX 						 				(0XFF-0XB0)//(0XFF-0X58) 
				
#define _BACKLIGHT_DEF_PWM 								    (0XFF-0XB8)//(0XFF-0X90)
				
#define _BACKLIGHT_MIN								        20
#define _MPRT_RATIO 								         60
	
#define _MPRT_PWM_MAX          								(0XFF-0X9C)
	
#define _MPRT_PWM_DEF         								 (0XFF-0X9C)
	
#define _MPRT_PWM_MIN          								(0XFF-0X9C)
		
#define _DEF_LANGUAGE										_CHINESE_S
#define	_OSD_BLACK_WHITE_TYPE								_ON
	
#define _DEF_COLORTEMP    									_CT_6500
	
#define _DEF_P6_MISC_ITEM2      	 						_MENU_FUN_MPRT
#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL
	//#define _DEF_OSD_OVERCLOCK									_ON

#elif(Project_ID == ID_XHS_2556E03_MT236FHMN10_LVDS_FHD_LOGO_BEZEL)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _LOGO_TYPE									_LOGO_BEZEL//_LOGO_BEZEL//_LOGO_MUCAI//_LOGO_DIANJING//_LOGO_MUCAI//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						    _HOT_KEY_LOS_TYPE1
    #define _BACKLIGHT_MAX										(0XFF-0xAE)  //240mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0xbe) 
    #define _BACKLIGHT_MIN										 20

//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20


/*
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 


//MPRT

#define _PWM_MPRT          0x80//  0xff
*/
#elif(Project_ID == ID_XHS_2556E03_MT236FHMN10_LVDS_FHD_LOGO_DIANJING)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _LOGO_TYPE									_LOGO_DIANJING//_LOGO_BEZEL//_LOGO_MUCAI//_LOGO_DIANJING//_LOGO_MUCAI//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S
    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						    _HOT_KEY_LOS_TYPE1

    #define _BACKLIGHT_MAX										(0XFF-0xAE)  //240mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0xbe) 
    #define _BACKLIGHT_MIN										 20
/*


#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 


//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20


//MPRT

#define _PWM_MPRT          0x80//  0xff
*/
#elif(Project_ID == ID_XHS_2556E03_MT236FHMN10_LVDS_FHD_LOGO_JIAMEIWEI)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _LOGO_TYPE									_LOGO_JIAMEIWEI//_LOGO_BEZEL//_LOGO_MUCAI//_LOGO_DIANJING//_LOGO_MUCAI//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S

    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						    _HOT_KEY_LOS_TYPE1

    #define _BACKLIGHT_MAX										(0XFF-0xAE)  //240mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0xbe) 
    #define _BACKLIGHT_MIN										 20

//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20


/*
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 

//MPRT

#define _PWM_MPRT          0x80//  0xff
*/

#elif(Project_ID == ID_XHS_2556E02_PANDA_M270HCA_L7B_LVDS_FHD_165HZ_20201010)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _DEF_BACKLIGHT                                      50

    #define _LOGO_TYPE									        _LOGO_MUCAI//_LOGO_DIANJING//_LOGO_MUCAI//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S

    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						            _HOT_KEY_LOS_TYPE1

    #define _BACKLIGHT_MAX										(0XFF-0x00)  //600mA
    #define _BACKLIGHT_DEF_PWM							        (0XFF-0x6E) //480mA
    #define _BACKLIGHT_MIN									    20
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_COLORGAMUT

//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20

/*

#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_COLORGAMUT
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 



//MPRT

#define _PWM_MPRT          0x80//  0xff
*/	
#elif(Project_ID == ID_XHS_2556E02_PANDA_M270HCA_L7B_LVDS_FHD_165HZ_20201102)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _DEF_BACKLIGHT                                      50

    #define _LOGO_TYPE									        _LOGO_CERBERUS//_LOGO_DIANJING//_LOGO_MUCAI//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE								        _CHINESE_S//_CHINESE_S
    #define _DEF_P2_DISPLAY_ITEM4                               _MENU_FUN_COLORGAMUT

    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						            _HOT_KEY_LOS_TYPE1

    #define _BACKLIGHT_MAX										(0XFF-0x00)  //600mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0x6E) //480mA
    #define _BACKLIGHT_MIN										 20

//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20



/*
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_COLORGAMUT
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 


//MPRT

#define _PWM_MPRT          0x80//  0xff
*/	
#elif(Project_ID == ID_XHS_2556E02_PANDA_M270HCA_L7B_LVDS_FHD_165HZ_20201029)

    #define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
    #define _DEF_BACKLIGHT                                      50

    #define _LOGO_TYPE									_LOGO_MUCAI//_LOGO_DIANJING//_LOGO_MUCAI//_LOGO_DIANJING//	_LOGO_MUCAI//	 _LOGO_JIAMEIWEI
    #define _DEF_LANGUAGE										 _CHINESE_S//_CHINESE_S

    #define _DEF_HOTKEY_LEFT                 				    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT						    _HOT_KEY_LOS_TYPE1
    #define _DEF_P2_DISPLAY_ITEM4                           _MENU_FUN_COLORGAMUT
			
    #define _BACKLIGHT_MAX										(0XFF-0x00)  //600mA
    #define _BACKLIGHT_DEF_PWM							      (0XFF-0x6E) //480mA
    #define _BACKLIGHT_MIN										 20

//#define _BACKLIGHT_MAX										(0XFF-0xA1)//270MA
//#define _BACKLIGHT_DEF_PWM							       (0XFF-0xB1)
//#define _BACKLIGHT_MIN										 20

/*
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4				_MENU_FUN_MPRT				
#define _DEF_P1_PICTURE_ITEM5     _MENU_FUN_LED                                             



#define _DEF_P2_DISPLAY_ITEM0                                              _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_ENERGR_SAVING
#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	

//page5
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_COLORGAMUT
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL



#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM3         _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4          _MENU_FUN_AUDOIVOLUME 
			 



//MPRT

#define _PWM_MPRT          0x80//  0xff
*/
#elif(Project_ID == ID_MXDZ_HK2556E02_1P1H_SG2701B01_5_FHD165HZ_20210413)
		
	#define _LOGO_TYPE											 _LOGO_NONE
	#define _MPRT_RATIO 								        30
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
			
	#define _DEF_BACKLIGHT										80
	#define _BACKLIGHT_MAX									   (0xff-0x80)
	#define _BACKLIGHT_DEF_PWM								  (0xff-0X92 )
	#define _BACKLIGHT_MIN								        20 
	
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
			
	#define _DEF_LANGUAGE										_CHINESE_S
	#define _DEF_COLORTEMP    					 			    _CT_6500
#elif(Project_ID == ID_MXDZ_HK2556E02_1P1H_LSM315HP04_FHD165HZ_20210426)
			
	#define _LOGO_TYPE											 _LOGO_NONE
	#define _MPRT_RATIO 								        30
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIMUTE
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
				
	#define _DEF_BACKLIGHT										80
	#define _BACKLIGHT_MAX									   (0xff)
	#define _BACKLIGHT_DEF_PWM								  	(0xff-0X40 )
	#define _BACKLIGHT_MIN								        20 
		
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
				
	#define _DEF_LANGUAGE										_CHINESE_S
	#define _DEF_COLORTEMP    					 			    _CT_6500

#elif(Project_ID == ID_KANGJIA_HK2513AR_1V1H_PN238CT0214_FD75HZ_20210415)
    #define _LOGO_TYPE                                  		_LOGO_NONE//_LOGO_G_PLUS
    #define _DEF_LANGUAGE                               		_CHINESE_S//_RUSSIAN
    #define _DEF_BACKLIGHT                              		80
    #define _DEF_HOTKEY_LEFT                           			_MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                           		_HOT_KEY_LOS_TYPE1
					  
	#define _BACKLIGHT_MAX 						 				(0XFF - 0X54 ) //360MA
	#define _BACKLIGHT_DEF_PWM 									(0XFF - 0X70)//300MA
	#define _BACKLIGHT_MIN										20  
	   
		

#elif(Project_ID == ID_DATONG_HK2513E02_1V1H_M195FGE_L20_1600_900_60HZ_20210417)
    #define _LOGO_TYPE                                  _LOGO_NONE//_LOGO_ASTEX
	#define _DEF_BACKLIGHT                                       80
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	#define _BACKLIGHT_MAX 						 				(0XFF - 0X58 ) //360MA
	#define _BACKLIGHT_DEF_PWM 									(0XFF - 0X70)//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										 _JAPANESE
	#define _DEF_COLORTEMP    									 _CT_6500
	//#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
	
#elif(Project_ID == ID_DR_HK2795E04_1P2H_BOE_MV270FHM_N22_FHD144HZ_20210419)
	
	#define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_BACKLIGHT                                      80
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	#define _DEF_LANGUAGE										_CHINESE_S
	#define _BACKLIGHT_MAX							   			(0xff-0x85)//360MA          168//  500 MA
	#define _BACKLIGHT_DEF_PWM									(0xff-0x99)//300MA   158//	  255//475MA	
	#define _BACKLIGHT_MIN								       	36//  100MA
	
#elif(Project_ID == ID_DR_HK2795E04_1P2H_BOE_MV270QHM_NF1_QHD165HZ_20210419)
		
	#define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_BACKLIGHT                                      80
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	#define _DEF_LANGUAGE										_CHINESE_S
	#define _BACKLIGHT_MAX							   			(0xff-0x85)//360MA          168//  500 MA
	#define _BACKLIGHT_DEF_PWM									(0xff-0x99)//300MA   158//	  255//475MA	
	#define _BACKLIGHT_MIN								       	36//  100MA
#elif(Project_ID == ID_GZB_HK2795E04_1P2H1U_MV270QUM_N30_20210419)
    #define _LOGO_TYPE                                          _LOGO_NONE
	#define _DEF_GAME_MODE										_ON
	#define _DEF_OSD_DOUBLE                 				    _ON
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_FUN_OVERCLOCK 
    #define _DEF_LANGUAGE                                       _CHINESE_S
    #define _DEF_BACKLIGHT                                      80
    #define _DEF_HOTKEY_LEFT                                    _MENU_FUN_BACKLIGHT
    #define _DEF_HOTKEY_RIGHT                                   _HOT_KEY_LOS_TYPE1
    #define _BACKLIGHT_MAX                                      (0xff-0X8E)//340MA
    #define _BACKLIGHT_DEF_PWM                                  (0xff-0XA0)//290MA
    #define _BACKLIGHT_MIN                                      20//    40mA
#elif(Project_ID ==ID_SONGREN_HK2513E01_1V1H_SG2381B01_20210129)
   #define _LOGO_TYPE 								              _LOGO_SHUJIE//  _LOGO_NONE
   #define _DEF_LANGUAGE										  _CHINESE_S
		
		
   #define _DEF_HOTKEY_LEFT									 _MENU_FUN_ECO
   #define _DEF_HOTKEY_RIGHT							     _HOT_KEY_LOS_TYPE1
		
	
   #define _BACKLIGHT_MAX 					(0xB6)
		
   #define _BACKLIGHT_DEF_PWM 				(0xA0)
		
   #define _BACKLIGHT_MIN								20//	40mA
	
   #define _DEF_P5_RESET_ITEM3                        _MENU_NULL
	
   #define _DEF_P3_COLORTEMP_ITEM4                    _MENU_FUN_LOWBLUE
	 
   #define _DEF_P1_PICTURE_ITEM2                      _MENU_FUN_ECO
	 
   #define _DEF_P1_PICTURE_ITEM4                      _MENU_NULL
#elif(Project_ID ==ID_SONGREN_HK2513E01_1V1H_ST215B042_20210329)
   #define _LOGO_TYPE 								              _LOGO_NONE
   #define _DEF_LANGUAGE										  _CHINESE_S
		   
   #define _DEF_BACKLIGHT                                      80
   #define _CT_7500_SUPPRT							            _ON
   #define _DEF_HOTKEY_LEFT									 _MENU_FUN_ECO
   #define _DEF_HOTKEY_RIGHT							     _MENU_FUN_ASPECT
		   
	   
   #define _BACKLIGHT_MAX 					(0xFF-0XA0)
		   
   #define _BACKLIGHT_DEF_PWM 				(0XFF-0XA9)
		   
   #define _BACKLIGHT_MIN								20//	40mA
	   
   #define _DEF_P5_RESET_ITEM3                        _MENU_NULL
	   
   #define _DEF_P3_COLORTEMP_ITEM4                    _MENU_FUN_LOWBLUE
		
   #define _DEF_P1_PICTURE_ITEM2                      _MENU_FUN_ECO
		
   #define _DEF_P1_PICTURE_ITEM4                      _MENU_NULL
	   
	#define _BOARD_LINE_IN										_ON // 音频输入

#elif(Project_ID ==ID_DR_2513E02_SG2701B01_20210813)
   #define _LOGO_TYPE 								              _LOGO_IFOVED_R
   #define _DEF_LANGUAGE										  _CHINESE_S
			   
   #define _DEF_BACKLIGHT                                      80
#define _BACKLIGHT_MAX						(0xff-0x63)//360mA
#define _BACKLIGHT_DEF_PWM					(0xff-0x92)
#define _BACKLIGHT_MIN                          	32//	40mA

		   		 
#elif(Project_ID == ID_SONGREN_HK2556E01_1P2H_M270DTR011_EDP_QHD75HZ_20210423)
	
#define _LOGO_TYPE											 _LOGO_NONE
		
#define _MPRT_RATIO 								        30
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
#define _BACKLIGHT_MAX									   0X60//	0X70// 0xB0    
#define _BACKLIGHT_DEF_PWM								  0X49// 0X50//	0X5B//0x98
#define _BACKLIGHT_MIN								        30 
		
#define _MPRT_PWM_MAX         							    0xE0
#define _MPRT_PWM_DEF          								0xC0
#define _MPRT_PWM_MIN         								0x60
		
#define _DEF_LANGUAGE										_CHINESE_S
#define _DEF_COLORTEMP    					 			    _CT_6500
				
#elif(Project_ID == ID_HENGFA_HK2556E01_1P2H_M270DAN082_QHD60HZ_20210429)
		
#define _LOGO_TYPE											 _LOGO_NONE
		
#define _DEF_DIGITAL_VOL_MAX								 0x1EEE
#define _DEF_DIGITAL_VOL_CENTER                              0X1100
#define _MPRT_RATIO 								        30
		
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 										 (184) 
#define _BACKLIGHT_DEF_PWM 									(155)
#define _BACKLIGHT_MIN										20 
		
#define _DEF_LANGUAGE										 _ENGLISH
		
		
//#define	_OSD_BLACK_WHITE_TYPE								_ON //黑白和蓝白菜单选择
		
//#define _DEF_COLORTEMP    								    _CT_USER
//#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO

#elif(Project_ID == ID_GONGCHANG_TEST_2513E02)

#define _BOARD_LINE_IN                                     _ON




#elif(Project_ID 	==	ID_SHUNWEI_HK2795E04_1P2H_AUO_M320QAN021_EDP8LAN_UHD60HZ_20210531)
#define _LOGO_TYPE											 _LOGO_NONE


#define _MPRT_RATIO 								        30

#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
#define _BACKLIGHT_MAX 						 				(113) //360MA

#define _BACKLIGHT_DEF_PWM 									(90)//300MA

#define _BACKLIGHT_MIN										20 

#define _MPRT_PWM_MAX          								(0xff)

#define _MPRT_PWM_DEF         								 0xE0


#define _MPRT_PWM_MIN         								0x60

#define _DEF_LANGUAGE										 _KOREAN


#define	_OSD_BLACK_WHITE_TYPE								_OFF //黑白和蓝白菜单选择


#define _DEF_COLORTEMP    					 				_CT_USER
#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
#elif(Project_ID == ID_CHANGJIA_GS24S3F_HK2556E01_1P2H_M236HVR010_FHD144HZ_20210908)


	#define _DEF_GAMMA										    _GAMMA_22
	//#define _CT_7500_SUPPRT										_ON//色温是否带7500

	#define _DEF_OSD_LANGUAGE_ARROW								_ON
	#define _DEF_BACKLIGHT										80
	#define _LOGO_TYPE											_LOGO_Polaroid//_LOGO_Brookstone
	#define _MPRT_RATIO 								        40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1 
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME //_MENU_FUN_BACKLIGHT
	#define _DEF_HDR_540								         _ON//HDR指定亮度

	#define _BACKLIGHT_MAX 						 				0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM 								    0X5F//0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN								        20//30 
		
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
		
	#define _DEF_LANGUAGE										_SPANISH//_FRENCH//_KOREAN
	//#define _DEF_FREESYNC										_ON//_FRENCH//_KOREAN
	//#define _DEF_GAMMA											_GAMMA_22
	//#define _DEF_P3_COLORTEMP_ITEM4 				   			_MENU_FUN_GAMMA
		
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
		//#define _LONG_PRESS_POWER_DOWN							_ON
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_1__,_0__,_4__
	#define _MPRT_MIN_FRAME_RATE          							900
	//#define _DEF_OD_60HZ							              0x08
	//#define _DEF_OD_75HZ							              0x16
	//#define _DEF_OD_100HZ							              0x22
	//#define _DEF_OD_144HZ							              0x28
	
#elif(Project_ID == ID_CHANGJIA_HK2556E01_1P2H_M270HAN02_V6_FHD144HZ_20210908)
	#define _DEF_OSD_LANGUAGE_ARROW 							_ON
	#define _DEF_BACKLIGHT										80
	//#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _DEF_HDR_540										 _ON//HDR指定亮度
	#define _LOGO_TYPE											_LOGO_Polaroid//_LOGO_Brookstone
	#define _MPRT_RATIO										60
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1 
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME //_MENU_FUN_BACKLIGHT
/*	#define _BACKLIGHT_MAX 						 				0XDA
	#define _BACKLIGHT_DEF_PWM 								    0XC7
	*/
	#define _BACKLIGHT_MAX										0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN								        20 
			
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
			
	#define _DEF_LANGUAGE										_SPANISH//_KOREAN
			
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
			//#define _LONG_PRESS_POWER_DOWN							_ON
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_1__,_0__,_3__
	#define _MPRT_MIN_FRAME_RATE          							900
	
#elif(Project_ID == ID_DX_2525E02_CC240LV2D_20211126)
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X58)//410MA//(0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X69)//370MA//(0XFF-0X77)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN								        20 
	#define _BURNIN_MSG_MENU_SUPPORT                 		    _OFF
					
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_1__,_1__,_2__,_2__,_9__
	#define _DEF_P6_MISC_ITEM2      	 _MENU_NULL//_MENU_FUN_AUDOIVOLUME  
	#undef _PANNEL_NAME
	#define _PANNEL_NAME						_P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_H__,_V__,_4__,_3__,_0__,_F__,_H__,_B__,_SLINE__,_N__,_1__,_0__
#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_20220224)
	#define _LOGO_TYPE											_LOGO_XENTA//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X70)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X80)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
					
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_3__,_0__,_1__
	//#define _DEF_P6_MISC_ITEM2			 _MENU_NULL//_MENU_FUN_AUDOIVOLUME	
#elif(Project_ID == ID_DX_2513E01_1A1H_P270HVN020_FHD75HZ_20220302)
	#define _LOGO_TYPE											_LOGO_XENTA//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X60)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X70)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
					
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_3__,_0__,_2__
	//#define _DEF_P6_MISC_ITEM2			 _MENU_NULL//_MENU_FUN_AUDOIVOLUME	
	
#elif(Project_ID == ID_XKBH_2513E01_1A1H_P270HVN020_FHD75HZ_20220629)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X60)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X70)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
	#define _DEF_FACTORY_MODE								     _OFF
	#define _DEF_BURNING_MODE								     _OFF				
	//#define _DEF_LANGUAGE										_CHINESE_S//_ENGLISH//_KOREAN
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_6__,_2__,_9__
	//#define _DEF_P6_MISC_ITEM2			 _MENU_NULL//_MENU_FUN_AUDOIVOLUME	
	

#elif(Project_ID == ID_DX_2513E01_1A1H_M238HVN021_FHD75HZ_20220423)
	#define _LOGO_TYPE										_LOGO_DUALSHINE//	_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED										_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X70)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X85)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
	//#define _BOARD_LINE_IN										_ON // 音频输入
				
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_1__,_1__
	//#define _DEF_P6_MISC_ITEM2			 _MENU_NULL//_MENU_FUN_AUDOIVOLUME	
#elif(Project_ID == ID_DX_HK2556E01_1P2H_M238HVN020_FHD165HZ_20220423)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 

				
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
			
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_4__,_2__,_3__
	
#elif(Project_ID == ID_DX_HK2556E01_1P2H_MV257VUB_N10_LVDS_WFHD100HZ_20220403)
	#define _LOGO_TYPE											_LOGO_SODIMAC//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_P6_MISC_ITEM3      	 						_MENU_NULL //删除MPRT
	#define _DEF_P5_RESET_ITEM2    	  	  				_MENU_FUN_LED//预留灯效位置
	#define _DEF_P5_RESET_ITEM3    	  	  				_MENU_FUN_RESET//预留灯效位置
	
	#define _BACKLIGHT_MAX										0XD0//0Xa0//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0XB1//0X80//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	
//24C02					
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
				
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
				
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
		
	#define _DEF_DIGITAL_VOL_MAX								0XA50//3500
	#define _DEF_DIGITAL_VOL_CENTER                             0XA50//2300
			
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_5__,_0__,_6__


	
#elif(Project_ID == ID_DX_HK2556E01_1P2H_MV290VUB_N10_LVDS_WFHD100HZ_20220506)
	#define _LOGO_TYPE											_LOGO_SODIMAC//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_P6_MISC_ITEM3									_MENU_NULL //删除MPRT
	#define _DEF_P5_RESET_ITEM2 		  _MENU_FUN_LED//预留灯效位置
	#define _DEF_P5_RESET_ITEM3 		  _MENU_FUN_RESET//预留灯效位置
	#define _BACKLIGHT_MAX										0XD0//0Xa0//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0XB1//0X80//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		
						
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
					
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
					
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
			
	#define _DEF_DIGITAL_VOL_MAX								0XA50//3500
	#define _DEF_DIGITAL_VOL_CENTER                             0XA50//2300
				
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_5__,_0__,_6__

#elif(Project_ID == ID_DX_HK2556E01_1P2H_HKC_SN238CS04_1_FHD144HZ_NO_LOGO_20221125)
	#define _LOGO_TYPE											_LOGO_HARPER//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0X80//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0X60//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	
					
	#define _DEF_LANGUAGE										_RUSSIAN//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
				
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
				
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
		
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
			
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_1__,_1__,_2__,_9__

#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_PORTUGUESE_LOGO_XZONE_20220622)
	#define _LOGO_TYPE											_LOGO_XZONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X70)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X80)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_PORTUGUESE//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_6__,_2__,_2__
	#define _BOARD_LINE_IN										_ON // 音频输入
#elif(Project_ID == ID_DX_2525E01_1A1H_SG2381B011_FHD75HZ_ENGLISH_LOGO_EKO_20221012)
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X98)//(0XFF-0X90)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA9)//(0XFF-0XA5)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_AUDOIVOLUME
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
	//#define _DEF_P3_COLORTEMP_ITEM4								  _MENU_FUN_GAMMA
	#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_BRIGHTNESS
	#define _DEF_BRIGHTNESS                                     40//osd数字亮度
	#define _ENABLE_VGA_AUTO_ADJUST								_ON
						
	#define _DEF_LANGUAGE										_ENGLISH//_GERMAN//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_1__,_1__,_1__,_5__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	#define _DEF_OD_60HZ							              0x20//0x18//60hz od gain
	#define _DEF_OD_75HZ							              0x28//0x20//75hz od gain
	
#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_ENGLISH_LOGO_QMAX_20221101)
	#define _LOGO_TYPE											_LOGO_QMAX//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X90)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA5)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_1__,_1__,_0__,_1__
	#define _BOARD_LINE_IN										_ON // 音频输入
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B011_FHD100HZ_SPANISH_LOGO_NONE_20230512)
	#define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X90)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA5)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_SPANISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_5__,_1__,_2__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B01_A_FHD75HZ_GERMAN_LOGO_3KO_20221017)
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X65)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X85)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_GERMAN//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_1__,_0__,_1__,_7__
	#define _BOARD_LINE_IN										_ON // 音频输入
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B01_A_FHD100HZ_ENGLISH_LOGO_3KO_20230614)
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X75)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X85)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_1__,_4__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	
	#define _DEF_P6_MISC_ITEM4      							 _MENU_FUN_FREESYNC
	
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B01_7_FHD100HZ_ENGLISH_LOGO_3KO_20230615)
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X75)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X85)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_1__,_5__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	
	#define _DEF_P6_MISC_ITEM4      							 _MENU_FUN_FREESYNC

#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B01_1_FHD100HZ_SPANISH_LOGO_TEROS_20230619)
	#define _LOGO_TYPE											_LOGO_TEROS//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X85)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X95)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_SPANISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_1__,_9__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	
	#define _DEF_P6_MISC_ITEM4      							 _MENU_FUN_FREESYNC

	#define _DEF_OD_60HZ							              0x21//6ahz od gain
	#define _DEF_OD_75HZ							              0x25//75hz od gain
	#define _DEF_OD_100HZ							              0x2B//100hz od gain
	
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B01_1_FHD100HZ_RUSSIAN_LOGO_NONE_20240416)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_BACKLIGHT										50//80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X85)//300MA (0XFF-0X6D)//360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA7)//220MA (0XFF-0X7E)//320MA 
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_RUSSIAN//_KOREAN
	//#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	//#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_1__,_9__
	#define _DEF_P6_MISC_ITEM3									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _ON
	//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
	//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
#elif(Project_ID == ID_DX_2525E04_1A1H1D_SG2381B022_FHD100HZ_ENLISH_20240127)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X6a)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X7E)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
		//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
						
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_1__,_2__,_7__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	
	#define _DEF_P6_MISC_ITEM4      							 _MENU_FUN_FREESYNC
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT 
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

	#define _DEF_OD_60HZ							              0x21//6ahz od gain
	#define _DEF_OD_75HZ							              0x25//75hz od gain
	#define _DEF_OD_100HZ							              0x2B//100hz od gain
	//SG2381B02-2
	#undef _PANNEL_NAME
	#define _PANNEL_NAME										_P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_S__,_G__,_2__,_3__,_8__,_1__,_B__,_0__,_2__,_SLINE__,_2__
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2151B052_FHD75HZ_SPANISH_LOGO_TEROS_20230627)
	#define _LOGO_TYPE											_LOGO_TEROS//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X90)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA5)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_SPANISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_2__,_7__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _DEF_OD_60HZ										  0x21//6ahz od gain
	#define _DEF_OD_75HZ										  0x25//75hz od gain
	#define _DEF_OD_100HZ										  0x2B//100hz od gain
	
#elif(Project_ID == ID_DX_HK2556E01_1P2H_SG2701B022_FHD165HZ_20230625)
	#define _LOGO_TYPE											_LOGO_TEROS//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0XFF//0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0XDF//0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
	#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
						
	#define _DEF_LANGUAGE										_SPANISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
			
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_2__,_5__
#elif(Project_ID == ID_DX_HK2556E01_1P2H_SG2361B023_FHD60HZ_20240118)
	#define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0X70// 260MA //0XAB//400MA ///0X70// 260MA//0XFF//0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0X68 //240MA //0X9B//360MA ///0X68 //240MA//0XDF//0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
//	#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
//	#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
						
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
			
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_1__,_1__,_7__
								
	#define _DEF_OSDROTATE										_OSD_ROTATE_DEGREE_180
	#define _DEF_DISP_ROTATE									_DISP_ROTATE_180
	#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL 
#elif(Project_ID == ID_DX_HK2556E01_1P2H_SG3151B053_FHD165HZ_20230726)
	#define _LOGO_TYPE											_LOGO_ANTESPORTS//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0XFF//0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0XDF//0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
	#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
						
	#define _DEF_LANGUAGE										_ENGLISH
	#define _DEF_COLORTEMP										_CT_7500
			
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_7__,_2__,_6__

#elif(Project_ID == ID_DX_HK2556E01_1P2H_M270HAN026_FHD165HZ_20230727)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0XFF//0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0XDF//0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
	#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
						
	#define _DEF_LANGUAGE										_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
			
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_7__,_2__,_7__

#elif(Project_ID == ID_DX_HK2795E01_2P2H_LQ270T1JG08_4LANHBR2_QHD165HZ_20230922)
#define _LOGO_TYPE											_LOGO_GAMEBOOSTER

#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_DX_KEY_LED 									_ON	//省电模式 按键板指示灯变换闪烁
#define _DEF_BACKLIGHT										60
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_Energy_Msg										_ON	//能效提示开关

#define _BACKLIGHT_MAX										0xD8
#define _BACKLIGHT_DEF_PWM									0x88
#define _BACKLIGHT_MIN										20 

					
#define _DEF_LANGUAGE										_TURKISH
#define _DEF_COLORTEMP										_CT_7500
#define _DEF_DX_LED_MODE									_ON //稻兴LED灯模式
#define _DEF_OSD_LEDTYPE                 				    _OSDLedType_OFF
		
#define _MPRT_PWM_MAX										0xA1
#define _MPRT_PWM_DEF										0xA1
#define _MPRT_PWM_MIN										0xA1
		
#define _MPRT_RATIO 										40

#define _DEF_DIGITAL_VOL_MAX								0x13EB//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4
	
#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_9__,_2__,_2__


#define _DEF_P5_RESET_ITEM3    	  	  					_MENU_FUN_LED

#elif(Project_ID == ID_DX_HK2795E01_2P2H_LQ270T1JG08_4LANHBR2_QHD165HZ_20230913)
#define _LOGO_TYPE											_LOGO_GAMEBOOSTER

#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_DX_KEY_LED 									_ON	//省电模式 按键板指示灯变换闪烁
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500

#define _BACKLIGHT_MAX										0xF1
#define _BACKLIGHT_DEF_PWM									0xC1
#define _BACKLIGHT_MIN										20 

					
#define _DEF_LANGUAGE										_TURKISH
#define _DEF_COLORTEMP										_CT_7500
#define _DEF_DX_LED_MODE									_ON //稻兴LED灯模式
#define _LONG_PRESS_POWER_DOWN								_ON//电源键长按关机
		
#define _MPRT_PWM_MAX										0xA1
#define _MPRT_PWM_DEF										0xA1
#define _MPRT_PWM_MIN										0xA1
		
#define _MPRT_RATIO 										40

#define _DEF_DIGITAL_VOL_MAX								0x13EB//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4
	
#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_9__,_1__,_3__


#define _DEF_P5_RESET_ITEM3    	  	  					_MENU_FUN_LED

#elif(Project_ID == ID_DX_HK2795E01_2P2H_M315DVR01_9_4LANHBR2_QHD165HZ_20230913)
#define _LOGO_TYPE											_LOGO_GAMEBOOSTER

#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_DX_KEY_LED 									_ON	//省电模式 按键板指示灯变换闪烁
#define _DEF_BACKLIGHT										50//80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500

#define _BACKLIGHT_MAX										0xF1
#define _BACKLIGHT_DEF_PWM									0xA1//C1
#define _BACKLIGHT_MIN										20 

					
#define _DEF_LANGUAGE										_TURKISH
#define _DEF_COLORTEMP										_CT_7500
#define _DEF_DX_LED_MODE2									_ON //稻兴LED灯模式
#define _LONG_PRESS_POWER_DOWN								_ON	//电源键长按关机
#define _DEF_Energy_Msg										_ON	//能效提示开关
#define _DEF_OSD_LEDTYPE                 				    _OSDLedType_OFF
		
#define _MPRT_PWM_MAX										0xA1
#define _MPRT_PWM_DEF										0xA1
#define _MPRT_PWM_MIN										0xA1
		
#define _MPRT_RATIO 										40

#define _DEF_DIGITAL_VOL_MAX								0x13EB//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4
	
#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_9__,_2__,_0__


#define _DEF_P5_RESET_ITEM3    	  	  					_MENU_FUN_LED

#elif(Project_ID == ID_DX_HK2795E01_2P2H_M315DVR01_3_8LANHBR_QHD165HZ_20230906)
#define _LOGO_TYPE											_LOGO_GAMEBOOSTER

#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_DX_KEY_LED 									_ON	//省电模式 按键板指示灯变换闪烁
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500

#define _BACKLIGHT_MAX										0xF1
#define _BACKLIGHT_DEF_PWM									0xC1
#define _BACKLIGHT_MIN										20 

					
#define _DEF_LANGUAGE										_TURKISH
#define _DEF_COLORTEMP										_CT_7500
#define _DEF_DX_LED_MODE2									_ON //稻兴LED灯模式
#define _LONG_PRESS_POWER_DOWN								_ON//电源键长按关机
		
#define _MPRT_PWM_MAX										0xA1
#define _MPRT_PWM_DEF										0xA1
#define _MPRT_PWM_MIN										0xA1
		
#define _MPRT_RATIO 										40

#define _DEF_DIGITAL_VOL_MAX								0x13EB//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4
	
#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_9__,_1__,_3__


#define _DEF_P5_RESET_ITEM3    	  	  					_MENU_FUN_LED

#elif(Project_ID == ID_DX_HK2556E01_SG3151B05_8_FHD165HZ_20230901)
#define _LOGO_TYPE											_LOGO_FUEGO

#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_DX_KEY_LED 									_ON	//省电模式 按键板指示灯变换闪烁
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500

#define _BACKLIGHT_MAX										0xA1
#define _BACKLIGHT_DEF_PWM									0x85
#define _BACKLIGHT_MIN										20 
//#define _DEF_P5_RESET_ITEM2									_MENU_FUN_LED//预留灯效位置
//#define _DEF_P5_RESET_ITEM3								_MENU_FUN_RESET
					
#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_COLORTEMP										_CT_7500
#define _DEF_DX_LED_MODE2									_ON //稻兴LED灯模式
#define _LONG_PRESS_POWER_DOWN								_ON//电源键长按关机
		
#define _MPRT_PWM_MAX										0xA1
#define _MPRT_PWM_DEF										0xA1
#define _MPRT_PWM_MIN										0xA1
		
#define _MPRT_RATIO 										40

#define _DEF_DIGITAL_VOL_MAX								0x13EB//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4
	
#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_9__,_0__,_5__


#define _DEF_P5_RESET_ITEM3    	  	  					_MENU_FUN_LED


#elif(Project_ID == ID_DX_HK2556E01_SG2701B02_2_FHD165HZ_EDID_HALION_20230818)
#define _LOGO_TYPE											_LOGO_HALION
#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500

#define _BACKLIGHT_MAX										0xD1
#define _BACKLIGHT_DEF_PWM									0xB1
#define _BACKLIGHT_MIN										20 
//#define _DEF_P5_RESET_ITEM2									_MENU_FUN_LED//预留灯效位置
//#define _DEF_P5_RESET_ITEM3								_MENU_FUN_RESET
					
#define _DEF_LANGUAGE										_RUSSIAN
#define _DEF_COLORTEMP										_CT_7500
#define _DEF_DX_LED_MODE									_ON //稻兴LED灯模式

#define _MPRT_PWM_MAX										0xD1
#define _MPRT_PWM_DEF										0xD1
#define _MPRT_PWM_MIN										0xD1
		
#define _MPRT_RATIO 										40
#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _DEF_DIGITAL_VOL_MAX								5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300
	
#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_8__,_2__,_1__


#define _DEF_P5_RESET_ITEM3    	  	  					_MENU_FUN_LED

#elif(Project_ID == ID_DX_HK255XE15_1P2H_SG2701B022_FHD165HZ_20230731)
	#define _LOGO_TYPE											_LOGO_ROMBICA//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	
	#define _BACKLIGHT_MAX										0xA1
	#define _BACKLIGHT_DEF_PWM									0x85
	#define _BACKLIGHT_MIN										20 
	//#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
	//#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
						
	#define _DEF_LANGUAGE										_RUSSIAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _OSD_DX_RUSSIAN_TEXT								_ON	//稻兴翻译

	
	#define _MPRT_PWM_MAX										0xA1
	#define _MPRT_PWM_DEF										0xA1
	#define _MPRT_PWM_MIN										0xA1
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_8__,_1__,_9__

#elif(Project_ID == ID_DX_HK255XE15_1P2H_QF238FHB_NF0_FHD165HZ_2023818)
#define _LOGO_TYPE											_LOGO_ROMBICA//_LOGO_Brookstone
#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500

#define _BACKLIGHT_MAX										0xA8
#define _BACKLIGHT_DEF_PWM									0x95
#define _BACKLIGHT_MIN										20 
//#define _DEF_P5_RESET_ITEM2									_MENU_FUN_LED//预留灯效位置
//#define _DEF_P5_RESET_ITEM3								_MENU_FUN_RESET
					
#define _DEF_LANGUAGE										_RUSSIAN
#define _DEF_COLORTEMP										_CT_7500
#define _OSD_DX_RUSSIAN_TEXT								_ON //稻兴翻译
		
#define _MPRT_PWM_MAX										0xA8
#define _MPRT_PWM_DEF										0xA8
#define _MPRT_PWM_MIN										0xA8
		
#define _MPRT_RATIO 										40
#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#define _DEF_DIGITAL_VOL_MAX								5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300
	
#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_8__,_1__,_9__

#elif(Project_ID == ID_DX_HK255XE15_1P2H_SG2381B012_FHD165HZ_LOGO_ROMBICA_20230802)
	#define _LOGO_TYPE											_LOGO_ROMBICA//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	
	#define _BACKLIGHT_MAX										0x75//A8
	#define _BACKLIGHT_DEF_PWM									0x65//95
	#define _BACKLIGHT_MIN										20 
	//#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
	//#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
						
	#define _DEF_LANGUAGE										_RUSSIAN
	#define _DEF_COLORTEMP										_CT_7500
#define _OSD_DX_RUSSIAN_TEXT								_ON //稻兴翻译
			
	#define _MPRT_PWM_MAX										0x75
	#define _MPRT_PWM_DEF										0x75
	#define _MPRT_PWM_MIN										0x75
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_8__,_1__,_9__

#elif(Project_ID == ID_DX_HK2556E01_1P2H_SN238CS041_FHD165HZ_20230807)
	#define _LOGO_TYPE											_LOGO_ANTESPORTS//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0XC1//0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0XA1//0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
	#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
						
	#define _DEF_LANGUAGE										_ENGLISH
	#define _DEF_COLORTEMP										_CT_7500
			
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_8__,_0__,_7__

#elif(Project_ID == ID_TJ_HK2556E01_1P2H_M270DAN07_V700_QHD100HZ_20230906)
	#define _OSD_5_KEY_SUPPROT									_ON
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0X81//0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0X6D//0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	//#define _DEF_P5_RESET_ITEM2    	  	  						_MENU_FUN_LED//预留灯效位置
	//#define _DEF_P5_RESET_ITEM3 		 						_MENU_FUN_RESET
							
	#define _DEF_LANGUAGE										_CHINESE_S//_ENGLISH
	#define _DEF_COLORTEMP										_CT_7500
				
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
				
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
		
	#define _DEF_DIGITAL_VOL_MAX								0x135D//3500
	#define _DEF_DIGITAL_VOL_CENTER                             0X0E15//2300
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_5__,_2__,_9__

#elif(Project_ID == ID_WM_2556E01_SG2701B018_FHD200HZ_20230814)
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_8__,_1__,_4__
	#define _DEF_P6_MISC_ITEM2      			 _MENU_FUN_OD
	

#elif(Project_ID == ID_AUO_HK2556E01_1P2H_M315DVR016_QHD75HZ_20220516)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0XB5//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0X90//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 

			
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
		
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
		
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER 							3379//2300
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_5__,_1__,_6__
	//#undef _PANNEL_NAME
	//#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_A__,_U__,_O__,_M__,_3__,_1__,_5__,_D__,_V__,_R__,_0__,_1__,_6__
#elif(Project_ID == ID_ZQ_HK255XE03_1T1P1H_MV270QHBN50_LVDS_QHD75HZ_20230522)
	#define _LOGO_TYPE											_LOGO_HAIER//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										100
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										0XD0//	(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									0XD0//	(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	
				
	#define _DEF_LANGUAGE										_CHINESE_S//_KOREAN
	#define _DEF_COLORTEMP										_CT_6500
			
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
			
	#define _MPRT_RATIO 										40
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER 							3379//2300
		
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_3__,_0__,_6__
		//#undef _PANNEL_NAME
		//#define _PANNEL_NAME						  _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_A__,_U__,_O__,_M__,_3__,_1__,_5__,_D__,_V__,_R__,_0__,_1__,_6__
				
			
#elif(Project_ID == ID_XHS_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_20220613)	
	#define _MPRT_RATIO 										40
	
	#define _DEF_DIGITAL_VOL_MAX								5632//3500
	#define _DEF_DIGITAL_VOL_CENTER 							3379//2300
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_2__,_0__,_6__,_1__,_3__
			
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _BACKLIGHT_MAX										0X64//0X84//0XC4 //450MA
	#define _BACKLIGHT_DEF_PWM									0X54//0X5C//0X6C//300MA
	#define _BACKLIGHT_MIN										30 
	#define _MPRT_PWM_MAX										0xE0
	#define _MPRT_PWM_DEF										0xC0
	#define _MPRT_PWM_MIN										0x60
	#define _DEF_COLORTEMP										_CT_6500


#elif(Project_ID == ID_RUIKANG_2795E05_1P2H_SN314GTO11_VBY_UHD60HZ_20220512)
	#define _LOGO_TYPE											 _LOGO_NONE
	
	#define _DEF_DIGITAL_VOL_MAX								 3600
	#define _DEF_DIGITAL_VOL_CENTER                              2400
	
	//#define _OD_WEAK_MID_HIGH                                       _ON
	
	#define _MPRT_RATIO 								        50
	
	#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT
	
	#define _BACKLIGHT_MAX 									   (0X87) //360MA
	#define _BACKLIGHT_DEF_PWM 								   (0x65 )//300MA
	#define _BACKLIGHT_MIN										20 
	
	#define _DEF_P6_MISC_ITEM3 		 _MENU_NULL
	
	#define _MPRT_PWM_MAX         								 (0xF0)
	#define _MPRT_PWM_DEF        								  0xC0
		
	#define _MPRT_PWM_MIN        								 0x70
	
	#define _DEF_LANGUAGE										 _ENGLISH
	
	#define _DEF_COLORTEMP    									 _CT_USER
	//#define _DEF_HDR_MODE    									 _HDR10_MODE_AUTO
	
#elif(Project_ID == ID_2525E01_SG2381B011_FHD75HZ_20230403)
	//#define _LOGO_TYPE											_LOGO_QMAX//_LOGO_Brookstone
	#define _DEF_BACKLIGHT										80
	#define _DEF_DX_KEY_LED 									_ON
	#define _CT_7500_SUPPRT										_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X58)//410MA//(0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X69)//370MA//(0XFF-0X77)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN								        20 
	#define _BURNIN_MSG_MENU_SUPPORT                 		    _OFF
	#define _DEF_LANGUAGE										_RUSSIAN//_KOREAN
	#define _DEF_COLORTEMP    					 			    _CT_6500
	#define _FW_VERSION 		_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_4__,_0__,_3__
	//#define _BOARD_LINE_IN										_ON // 音频输入
	
#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_RUSSIAN_LOGO_DEPO_20230525)
	#define _LOGO_TYPE											_LOGO_DEPO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X90)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA5)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
			//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
							
	#define _DEF_LANGUAGE										_RUSSIAN//_KOREAN
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
		
	#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL
	#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL
		
	#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1     _MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4      _MENU_FUN_LOWBLUE
	#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
		
	#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
		
	#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
		
	#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_OD 
	#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
	
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_5__,_2__,_5__
	#define _BOARD_LINE_IN										_ON // 音频输入

#elif(Project_ID == ID_DX_HK2513E02_SG2381B02_2_FHD75HZ_20231012)
#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500

#define _BACKLIGHT_MAX										(0XFF-0x70)
#define _BACKLIGHT_DEF_PWM									(0XFF-0xA5)
#define _BACKLIGHT_MIN										20 
#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_Energy_Msg 									_ON//能效提示开关


#define _DEF_P1_PICTURE_ITEM0	   _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1	   _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2	   _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3	   _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4	   _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5	   _MENU_NULL

#define _DEF_P2_DISPLAY_ITEM0	   _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1	  _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2	   _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3	   _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4	   _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5	   _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0 	 _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1 	 _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2 	 _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3 	 _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5 	 _MENU_NULL

#define _DEF_P4_OSDSETTING_ITEM0	  _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1	  _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2	  _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3	  _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4	  _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5	  _MENU_NULL

#define _DEF_P5_RESET_ITEM0 		 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1 		 _MENU_FUN_AUTO_COLOR	
#define _DEF_P5_RESET_ITEM2 		 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM4 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM5 		 _MENU_NULL

#define _DEF_P6_MISC_ITEM0			 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1			 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2			 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3			 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4			 _MENU_FUN_OD 
#define _DEF_P6_MISC_ITEM5			 _MENU_NULL
#define _DEF_Energy_Msg 									_ON//能效提示开关

#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_1__,_0__,_1__,_2__
#elif(Project_ID == ID_ODT_HK2513E02_OSP245FB52_FHD120HZ_20240507)
#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500

#define _BACKLIGHT_MAX										(0XFF-0x70)
#define _BACKLIGHT_DEF_PWM									(0XFF-0xA5)
#define _BACKLIGHT_MIN										20 
#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_Energy_Msg 									_ON//能效提示开关


#define _DEF_P1_PICTURE_ITEM0	   _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1	   _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2	   _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3	   _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4	   _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5	   _MENU_NULL

#define _DEF_P2_DISPLAY_ITEM0	   _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1	  _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2	   _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3	   _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4	   _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5	   _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0 	 _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1 	 _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2 	 _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3 	 _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5 	 _MENU_NULL

#define _DEF_P4_OSDSETTING_ITEM0	  _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1	  _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2	  _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3	  _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4	  _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5	  _MENU_NULL

#define _DEF_P5_RESET_ITEM0 		 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1 		 _MENU_FUN_AUTO_COLOR	
#define _DEF_P5_RESET_ITEM2 		 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM4 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM5 		 _MENU_NULL

#define _DEF_P6_MISC_ITEM0			 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1			 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2			 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3			 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4			 _MENU_NULL 
#define _DEF_P6_MISC_ITEM5			 _MENU_NULL
//#define _DEF_Energy_Msg 									_ON//能效提示开关

#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_5__,_0__,_7__

#elif(Project_ID == ID_DX_2513E02_HV320FHB_F41_FHD75HZ_20240330)
#if 0
#define _LOGO_TYPE											_LOGO_NONE//_LOGO_EKO//_LOGO_Brookstone
#define _DEF_DX_KEY_LED 									_ON
#define _DEF_Energy_Msg 									_ON//能效提示开关
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500
#define _BACKLIGHT_MAX										(0XFF-0x50)
#define _BACKLIGHT_DEF_PWM									(0XFF-0x80)
#define _BACKLIGHT_MIN										20 
#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
//#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
//#define _DEF_HOTKEY_RIGHT 								_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
#define _DEF_COLORTEMP										_CT_7500
#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_2__,_2__
#define _DEF_P6_MISC_ITEM3									 _MENU_FUN_FREESYNC
//#define _BOARD_LINE_IN										 _ON
//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值


#else
#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500

#define _BACKLIGHT_MAX										(0XFF-0x50)
#define _BACKLIGHT_DEF_PWM									(0XFF-0x80)
#define _BACKLIGHT_MIN										20 
#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_Energy_Msg 									_ON//能效提示开关


#define _DEF_P1_PICTURE_ITEM0	   _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1	   _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2	   _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3	   _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4	   _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5	   _MENU_NULL

#define _DEF_P2_DISPLAY_ITEM0	   _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1	  _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2	   _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3	   _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4	   _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5	   _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0 	 _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1 	 _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2 	 _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3 	 _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5 	 _MENU_NULL

#define _DEF_P4_OSDSETTING_ITEM0	  _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1	  _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2	  _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3	  _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4	  _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5	  _MENU_NULL

#define _DEF_P5_RESET_ITEM0 		 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1 		 _MENU_FUN_AUTO_COLOR	
#define _DEF_P5_RESET_ITEM2 		 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM4 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM5 		 _MENU_NULL

#define _DEF_P6_MISC_ITEM0			 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1			 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2			 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3			 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4			 _MENU_FUN_OD 
#define _DEF_P6_MISC_ITEM5			 _MENU_NULL
#define _DEF_Energy_Msg 									_ON//能效提示开关

#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_2__,_3__
#endif

#elif(Project_ID == ID_DX_2513E02_DV320FHB_NV0_FHD75HZ_20231010)
#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
#define _DEF_DX_KEY_LED 									_ON
#define _DEF_BACKLIGHT										80
#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
#define _DEF_COLORTEMP										_CT_7500

#define _BACKLIGHT_MAX										(0XFF-0x50)
#define _BACKLIGHT_DEF_PWM									(0XFF-0x80)
#define _BACKLIGHT_MIN										20 
#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME

#define _DEF_Energy_Msg 									_ON//能效提示开关


#define _DEF_P1_PICTURE_ITEM0	   _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1	   _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2	   _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3	   _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4	   _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5	   _MENU_NULL

#define _DEF_P2_DISPLAY_ITEM0	   _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1	  _MENU_FUN_VGA_VPOSITON
#define _DEF_P2_DISPLAY_ITEM2	   _MENU_FUN_VGA_CLK
#define _DEF_P2_DISPLAY_ITEM3	   _MENU_FUN_VGA_PHASE
#define _DEF_P2_DISPLAY_ITEM4	   _MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM5	   _MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM0 	 _MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1 	 _MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2 	 _MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3 	 _MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_FUN_LOWBLUE
#define _DEF_P3_COLORTEMP_ITEM5 	 _MENU_NULL

#define _DEF_P4_OSDSETTING_ITEM0	  _MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1	  _MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2	  _MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3	  _MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4	  _MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5	  _MENU_NULL

#define _DEF_P5_RESET_ITEM0 		 _MENU_FUN_AUTO_ADJUST
#define _DEF_P5_RESET_ITEM1 		 _MENU_FUN_AUTO_COLOR	
#define _DEF_P5_RESET_ITEM2 		 _MENU_FUN_RESET
#define _DEF_P5_RESET_ITEM3 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM4 		 _MENU_NULL
#define _DEF_P5_RESET_ITEM5 		 _MENU_NULL

#define _DEF_P6_MISC_ITEM0			 _MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1			 _MENU_FUN_SHARPNESS
#define _DEF_P6_MISC_ITEM2			 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3			 _MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4			 _MENU_FUN_OD 
#define _DEF_P6_MISC_ITEM5			 _MENU_NULL
#define _DEF_Energy_Msg 									_ON//能效提示开关

#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_1__,_0__,_1__,_0__
	
#elif(Project_ID == ID_DX_2513E01_1A1H_P238HVN010_FHD75HZ_ENGLISH_20230525)

	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X90)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA5)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
	#define _DEF_P1_PICTURE_ITEM0	   _MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1	   _MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2	   _MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3	   _MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4	   _MENU_NULL
	#define _DEF_P1_PICTURE_ITEM5	   _MENU_NULL
	
	#define _DEF_P2_DISPLAY_ITEM0	   _MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1	  _MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2	   _MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3	   _MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4	   _MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM5	   _MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM0 	 _MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1 	 _MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2 	 _MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3 	 _MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_FUN_LOWBLUE
	#define _DEF_P3_COLORTEMP_ITEM5 	 _MENU_NULL
	
	#define _DEF_P4_OSDSETTING_ITEM0	  _MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1	  _MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2	  _MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3	  _MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4	  _MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5	  _MENU_NULL
	
	#define _DEF_P5_RESET_ITEM0 		 _MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1 		 _MENU_FUN_AUTO_COLOR	
	#define _DEF_P5_RESET_ITEM2 		 _MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3 		 _MENU_NULL
	#define _DEF_P5_RESET_ITEM4 		 _MENU_NULL
	#define _DEF_P5_RESET_ITEM5 		 _MENU_NULL
	
	#define _DEF_P6_MISC_ITEM0			 _MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1			 _MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2			 _MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM3			 _MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM4			 _MENU_FUN_OD 
	#define _DEF_P6_MISC_ITEM5			 _MENU_NULL
	#define _DEF_Energy_Msg										_ON//能效提示开关

	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_7__,_2__,_0__
	//#define _BOARD_LINE_IN										_ON // 音频输入

#elif(Project_ID == ID_DX_2795E01_1P1H_LQ270T1JG08_4LaneHbr2_QHD165HZ_20240418)
	#define _LOGO_TYPE											 _LOGO_NONE	
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
		
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_DIGITAL_VOL_MAX								 3600
	#define _DEF_DIGITAL_VOL_CENTER                              2400
		
		
	#define _MPRT_RATIO 								        50
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
		
	#define _BACKLIGHT_MAX 									   (0X87) //360MA
	#define _BACKLIGHT_DEF_PWM 								   (0x65 )//300MA
	#define _BACKLIGHT_MIN										20 
		
	#define _MPRT_PWM_MAX         								 (0xF0)
	#define _MPRT_PWM_DEF        								  0xC0
	#define _MPRT_PWM_MIN        								 0x70
	#define _DEF_LANGUAGE										 _ENGLISH
		
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_1__,_8__
#elif(Project_ID    ==  ID_DX_2795E01_2P2H_MV270QUBN50_8LaneHbr2_UHD75HZ_20240513)
	#define _LOGO_TYPE											 _LOGO_NONE	
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
		
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_DIGITAL_VOL_MAX								 3600
	#define _DEF_DIGITAL_VOL_CENTER                              2400
		
		
	#define _MPRT_RATIO 								        50
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
		
	#define _BACKLIGHT_MAX 									   (0X87) //360MA
	#define _BACKLIGHT_DEF_PWM 								   (0x65 )//300MA
	#define _BACKLIGHT_MIN										20 
		
	#define _MPRT_PWM_MAX         								 (0xF0)
	#define _MPRT_PWM_DEF        								  0xC0
	#define _MPRT_PWM_MIN        								 0x70
	#define _DEF_LANGUAGE										 _ENGLISH
		
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_5__,_1__,_3__

#elif(Project_ID == ID_DX_2513E01_1A1H_M270HVN02_FHD96HZ_ENGLISH_20230525)
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X55)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X65)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	//#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	//#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_6__,_2__,_7__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B052_FHD100HZ_ENGLISH_20240304)
	#define _LOGO_TYPE											_LOGO_STEALTH//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										75//80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X6E)//350MA	(0XFF-0X60)//380MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X72)//310MA //(0XFF-0X7D)//320MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ITALIAN//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _DEF_Energy_Msg										_ON//能效提示开关
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_0__,_2__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _ON
	//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
	//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
	
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2701B052_FHD100HZ_LOGO_Blaupunkt_20240402)
	#define _LOGO_TYPE											_LOGO_BLAUPUNKT//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										75//80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X6a)//360MA	(0XFF-0X60)//380MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X72)//310MA //(0XFF-0X7D)//320MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
        
	#define _DEF_Energy_Msg										_ON//能效提示开关
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_0__,_3__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _OFF //开启耳机没声音
        //#define _DEF_DIGITAL_VOL_MAX                               0X143D//音量最大值
        //#define _DEF_DIGITAL_VOL_CENTER                                0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
#elif(Project_ID == ID_DX2405018S_2513E02_1A1H_SG2701B052_FHD100HZ_20240603))
	#define _LOGO_TYPE											_LOGO_W
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										75//80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X60)//360MA	(0XFF-0X60)//380MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X70)//320MA //(0XFF-0X7D)//320MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME//_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT//_HOT_KEY_LOS_TYPE1
        
	#define _DEF_Energy_Msg										_ON//能效提示开关
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_6__,_0__,_5__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _ON//开启耳机没声音
        //#define _DEF_DIGITAL_VOL_MAX                               0X143D//音量最大值
        //#define _DEF_DIGITAL_VOL_CENTER                                0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
#elif(Project_ID == ID_DX_GJH_2513E01_1A1H_FHD100HZ_LOGO_DUALSHINE_20240411)
	#define _LOGO_TYPE											_LOGO_DUALSHINE//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										75//80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X6a)//360MA	(0XFF-0X60)//380MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X72)//310MA //(0XFF-0X7D)//320MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
            
	#define _DEF_Energy_Msg										_ON//能效提示开关
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_4__,_1__,_1__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _OFF //开启耳机没声音
            //#define _DEF_DIGITAL_VOL_MAX                               0X143D//音量最大值
            //#define _DEF_DIGITAL_VOL_CENTER                                0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
#elif(Project_ID == ID_DX_2513E01_1A1H_SG2381B012_FHD100HZ_ENGLISH_LOGO_STEALTH_20240311)
	#define _LOGO_TYPE											_LOGO_STEALTH//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X6D)//36MA (0XFF-0X60)//380MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X7D)//320MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ITALIAN//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_5__,_0__,_6__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _ON
	//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
	//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值
	
#elif(Project_ID == ID_DX_2513E01_1A1H_HSD238HCAY4A_FHD100HZ_ENGLISH_LOGO_EKO_20240311)
	#define _LOGO_TYPE											_LOGO_EKO//_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_BACKLIGHT										50//60
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X76)//340MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0XA0)//(0XFF-0X91)// (0XFF-0X86)//300MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
		//#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
		//#define _DEF_HOTKEY_RIGHT 								_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
		
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_3__,_2__,_1__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _ON
		//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
		//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER								 0XF00//音量默认值

#elif(Project_ID == ID_DX_2513E01_1A1H_HSD238HCAY4A_FHD100HZ_ENGLISH_LOGO_STEALTH_20240311)
	#define _LOGO_TYPE											_LOGO_STEALTH//_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_BACKLIGHT										55
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0X76)//340MA ////(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X9C)// (0XFF-0X86)//300MA ////(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ITALIAN//_KOREAN
	//#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	//#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_5__,_0__,_6__
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _ON
	//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
	//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER								 0XF00//音量默认值
#elif(Project_ID == ID_DX240437S_2513E02_1H_SG2151B061_FHD75HZ_20240528)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0x90)//240MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0xA0)//200MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT 									_MENU_FUN_BACKLIGHT//_MENU_FUN_AUDOIVOLUME
	//#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	//#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
		
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_5__,_3__,_0__
	//#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	//#define _BOARD_LINE_IN										 _ON
		//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
		//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER								 0XF00//音量默认值

	#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      _MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL									//预留HDR位置
	#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_SHARPNESS
	#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL 
	#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4      _MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
	#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
	#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET//_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1     	 _MENU_NULL//_MENU_FUN_LOWBLUE//_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL 
	#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
	#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_LOWBLUE//_MENU_FUN_FREESYNC//_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1      	 _MENU_NULL//_MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM2      	 _MENU_NULL//_MENU_FUN_AUDOIVOLUME  
	#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL//_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL
	#define _DEF_P6_MISC_ITEM4      	 _MENU_NULL											//预留freesync位置
	#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
#elif(Project_ID == ID_DX240438S_2513E02_1H_SG2361B023_FHD75HZ_20240528)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0x7A)//300MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0x81)//280MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT 									_MENU_FUN_BACKLIGHT//_MENU_FUN_AUDOIVOLUME
		//#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
		//#define _DEF_HOTKEY_RIGHT 								_HOT_KEY_LOS_TYPE1
			
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_5__,_3__,_0__
		//#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
		//#define _BOARD_LINE_IN										 _ON
			//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
			//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER								 0XF00//音量默认值
	
	#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      _MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL									//预留HDR位置
	#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_SHARPNESS
	#define _DEF_P2_DISPLAY_ITEM2      _MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM3      _MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL
	#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL 
	#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4      _MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
	#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
	#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET//_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1     	 _MENU_NULL//_MENU_FUN_LOWBLUE//_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL 
	#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
	#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_LOWBLUE//_MENU_FUN_FREESYNC//_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1      	 _MENU_NULL//_MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM2      	 _MENU_NULL//_MENU_FUN_AUDOIVOLUME  
	#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL//_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL
	#define _DEF_P6_MISC_ITEM4      	 _MENU_NULL											//预留freesync位置
	#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
#elif(Project_ID == ID_DX2405003S_2513E02_1H_SG2361B023_FHD100HZ_20240606)
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_EKO//_LOGO_Brookstone
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_Energy_Msg 									_ON//能效提示开关
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _BACKLIGHT_MAX										(0XFF-0x8E)//0x71//(0XFF-0x7A)//300MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0xA8)//0x57//	(0XFF-0x81)//280MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_LANGUAGE										_ENGLISH//_KOREAN
			
	#define _DEF_COLORTEMP										_CT_7500
		//#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
		//#define _BOARD_LINE_IN										 _ON
			//#define _DEF_DIGITAL_VOL_MAX								 0X143D//音量最大值
			//#define _DEF_DIGITAL_VOL_CENTER								 0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER								 0XF00//音量默认值
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME//_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT//_HOT_KEY_LOS_TYPE1
        
	#define _DEF_P6_MISC_ITEM4									 _MENU_FUN_FREESYNC
	#define _BOARD_LINE_IN										 _ON//开启耳机没声音
	        //#define _DEF_DIGITAL_VOL_MAX                               0X143D//音量最大值
	        //#define _DEF_DIGITAL_VOL_CENTER                                0X1100//音量默认值
	#define _DEF_DIGITAL_VOL_MAX								 0X110D//音量最大值
	#define _DEF_DIGITAL_VOL_CENTER 							 0XF00//音量默认值

	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_4__,_0__,_6__,_0__,_6__


#elif(Project_ID == ID_DX_2513E02_1A1H_P320HVN061_FHD75HZ_RUSSIAN_LOGO_DEPO_20230525)
	
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _DEF_COLORTEMP										_CT_7500//_CT_6500
	#define	_LONG_PRESS_POWER_DOWN								_ON //长按关机		
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_AUDOIVOLUME
	#define _BACKLIGHT_MAX 										 (0xff-0x50)//(0xFF) //310MA
	#define _BACKLIGHT_DEF_PWM 									 (0xff-0x60)//(64)//240MA
	#define _BACKLIGHT_MIN											25 
	#define _LOGO_TYPE											_LOGO_DEPO//_LOGO_MECER_BIG
	//#define _LOGO_POS_H											60//50
	#define _DEF_LANGUAGE										 _RUSSIAN

	#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL
	#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL
		
	#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1     _MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4      _MENU_FUN_LOWBLUE
	#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
		
	#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
		
	#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
		
	#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_OD 
	#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
		
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_0__,_5__,_2__,_5__
	#define _BOARD_LINE_IN                           			 _ON
#elif(Project_ID == ID_DX_2525E02_1A2H_T215HVN05_FHD75HZ_ENGLISH_202231124)
	#define _LOGO_TYPE											_LOGO_NONE
	#define _DEF_DX_KEY_LED 									_ON
	#define _DEF_BACKLIGHT										80
	#define _CT_7500_SUPPRT 									_ON  //色温是否带7500
	#define _BACKLIGHT_MAX										(0XFF-0X55)//(0XFF-0X90)//(0XFF-0X85)//280MA (0XFF-0X6a)//360MA //0XA8 //380MA 0X73// 260MA 0XA5 //360MA
	#define _BACKLIGHT_DEF_PWM									(0XFF-0X75)//(0XFF-0XA5)//(0XFF-0X93)//250MA (0XFF-0X7E)//340MA ///0X8B //340MA 0X59// 200MA 0X8C//300MA
	#define _BACKLIGHT_MIN										20 
	#define _DEF_HOTKEY_RIGHT                				    _MENU_FUN_ECO
			//#define _BURNIN_MSG_MENU_SUPPORT							_OFF
		//#define _DEF_P3_COLORTEMP_ITEM4								  _MENU_FUN_GAMMA
	#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_BRIGHTNESS
	#define _DEF_BRIGHTNESS                                     40//osd数字亮度
							
	#define _DEF_LANGUAGE										_ENGLISH//_GERMAN//_KOREAN
	#define _DEF_COLORTEMP										_CT_7500
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_3__,_1__,_1__,_2__,_4__
		//#define _BOARD_LINE_IN										_ON // 音频输入
	#define _DEF_OD_60HZ							              0x20//0x18//60hz od gain
	#define _DEF_OD_75HZ							              0x28//0x20//75hz od gain
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_FREESYNC	
	#define _DEF_P6_MISC_ITEM2 									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM3                                  _MENU_NULL
	
	#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL   
#endif
