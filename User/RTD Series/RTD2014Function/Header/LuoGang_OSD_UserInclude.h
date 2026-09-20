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
// ID Code      : LuoGang_OSD_UserInclude.h No.0000      //IDO
// Update Note  : ��ض��嶼�� HK_OSD_UserInclude.h
//----------------------------------------------------------------------------------------------------
#if(Project_ID == ID_COMMON) 

#if(_PROJECT == _RL6463_PROJECT)
	#define _DEF_P1_PICTURE_ITEM5                                 _MENU_FUN_OVERCLOCK
	#define _DEF_P3_COLORTEMP_ITEM4								  _MENU_FUN_GAMMA
	#define _DEF_P3_COLORTEMP_ITEM5								  _MENU_FUN_COLORGAMUT
	#define _DEF_P4_OSDSETTING_ITEM5							  _MENU_FUN_POWER_OFF
	#define _DEF_P5_RESET_ITEM4									  _MENU_FUN_LED  
	#define _DEF_P5_RESET_ITEM5									  _MENU_FUN_FLICKER_FREE  
	#define _DEF_P6_MISC_ITEM4									  _MENU_FUN_SATURATION						  
	#define _OD_WEAK_MID_HIGH                                    _ON
#else

#endif

#elif(Project_ID == ID_GONGCHANG_TEST_2785E06) 
	#define _BACKLIGHT_DEF_PWM									0x80
	#define _BACKLIGHT_MAX										0x60	
	#define _BACKLIGHT_MIN										20

#elif(Project_ID == ID_GONGCHANG_TEST_2556E06_OD) 
	#define _BACKLIGHT_DEF_PWM									0x80
	#define _BACKLIGHT_MAX										0x60	
	#define _BACKLIGHT_MIN										20
	#define LED_EFFECT                                           _ON
	#define _DEF_OSD_LEDTYPE                 				    _OSDLedType_OFF

#elif(Project_ID == ID_GONGCHANG_TEST_2556E06) 
	#define _BACKLIGHT_DEF_PWM									0x80
	#define _BACKLIGHT_MAX										0x60	
	#define _BACKLIGHT_MIN										20

#elif(Project_ID    ==  ID_CS_2785)
	//#define _LOGO_TYPE											 _LOGO_QTOUCH
	#define _DCR_PANEL_ON_OFF									_ON //DCR�򿪣��ڳ��Ƿ�ر���
	#define _LOGO_TYPE											_LOGO_STEALTH
	
	
#elif(Project_ID    ==  ID_CS_2513E03_M270HAN0_1_FHD10Z)
	#define _LOGO_TYPE									_LOGO_NONE//_LOGO_adhua_4
		
	//#define _BACKLIGHT_DEF_PWM							(0XFF-0X9D)
	//#define _BACKLIGHT_MAX								(0XFF-0X8D)
	//#define _BACKLIGHT_MIN								20
	#define _BACKLIGHT_DEF_PWM							_BACKLIGHT_MAX//(0XFF-0XAE)
	#define _BACKLIGHT_MAX								(0XFF-0XAE)
	#define _BACKLIGHT_MIN								(0XFF-0xE3)//20
	#define _DEF_BACKLIGHT                              100//
#if(_CTS_TYPE == _CTS_GEN_1_12BIT)
	#define _CONTRAST_MAX                               2848
	#define _CONTRAST_MIN                               1248
#else
	#define _CONTRAST_MAX                               178
	#define _CONTRAST_MIN                               78
#endif
	#define EDID_HDR_SC									_OFF//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2026//���
	#define EDID_WEEK_table                         	16//�ܱ�
		
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
		
	#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
		//#define _PANEL_DP_MAX_FRAME_RATE				750//1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				1000//1200//_PANEL_MAX_FRAME_RATE
		//#define _PANEL_VGA_MAX_FRAME_RATE 			600//_PANEL_MAX_FRAME_RATE
		//#define _OD_WEAK_MID_HIGH 								   _ON	
		
	#define _DEF_HOTKEY_LEFT						_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT						_MENU_FUN_BACKLIGHT
		
	
	#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_GunagGan//_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL//_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM5	   _MENU_NULL//_MENU_FUN_ECO
		
	#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_ASPECT//_MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_SHARPNESS//_MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_DCR//_MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_ECO//_MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL//_MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL//_MENU_FUN_SHARPNESS 
	
		
	#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 	 _MENU_NULL
	
	#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
		
	#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET//_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1     	 _MENU_NULL//_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL//_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL//_MENU_FUN_LOWBLUE 
	#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
	
	#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC//_MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM2      	 _MENU_NULL//_MENU_FUN_AUDOIVOLUME  
	#define _DEF_COLORTEMP										_CT_USER//Ĭ��ɫ��
		
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_4__,_1__,_3__
		
#elif(Project_ID    ==  ID_CS_2513E03_GuangGan_FHD60HZ)
	#define _LOGO_TYPE									_LOGO_NONE//_LOGO_adhua_4
	
//#define _BACKLIGHT_DEF_PWM							(0XFF-0X9D)
//#define _BACKLIGHT_MAX								(0XFF-0X8D)
//#define _BACKLIGHT_MIN								20
	#define _BACKLIGHT_DEF_PWM							_BACKLIGHT_MAX//(0XFF-0XAE)
	#define _BACKLIGHT_MAX								(0XFF-0XAE)
	#define _BACKLIGHT_MIN								(0XFF-0xE3)//20
	#define _DEF_BACKLIGHT                              100//
#if(_CTS_TYPE == _CTS_GEN_1_12BIT)
	#define _CONTRAST_MAX                               2848
	#define _CONTRAST_MIN                               1248
#else
	#define _CONTRAST_MAX                               178
	#define _CONTRAST_MIN                               78
#endif
	#define EDID_HDR_SC									_OFF//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
	
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
	
	#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
	//#define _PANEL_DP_MAX_FRAME_RATE				750//1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				750//1200//_PANEL_MAX_FRAME_RATE
	//#define _PANEL_VGA_MAX_FRAME_RATE				600//_PANEL_MAX_FRAME_RATE
	//#define _OD_WEAK_MID_HIGH                                    _ON	
	
	#define _DEF_HOTKEY_LEFT						_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT						_MENU_FUN_BACKLIGHT
	

	#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
	#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_GunagGan//_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL//_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM5	   _MENU_NULL//_MENU_FUN_ECO
	
	#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_ASPECT//_MENU_FUN_VGA_HPOSITON
	#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_SHARPNESS//_MENU_FUN_VGA_VPOSITON
	#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_DCR//_MENU_FUN_VGA_CLK
	#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_ECO//_MENU_FUN_VGA_PHASE
	#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL//_MENU_FUN_ASPECT
	#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL//_MENU_FUN_SHARPNESS 

	
	#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
	#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
	#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
	#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
	#define _DEF_P3_COLORTEMP_ITEM4 	 _MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM5 	 _MENU_NULL

	#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
	#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
	#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
	#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
	#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
	#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
	
	#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_RESET//_MENU_FUN_AUTO_ADJUST
	#define _DEF_P5_RESET_ITEM1     	 _MENU_NULL//_MENU_FUN_AUTO_COLOR
	#define _DEF_P5_RESET_ITEM2    	 	 _MENU_NULL//_MENU_FUN_RESET
	#define _DEF_P5_RESET_ITEM3    	  	 _MENU_NULL//_MENU_FUN_LOWBLUE 
	#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
	#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL

	#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM1      	 _MENU_NULL//_MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM2      	 _MENU_NULL//_MENU_FUN_AUDOIVOLUME  
	#define _DEF_COLORTEMP										_CT_USER//Ĭ��ɫ��
	
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_5__,_0__,_8__,_1__,_3__
	
#elif(Project_ID    ==  ID_CS_2513)
	#define EDID_HDR_SC 								_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE								0x2700
	#define EDID_ID_SIZE								2700//0x0000
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�

	#define EDID_ID_NAME								"HDC"
	#define VGA_EDID_table								"VGA"
	#define DP_EDID_table								"DP"
	#define HDMI_EDID_table 							"HDMI"

	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _DEF_P4_OSDSETTING_ITEM5      				_MENU_FUN_POWER_SAVING
	#define _DEF_Energy_Msg                             _ON
	#define _OSD_POWER_SAVING_MODE						_ON
	
#elif(Project_ID    ==  ID_CS_2513E01_FHD100HZ)
	#define _LOGO_TYPE									_LOGO_NONE//_LOGO_adhua_4
	#define _BACKLIGHT_DEF_PWM							(0XFF-0X80)
	#define _BACKLIGHT_MAX								(0XFF-0X60)
	#define _BACKLIGHT_MIN								20
	#define _DEF_BACKLIGHT                              80//
#if(_CTS_TYPE == _CTS_GEN_1_12BIT)
	#define _CONTRAST_MAX                               2848
	#define _CONTRAST_MIN                               1248
#else
	#define _CONTRAST_MAX                               178
	#define _CONTRAST_MIN                               78
#endif
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�

	#define EDID_ID_NAME                            	"HDC"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"

	#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE				600//1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE				600//_PANEL_MAX_FRAME_RATE

	//#define _DEF_P1_PICTURE_ITEM5                                 _MENU_FUN_HDR
	//#define _DEF_P3_COLORTEMP_ITEM4								  _MENU_FUN_GAMMA
	//#define _DEF_P3_COLORTEMP_ITEM5								  _MENU_NULL//_MENU_FUN_COLORGAMUT
	//#define _DEF_P4_OSDSETTING_ITEM5							  _MENU_FUN_POWER_OFF
	//#define _DEF_P5_RESET_ITEM3 								 _MENU_FUN_LED								 //Ԥ����Чλ��
	//#define _DEF_P5_RESET_ITEM4 								  _MENU_FUN_FLICKER_FREE  
	//#define _DEF_P6_MISC_ITEM4									  _MENU_FUN_SATURATION						  
	//#define _DEF_P6_MISC_ITEM5									  _MENU_FUN_OSD_ROTATE						  
	#define _OD_WEAK_MID_HIGH                                    _ON
	//#define _DEF_HOTKEY_LEFT									_HOT_KEY_LOS_TYPE1
	
#elif(Project_ID    ==  ID_CS_2513brE03_FHD144HZ)
 
	#define _BACKLIGHT_MAX									0Xd0
	#define _BACKLIGHT_DEF_PWM								0Xc0
	#define _BACKLIGHT_MIN									20
	#define _DEF_BACKLIGHT                                	80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78

	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
	
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
	
	#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE				2400//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE				750//_PANEL_MAX_FRAME_RATE
	
	#define _DEF_P1_PICTURE_ITEM5                                 _MENU_FUN_HDR
	#define _DEF_P3_COLORTEMP_ITEM4								  _MENU_FUN_GAMMA
	#define _DEF_P3_COLORTEMP_ITEM5								  _MENU_NULL//_MENU_FUN_COLORGAMUT
	#define _DEF_P4_OSDSETTING_ITEM5							  _MENU_FUN_POWER_OFF
	
	#define _DEF_P5_RESET_ITEM3    	  	 						 _MENU_FUN_LED								 //Ԥ����Чλ��
	#define _DEF_P5_RESET_ITEM4 								 _MENU_FUN_AUDOIVOLUME//Ԥ����Чλ��
	#define _DEF_P5_RESET_ITEM5 								 _MENU_FUN_AUDOIMUTE								 //Ԥ����Чλ��
	#define _DEF_P6_MISC_ITEM1									  _MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM2									  _MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM3									  _MENU_FUN_OSD_ROTATE
	#define _OD_WEAK_MID_HIGH                                    _ON
	
#elif(Project_ID == _ID_DX_2525BREQ4_MF238FHB_N50_FHD100HZ_20260616)
#define _LOGO_TYPE									_LOGO_NONE
#define _DEF_LANGUAGE								_RUSSIAN
#define _OSD_LANGUAGE_DELETE						_ON

#define _DEF_HOTKEY_LEFT							_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT							_MENU_FUN_BACKLIGHT
#if(MF27OFHB_C00)
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							25//�ܱ�

#define EDID_ID_CODE								0x2700
#define EDID_ID_NAME								"BOM"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"

#define _BACKLIGHT_MAX								0x89
#define _BACKLIGHT_DEF_PWM							0X70
#define _BACKLIGHT_MIN								20
#elif(MF238FHB_NTO)
#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							25//�ܱ�

#define EDID_ID_CODE								0x2380
#define EDID_ID_NAME								"BOM"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"

#define _BACKLIGHT_MAX								0x78
#define _BACKLIGHT_DEF_PWM							0X63
#define _BACKLIGHT_MIN								20
#else
#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							25//�ܱ�

#define EDID_ID_CODE								0x2380
#define EDID_ID_NAME								"BOM"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"

#define _BACKLIGHT_MAX								0x98
#define _BACKLIGHT_DEF_PWM							0X75
#define _BACKLIGHT_MIN								20
#endif
#define _DEF_COLORTEMP								_CT_7500

#define EDID_HDR_SC 								_ON
#define EDID_SIZE_WR								_ON//д��ߴ�

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1000
#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750

#define _DEF_DIGITAL_VOL_MAX						0xE14//0x1600
#define _DEF_DIGITAL_VOL_CENTER 					0x764//0x93D//0XD33

#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
#define _CT_7500_SUPPRT 							_ON

#define _DEF_P1_PICTURE_ITEM0						_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1						_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2						_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM3						_MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM4						_MENU_FUN_HDR
#define _DEF_P1_PICTURE_ITEM5						_MENU_NULL	

#define _DEF_P2_DISPLAY_ITEM5						_MENU_NULL
#define _DEF_P3_COLORTEMP_ITEM4 					_MENU_FUN_LOWBLUE
#define _DEF_P5_RESET_ITEM3 						_MENU_NULL
#define _DEF_P6_MISC_ITEM4							_MENU_FUN_FREESYNC
#define _DEF_OSD_LANGUAGE_ARROW 					_ON

#elif(Project_ID    ==  _ID_XIANYOU_2525BREQ4_SG2701B05_6_FHD100HZ_20251015)
	#define _LOGO_TYPE									_LOGO_BCR
	#define _DEF_LANGUAGE                               _RUSSIAN
	#define _OSD_LANGUAGE_DELETE                        _ON
	
	#define _DEF_HOTKEY_LEFT							_MENU_FUN_CONTRAST
	#define _DEF_HOTKEY_RIGHT							_MENU_FUN_BACKLIGHT
	#define _BACKLIGHT_MAX								0xBF
	#define _BACKLIGHT_DEF_PWM							0XB2
	#define _BACKLIGHT_MIN								20
	
	#define EDID_HDR_SC 								_ON
	#define EDID_SIZE_WR								_ON//д��ߴ�
	
	#define EDID_ID_SIZE								2700
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
	
	#define EDID_ID_CODE								0x2704
	#define EDID_ID_NAME								"XYM"
	#define VGA_EDID_table								"MF2702"
	#define DP_EDID_table								"MF2702"
	#define HDMI_EDID_table 							"MF2702"

	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1000
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750
	
	#define _DEF_DIGITAL_VOL_MAX                        0xE14//0x1600
	#define _DEF_DIGITAL_VOL_CENTER						0x764//0x93D//0XD33
	
	#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
	#define _CT_7500_SUPPRT                             _ON
	
	#define _DEF_P1_PICTURE_ITEM0      					_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      					_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      					_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM3      					_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM4      					_MENU_FUN_HDR
	#define _DEF_P1_PICTURE_ITEM5      					_MENU_NULL	
	
	#define _DEF_P2_DISPLAY_ITEM5      					_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM3    	  	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_FUN_FREESYNC
	#define _DEF_OSD_LANGUAGE_ARROW                     _ON
	
#elif(Project_ID    ==  _ID_XIANYOU_2525BREQ4_PN238CT02_14_FHD100HZ_20251023)
	#define _LOGO_TYPE									_LOGO_BCR
	#define _DEF_LANGUAGE                               _RUSSIAN
	#define _OSD_LANGUAGE_DELETE                        _ON
	
	#define _DEF_HOTKEY_LEFT							_MENU_FUN_CONTRAST
	#define _DEF_HOTKEY_RIGHT							_MENU_FUN_BACKLIGHT
	
	#define _BACKLIGHT_MAX								0xA2//0xBF
	#define _BACKLIGHT_DEF_PWM							0x8E//0XB2//
	#define _BACKLIGHT_MIN								20
	
	#define EDID_HDR_SC 								_ON
	#define EDID_SIZE_WR								_ON//д��ߴ�
	
	#define EDID_ID_SIZE								2380
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
	
	#define EDID_ID_CODE								0x2404
	#define EDID_ID_NAME								"XYM"
	#define VGA_EDID_table								"MF2402"
	#define DP_EDID_table								"MF2402"
	#define HDMI_EDID_table 							"MF2402"

	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1000
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750

	#define _DEF_DIGITAL_VOL_MAX                        0xE14//0x1600
	#define _DEF_DIGITAL_VOL_CENTER						0x764//0x93D//0XD33
	
	#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
	#define _CT_7500_SUPPRT                             _ON
	
	#define _DEF_P1_PICTURE_ITEM0      					_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      					_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      					_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM3      					_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM4      					_MENU_FUN_HDR
	#define _DEF_P1_PICTURE_ITEM5      					_MENU_NULL	
	
	#define _DEF_P2_DISPLAY_ITEM5      					_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM3    	  	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_FUN_FREESYNC
	#define _DEF_OSD_LANGUAGE_ARROW                     _ON	
	
#elif(Project_ID    ==  _ID_HONGXIA_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20251107)
#if(LD238EU4_SUA1_20260428)
	#define _LOGO_TYPE									_LOGO_NIOLX_1
	
#define _BACKLIGHT_MAX								0x6A		
#define _BACKLIGHT_DEF_PWM							0x5F		
#define _BACKLIGHT_MIN								0x1A

#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							18//�ܱ�
	
#define EDID_ID_CODE								0x2700
#define EDID_ID_NAME								"HKM"
#define VGA_EDID_table								"NXM24REGES120"
#define DP_EDID_table								"NXM24REGES120"
#define HDMI_EDID_table 							"NXM24REGES120"
#define _DEF_HOTKEY_LEFT							_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT							_MENU_FUN_BACKLIGHT
#define _EOC_RTS_FPS_SUPPORT						_ON

#elif(MV270FHB_NY1_20260428)	
	#define _LOGO_TYPE									_LOGO_NIOLX_1
	
#define _BACKLIGHT_MAX								0x83		
#define _BACKLIGHT_DEF_PWM							0x76		
#define _BACKLIGHT_MIN								0x10

#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							18//�ܱ�
	
#define EDID_ID_CODE								0x2700
#define EDID_ID_NAME								"HKM"
#define VGA_EDID_table								"NXM27REGES120"
#define DP_EDID_table								"NXM27REGES120"
#define HDMI_EDID_table 							"NXM27REGES120"
#define _DEF_HOTKEY_LEFT							_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT							_MENU_FUN_BACKLIGHT
#define _EOC_RTS_FPS_SUPPORT						_ON

#else
	#define _LOGO_TYPE									_LOGO_ENTERPRISE

	
#define _BACKLIGHT_MAX								0xA7		
#define _BACKLIGHT_DEF_PWM							0x90		
#define _BACKLIGHT_MIN								0x20

#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2025//���
#define EDID_WEEK_table 							1//�ܱ�
	
#define EDID_ID_CODE								0x2400
#define EDID_ID_NAME								"HKM"
#define VGA_EDID_table								"ENT-PV-24"
#define DP_EDID_table								"ENT-PV-24"
#define HDMI_EDID_table 							"ENT-PV-24"
#define _DEF_HOTKEY_LEFT							_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT							_MENU_FUN_ECO
#define _EOC_RTS_FPS_SUPPORT						_OFF

#endif
#define _EOC_ENERGY_SUPPORT					     	    _ON  //������Դ����

	#define _DEF_LANGUAGE                               _ENGLISH
	#define _OSD_LANGUAGE_DELETE                        _ON
	
	#define _DEF_COLORTEMP    					 		_CT_6500
	
	

	#define EDID_HDR_SC 								_ON
	#define EDID_SIZE_WR								_ON//д��ߴ�
	

	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1200
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750
	
	#define _DEF_DIGITAL_VOL_MAX                        0xE14//0x1600
	#define _DEF_DIGITAL_VOL_CENTER						0x764//0x93D//0XD33
	
	#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
	#define _CT_7500_SUPPRT                             _ON
	
	#define _DEF_P1_PICTURE_ITEM0      					_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      					_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      					_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3      					_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      					_MENU_FUN_OD
	#define _DEF_P1_PICTURE_ITEM5      					_MENU_NULL	
	
	#define _DEF_P2_DISPLAY_ITEM5      					_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM3    	  	 				_MENU_NULL
	
	#define _DEF_P6_MISC_ITEM1      	 				_MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2      	 				_MENU_FUN_AUDOIMUTE
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM4      	 				_MENU_NULL
	
	#define _DEF_OSD_LANGUAGE_ARROW                     _OFF
	
#elif(Project_ID    ==  _ID_HONGXIA_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20251107)
	#define _LOGO_TYPE									_LOGO_ENTERPRISE
	#define _DEF_LANGUAGE                               _ENGLISH
	#define _OSD_LANGUAGE_DELETE                        _ON
		
	#define _DEF_COLORTEMP    					 		_CT_6500
			
	#define _DEF_HOTKEY_LEFT							_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT							_MENU_FUN_ECO
		
#if(_IR_MODE_2)
	#define _BACKLIGHT_MAX								0xCF		
	#define _BACKLIGHT_DEF_PWM							0xBF		
	#define _BACKLIGHT_MIN								0x20
#elif(_IR_MODE_3)
	#define _BACKLIGHT_MAX								0xB3		
	#define _BACKLIGHT_DEF_PWM							0xA1		
	#define _BACKLIGHT_MIN								0x20
#else
	#define _BACKLIGHT_MAX								0x8C		
	#define _BACKLIGHT_DEF_PWM							0x7A		
	#define _BACKLIGHT_MIN								0x20
#endif
	#define EDID_HDR_SC 								_ON
	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_SIZE								2700
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
			
	#define EDID_ID_CODE								0x2700
	#define EDID_ID_NAME								"HKM"
	#define VGA_EDID_table								"ENT-PV-27"
	#define DP_EDID_table								"ENT-PV-27"
	#define HDMI_EDID_table 							"ENT-PV-27"
		
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1200
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750
			
	#define _DEF_DIGITAL_VOL_MAX                        0xE14//0x1600
	#define _DEF_DIGITAL_VOL_CENTER						0x764//0x93D//0XD33
			
	#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
	#define _CT_7500_SUPPRT                             _ON
	#define _EOC_RTS_FPS_SUPPORT					    _OFF
			
	#define _DEF_P1_PICTURE_ITEM0      					_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      					_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      					_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3      					_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      					_MENU_FUN_OD
	#define _DEF_P1_PICTURE_ITEM5      					_MENU_NULL	
			
	#define _DEF_P2_DISPLAY_ITEM5      					_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM3    	  	 				_MENU_NULL
			
	#define _DEF_P6_MISC_ITEM1      	 				_MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM4      	 				_MENU_NULL
			
	#define _DEF_OSD_LANGUAGE_ARROW                     _OFF

#elif(Project_ID    ==  _ID_CLP_2525EQ4_SG2701B08_1_FHD120HZ_20260702)
	#define _LOGO_TYPE									_LOGO_NONE
	#define _DEF_LANGUAGE                               _ENGLISH
	#define _OSD_LANGUAGE_DELETE                        _ON
		
	#define _DEF_COLORTEMP    					 		_CT_6500
			
	#define _DEF_HOTKEY_LEFT							_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT							_MENU_FUN_ECO
		
	#define _BACKLIGHT_MAX								0xB6		
	#define _BACKLIGHT_DEF_PWM							0xB2		
	#define _BACKLIGHT_MIN								0x20
		
	#define EDID_HDR_SC 								_ON
	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_SIZE								2700
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							27//�ܱ�
			
	#define EDID_ID_CODE								0x2700
	#define EDID_ID_NAME								"CLP"
	#define VGA_EDID_table								"CLP 27 MNT"
	#define DP_EDID_table								"CLP 27 MNT"
	#define HDMI_EDID_table 							"CLP 27 MNT"
		
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1200
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750
			
	#define _DEF_DIGITAL_VOL_MAX                        0xE14//0x1600
	#define _DEF_DIGITAL_VOL_CENTER						0x764//0x93D//0XD33
			
	#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
	#define _CT_7500_SUPPRT                             _ON
	#define _EOC_RTS_FPS_SUPPORT					    _OFF
			
	#define _DEF_P1_PICTURE_ITEM0      					_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      					_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      					_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3      					_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      					_MENU_FUN_OD
	#define _DEF_P1_PICTURE_ITEM5      					_MENU_NULL	
			
	#define _DEF_P2_DISPLAY_ITEM5      					_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM3    	  	 				_MENU_NULL
			
	#define _DEF_P6_MISC_ITEM1      	 				_MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM4      	 				_MENU_NULL
			
	#define _DEF_OSD_LANGUAGE_ARROW                     _OFF

#elif(Project_ID    ==  _ID_CHUANGWU_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20260207)
	#define _LOGO_TYPE									_LOGO_NONE
	#define _DEF_LANGUAGE                               _RUSSIAN
	#define _OSD_LANGUAGE_DELETE                        _ON
	
	#define _DEF_COLORTEMP    					 		_CT_6500
	
	#define _DEF_HOTKEY_LEFT							_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT							_MENU_FUN_ECO
	
	#define _BACKLIGHT_MAX								0xA7		
	#define _BACKLIGHT_DEF_PWM							0x90		
	#define _BACKLIGHT_MIN								0x20

	#define EDID_HDR_SC 								_ON
	#define EDID_SIZE_WR								_ON//д��ߴ�
	
	#define EDID_ID_SIZE								2380
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
	
	#define EDID_ID_CODE								0x2400
	#define EDID_ID_NAME								"HKM"
	#define VGA_EDID_table								"VGA"
	#define DP_EDID_table								"DP"
	#define HDMI_EDID_table 							"HDMI"

	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1200
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750
	
	#define _DEF_DIGITAL_VOL_MAX                        0xE14//0x1600
	#define _DEF_DIGITAL_VOL_CENTER						0x764//0x93D//0XD33
	
	#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
	#define _CT_7500_SUPPRT                             _ON
	#define _EOC_RTS_FPS_SUPPORT					    _OFF
	
	#define _DEF_P1_PICTURE_ITEM0      					_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      					_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      					_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3      					_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      					_MENU_FUN_OD
	#define _DEF_P1_PICTURE_ITEM5      					_MENU_NULL	
	
	#define _DEF_P2_DISPLAY_ITEM5      					_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM3    	  	 				_MENU_NULL
	
	#define _DEF_P6_MISC_ITEM1      	 				_MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM4      	 				_MENU_NULL
	
	#define _DEF_OSD_LANGUAGE_ARROW                     _OFF	
#elif(Project_ID    ==  _ID_CHUANGWU_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20260207)
	#define _LOGO_TYPE									_LOGO_NONE
	#define _DEF_LANGUAGE                               _RUSSIAN
	#define _OSD_LANGUAGE_DELETE                        _ON
		
	#define _DEF_COLORTEMP    					 		_CT_6500
			
	#define _DEF_HOTKEY_LEFT							_MENU_FUN_BACKLIGHT
	#define _DEF_HOTKEY_RIGHT							_MENU_FUN_ECO
		
	#define _BACKLIGHT_MAX								0x8C		
	#define _BACKLIGHT_DEF_PWM							0x7A		
	#define _BACKLIGHT_MIN								0x20
		
	#define EDID_HDR_SC 								_ON
	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_SIZE								2700
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
			
	#define EDID_ID_CODE								0x2700
	#define EDID_ID_NAME								"HKM"
	#define VGA_EDID_table								"VGA"
	#define DP_EDID_table								"DP"
	#define HDMI_EDID_table 							"HDMI"
		
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1200
	#define _PANEL_HDMI_MAX_FRAME_RATE					_PANEL_DP_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750
			
	#define _DEF_DIGITAL_VOL_MAX                        0xE14//0x1600
	#define _DEF_DIGITAL_VOL_CENTER						0x764//0x93D//0XD33
			
	#define _DEF_FACTORY_MODE							_ON//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE							_ON//�ϻ�ģʽĬ�Ͽ���	
	#define _CT_7500_SUPPRT                             _ON
	#define _EOC_RTS_FPS_SUPPORT					    _OFF
			
	#define _DEF_P1_PICTURE_ITEM0      					_MENU_FUN_BACKLIGHT
	#define _DEF_P1_PICTURE_ITEM1      					_MENU_FUN_CONTRAST
	#define _DEF_P1_PICTURE_ITEM2      					_MENU_FUN_ECO
	#define _DEF_P1_PICTURE_ITEM3      					_MENU_FUN_DCR
	#define _DEF_P1_PICTURE_ITEM4      					_MENU_FUN_OD
	#define _DEF_P1_PICTURE_ITEM5      					_MENU_NULL	
			
	#define _DEF_P2_DISPLAY_ITEM5      					_MENU_NULL
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_LOWBLUE
	#define _DEF_P5_RESET_ITEM3    	  	 				_MENU_NULL
			
	#define _DEF_P6_MISC_ITEM1      	 				_MENU_FUN_SHARPNESS
	#define _DEF_P6_MISC_ITEM2      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_NULL
	#define _DEF_P6_MISC_ITEM4      	 				_MENU_NULL
			
	#define _DEF_OSD_LANGUAGE_ARROW                     _OFF
	#define _FW_VERSION                         _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_2__,_0__,_7__

	
#elif(Project_ID    ==  _ID_RUIDE_2525BREQ4_TM238VFXJ09_FHD144HZ_20250910)
	 
	#define _BACKLIGHT_MAX									0Xd0
	#define _BACKLIGHT_DEF_PWM								0Xc0
	#define _BACKLIGHT_MIN									20
	#define _DEF_BACKLIGHT                                	80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
		
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
		
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE				1440//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE				750//_PANEL_MAX_FRAME_RATE
		
	#define _DEF_P1_PICTURE_ITEM5                                 _MENU_FUN_HDR
	#define _DEF_P3_COLORTEMP_ITEM4								  _MENU_FUN_GAMMA
	#define _DEF_P3_COLORTEMP_ITEM5								  _MENU_NULL//_MENU_FUN_COLORGAMUT
	#define _DEF_P4_OSDSETTING_ITEM5							  _MENU_FUN_POWER_OFF
		
	#define _DEF_P5_RESET_ITEM3    	  	 						 _MENU_FUN_LED								 //Ԥ����Чλ��
	#define _DEF_P5_RESET_ITEM4 								 _MENU_FUN_AUDOIVOLUME//Ԥ����Чλ��
	#define _DEF_P5_RESET_ITEM5 								 _MENU_FUN_AUDOIMUTE								 //Ԥ����Чλ��
	#define _DEF_P6_MISC_ITEM1									  _MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM2									  _MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM3									  _MENU_FUN_OSD_ROTATE
	#define _OD_WEAK_MID_HIGH                                    _ON
	
#elif(Project_ID == _ID_2513ARE02_PN238CS02_2_FHD100HZ_20260713)
#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC

#define _DEF_BACKLIGHT								80//
#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#define _DEF_LANGUAGE								_ARABIC

#define EDID_HDR_SC 								_ON//_HDR_SUPPORT//_OFF//���� ������HDR
#define EDID_SIZE_WR								_ON//д��ߴ�

#define OSD_TRANS								_ON

#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							24//�ܱ�

#define EDID_ID_NAME								"GEM"
#define VGA_EDID_table								"JY-KA-27"
#define DP_EDID_table								"JY-KA-27"
#define HDMI_EDID_table 							"JY-KA-27"

#define _BACKLIGHT_MAX								(0xFF-0X59)//0XA6
#define _BACKLIGHT_DEF_PWM							(0xFF-0X80)//0X93
#define _BACKLIGHT_MIN								0x10

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
#define _DEF_COLORTEMP										_CT_7500//Ĭ��ɫ��
#define _DEF_DIGITAL_VOL_MAX								0xFB8//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4
		
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL 
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIVOLUME  
#define _DEF_P6_MISC_ITEM3			_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4			_MENU_FUN_HDR
#define _OD_WEAK_MID_HIGH									 _ON
#elif(Project_ID == _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427)
#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC

#define _DEF_BACKLIGHT								80//
#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#define _DEF_LANGUAGE								_KOREAN

#define EDID_HDR_SC 								_ON//_HDR_SUPPORT//_OFF//���� ������HDR
#define EDID_SIZE_WR								_ON//д��ߴ�

#define OSD_TRANS								_ON

#if(SG2701B08_1)
#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							24//�ܱ�

#define EDID_ID_NAME								"GEM"
#define VGA_EDID_table								"JY-KA-27"
#define DP_EDID_table								"JY-KA-27"
#define HDMI_EDID_table 							"JY-KA-27"

#define _BACKLIGHT_MAX								(0xFF-0X59)//0XA6
#define _BACKLIGHT_DEF_PWM							(0xFF-0X80)//0X93
#define _BACKLIGHT_MIN								0x10

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
#define _DEF_COLORTEMP										_CT_7500//Ĭ��ɫ��
#define _DEF_DIGITAL_VOL_MAX								0xFB8//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4

#elif(HV320FHB_F41)
#define EDID_ID_CODE								0x3200
#define EDID_ID_SIZE								3150
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							24//�ܱ�

#define EDID_ID_NAME								"GEN"
#define VGA_EDID_table								"JY-KA-32"
#define DP_EDID_table								"JY-KA-32"
#define HDMI_EDID_table 							"JY-KA-32"

#define _BACKLIGHT_MAX								(0xFF-0X00)
#define _BACKLIGHT_DEF_PWM							(0xFF-0X4B)
#define _BACKLIGHT_MIN								0x10

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					750//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
#define _DEF_COLORTEMP										_CT_6500//Ĭ��ɫ��
#define _DEF_DIGITAL_VOL_MAX								0xFB8//0xCC8//1.96W
#define _DEF_DIGITAL_VOL_CENTER                           	0x9F5//0x664//0x6A4

#else
#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							23//�ܱ�

#define EDID_ID_NAME								"HKC"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
#define _DEF_COLORTEMP										_CT_7500//Ĭ��ɫ��

#endif

		
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL 
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIVOLUME  
#define _DEF_P6_MISC_ITEM3			_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4			_MENU_FUN_HDR
#define _OD_WEAK_MID_HIGH									 _ON
#elif(Project_ID == _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730)

#define _LOGO_TYPE 									_LOGO_PROLOGIX
#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC

#define _DEF_BACKLIGHT								80//
#define _DEF_LANGUAGE                               _UKRAINE
	
#define _UKRAINE_SUPPRT							_ON //�Ƿ������ڿ�����,���ڿ������뿪���ȱ����
#define _UZBEK_SUPPRT							_ON //�Ƿ��������ȱ����
#define _ENABLE_PAWER_SAVING_MENU				_OFF
#define _CT_7500_SUPPRT							_ON //�Ƿ�����7500ɫ��
#define _ENABLE_VGA_AUTO_ADJUST						_ON
#define EDID_HDR_SC 								_ON//_HDR_SUPPORT//_OFF//���� ������HDR
#define EDID_SIZE_WR								_ON//д��ߴ�
#define EDID_ID_CODE								0x2719
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							31//�ܱ�

#define EDID_ID_NAME								"XYM"
#define VGA_EDID_table								"P2725HV"//"27MP56"//"27MP55"
#define DP_EDID_table								"P2725HV"//"27MP56"//"27MP55"
#define HDMI_EDID_table 							"P2725HV"//"27MP56"//"27MP55"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X90
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1200//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#define _DEF_COLORTEMP										_CT_6500//Ĭ��ɫ��

		
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_ECO
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM4      _MENU_NULL
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL								//Ԥ��HDRλ��

#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_VGA_VPOSITON
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
#define _DEF_P6_MISC_ITEM1      	 _MENU_NULL
#define _DEF_P6_MISC_ITEM2      	 _MENU_NULL  
#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL
#define _DEF_P6_MISC_ITEM4      	 _MENU_NULL							//Ԥ��freesyncλ��
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL


#define _DEF_HOTKEY_LEFT							_MENU_FUN_CONTRAST
#define _DEF_HOTKEY_RIGHT							_MENU_FUN_BACKLIGHT
#define _DEF_GAMMA										    _GAMMA_22 

#elif(Project_ID == _ID_MNT_2313BRE01_PN238CS02_2_FHD100HZ_20260427)
#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC

#define _DEF_BACKLIGHT								80//

#define _DEF_LANGUAGE								_ENGLISH

#define EDID_HDR_SC 								_ON//_HDR_SUPPORT//_OFF//���� ������HDR
#define EDID_SIZE_WR								_ON//д��ߴ�
#if(PN270CU01_6)
#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							18//�ܱ�

#define EDID_ID_NAME								"HKC"
#define VGA_EDID_table								"27MP52"
#define DP_EDID_table								"27MP52"
#define HDMI_EDID_table 							"27MP52"

#define _BACKLIGHT_MAX								0XB8
#define _BACKLIGHT_DEF_PWM							0XA6
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif((SG2701B08_1))
#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							18//�ܱ�

#define EDID_ID_NAME								"HKC"
#define VGA_EDID_table								"27MP52"
#define DP_EDID_table								"27MP52"
#define HDMI_EDID_table 							"27MP52"

#define _BACKLIGHT_MAX								0XB8
#define _BACKLIGHT_DEF_PWM							0XA6
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1200//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif(SG2381B04_1_shan)
#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�

#define EDID_ID_NAME								"HKM"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1200//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif(SG2701B08_1_LONG)
#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�

#define EDID_ID_NAME								"MNT"
#define VGA_EDID_table								"27MP55"//"27MP56"//"27MP55"
#define DP_EDID_table								"27MP55"//"27MP56"//"27MP55"
#define HDMI_EDID_table 							"27MP55"//"27MP56"//"27MP55"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1200//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif(SG2381B04_1)
#define EDID_ID_CODE								0x2400
#define EDID_ID_SIZE								2400
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�

#define EDID_ID_NAME								"MNT"
#define VGA_EDID_table								"24MP55"
#define DP_EDID_table								"24MP55"
#define HDMI_EDID_table 							"24MP55"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1200//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif(SG2381B04_144)
#define EDID_ID_CODE								0x2400
#define EDID_ID_SIZE								2400
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�

#define EDID_ID_NAME								"MNT"
#define VGA_EDID_table								"24MP55"
#define DP_EDID_table								"24MP55"
#define HDMI_EDID_table 							"24MP55"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1440//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif(SG2381B04_144_2)
#define EDID_ID_CODE								0x2400
#define EDID_ID_SIZE								2400
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�
	
#define EDID_ID_NAME								"MNT"
#define VGA_EDID_table								"24MP56"
#define DP_EDID_table								"24MP56"
#define HDMI_EDID_table 							"24MP56"
	
#define _BACKLIGHT_MAX								0X81
#define _BACKLIGHT_DEF_PWM							0X71
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1440//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif(SG2701B08_1_144_27M56)
#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2700
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�

#define EDID_ID_NAME								"MNT"
#define VGA_EDID_table								"27MP56"
#define DP_EDID_table								"27MP56"
#define HDMI_EDID_table 							"27MP56"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1440//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#elif((SG2701B08_1_144))
#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2400
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�

#define EDID_ID_NAME								"MNT"
#define VGA_EDID_table								"27MP55"
#define DP_EDID_table								"27MP55"
#define HDMI_EDID_table 							"27MP55"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1440//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#else
#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							18//�ܱ�

#define EDID_ID_NAME								"HKC"
#define VGA_EDID_table								"24MP51"
#define DP_EDID_table								"24MP51"
#define HDMI_EDID_table 							"24MP51"

#define _BACKLIGHT_MAX								0XA6
#define _BACKLIGHT_DEF_PWM							0X93
#define _BACKLIGHT_MIN								0x10
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE

#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#endif
#define _DEF_COLORTEMP										_CT_7500//Ĭ��ɫ��

		
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL 
#define _DEF_P5_RESET_ITEM4 								 _MENU_FUN_GAMMA//Ԥ����Чλ��
#define _DEF_P6_MISC_ITEM1									  _MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM2									  _MENU_FUN_OD
#define _DEF_P6_MISC_ITEM3									  _MENU_FUN_HDR
#define _DEF_P6_MISC_ITEM4									  _MENU_FUN_MPRT
#define _OD_WEAK_MID_HIGH									 _ON

#define _DEF_HOTKEY_LEFT							_HOT_KEY_LOS_TYPE1
#define _DEF_HOTKEY_RIGHT							_MENU_FUN_BACKLIGHT
#define _DEF_GAMMA										    _GAMMA_22 
#elif(Project_ID == _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629)
#define _BACKLIGHT_MAX								0XB8
#define _BACKLIGHT_DEF_PWM							0XA6
#define _BACKLIGHT_MIN								0x10
#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC

#define _DEF_BACKLIGHT								80//
#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#define _DEF_LANGUAGE								_ENGLISH

#define EDID_HDR_SC 								_ON//_HDR_SUPPORT//_OFF//���� ������HDR
#define EDID_SIZE_WR								_ON//д��ߴ�
#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							26//�ܱ�

#define EDID_ID_NAME								"CLP"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"
		
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1200//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
		
#define _OD_WEAK_MID_HIGH									 _ON

#elif(Project_ID == _ID_CLP_2513BRE02_SG2381B04_1_FHD120HZ_20260702)
#define _BACKLIGHT_MAX								0XA8
#define _BACKLIGHT_DEF_PWM							0X9E
#define _BACKLIGHT_MIN								0x10
#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC

#define _DEF_BACKLIGHT								80//
#define _CONTRAST_MAX								178
#define _CONTRAST_MIN								78

#define _DEF_LANGUAGE								_ENGLISH

#define EDID_HDR_SC 								_ON//_HDR_SUPPORT//_OFF//���� ������HDR
#define EDID_SIZE_WR								_ON//д��ߴ�
#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							27//�ܱ�

#define EDID_ID_NAME								"CLP"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"
		
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1200//_PANEL_DP_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
		
#define _OD_WEAK_MID_HIGH									 _ON


#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_SN238CS08_1_FHD144HZ_20251103)

	#define _BACKLIGHT_MAX								0XB8
	#define _BACKLIGHT_DEF_PWM							0XA6
	#define _BACKLIGHT_MIN								0x10
	#define _DEF_IR_PROTOCAL                            _IR_MXDZ_NEC
	
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	
	#define _DEF_LANGUAGE                               _SPANISH
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2380
	#define EDID_ID_SIZE                           	 	2380
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�

	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1440//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
			
	#define _OD_WEAK_MID_HIGH                                    _ON
	
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV400FHB_F11_FHD60HZ_20260321)
	#define _BACKLIGHT_MAX								0XB8
	#define _BACKLIGHT_DEF_PWM							0XA6
	#define _BACKLIGHT_MIN								0x10
	#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC
	
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	
	#define _DEF_LANGUAGE                               _SPANISH
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x4000
	#define EDID_ID_SIZE                           	 	4000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�

	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _OD_WEAK_MID_HIGH                                    _ON
	
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV430FHB_F91_FHD60HZ_20260321)
	#define _BACKLIGHT_MAX								0XB8
	#define _BACKLIGHT_DEF_PWM							0XA6
	#define _BACKLIGHT_MIN								0x10
	#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC
	
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	
	#define _DEF_LANGUAGE                               _SPANISH
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x4300
	#define EDID_ID_SIZE                           	 	4300
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�

	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
			
	#define _OD_WEAK_MID_HIGH                                    _ON
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321)
	#define _BACKLIGHT_MAX								(0xff-0X20)
	#define _BACKLIGHT_DEF_PWM							(0xff-0X40)
	#define _BACKLIGHT_MIN								(0xff-0x48)
	
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC
	
	#define _DEF_LANGUAGE                               _SPANISH
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x5000
	#define EDID_ID_SIZE                           	 	5000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�

	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
			
	#define _OD_WEAK_MID_HIGH                                    _ON
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV236WHB_F10_FHD60HZ_20260321)
	#define _BACKLIGHT_MAX								0XB8
	#define _BACKLIGHT_DEF_PWM							0XA6
	#define _BACKLIGHT_MIN								0x10
		
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC
		
	#define _DEF_LANGUAGE                               _SPANISH
		
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2380
	#define EDID_ID_SIZE                           	 	2380
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
	
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
				
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
				
	#define _OD_WEAK_MID_HIGH                                    _ON
	
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV320WHB_F73_FHD60HZ_20260321)
	#define _BACKLIGHT_MAX								0XB8
	#define _BACKLIGHT_DEF_PWM							0XA6
	#define _BACKLIGHT_MIN								0x10
	#define _DEF_IR_PROTOCAL							_IR_MXDZ_NEC
			
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
			
	#define _DEF_LANGUAGE                               _SPANISH
			
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2380
	#define EDID_ID_SIZE                           	 	2380
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
		
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
					
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
					
	#define _OD_WEAK_MID_HIGH                                    _ON

#elif(Project_ID    ==  _ID_ZZY_2525BRE09_MV238FHM_N63_FHD100HZ_20251226)
	#define _LOGO_TYPE                                  _LOGO_GREATWALL
	#define _BACKLIGHT_MAX								0x55//0XB8
	#define _BACKLIGHT_DEF_PWM							0x49//0XA6
	#define _BACKLIGHT_MIN								0x10
	
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	
	#define _BRIGHTNESS_CENTER                          130
	
	#define _DEF_LANGUAGE                               _CHINESE_S
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2380
	#define EDID_ID_SIZE                           	 	2380
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
	
	#define EDID_ID_NAME                            	"CGC"
	#define VGA_EDID_table                          	"2552EKH"
	#define DP_EDID_table                          		"2552EKH"
	#define HDMI_EDID_table                         	"2552EKH"
				
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_MIDEL
	#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	
	#define _OD_WEAK_MID_HIGH                                    _ON
	#define _BURN_IN_LED                                         _ON
	
	#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_BRIGHTNESS
	
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_MPRT
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_NULL
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL
	
#elif(Project_ID    ==  _ID_ZZY_2525BRE09_MV238FHM_NX5_FHD100HZ_20260302)
	#define _LOGO_TYPE                                  _LOGO_GREATWALL
	#define _BACKLIGHT_MAX								0x55//0XB8
	#define _BACKLIGHT_DEF_PWM							0x49//0XA6
	#define _BACKLIGHT_MIN								0x10
	
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	
	#define _BRIGHTNESS_CENTER                          130
	
	#define _DEF_LANGUAGE                               _CHINESE_S
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2380
	#define EDID_ID_SIZE                           	 	2380
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
	
	#define EDID_ID_NAME                            	"CGC"
	#define VGA_EDID_table                          	"2552EKH"
	#define DP_EDID_table                          		"2552EKH"
	#define HDMI_EDID_table                         	"2552EKH"
				
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_MIDEL
	#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	
	#define _OD_WEAK_MID_HIGH                                    _ON
	#define _BURN_IN_LED                                         _ON
	
	#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_BRIGHTNESS
	
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_MPRT
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_NULL
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL	
#elif(Project_ID    ==  _ID_ZZY_2525BRE09_MV238FHM_NX4_FHD100HZ_20251118)
	#define _LOGO_TYPE                                  _LOGO_GREATWALL
	#define _BACKLIGHT_MAX								0x55//0XB8
	#define _BACKLIGHT_DEF_PWM							0x49//0XA6
	#define _BACKLIGHT_MIN								0x10
	
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								178
	#define _CONTRAST_MIN								78
	
	#define _BRIGHTNESS_CENTER                          130
	
	#define _DEF_LANGUAGE                               _CHINESE_S
	
	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2380
	#define EDID_ID_SIZE                           	 	2380
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
	
	#define EDID_ID_NAME                            	"CGC"
	#define VGA_EDID_table                          	"2552EKH"
	#define DP_EDID_table                          		"2552EKH"
	#define HDMI_EDID_table                         	"2552EKH"
				
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_MIDEL
	#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	
	#define _OD_WEAK_MID_HIGH                                    _ON
	#define _BURN_IN_LED                                         _ON
	
	#define _DEF_P1_PICTURE_ITEM2      							_MENU_FUN_BRIGHTNESS
	
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_MPRT
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_NULL
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL
	
	
#elif(Project_ID    ==  ID_CS_2795)
	
	#define _BACKLIGHT_DEF_PWM								(0xff-0X80)
	#define _BACKLIGHT_MAX									(0xff-0X60)
	#define _BACKLIGHT_MIN									20
	#define _DEF_BACKLIGHT                                	80//
	#define _CONTRAST_MAX								2848
	#define _CONTRAST_MIN								1248

	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
		
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
		
	#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE				1800//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE				600//_PANEL_MAX_FRAME_RATE
	
#elif(Project_ID    ==  ID_CS_2556)
	#define _BACKLIGHT_DEF_PWM							0X60
	#define _BACKLIGHT_MAX								0X80
	#define _BACKLIGHT_MIN								20
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								2848
	#define _CONTRAST_MIN								1248

	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
		
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
		
	#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE				2400//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE				600//_PANEL_MAX_FRAME_RATE
	
#elif(Project_ID    ==  ID_CS_2795_M270QAN070_UHD)
	#define _BACKLIGHT_DEF_PWM							0X60
	#define _BACKLIGHT_MAX								0X80
	#define _BACKLIGHT_MIN								20
	#define _DEF_BACKLIGHT                              80//
	#define _CONTRAST_MAX								2848
	#define _CONTRAST_MIN								1248
	#define _DEF_P3_COLORTEMP_ITEM4      				_MENU_FUN_ROTATE
	#define _DEF_P3_COLORTEMP_ITEM5 					_MENU_FUN_OSD_ROTATE
	#define _LOGO_TYPE									_LOGO_ANMTE
	#define _DEF_OSDROTATE							    _OSD_ROTATE_DEGREE_0//osd ��ת
	#define _DEF_DISP_ROTATE							_DISP_ROTATE_0//ͼ����ת
	#define _DEF_HOTKEY_LEFT                 				    _HOT_KEY_LOS_TYPE1

	#define EDID_HDR_SC									_ON//_HDR_SUPPORT//_OFF//���� ������HDR
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_COLOR_CHARACTERISTICS_INFO				_OFF//
	
	#define _DEF_COLOR1				0xe8
	#define _DEF_COLOR2				0xe0
	#define _DEF_COLOR3				0xAD
	#define _DEF_COLOR4				0x4E
	#define _DEF_COLOR5				0x44
	#define _DEF_COLOR6				0xA9
	#define _DEF_COLOR7				0x26
	#define _DEF_COLOR8				0x0D
	#define _DEF_COLOR9				0x4B
	#define _DEF_COLORA				0x4C
	
	#define _DEF_HDR_STATIC 				_OFF//
	#define _DEF_HDR_STATIC_BYTE0			0X72//
	#define _DEF_HDR_STATIC_BYTE1			0X72//
	#define _DEF_HDR_STATIC_BYTE2			0//

	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
		
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
		
	#define _MEW_EDID_TYPE							_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE				1800//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE				1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE				600//_PANEL_MAX_FRAME_RATE
	
#elif(Project_ID    ==  ID_CS_2795_GC_MV270QUM_N60_UHD)
	//#define _BACKLIGHT_DEF_PWM							0XE0
	//#define _BACKLIGHT_MAX								0XFF
	#define _BACKLIGHT_DEF_PWM							0X60
	#define _BACKLIGHT_MAX								0X80
	#define _BACKLIGHT_MIN								20
	#define _DEF_BACKLIGHT                              80//
	#define _LOGO_TYPE									_LOGO_NONE
	#define _DEF_HOTKEY_LEFT                 			_HOT_KEY_LOS_TYPE1
	#define EDID_SIZE_WR								_ON//д��ߴ�

	#define EDID_ID_CODE                            	0x2700
	#define EDID_ID_SIZE                           	 	2700//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�
		
	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
		
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_5__,_0__,_9__,_0__,_9__
	
#elif(Project_ID    ==  ID_SHIQI_2795E12_SG3402H01_1_WQHD100HZ_20251110)
	#define _BACKLIGHT_DEF_PWM							0X60
	#define _BACKLIGHT_MAX								0X80
	#define _BACKLIGHT_MIN								20
	#define _DEF_BACKLIGHT                              80
	#define _LOGO_TYPE									_LOGO_NONE
	#define _DEF_HOTKEY_LEFT                 			_HOT_KEY_LOS_TYPE1
	#define EDID_SIZE_WR								_ON//д��ߴ�

	#define EDID_ID_CODE                            	0x3400
	#define EDID_ID_SIZE                           	 	3400//0x0000
	#define EDID_YEAR_table                         	2025//���
	#define EDID_WEEK_table                         	1//�ܱ�

	#define EDID_ID_NAME                            	"HKM"
	#define VGA_EDID_table                          	"VGA"
	#define DP_EDID_table                          		"DP"
	#define HDMI_EDID_table                         	"HDMI"
		
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1000//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _FW_VERSION 						_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_5__,_1__,_1__,_1__,_0__
	
#elif(Project_ID == ID_TEST_HK255XE05_1H2DP_MV270FHB_NF6_FHD240HZ_20260204)
	#define _LOGO_TYPE											_LOGO_NONE
	#define _MPRT_MIN_FRAME_RATE         						750
	
	#define _DEF_OD										        _OFF//N
	#define	_OSD_BLACK_WHITE_TYPE								_OFF //�ڰ׺����ײ˵�ѡ��
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60

	#define _CONTRAST_MAX										2592//2848
	#define _CONTRAST_MIN										1248
	
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _BACKLIGHT_MAX										0x7F//0xAF
	#define _BACKLIGHT_DEF_PWM									0x66//0x7F
	#define _BACKLIGHT_MIN										0x1C
	
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	
	#define _DEF_LANGUAGE										_ENGLISH//
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
	
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
	
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_5__,_1__,_1__,_1__,_3__

	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_USER
	
	#define EDID_SIZE_WR								_ON//д��ߴ�
	
	#define EDID_ID_CODE								0x2380
	#define EDID_ID_SIZE								2380//0x0000
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
	
	#define EDID_ID_NAME								"JPN"
	#define DP_EDID_table								"JAPANNEXT.MNT"
	#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
	#define VGA_EDID_table								DP_EDID_table//"VGA"
	
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE	
#elif(Project_ID == ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903)
	#define _LOGO_TYPE											_LOGO_JAPANNEXT 
	#define _MPRT_MIN_FRAME_RATE         						750
	
	#define _DEF_OD										        _OFF//N
	#define	_OSD_BLACK_WHITE_TYPE								_ON //�ڰ׺����ײ˵�ѡ��
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60

	#define _CONTRAST_MAX										2592//2848
	#define _CONTRAST_MIN										1248
	
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _BACKLIGHT_MAX										0x7F//0xAF
	#define _BACKLIGHT_DEF_PWM									0x66//0x7F
	#define _BACKLIGHT_MIN										0x1C
	
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	
	#define _DEF_LANGUAGE										_JAPANESE//_ENGLISH
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
	
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
	
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_5__,_1__,_1__,_1__,_3__

	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_USER
	
	#define EDID_SIZE_WR								_ON//д��ߴ�
	
	#define EDID_ID_CODE								0x2380
	#define EDID_ID_SIZE								2380//0x0000
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
	
	#define EDID_ID_NAME								"JPN"
	#define DP_EDID_table								"JAPANNEXT.MNT"
	#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
	#define VGA_EDID_table								DP_EDID_table//"VGA"
	
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _DEF_OD_GAIN                                0x40
	
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
	#if(_VERSION_NO_LED)
g	#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
	#else
	#define _DEF_P5_RESET_ITEM4 								_MENU_FUN_LED
	#endif
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
						
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL	
	
#elif(Project_ID ==ID_MC_HK2556E01_SG3151B05_8_FHD165HZ_20260612)
#define _LOGO_TYPE											_LOGO_NONE 
#define _MPRT_MIN_FRAME_RATE								750

#define _DEF_OD 											_OFF//N
#define _DEF_BACKLIGHT										80
#define _MPRT_RATIO 										60

#define _CONTRAST_MAX										2592//2848
#define _CONTRAST_MIN										1248

#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300

#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

#define _DEF_HOTKEY_LEFT									_MENU_FUN_BACKLIGHT
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX										0x7F//0xAF
#define _BACKLIGHT_DEF_PWM									0x66//0x7F
#define _BACKLIGHT_MIN										0x1C

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_GAMMA											_GAMMA_22
#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON 									_ON //�ź��л��Ƿ��auto
#define _CT_sRGB_SUPPRT 									_ON  //ɫ���Ƿ��sRGB
#define _OSD_POWER_SAVING_MODE								_ON

#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _DEF_HDR_MPRT_GRAY									_OFF

#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
#define _OD_WEAK											0X18
#define _OD_MID 											0X30
#define _OD_STRONG											0X40
#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
#define _MPRT_DCR_REPULSION 								_ON  //DCR��MPRT����

#define _DEF_Energy_Msg 									_OFF//��Ч��ʾ����
#define _MC_EUROPE											_ON

#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_6__,_1__,_2__

#define _DEF_OSD_TIMEOUT									20
#define _DEF_COLORTEMP										_CT_6500

#define EDID_SIZE_WR								_ON//д��ߴ�

#define EDID_ID_CODE								0x3150
#define EDID_ID_SIZE								3150//0x0000
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							24//�ܱ�

#define EDID_ID_NAME								"XYM"
#define VGA_EDID_table								"32MC02B"
#define DP_EDID_table								"32MC02B"
#define HDMI_EDID_table 							"32MC02B"


#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1650//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1650//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
#define _DEF_OD_GAIN								0x40

#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1								_MENU_NULL
#define _DEF_P2_DISPLAY_ITEM2								_MENU_NULL
#define _DEF_P2_DISPLAY_ITEM3								_MENU_NULL
#define _DEF_P2_DISPLAY_ITEM4								_MENU_NULL
#define _DEF_P2_DISPLAY_ITEM5								_MENU_NULL
			
#define _DEF_P3_COLORTEMP_ITEM0 							_MENU_FUN_COLORTEMP
#define _DEF_P3_COLORTEMP_ITEM1 							_MENU_FUN_R
#define _DEF_P3_COLORTEMP_ITEM2 							_MENU_FUN_G
#define _DEF_P3_COLORTEMP_ITEM3 							_MENU_FUN_B
#define _DEF_P3_COLORTEMP_ITEM4 							_MENU_FUN_GAMMA
#define _DEF_P3_COLORTEMP_ITEM5 							_MENU_NULL
	
#define _DEF_P4_OSDSETTING_ITEM0							_MENU_FUN_LANGUAGE
#define _DEF_P4_OSDSETTING_ITEM1							_MENU_FUN_OSD_HPOSITON
#define _DEF_P4_OSDSETTING_ITEM2							_MENU_FUN_OSD_VPOSITON
#define _DEF_P4_OSDSETTING_ITEM3							_MENU_FUN_OSD_TIME
#define _DEF_P4_OSDSETTING_ITEM4							_MENU_FUN_OSD_TRANS
#define _DEF_P4_OSDSETTING_ITEM5							_MENU_NULL 
	
#define _DEF_P5_RESET_ITEM0 								_MENU_FUN_RESET

#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_MPRT
#define _DEF_P5_RESET_ITEM3 								_MENU_NULL	
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIMUTE
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM4									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM5									_MENU_FUN_OD	
#elif(Project_ID ==ID_MC_HK255XE05_SG270AB02_5_FHD240HZ_20250903)
#define _LOGO_TYPE											_LOGO_NONE 
#define _MPRT_MIN_FRAME_RATE								750

#define _DEF_OD 											_OFF//N
#define _DEF_BACKLIGHT										80
#define _MPRT_RATIO 										60

#define _CONTRAST_MAX										2592//2848
#define _CONTRAST_MIN										1248

#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300

#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX										0xAA//0xAF
#define _BACKLIGHT_DEF_PWM									0x9B//0x7F
#define _BACKLIGHT_MIN										0x1C

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_GAMMA											_GAMMA_22
#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON 									_ON //�ź��л��Ƿ��auto
#define _CT_sRGB_SUPPRT 									_ON  //ɫ���Ƿ��sRGB
#define _OSD_POWER_SAVING_MODE								_ON

#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _DEF_HDR_MPRT_GRAY									_OFF

#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
#define _OD_WEAK											0X18
#define _OD_MID 											0X30
#define _OD_STRONG											0X40
#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
#define _MPRT_DCR_REPULSION 								_ON  //DCR��MPRT����

#define _MC_LANGUAGE										_ON
#define _DEF_Energy_Msg 									_ON//��Ч��ʾ����
#define _DEF_Energy_Value									20
#define _MC_EUROPE											_ON

#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_6__,_2__,_6__

#define _DEF_OSD_TIMEOUT									20
#define _DEF_COLORTEMP										_CT_USER

#define EDID_SIZE_WR								_ON//д��ߴ�

#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380//0x0000
#define EDID_YEAR_table 							2025//���
#define EDID_WEEK_table 							1//�ܱ�

#define EDID_ID_NAME								"CLP"
#define DP_EDID_table								"JAPANNEXT.MNT"
#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
#define VGA_EDID_table								DP_EDID_table//"VGA"

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
#define _DEF_OD_GAIN								0x40

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
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
#define _DEF_P6_MISC_ITEM5									_MENU_NULL	

#elif(Project_ID ==ID_MC_HK255XE05_SG2381B01_1_FHD120HZ_20260702)
#define _LOGO_TYPE											_LOGO_NONE 
#define _MPRT_MIN_FRAME_RATE								750

#define _DEF_OD 											_OFF//N
#define _DEF_BACKLIGHT										80
#define _MPRT_RATIO 										60

#define _CONTRAST_MAX										2592//2848
#define _CONTRAST_MIN										1248

#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300

#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX										0x8B//0xAF
#define _BACKLIGHT_DEF_PWM									0x7B//0x7F
#define _BACKLIGHT_MIN										0x1C

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_GAMMA											_GAMMA_22
#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON 									_ON //�ź��л��Ƿ��auto
#define _CT_sRGB_SUPPRT 									_ON  //ɫ���Ƿ��sRGB
#define _OSD_POWER_SAVING_MODE								_ON

#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _DEF_HDR_MPRT_GRAY									_OFF

#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
#define _OD_WEAK											0X18
#define _OD_MID 											0X30
#define _OD_STRONG											0X40
#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
#define _MPRT_DCR_REPULSION 								_ON  //DCR��MPRT����

#define _MC_LANGUAGE										_ON

#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_7__,_0__,_2__

#define _DEF_OSD_TIMEOUT									20
#define _DEF_COLORTEMP										_CT_USER

#define EDID_SIZE_WR								_ON//д��ߴ�

#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380//0x0000
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							27//�ܱ�

#define EDID_ID_NAME								"CLP"
#define DP_EDID_table								"JAPANNEXT.MNT"
#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
#define VGA_EDID_table								DP_EDID_table//"VGA"

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1800//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1800//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
#define _DEF_OD_GAIN								0x40

#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING
#define _DEF_P2_DISPLAY_ITEM2								_MENU_FUN_LED
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
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
#define _DEF_P6_MISC_ITEM5									_MENU_NULL	

#elif(Project_ID ==ID_MC_HK255XE05_SG270AB02_5_FHD120HZ_20260702)
#define _LOGO_TYPE											_LOGO_NONE 
#define _MPRT_MIN_FRAME_RATE								750

#define _DEF_OD 											_OFF//N
#define _DEF_BACKLIGHT										80
#define _MPRT_RATIO 										60

#define _CONTRAST_MAX										2592//2848
#define _CONTRAST_MIN										1248

#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300

#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX										0x78//0xAF
#define _BACKLIGHT_DEF_PWM									0x72//0x7F
#define _BACKLIGHT_MIN										0x1C

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_GAMMA											_GAMMA_22
#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON 									_ON //�ź��л��Ƿ��auto
#define _CT_sRGB_SUPPRT 									_ON  //ɫ���Ƿ��sRGB
#define _OSD_POWER_SAVING_MODE								_ON

#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _DEF_HDR_MPRT_GRAY									_OFF

#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
#define _OD_WEAK											0X18
#define _OD_MID 											0X30
#define _OD_STRONG											0X40
#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
#define _MPRT_DCR_REPULSION 								_ON  //DCR��MPRT����

#define _MC_LANGUAGE										_ON

#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_7__,_0__,_2__

#define _DEF_OSD_TIMEOUT									20
#define _DEF_COLORTEMP										_CT_USER

#define EDID_SIZE_WR								_ON//д��ߴ�

#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380//0x0000
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							27//�ܱ�

#define EDID_ID_NAME								"CLP"
#define DP_EDID_table								"JAPANNEXT.MNT"
#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
#define VGA_EDID_table								DP_EDID_table//"VGA"

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
#define _DEF_OD_GAIN								0x40

#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING
#define _DEF_P2_DISPLAY_ITEM2								_MENU_FUN_LED
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
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
#define _DEF_P6_MISC_ITEM5									_MENU_NULL

#elif(Project_ID ==ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_370MA_20260702)
#define _LOGO_TYPE											_LOGO_NONE 
#define _MPRT_MIN_FRAME_RATE								750

#define _DEF_OD 											_OFF//N
#define _DEF_BACKLIGHT										80
#define _MPRT_RATIO 										60

#define _CONTRAST_MAX										2592//2848
#define _CONTRAST_MIN										1248

#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300

#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX										0x8B//0xAF
#define _BACKLIGHT_DEF_PWM									0x7B//0x7F
#define _BACKLIGHT_MIN										0x1C

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_GAMMA											_GAMMA_22
#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON 									_ON //�ź��л��Ƿ��auto
#define _CT_sRGB_SUPPRT 									_ON  //ɫ���Ƿ��sRGB
#define _OSD_POWER_SAVING_MODE								_ON

#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _DEF_HDR_MPRT_GRAY									_OFF

#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
#define _OD_WEAK											0X18
#define _OD_MID 											0X30
#define _OD_STRONG											0X40
#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
#define _MPRT_DCR_REPULSION 								_ON  //DCR��MPRT����

#define _MC_LANGUAGE										_ON

#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_7__,_0__,_2__

#define _DEF_OSD_TIMEOUT									20
#define _DEF_COLORTEMP										_CT_USER

#define EDID_SIZE_WR								_ON//д��ߴ�

#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380//0x0000
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							27//�ܱ�

#define EDID_ID_NAME								"CLP"
#define DP_EDID_table								"JAPANNEXT.MNT"
#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
#define VGA_EDID_table								DP_EDID_table//"VGA"

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
#define _DEF_OD_GAIN								0x40

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
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
#define _DEF_P6_MISC_ITEM5									_MENU_NULL

#elif(Project_ID ==ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_300MA_20260702)
#define _LOGO_TYPE											_LOGO_NONE 
#define _MPRT_MIN_FRAME_RATE								750

#define _DEF_OD 											_OFF//N
#define _DEF_BACKLIGHT										80
#define _MPRT_RATIO 										60

#define _CONTRAST_MAX										2592//2848
#define _CONTRAST_MIN										1248

#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300

#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX										0x78//0xAF
#define _BACKLIGHT_DEF_PWM									0x72//0x7F
#define _BACKLIGHT_MIN										0x1C

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_GAMMA											_GAMMA_22
#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON 									_ON //�ź��л��Ƿ��auto
#define _CT_sRGB_SUPPRT 									_ON  //ɫ���Ƿ��sRGB
#define _OSD_POWER_SAVING_MODE								_ON

#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _DEF_HDR_MPRT_GRAY									_OFF

#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
#define _OD_WEAK											0X18
#define _OD_MID 											0X30
#define _OD_STRONG											0X40
#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
#define _MPRT_DCR_REPULSION 								_ON  //DCR��MPRT����

#define _MC_LANGUAGE										_ON

#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_6__,_2__,_6__

#define _DEF_OSD_TIMEOUT									20
#define _DEF_COLORTEMP										_CT_USER

#define EDID_SIZE_WR								_ON//д��ߴ�

#define EDID_ID_CODE								0x2380
#define EDID_ID_SIZE								2380//0x0000
#define EDID_YEAR_table 							2025//���
#define EDID_WEEK_table 							1//�ܱ�

#define EDID_ID_NAME								"CLP"
#define DP_EDID_table								"JAPANNEXT.MNT"
#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
#define VGA_EDID_table								DP_EDID_table//"VGA"

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
#define _DEF_OD_GAIN								0x40

#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING
#define _DEF_P2_DISPLAY_ITEM2								_MENU_FUN_LED
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
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
#define _DEF_P6_MISC_ITEM5									_MENU_NULL

#elif(Project_ID == ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20260226_EUROPE)
	#define _LOGO_TYPE											_LOGO_JAPANNEXT 
	#define _MPRT_MIN_FRAME_RATE         						750
	
	#define _DEF_OD										        _OFF//N
	#define	_OSD_BLACK_WHITE_TYPE								_ON //�ڰ׺����ײ˵�ѡ��
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60

	#define _CONTRAST_MAX										2592//2848
	#define _CONTRAST_MIN										1248
	
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	
	#define _BACKLIGHT_MAX										0x7F//0xAF
	#define _BACKLIGHT_DEF_PWM									0x66//0x7F
	#define _BACKLIGHT_MIN										0x1C
	
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	
	#define _DEF_LANGUAGE										_ENGLISH
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
	
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
	
	#define _MC_LANGUAGE                                        _ON
	#define _DEF_Energy_Msg										_ON//��Ч��ʾ����
	#define _DEF_Energy_Value									20
	#define _MC_EUROPE                                          _ON
	
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_2__,_2__,_6__
	
	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_USER
	
	#define EDID_SIZE_WR								_ON//д��ߴ�
	
	#define EDID_ID_CODE								0x2380
	#define EDID_ID_SIZE								2380//0x0000
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
	
	#define EDID_ID_NAME								"JPN"
	#define DP_EDID_table								"JAPANNEXT.MNT"
	#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
	#define VGA_EDID_table								DP_EDID_table//"VGA"
	
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _DEF_OD_GAIN                                0x40
	
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
	#if(_VERSION_NO_LED)
	#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
	#else
	#define _DEF_P5_RESET_ITEM4 								_MENU_FUN_LED
	#endif
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
						
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL	
	
#elif(Project_ID == ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215)
	#define _LOGO_TYPE											_LOGO_JAPANNEXT 
	#define _MPRT_MIN_FRAME_RATE         						750

	#define _DEF_OD										        _OFF//
	#define	_OSD_BLACK_WHITE_TYPE								_ON //�ڰ׺����ײ˵�ѡ��
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60

	#define _CONTRAST_MAX										2592//2848
	#define _CONTRAST_MIN										1248
	
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	  
	#define _BACKLIGHT_MAX										0x7F//0xAF
	#define _BACKLIGHT_DEF_PWM									0x66//0x7F
	#define _BACKLIGHT_MIN										0x1C
	
	#define _MPRT_PWM_MAX         							    0xE0
	#define _MPRT_PWM_DEF          								0xC0
	#define _MPRT_PWM_MIN         								0x60
	
	#define _DEF_LANGUAGE										_JAPANESE//_ENGLISH
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB
	#define _OSD_POWER_SAVING_MODE								_ON
	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
	
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_5__,_1__,_2__,_1__,_6__

	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_USER
	
	#define EDID_SIZE_WR								_ON//д��ߴ�
	
	#define EDID_ID_CODE								0x2380
	#define EDID_ID_SIZE								2380//0x0000
	#define EDID_YEAR_table 							2025//���
	#define EDID_WEEK_table 							1//�ܱ�
	
	#define EDID_ID_NAME								"JPN"
	#define DP_EDID_table								"JAPANNEXT.MNT"
	#define HDMI_EDID_table 							DP_EDID_table//"JAPANNEXT.MNT"
	#define VGA_EDID_table								DP_EDID_table//"VGA"
	
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					2400//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					2400//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	
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
	#if(_VERSION_NO_LED)
	#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
	#else
	#define _DEF_P5_RESET_ITEM4 								_MENU_FUN_LED
	#endif
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
						
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
	#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL	
	
#elif(Project_ID == ID_KAIDI_HK2557E19_MV270QHM_N30_QHD75HZ_20260319)
//280--300mA
	#define _DEF_BURN_EDID										_OFF
	#define _LOGO_TYPE											_LOGO_ZINOX 
	#define _MPRT_MIN_FRAME_RATE         						750
	#define _DEF_OD										        _OFF//N
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
	
	#define _CONTRAST_MAX										2848//2592//2848
	#define _CONTRAST_MIN										1248
		
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
		
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
		
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
		
	#define _BACKLIGHT_MAX										0x82//0xAF
	#define _BACKLIGHT_DEF_PWM									0x7a//0x7F
	#define _BACKLIGHT_MIN										0x1C

	#define _DEF_LANGUAGE										_ENGLISH
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
		
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
	
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
	
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_3__,_2__,_5__
	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_USER
		
	#define EDID_SIZE_WR								_ON//д��ߴ�
		
	#define EDID_ID_CODE								0x2700
	#define EDID_ID_SIZE								2700//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							12//�ܱ�
	
	#define EDID_ID_NAME								"HKM"
	#define DP_EDID_table								"ZNX27QM"//"KD-2700YM"//"27QH75YM"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
		
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					750//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _DEF_OD_GAIN                                0x40
	#define _DEF_P6_MISC_ITEM3      	 				_MENU_FUN_COLORGAMUT	
	
#elif(Project_ID == ID_CHUANGWU_2557E19_MV238FHM_NG1_FHD144HZ_20260723)
	#define _DEF_BURN_EDID										_OFF
	#define _LOGO_TYPE											_LOGO_NONE 
	#define _MPRT_MIN_FRAME_RATE         						750
	#define _DEF_OD										        _OFF//N
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
	#define _CONTRAST_MAX										2848//2592//2848
	#define _CONTRAST_MIN										1248
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
	#define _BACKLIGHT_MAX										0x82//0xAF
	#define _BACKLIGHT_DEF_PWM									0x7a//0x7F
	#define _BACKLIGHT_MIN										0x1C
	#define _DEF_LANGUAGE										_CHINESE_S
	#define _DEF_OSD_LANGUAGE_ARROW                    			 _ON	
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_9__,_1__,_6__
	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_6500
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE								0x2700
	#define EDID_ID_SIZE								2360//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							30//�ܱ�
	#define EDID_ID_NAME								"HKM"
	#define DP_EDID_table								"24FHD144"//"KD-2700YM"//"27QH75YM"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1440//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _DEF_OD_GAIN                                0x40
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
	#define _DEF_P5_RESET_ITEM2 								_MENU_NULL//_MENU_FUN_HDR
	#define _DEF_P5_RESET_ITEM3 								_MENU_NULL//_MENU_FUN_MPRT	
	#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
	#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
	#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
	#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
	#define _DEF_P6_MISC_ITEM2									_MENU_NULL//_MENU_FUN_FREESYNC
	#define _DEF_P6_MISC_ITEM3									_MENU_NULL//_MENU_FUN_OD
	#define _DEF_P6_MISC_ITEM4									_MENU_NULL
	#define _DEF_P6_MISC_ITEM5									_MENU_NULL	
#elif(Project_ID == ID_KAIDI_HK2785E20_MV315QHM_NX0_QHD75HZ_20260319)
	//500--540mA
	#define _DEF_BURN_EDID										_OFF
	#define _LOGO_TYPE											_LOGO_ZINOX 
	#define _MPRT_MIN_FRAME_RATE         						750
	#define _DEF_OD										        _OFF//N
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
		
	#define _CONTRAST_MAX										2592//2848
	#define _CONTRAST_MIN										1248
			
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
			
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
			
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
			
	#define _BACKLIGHT_MAX										0xEB//0xAF
	#define _BACKLIGHT_DEF_PWM									0xDB//0x7F
	#define _BACKLIGHT_MIN										0x1C
	
	#define _DEF_LANGUAGE										_ENGLISH
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
		
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
		
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_3__,_2__,_5__
	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_USER
			
	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_CODE								0x3150
	#define EDID_ID_SIZE								3150//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							12//�ܱ�
	
	#define EDID_ID_NAME								"HKM"
	#define DP_EDID_table								"ZNX32QM"//"KD315YM"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					750//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _DEF_OD_GAIN                                0x40
	#define _DEF_P6_MISC_ITEM3							_MENU_FUN_COLORGAMUT	
#elif(Project_ID == _ID_ZZY_2785E06_BOE_MV315QHM_NX0_LVDS_QHD75HZ_20260403)
	//500--540mA
	#define _DEF_BURN_EDID										_OFF
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_ZINOX 
	#define _MPRT_MIN_FRAME_RATE         						750
	#define _DEF_OD										        _OFF//N
	#define _DEF_BACKLIGHT                                      80
	#define _MPRT_RATIO 								        60
		
	#define _CONTRAST_MAX										2592//2848
	#define _CONTRAST_MIN										1248
			
	#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
			
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
			
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
			
	#define _BACKLIGHT_MAX										0xEB//0xAF
	#define _BACKLIGHT_DEF_PWM									0xDB//0x7F
	#define _BACKLIGHT_MIN										0x1C
	
	#define _DEF_LANGUAGE										_ENGLISH
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
		
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
		
	#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_3__,_2__,_5__
	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_USER
			
	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_CODE								0x3150
	#define EDID_ID_SIZE								3150//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							12//�ܱ�
	
	#define EDID_ID_NAME								"HKM"
	#define DP_EDID_table								"KD315YM"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					750//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					750//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _DEF_OD_GAIN                                0x40
	#define _DEF_P6_MISC_ITEM3							_MENU_FUN_COLORGAMUT
#elif(Project_ID == _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)
	//500--540mA
	#define _DEF_BURN_EDID										_OFF
	#define _LOGO_TYPE											_LOGO_NONE//_LOGO_JAPANNEXT//_LOGO_NONE//_LOGO_ZINOX 
	#define _MPRT_MIN_FRAME_RATE         						750

	#define _DEF_OD										        _OFF//N
	#define _DEF_BACKLIGHT                                      100//80
	#define _MPRT_RATIO 								        60
	#define _DEF_IR_PROTOCAL									_IR_SQY_XHK_0827//_IR_SQY_YS14C
	#define _DEF_FACTORY_MODE									_OFF//����ģʽĬ�Ͽ���
	#define _DEF_BURNING_MODE									_OFF//�ϻ�ģʽĬ�Ͽ���	
	#define _DEF_OSD_LANGUAGE_ARROW                    			 _ON	
	#define _DEF_VOLUME										     30
	#define _CT_7500_SUPPRT 									_ON  //ɫ���Ƿ��7500
	#define	_MENU_INFOR_SHOW_HDR								_ON//�˵���Ϣҳ����ʾ HDR
	
	#define _CONTRAST_MAX										2592//2848
	#define _CONTRAST_MIN										1248
			
	#define _DEF_DIGITAL_VOL_MAX								0x3fff//5632//3500
	#define _DEF_DIGITAL_VOL_CENTER                             3379//2300
			
	#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE
			
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
	#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1
			
	#define _BACKLIGHT_MAX										0xFF//0xEB//0xAF
	#define _BACKLIGHT_DEF_PWM									0xFF//0xDB//0x7F
	#define _BACKLIGHT_MIN										0x1C
	
	#define _DEF_LANGUAGE										_CHINESE_S//_JAPANESE//_ENGLISH
	#define _DEF_GAMMA											_GAMMA_22
	#define _DEF_HDR_MODE    									_HDR10_MODE_AUTO
	
	#define _SOURCE_AUTO_ON								        _ON //�ź��л��Ƿ��auto
	#define _CT_sRGB_SUPPRT							    		_ON  //ɫ���Ƿ��sRGB	
	#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
	#define _DEF_HDR_MPRT_GRAY									_OFF
		
	#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
	#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
	#define _OD_WEAK											0X18
	#define _OD_MID 											0X30
	#define _OD_STRONG											0X40
	#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
	#define _MPRT_DCR_REPULSION                                 _ON  //DCR��MPRT����
		
	//#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_6__,_0__,_5__
	#define _DEF_OSD_TIMEOUT                                    20
	#define _DEF_COLORTEMP										_CT_7500
			
	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_CODE								0x3150
	#define EDID_ID_SIZE								3150//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							12//�ܱ�
	
	#define EDID_ID_NAME								"HKM"
	#define DP_EDID_table								"JAPANNEXT"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _DEF_OD_GAIN                                0x40
	#define _DEF_P6_MISC_ITEM3							_MENU_FUN_COLORGAMUT
	
	#define _DEF_P1_PICTURE_ITEM2	   _MENU_FUN_BRIGHTNESS
#elif(Project_ID ==ID_CHUANGWU_2795E18_2P2H_ME270QHM_NF0_EDP_QHD165HZ)	
#define _LOGO_TYPE											 _LOGO_HONGXIA_MATRIX//_LOGO_NONE	
#define _SMALL_LOGO_TYPE									_SMALL_LOGO2BIT_MATRIX	
#define _CT_7500_SUPPRT 									_ON  //ɫ���Ƿ��7500
#define _DEF_COLORTEMP										_CT_6500
	
#define _DEF_DX_KEY_LED 									_OFF//_ON
#define _DEF_DIGITAL_VOL_MAX								 3600
#define _DEF_DIGITAL_VOL_CENTER 							 2400

//#define _DEF_IR_PROTOCAL									_IR_SQY_YS14C
//#define _DEF_OSD_LANGUAGE_ARROW							_ON

	
#define _BACKLIGHT_MAX									   0xB8//(0X87) //360MA
#define _BACKLIGHT_DEF_PWM								   0xA8//(0x65 )//300MA
#define _BACKLIGHT_MIN										20 
	
#define _MPRT_PWM_MAX										 (0xF0)
#define _MPRT_PWM_DEF										  0xC0
#define _MPRT_PWM_MIN										 0x70
#define _DEF_LANGUAGE										 _ENGLISH
#define _UZBEK_SUPPRT										_OFF//�Ƿ��������ȱ����
	
#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_7__,_0__,_7__

#define EDID_SIZE_WR								_ON//д��ߴ�
		
#define EDID_ID_CODE								0x3150
#define EDID_ID_SIZE								2450//0x0000
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							12//�ܱ�

#define EDID_ID_NAME								"HKM"
#define VGA_EDID_table								"VGA"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"HDMI"
		
#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1440//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1440//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE

#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1								_MENU_NULL
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

#define _DEF_P5_RESET_ITEM1 								_MENU_FUN_HDR
#define _DEF_P5_RESET_ITEM2 								_MENU_FUN_MPRT
#define _DEF_P5_RESET_ITEM3 								_MENU_FUN_LED	
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_OD
#define _DEF_P6_MISC_ITEM4									_MENU_NULL
#define _DEF_P6_MISC_ITEM5									_MENU_NULL	


#elif(Project_ID ==ID_CLP_2795E01_2P2H_SG2701G02_2_EDP_QHD165HZ)	
#define _LOGO_TYPE											_LOGO_NONE 
#define _MPRT_MIN_FRAME_RATE								750

#define _DEF_OD 											_OFF//N
#define _DEF_BACKLIGHT										80
#define _MPRT_RATIO 										60

#define _CONTRAST_MAX										2592//2848
#define _CONTRAST_MIN										1248

#define _DEF_DIGITAL_VOL_MAX								4731//5632//3500
#define _DEF_DIGITAL_VOL_CENTER 							3379//2300

#define _OSD_FONT_TYPE										_OSD_FONT_SW_JAPANESE

#define _DEF_HOTKEY_LEFT									_MENU_FUN_AUDOIVOLUME
#define _DEF_HOTKEY_RIGHT									_HOT_KEY_LOS_TYPE1

#define _BACKLIGHT_MAX										0xC3//0xAF
#define _BACKLIGHT_DEF_PWM									0xBE//0x7F
#define _BACKLIGHT_MIN										0x1C

#define _MPRT_PWM_MAX										0xE0
#define _MPRT_PWM_DEF										0xC0
#define _MPRT_PWM_MIN										0x60

#define _DEF_LANGUAGE										_ENGLISH
#define _DEF_GAMMA											_GAMMA_22
#define _DEF_HDR_MODE										_HDR10_MODE_AUTO

#define _SOURCE_AUTO_ON 									_ON //�ź��л��Ƿ��auto
#define _CT_sRGB_SUPPRT 									_ON  //ɫ���Ƿ��sRGB
#define _OSD_POWER_SAVING_MODE								_ON

#define _HDR10_MODE_END 									_HDR10_MODE_AUTO
#define _DEF_HDR_MPRT_GRAY									_OFF

#define _ENABLE_MAIN_MENU_F_ICON							_OFF//�����ϻ�ģʽ
#define _OSD_SHOW_SYNC										_OFF//�˵�����ʾsync
#define _OD_WEAK											0X18
#define _OD_MID 											0X30
#define _OD_STRONG											0X40
#define _OD_WEAK_MID_HIGH									_OFF // OD ǿ����
#define _MPRT_DCR_REPULSION 								_ON  //DCR��MPRT����

#define _MC_LANGUAGE										_ON

#define _FW_VERSION  _F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_7__,_0__,_8__

#define _DEF_OSD_TIMEOUT									20
#define _DEF_COLORTEMP										_CT_USER

#define EDID_SIZE_WR								_ON//д��ߴ�

#define EDID_ID_CODE								0x2700
#define EDID_ID_SIZE								2700//0x0000
#define EDID_YEAR_table 							2026//���
#define EDID_WEEK_table 							28//�ܱ�

#define EDID_ID_NAME								"CLP"
#define DP_EDID_table								"DP"
#define HDMI_EDID_table 							"DP"//"JAPANNEXT.MNT"
#define VGA_EDID_table								"VGA"//"VGA"

#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
#define _PANEL_DP_MAX_FRAME_RATE					1650//_PANEL_MAX_FRAME_RATE
#define _PANEL_HDMI_MAX_FRAME_RATE					1650//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#define _PANEL_VGA_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
#define _DEF_OD_GAIN								0x40

#define _DEF_P1_PICTURE_ITEM0								_MENU_FUN_BACKLIGHT
#define _DEF_P1_PICTURE_ITEM1								_MENU_FUN_CONTRAST
#define _DEF_P1_PICTURE_ITEM2								_MENU_FUN_DCC
#define _DEF_P1_PICTURE_ITEM3								_MENU_FUN_ECO 
#define _DEF_P1_PICTURE_ITEM4								_MENU_FUN_DCR
#define _DEF_P1_PICTURE_ITEM5								_MENU_FUN_SHARPNESS 
	
#define _DEF_P2_DISPLAY_ITEM0								_MENU_FUN_ASPECT
#define _DEF_P2_DISPLAY_ITEM1								_MENU_FUN_POWER_SAVING
#define _DEF_P2_DISPLAY_ITEM2								_MENU_FUN_LED
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
#define _DEF_P5_RESET_ITEM4 								_MENU_NULL
#define _DEF_P5_RESET_ITEM5 								_MENU_NULL
					
#define _DEF_P6_MISC_ITEM0									_MENU_FUN_SIGNAL
#define _DEF_P6_MISC_ITEM1									_MENU_FUN_LOWBLUE
#define _DEF_P6_MISC_ITEM2									_MENU_FUN_AUDOIVOLUME
#define _DEF_P6_MISC_ITEM3									_MENU_FUN_FREESYNC
#define _DEF_P6_MISC_ITEM4									_MENU_FUN_OD
#define _DEF_P6_MISC_ITEM5									_MENU_NULL

#elif(Project_ID    ==  ID_TONGZHOU_RTD2795E01_AUO_M315QAN01_0_20260824)
	#define _LOGO_TYPE											 _LOGO_GREATWALL2//_LOGO_NONE	
	#define _SMALL_LOGO_TYPE									_SMALL_LOGO_TYPE_NONE	
	#define _CT_7500_SUPPRT 									_ON  //ɫ���Ƿ��7500
	#define _DEF_COLORTEMP										_CT_6500
	#define _DEF_DX_KEY_LED 									_OFF//_ON
	#define _DEF_DIGITAL_VOL_MAX								 3600
	#define _DEF_DIGITAL_VOL_CENTER                              2400
	#define _BACKLIGHT_MAX 									   0xAC
	#define _BACKLIGHT_DEF_PWM 								   0x9D
	#define _BACKLIGHT_MIN										20 
	#define _DEF_BACKLIGHT										90
	#define _MPRT_PWM_MAX         								 (0xF0)
	#define _MPRT_PWM_DEF        								  0xC0
	#define _MPRT_PWM_MIN        								 0x70
	#define _DEF_LANGUAGE										 _CHINESE_S
	#define _UZBEK_SUPPRT										_ON//�Ƿ��������ȱ����
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_8__,_2__,_4__
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE								0x3215
	#define EDID_ID_SIZE								3150//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							35//�ܱ�
	#define EDID_ID_NAME								"CGC"
	#define DP_EDID_table								"V3215U"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
	#define _DEF_HOTKEY_LEFT									_MENU_FUN_ECO
	#define _DEF_HOTKEY_RIGHT									_MENU_FUN_BACKLIGHT

#elif(Project_ID    ==  ID_CHUANGWU_2795E01_2P2H_M250HAN03_5_EDP_FHD300HZ)
	#define _LOGO_TYPE											 _LOGO_HONGXIA_MATRIX//_LOGO_NONE	
	#define _SMALL_LOGO_TYPE									_SMALL_LOGO2BIT_MATRIX	
	#define _CT_7500_SUPPRT 									_ON  //ɫ���Ƿ��7500
	#define _DEF_COLORTEMP										_CT_7500
		
	#define _DEF_DX_KEY_LED 									_OFF//_ON
	#define _DEF_DIGITAL_VOL_MAX								 3600
	#define _DEF_DIGITAL_VOL_CENTER                              2400
	
	//#define _DEF_IR_PROTOCAL									_IR_SQY_YS14C
	//#define _DEF_OSD_LANGUAGE_ARROW 							_ON
	
		
	#define _BACKLIGHT_MAX 									   0xB8//(0X87) //360MA
	#define _BACKLIGHT_DEF_PWM 								   0xA8//(0x65 )//300MA
	#define _BACKLIGHT_MIN										20 
		
	#define _MPRT_PWM_MAX         								 (0xF0)
	#define _MPRT_PWM_DEF        								  0xC0
	#define _MPRT_PWM_MIN        								 0x70
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _UZBEK_SUPPRT										_ON//�Ƿ��������ȱ����
		
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_5__,_2__,_0__

	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_CODE								0x3150
	#define EDID_ID_SIZE								2450//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							12//�ܱ�

	#define EDID_ID_NAME								"HKM"
	#define DP_EDID_table								"MX25GF300"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					600//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					600//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE

	#define _DEF_P5_RESET_ITEM3							_MENU_FUN_LED


#elif(Project_ID    ==  ID_JIEFEI_2795E04_1USB1DP2H_ME270QHB_NF0_EDP_QHD165HZ_20260601)
	#define _LOGO_TYPE											_LOGO_NONE	
	#define _SMALL_LOGO_TYPE									_SMALL_LOGO2BIT_MATRIX	
	#define _CT_7500_SUPPRT 									_ON  //ɫ���Ƿ��7500
	#define _DEF_COLORTEMP										_CT_7500
		
	#define _DEF_DX_KEY_LED 									_OFF//_ON
	#define _DEF_DIGITAL_VOL_MAX								 3600
	#define _DEF_DIGITAL_VOL_CENTER                              2400
	
	//#define _DEF_IR_PROTOCAL									_IR_SQY_YS14C
	//#define _DEF_OSD_LANGUAGE_ARROW 							_ON
	
		
	#define _BACKLIGHT_MAX 									   0xB8//(0X87) //360MA
	#define _BACKLIGHT_DEF_PWM 								   0xA8//(0x65 )//300MA
	#define _BACKLIGHT_MIN										20 
		
	#define _MPRT_PWM_MAX         								 (0xF0)
	#define _MPRT_PWM_DEF        								  0xC0
	#define _MPRT_PWM_MIN        								 0x70
	#define _DEF_LANGUAGE										 _ENGLISH
	#define _UZBEK_SUPPRT										_OFF//�Ƿ��������ȱ����
		
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_6__,_1__,_5__

	#define EDID_SIZE_WR								_ON//д��ߴ�
			
	#define EDID_ID_CODE								0x3150
	#define EDID_ID_SIZE								2450//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							25//�ܱ�

	#define EDID_ID_NAME								"HKM"
	#define DP_EDID_table								"MX25GF300"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
			
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1650//3000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1650//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE

//	#define _DEF_P5_RESET_ITEM3							_MENU_FUN_LED
#elif(Project_ID    ==  ID_XINHONGSHAN_2795E04_1USB1DP2H_SAMSUNG_LSM315DP01_QHD165HZ_20260713)
	#define _LOGO_TYPE											_LOGO_FYHXele	
	#define _SMALL_LOGO_TYPE									_SMALL_LOGO_TYPE_NONE	
	#define _CT_7500_SUPPRT 									_ON  //ɫ���Ƿ��7500
	#define _DEF_COLORTEMP										_CT_7500
	#define _DEF_DX_KEY_LED 									_OFF//_ON
	#define _DEF_DIGITAL_VOL_MAX								 3600
	#define _DEF_DIGITAL_VOL_CENTER                              2400
	//#define _DEF_IR_PROTOCAL									_IR_SQY_YS14C
	//#define _DEF_OSD_LANGUAGE_ARROW 							_ON
	#define _BACKLIGHT_MAX 									   (0xFF - 0x6C)//(0X87) //360MA
	#define _BACKLIGHT_DEF_PWM 								   (0xFF - 0x8C)//(0x65 )//300MA
	#define _BACKLIGHT_MIN										20 
	// #define _MPRT_PWM_MAX         								 (0xF0)
	// #define _MPRT_PWM_DEF        								  0xC0
	// #define _MPRT_PWM_MIN        								  0x70

	#define _DEF_LANGUAGE										 _ENGLISH
	#define _UZBEK_SUPPRT										_OFF//�Ƿ��������ȱ����
	#define _FW_VERSION 										_F__,_W__,__,_COLON__,__,_V__,_0__,_0__,_1__,__,_2__,_0__,_2__,_6__,_0__,_7__,_1__,_3__
	#define EDID_SIZE_WR								_ON//д��ߴ�
	#define EDID_ID_CODE								0x3200
	#define EDID_ID_SIZE								3150//0x0000
	#define EDID_YEAR_table 							2026//���
	#define EDID_WEEK_table 							29//�ܱ�
	#define EDID_ID_NAME								"XHS"
	#define DP_EDID_table								"FY32QHMC"
	#define HDMI_EDID_table 							DP_EDID_table
	#define VGA_EDID_table								DP_EDID_table
	#define _MEW_EDID_TYPE								_MEW_EDID_TYPE_HIGHT
	#define _PANEL_DP_MAX_FRAME_RATE					1650//3000//_PANEL_MAX_FRAME_RATE
	#define _PANEL_HDMI_MAX_FRAME_RATE					1650//_PANEL_DP_MAX_FRAME_RATE//1200//_PANEL_MAX_FRAME_RATE
#endif//Project_ID end

#ifndef _UZBEK_SUPPRT
#define _UZBEK_SUPPRT							_OFF //�Ƿ��������ȱ����
#endif

#ifndef _UKRAINE_SUPPRT
#define _UKRAINE_SUPPRT							_OFF //�Ƿ������ڿ�����,���ڿ������뿪���ȱ����
#endif


#if 0//(PANEL_TEST)

#warning "zhe is TEST!!"
#warning "zhe is TEST!!"
#warning "zhe is TEST!!"
#warning "zhe is TEST!!"
#warning "zhe is TEST!!"

#endif

#ifndef  _CONTRAST_MAX
#if(_CTS_TYPE == _CTS_GEN_1_12BIT)
	#define _CONTRAST_MAX                               2848
	#define _CONTRAST_MIN                               1248
#else
	#define _CONTRAST_MAX                               178
	#define _CONTRAST_MIN                               78
#endif
#endif

//#define _BURNIN_MSG_MENU_SUPPORT							_OFF

