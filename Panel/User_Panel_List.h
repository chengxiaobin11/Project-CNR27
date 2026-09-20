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
// ID Code      : User_Panel_List.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

//--------------------------------------------------
// Panel Type List
//--------------------------------------------------
#define _PANEL_LVDS_EXAMPLE                     0xFFFF
#define _PANEL_DPTX_EXAMPLE                     0xFFFE
#define _PANEL_VBO_EXAMPLE                      0xFFFD
#define _PANEL_TTL_EXAMPLE                      0xFFFC

#define _MULTIPANEL_LVDS_21_5_WUXGA             1
#define _CMO_LVDS_17                            2    // 1280 x 1024
#define _CMO_LVDS_19_WXGA                       3    // 1440 x  900
#define _AU_LVDS_22_WSXGA                       4    // 1680 x 1050
#define _AU_LVDS_22_WSXGA_QC                    5    // 1680 x 1050
#define _AU_LVDS_21_5_WUXGA                     6    // 1920 x 1080
#define _AU_LVDS_21_5_WUXGA_FREESYNC            7    // 1920 x 1080
#define _AU_LVDS_23_WUXGA                       8    // 1920 x 1200
#define _AU_LVDS_24_WUXGA                       9    // 1920 x 1080
#define _AU_LVDS_27_WUXGA_FREESYNC              10    // 1920 x 1080
#define _LG_LED_LVDS_27_WUXGA                   11    // 2560 x 1440
#define _LG_LED_LVDS_23_UHD                     12    // 3840 x 2160

#define _MULTIPANEL_DP_21_5_WUXGA               13
#define _AU_DP_21_5_WUXGA                       14    // 1920 x 1080
#define _AU_DP_21_5_WUXGA_FREESYNC              15    // 1920 x 1080
#define _LG_LED_DP_34_WFHD                      16    // 2560 x 1080
#define _LG_LED_DP_17_QHD                       17    // 2560 x 1440
#define _LG_LED_DP_27_QHD                       18    // 2560 x 1440
#define _LG_LED_DP_27_QHD_QC                    19    // 2560 x 1440
#define _SAMSUNG_LED_DP_15_6_UHD                20    // 3840 x 2160
#define _SAMSUNG_LED_DP_23_6_UHD                21    // 3840 x 2160
#define _LG_LED_DP_27_UHD                       22    // 3840 x 2160
#define _AUO_LED_DP_32_UHD                      23    // 3840 x 2160
#define _LG_LED_DP_27_QQHD                      24    // 5120 x 2880
#define _AUO_EDP_27_UHD_LOCAL_DIMMING           25    // 3840 x 2160

#define _AUO_VBO_27_WUXGA_FREESYNC              26    // 1920 x 1080
#define _INNOLUX_LED_VBO_28_UHD                 27    // 3840 x 2160
#define _INNOLUX_LED_VBO_40_UHD                 28    // 3840 x 2160
#define _INNOLUX_TTL_7                          29    // 800 x  480

/*************************User Define*************************************/
//�������ֵ����������ֶ�Ӧ��������� ����: 32_AUO_M270QAN010_EDP_UHD_60HZ.h
//panel ��������:��������->����->�ӿ�����->�ֱ���


#define  _AUO_M270QAN010_EDP_UHD_60HZ           32   // 3840 x  2160
#define  _LG_LM270WR2_EDP_UHD_60HZ          	33   // 3840 x  2160
#define  _LG_LM270WQ4_SSA1_LVDS_QHD_60HZ        34   // 2560 x  1440
#define  _INL_M236HJJP02_LVDS_FHD_60HZ          35   //1920 x 1080
#define  _AUO_M270DAN02V0_LVDS_QHD_60HZ  		36  // 2560 x  1440
#define  _AUO_M238DAN013_LVDS_QHD_60HZ          37  // 2560 X 1440
#define  _AUO_T320HVN05A_LVDS_FHD_144HZ         38  //1920x1080
#define  _INL_M238DCJ_E50_eDP_UHD				39   //3840x2160
#define  _SAMSUNG_LSM315HP01_VB1_FHD_144        40	//1920x1080
#define  _AUO_M270DAN010_LVDS_QHD_60HZ          41	//2560x1440
#define _AUO_M250HTN011_LVDS_FHD_60HZ           42	//1920x1080
#define _AUO_M195RTN01_0_LVDS_60HZ              43	//1600x900
#define _AUO_T215HVN05_1_LVDS_60HZ              44	//1920x1080
#define _AUO_M238FHB_N40_LVDS_60HZ              45	//1920x1080
#define _CSOT_ST2151B01_1_LVDS_60HZ             46	//1920x1080
#define _AUO_M270DTR01_0_EDP_165HZ              47	//2560x1440@165
#define _AUO_M315DVR01_0_EDP_165HZ              48	//2560x1440
#define _SAMSUNG_LSM270DP01_0_EDP2_144HZ        49	//2560x1440
#define _SAMSUNG_LSM236HP02_G02_165HZ           50	//1920x1080@165
#define _AUO_P320HVN05_0_144HZ                  51	//1920x1080@165
#define _AUO_M250HTN01_LVDS_60HZ                52	//1920x1080
#define _AUO_M250HTN01_6_VBY_144HZ              53	//1920x1080@165
#define _AUO_M250HTN01_0_VBY_240HZ              54	//1920x1080@240
#define _AUO_M270HTN02_0_VBY_240HZ              55	//1920x1080@240
#define _LG_LM230WF9_SSA3_LVDS_60HZ             56	//1920x1080@60
#define _AUO_M270HTN02_5_LVDS_60HZ              57	//1920x1080@60
#define _LG_LM238WF4_SSB1_LVDS_FHD_60HZ         58	//1920x1080@60
#define _AUO_M315DVR01_9_EDP_165HZ              59	//2560x1440  @165
#define _AUO_LC185TT7A_LVDS_60HZ                60	//1366x768
#define _BOE_HV320QHM_C80_LVDS_75HZ             61	//2560X1440@75
#define _CSOT_SG3151B02_1_LVDS_144HZ            62	//1920X1080@144
#define _INL_M280DGJ_L30_LVDS_FHD_60HZ          63	//1920X1080@60
#define _BOE_MV238FHB_N40_LVDS_FHD_60HZ         64	//1920X1080@60
#define _BOE_MV230FHM_N30__LVDS_FHD_60HZ        65	//1920X1080@60
#define _CSOT_ST2151B03_1_LVDS_60HZ             66	//1920x1080@60
#define _AUO_M320QAN01_0_EDP_60HZ               67	//3840X2160@60
#define _INL_M280DGJ_L30_VBY_UHD_60HZ           68	//3840X2160@60
#define _SAMSUNG_LSM270HP06_LVDS        		69	//1920x1080@165
#define _PANDA_LC238LF1L_LVDS       			70	//1920x1080@75
#define _SAMSUNG_LSM315DP01_EDP        			71	//2560x1440@144
#define _AUO_M238HVN010_LVDS             		72	//1920x1080@75
#define _SAMSUNG_LSM315DP06_EDP       			73	//2560x1440@165
#define _AUO_M270KCJ_K7B_VBY_QHD        		74	//2560x1440@165
#define _INNOLUX_M270KCJ_L5B_LVDS_QHD			75	// 2560 x 1440@75
#define _AUO_M350DVR01V0_VBY_QHD				76	// 2560 x 1080@200
#define _AUO_M270HVR01_LVDS_FHD					77	// 1920 x 1080@75
#define _BOE_MV270QUM_N10_EDP_UHD				78	// 3840x2160@60
#define _BOE_HV320FHB_N00_LVDS_FHD				79	// 1920X1080@60
#define _AUO_M270DTN01_V8_EDP_165HZ             80	//2560x1440@165
#define _BOE_MV270QUM_N20_EDP_UHD				81	// 3840x2160@60
#define  _AUO_M270QAN021_EDP_UHD_60HZ           82   // 3840 x  2160@60
#define _LHCX_2380_FHD_75_LVDS             		83	//1920x1080@75
#define _LHCX_295_QHD_75_LVDS             		84	//2560X1080@75
#define _LHCX_315_FHD_144HZ_LVDS             	85	//1920x1080@144
#define _LHCX_35_UHD_100HZ_EDP             		86	//3440X1440
#define _CSOT_SG2701B01_3_165HZ              	87	//1920X1080@165
#define _BOE_MV315QHB_N10_LVDS_75HZ             88	//2560X1440@75
#define _INN_M315DJJ_Q01_VBY1_60HZ              89	//3840x2160@60
#define _CSOT_SG3151B05_6_VBY1_240HZ            90    // 800 x  480
#define _AUO_M270HAN02_2_165HZ              	91	//1920X1080@165 //HBR2
#define _CSOT_SG2701B05_1_180HZ                 92	//1920X1080@180
#define _AUO_M270DAN06_6_QHD165HZ               93	//2560X1440@165
#define _CSOT_SG3151B05_1_180HZ                 94	//1920X1080@180
#define _BOE_MV238FHB_NG0_LVDS_165HZ            95	//1920X1080@180
#define _CSOT_SG2701B01_2_LVDS_75HZ             96	//1920X1080@75
#define _PANDA_CC240PV1D__LVDS_FHD60HZ          97	//1920X1080@75
#define _M315DJJ_VBO_UHD60                      98	//1920X1080@75
#define _BOE_MV270FHB_N20_LVDS                  99	//1920X1080@75
#define _AUO_M215HTN03_0_LVDS_144HZ             100	//1920X1080@180
#define _CSOT_SG3151B05_9_VBY1_240HZ            101    // 800 x  480
#define _PANDA_LC238LF1F_LVDS       			102	//1920x1080@165
#define _CSOT_SG2701G01_EDP_QHD165        		103	//2560x1440@165
#define _AUO_M270HAN01_1_75HZ              		104	//1920X1080@75
#define _SHARP_LQ125T1JW02_60HZ              	105	//2560X1440@60
#define _CSOT_SG2381B05_1_180HZ                 106	//1920X1080@180
#define _AUO_M270HVR01_2_4HBR2_FHD240			107	// 1920 x 1080@165
#define _INN_M215HGE_L33__LVDS_FHD60HZ			108	// 1920 x 1080@165
#define _AUO_M270HAN03_0_8HBR_FHD240			109	// 1920 x 1080@165
#define _INN_M280DCA_E3B_4HBR2_UHD60			110	//3840x2160@60
#define _BOE_MV340VWB_N10_4HBR2_WQHD75HZ		111	//3840x2160@60
#define _LG_LM270WQ5_SSA1_QHD60HZ				112	//3840x2160@60
#define _AUO_M240HW01_V8						113	//3840x2160@60
#define _LG_LM265SQ1_SLA1_FFHD_60HZ				114	//3840x2160@60
#define  _AUO_M270DAN09V0_LVDS_QHD_60HZ  		115  // 2560 x  1440
#define _AUO_M270HTN010_FHD165HZ              	116	//1920X1080@165





#define _LG_LM340WW2_EDP_2K144HZ       			117	//2560X1080@144
#define _BOE_MV315QUM_N20_EDP_UHD				118	// 3840x2160@60
#define _BOE_MV340VUM_N20_2K				119	// 2560x1080@60
#define _INN_M270HCA_L7B_LVDS_FHD_165HZ                        120	//1920X1080@165
#define _AUO_M320DVN02_LVDS_QHD_60HZ                        121	//2560X1440@60

#define _INN_M315DJJ_K30_VBY1_60HZ                        122	//3840x2160@60

#define _PANDA_LC270LF1L_LVDS_FHD165HZ                        123	//1920x1080@165
#define _SAMSUNG_LSM270DP02_EDP_QHD165HZ        		124	//2560x1440@165
#define _LG_LM270WF7_LVDS_FHD75HZ                        125	//1920X1080@75
#define _PANDA_LC270MF1L_QHD_75HZ                        126	//2560X1440@75

#define _SAMSUNG_LSM340YP03_M01_EDP_4K60HZ             127	//3440X1440

#define _LG_LM270WQA_SSA1_EDP_QHD165HZ                       	128	//2560X1440@165
#define _BOE_MV238QHM_N10_LVDS_QHD75HZ              			129	//2560X1440@75
#define _CSOT_MT236FHMN10_165HZ                         		130    // 1920X1080@165
#define _PANDA_MV238FHM_NG0_LVDS_FHD_165HZ             			131	//1920x1080@165
#define _AUO_M270HVR01_LVDS_FHD165								132// 1920 x 1080@165
#define _CSOT_SG2701B01_6_VBY_FHD240HZ							133	// 1920 x 1080@240
#define _BOE_ST3151B01_1_LVDS_FHD_75HZ             				134	//1920x1080@75
#define _PANDA_CC240LV1D_LVDS_FHD75HZ                     		135 //1920x1080@75

#define _SAMSUNG_LSM315DP02_EDP_QHD75HZ        					136	//2560x1440@75
#define _SAMSUNG_LSM270HP02_FHD75HZ        						137	//1920x1080@75
#define _SAMSUNG_LSM270HP06_LVDS_FHD144HZ        				138	//1920x1080@144
#define _LG_LM240WU8_SLE1_LVDS_1920_1200_60HZ        			139	//1920x1200@60

#define _AUO_M238HVN01_2_LVDS_FHD75HZ         					140	//1920x1080@75
#define _LG_LM270WQ5_SSB1_LVDS_QHD75HZ        					141	//2560X1440@60
#define _INN_M270KCJ_L5E_LVDS_QHD75HZ         					142	//2560x1440@75
#define _BOE_MV257VUB_N10_LVDS_WFHD100HZ         				143	//2560x1080@100
#define  _LG_LM270WR3_EDP_UHD_60HZ          	                144   // 3840 x  2160
#define  _MV238FHB_NG0_FHD165HZ          	                    145   //1920x1080@165
#define  _AUO_M240HW01_V8_LVDS_144HZ          	                146   //1920x1080@165
#define _AUO_M240UAN020_LVDS_1920_1200_75HZ         			147	//1920x1200@75

#define _BOE_MT236FHM_N10_FHD165HZ                				148    // 1920X1080@165
#define _AUO_M250HAN01_7_EDP_FHD240HZ              				149	//1920X1080@240
#define _BOE_MV238QHB_N10_LVDS_QHD_75HZ             			150	//2560x1440@75

#define _BOE_MV270FHM_N22_EDP_4CH_FHD144HZ              		151	//1920X1080@144
#define _AUO_M270DTR011_EDP_QHD75HZ             				152	//2560x1440@75
#define _AUO_M350QVR010_EDP_WQHD100HZ             				153	//3440x1440@100
#define _AUO_M270DAN082_EDP_QHD75HZ             				154	//2560x1440@75
#define _AUO_M315DVR01_6_QHD75HZ             					155	//2560x1440@75
#define _AUO_M236HVR010_LVDS_FHD165HZ							156// 1920 x 1080@165
#define _LG_LM290WW2_SSC1_LVDS_WFHD100HZ         				157	//2560x1080@100
//#define _AUO_MT236FHM_N10_FHD165HZ                				158    // 1920X1080@165
#define _AUO_M250HAN01_6_EDP_FHD165HZ              				158	//1920X1080@165
#define _AUO_M250HTN01C_FHD165HZ              					159	//1920X1080@165
#define _AUO_M350QVR015_EDP8LAN_WQHD120HZ						160	//3840x2160@60
#define _HKC_PT320CT01_3_LVDS_FHD75HZ         					161	//1920x1080@75
#define _CSOT_SG2701B01_8_FHD165HZ         						162	//1920x1080@165
#define _LG_LM270WQ1_SDA2_EDP_QHD60HZ         					163	//1920x1080@165

#define _HKC_SN238CS04_1_FHD240HZ              				   	164	//1920X1080@165
#define _TM_TM238VFXJ09_LVDS_FHD144HZ                           165 //1920x1080@144
#define _CSOT_SG2701B05_6_LVDS_FHD100HZ                         166 //1920x1080@100

#define _HKC_PN238CT02_14_LVDS_FHD100HZ                      	167 //1920x1080@100
#define _HKC_SN238CS08_1_LVDS_FHD144HZ                          168 //1920x1080@144HZ
#define _CSOT_SG3402H01_1_EDP_8LANE_WQHD165HZ                   169 //3440x1440@165HZ
#define _CSOT_LD238EU4_SUA1_LVDS_FHD120HZ                       170
#define _CSOT_SG2701B08_1_LVDS_FHD120HZ                         171

#define _BOE_MV238FHM_NX4_LVDS_FHD100HZ                         172 //1920x1080@100
#define _BOE_MV270FHB_NF6_LVDS_FHD240HZ                         173

#define _BOE_MV315QHM_NX0_LVDS_QHD75HZ                          174 //2560x1440@75
#define _BOE_MV270QHM_N30_LVDS_QHD75HZ                          175 //2560x1440@75
#define _NEMUI_N4TA430_VBY_UHD_60HZ           					176	//3840X2160@60
#define _AUO_M250HAN03_5_FHD300HZ              					177	//1920X1080@300

#define _BOE_ME270QHB_NF0_EDP_QHD165							178//2560X1440@165

#define _CSOT_SG270AB02_5_FHD240HZ							    179	// 1920 x 1080@240
#define _HKC_SN270CU01_1_FHD240HZ							    180	// 1920 x 1080@180

#define _BOE_MV238FHM_NG1_LVDS_FHD144HZ                         181 //1920x1080@144HZ

#define _CSOT_SG2381B01_1_LVDS_FHD144HZ							182	// 1920 x 1080@144

#define _AUO_M315QAN01_0_UHD60HZ                                183 //3840x2160@60
#define _BOE_MV270QHBN80_LVDS_QHD60HZ			                184 //2560×1440@60
#define _PANTEST             									400	//2560x1440@75





//--------------------------------------------------
// Panel Led Driver List (Can Not Be 0xFF)
//--------------------------------------------------
#define _DEVICE_LED_DRIVER_01_O2_OZ9913         0x01
#define _DEVICE_LED_DRIVER_02_AUSTRIA_AS3820    0x02
#define _DEVICE_LED_DRIVER_03_AUSTRIA_AS3824    0x03
