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
// ID Code      : User_PCB_List.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
//****************************************************************************
// Definitions by User PCB
//****************************************************************************
/*_RL6369_PROJECT                0x1xxx
 *_RL6410_PROJECT                0x2xxx
 *_RL6432_PROJECT                0x3xxx //156Pin
 *_RL6432_PROJECT                0x4xxx //216Pin
 *_RL6449_PROJECT                0x5xxx
 *_RL6463_PROJECT                0x6xxx
 *_RL6492_PROJECT                0x7xxx
 *pcb 命名规则:芯片系列->Pin脚数->板卡名字->输入端口->输出端口
 */
//PCB第一次使用，请申请测试，目前很多感觉不对
/*********************RL6369*********************************************/


/*********************RL6410*********************************************/
#define _RL6410__318PIN__JY29XT_PH_WS_R20_1__2H2DP__eDPVB1LVDS			 0x2001


/*********************RL6432 156Pin**************************************/

#define _RL6432__156PIN__JY85TX_VPH_LS_R10_1__1A1H1DP__LVDS              0x3001
#define _RL6432__156PIN__RTD2556T_1A1D_LS_R30_1__1A1DVI__LVDS            0x3002
#define _RL6432__156PIN__RTD2556T_1A1H_WS_R60_1__1A1H__LVDS              0x3003
#define _RL6432__156PIN__JY85QS_UPH_LS_R10_1__1H1DP__LVDS                0x3004
#define _RL6432__156PIN__JY85QS_UPH_WS_R10_1__1H1DP__LVDS              	 0x3005
#define _RL6432__156PIN__JY85QR_UPH_LS_R20_1__1H1DP__LVDS                0x3006
#define _RL6432__156PIN__JY85QR_UPH_WS_R20_1__1H1DP__LVDS                0x3007
#define _RL6432__156PIN__RTD2556T_1A1H_LS_R70_1__1A1H__LVDS              0x3008
#define _RL6432__156PIN__SG85QS_1P1H_LS_R10_1__1P1H__LVDS                0x3009
#define _RL6432_SG_C_156PIN_1A1H_FFC_DPTX_eDP                            0x300A


#define _RL6432__156PIN__HKMRT2556E01__2H1DP__LVDS                       0x300B
#define _RL6432__156PIN__HKMRT2556E02__1H1DP__LVDS                       0x300C//FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA 
#define _RL6432__156PIN__HKMRT2556E03__1H1DP__LVDS                       0x300D//FF-  0XB0 240MA  0X9C 300MA 0X88 360MA 0X7B 400MA 0X60 480MA 0X58 500MA 

#define _RL6432__156PIN__HKMRT2556E04E05__1H1DP__LVDS                    0x300E

#define _RL6432__156PIN__HKMRT2556E06__1H1DP__LVDS                       0x300F

#define _RL6432__156PIN__HKMRT2556E07__1H1DP__LVDS                       0x3010
#define _RL6432__156PIN__HKMRT2556E10__2H1DP__LVDS                       0x3011

#define _RL6432__156PIN__HK_MINI_CS5629V01__1H1T__eDP                    0x3012
#define _RL6432__156PIN__HKMRT2557E04__2H1DP__LVDS                       0x3013
#define _RL6432__156PIN__HKMRT2556E18__2T1H__LVDS                    	 0x3014
#define _RL6432__156PIN__HKMRT2557E03__1T1H1DP_EDP                       0x3015
#define _RL6432__156PIN__HKMRT255XE08__1T1H1DP_LVDS                		 0x3016//待定
#define _RL6432__156PIN__HKMRT2557E09__1T1H1DP_EDP                       0x3017//待定

#define _RL6432__156PIN__HKMRT255XE15__2H1DP__LVDS                       0x3018//待定
#define _RL6432__156PIN__HKMRT255XE17__1D1H1DP_LVDS              	  	 0x3019//待定
#define _RL6432__156PIN__HKMRT255XE05__2H1DP__LVDS                       0x3020
#define _RL6432__156PIN__HKMRT255XE06__1H1DP1T__LVDS                     0x3021//待定
#define _RL6432__156PIN__HKMRT255XE19__1T1P1H__LVDS                      0x3022//待定//非2557E19  不用
#define _RL6432__156PIN__HKMRT2557E17_1T1P1H_LVDS						 0x3023//2557E19

#define _RL6432__156PIN__HKMRT2557E23__1A1H1DP__LVDS				     0x3024//待定


/*********************RL6432 216Pin***************************************/
#define _RL6432__216PIN__HKCMNT_RTD2785T_A1_0__1A1H1DVI__LVDS            0x4001
#define _RL6432__216PIN__SG2785T_PHD_LS_R10_2__1D1H1P__LVDS              0x4002
#define _RL6432__216PIN__SG2785T_PHD_WS_R30_2__1D1H1P__LVDS              0x4003
#define _RL6432__216PIN__SG2785T_UPH_LWS_R20_1__1H1P1U__LVDS             0x4004


#define _RL6432__216PIN__RTD2785_VHD_LS_R20_1__1A1H1DVI__LVDS            0x4005
#define _RL6432__216PIN__RTD2785_VHD_WS_R10_2__1A1H1DVI__LVDS            0x4006
#define _RL6432__216PIN__RT27X5T_1P2H_LWS_R10_4_LVDS                     0x4007
/*********************RL6432 216Pin***************************************/

#define _RL6432__216PIN__HK_M_RT2785E01_LVDS                             0x4008
#define _RL6432__216PIN__HK_M_RT2785E02_1DP2HDMI_LVDS                    0x4009//FF-  0XB0 250MA  0X9D 310MA 0X8C 350MA  0X89 360MA 0X7C 400MA  0X6A 450MA 0X60 480MA 0X58 500MA 0X48 550MA
#define _RL6432__216PIN__HK_M_RT2785E02_1DP3HDMI_LVDS                    0x400A
#define _RL6432__216PIN__HK_M_RT2785E03_1DP3HDMI_eDP                     0x400B
#define _RL6432__216PIN__HK_M_RT2785E06_1DP2HDMI1USB_LVDS                0x400C//
#define _RL6432__216PIN__HK_M_RT2785E07_1DP3HDMI_LVDS                	 0x400D//待定

#define _RL6432__216PIN__HK_M_RT2785E011_1DP1HDMI1DPOUT_LVDS           	 0x400E//待定
#define _RL6432__216PIN__HKM_RT2785E17_1T1P2H_LVDS				 		 0x400F//待定
#define _RL6432__216PIN__HKM_RT2785E19_1T1P1H_LVDS				 		 0x4010//待定 //2785E20








/*********************RL6449*********************************************/
#define _RL6449__216PIN__JY27X5T_2P2H_WS_R10_3__2DP2H__eDPVB1   		 0x5001
#define _RL6449__216PIN__JY27X5T_2P2H_LS_R20_1__2DP2H__eDPVB1   		 0x5002
#define _RL6449__216PIN__JY95U_2P2H_WS_R30_2__2DP2H__eDPVB1   		     0x5003
#define _RL6449__216PIN__JY95U_2P2H_LS_R30_2__2DP2H__eDPVB1   		     0x5004
#define _RL6449__216PIN__SG95T_UPH_WS_R10_1__1DP2H__eDPVB1               0x5005
#define _RL6449__216PIN__SG95T_UPH_LS_R10_1__1DP2H__eDPVB1               0x5006
#define _RL6449__216PIN__SG95TC_HTP_WS_R10_1_DPTX_eDP                    0x5007
#define _RL6449__216PIN__YY95UTUT2H_R10_1_1DP2H_TYPEC_USB_DPTX_eDP       0x5008
/*********************RL6449*********************************************/

#define _RL6449__216PIN__HK_M_RTD2795E01__2DP2H__eDPVB1   		         0x5009
#define _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1   		     0x500A
#define _RL6449__216PIN__HKMRT2795E03__1USB1DP2H__eDPVB1   		 	     0x500B

#define _RL6449__216PIN__HKMRT2795E04__1USB1DP2H__eDPVB1   		 	     0x500C//ff-  0X49 560  0X4D 550 0X5D 500 //0X6F 450 //0X80 400 0X90 350 // 0XA0 300 
#define _RL6449__216PIN__HKMRT2795E05__1USB1DP2H__eDPVB1   		 	     0x500D//0X00 60MA  0X2B 240MA 0X36 300MA 0X40 360MA  0X48 400MA 0X50 450MA 0X56 480MA 0X5A 500MA 0X5D 520MA 0X62 550MA 0X68 580MA  0X6B 600MA 0X7A 680MA 0X7E 700MA 0X81 720MA 0X87 750MA
#define _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1   		     0x500E
#define _RL6449__216PIN__HK_M_RTD2775E04__1T1DP1H__eDPVB1   		     0x500F

#define _RL6449__216PIN__HK_M_RTD2775E01__2DP2H__eDPVB1					 0x5010///待定
#define _RL6449__216PIN__HK_M_RT2795E12_1HDMIDP1DPOUT1TYPEC_EDP			 0x5011///待定
#define _RL6449__216PIN__HK_M_RTD2795E18_1DP2H1T_EDP					 0x5012///待定
#define _RL6449__216PIN__HK_M_RTD2775E05__1T1DP1H__eDPVB1				 0x5013///待定
#define _RL6449__216PIN__HK_M_RTD2795E15__1DP2H__eDPVB1				 	 0x5014///待定
#define _RL6449__216PIN__HK_M_RTD2795E20__1T1DP2H__eDPVB1				 0x5015///待定
#define _RL6449__216PIN__HK_M_RTD2795E16__2DP2H__eDPVB1				 	 0x5016///待定
//#define _RL6449__216PIN__HK_M_RTD2775E05__1T1DP1H__eDPVB1   		     0x500F
#define _RL6449__216PIN__HK_M_RTD2795E21__2DP2H__eDPVB1					 0x5017





//#define _RL6449__216PIN__HK_M_RTD2795E18_1T1DP1H__eDPVB1                0x5018///待定


/*********************RL6463*********************************************/
#define _RL6463__128PIN__SG2513AR_VH_LS_R10_2__1A1H__LVDS                0x6001
#define _RL6463__128PIN__SGA_2525AR_PH_R10_1__1P1H__LVDS                 0X6002
/*********************RL6463*********************************************/ 

#define _RL6463__128PIN__HKMRT2513E01__1A1H__LVDS                        0X6003
#define _RL6463__128PIN__HKMRT2513E03__1A1H__LVDS                        0X6004

#define _RL6463__128PIN__HKMRT2525E02__1A2H__LVDS                        0X6005//点不亮，不确定是主板问题还是代码问题
#define _RL6463__128PIN__HKMRT2525E04__1A1P1H__LVDS                      0X6006//1A1H1P,目前代码不能点，xdata超出

#define _RL6463__76PIN__HKMRT2313E01__1A1H__LVDS                     	 0X6007///待定
#define _RL6463__128PIN__HKMRT2513E05__1A1H__LVDS                  	     0X6008


#define _RL6851__76PIN__HKMRT2313BRE01__1A1H__LVDS                  	 0X7001///待定
#define _RL6851__128PIN__HKMRT2513BRE03__1A1H__LVDS                  	 0X7002//
#define _RL6851__76PIN__HKMRT2313BRE06__1A1H__LVDS                  	 0X7003///

#define _RL6851__128PIN__HKMRT2525BRE09__1A1H__LVDS                  	 0X7021//
#define _RL6851_HK_RT2525XRE01_128PIN_1H1DP_LVDS                  	 	 0X7022//
#define _RL6851__128PIN__HKMRT2525BREQ4__1A1P1H__LVDS                  	 0X7023//
#define _RL6851__128PIN__HKMRT2525BRE01__1A1H1P__LVDS                  	 0X7024//
#define _RL6851__128PIN__HKMRT2525BRE10__1A1T1H__LVDS                     	 0X7025//S



/*********************RL6492*********************************************/












