/********************************************************************************/
/*   Copyright (c) 2021 Realtek Semiconductor Corp. All rights reserved.        */
/*                                                                              */
/*   SPDX-License-Identifier: LicenseRef-Realtek-Proprietary                    */
/*                                                                              */
/*   This software component is confidential and proprietary to Realtek         */
/*   Semiconductor Corp. Disclosure, reproduction, redistribution, in whole     */
/*   or in part, of this work and its derivatives without express permission    */
/*   is prohibited.                                                             */
/********************************************************************************/

//----------------------------------------------------------------------------------------------------
// ID Code      : SysColor.c No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __SYSTEM_COLOR__

#include "SysInclude.h"
#define _DEF_Aim_HLW		_OFF

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************
#if(_DEF_Aim_HLW)
#define P0_60_HLW_ADDR_PORT                                                                                             0x0060
#define P0_61_HLW_DATA_PORT                                                                                             0x0061
#define _P0_61_PT_0D_HLW_CONTROL1                                                                                       0x0D
#define _P0_61_PT_0E_HLW_CONTROL0                                                                                       0x0E
#define P7_DA_DCR_CTRL                                                                                                  0x07DA

extern void ScalerSetDataPortBit(WORD usAddr, BYTE ucValue, BYTE ucAnd, BYTE ucOr);
extern void OsdFuncEnableOsd(void);
extern BYTE GetOsdAim_ColorAuto();
extern BYTE UserCommonHDRGetHDR10Status_1(void);
BYTE rgb_flag = 0;
#endif


//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************


//****************************************************************************
// CODE TABLES
//****************************************************************************


//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************


//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void SysColorHandler(void);
#if(_COLOR_IP_DCC_HISTOGRAM == _ON)
void SysColorDCCHistogramHandler(void);
#endif
#if(_COLOR_IP_DCR == _ON)
void SysColorDCRHandler(void);
#endif

//****************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  : Color Handler
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void SysColorHandler(void)
{
    switch(GET_MODE_STATE())
    {
        case _MODE_STATUS_ACTIVE:

#if(_COLOR_IP_DCC_HISTOGRAM == _ON)
            SysColorDCCHistogramHandler();
#endif

#if(_COLOR_IP_DCR == _ON)
            SysColorDCRHandler();
#endif

#if(_COLORIMETRY_SEAMLESS_CHANGE_SUPPORT == _ON)
            UserCommonSeamlessChgHandler();
#endif

#if((_MOTION_BLUR_REDUCTION_SUPPORT == _ON) && (_DRR_MOTION_BLUR_REDUCTION_SUPPORT == _ON))
            UserCommonInterfaceMbrDrrHandler();
#endif
            break;

        default:
            break;
    }
}

#if(_COLOR_IP_DCC_HISTOGRAM == _ON)
//--------------------------------------------------
// Description  : Color DCC Histogram Handler
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void SysColorDCCHistogramHandler(void)
{
    if(ScalerColorDCCGetDataReadyStatus() == _TRUE)
    {
        // Clear DCC data ready status.
        ScalerColorDCCClrDataReadyStatus();

        SET_DCC_READY_STATUS();
    }

    if(GET_DCC_READY_STATUS() == _TRUE)
    {
#if(_DCC_HISTOGRM_INFO == _ON)
        UserInterfaceDCCHistogramHandler();
#endif

#if(_ULTRA_HDR_SUPPORT == _ON)
        UserCommonHDRHandler();
#endif
    }

    CLR_DCC_READY_STATUS();
}
#endif

#if(_COLOR_IP_DCR == _ON)
//--------------------------------------------------
// Description  : Color DCR Handler
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void SysColorDCRHandler(void)
{
    if(ScalerColorDCRGetDataReadyStatus() == _TRUE)
    {
        // Clear DCR data ready status.
        ScalerColorDCRClrDataReadyStatus();

        SET_DCR_READY_STATUS();

        // freeze DCR data
        ScalerColorDCRDataRefreshControl(_DISABLE);

#if(_LOCAL_DIMMING_SUPPORT == _ON)
        if(ScalerColorDCRGetLocalDimmingHistoEnable() == _TRUE)
        {
            ScalerColorDCRLocalDimmingStoreResult();

            // release DCR data
            ScalerColorDCRDataRefreshControl(_ENABLE);
        }
#endif
    }

    if(GET_DCR_READY_STATUS() == _TRUE)
    {
  
#if _DEF_Aim_HLW
#if 1//_HDR_AIM_AUTO_NEW
#define RGB_Limit		200//240
#define RGB_Limit1		40//240
#define RGB_Limit2		25//240
#define RGB_Limit3		30//240
#else
#define RGB_Limit		200//240
#define RGB_Limit1		30//240
#define RGB_Limit2		30//240
#define RGB_Limit3		15//240
#endif
	static DWORD R_number = 0,G_number = 0,B_number = 0;
	static DWORD R_Pre = 0,G_Pre = 0,B_Pre = 0;
	static BYTE bg_Count=0;
#endif	
#if _DEF_Aim_HLW
		if(GetOsdAim_ColorAuto())
		{
				DebugMessageSystem("5.1111111 rgb_flag = ",rgb_flag);
				if(rgb_flag==0||rgb_flag==2)
				{
					rgb_flag ++;
					return ;
				}
				switch(ScalerGetBit(P7_DA_DCR_CTRL,(_BIT2 | _BIT1))/2)
				{
					case 0: 
#if(_DCR_SUPPORT == _ON)
						UserInterfaceAdjustDCRHandler();
#endif
					#if 1
					if((UserCommonHDRGetHDR10Status_1() == _ON))
					{	
						if(R_number>128)
							R_number=(128+(R_number-128)*2)>255?255:(128+(R_number-128)*2);
						if(G_number>128)
							G_number=(128+(G_number-128)*2)>255?255:(128+(G_number-128)*2);
						if(B_number>128)
							B_number=(128+(B_number-128)*2)>255?255:(128+(B_number-128)*2);
					}
					#else
						R_number = R_number*0xff/_PANEL_DH_WIDTH/_PANEL_DV_HEIGHT;
						G_number = G_number*0xff/_PANEL_DH_WIDTH/_PANEL_DV_HEIGHT;
						B_number = B_number*0xff/_PANEL_DH_WIDTH/_PANEL_DV_HEIGHT;
					#endif
						#if 1
						if((UserInterfaceGetIntoPSStatus()  != _TRUE)&&bg_Count<6)
						{
							DebugMessageSystem("8.1 UserCommonOsdGetOsdEnable = ",0);
							bg_Count=6;
							R_Pre=0XFFFF;
							B_Pre=0XFFFF;
							G_Pre=0XFFFF;
						}
					#if 1//_HDR_AIM_AUTO_NEW
					else if((UserInterfaceGetIntoPSStatus() == _TRUE)&&
						(R_number<=(R_Pre<(0X100-RGB_Limit2) ? (R_Pre+RGB_Limit2):255) && R_number>=(R_Pre>=RGB_Limit2 ? (R_Pre-RGB_Limit2):0))
						&&(G_number<=(G_Pre<(0X100-RGB_Limit2) ? (G_Pre+RGB_Limit2):255) && G_number>=(G_Pre>=RGB_Limit2 ? (G_Pre-RGB_Limit2):0))
						&&(B_number<=(B_Pre<(0X100-RGB_Limit2) ? (B_Pre+RGB_Limit2):255) && B_number>=(B_Pre>=RGB_Limit2 ? (B_Pre-RGB_Limit2):0))
						)
					#else
						else if((UserCommonOsdGetOsdEnable() == _TRUE)&&
							(R_number<=(R_Pre<(0X100-RGB_Limit2) ? (R_Pre+RGB_Limit2):255) && R_number>=(R_Pre>=RGB_Limit2 ? (R_Pre-RGB_Limit2):0))
							&&(G_number<=(G_Pre<(0X100-RGB_Limit2) ? (G_Pre+RGB_Limit2):255) && G_number>=(G_Pre>=RGB_Limit2 ? (G_Pre-RGB_Limit2):0))
							&&(B_number<=(B_Pre<(0X100-RGB_Limit2) ? (B_Pre+RGB_Limit2):255) && B_number>=(B_Pre>=RGB_Limit2 ? (B_Pre-RGB_Limit2):0))
							)
					#endif
						{
							bg_Count=3;
						}
						else
						{
							bg_Count++;
						}
						DebugMessageSystem("8.1 bg_Count = ",bg_Count);
						DebugMessageSystem("6.1 R_number = ",R_number);
						DebugMessageSystem("6.1 G_number = ",G_number);
						DebugMessageSystem("6.1 B_number = ",B_number);
						if(bg_Count>7)
						{
							bg_Count=0;							
							#if 0
							R_Pre=R_number;
							G_Pre=G_number;
							B_Pre=B_number;
							UserCommonOsdSetColorPalette(15, (R_number+120)%0XFF,(R_number+120)%0XFF,(R_number+120)%0XFF);
							#else
							if(R_number>RGB_Limit&&G_number>RGB_Limit&&B_number>RGB_Limit)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("7.1 COLOR = ",1);
								ScalerOsdSetColorPalette(2, 255,0,0);
							}
							else if(R_number<=RGB_Limit1&&G_number<=RGB_Limit1&&B_number<=RGB_Limit1)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("7.1 COLOR = ",2);
								ScalerOsdSetColorPalette(2, 255,255,255);
							}
							else if(R_number>RGB_Limit&&G_number>RGB_Limit)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("7.1 COLOR = ",3);
								ScalerOsdSetColorPalette(2, 0,0,255);
							}
							else if(R_number>RGB_Limit&&B_number>RGB_Limit)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("7.1 COLOR = ",4);
								ScalerOsdSetColorPalette(2, 0,255,0);
							}
							else if(G_number>RGB_Limit&&B_number>RGB_Limit)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("7.1 COLOR = ",5);
								ScalerOsdSetColorPalette(2, 255,0,0);
							}
							else if(R_number>RGB_Limit)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("7.1 COLOR = ",6);
								ScalerOsdSetColorPalette(2, 0,255,255);
							}
							else if(G_number>RGB_Limit)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("7.1 COLOR = ",7);
								ScalerOsdSetColorPalette(2, 255,0,255);
							}
							else if(B_number>RGB_Limit)
							{
								DebugMessageSystem("7.1 COLOR = ",8);
							#if 1//_HDR_AIM_AUTO_NEW
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								ScalerOsdSetColorPalette(2, 255,0,0);
							#else
								UserCommonOsdSetColorPalette(15, 255,255,0);
							#endif
							}
						#if 1//_HDR_AIM_AUTO_NEW
							else if(R_number>G_number&&(R_number-G_number)>RGB_Limit3 &&R_number>B_number &&(R_number-B_number)>RGB_Limit3 )
							{
								DebugMessageSystem("6.1 COLOR = ",9);
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								ScalerOsdSetColorPalette(15, 100,200,200);
							}
							else if(G_number>R_number&&(G_number-R_number)>RGB_Limit3 &&G_number>B_number &&(G_number-B_number)>RGB_Limit3 )
							{
								DebugMessageSystem("6.1 COLOR = ",10);
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								ScalerOsdSetColorPalette(15, 200,100,200);
							}
							else if(B_number>R_number&&(B_number-R_number)>RGB_Limit3 &&B_number>G_number &&(B_number-G_number)>RGB_Limit3 )
							{
								DebugMessageSystem("6.1 COLOR = ",11);
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								ScalerOsdSetColorPalette(15, 200,200,100);
							}			
							else if((MAXOF(R_number,G_number)-MINOF(R_number,G_number)<RGB_Limit3)
								&&(MAXOF(R_number,G_number)-MINOF(R_number,G_number)<RGB_Limit3)
								&&(MAXOF(R_number,G_number)-MINOF(R_number,G_number)<RGB_Limit3) )
							{
								DebugMessageSystem("6.1 COLOR = ",11);
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								if(R_number>100&&R_number<175)
									ScalerOsdSetColorPalette(15, 255,255,255);
								else
									ScalerOsdSetColorPalette(15, 255,0,0);
							}
						#endif
							else if(R_number>RGB_Limit1&&G_number>RGB_Limit1&&B_number>RGB_Limit1 )
							{
								DebugMessageSystem("6.1 COLOR = ",13);
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								ScalerOsdSetColorPalette(15, 255,255,255);
							}
							else //if(R_number>RGB_Limit)
							{
								R_Pre=R_number;
								G_Pre=G_number;
								B_Pre=B_number;
								DebugMessageSystem("6.1 COLOR = ",12);
								ScalerOsdSetColorPalette(15, 255,0,0);
							}
							#endif
							if(ScalerOsdGetOsdEnable()  != _TRUE)
							{
								OsdFuncEnableOsd();
							}
						}
						#else
						if(
							(R_number<=(R_Pre<248 ? (R_Pre+16):255) && R_number>=(R_Pre>=16 ? (R_Pre-16):0))
							&&(G_number<=(G_Pre<248 ? (G_Pre+16):255) && G_number>=(G_Pre>=16 ? (G_Pre-16):0))
							&&(B_number<=(B_Pre<248 ? (B_Pre+16):255) && B_number>=(B_Pre>=16 ? (B_Pre-16):0))
							)
						{
							bg_Count++;
							DebugMessageSystem("6.1 bg_Count++ = ",bg_Count);
						}
						else
						{
							bg_Count=0;
						}
						if(bg_Count==0)
						{
							DebugMessageSystem("6.1 bg_Count ",0);
							R_Pre=R_number;
							G_Pre=G_number;
							B_Pre=B_number;
						}
						if(bg_Count>10)
						{
							DebugMessageSystem("6.1 bg_Count  ",bg_Count);
							bg_Count=0;
							if(R_number>RGB_Limit&&G_number>RGB_Limit&&B_number>RGB_Limit)
								UserCommonOsdSetColorPalette(15, 255,0,0);
							else if(R_number<RGB_Limit&&G_number<RGB_Limit&&B_number<RGB_Limit)
								UserCommonOsdSetColorPalette(15, 240,240,240);
							else if(R_number>RGB_Limit&&G_number>RGB_Limit)
								UserCommonOsdSetColorPalette(15, 0,0,250);
							else if(R_number>RGB_Limit&&B_number>RGB_Limit)
								UserCommonOsdSetColorPalette(15, 0,250,0);
							else if(G_number>RGB_Limit&&B_number>RGB_Limit)
								UserCommonOsdSetColorPalette(15, 255,0,0);
							else if(R_number>RGB_Limit)
								UserCommonOsdSetColorPalette(15, 0,250,250);
							else if(G_number>RGB_Limit)
								UserCommonOsdSetColorPalette(15, 250,0,250);
							else if(B_number>RGB_Limit)
								UserCommonOsdSetColorPalette(15, 250,250,0);
							else
								UserCommonOsdSetColorPalette(15, (255-R_number),(255-G_number),(255-B_number));
							if((UserCommonOsdGetOsdEnable() != _TRUE))
							{
								UserCommonOsdEnableOsd();
							}
							DebugMessageSystem("6.1 R_number = ",R_number);
							DebugMessageSystem("6.1 G_number = ",G_number);
							DebugMessageSystem("6.1 B_number = ",B_number);
						}
						#endif
						break;
					case 1: 
						R_number =ScalerColorDCRReadResult(_DCR_ABOVE_TH1_VAL)/12/9/6/18;
						DebugMessageSystem("5.9 B_number = ",R_number );
						break;
					case 2: 
						G_number =ScalerColorDCRReadResult(_DCR_ABOVE_TH1_VAL)/12/9/6/18;
						DebugMessageSystem("5.9 G_number = ",G_number);
						break;
					case 3: 					
						B_number =ScalerColorDCRReadResult(_DCR_ABOVE_TH1_VAL)/12/9/6/18;
						DebugMessageSystem("5.9 B_number = ",B_number);
						break;
				}
				rgb_flag++;
				if(rgb_flag>5)
					rgb_flag = 0;
		}
		else
#endif
		{

#if(_DCR_SUPPORT == _ON)
	        UserInterfaceAdjustDCRHandler();
#endif

#if(_IAPS_SUPPORT == _ON)
	        UserInterfaceAdjustIAPSHandler();
#endif

#if(_LOCAL_DIMMING_SUPPORT == _ON)
	        UserCommonLocalDimmingHandler();
#endif

#if(_GLOBAL_DIMMING_SUPPORT == _ON)
	        UserCommonGlobalDimmingHandler();
#endif
	    }
	}
    CLR_DCR_READY_STATUS();

    // release DCR data
    ScalerColorDCRDataRefreshControl(_ENABLE);
}
#endif

