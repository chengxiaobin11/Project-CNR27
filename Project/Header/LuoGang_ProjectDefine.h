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
// ID Code      : LuoGang_ProjectDefine.h No.0000  //IDO
// Update Note  :
//----------------------------------------------------------------------------------------------------
/*_RL6369_PROJECT                0x0xxx
 *_RL6410_PROJECT                0x1xxx
 *_RL6432_PROJECT                0x2xxx //156Pin
 *_RL6432_PROJECT                0x3xxx //216Pin
 *_RL6449_PROJECT                0x4xxx
 *_RL6463_PROJECT                0x5xxx
 *_RL6492_PROJECT                0x6xxx
 */
 
#define ID_COMMON												   									0xFFFF

#define ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908		       									0x2FFF

#define ID_2795E02_1TYEPC1DP1HDMI_20201119		       												0x4FFF

#define ID_GONGCHANG_TEST_2556E02_OD  																0x2F01
#define ID_GONGCHANG_TEST_2556E02  																	0x2F02

#define ID_GONGCHANG_TEST_2556E06_OD  																0x2F03
#define ID_GONGCHANG_TEST_2556E06  																	0x2F04

#define ID_GONGCHANG_TEST_2785E02 																	0x3F01
#define ID_GONGCHANG_TEST_2785E03  																	0x3F02
#define ID_GONGCHANG_TEST_2785E06  																	0x3F03

#define ID_GONGCHANG_TEST_2795E04_EDP  																0x4F01
#define ID_GONGCHANG_TEST_2795E04_VBY1  															0x4F02

#define ID_GONGCHANG_TEST_2513E02_OD  																0x5F01
#define ID_GONGCHANG_TEST_2513E02  										    						0x5F02

/*********************RL6369*********************************************/


/*********************RL6410*********************************************/


/*********************RL6432 156Pin**************************************/
////////////////////////   0X2101----0X210F   ///////////////////////////////
#define ID_CS_2556E01_DX                                                                        	0x2101//��������

#define ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903                                               0x2102//
#define ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215                                              0x2103
#define ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20260226_EUROPE                                        0x2104//ŷ�޿ͻ�Ҫ��汾
///////////////////////////////  ŷ����MNT  ////////////////////////////////////////////////
#define ID_MC_HK2556E01_SG3151B05_8_FHD165HZ_20260612                                        0x2105
///////////////////////////////  ������  ////////////////////////////////////////////////
#define ID_MC_HK255XE05_SG270AB02_5_FHD240HZ_20250903                                               0x2106//
//#define _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629                                            	0x2107
#define _ID_CLP_2525EQ4_SG2701B08_1_FHD120HZ_20260702                               				0x2108
#define _ID_CLP_2513BRE02_SG2381B04_1_FHD120HZ_20260702                                            	0x2109

#define ID_MC_HK255XE05_SG2381B01_1_FHD120HZ_20260702												0x210A
#define ID_MC_HK255XE05_SG270AB02_5_FHD120HZ_20260702												0x210B
#define ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_370MA_20260702											0x210C
#define ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_300MA_20260702											0x210D
/////////////////////////////����///////////////////////////////////////
#define ID_KAIDI_HK2557E19_MV270QHM_N30_QHD75HZ_20260319                                             0x2140

/////////////////////////////����//////////////////////////////////////////
#define ID_CHUANGWU_2557E19_MV238FHM_NG1_FHD144HZ_20260723                                            0x2160


#define ID_TEST_HK255XE05_1H2DP_MV270FHB_NF6_FHD240HZ_20260204                                      0x2200// 1HDMI 2DP //255XE06
/*********************RL6432 216Pin**************************************/
////////////////////////   0X3101----0X310F   ///////////////////////////////
/////////////////////////////����///////////////////////////////////////
#define ID_KAIDI_HK2785E20_MV315QHM_NX0_QHD75HZ_20260319                                             0x3140//��2785E20

/////////////////////////////������///////////////////////////////////////
#define _ID_ZZY_2785E06_BOE_MV315QHM_NX0_LVDS_QHD75HZ_20260403                                     	 0x3150


/*********************RL6449*********************************************/
////////////////////////   0X4101----0X410F   ///////////////////////////////
#define ID_CS_2795_M270QAN070_UHD                                                                    0x4101//4K160HZ
#define ID_CS_2795_GC_MV270QUM_N60_UHD                                                               0x4FD1//

#define ID_SHIQI_2795E12_SG3402H01_1_WQHD100HZ_20251110                                              0x4FD2
///////////////////////////////  SQY  ////////////////////////////////////////////////
#define _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421                                            	 0x4200
///////////////////////////////  ����  ////////////////////////////////////////////////
#define ID_CHUANGWU_2795E01_2P2H_M250HAN03_5_EDP_FHD300HZ								 			 0x4210//
#define ID_CHUANGWU_2795E18_2P2H_ME270QHM_NF0_EDP_QHD165HZ								 			 0x4211//


///////////////////////////////  �ݷ�  ////////////////////////////////////////////////
#define ID_JIEFEI_2795E04_1USB1DP2H_ME270QHB_NF0_EDP_QHD165HZ_20260601								 0x4220
///////////////////////////////  ������  ////////////////////////////////////////////////
#define ID_CLP_2795E01_2P2H_SG2701G02_2_EDP_QHD165HZ								 			 		 0x4221//
//////////////////////////////////�º��� //////////////////////////////////////////////////
#define ID_XINHONGSHAN_2795E04_1USB1DP2H_SAMSUNG_LSM315DP01_QHD165HZ_20260713						 	 0x4230
/////////////////////////////////ͬ��/////////////////////////////////////////////////
#define ID_TONGZHOU_RTD2795E01_AUO_M315QAN01_0_20260824													 0x4240		

/*********************RL6463*********************************************/
//////////6851 2525BRE09 �����㲻��ԭ��: font�ֿⳬ������Ҫָ���font����bank6
////////////////////////   0X5101----0X511F   ///////////////////////////////
#define ID_CS_2513E01_FHD100HZ                                                                    	0x5101
#define ID_CS_2513E03_GuangGan_FHD60HZ                                                             	0x5102
//����
#define ID_CS_2513E03_M270HAN0_1_FHD10Z                                                             	0x5103
/////////////////////////////// ��Ӯ  ////////////////////////////////////////////////
#define _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427                                            		0x5104
/////////////////////////////// ͬ��  ////////////////////////////////////////////////
#define _ID_2513ARE02_PN238CS02_2_FHD100HZ_20260713                                            		0x5105

/*********************RL6851*********************************************/
#define ID_CS_2513brE03_FHD144HZ                                                                    0x6102
#define _ID_RUIDE_2525BREQ4_TM238VFXJ09_FHD144HZ_20250910                                           0x6103

/////////////////////////////////  ����  ////////////////////////////////////////////////
#define _ID_XIANYOU_2525BREQ4_SG2701B05_6_FHD100HZ_20251015                                         0x6104
#define _ID_XIANYOU_2525BREQ4_PN238CT02_14_FHD100HZ_20251023                                        0x6105
/////////////////////////////////  ����  ////////////////////////////////////////////////
#define _ID_HONGXIA_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20251107                               0x6106
#define _ID_HONGXIA_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20251107                             0x6107
/////////////////////////////// ����  ////////////////////////////////////////////////
#define _ID_DX_2525BREQ4_MF238FHB_N50_FHD100HZ_20260616                                           0x6108


#define _ID_CHUANGWU_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20260207                               0x6120
#define _ID_CHUANGWU_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20260207                             0x6121

///////////////////////////////  ��н����  ////////////////////////////////////////////////
#define _ID_MXDZ_2513BRE03_SN238CS08_1_FHD144HZ_20251103                                            0x6150
#define _ID_MXDZ_2513BRE03_HV400FHB_F11_FHD60HZ_20260321                                            0x6151
#define _ID_MXDZ_2513BRE03_HV430FHB_F91_FHD60HZ_20260321                                            0x6152
#define _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321                                             0x6153
#define _ID_MXDZ_2513BRE03_HV236WHB_F10_FHD60HZ_20260321                                            0x6154
#define _ID_MXDZ_2513BRE03_HV320WHB_F73_FHD60HZ_20260321                                            0x6155


///////////////////////////////  ������  ////////////////////////////////////////////////
#define _ID_ZZY_2525BRE09_MV238FHM_NX4_FHD100HZ_20251118                                            0x6170
#define _ID_ZZY_2525BRE09_MV238FHM_N63_FHD100HZ_20251226                                            0x6171
#define _ID_ZZY_2525BRE09_MV238FHM_NX5_FHD100HZ_20260302                                            0x6172

///////////////////////////////  ŷ����MNT  ////////////////////////////////////////////////
#define _ID_MNT_2313BRE01_PN238CS02_2_FHD100HZ_20260427                                            	0x6173
#define _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629                                            	0x6174

///////////////////////////////  ����  ////////////////////////////////////////////////
#define _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730                                            	0x6180




////////////////////////////////////////////////////////////////////////////
//6463 2513ar���Գ�120
//6851 2525br/2513br hdmi fhd144hz dp 144hz����߿ɳ�180������144�����л�������
/////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

/*********************RL6492*********************************************/

/////////////////////////CS//////////////////////////////////////////////
#define ID_CS_2556                                                                        	0x2FE1
#define ID_CS_2785                                                                        	0x3FE1
#define ID_CS_2513                                                                        	0x5FE1
#define ID_CS_2795                                                                       	0x4FE1
#define ID_CS_6851                                                                       	0x6FE1


///#define _OVERCLOCK												_ON ���°��Ѳ�ʹ��

//#define _HDMI_24C02_SUPPORT                                                                        	_ON
#define _DEF_OSD_2525   			_OFF//����Ҫ�ã�δ���

//�������水id����
#define _IMD_DOMAIN_ULTRA_HIGH_SPEED_SUPPORT					_ON
#define _DDR2_MEMORY_CLK_1200M_SUPPORT                          _ON
#define _LVDS_ULTRA_HIGH_SPEED_SUPPORT							_ON
#define _MULTIPANEL_ULTRA_HIGH_SPEED_PIXEL_CLOCK_MAX			_MULTIPANEL_CLOCK_MAX_FHD_144_HZ

/*

#define _MOTION_BLUR_REDUCTION_SUPPORT                          _ON
#define _MOTION_BLUR_PANEL_PIXEL_TYPE                           _MOTION_BLUR_PANEL_PIXEL_LCD
#define _DRR_MOTION_BLUR_REDUCTION_SUPPORT                      _ON
#define _MOTION_BLUR_REDUCTION_MODE_SWITCH_NO_MUTE_SUPPORT      _ON

#define _MOTION_BLUR_REDUCTION_SUPPORT                          _ON
#define _DRR_MOTION_BLUR_REDUCTION_SUPPORT                      _ON
#define _MOTION_BLUR_REDUCTION_MODE_SWITCH_NO_MUTE_SUPPORT      _OFF

//MBR SYNC Ŀǰ���嶼�����ã��Ȳ�����
#define _MOTION_BLUR_REDUCTION_SUPPORT                          _ON
#define _DRR_MOTION_BLUR_REDUCTION_SUPPORT                      _OFF
#define _RTK_ADVANCED_MOTION_BLUR_REDUCTION_SUPPORT             _OFF
#define _MOTION_BLUR_REDUCTION_MODE_SWITCH_NO_MUTE_SUPPORT      _ON
*/


///////////////////////////////////////////TEST////////////////////////////////////////////////
#define PANEL_TEST                                                                        	_OFF
/**********************************************************************************************/

#define Project_ID 													ID_CHUANGWU_2557E19_MV238FHM_NG1_FHD144HZ_20260723
/**********************************************************************************************/


#include"LuoGang_ProjectDefine_OLD_20250520.h"


#if(Project_ID    ==  ID_CS_2795)
	#define _PCB_TYPE												_RL6449__216PIN__HKMRT2795E04__1USB1DP2H__eDPVB1
   	#define _PANEL_TYPE											   	_PANTEST//_BOE_MV315QUM_N20_EDP_UHD//_INL_M280DGJ_L30_VBY_UHD_60HZ//_SAMSUNG_LSM315DP02_EDP_QHD75HZ//_PANTEST//_INL_M280DGJ_L30_VBY_UHD_60HZ
   	#define _FRC_SUPPORT 										   	_ON   
	#define _MPRT_SUPPORT											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _DP_EDID_384_SUPPORT									_ON
	//#define _IR_VIRTUAL 											_ON
	//#define _EDID_HDR_SUPPORT 										_ON
	#define _EMBEDDED_MEMORY_SIZE_CONFIG                           _16M_16BIT_DDR2_2PCS//_16M_16BIT_DDR2_1PC

#elif(Project_ID    ==  ID_CS_2556)
    
	#define _PCB_TYPE                                               _RL6432__156PIN__HKMRT2557E03__1T1H1DP_EDP//_RL6432__156PIN__HKMRT2557E03__1T1H1DP_EDP//_RL6432__156PIN__HKMRT2556E03__1H1DP__LVDS
    #define _PANEL_TYPE                                             _PANTEST//_PANDA_LC270MF1L_QHD_75HZ//_INNOLUX_M270KCJ_L5B_LVDS_QHD//_PANDA_CC240PV1D__LVDS_FHD60HZ//_INN_M270HCA_L7B_LVDS_FHD_165HZ//_BOE_MV238QHB_N10_LVDS_QHD_75HZ//_CSOT_MT236FHMN10_165HZ//      _PANDA_LC238LF_LVDS_FHD_165HZ
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _ON
    #define _OD_SUPPORT                                             _ON
   // #define _IR_VIRTUAL                                             _ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _EMBEDDED_MEMORY_SIZE_CONFIG							_4M_16BIT_DDR1_1PC
	
 #elif(Project_ID    ==  ID_CS_2785)
    
	#define _PCB_TYPE                                               _RL6432__216PIN__HK_M_RT2785E07_1DP3HDMI_LVDS
    #define _PANEL_TYPE                                             _PANDA_LC270MF1L_QHD_75HZ//_INN_M270HCA_L7B_LVDS_FHD_165HZ//_INN_M270HCA_L7B_LVDS_FHD_165HZ//_CSOT_MT236FHMN10_165HZ//      _PANDA_LC238LF_LVDS_FHD_165HZ
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _OFF
    #define _OD_SUPPORT                                             _ON
    #define _IR_VIRTUAL                                             _ON
	#define _HDMI_24C02_SUPPORT 									_ON
	//#define _HDMI_24C02_SUPPORT 									_ON
	//#define _PROJEC_HDMI1_SUPPORT									_ON// 2785E07 only hdmi
     
#elif(Project_ID    ==  ID_CS_2513)
    
    #define _PCB_TYPE                                               _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS//_RL6463__128PIN__HKMRT2525E04__1A1P1H__LVDS//_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
    #define _PANEL_TYPE                                             _PANTEST//_PANDA_CC240PV1D__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_BOE_HV320FHB_N00_LVDS_FHD                        
    #define _FRC_SUPPORT                                            _OFF     
    #define _MPRT_SUPPORT                                           _OFF
	#define _OD_SUPPORT 											_OFF
	#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID    ==  ID_CS_2513E03_M270HAN0_1_FHD10Z)
#define _PCB_TYPE												_RL6463__128PIN__HKMRT2513E03__1A1H__LVDS//_RL6463__128PIN__HKMRT2525E04__1A1P1H__LVDS//_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
#define _PANEL_TYPE 											_AUO_M238HVN01_2_LVDS_FHD75HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_BOE_HV320FHB_N00_LVDS_FHD						  
#define _FRC_SUPPORT											_OFF	 
#define _MPRT_SUPPORT											_OFF
#define _OD_SUPPORT 											_OFF
#define _HDMI_24C02_SUPPORT 									_OFF
#define _DEF_GuangGan_FUN										_ON
#define _VGA1_SUPPORT											_OFF

#elif(Project_ID    ==  ID_CS_2513E03_GuangGan_FHD60HZ)
		
    #define _PCB_TYPE                                               _RL6463__128PIN__HKMRT2513E03__1A1H__LVDS//_RL6463__128PIN__HKMRT2525E04__1A1P1H__LVDS//_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
    #define _PANEL_TYPE                                             _INN_M215HGE_L33__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_BOE_HV320FHB_N00_LVDS_FHD                        
    #define _FRC_SUPPORT                                            _OFF     
    #define _MPRT_SUPPORT                                           _OFF
	#define _OD_SUPPORT 											_OFF
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _DEF_GuangGan_FUN										_ON
	#define _VGA1_SUPPORT											_OFF
	
#elif(Project_ID    ==  ID_CS_2513E01_FHD100HZ)
    #define _PCB_TYPE                                               _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS//_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS//_RL6463__128PIN__HKMRT2525E04__1A1P1H__LVDS//_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
    #define _PANEL_TYPE                                             _PANTEST//_INN_M215HGE_L33__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_BOE_HV320FHB_N00_LVDS_FHD                        
    #define _FRC_SUPPORT                                            _OFF     
    #define _MPRT_SUPPORT                                           _OFF
	#define _OD_SUPPORT 											_ON
	//#define _VGA1_SUPPORT											_OFF
	//#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID    ==  ID_CS_2513brE03_FHD144HZ)
    #define _PCB_TYPE                                               _RL6851__76PIN__HKMRT2313BRE01__1A1H__LVDS//_RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS//_RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS
    #define _PANEL_TYPE                                             _PANTEST//_INN_M215HGE_L33__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_BOE_HV320FHB_N00_LVDS_FHD                        
    #define _FRC_SUPPORT                                            _OFF     
    #define _MPRT_SUPPORT                                           _ON
	//#define _DEF_OSD_KEY_2											_ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
#elif(Project_ID    ==  ID_CHUANGWU_2795E01_2P2H_M250HAN03_5_EDP_FHD300HZ)
	#define _PCB_TYPE												_RL6449__216PIN__HK_M_RTD2795E01__2DP2H__eDPVB1
   	#define _PANEL_TYPE											   	_AUO_M250HAN03_5_FHD300HZ
   	#define _FRC_SUPPORT 										   	_OFF//_ON	   
	#define _MPRT_SUPPORT											_ON//_OFF//_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _DP_EDID_384_SUPPORT									_ON
#elif(Project_ID    ==  ID_TONGZHOU_RTD2795E01_AUO_M315QAN01_0_20260824)
	#define _PCB_TYPE												_RL6449__216PIN__HK_M_RTD2795E01__2DP2H__eDPVB1
   	#define _PANEL_TYPE											   	_AUO_M315QAN01_0_UHD60HZ
   	#define _FRC_SUPPORT 										   	_OFF//_ON	   
	#define _MPRT_SUPPORT											_ON//_OFF//_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _DP_EDID_384_SUPPORT									_ON
#elif(Project_ID ==ID_CLP_2795E01_2P2H_SG2701G02_2_EDP_QHD165HZ)	
#define _PCB_TYPE												_RL6449__216PIN__HK_M_RTD2795E01__2DP2H__eDPVB1
#define _PANEL_TYPE 											_BOE_ME270QHB_NF0_EDP_QHD165
#define _FRC_SUPPORT											_OFF//_ON	   
#define _MPRT_SUPPORT											_ON//_OFF//_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#elif(Project_ID ==ID_CHUANGWU_2795E18_2P2H_ME270QHM_NF0_EDP_QHD165HZ)	
#define _PCB_TYPE												_RL6449__216PIN__HK_M_RTD2795E18_1DP2H1T_EDP//_RL6449__216PIN__HK_M_RTD2795E18_1DP2H1T_EDP
#define _PANEL_TYPE 											_BOE_ME270QHB_NF0_EDP_QHD165
#define _FRC_SUPPORT											_OFF//_ON	   
#define _MPRT_SUPPORT											_ON//_OFF//_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _DP_EDID_384_SUPPORT									_ON

#elif(Project_ID	==	ID_JIEFEI_2795E04_1USB1DP2H_ME270QHB_NF0_EDP_QHD165HZ_20260601)
	#define _PCB_TYPE												_RL6449__216PIN__HKMRT2795E04__1USB1DP2H__eDPVB1//_RL6449__216PIN__HK_M_RTD2795E01__2DP2H__eDPVB1
	#define _PANEL_TYPE 											_BOE_ME270QHB_NF0_EDP_QHD165//_AUO_M250HAN03_5_FHD300HZ
	#define _FRC_SUPPORT											_ON//_OFF//_ON	   
	#define _MPRT_SUPPORT											_ON//_OFF//_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _DP_EDID_384_SUPPORT									_ON
#elif(Project_ID	==	ID_XINHONGSHAN_2795E04_1USB1DP2H_SAMSUNG_LSM315DP01_QHD165HZ_20260713)
	#define _PCB_TYPE												_RL6449__216PIN__HKMRT2795E04__1USB1DP2H__eDPVB1//_RL6449__216PIN__HK_M_RTD2795E01__2DP2H__eDPVB1
	#define _PANEL_TYPE 											_SAMSUNG_LSM315DP01_EDP//_BOE_ME270QHB_NF0_EDP_QHD165//_AUO_M250HAN03_5_FHD300HZ
	#define _FRC_SUPPORT											_ON//_OFF//_ON	   
	#define _MPRT_SUPPORT											_OFF//_OFF//_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _DP_EDID_384_SUPPORT									_ON	

	
#elif(Project_ID    ==  _ID_RUIDE_2525BREQ4_TM238VFXJ09_FHD144HZ_20250910)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _PANTEST                       
    #define _FRC_SUPPORT                                            _OFF     
    #define _MPRT_SUPPORT                                           _ON
	//#define _DEF_OSD_KEY_2											_ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID == _ID_2513ARE02_PN238CS02_2_FHD100HZ_20260713)
#if(0)
#define _PCB_TYPE												_RL6463__128PIN__HKMRT2513E05__1A1H__LVDS//_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ//_HKC_PN238CT02_14_LVDS_FHD100HZ	
#define _HDMI_24C02_SUPPORT 									_ON
#else
#define _PCB_TYPE												_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ	//_HKC_PT320CT01_3_LVDS_FHD75HZ//
#define _HDMI_24C02_SUPPORT 									_OFF
#endif
#define _FRC_SUPPORT											_OFF	
#define _MPRT_SUPPORT											_OFF
#define _OD_SUPPORT 											_OFF
#elif(Project_ID == _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427)
#if(0)
#define _PCB_TYPE												_RL6463__128PIN__HKMRT2513E05__1A1H__LVDS//_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ//_HKC_PN238CT02_14_LVDS_FHD100HZ	
#define _HDMI_24C02_SUPPORT 									_ON
#else
#define _PCB_TYPE												_RL6463__128PIN__HKMRT2513E01__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ	//_HKC_PT320CT01_3_LVDS_FHD75HZ//
#define _HDMI_24C02_SUPPORT 									_OFF
#endif
#define _FRC_SUPPORT											_OFF	
#define _MPRT_SUPPORT											_OFF
#define _OD_SUPPORT 											_OFF

#define SG2701B08_1												_OFF
#define HV320FHB_F41											_ON //���� _HKC_PT320CT01_3_LVDS_FHD75HZ
#elif(Project_ID == _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730)
#define _PCB_TYPE												_RL6851__76PIN__HKMRT2313BRE01__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ						 
#define _FRC_SUPPORT											_OFF	
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _IR_VIRTUAL 											_OFF

#elif(Project_ID == _ID_MNT_2313BRE01_PN238CS02_2_FHD100HZ_20260427)
#if(0)
#define _PCB_TYPE												_RL6463__128PIN__HKMRT2513E05__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ						 
#define _FRC_SUPPORT											_OFF	
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_ON
#define _IR_VIRTUAL 											_OFF
#else
#define _PCB_TYPE												_RL6851__76PIN__HKMRT2313BRE01__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ						 
#define _FRC_SUPPORT											_OFF	
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _IR_VIRTUAL 											_OFF
#endif

#define PN270CU01_6 											_OFF//������PN238CS02_2
#define SG2701B08_1 											_OFF//������PN238CS02_2
#define SG2701B08_1_144 										_OFF//_OFF//������PN238CS02_2
#define SG2701B08_1_144_27M56 									_OFF//_ON//������PN238CS02_2
#define SG2701B08_1_LONG 										_ON//_OFF//������PN238CS02_2 ����
#define SG2381B04_1 											_OFF//������PN238CS02_2
#define SG2381B04_144 											_OFF//_ON//������PN238CS02_2
#define SG2381B04_144_2 										_OFF//_OFF//������PN238CS02_2
#define SG2381B04_1_shan 										_OFF//������PN238CS02_2 ����


#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_SN238CS08_1_FHD144HZ_20251103)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS
    #define _PANEL_TYPE                                             _HKC_SN238CS08_1_LVDS_FHD144HZ                       
    #define _FRC_SUPPORT                                            _OFF    
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _IR_VIRTUAL 											_ON
	
#elif(Project_ID == _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629)
#define _PCB_TYPE												_RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ						 
#define _FRC_SUPPORT											_OFF	
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _IR_VIRTUAL 											_ON

#elif(Project_ID == _ID_CLP_2513BRE02_SG2381B04_1_FHD120HZ_20260702)
#define _PCB_TYPE												_RL6851__76PIN__HKMRT2313BRE01__1A1H__LVDS
#define _PANEL_TYPE 											_HKC_PN238CT02_14_LVDS_FHD100HZ						 
#define _FRC_SUPPORT											_OFF	
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _IR_VIRTUAL 											_OFF
#define SG2381B04_1 											_ON

#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV400FHB_F11_FHD60HZ_20260321)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS
    #define _PANEL_TYPE                                             _HKC_SN238CS08_1_LVDS_FHD144HZ                       
    #define _FRC_SUPPORT                                            _OFF    
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _IR_VIRTUAL 											_ON
	
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV430FHB_F91_FHD60HZ_20260321)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS
    #define _PANEL_TYPE                                             _HKC_SN238CS08_1_LVDS_FHD144HZ                       
    #define _FRC_SUPPORT                                            _OFF    
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _IR_VIRTUAL 											_ON
	
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS
    #define _PANEL_TYPE                                             _HKC_SN238CS08_1_LVDS_FHD144HZ                       
    #define _FRC_SUPPORT                                            _OFF   
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _IR_VIRTUAL 											_ON
	
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV236WHB_F10_FHD60HZ_20260321)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS
    #define _PANEL_TYPE                                             _AUO_LC185TT7A_LVDS_60HZ                       
    #define _FRC_SUPPORT                                            _OFF    
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _IR_VIRTUAL 											_ON
	
#elif(Project_ID    ==  _ID_MXDZ_2513BRE03_HV320WHB_F73_FHD60HZ_20260321)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS
    #define _PANEL_TYPE                                             _AUO_LC185TT7A_LVDS_60HZ                    
    #define _FRC_SUPPORT                                            _OFF
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _IR_VIRTUAL 											_ON

#elif(Project_ID    ==  _ID_ZZY_2525BRE09_MV238FHM_NX4_FHD100HZ_20251118)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS
    #define _PANEL_TYPE                                             _BOE_MV238FHM_NX4_LVDS_FHD100HZ                       
    #define _FRC_SUPPORT                                            _OFF    
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID    ==  _ID_ZZY_2525BRE09_MV238FHM_N63_FHD100HZ_20251226)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS
    #define _PANEL_TYPE                                             _BOE_MV238FHM_NX4_LVDS_FHD100HZ                       
    #define _FRC_SUPPORT                                            _OFF    
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF	
	
#elif(Project_ID    ==  _ID_ZZY_2525BRE09_MV238FHM_NX5_FHD100HZ_20260302)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS
    #define _PANEL_TYPE                                             _BOE_MV238FHM_NX4_LVDS_FHD100HZ                       
    #define _FRC_SUPPORT                                            _OFF    
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF	
	#define _IR_VIRTUAL 											_OFF

	#define MV238FHM_NX3											_ON
#elif(Project_ID    ==  _ID_ZZY_2785E06_BOE_MV315QHM_NX0_LVDS_QHD75HZ_20260403)
    #define _PCB_TYPE                                               _RL6432__216PIN__HK_M_RT2785E06_1DP2HDMI1USB_LVDS
    #define _PANEL_TYPE                                             _BOE_MV315QHM_NX0_LVDS_QHD75HZ 
    #define _FRC_SUPPORT                                            _ON     
    #define _OVERCLOCK                                              _OFF//_ON
    #define _MPRT_SUPPORT                                           _OFF
    #define _OD_SUPPORT                                             _ON
	#define _HDMI_24C02_SUPPORT 									_OFF	
#elif(Project_ID    ==  _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)
    #define _PCB_TYPE                                               _RL6449__216PIN__HK_M_RTD2795E21__2DP2H__eDPVB1	
    #define _PANEL_TYPE                                             _NEMUI_N4TA430_VBY_UHD_60HZ 
    #define _FRC_SUPPORT                                            _ON     
    #define _OVERCLOCK                                              _OFF//_ON
    #define _MPRT_SUPPORT                                           _OFF
    #define _OD_SUPPORT                                             _ON
	#define _HDMI_24C02_SUPPORT 									_OFF		
	#define NO_SAVE_AC_STATE_SUPPORT								_ON//������AC״̬
	
	#define _IR_VIRTUAL 									_OFF		


#define ST5461D17_1_1_1 									_OFF
#define ST6451D06_1_2_1  									_OFF
	
#elif(Project_ID == _ID_DX_2525BREQ4_MF238FHB_N50_FHD100HZ_20260616)
#define _PCB_TYPE												_RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
#define _PANEL_TYPE 											_CSOT_SG2701B05_6_LVDS_FHD100HZ 				   
#define _FRC_SUPPORT											_OFF 
#define _MPRT_SUPPORT											_OFF
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _IR_VIRTUAL 											_OFF

#define MF27OFHB_C00 									_OFF
#define MF238FHB_NTO  									_ON

#elif(Project_ID    ==  _ID_XIANYOU_2525BREQ4_SG2701B05_6_FHD100HZ_20251015)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _CSOT_SG2701B05_6_LVDS_FHD100HZ                    
    #define _FRC_SUPPORT                                            _OFF 
    #define _MPRT_SUPPORT                                           _OFF
	#define _OD_SUPPORT 											_OFF
	#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID    ==  _ID_XIANYOU_2525BREQ4_PN238CT02_14_FHD100HZ_20251023)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _HKC_PN238CT02_14_LVDS_FHD100HZ                    
    #define _FRC_SUPPORT                                            _OFF 
    #define _MPRT_SUPPORT                                           _OFF
	#define _OD_SUPPORT 											_OFF
	#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID    ==  _ID_HONGXIA_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20251107)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _CSOT_LD238EU4_SUA1_LVDS_FHD120HZ//   _HKC_SN238CS08_1_LVDS_FHD144HZ//                
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _HONGXIA_OSD                                            _ON
	#define _IR_VIRTUAL 											_OFF

	#define LD238EU4_SUA1_20260428											_OFF
	#define MV270FHB_NY1_20260428											_ON
#elif(Project_ID    ==  _ID_HONGXIA_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20251107)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _CSOT_SG2701B08_1_LVDS_FHD120HZ                    
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _HONGXIA_OSD                                            _ON
	
#define _IR_MODE_2 											_OFF// 2����
#define _IR_MODE_3 											_ON// 3����
#define _IR_VIRTUAL 											_OFF
#elif(Project_ID    ==  _ID_CLP_2525EQ4_SG2701B08_1_FHD120HZ_20260702)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _CSOT_SG2701B08_1_LVDS_FHD120HZ                    
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _IR_VIRTUAL                                             _OFF

#elif(Project_ID    ==  _ID_CHUANGWU_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20260207)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _CSOT_LD238EU4_SUA1_LVDS_FHD120HZ                    
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _HONGXIA_OSD                                            _ON	
	
#elif(Project_ID    ==  _ID_CHUANGWU_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20260207)
    #define _PCB_TYPE                                               _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS
    #define _PANEL_TYPE                                             _CSOT_SG2701B08_1_LVDS_FHD120HZ                    
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _HONGXIA_OSD                                            _ON	
	
#elif(Project_ID    ==  ID_CS_2556E01_DX)
    #define _PCB_TYPE                                               _RL6432__156PIN__HKMRT255XE15__2H1DP__LVDS//_RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS//_RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS
    #define _PANEL_TYPE                                             _PANTEST//_INN_M215HGE_L33__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_PANDA_CC240PV1D__LVDS_FHD60HZ//_BOE_HV320FHB_N00_LVDS_FHD                        
    #define _FRC_SUPPORT                                            _ON     
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID    ==  ID_CS_2795_M270QAN070_UHD)
	#define _PCB_TYPE												_RL6449__216PIN__HK_M_RTD2775E01__2DP2H__eDPVB1
   	#define _PANEL_TYPE											   	_PANTEST//_BOE_MV315QUM_N20_EDP_UHD//_INL_M280DGJ_L30_VBY_UHD_60HZ//_SAMSUNG_LSM315DP02_EDP_QHD75HZ//_PANTEST//_INL_M280DGJ_L30_VBY_UHD_60HZ
   	#define _FRC_SUPPORT 										   	_ON  
	#define _MPRT_SUPPORT											_ON
	#define _DP_EDID_384_SUPPORT									_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	//#define _EDID_HDR_SUPPORT 									_ON
	#define _EMBEDDED_MEMORY_SIZE_CONFIG                           _16M_16BIT_DDR2_2PCS//_16M_16BIT_DDR2_1PC
	
#elif(Project_ID    ==  ID_TEST_HK255XE05_1H2DP_MV270FHB_NF6_FHD240HZ_20260204)
    #define _PCB_TYPE                                               _RL6432__156PIN__HKMRT255XE06__1H1DP1T__LVDS
    #define _PANEL_TYPE                                             _INN_M270HCA_L7B_LVDS_FHD_165HZ//_HKC_SN238CS04_1_FHD240HZ//                       
    #define _FRC_SUPPORT                                            _ON
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _KEY_LED_INSERVE                                    	_ON
	#define _FREESYNC_LEFT_RIGHT_EFFECT                        		_ON

	
#elif(Project_ID    ==  ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903)
    #define _PCB_TYPE                                               _RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
    #define _PANEL_TYPE                                             _HKC_SN238CS04_1_FHD240HZ//                       
    #define _FRC_SUPPORT                                            _ON 
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _KEY_LED_INSERVE                                    	_ON
	#define _FREESYNC_LEFT_RIGHT_EFFECT                        		_ON
	#define _VERSION_NO_LED                                      	_ON//������Ч�汾
	
#elif(Project_ID ==ID_MC_HK2556E01_SG3151B05_8_FHD165HZ_20260612)
#define _PCB_TYPE												_RL6432__156PIN__HKMRT2556E01__2H1DP__LVDS
#define _PANEL_TYPE 											_CSOT_SG3151B05_1_180HZ// 					  
#define _FRC_SUPPORT											_ON 
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#elif(Project_ID    ==  ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20260226_EUROPE)
    #define _PCB_TYPE                                               _RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
    #define _PANEL_TYPE                                             _HKC_SN238CS04_1_FHD240HZ//                       
    #define _FRC_SUPPORT                                            _ON 
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _KEY_LED_INSERVE                                    	_ON
	#define _FREESYNC_LEFT_RIGHT_EFFECT                        		_ON
	#define _VERSION_NO_LED                                      	_ON//������Ч�汾	
	
#elif(Project_ID ==ID_MC_HK255XE05_SG270AB02_5_FHD240HZ_20250903)
#define _PCB_TYPE												_RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
#define _PANEL_TYPE 											_HKC_SN238CS04_1_FHD240HZ// 					  
#define _FRC_SUPPORT											_ON 
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _KEY_LED_INSERVE										_ON
#define _FREESYNC_LEFT_RIGHT_EFFECT 							_ON

#elif(Project_ID ==ID_MC_HK255XE05_SG2381B01_1_FHD120HZ_20260702)
#define _PCB_TYPE												_RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
#define _PANEL_TYPE 											_CSOT_SG2381B05_1_180HZ// 					  
#define _FRC_SUPPORT											_ON 
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _KEY_LED_INSERVE										_ON
#define _FREESYNC_LEFT_RIGHT_EFFECT 							_ON


#elif(Project_ID ==ID_MC_HK255XE05_SG270AB02_5_FHD120HZ_20260702)
#define _PCB_TYPE												_RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
#define _PANEL_TYPE 											_CSOT_SG270AB02_5_FHD240HZ// 					  
#define _FRC_SUPPORT											_ON 
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _KEY_LED_INSERVE										_ON
#define _FREESYNC_LEFT_RIGHT_EFFECT 							_ON

#elif(Project_ID ==ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_370MA_20260702)
#define _PCB_TYPE												_RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
#define _PANEL_TYPE 											_HKC_SN270CU01_1_FHD240HZ// 					  
#define _FRC_SUPPORT											_ON 
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _KEY_LED_INSERVE										_ON
#define _FREESYNC_LEFT_RIGHT_EFFECT 							_ON

#elif(Project_ID ==ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_300MA_20260702)
#define _PCB_TYPE												_RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
#define _PANEL_TYPE 											_HKC_SN270CU01_1_FHD240HZ// 					  
#define _FRC_SUPPORT											_ON 
#define _MPRT_SUPPORT											_ON
#define _OD_SUPPORT 											_ON
#define _HDMI_24C02_SUPPORT 									_OFF
#define _KEY_LED_INSERVE										_ON
#define _FREESYNC_LEFT_RIGHT_EFFECT 							_ON

#elif(Project_ID    ==  ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215)
    #define _PCB_TYPE                                               _RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS
    #define _PANEL_TYPE                                             _BOE_MV270FHB_NF6_LVDS_FHD240HZ//                       
    #define _FRC_SUPPORT                                            _ON 
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _KEY_LED_INSERVE                                    	_ON
	#define _FREESYNC_LEFT_RIGHT_EFFECT                        		_ON
	#define _VERSION_NO_LED                                      	_OFF//������Ч�汾
	
#elif(Project_ID    ==  ID_KAIDI_HK2557E19_MV270QHM_N30_QHD75HZ_20260319)
    #define _PCB_TYPE                                               _RL6432__156PIN__HKMRT2557E17_1T1P1H_LVDS
    #define _PANEL_TYPE                                             _BOE_MV270QHM_N30_LVDS_QHD75HZ//                       
    #define _FRC_SUPPORT                                            _ON 
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
#elif(Project_ID    ==  ID_CHUANGWU_2557E19_MV238FHM_NG1_FHD144HZ_20260723)
    #define _PCB_TYPE                                             _RL6432__156PIN__HKMRT2557E23__1A1H1DP__LVDS//  _RL6432__156PIN__HKMRT2557E17_1T1P1H_LVDS
    #define _PANEL_TYPE                                           _BOE_MV270QHBN80_LVDS_QHD60HZ//_AUO_M238HVN01_2_LVDS_FHD75HZ// _BOE_MV238FHM_NG1_LVDS_FHD144HZ//                       
    #define _FRC_SUPPORT                                            _ON 
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF
	
#elif(Project_ID    ==  ID_KAIDI_HK2785E20_MV315QHM_NX0_QHD75HZ_20260319)
    #define _PCB_TYPE                                               _RL6432__216PIN__HKM_RT2785E19_1T1P1H_LVDS
    #define _PANEL_TYPE                                             _BOE_MV315QHM_NX0_LVDS_QHD75HZ//                       
    #define _FRC_SUPPORT                                            _ON 
    #define _MPRT_SUPPORT                                           _ON
	#define _OD_SUPPORT 											_ON
	#define _HDMI_24C02_SUPPORT 									_OFF	
	
#elif(Project_ID    ==  ID_SHIQI_2795E12_SG3402H01_1_WQHD100HZ_20251110)
	#define _PCB_TYPE												_RL6449__216PIN__HK_M_RT2795E12_1HDMIDP1DPOUT1TYPEC_EDP
   	#define _PANEL_TYPE											   	_CSOT_SG3402H01_1_EDP_8LANE_WQHD165HZ//_BOE_MV315QUM_N20_EDP_UHD//_INL_M280DGJ_L30_VBY_UHD_60HZ//_SAMSUNG_LSM315DP02_EDP_QHD75HZ//_PANTEST//_INL_M280DGJ_L30_VBY_UHD_60HZ
   	#define _FRC_SUPPORT 										   	_ON   
	#define _MPRT_SUPPORT											_ON
	#define _DP_EDID_384_SUPPORT									_OFF
	#define _HDMI_24C02_SUPPORT 									_OFF
	#define _EMBEDDED_MEMORY_SIZE_CONFIG                            _16M_16BIT_DDR2_2PCS

#elif(Project_ID    ==  ID_CS_2795_GC_MV270QUM_N60_UHD)
	#define _PROJEC_ID_TYPE 										13// 10 QT 11.QR 12 24C02 QT 13 24C02 QR
	#define _PCB_TYPE												_RL6449__216PIN__HK_M_RTD2795E16__2DP2H__eDPVB1
   	#define _PANEL_TYPE											   	_BOE_MV270QUM_N20_EDP_UHD//_BOE_MV315QUM_N20_EDP_UHD//_INL_M280DGJ_L30_VBY_UHD_60HZ//_SAMSUNG_LSM315DP02_EDP_QHD75HZ//_PANTEST//_INL_M280DGJ_L30_VBY_UHD_60HZ
   	#define _FRC_SUPPORT 										   	_ON   
	#define _MPRT_SUPPORT											_ON
	#define _DP_EDID_384_SUPPORT									_ON
#if(_PROJEC_ID_TYPE==12||_PROJEC_ID_TYPE==13)
	#define _HDMI_24C02_SUPPORT 									_ON
#else
	#define _HDMI_24C02_SUPPORT 									_OFF
#endif
			//#define _EDID_HDR_SUPPORT 										_ON
#if(_PROJEC_ID_TYPE==11||_PROJEC_ID_TYPE==13)
	#define _EMBEDDED_MEMORY_SIZE_CONFIG						   _16M_16BIT_DDR2_1PC//_16M_16BIT_DDR2_1PC
#else
	#define _EMBEDDED_MEMORY_SIZE_CONFIG                           _16M_16BIT_DDR2_2PCS//_16M_16BIT_DDR2_1PC
#endif

#else
#warning "zhe is Project_ID error!!"
#endif

#ifndef _PROJEC_ID_TYPE
#define _PROJEC_ID_TYPE 											0// 1 ��Ʒ 0 none
#endif

#ifndef _DEF_HDCP_FLASH14
#define _DEF_HDCP_FLASH14 											_OFF
#endif

#ifndef _DEF_HDCP_FLASH22
#define _DEF_HDCP_FLASH22 											_OFF
#endif

#ifndef _DEF_HDMI_SWAP
#define _DEF_HDMI_SWAP 												_ON
#endif


#ifndef _Def_AutoAlign_Type
#define _Def_AutoAlign_Type											1//o �ɰ�     1.�°棬��RTD��¼��
#endif

#ifndef _Anjian_EFFECT
#define _Anjian_EFFECT								_OFF
#endif

#ifndef _TYPEC_DAIJI
#define _TYPEC_DAIJI								_OFF
#endif

#ifndef _PCB_DP_OUT_ENABLE
#define _PCB_DP_OUT_ENABLE							_OFF
#endif


#ifndef _DEF_GuangGan_FUN
#define _DEF_GuangGan_FUN							_OFF
#endif

#ifndef _DP_EDID_384_SUPPORT
#define _DP_EDID_384_SUPPORT							_OFF
#endif

#ifndef _HONGXIA_OSD
#define _HONGXIA_OSD                                        _OFF
#endif

#ifndef _KEY_LED_INSERVE
#define _KEY_LED_INSERVE                                    _OFF //�����Ʒ�ת
#endif

#ifndef NO_SAVE_AC_STATE_SUPPORT
#define NO_SAVE_AC_STATE_SUPPORT							_OFF//������AC״̬
#endif

#include "./pcb/User_Pcb_List.h"

////////////////////////////////////////////////////Project_ID _PROJECT/////////////////////////////////////////////////////////////////////////////////
#if((Project_ID>=0x5000)&&(Project_ID<=0x5Fff)&&!(_PROJECT == _RL6463_PROJECT))
#warning "zhe is Project_ID error!!"
#endif
#if((Project_ID>=0x6000)&&(Project_ID<=0x6Fff)&&!(_PROJECT == _RL6851_PROJECT))
#warning "zhe is Project_ID error!!"
#endif

#if((Project_ID>=0x2000)&&(Project_ID<=0x2Fff)&&(_PROJECT != _RL6432_PROJECT))
//#warning "zhe is Project_ID error!!"
#endif
#if(((Project_ID>=0x3000)&&(Project_ID<=0x3Fff)&&(_PROJECT != _RL6432_PROJECT)))
#warning "zhe is Project_ID error!!"
#endif
#if(((Project_ID>=0x4000)&&(Project_ID<=0x4Fff)&&(_PROJECT != _RL6449_PROJECT)))
#warning "zhe is Project_ID error!!"
#endif
/////////////////////////////////////////////////////Project_ID _PROJECT////////////////////////////////////////////////////////////////////////////////
#if((Project_ID>=0x5000)&&(Project_ID<=0x5Fff)&&(_PCB_TYPE>=0x6000&&_PCB_TYPE<=0x6fff))
#elif((Project_ID>=0x2000)&&(Project_ID<=0x2Fff)&&(_PCB_TYPE>=0x3000&&_PCB_TYPE<=0x3fff))
#elif(((Project_ID>=0x3000)&&(Project_ID<=0x3Fff)&&(_PCB_TYPE>=0x4000&&_PCB_TYPE<=0x4fff)))
#elif(((Project_ID>=0x4000)&&(Project_ID<=0x4Fff)&&(_PCB_TYPE>=0x5000&&_PCB_TYPE<=0x5fff)))
#elif(((Project_ID>=0x6000)&&(Project_ID<=0x6Fff)&&(_PCB_TYPE>=0x7000&&_PCB_TYPE<=0x7fff)))
#else
//#warning "zhe is Project_ID error!!"
#endif



/////////////////////////////////////////////////////Project_ID////////////////////////////////////////////////////////////////////////////////
#if(((Project_ID>=0x2000)&&(Project_ID<=0x20ff))||((Project_ID>=0x3000)&&(Project_ID<=0x30ff))||((Project_ID>=0x4000)&&(Project_ID<=0x40ff))||((Project_ID>=0x5000)&&(Project_ID<=0x50ff)))
#warning "zhe is Project_ID error!!"
#warning "zhe is Project_ID error!!"
#warning "zhe is Project_ID error!!"
#warning "zhe is Project_ID error!!"
#warning "zhe is Project_ID error!!"


#endif




