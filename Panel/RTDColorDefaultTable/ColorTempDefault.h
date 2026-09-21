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
// ID Code      : ColorTempDefaultNo.0000
// Update Note  :
//
//----------------------------------------------------------------------------------------------------

//****************************************************************************
// COLOR TEMP DEFAULT DATA
//****************************************************************************
#if(_CTS_TYPE == _CTS_GEN_1_12BIT)

#if(Project_ID    ==  ID_DX_2795E01_2P2H_MV270QUBN50_8LaneHbr2_UHD75HZ_20240513)
	#define _CT9300_RED 								(107 << 4)
	#define _CT9300_GREEN								(118 << 4)
	#define _CT9300_BLUE								(128 << 4)
		
	#define _CT7500_RED 								(124 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(123 << 4)
			
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(128 << 4)
	#define _CT6500_BLUE								(115 << 4)
	
	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)
	
	#define _CT5800_RED 								(0x7A << 4)
	#define _CT5800_GREEN								(0x77 << 4)
	#define _CT5800_BLUE								(0x69 << 4)
	
	#define _CTSRGB_RED 								_CT6500_RED
	#define _CTSRGB_GREEN								_CT6500_GREEN
	#define _CTSRGB_BLUE								_CT6500_BLUE
	
#elif(Project_ID ==ID_MC_HK2556E01_SG3151B05_8_FHD165HZ_20260612)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
					
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
			
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)	
	
#elif(Project_ID ==ID_MC_HK255XE05_SG270AB02_5_FHD240HZ_20250903)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
					
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
			
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)	

#elif(Project_ID ==ID_MC_HK255XE05_SG2381B01_1_FHD120HZ_20260702)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
					
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
			
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)	

#elif(Project_ID ==ID_MC_HK255XE05_SG270AB02_5_FHD120HZ_20260702)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
					
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
			
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)	

#elif(Project_ID ==ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_370MA_20260702)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
					
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
			
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)

#elif(Project_ID ==ID_MC_HK255XE05_SN270CU01_1_FHD120HZ_300MA_20260702)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
					
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
			
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)

#elif(Project_ID ==ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20260226_EUROPE)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
			
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
			
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
	
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)	
	
#elif(Project_ID ==ID_KAIDI_HK2557E19_MV270QHM_N30_QHD75HZ_20260319)
	#define _CT9300_RED 								(110 << 4)
	#define _CT9300_GREEN								(117 << 4)
	#define _CT9300_BLUE								(128 << 4)
			
	#define _CT7500_RED 								(124 << 4)
	#define _CT7500_GREEN								(126 << 4)
	#define _CT7500_BLUE								(128 << 4)
			
	#define _CT6500_RED 								(126 << 4)
	#define _CT6500_GREEN								(128 << 4)
	#define _CT6500_BLUE								(128 << 4)
	
	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(126 << 4)
	#define _CTSRGB_BLUE								(128 << 4)
#elif(Project_ID ==ID_CHUANGWU_2557E19_MV238FHM_NG1_FHD144HZ_20260723)
	#define _CT9300_RED 								(99 << 4)
	#define _CT9300_GREEN								(113 << 4)
	#define _CT9300_BLUE								(128 << 4)
	#define _CT7500_RED 								(112 << 4)
	#define _CT7500_GREEN								(120 << 4)
	#define _CT7500_BLUE								(128 << 4)
	#define _CT6500_RED 								(122 << 4)
	#define _CT6500_GREEN								(125 << 4)
	#define _CT6500_BLUE								(128 << 4)
	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(126 << 4)
	#define _CTSRGB_BLUE								(128 << 4)
#elif(Project_ID == ID_KAIDI_HK2785E20_MV315QHM_NX0_QHD75HZ_20260319)
	#define _CT9300_RED 								(115 << 4)
	#define _CT9300_GREEN								(118 << 4)
	#define _CT9300_BLUE								(128 << 4)
			
	#define _CT7500_RED 								(124 << 4)
	#define _CT7500_GREEN								(126 << 4)
	#define _CT7500_BLUE								(128 << 4)
			
	#define _CT6500_RED 								(126 << 4)
	#define _CT6500_GREEN								(128 << 4)
	#define _CT6500_BLUE								(128 << 4)
	
	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(126 << 4)
	#define _CTSRGB_BLUE								(128 << 4)
	
#elif(Project_ID ==ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903)
	#define _CT9300_RED 								(128 << 4)//(104 << 4)
	#define _CT9300_GREEN								(123 << 4)//(101 << 4)
	#define _CT9300_BLUE								(128 << 4)//(128 << 4)
			
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
			
	#define _CT6500_RED 								(129 << 4)//(128 << 4)
	#define _CT6500_GREEN								(128 << 4)//(121 << 4)
	#define _CT6500_BLUE								(126 << 4)//(128 << 4)
	
	#define _CTSRGB_RED 								(128 << 4)//(122 << 4)
	#define _CTSRGB_GREEN								(126 << 4)//(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)
	
#elif(Project_ID ==ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215)
	#define _CT9300_RED 								(104 << 4)
	#define _CT9300_GREEN								(101 << 4)
	#define _CT9300_BLUE								(128 << 4)
			
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(128 << 4)
			
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(121 << 4)
	#define _CT6500_BLUE								(128 << 4)
	
	#define _CTSRGB_RED 								(122 << 4)
	#define _CTSRGB_GREEN								(122 << 4)
	#define _CTSRGB_BLUE								(128 << 4)
	
#elif(Project_ID ==ID_CHUANGWU_2795E18_2P2H_ME270QHM_NF0_EDP_QHD165HZ)	
	#define _CT9300_RED 								(106 << 4)
	#define _CT9300_GREEN								(107 << 4)
	#define _CT9300_BLUE								(128 << 4)
				
	#define _CT7500_RED 								(118 << 4)
	#define _CT7500_GREEN								(115 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(120 << 4)
	#define _CT6500_BLUE								(127 << 4)
		
	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)
		
	#define _CT5800_RED 								(122 << 4)
	#define _CT5800_GREEN								(119 << 4)
	#define _CT5800_BLUE								(105 << 4)
		
	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(128 << 4)
	#define _CTSRGB_BLUE								(115 << 4)
	
#elif(Project_ID ==ID_CLP_2795E01_2P2H_SG2701G02_2_EDP_QHD165HZ)	
	#define _CT9300_RED 								(106 << 4)
	#define _CT9300_GREEN								(107 << 4)
	#define _CT9300_BLUE								(128 << 4)
				
	#define _CT7500_RED 								(118 << 4)
	#define _CT7500_GREEN								(115 << 4)
	#define _CT7500_BLUE								(128 << 4)
					
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(120 << 4)
	#define _CT6500_BLUE								(127 << 4)
		
	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)
		
	#define _CT5800_RED 								(122 << 4)
	#define _CT5800_GREEN								(119 << 4)
	#define _CT5800_BLUE								(105 << 4)
		
	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(128 << 4)
	#define _CTSRGB_BLUE								(115 << 4)
#elif(Project_ID ==ID_CHUANGWU_2795E01_2P2H_M250HAN03_5_EDP_FHD300HZ)	
	#define _CT9300_RED 								(106 << 4)
	#define _CT9300_GREEN								(107 << 4)
	#define _CT9300_BLUE								(128 << 4)
		
	#define _CT7500_RED 								(118 << 4)
	#define _CT7500_GREEN								(115 << 4)
	#define _CT7500_BLUE								(128 << 4)
			
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(120 << 4)
	#define _CT6500_BLUE								(127 << 4)

	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)

	#define _CT5800_RED 								(122 << 4)
	#define _CT5800_GREEN								(119 << 4)
	#define _CT5800_BLUE								(105 << 4)

	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(128 << 4)
	#define _CTSRGB_BLUE								(115 << 4)
#elif(Project_ID ==ID_TONGZHOU_RTD2795E01_AUO_M315QAN01_0_20260824)	
	#define _CT9300_RED 								(106 << 4)
	#define _CT9300_GREEN								(107 << 4)
	#define _CT9300_BLUE								(128 << 4)
	#define _CT7500_RED 								(118 << 4)
	#define _CT7500_GREEN								(115 << 4)
	#define _CT7500_BLUE								(128 << 4)
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(120 << 4)
	#define _CT6500_BLUE								(127 << 4)
	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)
	#define _CT5800_RED 								(122 << 4)
	#define _CT5800_GREEN								(119 << 4)
	#define _CT5800_BLUE								(105 << 4)
	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(128 << 4)
	#define _CTSRGB_BLUE								(115 << 4)
#elif(Project_ID ==ID_JIEFEI_2795E04_1USB1DP2H_ME270QHB_NF0_EDP_QHD165HZ_20260601)	
	#define _CT9300_RED 								(100 << 4)
	#define _CT9300_GREEN								(101 << 4)
	#define _CT9300_BLUE								(128 << 4)
		
	#define _CT7500_RED 								(111 << 4)
	#define _CT7500_GREEN								(108 << 4)
	#define _CT7500_BLUE								(128 << 4)
			
	#define _CT6500_RED 								(121 << 4)
	#define _CT6500_GREEN								(114 << 4)
	#define _CT6500_BLUE								(128 << 4)

	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)

	#define _CT5800_RED 								(122 << 4)
	#define _CT5800_GREEN								(119 << 4)
	#define _CT5800_BLUE								(105 << 4)

	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(128 << 4)
	#define _CTSRGB_BLUE								(115 << 4)

#elif(Project_ID ==ID_XINHONGSHAN_2795E04_1USB1DP2H_SAMSUNG_LSM315DP01_QHD165HZ_20260713)	
	#define _CT9300_RED 								(128 << 4)
	#define _CT9300_GREEN								(121 << 4)
	#define _CT9300_BLUE								(117 << 4)
	#define _CT7500_RED 								(128 << 4)
	#define _CT7500_GREEN								(119 << 4)
	#define _CT7500_BLUE								(106 << 4)
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(113 << 4)
	#define _CT6500_BLUE								(94 << 4)
	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)
	#define _CT5800_RED 								(128 << 4)
	#define _CT5800_GREEN								(106 << 4)
	#define _CT5800_BLUE								(82 << 4)
	#define _CTSRGB_RED 								(128 << 4)
	#define _CTSRGB_GREEN								(128 << 4)
	#define _CTSRGB_BLUE								(115 << 4)
#elif(Project_ID ==  _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)
#define _CT9300_RED 								(119 << 4)
#define _CT9300_GREEN								(108 << 4)
#define _CT9300_BLUE								(128 << 4)
	
#define _CT7500_RED 								(132 << 4)
#define _CT7500_GREEN								(116 << 4)
#define _CT7500_BLUE								(117 << 4)
		
#define _CT6500_RED 								(133 << 4)
#define _CT6500_GREEN								(104 << 4)
#define _CT6500_BLUE								(100 << 4)

#define _CTUSER_RED 								(128 << 4)
#define _CTUSER_GREEN								(128 << 4)
#define _CTUSER_BLUE								(128 << 4)

#define _CT5800_RED 								(0x7A << 4)
#define _CT5800_GREEN								(0x77 << 4)
#define _CT5800_BLUE								(0x69 << 4)

#define _CTSRGB_RED 								(132 << 4)
#define _CTSRGB_GREEN								(104 << 4)
#define _CTSRGB_BLUE								(87 << 4)


#else

	#define _CT9300_RED 								(107 << 4)
	#define _CT9300_GREEN								(118 << 4)
	#define _CT9300_BLUE								(128 << 4)
		
	#define _CT7500_RED 								(124 << 4)
	#define _CT7500_GREEN								(128 << 4)
	#define _CT7500_BLUE								(123 << 4)
			
	#define _CT6500_RED 								(128 << 4)
	#define _CT6500_GREEN								(128 << 4)
	#define _CT6500_BLUE								(115 << 4)
	
	#define _CTUSER_RED 								(128 << 4)
	#define _CTUSER_GREEN								(128 << 4)
	#define _CTUSER_BLUE								(128 << 4)
	
	#define _CT5800_RED 								(0x7A << 4)
	#define _CT5800_GREEN								(0x77 << 4)
	#define _CT5800_BLUE								(0x69 << 4)
	
	#define _CTSRGB_RED 								_CT6500_RED
	#define _CTSRGB_GREEN								_CT6500_GREEN
	#define _CTSRGB_BLUE								_CT6500_BLUE

#endif



#ifndef _CT9300_RED
#define _CT9300_RED 								(106 << 4)
#endif

#ifndef _CT9300_GREEN
#define _CT9300_GREEN								(112 << 4)
#endif

#ifndef _CT9300_BLUE
#define _CT9300_BLUE								(127 << 4)
#endif

#ifndef _CT7500_RED
#define _CT7500_RED 								(123 << 4)
#endif

#ifndef _CT7500_GREEN
#define _CT7500_GREEN								(125 << 4)
#endif

#ifndef _CT7500_BLUE
#define _CT7500_BLUE								(128 << 4)
#endif

#ifndef _CT6500_RED
#define _CT6500_RED 								(128 << 4)
#endif

#ifndef _CT6500_GREEN
#define _CT6500_GREEN								(128 << 4)
#endif

#ifndef _CT6500_BLUE
#define _CT6500_BLUE								(128 << 4)
#endif

#ifndef _CT5800_RED
#define _CT5800_RED 								(123 << 4)
#endif

#ifndef _CT5800_GREEN
#define _CT5800_GREEN								(122 << 4)
#endif

#ifndef _CT5800_BLUE
#define _CT5800_BLUE								(117 << 4)
#endif

#ifndef _CTSRGB_RED
#define _CTSRGB_RED 								(128 << 4)
#endif

#ifndef _CTSRGB_GREEN
#define _CTSRGB_GREEN							 	(128 << 4)
#endif

#ifndef _CTSRGB_BLUE
#define _CTSRGB_BLUE							 	(128 << 4)
#endif

#ifndef _CTUSER_RED
#define _CTUSER_RED 								(128 << 4)
#endif

#ifndef _CTUSER_GREEN
#define _CTUSER_GREEN								(128 << 4)
#endif

#ifndef _CTUSER_BLUE
#define _CTUSER_BLUE								(128 << 4)
#endif


#else


#if(Project_ID == ID_DX_2525E02_1A2H_T215HVN05_FHD75HZ_ENGLISH_202231124)
#define _CT9300_RED                                 128//103//108//114
#define _CT9300_GREEN                               123//106//110//108
#define _CT9300_BLUE                                128//128//128//128

#define _CT7500_RED                                 128//122//128//128
#define _CT7500_GREEN                               116//123//128//128
#define _CT7500_BLUE                                106//128//128//116

#define _CT6500_RED                                	128//128// 128//128
#define _CT6500_GREEN                               110//128//128//114
#define _CT6500_BLUE                                94//121//118//96

#define _CT5800_RED                                 128
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                102

#define _CTSRGB_RED                                 0x80
#define _CTSRGB_GREEN                               0x80
#define _CTSRGB_BLUE                                0x80
#define _CTUSER_RED                                 0x80
#define _CTUSER_GREEN                               0x80
#define _CTUSER_BLUE                                0x80

#elif(Project_ID == _ID_2513ARE02_PN238CS02_2_FHD100HZ_20260713)
#define _CT9300_RED                                 99
#define _CT9300_GREEN                               111
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 121
#define _CT7500_GREEN                               128
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	121
#define _CT6500_GREEN                               128
#define _CT6500_BLUE                                128
	
#define _CT5800_RED                                 120
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                124
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#elif(Project_ID == _ID_2313ARE02_PN238CS02_2_FHD100HZ_20260427)
#if(SG2701B08_1)
#define _CT9300_RED                                 99
#define _CT9300_GREEN                               111
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 121
#define _CT7500_GREEN                               128
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	121
#define _CT6500_GREEN                               128
#define _CT6500_BLUE                                128
	
#define _CT5800_RED                                 120
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                124
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128
#elif(HV320FHB_F41)
#define _CT9300_RED                                 107
#define _CT9300_GREEN                               115
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               127
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               127
#define _CT6500_BLUE                                128
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                121
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#else
#define _CT9300_RED                                 107
#define _CT9300_GREEN                               108
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               127
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               128
#define _CT6500_BLUE                                114
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               121
#define _CT5800_BLUE                                110
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#endif

#elif(Project_ID == _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730)
#define _CT9300_RED                                 102
#define _CT9300_GREEN                               114
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 115
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                124
	
#define _CT6500_RED                                	122
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                120
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               121
#define _CT5800_BLUE                                110
	
#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               120
#define _CTUSER_BLUE                                120

#elif(Project_ID == _ID_MNT_2313BRE01_PN238CS02_2_FHD100HZ_20260427)
#if(PN270CU01_6)
#define _CT9300_RED                                 107
#define _CT9300_GREEN                               108
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               127
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               112
#define _CT6500_BLUE                                103
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               121
#define _CT5800_BLUE                                110
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128
#elif(SG2381B04_1_shan)
#define _CT9300_RED                                 99
#define _CT9300_GREEN                               107
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               126
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	127
#define _CT6500_GREEN                               126
#define _CT6500_BLUE                                128
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                109
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#elif(SG2701B08_1_LONG)
#if 0 //27MP55
#define _CT9300_RED                                 104
#define _CT9300_GREEN                               105
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               123
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               118
#define _CT6500_BLUE                                114
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                109
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128
#else
//27MP56
#define _CT9300_RED                                 111
#define _CT9300_GREEN                               114
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               125
#define _CT7500_BLUE                                126
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               118
#define _CT6500_BLUE                                104
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                109
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128
#endif

#elif(SG2381B04_1)
#define _CT9300_RED                                 103
#define _CT9300_GREEN                               113
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               128
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	127
#define _CT6500_GREEN                               121
#define _CT6500_BLUE                                111
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                109
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128
#elif(SG2381B04_144)
#define _CT9300_RED                                 100
#define _CT9300_GREEN                               108
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 127
#define _CT7500_GREEN                               127
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               124
#define _CT6500_BLUE                                112
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               127
#define _CT5800_BLUE                                118
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#elif(SG2701B08_1_144_27M56)
#define _CT9300_RED                                 102
#define _CT9300_GREEN                               108
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               126
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               118
#define _CT6500_BLUE                                109
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               127
#define _CT5800_BLUE                                118
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#elif(SG2701B08_1_144)
#define _CT9300_RED                                 110
#define _CT9300_GREEN                               105
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               112
#define _CT7500_BLUE                                117
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               105
#define _CT6500_BLUE                                100
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               127
#define _CT5800_BLUE                                118
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128
#elif(SG2381B04_144_2)
#define _CT9300_RED                                 99
#define _CT9300_GREEN                               108
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 124
#define _CT7500_GREEN                               126
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               125
#define _CT6500_BLUE                                117
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               127
#define _CT5800_BLUE                                118
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#else
#define _CT9300_RED                                 96
#define _CT9300_GREEN                               106
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 124
#define _CT7500_GREEN                               126
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               122
#define _CT6500_BLUE                                110
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               127
#define _CT5800_BLUE                                118
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#endif
#elif(Project_ID == _ID_MNT_2513BRE03_SG2381B04_1_FHD120HZ_20260629)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_CLP_2513BRE02_SG2381B04_1_FHD120HZ_20260702)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118
#elif(Project_ID == _ID_MXDZ_2513BRE03_SN238CS08_1_FHD144HZ_20251103)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_MXDZ_2513BRE03_HV400FHB_F11_FHD60HZ_20260321)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_MXDZ_2513BRE03_HV430FHB_F91_FHD60HZ_20260321)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_MXDZ_2513BRE03_PT500CT02_2_FHD60HZ_20260321)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_MXDZ_2513BRE03_HV236WHB_F10_FHD60HZ_20260321)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_MXDZ_2513BRE03_HV320WHB_F73_FHD60HZ_20260321)
#define _CT9300_RED                                 90
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                126

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               120
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	115
#define _CT6500_GREEN                               120
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118


#elif(Project_ID == _ID_ZZY_2525BRE09_MV238FHM_NX4_FHD100HZ_20251118)
#define _CT9300_RED                                 106
#define _CT9300_GREEN                               112
#define _CT9300_BLUE                                122

#define _CT7500_RED                                 115
#define _CT7500_GREEN                               118
#define _CT7500_BLUE                                128

#define _CT6500_RED                                	117
#define _CT6500_GREEN                               116
#define _CT6500_BLUE                                125

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_ZZY_2525BRE09_MV238FHM_N63_FHD100HZ_20251226)
#define _CT9300_RED                                 106
#define _CT9300_GREEN                               112
#define _CT9300_BLUE                                122

#define _CT7500_RED                                 119
#define _CT7500_GREEN                               118
#define _CT7500_BLUE                                121

#define _CT6500_RED                                	119
#define _CT6500_GREEN                               118
#define _CT6500_BLUE                                125

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_ZZY_2525BRE09_MV238FHM_NX5_FHD100HZ_20260302)
#if(MV238FHM_NX3)
#define _CT9300_RED                                 106
#define _CT9300_GREEN                               104
#define _CT9300_BLUE                                122

#define _CT7500_RED                                 120
#define _CT7500_GREEN                               118
#define _CT7500_BLUE                                126

#define _CT6500_RED                                	119
#define _CT6500_GREEN                               118
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118
#else
#define _CT9300_RED                                 106
#define _CT9300_GREEN                               104
#define _CT9300_BLUE                                122

#define _CT7500_RED                                 119
#define _CT7500_GREEN                               118
#define _CT7500_BLUE                                126

#define _CT6500_RED                                	119
#define _CT6500_GREEN                               118
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#endif
#elif(Project_ID == _ID_ZZY_2785E06_BOE_MV315QHM_NX0_LVDS_QHD75HZ_20260403)
#define _CT9300_RED                                 106
#define _CT9300_GREEN                               104
#define _CT9300_BLUE                                122

#define _CT7500_RED                                 119
#define _CT7500_GREEN                               118
#define _CT7500_BLUE                                126

#define _CT6500_RED                                	119
#define _CT6500_GREEN                               118
#define _CT6500_BLUE                                128

#define _CT5800_RED                                 120
#define _CT5800_GREEN                               120
#define _CT5800_BLUE                                123

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               122
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_DX_2525BREQ4_MF238FHB_N50_FHD100HZ_20260616)
#if(MF27OFHB_C00)
#define _CT9300_RED                                 108
#define _CT9300_GREEN                               106
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 128
#define _CT7500_GREEN                               121
#define _CT7500_BLUE                                126
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               114
#define _CT6500_BLUE                                108
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                102
	
#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               110
#define _CTUSER_BLUE                                118
#elif(MF238FHB_NTO)
#define _CT9300_RED                                 112
#define _CT9300_GREEN                               117
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 125
#define _CT7500_GREEN                               128
#define _CT7500_BLUE                                120
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               126
#define _CT6500_BLUE                                108
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                102
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128

#else
#define _CT9300_RED                                 104
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                128
	
#define _CT7500_RED                                 127
#define _CT7500_GREEN                               128
#define _CT7500_BLUE                                128
	
#define _CT6500_RED                                	128
#define _CT6500_GREEN                               125
#define _CT6500_BLUE                                110
	
#define _CT5800_RED                                 128
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                102
	
#define _CTUSER_RED                                 128
#define _CTUSER_GREEN                               128
#define _CTUSER_BLUE                                128
#endif
#elif(Project_ID == _ID_XIANYOU_2525BREQ4_SG2701B05_6_FHD100HZ_20251015)
#define _CT9300_RED                                 107
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                122

#define _CT7500_RED                                 112
#define _CT7500_GREEN                               110
#define _CT7500_BLUE                                114

#define _CT6500_RED                                	122
#define _CT6500_GREEN                               110
#define _CT6500_BLUE                                118

#define _CT5800_RED                                 128
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                102

#define _CTUSER_RED                                 122
#define _CTUSER_GREEN                               110
#define _CTUSER_BLUE                                118

#elif(Project_ID == _ID_XIANYOU_2525BREQ4_PN238CT02_14_FHD100HZ_20251023)
#define _CT9300_RED                                 110
#define _CT9300_GREEN                               114
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 115
#define _CT7500_GREEN                               115
#define _CT7500_BLUE                                120

#define _CT6500_RED                                	127
#define _CT6500_GREEN                               115
#define _CT6500_BLUE                                124

#define _CT5800_RED                                 128
#define _CT5800_GREEN                               128
#define _CT5800_BLUE                                102

#define _CTUSER_RED                                 127
#define _CTUSER_GREEN                               115
#define _CTUSER_BLUE                                124

#elif(Project_ID == _ID_HONGXIA_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20251107)
#if(LD238EU4_SUA1_20260428)
#define _CT9300_RED                                 106
#define _CT9300_GREEN                               122
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 128
#define _CT7500_GREEN                               128
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 128
#define _CT6500_GREEN                               125
#define _CT6500_BLUE                                118

#define _CTUSER_RED                                 128
#define _CTUSER_GREEN								128
#define _CTUSER_BLUE								128
#elif(MV270FHB_NY1_20260428)
#define _CT9300_RED                                 85
#define _CT9300_GREEN                               110
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 102
#define _CT7500_GREEN                               114
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 114
#define _CT6500_GREEN                               125
#define _CT6500_BLUE                                128

#define _CTUSER_RED                                 102
#define _CTUSER_GREEN								114
#define _CTUSER_BLUE								128

#else
#define _CT9300_RED                                 116
#define _CT9300_GREEN                               129
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 128
#define _CT7500_GREEN                               125
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 126
#define _CT6500_GREEN                               124
#define _CT6500_BLUE                                112

#define _CTUSER_RED                                 128
#define _CTUSER_GREEN								125
#define _CTUSER_BLUE								128

#endif
#elif(Project_ID == _ID_HONGXIA_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20251107)
#if(_IR_MODE_2)
#define _CT9300_RED                                 61
#define _CT9300_GREEN                               105
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 80
#define _CT7500_GREEN                               110
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 91
#define _CT6500_GREEN                               111
#define _CT6500_BLUE                                128

#define _CTUSER_RED                                 80
#define _CTUSER_GREEN								110
#define _CTUSER_BLUE								128
#elif(_IR_MODE_3)
#define _CT9300_RED                                 105
#define _CT9300_GREEN                               115
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 121
#define _CT7500_GREEN                               119
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 128
#define _CT6500_GREEN                               125
#define _CT6500_BLUE                                124

#define _CTUSER_RED                                 121
#define _CTUSER_GREEN								119
#define _CTUSER_BLUE								128

#else
#define _CT9300_RED                                 92
#define _CT9300_GREEN                               120
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 110
#define _CT7500_GREEN                               125
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 123
#define _CT6500_GREEN                               128
#define _CT6500_BLUE                                128

#define _CTUSER_RED                                 110
#define _CTUSER_GREEN								125
#define _CTUSER_BLUE								128
#endif


#elif(Project_ID == _ID_CLP_2525EQ4_SG2701B08_1_FHD120HZ_20260702)
#define _CT9300_RED                                 92
#define _CT9300_GREEN                               120
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 128
#define _CT7500_GREEN                               125
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 118
#define _CT6500_GREEN                               126
#define _CT6500_BLUE                                128

#define _CTUSER_RED                                 108
#define _CTUSER_GREEN								124
#define _CTUSER_BLUE								128

#elif(Project_ID == _ID_CHUANGWU_2525BREQ4_1A1H_LD238EU4_SUA1_LVDS_FHD120HZ_20260207)
#define _CT9300_RED                                 116
#define _CT9300_GREEN                               129
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 128
#define _CT7500_GREEN                               125
#define _CT7500_BLUE                                128

#define _CT6500_RED                                 126
#define _CT6500_GREEN                               124
#define _CT6500_BLUE                                112

#define _CTUSER_RED                                 128
#define _CTUSER_GREEN								125
#define _CTUSER_BLUE								128

#elif(Project_ID == _ID_CHUANGWU_2525BREQ4_1A1H_SG2701B08_1_LVDS_FHD120HZ_20260207)
#define _CT9300_RED                                 96
#define _CT9300_GREEN                               122
#define _CT9300_BLUE                                128

#define _CT7500_RED                                 105
#define _CT7500_GREEN                               125
#define _CT7500_BLUE                                121

#define _CT6500_RED                                 112
#define _CT6500_GREEN                               128
#define _CT6500_BLUE                                115

#define _CTUSER_RED                                 108
#define _CTUSER_GREEN								124
#define _CTUSER_BLUE								128


#else
#define _CT9300_RED                                 0x62
#define _CT9300_GREEN                               0x68
#define _CT9300_BLUE                                0x6F
#define _CT7500_RED                                 0x68
#define _CT7500_GREEN                               0x69
#define _CT7500_BLUE                                0x6B
#define _CT6500_RED                                 0x71
#define _CT6500_GREEN                               0x70
#define _CT6500_BLUE                                0x68
#define _CT5800_RED                                 0x7A
#define _CT5800_GREEN                               0x77
#define _CT5800_BLUE                                0x69
#define _CTSRGB_RED                                 0x80
#define _CTSRGB_GREEN                               0x80
#define _CTSRGB_BLUE                                0x80
#define _CTUSER_RED                                 0x80
#define _CTUSER_GREEN                               0x80
#define _CTUSER_BLUE                                0x80

#endif


#ifndef _CT9300_RED
#define _CT9300_RED 								106
#endif

#ifndef _CT9300_GREEN
#define _CT9300_GREEN								122
#endif

#ifndef _CT9300_BLUE
#define _CT9300_BLUE								128
#endif

#ifndef _CT7500_RED
#define _CT7500_RED 								128
#endif

#ifndef _CT7500_GREEN
#define _CT7500_GREEN								128
#endif

#ifndef _CT7500_BLUE
#define _CT7500_BLUE								128
#endif

#ifndef _CT6500_RED
#define _CT6500_RED 								128
#endif

#ifndef _CT6500_GREEN
#define _CT6500_GREEN								122
#endif

#ifndef _CT6500_BLUE
#define _CT6500_BLUE								122
#endif

#ifndef _CT5800_RED
#define _CT5800_RED 								128
#endif

#ifndef _CT5800_GREEN
#define _CT5800_GREEN								112
#endif

#ifndef _CT5800_BLUE
#define _CT5800_BLUE								108
#endif

#ifndef _CTSRGB_RED
#define _CTSRGB_RED 								128
#endif

#ifndef _CTSRGB_GREEN
#define _CTSRGB_GREEN							 	128
#endif

#ifndef _CTSRGB_BLUE
#define _CTSRGB_BLUE							 	128
#endif

#ifndef _CTUSER_RED
#define _CTUSER_RED 								128
#endif

#ifndef _CTUSER_GREEN
#define _CTUSER_GREEN								128
#endif

#ifndef _CTUSER_BLUE
#define _CTUSER_BLUE								128
#endif


#endif
