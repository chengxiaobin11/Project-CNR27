 /******************************OSD_FUNCTION_DEFINE*****************************************/
/* 	
 *	����OSD�Ĺ��ܣ�λ�ÿ��������
*/
#ifndef _DEF_OSD_TYPE
#if(_PROJECT == _RL6463_PROJECT || _PROJECT == _RL6851_PROJECT)
#define _DEF_OSD_TYPE				1
#else
#define _DEF_OSD_TYPE				2
#endif
#endif
//page1
#if(_DEF_OSD_TYPE == 1)

#ifndef	_DEF_P1_PICTURE_ITEM0
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#endif

#ifndef	_DEF_P1_PICTURE_ITEM1
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#endif

#ifndef	_DEF_P1_PICTURE_ITEM2
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
#endif

#ifndef	_DEF_P1_PICTURE_ITEM3
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#endif

#ifndef	_DEF_P1_PICTURE_ITEM4
#define _DEF_P1_PICTURE_ITEM4      _MENU_FUN_ECO
#endif

#ifndef	_DEF_P1_PICTURE_ITEM5
#if(_HDR_SUPPORT)
#define _DEF_P1_PICTURE_ITEM5      _MENU_FUN_HDR								//Ԥ��HDRλ��
#else
#define _DEF_P1_PICTURE_ITEM5      _MENU_NULL									//Ԥ��HDRλ��
#endif
#endif

//page2


#ifndef	_DEF_P2_DISPLAY_ITEM0
#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_VGA_HPOSITON
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM1
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_VGA_VPOSITON
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM2
#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_VGA_CLK
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM3
#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_VGA_PHASE
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM4
#define _DEF_P2_DISPLAY_ITEM4      _MENU_FUN_ASPECT
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM5
#define _DEF_P2_DISPLAY_ITEM5      _MENU_FUN_SHARPNESS 
#endif

//page3

#ifndef	_DEF_P3_COLORTEMP_ITEM0
#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM1
#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM2
#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM3
#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM4
#define _DEF_P3_COLORTEMP_ITEM4      _MENU_NULL
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM5
#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
#endif
//page 4

#ifndef	_DEF_P4_OSDSETTING_ITEM0
#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM1
#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM2
#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM3
#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM4
#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM5
#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL
#endif

//page5
#ifndef	_DEF_P5_RESET_ITEM0
#define _DEF_P5_RESET_ITEM0     	 _MENU_FUN_AUTO_ADJUST
#endif

#ifndef	_DEF_P5_RESET_ITEM1
#define _DEF_P5_RESET_ITEM1     	 _MENU_FUN_AUTO_COLOR
#endif

#ifndef	_DEF_P5_RESET_ITEM2
#define _DEF_P5_RESET_ITEM2    	 	 _MENU_FUN_RESET
#endif

#ifndef	_DEF_P5_RESET_ITEM3
#define _DEF_P5_RESET_ITEM3    	  	 _MENU_FUN_LOWBLUE 
#endif

#ifndef	_DEF_P5_RESET_ITEM4
#define _DEF_P5_RESET_ITEM4     	 _MENU_NULL
#endif

#ifndef	_DEF_P5_RESET_ITEM5
#define _DEF_P5_RESET_ITEM5      	 _MENU_NULL
#endif

//page 6
#ifndef	_DEF_P6_MISC_ITEM0
#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
#endif

#ifndef	_DEF_P6_MISC_ITEM1
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_AUDOIMUTE
#endif

#ifndef	_DEF_P6_MISC_ITEM2
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_AUDOIVOLUME  
#endif

/*****************************************OD**************************************/
#if(_OD_SUPPORT&&(_MPRT_SUPPORT))

#ifndef	_DEF_P6_MISC_ITEM3
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_OD
#endif

#ifndef	_DEF_P6_MISC_ITEM4
#if _MOTION_BLUR_REDUCTION_SUPPORT
#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_MBRSYNC							//Ԥ��freesyncλ��
#else
#define _DEF_P6_MISC_ITEM4      	 _MENU_FUN_MPRT											//Ԥ��freesyncλ��
#endif
#endif

#elif(_OD_SUPPORT)

#ifndef	_DEF_P6_MISC_ITEM3
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_OD
#endif

#ifndef	_DEF_P6_MISC_ITEM4
#define _DEF_P6_MISC_ITEM4      	 _MENU_NULL
#endif

#elif(_MPRT_SUPPORT)

#ifndef	_DEF_P6_MISC_ITEM3
#if _MOTION_BLUR_REDUCTION_SUPPORT
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_MBRSYNC							//Ԥ��freesyncλ��
#else
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_MPRT											//Ԥ��freesyncλ��
#endif
#endif

#ifndef	_DEF_P6_MISC_ITEM4
#define _DEF_P6_MISC_ITEM4      	 _MENU_NULL
#endif

#else

#ifndef	_DEF_P6_MISC_ITEM3
#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL
#endif

#ifndef	_DEF_P6_MISC_ITEM4
#define _DEF_P6_MISC_ITEM4      	 _MENU_NULL
#endif

#endif

/*********************************************************************************/


#ifndef	_DEF_P6_MISC_ITEM5
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
#endif









#else///////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef	_DEF_P1_PICTURE_ITEM0
#define _DEF_P1_PICTURE_ITEM0      _MENU_FUN_BACKLIGHT
#endif

#ifndef	_DEF_P1_PICTURE_ITEM1
#define _DEF_P1_PICTURE_ITEM1      _MENU_FUN_CONTRAST
#endif

#ifndef	_DEF_P1_PICTURE_ITEM2
#define _DEF_P1_PICTURE_ITEM2      _MENU_FUN_DCC
#endif

#ifndef	_DEF_P1_PICTURE_ITEM3
#define _DEF_P1_PICTURE_ITEM3      _MENU_FUN_DCR
#endif

#ifndef	_DEF_P1_PICTURE_ITEM4
#define _DEF_P1_PICTURE_ITEM4      _MENU_FUN_ECO
#endif

#ifndef	_DEF_P1_PICTURE_ITEM5
#define _DEF_P1_PICTURE_ITEM5      _MENU_FUN_HDR 
#endif

//page2


#ifndef	_DEF_P2_DISPLAY_ITEM0
#define _DEF_P2_DISPLAY_ITEM0      _MENU_FUN_SATURATION
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM1
#define _DEF_P2_DISPLAY_ITEM1      _MENU_FUN_LOWBLUE
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM2
#define _DEF_P2_DISPLAY_ITEM2      _MENU_FUN_SHARPNESS 
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM3
#define _DEF_P2_DISPLAY_ITEM3      _MENU_FUN_ASPECT
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM4
#define _DEF_P2_DISPLAY_ITEM4      _MENU_NULL 								//Ԥ��gammaλ�� 
#endif

#ifndef	_DEF_P2_DISPLAY_ITEM5
#define _DEF_P2_DISPLAY_ITEM5      _MENU_NULL								//Ԥ��ɫ��ģʽλ�� 
#endif

//page3

#ifndef	_DEF_P3_COLORTEMP_ITEM0
#define _DEF_P3_COLORTEMP_ITEM0      _MENU_FUN_COLORTEMP
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM1
#define _DEF_P3_COLORTEMP_ITEM1      _MENU_FUN_R
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM2
#define _DEF_P3_COLORTEMP_ITEM2      _MENU_FUN_G
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM3
#define _DEF_P3_COLORTEMP_ITEM3      _MENU_FUN_B
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM4
#define _DEF_P3_COLORTEMP_ITEM4      _MENU_NULL
#endif

#ifndef	_DEF_P3_COLORTEMP_ITEM5
#define _DEF_P3_COLORTEMP_ITEM5      _MENU_NULL
#endif
//page 4

#ifndef	_DEF_P4_OSDSETTING_ITEM0
#define _DEF_P4_OSDSETTING_ITEM0      _MENU_FUN_LANGUAGE
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM1
#define _DEF_P4_OSDSETTING_ITEM1      _MENU_FUN_OSD_HPOSITON
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM2
#define _DEF_P4_OSDSETTING_ITEM2      _MENU_FUN_OSD_VPOSITON
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM3
#define _DEF_P4_OSDSETTING_ITEM3      _MENU_FUN_OSD_TIME
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM4
#define _DEF_P4_OSDSETTING_ITEM4      _MENU_FUN_OSD_TRANS
#endif

#ifndef	_DEF_P4_OSDSETTING_ITEM5
#define _DEF_P4_OSDSETTING_ITEM5      _MENU_NULL 
#endif

//page5
#ifndef	_DEF_P5_RESET_ITEM0
#define _DEF_P5_RESET_ITEM0     	  _MENU_FUN_AUDOIMUTE
#endif

#ifndef	_DEF_P5_RESET_ITEM1
#define _DEF_P5_RESET_ITEM1     	  _MENU_FUN_AUDOIVOLUME 
#endif

#ifndef	_DEF_P5_RESET_ITEM2
#define _DEF_P5_RESET_ITEM2    	 	  _MENU_FUN_RESET
#endif

#ifndef	_DEF_P5_RESET_ITEM3
#define _DEF_P5_RESET_ITEM3    	  	  _MENU_NULL								 //Ԥ����Чλ��
#endif

#ifndef	_DEF_P5_RESET_ITEM4
#define _DEF_P5_RESET_ITEM4     	  _MENU_NULL
#endif

#ifndef	_DEF_P5_RESET_ITEM5
#define _DEF_P5_RESET_ITEM5      	  _MENU_NULL
#endif

//page 6
#ifndef	_DEF_P6_MISC_ITEM0
#define _DEF_P6_MISC_ITEM0      	 _MENU_FUN_SIGNAL
#endif

#ifndef	_DEF_P6_MISC_ITEM1
#define _DEF_P6_MISC_ITEM1      	 _MENU_FUN_FREESYNC  
#endif

/*****************************************OD**************************************/
#if(_OD_SUPPORT&&(_MPRT_SUPPORT))

#ifndef	_DEF_P6_MISC_ITEM2
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_OD
#endif

#ifndef	_DEF_P6_MISC_ITEM3
#if _MOTION_BLUR_REDUCTION_SUPPORT
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_MBRSYNC							//Ԥ��freesyncλ��
#else
#define _DEF_P6_MISC_ITEM3      	 _MENU_FUN_MPRT											//Ԥ��freesyncλ��
#endif
#endif

#elif(_OD_SUPPORT)

#ifndef	_DEF_P6_MISC_ITEM2
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_OD
#endif

#ifndef	_DEF_P6_MISC_ITEM3
#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL
#endif

#elif(_MPRT_SUPPORT)

#ifndef	_DEF_P6_MISC_ITEM2
#if _MOTION_BLUR_REDUCTION_SUPPORT
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_MBRSYNC							//Ԥ��freesyncλ��
#else
#define _DEF_P6_MISC_ITEM2      	 _MENU_FUN_MPRT											//Ԥ��freesyncλ��
#endif
#endif

#ifndef	_DEF_P6_MISC_ITEM3
#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL
#endif

#else

#ifndef	_DEF_P6_MISC_ITEM2
#define _DEF_P6_MISC_ITEM2      	 _MENU_NULL
#endif

#ifndef	_DEF_P6_MISC_ITEM3
#define _DEF_P6_MISC_ITEM3      	 _MENU_NULL
#endif

#endif

/************************************************************************************/

#ifndef	_DEF_P6_MISC_ITEM4
#define _DEF_P6_MISC_ITEM4      	 _MENU_NULL										//Ԥ����Ƶλ��			
#endif

#ifndef	_DEF_P6_MISC_ITEM5
#define _DEF_P6_MISC_ITEM5      	 _MENU_NULL
#endif

#endif
