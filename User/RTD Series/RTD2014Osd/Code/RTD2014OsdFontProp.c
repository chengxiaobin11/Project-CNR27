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
// ID Code      : RTD2014OsdFontProp.c
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_OSDFONTPROP__

#include "UserCommonInclude.h"

#if(_OSD_TYPE == _REALTEK_2014_OSD)

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************
#ifndef _OSD_FONT_MODE_FORCE_256_511
#define _OSD_FONT_MODE_FORCE_256_511                _ON
#endif
#define GET_OSD_INFO_MAP_FONT_BASE_ADDRESS()        g_usFontTableStart

#define GET_OSD_INFO_FONT_POINTER_0()               g_ucFontPointer0
#define GET_OSD_INFO_FONT_POINTER_1()               g_ucFontPointer1
#define GET_OSD_INFO_FONT_POINTER_2()               g_ucFontPointer2

#define SET_OSD_INFO_FONT_POINTER_0(x)              g_ucFontPointer0 = (x)
#define SET_OSD_INFO_FONT_POINTER_1(x)              g_ucFontPointer1 = (x)
#define SET_OSD_INFO_FONT_POINTER_2(x)              g_ucFontPointer2 = (x)

#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_1)
#define _OSD_MODE_BYTE0                             0x8C
#define _OSD_MODE_BYTE0_256_511                     0x2C
#elif(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_2)
#define _OSD_MODE_BYTE0                             0x4C
#define _OSD_MODE_BYTE0_256_511                     0x6C
#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_1)

#include "RTDOSDFONT_NORMAL.h"
#include "RTDOsdTableDefine.h"
#if _MEW_FONT
extern BYTE GetStringPropExtend_English(DWORD index);
extern BYTE GetStringPropExtend_CHINESE_F(DWORD index);
extern BYTE GetStringPropExtend_CHINESE_S(DWORD index);
extern BYTE GetStringPropExtend_JAPANESE(DWORD index);
extern BYTE GetStringPropExtend_KOREAN(DWORD index);
extern BYTE GetStringPropExtend_Energy(DWORD index);
extern BYTE GetStringPropExtend_VIETNAMESE(DWORD index);
extern BYTE GetStringPropExtend_HEBREW(DWORD index);
extern BYTE GetStringPropExtend_ARABIC(DWORD index);



BYTE OSDAPI_GetWidthBase(BYTE FontPage,BYTE index)
{	
	if(FontPage == _LANGUAGE_Energy)//_OSD_STRING_Energy_Msg
	{
		return tOSD_CHARWIDTH_Energy[index][1];	  
	}
	else if(((FontPage >= _ENGLISH)&&(FontPage <= _RUSSIAN))||(FontPage == _UKRAINE)||((FontPage >= _XILAYU)&&(FontPage <= _TURKISH)))
	{		  
		return tOSD_CHARWIDTH_ENGLISH[index][1];    
	}
	else if(FontPage == _CHINESE_S)
	{
		return  tOSD_CHARWIDTH_CHINESE[index][1];    
	}
	else if(FontPage == _CHINESE_F)
	{
		return tOSD_CHARWIDTH_CHINESE_F[index][1];	 
	}
	else if(FontPage == _KOREAN)
	{
		return  tOSD_CHARWIDTH_KOREAN[index][1];	  
	}
	else if(FontPage == _JAPANESE)
	{
		return tOSD_CHARWIDTH_JAPENESE[index][1];	
	}
	else if(FontPage == _HEBREW)
	{
		return tOSD_CHARWIDTH_HEBREW[index][1];	
	}
	else if(FontPage == _VIETNAMESE)
	{
		return tOSD_CHARWIDTH_VIETNAMESE[index][1];	
	}
	else if(FontPage == _ARABIC)
	{
		return tOSD_CHARWIDTH_ARABIC[index][1];	
	}
	else if(FontPage ==  _LANGUAGE_ARABIC_1)
	{
		if(index<0x45)
			return tOSD_CHARWIDTH_ENGLISH[index][1];
		else
			return tOSD_CHARWIDTH_ARABIC[index][1];	
	}	
#if(_UZBEK_SUPPRT==_ON)
	else if(FontPage == _UZBEK)
	{
		return tOSD_CHARWIDTH_ENGLISH[index][1]; 
	}
#endif
	else
	{
		return 12;
	}

}


BYTE GetStringPropExtend_Total(BYTE current_page,DWORD index)
{
	switch(current_page)
	{			
		case _CHINESE_S:
			
			if(index <=(0x44*27) )
			{
				return GetStringPropExtend_English(index);
			}
			else
				return GetStringPropExtend_CHINESE_S((index-0X45*27));
			break;
			
		case _CHINESE_F:
			if(index <=(0x44*27) )
			{
				return GetStringPropExtend_English(index);
			}
			else
				return GetStringPropExtend_CHINESE_F((index-0X45*27));
			break;
			
		case _KOREAN:
			
			if(index <=(0x44*27) )
			{
				return GetStringPropExtend_English(index);
			}
			else
				return GetStringPropExtend_KOREAN((index-0X45*27));
			break;
	
		case _JAPANESE:
			if(index <=(0x44*27) )
			{
				return GetStringPropExtend_English(index);
			}
			else
				return GetStringPropExtend_JAPANESE((index-0X45*27));
			break;	
		
		case _HEBREW:
			if(index <=(0x44*27) )
			{
				return GetStringPropExtend_English(index);
			}
			else
				return GetStringPropExtend_HEBREW((index-0X45*27));
			break;	

		case _ARABIC:
		case _LANGUAGE_ARABIC_1://_OSD_STRING_Energy_Msg
			if(current_page==_LANGUAGE_ARABIC_1)
				index+=(0x100*27);
			return GetStringPropExtend_ARABIC(index);
			break;	
			
		case _ENGLISH:			
		case _FRENCH:
		case _GERMAN:
		case _ITALIAN:
		case _SPANISH:
		case _PORTUGUESE:
		case _TURKISH:
		case _POLSKI:
		case _DUTCH:
		case _SVENSKA:
		case _CESTINA:
		case _RUSSIAN:
		case _UKRAINE:
		case _XILAYU:
		case _MAGYAR:
		case _SUOMI:			
			return GetStringPropExtend_English(index);
			break;
			
		case _LANGUAGE_Energy://_OSD_STRING_Energy_Msg
			if(index <=(0x44*27) )
			{
				return GetStringPropExtend_English(index);
			}
			else
				return GetStringPropExtend_Energy((index-0X45*27));
			break;

		case _VIETNAMESE://
			if(index <=(0x44*27) )
			{
				return GetStringPropExtend_English(index);
			}
			else
				return GetStringPropExtend_VIETNAMESE((index-0X45*27));
			break;
#if(_UZBEK_SUPPRT)
		case _UZBEK:			
			return GetStringPropExtend_English(index);
			break;
#endif
		
		default:
			break;
	}
}

#endif

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************

//****************************************************************************
// CODE TABLES
//****************************************************************************
WORD code tSTRING_RESOLUTION_TABLE[][6]=
{
    {   _,   _,   _,   _,   _,   _},
    { 240, _4_, _8_, _0_, _I_,   _},
    { 480, _4_, _8_, _0_, _P_,   _},
    { 288, _5_, _7_, _6_, _I_,   _},
    { 576, _5_, _7_, _6_, _P_,   _},
    { 720, _7_, _2_, _0_, _P_,   _},
    { 540, _1_, _0_, _8_, _0_, _I_},
    {1080, _1_, _0_, _8_, _0_, _P_},
};

//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************
BYTE *g_pucShowNumberAddress;
#if _DEF_OSD_2525

#else
BYTE g_pucModeInfoData[28];
#endif
//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************

//***************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************

BYTE OsdPropGetFontPointer(BYTE ucPointerSelect);
BYTE OsdPropSetFontPointer(BYTE ucPointerSelect, BYTE ucPointer);

void SG_PutStringProp(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString,BYTE ucIndex, BYTE ucColor, BYTE ucLanguage);

void RTDOsdTableFuncPutStringProp(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString,BYTE ucIndex, BYTE ucColor, BYTE ucLanguage);
void RTDOsdTableFuncPutStringCenter(BYTE ucRow, BYTE ucColStart, BYTE ucColEnd, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucCOLOR,SBYTE ucCenterOffset , BYTE ucLanguage);
void OsdPropShowNumber(BYTE ucRow, BYTE ucCol, DWORD ulValue, BYTE ucPar, BYTE ucFontPoint, BYTE ucColor);
BYTE *OsdPropGetStringTableAddress(BYTE ucString ,BYTE ucIndex, BYTE* ucLanguage);

//****************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
/*
BYTE *OsdPropGetShowPixelClockStringAddress(void)
{
    BYTE ucI = 0;
    WORD usFreq = ScalerSyncGetInputPixelClk();

    g_pucModeInfoData[0] = _P_;
    g_pucModeInfoData[1] = _C_;
    g_pucModeInfoData[2] = _L_;
    g_pucModeInfoData[3] = _K_;
    g_pucModeInfoData[4] = _COLON_;
    g_pucModeInfoData[5] = ___;
    g_pucModeInfoData[6] = ___;

    ucI = 10;

    while(_TRUE)
    {
        if(ucI == 9)
        {
            g_pucModeInfoData[ucI] = _DOT_;
        }
        else
        {
            g_pucModeInfoData[ucI] = usFreq % 10 + _0_;
            usFreq /= 10;
        }

        if(usFreq <= 0)
        {
            break;
        }
        ucI--;
    }

    g_pucModeInfoData[11] = _M_;
    g_pucModeInfoData[12] = _H_;
    g_pucModeInfoData[13] = _z_;
    g_pucModeInfoData[14] = _END_;

    return g_pucModeInfoData;
}
*/
//--------------------------------------------------
// Description	:
// Input Value	: None
// Output Value : None
//--------------------------------------------------
/*BYTE* RTDOsdTableFuncGetShowResolutionStringAddress(void)
{
	WORD temp = 0;
	BYTE i = 0;
	

	if(GET_INPUT_TIMING_HWIDTH() >= 1000)
	{
		i = 3;
	}
	else
	{
		i = 2;
	}

	temp = GET_INPUT_TIMING_HWIDTH();

	while(1)//write HWIDTH number
	{
		pData[i] = temp % 10 + _0_;
		temp /= 10;

		if(temp <= 0)
		{
			break;
		}
		i--;
	}

	if(GET_INPUT_TIMING_HWIDTH() >= 1000)
	{
		pData[4] = _X_;
	}
	else
	{
		pData[3] = _X_;   
	}

	temp = GET_INPUT_TIMING_VHEIGHT();

	if((GET_INPUT_TIMING_HWIDTH() >= 1000) && (GET_INPUT_TIMING_VHEIGHT() >= 1000))
	{
		  i = 8;
		  pData[9] =_;		   
	}
	else if((GET_INPUT_TIMING_HWIDTH() < 1000) && (GET_INPUT_TIMING_VHEIGHT() < 1000))
	{
		  i = 6;
		  pData[7] =_;	
	}	 
	else
	{
		  i = 7;
		  pData[8] =_;
	}
	
	while(1)
	{
		pData[i] = temp % 10 + _0_;
		temp /= 10;

		if(temp <= 0)
		{
			break;
		}
		i--;
	}
	
	temp = GET_INPUT_TIMING_VFREQ();

	if((GET_INPUT_TIMING_HWIDTH() >= 1000) && (GET_INPUT_TIMING_VHEIGHT() >= 1000))
	{
		if(GET_INPUT_TIMING_VFREQ() >= 1000)
		{
			i = 12;
			pData[13] = _H_;
			pData[14] = _Z_;
			pData[15] = _END_;		   
		}
		else
		{
			i = 11;
			pData[12] = _H_;
			pData[13] = _Z_;
			pData[14] = _END_;		   
		}
	}
	else if((GET_INPUT_TIMING_HWIDTH() < 1000) && (GET_INPUT_TIMING_VHEIGHT() < 1000))
	{
		if(GET_INPUT_TIMING_VFREQ() >= 1000)
		{
			i = 10;
			pData[11] = _H_;
			pData[12] = _Z_;
			pData[13] = _END_;		 
		}
		else
		{
			i = 9;
			pData[10] = _H_;
			pData[11] = _Z_;
			pData[12] = _END_;		 
		}
	}	 
	else
	{	
		if(GET_INPUT_TIMING_VFREQ() >= 1000)
		{
			i = 11;
			pData[12] = _H_;
			pData[13] = _Z_;
			pData[14] = _END_;
		}
		else
		{
			i = 10;
			pData[11] = _H_;
			pData[12] = _Z_;
			pData[13] = _END_;
		}
	}
			
	if((temp % 10) >=5)
		temp = temp / 10 + 1;
	else	
		temp /= 10;

	if((temp%10) == 1)
	{
		temp = temp-1;
	}
	
	while(1)
	{
		pData[i] = temp % 10 + _0_;
		temp /= 10;

		if(temp <= 0)
		{
			break;
		}
		i--;
	}

	return pData;
}
*/

#if !_DEF_OSD_2525

BYTE* RTDOsdTableFuncGetShowResolutionStringAddress(void)
{
	WORD temp = 0;
	BYTE i = 0;
	BYTE timing_p = 0;
	BYTE timing_i = 0;
	
	//if((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540))
	//	timing_i=1；

	#if(_DEF_TIMING_PI)
	if(((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 1080))||\
		((GET_INPUT_TIMING_HWIDTH()== 1280)&&(GET_INPUT_TIMING_VHEIGHT() == 720))||\
		((GET_INPUT_TIMING_HWIDTH()== 720)&&(GET_INPUT_TIMING_VHEIGHT() == 480)))
		timing_p=1;
	#endif

	#if(_DEF_TIMING_PI)
	if(!timing_p && !timing_i)
	#endif
	{
		if(GET_INPUT_TIMING_HWIDTH() >= 1000) 
		{
			i +=4;//1920*1080
		}
	    else
	    {
			i +=3;
		}
	}
    if((GET_INPUT_TIMING_VHEIGHT() >= 1000)||((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540)))
	{
		i +=4;//1920*1080
	}
    else
    {
		i +=3;
	}
	
     i+=4;//HZ,空格,_END
    //i+=1;//空格
   // i+=2;//HZ
    if(GET_INPUT_TIMING_VFREQ() >= 995)
    {
        i += 3;//100HZ
    }
    else
    {
        i += 2;
    }

    if(((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540)))
    {
        i += 1;//1080i
    }
    
    g_pucModeInfoData[i] = _END_;       
    g_pucModeInfoData[--i] =_Z_;      
    g_pucModeInfoData[--i] = _H_;
   // i=i-3;
	temp = GET_INPUT_TIMING_VFREQ();

    if((temp % 10) >5)
        temp = temp / 10 + 1;
    else    
        temp /= 10;

    if((temp%10) == 1)
    {
        temp = temp-1;
    }

    while(1)
    {
        g_pucModeInfoData[--i] = temp % 10 + _0_;
        temp /= 10;

        if(temp <= 0)
        {   //++i;
            break;
        }
        //i--;
    }
    //i-=1;
    g_pucModeInfoData[--i] =_;         

    temp = GET_INPUT_TIMING_VHEIGHT();
    
    if(((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540)))
    {
        temp*=2;
        //i-=1;
        g_pucModeInfoData[--i] =_i_;         
    }
        
    while(1)
    {
        g_pucModeInfoData[--i] = temp % 10 + _0_;
        temp /= 10;

        if(temp <= 0)
        {   //++i;
            break;
        }
        //i--;
    }
    g_pucModeInfoData[--i] = _X_;
    //i-=1;

	temp = GET_INPUT_TIMING_HWIDTH();

	while(1)//write HWIDTH number
	{
		g_pucModeInfoData[--i] = temp % 10 + _0_;
		temp /= 10;

		if(temp <= 0)
        {   //++i;
			break;
		}
		//i--;
	}


	return g_pucModeInfoData;
	
}
#endif
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
BYTE OsdPropGetFontPointer(BYTE ucPointerSelect)
{
    BYTE ucPointer = 0;

    if(ucPointerSelect == _PFONT_PAGE_0)
    {
        ucPointer = GET_OSD_INFO_FONT_POINTER_0();
    }
    else if(ucPointerSelect == _PFONT_PAGE_1)
    {
        ucPointer = GET_OSD_INFO_FONT_POINTER_1();
    }
    else if(ucPointerSelect == _PFONT_PAGE_2)
    {
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_1)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_1);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_2)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_2);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_3)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_3);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_4)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_4);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_5)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_5);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_6)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_6);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_7)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_7);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_8)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_8);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_9)
    {
        SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_9);
        ucPointer = GET_OSD_INFO_FONT_POINTER_2();
    }
    else if(ucPointerSelect == _PFONT_PAGE_INFORMATION)
    {
        ucPointer = GET_OSD_INFO_FONT_POINTER_1();
    }

    return ucPointer;
}


//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
BYTE OsdPropSetFontPointer(BYTE ucPointerSelect, BYTE ucPointer)
{
    ucPointer++;

    if(ucPointerSelect == _PFONT_PAGE_0)
    {
        if(ucPointer > _OSD_PAGE_0_END)
        {
            ucPointer = _OSD_PAGE_0_START;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_1)
    {
        if(ucPointer > _OSD_PAGE_1_END)
        {
            ucPointer = _OSD_PAGE_1_START;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_2)
    {
        if(ucPointer > _OSD_PAGE_2_END)
        {
            ucPointer = _OSD_PAGE_2_START;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_1)
    {
        if(ucPointer > _SUB_PAGE_ITEM_1_END)
        {
            ucPointer = _SUB_PAGE_ITEM_1;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_2)
    {
        if(ucPointer > _SUB_PAGE_ITEM_2_END)
        {
            ucPointer = _SUB_PAGE_ITEM_2;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_3)
    {
        if(ucPointer > _SUB_PAGE_ITEM_3_END)
        {
            ucPointer = _SUB_PAGE_ITEM_3;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_4)
    {
        if(ucPointer > _SUB_PAGE_ITEM_4_END)
        {
            ucPointer = _SUB_PAGE_ITEM_4;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_5)
    {
        if(ucPointer > _SUB_PAGE_ITEM_5_END)
        {
            ucPointer = _SUB_PAGE_ITEM_5;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_6)
    {
        if(ucPointer > _SUB_PAGE_ITEM_6_END)
        {
            ucPointer = _SUB_PAGE_ITEM_6;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_7)
    {
        if(ucPointer > _SUB_PAGE_ITEM_7_END)
        {
            ucPointer = _SUB_PAGE_ITEM_7;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_ITEM_8)
    {
        if(ucPointer > _SUB_PAGE_ITEM_8_END)
        {
            ucPointer = _SUB_PAGE_ITEM_8;
        }
    }    
	else if(ucPointerSelect == _PFONT_PAGE_ITEM_9)
    {
        if(ucPointer > _SUB_PAGE_ITEM_9_END)
        {
            ucPointer = _SUB_PAGE_ITEM_9;
        }
    }
    else if(ucPointerSelect == _PFONT_PAGE_INFORMATION)
    {
        if(ucPointer > _OSD_PAGE_INFORMATION_END)
        {
            ucPointer = _OSD_PAGE_INFORMATION_START;
        }
    }

    return ucPointer;
}

//--------------------------------------------------
// Description  :	
// Input Value  : 
// Output Value : 
//--------------------------------------------------
BYTE GetOsdShowType(BYTE ucStateIndex)
{
	switch(ucStateIndex)
	{
		 
		case _MENU_FUN_BACKLIGHT:
		case _MENU_FUN_CONTRAST:	
		case _MENU_FUN_BRIGHTNESS:	
		case _MENU_FUN_SHARPNESS:	
		case _MENU_FUN_VGA_HPOSITON:	
		case _MENU_FUN_VGA_VPOSITON:	
		case _MENU_FUN_VGA_CLK:	
		case _MENU_FUN_VGA_PHASE: 
		case _MENU_FUN_R: 
		case _MENU_FUN_G: 
		case _MENU_FUN_B: 
		case _MENU_FUN_OSD_HPOSITON:
		case _MENU_FUN_OSD_VPOSITON: 
		case _MENU_FUN_OSD_TIME: 
		case _MENU_FUN_OSD_TRANS: 
		case _MENU_FUN_LOWBLUE:
		case _MENU_FUN_AUDOIVOLUME:
		case _MENU_FUN_SATURATION:	
		case _MENU_FUN_DCC:	
			
			 return _TYPE_SLIDER;
		break;

		
		case _MENU_FUN_ECO:
		case _MENU_FUN_DCR:
		case _MENU_FUN_HDR:
		case _MENU_FUN_ASPECT:
		case _MENU_FUN_COLORTEMP:	
		case _MENU_FUN_LED:
		case _MENU_FUN_POWER_OFF:
		case _MENU_FUN_OD:
		case _MENU_FUN_FREESYNC:
		case _MENU_FUN_AUDOIMUTE:
		case _MENU_FUN_SIGNAL:	
		case _MENU_FUN_HOTLEFT:
		case _MENU_FUN_HOTRIGHT:
		case _MENU_FUN_FLICKER_FREE:
		case _MENU_FUN_MPRT:
		case _MENU_FUN_GAMMA:		
		case _MENU_FUN_COLORGAMUT:		
		case _MENU_FUN_OVERCLOCK:
		case _MENU_FUN_Energy:
#if _DEF_GuangGan_FUN
		case _MENU_FUN_GunagGan:
#endif
#if(_ROTATE_FUN_SUPPORT)
		case _MENU_FUN_ROTATE:	//旋转
		case _MENU_FUN_OSD_ROTATE:	//旋转
#endif
#if 1//(_OSD_POWER_SAVING_MODE)
		case _MENU_FUN_POWER_SAVING:
#endif
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
	 case _MENU_FUN_MBRSYNC:
#endif
#if _DEF_KVM_FUN
	 case _MENU_FUN_KVM:
#endif

			 return _TYPE_ARROW;
		break;

		case _MENU_FUN_AUTO_ADJUST:
		case _MENU_FUN_AUTO_COLOR:	
		case _MENU_FUN_RESET:
		
			 return _TYPE_NONE;
		break;

		case _MENU_FUN_LANGUAGE:
#if(_DEF_OSD_LANGUAGE_ARROW) 
			return _TYPE_ARROW;
#else
			return _TYPE_SUBMENU;
#endif
			break;

	}
				 return _TYPE_NONE;
}


//--------------------------------------------------
// Description  :	
// Input Value  : 
// Output Value : 
//--------------------------------------------------

BYTE GetOsdValue(BYTE ucStateIndex)
{
	BYTE us_value=0;
	switch(ucStateIndex)
	{
		 
		case _MENU_FUN_BACKLIGHT:
			switch(GET_OSD_COLOR_EFFECT())
			{
				case _COLOREFFECT_MOVIE:
					us_value = _ECO_MOVIE_BACKLIGHT;
					break;
					
				case _COLOREFFECT_GAME:
					us_value = _ECO_GAME_BACKLIGHT;
					break;
					
				case _COLOREFFECT_PHOTO :
					us_value = _ECO_TEXT_BACKLIGHT;
					break;
					
				case _COLOREFFECT_STANDARD :
					us_value=GET_OSD_BACKLIGHT();
					break;					
#if (_EOC_ENERGY_SUPPORT == _ON)
				case _COLOREFFECT_ENERGY:
					us_value = 100;
					break;
#endif
			#if(_EOC_RTS_FPS_SUPPORT == _ON)
				case _COLOREFFECT_FPS:
					us_value = _ECO_FPS_BACKLIGHT;
					break;
					
				case _COLOREFFECT_RTS :
					us_value = _ECO_RTS_BACKLIGHT;
					break;		
			#endif
			#if 1//(_OSD_FONT_TYPE==_OSD_FONT_WCH_EN_OLD)
				case _COLOREFFECT_VIVID :
					us_value = 80;
					break;		
			#endif

				default:
					us_value=GET_OSD_BACKLIGHT();
					break;
			}
			
			#if 1//(_OSD_POWER_SAVING_MODE)
			if(GET_OSD_POWER_SAVING())
				us_value= 20;
			#endif
			
#if((_HDR10_SUPPORT == _OFF)&&((_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6369_PROJECT)))
			{
				BYTE pucHDRInfoData[_HW_DP_INFOFRAME_RSV0_LENGTH];
				ScalerGetHDR10Data_MOCK(pucHDRInfoData);
				if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(pucHDRInfoData[0] == 1)&&(pucHDRInfoData[1] == 0x1A)&&(pucHDRInfoData[2] == 2))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
				{
					us_value = 100;
				}
			}
#elif(_HDR10_SUPPORT == _ON)	
			if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(GET_HDR10_EOTF_SETTING() == _HDR_TARGET_STATUS_SMPTE_ST_2084))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
			{
				us_value = 100;
			}
#endif

		

			
		break;
		
		case _MENU_FUN_CONTRAST:	
				switch(GET_OSD_COLOR_EFFECT())
				{
					case _COLOREFFECT_MOVIE :
						us_value = _ECO_MOVIE_CONTRAST;
						break;
					case _COLOREFFECT_GAME:
						us_value = _ECO_GAME_CONTRAST;
						break;
						
					case _COLOREFFECT_PHOTO :
						us_value = _ECO_TEXT_CONTRAST;
						break;
					case _COLOREFFECT_STANDARD :
						us_value=GET_OSD_CONTRAST();
						break;
#if (_EOC_ENERGY_SUPPORT == _ON)
					case _COLOREFFECT_ENERGY:
						us_value = 60;
						break;
#endif
	#if(_EOC_RTS_FPS_SUPPORT == _ON)
					case _COLOREFFECT_FPS:
						us_value = _ECO_FPS_CONTRAST;
						break;
						
					case _COLOREFFECT_RTS :
						us_value = _ECO_RTS_CONTRAST;
						break;
	#endif			
	#if 1//(_OSD_FONT_TYPE==_OSD_FONT_WCH_EN_OLD)
					case _COLOREFFECT_VIVID :
						us_value = 50;
						break;		
	#endif
						
					default:
					us_value=GET_OSD_CONTRAST();
						break;
				}
			break;
		break;

		case _MENU_FUN_BRIGHTNESS:	
		
#if 0//(_OSD_FONT_TYPE==_OSD_FONT_WCH_EN_OLD)
			us_value=GET_OSD_BRIGHTNESS();
#else
			switch(GET_OSD_COLOR_EFFECT())
			{
				case _COLOREFFECT_MOVIE :
					us_value = _ECO_MOVIE_BLACKLEVEL;
					break;
				case _COLOREFFECT_GAME:
					us_value = _ECO_GAME_BLACKLEVEL;
					break;
					
				case _COLOREFFECT_PHOTO :
					us_value = _ECO_TEXT_BLACKLEVEL;
					break;
				case _COLOREFFECT_STANDARD :
					us_value=GET_OSD_BRIGHTNESS();
					break;
#if (_EOC_ENERGY_SUPPORT == _ON)
				case _COLOREFFECT_ENERGY:
					us_value = 80;
					break;
#endif
	#if(_EOC_RTS_FPS_SUPPORT == _ON)
				case _COLOREFFECT_FPS:
					us_value = _ECO_FPS_BLACKLEVEL;
					break;
					
				case _COLOREFFECT_RTS :
					us_value = _ECO_RTS_BLACKLEVEL;
					break;
	#endif			
					
				default:
					us_value=GET_OSD_BRIGHTNESS();
					break;
			}
	#endif
		break;
		
		case _MENU_FUN_DCC:	
		
			us_value= GET_OSD_DCC();
		break;
		
		case _MENU_FUN_SHARPNESS:	
		
			us_value= GET_OSD_SHARPNESS();
		break;
#if(_VGA_SUPPORT == _ON)
		
		case _MENU_FUN_VGA_HPOSITON:
		
		if(SysSourceGetSourceType() == _SOURCE_VGA)
			us_value= GET_VGA_MODE_ADJUST_H_POSITION();
		else
			us_value=50;
		break;
		
		case _MENU_FUN_VGA_VPOSITON:
		
		if(SysSourceGetSourceType() == _SOURCE_VGA)
			us_value= GET_VGA_MODE_ADJUST_V_POSITION();
		else
			us_value= 50;
		break;
		
		case _MENU_FUN_VGA_CLK:	
		
		if(SysSourceGetSourceType() == _SOURCE_VGA)
			us_value= GET_VGA_MODE_ADJUST_CLOCK();
		else
			us_value= 50;
		break;
		
		case _MENU_FUN_VGA_PHASE: 
		
		if(SysSourceGetSourceType() == _SOURCE_VGA)
			us_value= GET_VGA_MODE_ADJUST_PHASE();
		else
			us_value= 50;
		break;
#endif		
		case _MENU_FUN_R: 

			us_value= GET_COLOR_TEMP_TYPE_USER_R();
		break;
		
		case _MENU_FUN_G: 
		
			us_value= GET_COLOR_TEMP_TYPE_USER_G();
		break;
		
		case _MENU_FUN_B: 
		
			us_value= GET_COLOR_TEMP_TYPE_USER_B();
		break;
		
		case _MENU_FUN_OSD_HPOSITON:

			us_value= GET_OSD_HPOS();
		break;
		
		case _MENU_FUN_OSD_VPOSITON: 
		
			us_value= GET_OSD_VPOS();
		break;
		
		case _MENU_FUN_OSD_TIME: 
		
			us_value= GET_OSD_TIME_OUT();
		break;
		
		case _MENU_FUN_OSD_TRANS: 
		
			us_value= GET_OSD_TRANSPARENCY_STATUS();
		break;
		
		case _MENU_FUN_LOWBLUE:
			
			us_value= GET_OSD_LOW_BLUE();
		break;
		
		case _MENU_FUN_AUDOIVOLUME:

			us_value= GET_OSD_VOLUME();
		break;
		
		
		case _MENU_FUN_ECO:
			
			us_value= GET_OSD_COLOR_EFFECT();
		break;
		
		case _MENU_FUN_DCR:
			
			/*if(SysSourceGetSourceType() == _SOURCE_VGA)
				us_value=0;
			else*/
				us_value= GET_OSD_DCR_STATUS();
		break;
		
		case _MENU_FUN_Energy:
			
			us_value= 1;//GET_OSD_DCR_STATUS();
		break;
		case _MENU_FUN_HDR:
			
#if 1//(_HDR10_SUPPORT == _ON)
			us_value= GET_OSD_HDR_MODE();
#else
			us_value= 0;
#endif
		break;

#if 1//(_OSD_POWER_SAVING_MODE)
		case _MENU_FUN_POWER_SAVING:
			us_value= GET_OSD_POWER_SAVING();
		break;
#endif
		case _MENU_FUN_ASPECT:
			
			us_value= GET_OSD_ASPECT_RATIO_TYPE();
		break;
		
		case _MENU_FUN_COLORTEMP:	
			
			us_value= GET_COLOR_TEMP_TYPE();
		break;
		
		case _MENU_FUN_LED:
		
			us_value= GET_OSD_LED_TYPE();
		break;
		
		case _MENU_FUN_POWER_OFF:

			
			us_value= GET_OSD_AUTO_POWEROFF();
		break;
		
		case _MENU_FUN_OD:
			/*if(SysSourceGetSourceType() == _SOURCE_VGA)
				us_value=0;
			else*/
				us_value= GET_OSD_OD_STATUS();
		break;
		
		case _MENU_FUN_FREESYNC:
			
			us_value= GET_OSD_FREE_SYNC_STATUS();
		break;
		
		case _MENU_FUN_AUDOIMUTE:

			us_value=  GET_OSD_VOLUME_MUTE();
		break;
		
		case _MENU_FUN_SIGNAL:	

			us_value=  GET_OSD_INPUT_PORT_OSD_ITEM();
		break;
		
		case _MENU_FUN_HOTLEFT:	

			us_value=  GET_OSD_HOTKEY_LEFT();
		break;
		
		case _MENU_FUN_HOTRIGHT:	

			us_value=  GET_OSD_HOTKEY_RIGHT();
		break;
		
#if(_VGA_SUPPORT == _ON)

		case _MENU_FUN_AUTO_ADJUST:
		case _MENU_FUN_AUTO_COLOR:	
#endif
		case _MENU_FUN_RESET:
		
			 us_value=  0;
		break;

		case _MENU_FUN_LANGUAGE:
		
			 us_value=  GET_OSD_LANGUAGE();
		break;

	
		case _MENU_FUN_FLICKER_FREE:
		
			 us_value=  GET_OSD_FLICKER_FREE_STATUS();
		break;

		case _MENU_FUN_MPRT:
		
			 us_value=  GET_OSD_MPRT();
		break;
		
        case _MENU_FUN_GAMMA: 
			us_value=  GET_OSD_GAMMA();
			
		break;
		
        case _MENU_FUN_COLORGAMUT: 
			us_value=  GET_OSD_PCM_STATUS();
			
		break;
		
		case _MENU_FUN_SATURATION: 
			us_value=  GET_OSD_SATURATION();
			
		break;
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
		 case _MENU_FUN_MBRSYNC:
			 us_value=	GET_OSD_MBR_STATUS();
			 break;
#endif
#if(_ROTATE_FUN_SUPPORT)
		case _MENU_FUN_ROTATE:
#if(_DISPLAY_ROTATION_180_SUPPORT == _ON)
			if(GET_OSD_DISP_ROTATE() == _DISP_ROTATE_180)
				us_value=  _ON;
			else
				us_value=  _OFF;
#endif
			break;
			
		case _MENU_FUN_OSD_ROTATE:
			us_value=	GET_OSD_ROTATE_STATUS();
			break;
#endif

		case _MENU_FUN_OVERCLOCK: 
			us_value=  GET_OSD_OVERCLOCK();
		break;

#if _DEF_GuangGan_FUN
		case _MENU_FUN_GunagGan:
			us_value=  GET_OSD_GuangGan();
			break;
#endif
		
#if _DEF_KVM_FUN
		case _MENU_FUN_KVM:
			us_value=	GET_FUN_KVM();
			break;
#endif
	}			
		return us_value;
}
//--------------------------------------------------
// Description  :	
// Input Value  : 
// Output Value : 
//--------------------------------------------------
void SG_PutStringProp(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString, BYTE ucStateIndex,BYTE COLOR,BYTE ucLanguage)
{
	BYTE ShowType = (BYTE)GetOsdShowType(ucStateIndex);
	BYTE OsdValue = (BYTE)GetOsdValue(ucStateIndex);
	BYTE Arrow_FptSelect = _PFONT_PAGE_ITEM_1 + ((ucRow -_ITEM_1_ROW)/_OSD_ITEM_ROW_CHANGE);
	BYTE ucSliderCol = _OSD_ITEM_COL_SLIDER;

	
		RTDOsdTableFuncPutStringProp( ucRow,  ucCol,  ucFptsSelect,  ucString,	ucStateIndex-_MENU_FUN_BACKLIGHT, COLOR, ucLanguage);
		
#if(_NAVIGAT_MENU_SURPPORT)
		if(GET_OSD_STATE() == _MENU_NAVIGAT_NONE)
#else
		if(GET_OSD_STATE() == _MENU_NONE)
#endif
		{
			ucSliderCol = _HOTKEY_SLIDER_COL;		
			if(ShowType == _TYPE_ARROW)
			ucSliderCol +=3;
		}

	switch(ShowType)
	{
		case _TYPE_SLIDER:
			
			OsdDispSliderAndNumber(ucRow,ucStateIndex,OsdValue);
			break;
			
		case _TYPE_ARROW:
			
			RTDOsdTableFuncPutStringProp(ucRow, ucSliderCol, _PFONT_PAGE_ITEM_7, _OSD_STRING_ARROW, 0, COLOR,_ENGLISH);
			RTDOsdTableFuncPutStringProp(ucRow, ucSliderCol+13, _PFONT_PAGE_ITEM_8, _OSD_STRING_ARROW, 1, COLOR,_ENGLISH);	
			RTDOsdTableFuncPutStringCenter(ucRow, ucSliderCol+1, ucSliderCol+12, Arrow_FptSelect, ucStateIndex, OsdValue, COLOR, 0, GET_OSD_LANGUAGE());

			break;
			
		case _TYPE_SUBMENU:
			
			if(ucSliderCol ==  _HOTKEY_SLIDER_COL)
			{
				
				RTDOsdTableFuncPutStringProp(ucRow, ucSliderCol, _PFONT_PAGE_ITEM_7, _OSD_STRING_ARROW, 0, COLOR,_ENGLISH);
				RTDOsdTableFuncPutStringProp(ucRow, ucSliderCol+13, _PFONT_PAGE_ITEM_8, _OSD_STRING_ARROW, 1, COLOR,_ENGLISH);
				RTDOsdTableFuncPutStringCenter(ucRow, ucSliderCol+1, ucSliderCol+12, Arrow_FptSelect, ucStateIndex, OsdValue, COLOR, 0, _ENGLISH);
			}

			#if(_DEF_OSD_LANGUAGE_SHOW)
			else
			{
				RTDOsdTableFuncPutStringProp(ucRow, ucSliderCol, _PFONT_PAGE_ITEM_7, _OSD_STRING_ARROW, 0, COLOR,_ENGLISH);
				RTDOsdTableFuncPutStringProp(ucRow, ucSliderCol+13, _PFONT_PAGE_ITEM_8, _OSD_STRING_ARROW, 1, COLOR,_ENGLISH);	
				RTDOsdTableFuncPutStringCenter(ucRow, ucSliderCol+1, ucSliderCol+12, Arrow_FptSelect, ucStateIndex, OsdValue, COLOR, 0, GET_OSD_LANGUAGE());
			}
			#endif
			break;

	}
	
}





#if _MEW_FONT
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if 1//osd 乱掉
#define _FONT_SELECT_EXT1               0x100//251
#define _FONT_SELECT_EXT2               0x100//252
#define _NEXT_LINE                      0x100//253
#define _FONT_BLANK_PIXEL               0x100//254
#define _FONT_SELECT_OFFSET1            0x100//251
#define _FONT_SELECT_OFFSET2            0x100//502
#define _GLOBAL_FONT_END_OFFSET         (0)
#define _GLOBAL_FONT_END         		(0)



void OsdPropFontDataToSram(BYTE ucFptsSelect, BYTE *ucpArray, BYTE ucRotateType)//所有用的要补齐
{
    switch(ucFptsSelect)
    {
        case _PFONT_PAGE_0:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_0() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_0() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_0() >= _OSD_PAGE_0_END)
            {
                SET_OSD_INFO_FONT_POINTER_0(_OSD_PAGE_0_START);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_0(GET_OSD_INFO_FONT_POINTER_0() + 1);
            }
            break;
        }
        case _PFONT_PAGE_1:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_1() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_1() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_1() >= _OSD_PAGE_1_END)
            {
                SET_OSD_INFO_FONT_POINTER_1(_OSD_PAGE_1_START);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_1(GET_OSD_INFO_FONT_POINTER_1() + 1);
            }
            break;
        }
        case _PFONT_PAGE_2:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _OSD_PAGE_2_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_OSD_PAGE_2_START);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_1:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_1_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_1);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_2:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_2_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_2);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_3:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_3_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_3);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_4:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_4_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_4);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_5:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_5_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_5);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_6:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_6_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_6);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_7:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_7_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_7);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_ITEM_8:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_8_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_8);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
		
        case _PFONT_PAGE_ITEM_9:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_2() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_2() >= _SUB_PAGE_ITEM_9_END)
            {
                SET_OSD_INFO_FONT_POINTER_2(_SUB_PAGE_ITEM_9);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_2(GET_OSD_INFO_FONT_POINTER_2() + 1);
            }
            break;
        }
        case _PFONT_PAGE_INFORMATION:
        {
#if(_FW_OSD_HARDWARECOMPRESSION_ROTATE_DEGREE_0_NO_DELAY == _ON)
            ScalerOsdHardwareCompressionNoDelay(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_1() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#else
            ScalerOsdHardwareCompression(ucpArray, 27, GET_CURRENT_BANK_NUMBER(), (GET_OSD_INFO_FONT_POINTER_1() + 256 * _OSD_FONT_MODE_FORCE_256_511) , GET_OSD_INFO_MAP_FONT_BASE_ADDRESS(), ucRotateType, _BURSTWRITE_FROM_XRAM);
#endif

            if(GET_OSD_INFO_FONT_POINTER_1() >= _OSD_PAGE_INFORMATION_END)
            {
                SET_OSD_INFO_FONT_POINTER_1(_OSD_PAGE_INFORMATION_START);
            }
            else
            {
                SET_OSD_INFO_FONT_POINTER_1(GET_OSD_INFO_FONT_POINTER_1() + 1);
            }
            break;
        }
        default:
            break;
    }
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdPropPutString(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucColor, BYTE ucLanguage)
{
    BYTE *pucArray = OsdPropGetStringTableAddress(ucString, ucStringIndex,&ucLanguage);
    bit bCenterFlag = _FALSE;
    bit bNextLineFlag = _FALSE;
    BYTE pucpTemp[27] = {0};
    BYTE ucElementCount = 0;
    BYTE ucColBackup = ucCol;
	BYTE ucLanguage1=ucLanguage;
	
#if _DEF_OSD_2525
	if(ucString == _OSD_STRING_NOW_RESOLUTION)
	{	
	
	 WORD temp = 0;
	 BYTE i = 0;
	 BYTE timing_p = 0;
	 BYTE timing_i = 0;
	 
	 //if((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540))
	 //  timing_i=1；
	
 #if(_DEF_TIMING_PI)
	 if(((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 1080))||\
		 ((GET_INPUT_TIMING_HWIDTH()== 1280)&&(GET_INPUT_TIMING_VHEIGHT() == 720))||\
		 ((GET_INPUT_TIMING_HWIDTH()== 720)&&(GET_INPUT_TIMING_VHEIGHT() == 480)))
		 timing_p=1;
 #endif
	
 #if(_DEF_TIMING_PI)
	 if(!timing_p && !timing_i)
 #endif
	 {
		 if(GET_INPUT_TIMING_HWIDTH() >= 1000) 
		 {
			 i +=4;//1920*1080
		 }
		 else
		 {
			 i +=3;
		 }
	 }
	 if((GET_INPUT_TIMING_VHEIGHT() >= 1000)||((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540)))
	 {
		 i +=4;//1920*1080
	 }
	 else
	 {
		 i +=3;
	 }
	 
	  i+=4;//HZ,空格,_END
	 //i+=1;//空格
	// i+=2;//HZ
	 if(GET_INPUT_TIMING_VFREQ() >= 1000)
	 {
		 i += 3;//100HZ
	 }
	 else
	 {
		 i += 2;
	 }
	
	 if(((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540)))
	 {
		 i += 1;//1080i
	 }
	 
	 pucpTemp[i] = _END_;		 
	 pucpTemp[--i] =_Z_;	   
	 pucpTemp[--i] = _H_;
	// i=i-3;
	 temp = GET_INPUT_TIMING_VFREQ();
	
	 if((temp % 10) >5)
		 temp = temp / 10 + 1;
	 else	 
		 temp /= 10;
	
	 if((temp%10) == 1)
	 {
		 temp = temp-1;
	 }
	
	 while(1)
	 {
		 pucpTemp[--i] = temp % 10 + _0_;
		 temp /= 10;
	
		 if(temp <= 0)
		 {	 //++i;
			 break;
		 }
		 //i--;
	 }
	 //i-=1;
	 pucpTemp[--i] =_; 		
	
	 temp = GET_INPUT_TIMING_VHEIGHT();
	 
	 if(((GET_INPUT_TIMING_HWIDTH()== 1920)&&(GET_INPUT_TIMING_VHEIGHT() == 540)))
	 {
		 temp*=2;
		 //i-=1;
		 pucpTemp[--i] =_i_;		  
	 }
		 
	 while(1)
	 {
		 pucpTemp[--i] = temp % 10 + _0_;
		 temp /= 10;
	
		 if(temp <= 0)
		 {	 //++i;
			 break;
		 }
		 //i--;
	 }
	 pucpTemp[--i] = _X_;
	 //i-=1;
	
	 temp = GET_INPUT_TIMING_HWIDTH();
	
	 while(1)//write HWIDTH number
	 {
		 pucpTemp[--i] = temp % 10 + _0_;
		 temp /= 10;
	
		 if(temp <= 0)
		 {	 //++i;
			 break;
		 }
		 //i--;
	 }

	}
#else

#endif
    pData[0] = ucLanguage;
	if(ucString == _OSD_STRING_Energy_Msg && pData[0]>_TURKISH)
	{
		pData[0] = _ENGLISH;
	}

    while(pData[0] != 0)
    {
        if(pucArray[0] == _END_)
        {
            pData[0] --;
        }
        pucArray++;
    }

	
	if(ucString == _OSD_STRING_Energy_Msg)
	{
		ucLanguage1 = _LANGUAGE_Energy;
	}
	if(ucLanguage==_ARABIC && *pucArray==0xEA)
	{
		ucLanguage1=_LANGUAGE_ARABIC_1;
        pucArray++;
	}

    do
    {
        bNextLineFlag = _FALSE;
        memset(pData, 0x00, _DATA_ITEM_LENGTH);
        ucElementCount = 0;

        PDATA_WORD(5) = OsdPropGetFontPointer(ucFptsSelect);

        if(GET_OSD_INFO_STRING_MODE_LENGTH() != 0)
        {
            while((*(pucArray + ucElementCount) != _END_) &&
                  (*(pucArray + ucElementCount) != _NEXT_LINE))// calculate totwl string width
            {
                pData[2] = *(pucArray + ucElementCount);

                switch(pData[2])
                {
                    default:
                        PDATA_WORD(6) = 0;
                        break;

                //    case _FONT_SELECT_EXT1:
                //        PDATA_WORD(6) = _FONT_SELECT_OFFSET1;
                //        break;

               //     case _FONT_SELECT_EXT2:
               //         PDATA_WORD(6) = _FONT_SELECT_OFFSET2;
              //          break;

                        //if _FONT_SELECT_EXT"N" is defined in XXXOsdTextTableDefine.h, new case should be added, for example
                        /*case _FONT_SELECT_EXT3:
                        PDATA_WORD(6) = _FONT_SELECT_OFFSET3;
                        break;*/
                }
					
                if(PDATA_WORD(6) != 0)
                {
                    ucElementCount++;
                    pData[2] = *(pucArray + ucElementCount);
                }

                if((PDATA_WORD(6) + pData[2]) < (_GLOBAL_FONT_END_OFFSET + _GLOBAL_FONT_END))
                {
                    PDATA_WORD(7) += OSDAPI_GetWidthBase(ucLanguage1,(pData[2] + PDATA_WORD(6)));//tOSD_TABLE_LANGUAGE_FONT_WIDTH[0][pData[2] + PDATA_WORD(6)];
                }
                else
                {
                    PDATA_WORD(7) += OSDAPI_GetWidthBase(ucLanguage1,(pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET));
                  //  PDATA_WORD(7) += tOSD_TABLE_LANGUAGE_FONT_WIDTH[ucLanguage + 1][pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET];
                }

                ucElementCount++;
            }

            // String col size
            pData[0] = (PDATA_WORD(7) / 12) + (((PDATA_WORD(7) % 12) > 0) ? 1 : 0); // total pixels / 12 (round up)

            if(GET_OSD_INFO_STRING_MODE() == _PUT_STRING_CENTER)// center-aligned
            {
                // add one font if centered width and actual sting width is not both even or both odd
                if((((GET_OSD_INFO_STRING_MODE_LENGTH() % 2) == 0) && ((pData[0] % 2) == 1)) ||
                   (((GET_OSD_INFO_STRING_MODE_LENGTH() % 2) == 1) && ((pData[0] % 2) == 0)))
                {
                    pData[0] ++;
                }

                pData[9] = ((pData[0] * 12) - PDATA_WORD(7)) / 2;// total center-aligned pixels - total string pixels / 2
            }
            else if(GET_OSD_INFO_STRING_MODE() == _PUT_STRING_RIGHT)// right aligned
            {
                pData[9] = (pData[0] * 12) - PDATA_WORD(7);// count right-aligned pixels
            }

            if(pData[9] != 0)// left-aligned
            {
                bCenterFlag = _TRUE;
            }
        }
        ucElementCount = pData[0] = 0;

        // reorder
        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT6);
        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~(_BIT7 | _BIT5)));

        while((*(pucArray + ucElementCount) != _END_) &&
              (*(pucArray + ucElementCount) != _NEXT_LINE))
        {
            switch(*(pucArray + ucElementCount))
            {
                case _END_:
                    break;

                default:
                    if(pData[5] == 0)// pixel count = 0 ????
                    {
                        pData[2] = *(pucArray + ucElementCount);

                        if(pData[2] == _FONT_BLANK_PIXEL)
                        {
                            pData[5] = *(pucArray + ucElementCount + 1);

                            pData[2] = _;
                        }

                        if(bCenterFlag == _TRUE)
                        {
                            pData[2] = _;
                        }
                    }
                    else
                    {
                        pData[2] = _;
                    }

                    switch(pData[2])
                    {
                        default:
                            PDATA_WORD(6) = 0;
                            break;

                        //case _FONT_SELECT_EXT1:
                        //    PDATA_WORD(6) = _FONT_SELECT_OFFSET1;
                         //   break;

                       // case _FONT_SELECT_EXT2:
                        //    PDATA_WORD(6) = _FONT_SELECT_OFFSET2;
                        //    break;

                            //if _FONT_SELECT_EXT"N" is defined in XXXOsdTextTableDefine.h, new case should be added, for example
                            /*case _FONT_SELECT_EXT3:
                            PDATA_WORD(6) = _FONT_SELECT_OFFSET3;
                            break;*/
                    }

                    if(PDATA_WORD(6) != 0)
                    {
                        ucElementCount++;
                        pData[2] = *(pucArray + ucElementCount);
                    }

                    if((PDATA_WORD(6) + pData[2]) < (_GLOBAL_FONT_END_OFFSET + _GLOBAL_FONT_END))
                    {
                        if(pData[5] == 0)
                        {
                           // pData[3] = tOSD_TABLE_LANGUAGE_FONT_WIDTH[0][pData[2] + PDATA_WORD(6)];
                            pData[3] =  OSDAPI_GetWidthBase(ucLanguage1,(pData[2] + PDATA_WORD(6)));

                            if(bCenterFlag == _TRUE)
                            {
                                pData[3] = pData[9];
                            }
                        }
                        else
                        {
                            pData[3] = (pData[5] > 12) ? 12 : pData[5];
                            pData[5] -= pData[3];
                        }
                    }
                    else
                    {
                        if(pData[5] == 0)
                        {
                           // pData[3] = tOSD_TABLE_LANGUAGE_FONT_WIDTH[ucLanguage + 1][pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET];
                             pData[3] = OSDAPI_GetWidthBase(ucLanguage1,(pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET));
                            if(bCenterFlag == _TRUE)
                            {
                                pData[3] = pData[9];
                            }
                        }
                        else
                        {
                            pData[3] = (pData[5] > 12) ? 12 : pData[5];
                            pData[5] -= pData[3];
                        }
                    }

                    if(pData[5] == 0)
                    {
                        if((*(pucArray + ucElementCount) != _FONT_BLANK_PIXEL))
                        {
                            ucElementCount++;

                            if(bCenterFlag == _TRUE)
                            {
                                ucElementCount = 0;
                            }
                        }
                        else
                        {
                            ucElementCount += 2;
                        }
                    }
                    break;
            }

            if(pData[6] == 0)
            {
                pData[6] = pData[3];
            }


            SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT3);    // first bits shift direction: left shift
            SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~_BIT2)); // left bits shift direction: rigth shift
            SCALEROSD_FONT_ROTATE_1_2_BITS_SHIFT_SET(((pData[3] - pData[6]) << 4) | pData[6]); // first bits shift and second bits shift

            pData[8] = ucElementCount;
            pData[7] = pData[6];

            for(pData[0] = 0; pData[0] < 9; pData[0] 	++)
            {
                SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT0); // restart from last three bytes

                /*if(PDATA_WORD(6) == _GLOBAL_FONT_END_OFFSET)
                {
                    if(pData[2] >= _GLOBAL_FONT_END)
                    {
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 1)));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 2)));
                    }
                    else
                    {
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[2] + PDATA_WORD(6)) * 27) + (pData[0] * 3))));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[2] + PDATA_WORD(6)) * 27) + (pData[0] * 3) + 1)));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[2] + PDATA_WORD(6)) * 27) + (pData[0] * 3) + 2)));
                    }
                }
                else if(PDATA_WORD(6) > _GLOBAL_FONT_END_OFFSET)
                {
                    SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
                    SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 1)));
                    SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 2)));
                }
                else// if(ucOffset[0] < _GLOBAL_FONT_END_OFFSET)
                {
                    SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[2] + PDATA_WORD(6)) * 27) + (pData[0] * 3))));
                    SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[2] + PDATA_WORD(6)) * 27) + (pData[0] * 3) + 1)));
                    SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[2] + PDATA_WORD(6)) * 27) + (pData[0] * 3) + 2)));
                }*/
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+1)));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[2] + PDATA_WORD(6) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+2)));

                ucElementCount = pData[8];
                pData[6] = pData[7];

                if((pData[6] == 12) || (*(pucArray + ucElementCount) == _END_) || (*(pucArray + ucElementCount) == _NEXT_LINE))
                {
                    SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                    SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                    SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                }

                while((pData[6] < 12) &&
                      (*(pucArray + ucElementCount) != _END_) &&
                      (*(pucArray + ucElementCount) != _NEXT_LINE))
                {
                    SCALEROSD_FONT_ROTATE_3_L_BITS_SHIFT_SET((pData[6] << 4) | pData[6]); // third bits shift and left bits shift

                    if(pData[5] == 0)
                    {
                        pData[1] = *(pucArray + ucElementCount);

                        if(pData[1] == _FONT_BLANK_PIXEL)
                        {
                            pData[5] = *(pucArray + ucElementCount + 1);

                            pData[1] = _;
                        }
                    }
                    else
                    {
                        pData[1] = _;
                    }

                    if((pData[1] == _FONT_SELECT_EXT1) ||
                       (pData[1] == _FONT_SELECT_EXT2))
                    {
                        PDATA_WORD(7) = (pData[1] == _FONT_SELECT_EXT1) ? _FONT_SELECT_OFFSET1 : _FONT_SELECT_OFFSET2;
                        ucElementCount++;
                        pData[1] = *(pucArray + ucElementCount);
                    }
                    else
                    {
                        PDATA_WORD(7) = 0;
                    }

                    if((PDATA_WORD(7) + pData[1]) < (_GLOBAL_FONT_END_OFFSET + _GLOBAL_FONT_END))
                    {
                        if(pData[5] == 0)
                        {
                          //  pData[3] = tOSD_TABLE_LANGUAGE_FONT_WIDTH[0][pData[1] + PDATA_WORD(7)];
							pData[3] = OSDAPI_GetWidthBase(ucLanguage1,(pData[1] + PDATA_WORD(7)));
                        }
                        else
                        {
                            pData[3] = (pData[5] > 12) ? 12 : pData[5];
                        }
                    }
                    else
                    {
                        if(pData[5] == 0)
                        {
							pData[3] = OSDAPI_GetWidthBase(ucLanguage1,(pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET));
                           // pData[3] = tOSD_TABLE_LANGUAGE_FONT_WIDTH[ucLanguage + 1][pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET];
                        }
                        else
                        {
                            pData[3] = (pData[5] > 12) ? 12 : pData[5];
                        }
                    }

                    ucElementCount ++;
                    pData[6] += pData[3];
					
					SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
					SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+1)));
					SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+2)));

                    /*if(PDATA_WORD(7) == _GLOBAL_FONT_END_OFFSET)
                    {
                        if(pData[1] >= _GLOBAL_FONT_END)
                        {
                            SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
                            SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+1)));
                            SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+2)));
                           // SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
                          //  SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 1)));
                           // SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 2)));
                        }
                        else
                        {
                            SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
                            SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+1)));
                            SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1, (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3)+2)));
                          //  SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[1] + PDATA_WORD(7)) * 27) + (pData[0] * 3))));
                          //  SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[1] + PDATA_WORD(7)) * 27) + (pData[0] * 3) + 1)));
                          //  SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[1] + PDATA_WORD(7)) * 27) + (pData[0] * 3) + 2)));
                        }
                    }
                    else if(PDATA_WORD(7) > _GLOBAL_FONT_END_OFFSET)
                    {
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3))));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 1)));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable((ucLanguage + 1), (((pData[1] + PDATA_WORD(7) - _GLOBAL_FONT_END - _GLOBAL_FONT_END_OFFSET) * 27) + (pData[0] * 3) + 2)));
                    }
                    else// if(ucOffset[1] < _GLOBAL_FONT_END_OFFSET)
                    {
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[1] + PDATA_WORD(7)) * 27) + (pData[0] * 3))));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[1] + PDATA_WORD(7)) * 27) + (pData[0] * 3) + 1)));
                        SCALEROSD_FONT_ROTATE_INPUT_SET(OsdPutStringPropFontTable(0, (((pData[1] + PDATA_WORD(7)) * 27) + (pData[0] * 3) + 2)));
                    }*/
                }

                pucpTemp[pData[0] * 3 + 2] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
                pucpTemp[pData[0] * 3 + 1] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
                pucpTemp[pData[0] * 3] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            }

            if(pData[6] <= 12)
            {
                pData[6] = 0;
            }
            else
            {
                pData[6] = pData[6] - 12;

                if(ucElementCount >= 1)
                {
                    ucElementCount--;
                }
                if(ucElementCount != 0)
                {
                    pData[1] = *(pucArray + ucElementCount - 1);

                    if((pData[1] == _FONT_SELECT_EXT1) ||
                       (pData[1] == _FONT_SELECT_EXT2))
                    {
                        ucElementCount--;
                    }
                }
            }

            // Write the pro font data to sram
            OsdPropFontDataToSram(ucFptsSelect, pucpTemp, GET_OSD_ROTATE_STATUS());

            // Record the length (coloumn) of prop string
            pData[4] ++;

            // Only shift for the first word
            bCenterFlag = _FALSE;

        }// End of while(*(pArray + stringcnt) != _END_)

        if(GET_OSD_INFO_STRING_MODE() == _PUT_STRING_CENTER)
        {
            ucCol = ucColBackup  + ((((GET_OSD_INFO_STRING_MODE_LENGTH() - pData[4]) / 2) < 0) ? 0 : ((GET_OSD_INFO_STRING_MODE_LENGTH() - pData[4]) / 2));
        }
        else if(GET_OSD_INFO_STRING_MODE() == _PUT_STRING_RIGHT)
        {
            ucCol = ucColBackup  + (((GET_OSD_INFO_STRING_MODE_LENGTH() - pData[4]) < 0) ? 0 : (GET_OSD_INFO_STRING_MODE_LENGTH() - pData[4]));
        }

        ScalerOsdSramAddressCount(ucRow, ucCol, _OSD_BYTEALL);
        for(pData[0] = 0; pData[0] < pData[4]; pData[0] ++)
        {
#if(_OSD_FONT_MODE_FORCE_256_511 == _ON)
            ScalerOsdDataPort(_OSD_MODE_BYTE0_256_511);
#else
            ScalerOsdDataPort((PDATA_WORD(5) < 256) ? _OSD_MODE_BYTE0 : _OSD_MODE_BYTE0_256_511);
#endif // End of #if(_OSD_FONT_MODE_FORCE_256_511 == _ON)
            ScalerOsdDataPort(PDATA_WORD(5) & 0xFF);
            ScalerOsdDataPort(ucColor);

            PDATA_WORD(5) = OsdPropSetFontPointer(ucFptsSelect, PDATA_WORD(5));
        }

        if(*(pucArray + ucElementCount) == _NEXT_LINE)
        {
            // Start the next line from pArray
            pucArray += ucElementCount + 1;
            ucRow++;

            bNextLineFlag = _TRUE;
        }

    }while(bNextLineFlag == _TRUE);

    CLR_OSD_INFO_STRING_MODE();
    CLR_OSD_INFO_STRING_MODE_LENGTH();
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDOsdTableFuncPutStringCenter(BYTE ucRow, BYTE ucColStart, BYTE ucColEnd, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucColor,SBYTE ucCenterOffset , BYTE ucLanguage)
{
	ucCenterOffset=0;

    SET_OSD_INFO_STRING_MODE(_PUT_STRING_CENTER);
    SET_OSD_INFO_STRING_MODE_LENGTH((ucColEnd-ucColStart+1));

    OsdPropPutString(ucRow, ucColStart, ucFptsSelect, ucString,ucStringIndex, ucColor, ucLanguage);
}
void RTDOsdTableFuncPutStringProp(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex,BYTE ucColor,BYTE ucLanguage)
{
	//ucCenterOffset=0;
    OsdPropPutString(ucRow, ucCol, ucFptsSelect, ucString,ucStringIndex, ucColor, ucLanguage);
}

#elif 1
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDOsdTableFuncPutStringCenter_1(BYTE ucRow, BYTE ucColStart, BYTE ucColEnd, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucCOLOR,SBYTE ucCenterOffset , BYTE ucLanguage);
void RTDOsdTableFuncPutStringProp(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex,BYTE COLOR,BYTE ucLanguage)
{
	RTDOsdTableFuncPutStringCenter_1(ucRow, ucCol, 0, ucFptsSelect, ucString, ucStringIndex, COLOR,0, ucLanguage);
}

void RTDOsdTableFuncPutStringCenter(BYTE ucRow, BYTE ucColStart, BYTE ucColEnd, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucCOLOR,SBYTE ucCenterOffset , BYTE ucLanguage)
{
	RTDOsdTableFuncPutStringCenter_1(ucRow, ucColStart, ucColEnd, ucFptsSelect, ucString, ucStringIndex, ucCOLOR,ucCenterOffset, ucLanguage);
}
void RTDOsdTableFuncPutStringCenter_1(BYTE ucRow, BYTE ucColStart, BYTE ucColEnd, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucCOLOR,SBYTE ucCenterOffset , BYTE ucLanguage)
{
    bit bEndFlag = 0;
    BYTE xdata ucpTemp[27] = {0};
    bit bMode = _CENTER;
    BYTE *pArray = 0;    
	BYTE i = 0;
	//BYTE ucpage=0,ucpage1=0;
	BYTE  tempdata[16];
	DWORD length=0;//修改居中字符长度过长异常
	BYTE ucLanguage1=0;
	BYTE overFontEnmuFlag = 0;
	if(ucString == _OSD_STRING_NOW_RESOLUTION)
	{	
	
		RTDOsdTableFuncGetShowResolutionStringAddress();
		for(i = 0; i < 16; i++)
		{
			tempdata[i] = pData[i];
		}
		pArray = tempdata;
	}
	else
	{
		pArray = OsdPropGetStringTableAddress(ucString, ucStringIndex,&ucLanguage);
	}
	
    pData[0] = ucLanguage;
    ucLanguage1=ucLanguage;
    while(pData[0] != _ENGLISH)
    {
        if(*pArray == _END_)
        {
            pData[0]--;
        }
        pArray++;
    }
    if(ucLanguage1==_ARABIC)
    	{
    	//DebugMessageOsd("1.2bMode",2);
			if(*pArray==0xEA)
				{
					//DebugMessageOsd("1.2bMode",1);
					pArray++;
					overFontEnmuFlag=1;
    

				}
	
    	}
    pData[1] = OsdPropGetFontPointer(ucFptsSelect);
    
	if(ucString == _OSD_STRING_Energy_Msg)
	{
		ucLanguage1 = _LANGUAGE_Energy;
	}
	if(ucColEnd==0||ucColEnd==ucColStart)
	{
		bMode=_NORMAL;
	}

    // reorder
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT6);
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~(_BIT7 | _BIT5)));

    pData[2] = 0;
    pData[3] = 0;
    pData[4] = 0;
    pData[7] = 0;
    pData[10] = 0;
	if(bMode==_CENTER)
	{
	    while(*(pArray + pData[2]) != _END_ )
	    {
	        switch(*(pArray + pData[2]))
	        {
	            case _END_:

	                break;

	            default:
	                    
	                pData[3] = *(pArray + pData[2]);
					/*if(pData[3]==_PAGE_)   
	            	{
	            		pData[2]++;
						ucpage=*(pArray + pData[2]);
	            		pData[2]++;
						pData[3]=*(pArray + pData[2]);
	            	}
					length += OSDAPI_GetWidthBase(ucpage,pData[3]);*/	 
					length += OSDAPI_GetWidthBase(ucLanguage1,pData[3]);	 
	                pData[2] ++;
	                break;
	        }
	    }
	    pData[5] = ucColStart + (((((WORD)((ucColEnd - ucColStart + 1) * 12 ) - length) / 2) + ucCenterOffset) / 12);
	    pData[0] = ((((WORD)((ucColEnd - ucColStart + 1) * 12 ) - length) / 2) + ucCenterOffset) % 12;
	}
	else
	{
	
		pData[5] = ucColStart;//初始值异常导致
		pData[0] = 0;
	}

/*//for Right mode
    ucCol = (ucColEnd - (ucCharWidth/12) -1);
    ucBlinking = 12 - (ucCharWidth % 12);
*/  

    pData[4] = 0;
    pData[2] = 0;    


    if(pData[0] == 0)
    {
        bMode = _NORMAL;
    }
    else
    {    
        bMode = _CENTER;
    }

    while(*(pArray + pData[2]) != _END_)
    {
        switch(*(pArray + pData[2]))
        {
            case _END_:
                bEndFlag = 1;
                break;

            default:
                    
                if(bMode == _CENTER)
                {
                    pData[6] = _;
                    pData[4] = pData[0];					
                }
                else
                {
                    pData[6] = *(pArray + pData[2]);
					/*
					if(pData[6]==_PAGE_)   
					{
						pData[2]++;
						ucpage=*(pArray + pData[2]);
						pData[2]++;
						pData[6]=*(pArray + pData[2]);
					}
					pData[4] = OSDAPI_GetWidthBase(ucpage,pData[6]);
					*/
					pData[4] = OSDAPI_GetWidthBase(ucLanguage1,pData[6]);
                }
                pData[2] ++;
                break;
        }

        if(pData[7] == 0)
        {
            pData[7] = pData[4];
        }

        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT3);    // first bits shift direction: left shift
        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~_BIT2)); // left bits shift direction: rigth shift
        SCALEROSD_FONT_ROTATE_1_2_BITS_SHIFT_SET(((pData[4] - pData[7]) << 4) | pData[7]); // first bits shift and second bits shift

        pData[8] = pData[2];
        pData[9] = pData[7];
		//ucpage1=ucpage;

        if(bMode == _CENTER)
        {
            pData[8] = 0;
            pData[6] =0;
            pData[2] = 0;
            bMode = _NORMAL;
        }

        for(pData[0] = 0; pData[0] < 9; pData[0]++)
        {
            SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT0);  // restart from last three bytes
            PDATA_WORD(7)= pData[6] * 27 + pData[0] * 3;
			//ucpage=ucpage1;
			
			if(overFontEnmuFlag) PDATA_WORD(7)+=(0xEA*27);
			SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)));
			SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)+1));
			SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)+2));
			

            pData[2] = pData[8];
            pData[7] = pData[9];


            if((pData[7] == 12) || (*(pArray + pData[2]) == _END_))
            {
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
            }
            else
            {
                pData[3] = *(pArray + pData[2]);
				
				/*if(pData[3]==_PAGE_)   
				{
					pData[2]++;
					ucpage=*(pArray + pData[2]);
					pData[2]++;
					pData[3]=*(pArray + pData[2]);
				}
				pData[4] = OSDAPI_GetWidthBase(ucpage,pData[3]);*/
				pData[4] = OSDAPI_GetWidthBase(ucLanguage1,pData[3]);
                pData[2] ++;

                PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;				
				
			if(overFontEnmuFlag) PDATA_WORD(7)+=(0xEA*27);
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)+1));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)+2));

                pData[7] += pData[4];
            }

            while((pData[7] < 12) && (*(pArray + pData[2]) != _END_))
            {
                SCALEROSD_FONT_ROTATE_3_L_BITS_SHIFT_SET((pData[7] << 4) | pData[7]); // third bits shift and left bits shift

                switch(*(pArray + pData[2]))
                {
                    case _END_:
                        bEndFlag = 1;
                        break;

                    default:
                        pData[3] = *(pArray + pData[2]);
						/*
						if(pData[3]==_PAGE_)   
						{
							pData[2]++;
							ucpage=*(pArray + pData[2]);
							pData[2]++;
							pData[3]=*(pArray + pData[2]);
						}
						pData[4] = OSDAPI_GetWidthBase(ucpage,pData[3]);
						*/
						pData[4] = OSDAPI_GetWidthBase(ucLanguage1,pData[3]);
                        pData[2] ++;
                        break;
                }

                pData[7] += pData[4];

                PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;
				
			if(overFontEnmuFlag) PDATA_WORD(7)+=(0xEA*27);
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)+1));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage1,PDATA_WORD(7)+2));

            }

            ucpTemp[pData[0] * 3 + 2] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3 + 1] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
        }

        if(pData[7] <= 12)
        {
            pData[7] = 0;
        }
        else
        {
            pData[7] = pData[7] - 12;
			//ucpage=*(pArray + pData[2]);
            pData[2] --;
        }

        // Write the pro font data to sram
        //COsdFxLoadFontDataAddrCal(ucBankupFontPointer);

        PDATA_WORD(7) = (WORD)pData[1] * 9;
        PDATA_WORD(7) += 0x100* 9;
        PDATA_WORD(7) += g_usFontTableStart;
        
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
		if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
		{
			ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _ENABLE, _ENABLE);
			ScalerOsdCompressionCtrl(_OSD_DECODE_NON_COMPRESSED, _OSD_COMPRESSION_ENABLE);
		}
		else
#endif
		{
			ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _DISABLE);
			ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
		}

        
        if(PDATA_WORD(7) > 4095)
        {
            ScalerOsdScrambleLoadFontAddrHsbSet();
        }
        else
        {
            ScalerOsdScrambleLoadFontAddrHsbClr();
        }
		
		ScalerOsdAddrSet(_OSD_SRAM, _OSD_BYTEALL, PDATA_WORD(7), _DISABLE);

		ScalerOsdBurstWriteDataPort(ucpTemp, 27, GET_CURRENT_BANK_NUMBER(), _BURSTWRITE_DATA_OSD, _BURSTWRITE_FROM_XRAM);

		// OSD HW needs time to process it and then write decompressed data into SRAM.
		// The value 1ms is enough at all.
		ScalerTimerDelayXms(1);

		ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);

#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
		if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
		{
			ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _ENABLE);
		}
#endif
		ScalerOsdScrambleLoadFontAddrHsbClr();

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
		if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
		{
			PDATA_WORD(7) = (WORD)((g_ucOsdWidth-ucRow-1) + g_ucOsdWidth * (pData[5] + pData[10]));
		}
		else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
		{
			PDATA_WORD(7) = (WORD)(g_ucOsdHeight - 1 - pData[5] - pData[10]) * g_ucOsdWidth + ucRow;
		}
		else
#endif
		{
			PDATA_WORD(7) = (WORD)ucRow * g_ucOsdWidth + pData[5] + pData[10];
		}


        //ScalerOsdCommandByte(PDATA_WORD(7) + g_usFontSelectStart, _OSD_BYTE1, pData[1]);
        ScalerOsdCommandAllByte(PDATA_WORD(7) + g_usFontSelectStart, 0x6C, pData[1], ucCOLOR);
        pData[10] ++; // Record the length of prop string

        // Increase the sram address pointer
        pData[1] = OsdPropSetFontPointer(ucFptsSelect,pData[1]);
        
    }// End of while(*(pArray + stringcnt) != _END_)

    if(ucFptsSelect == _PFONT_PAGE_0)
    {
        g_ucFontPointer0 = pData[1];
    }
    else if(ucFptsSelect == _PFONT_PAGE_1)
    {
        g_ucFontPointer1 = pData[1];
    }
    else if((ucFptsSelect == _PFONT_PAGE_2) || ((ucFptsSelect >= _PFONT_PAGE_ITEM_1) && (ucFptsSelect  <= _PFONT_PAGE_ITEM_9)))
    {
        g_ucFontPointer2 = pData[1];
    }
}

#else
void RTDOsdTableFuncPutStringProp(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex,BYTE COLOR,BYTE ucLanguage)
{
    bit bEndFlag = 0;
    BYTE xdata ucpTemp[27] = {0};
    BYTE *pArray = 0;    
	BYTE ucLanguage1=0;

    pArray = OsdPropGetStringTableAddress(ucString, ucStringIndex,&ucLanguage);

    pData[0] = ucLanguage;
    ucLanguage1 = ucLanguage;
    while(pData[0] != _ENGLISH)
    {
        if(*pArray == _END_)
        {
            pData[0]--;
        }
        pArray++;
    }

    pData[1] = OsdPropGetFontPointer(ucFptsSelect);
	if(ucString == _OSD_STRING_Energy_Msg)
	{
		ucLanguage1 = _LANGUAGE_Energy;
	}

    // reorder
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT6);
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~(_BIT7 | _BIT5)));

    pData[2] = 0;
    pData[3] = 0;
    pData[4] = 0;
    pData[5] = 0;
    pData[9] = 0;
    
    while(*(pArray + pData[2]) != _END_)
    {
        switch(*(pArray + pData[2]))
        {
            case _END_:
                bEndFlag = 1;
                break;

            default:
                pData[3] = *(pArray + pData[2]);
				pData[4]=OSDAPI_GetWidthBase(ucLanguage,pData[3]);
                pData[2]++;
                break;
        }

        if(pData[5] == 0)
        {
            pData[5] = pData[4];
        }

        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT3);    // first bits shift direction: left shift
        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~_BIT2)); // left bits shift direction: rigth shift
        SCALEROSD_FONT_ROTATE_1_2_BITS_SHIFT_SET(((pData[4] - pData[5]) << 4) | pData[5]); // first bits shift and second bits shift

        pData[6] = pData[2];
        pData[7] = pData[5];

        for(pData[0] = 0; pData[0] < 9; pData[0]++)
        {
            SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT0); // restart from last three bytes

            PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;
			
			SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)));
			SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)+1));
			SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)+2));

            pData[2] = pData[6];
            pData[5] = pData[7];

            if((pData[5] == 12) || (*(pArray + pData[2]) == _END_))
            {
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
            }
            else
            {
                pData[8] = *(pArray + pData[2]);
        
				pData[4]=OSDAPI_GetWidthBase(ucLanguage,pData[3]);

                pData[2] ++;

                PDATA_WORD(7) = pData[8] * 27 + pData[0] * 3;
				
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)+1));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)+2));

                pData[5] += pData[4];
            }

            while((pData[5] < 12) && (*(pArray + pData[2]) != _END_))
            {
                SCALEROSD_FONT_ROTATE_3_L_BITS_SHIFT_SET((pData[5] << 4) | pData[5]); // third bits shift and left bits shift

                switch(*(pArray + pData[2]))
                {
                    case _END_:
                        bEndFlag = 1;
                        break;

                    default:
                        pData[8] = *(pArray + pData[2]);
						pData[4]=OSDAPI_GetWidthBase(ucLanguage,pData[3]);
                        pData[2] ++;
                        break;
                }

                pData[5] += pData[4];

                PDATA_WORD(7) = pData[8] * 27 + pData[0] * 3;
				
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)+1));
				SCALEROSD_FONT_ROTATE_INPUT_SET(GetStringPropExtend_Total(ucLanguage,PDATA_WORD(7)+2));
            }

            ucpTemp[pData[0] * 3 + 2] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3 + 1] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
        }

        if(pData[5] <= 12)
        {
            pData[5] = 0;
        }
        else
        {
            pData[5] = pData[5] - 12;
            pData[2]--;
        }

        // Write the pro font data to sram
        //COsdFxLoadFontDataAddrCal(ucBankupFontPointer);

        PDATA_WORD(7) = (WORD)pData[1] * 9;
        PDATA_WORD(7) += g_usFontTableStart;
		
        PDATA_WORD(7) += 0x100*9;
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
	if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
	{
	
		ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _ENABLE, _ENABLE);
		ScalerOsdCompressionCtrl(_OSD_DECODE_NON_COMPRESSED, _OSD_COMPRESSION_ENABLE);
	}
	else
#endif
	{

		ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _DISABLE);
		ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
	}

        if(PDATA_WORD(7) > 4095)
        {
            ScalerOsdScrambleLoadFontAddrHsbSet();
        }
        else
        {
            ScalerOsdScrambleLoadFontAddrHsbClr();
        }

           ScalerOsdAddrSet(_OSD_SRAM, _OSD_BYTEALL, PDATA_WORD(7), _DISABLE);
        ScalerOsdBurstWriteDataPort(ucpTemp, 27, GET_CURRENT_BANK_NUMBER(), _BURSTWRITE_DATA_OSD, _BURSTWRITE_FROM_XRAM);

        // OSD HW needs time to process it and then write decompressed data into SRAM.
        // The value 1ms is enough at all.
        ScalerTimerDelayXms(1);

        ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
        
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
	if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
	{	
		ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _ENABLE);
	}
#endif

        ScalerOsdScrambleLoadFontAddrHsbClr();


#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
        if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
        {
            PDATA_WORD(7) = (WORD)((g_ucOsdWidth-ucRow-1) + g_ucOsdWidth * (ucCol+ pData[9])) ;
        }
        else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
        {
            PDATA_WORD(7) = (WORD)(g_ucOsdHeight - 1 - ucCol - pData[9]) * g_ucOsdWidth + ucRow;
        }
        else
#endif
        {
            PDATA_WORD(7) = (WORD)ucRow * g_ucOsdWidth + ucCol + pData[9];
        }

        //ScalerOsdCommandByte(PDATA_WORD(7) + g_usFontSelectStart, _OSD_BYTE1, pData[1]);
			ScalerOsdCommandAllByte(PDATA_WORD(7) + g_usFontSelectStart, 0x6C, pData[1], COLOR);

        pData[9]++; // Record the length of prop string
        
        // Increase the sram address pointer        
        pData[1] = OsdPropSetFontPointer(ucFptsSelect,pData[1]);
        
    }// End of while(*(pArray + stringcnt) != _END_)

    if(ucFptsSelect == _PFONT_PAGE_0)
    {
        g_ucFontPointer0 = pData[1];
    }
    else if(ucFptsSelect == _PFONT_PAGE_1)
    {
        g_ucFontPointer1 = pData[1];
    }
    else if((ucFptsSelect == _PFONT_PAGE_2) || ((ucFptsSelect >= _PFONT_PAGE_ITEM_1) && (ucFptsSelect <= _PFONT_PAGE_ITEM_9)))
    {
        g_ucFontPointer2 = pData[1];
    }
}




//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------

void RTDOsdTableFuncPutStringCenter(BYTE ucRow, BYTE ucColStart, BYTE ucColEnd, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucCOLOR,SBYTE ucCenterOffset , BYTE ucLanguage)
{
    bit bEndFlag = 0;
    BYTE xdata ucpTemp[27] = {0};
    bit bMode = _CENTER;
    BYTE *pFontTable = 0;
    BYTE *pArray = 0;    
	BYTE i = 0;
	//BYTE xdata tempdata[16];
	BYTE  tempdata[16];
	DWORD length=0;//修改居中字符长度过长异常
	BYTE ucLanguage1=0;
	
	if(ucString == _OSD_STRING_NOW_RESOLUTION)
	{	
	
		RTDOsdTableFuncGetShowResolutionStringAddress();
		for(i = 0; i < 16; i++)
		{
			tempdata[i] = pData[i];
		}
		
		pArray = tempdata;

	}
	else
	{
		pArray = OsdPropGetStringTableAddress(ucString, ucStringIndex,&ucLanguage);

	}
	
    pData[0] = ucLanguage;
    ucLanguage1 = ucLanguage;
    
    while(pData[0] != _ENGLISH)
    {
        if(*pArray == _END_)
        {
            pData[0]--;
        }
        pArray++;
    }
    
    pData[1] = OsdPropGetFontPointer(ucFptsSelect);
    
	if(ucString == _OSD_STRING_Energy_Msg)
	{
		ucLanguage1 = _LANGUAGE_Energy;
	}
    // reorder
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT6);
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~(_BIT7 | _BIT5)));

    pData[2] = 0;
    pData[3] = 0;
    pData[4] = 0;
    pData[7] = 0;
    pData[10] = 0;
    
    while(*(pArray + pData[2]) != _END_)
    {
        switch(*(pArray + pData[2]))
        {
            case _END_:

                break;

            default:
                    
                pData[3] = *(pArray + pData[2]);


                
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    length += tOSD_CHARWIDTH_Energy[pData[3]][1];    
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    length += tOSD_CHARWIDTH_ENGLISH[pData[3]][1];    
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    length += tOSD_CHARWIDTH_CHINESE[pData[3]][1];    
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    length += tOSD_CHARWIDTH_CHINESE_F[pData[3]][1];    
				}
				else if(ucLanguage == _KOREAN)
				{
                    length += tOSD_CHARWIDTH_KOREAN[pData[3]][1];    
				}
				else if(ucLanguage == _JAPANESE)
				{
                    length += tOSD_CHARWIDTH_JAPENESE[pData[3]][1];    
				}
                else
                {
                    length += 12;
                }

                pData[2] ++;
                break;
        }
    }
    pData[5] = ucColStart + (((((WORD)((ucColEnd - ucColStart + 1) * 12 ) - length) / 2) + ucCenterOffset) / 12);
    pData[0] = ((((WORD)((ucColEnd - ucColStart + 1) * 12 ) - length) / 2) + ucCenterOffset) % 12;

/*//for Right mode
    ucCol = (ucColEnd - (ucCharWidth/12) -1);
    ucBlinking = 12 - (ucCharWidth % 12);
*/  

    pData[4] = 0;
    pData[2] = 0;    


    if(pData[0] == 0)
    {
        bMode = _NORMAL;
    }
    else
    {    
        bMode = _CENTER;
    }

    while(*(pArray + pData[2]) != _END_)
    {
        switch(*(pArray + pData[2]))
        {
            case _END_:
                bEndFlag = 1;
                break;

            default:
                    
                if(bMode == _CENTER)
                {
                    pData[6] = _;
                }
                else
                {
                    pData[6] = *(pArray + pData[2]);
                }


                
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
						pData[4] = tOSD_CHARWIDTH_Energy[pData[6]][1];	  
                    }
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[6]][1];    
                    }
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_CHINESE[pData[6]][1];    
                    }
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[6]][1];    
                    }
				}
				else if(ucLanguage == _KOREAN)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_KOREAN[pData[6]][1];    
                    }
				}
				else if(ucLanguage == _JAPANESE)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[6]][1];    
                    }
				}
                else
                {
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = 12;    
                    }
                }


                pData[2] ++;
                break;
        }

        if(pData[7] == 0)
        {
            pData[7] = pData[4];
        }

        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT3);    // first bits shift direction: left shift
        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~_BIT2)); // left bits shift direction: rigth shift
        SCALEROSD_FONT_ROTATE_1_2_BITS_SHIFT_SET(((pData[4] - pData[7]) << 4) | pData[7]); // first bits shift and second bits shift

        pData[8] = pData[2];
        pData[9] = pData[7];

        if(bMode == _CENTER)
        {
            pData[8] = 0;
            pData[6] =0;
            pData[2] = 0;
            bMode = _NORMAL;
        }

        for(pData[0] = 0; pData[0] < 9; pData[0]++)
        {
            SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT0);  // restart from last three bytes
            PDATA_WORD(7)= pData[6] * 27 + pData[0] * 3;
			
			if(ucString == _OSD_STRING_Energy_Msg)
			{
				if(pData[6] >0x44 )
				{
					PDATA_WORD(7) -= 0x45*27;
					pFontTable = tFONT_Energy;
				}
				else
				{
					pFontTable = tFONT_ENGLISH;
				}
				
			}
			else
			{
				switch(ucLanguage)
				{			
					case _CHINESE_S:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_CHINESE_S;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;
						
					case _CHINESE_F:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_CHINESE_F;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;
						
					case _KOREAN:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_KOREAN;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						break;
				
					case _JAPANESE:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_JAPANESE;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;	
					
					case _ENGLISH:			
					case _FRENCH:
					case _GERMAN:
					case _ITALIAN:
					case _SPANISH:
					case _PORTUGUESE:
					case _TURKISH:
					case _POLSKI:
					case _DUTCH:
					case _SVENSKA:
					case _CESTINA:
					case _XILAYU:
					case _MAGYAR:
					case _SUOMI:
					case _RUSSIAN:
					case _UKRAINE:
						
						pFontTable = tFONT_ENGLISH;
						break;
						
					default:
						break;
				}
			}
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));

            pData[2] = pData[8];
            pData[7] = pData[9];


            if((pData[7] == 12) || (*(pArray + pData[2]) == _END_))
            {
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
            }
            else
            {
                pData[3] = *(pArray + pData[2]);


				
                
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    pData[4] = tOSD_CHARWIDTH_Energy[pData[3]][1];    
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[3]][1];    
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE[pData[3]][1];    
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[3]][1];    
				}
				else if(ucLanguage == _KOREAN)
				{
                    pData[4] = tOSD_CHARWIDTH_KOREAN[pData[3]][1];    
				}
				else if(ucLanguage == _JAPANESE)
				{
                    pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[3]][1];    
				}
                else
                {
                    pData[4] = 12;
                }
				

                pData[2] ++;

                PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;
				
				if(ucString == _OSD_STRING_Energy_Msg)
				{
					if(pData[3] >0x44 )
					{
						PDATA_WORD(7) -= 0x45*27;
						pFontTable = tFONT_Energy;
					}
					else
					{
						pFontTable = tFONT_ENGLISH;
					}
					
				}
				else
				{
					switch(ucLanguage)
					{			
						case _CHINESE_S:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_S;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _CHINESE_F:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_F;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _KOREAN:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_KOREAN;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							break;
					
						case _JAPANESE:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_JAPANESE;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;	
						
						case _ENGLISH:			
						case _FRENCH:
						case _GERMAN:
						case _ITALIAN:
						case _SPANISH:
						case _PORTUGUESE:
						case _TURKISH:
						case _POLSKI:
						case _DUTCH:
						case _SVENSKA:
						case _CESTINA:
						case _XILAYU:
						case _MAGYAR:
						case _SUOMI:
						case _RUSSIAN:
						case _UKRAINE:
							
							pFontTable = tFONT_ENGLISH;
							break;
							
						default:
							break;
					}
				}
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));

                pData[7] += pData[4];
            }

            while((pData[7] < 12) && (*(pArray + pData[2]) != _END_))
            {
                SCALEROSD_FONT_ROTATE_3_L_BITS_SHIFT_SET((pData[7] << 4) | pData[7]); // third bits shift and left bits shift

                switch(*(pArray + pData[2]))
                {
                    case _END_:
                        bEndFlag = 1;
                        break;

                    default:
                        pData[3] = *(pArray + pData[2]);
                            
						if(ucString == _OSD_STRING_Energy_Msg)
						{
		                    pData[4] = tOSD_CHARWIDTH_Energy[pData[3]][1];    
						}
						else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
						{		  
							pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[3]][1];	
						}
						else if(ucLanguage == _CHINESE_S)
						{
							pData[4] = tOSD_CHARWIDTH_CHINESE[pData[3]][1];	
						}
						else if(ucLanguage == _CHINESE_F)
						{
							pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[3]][1];	
						}
						else if(ucLanguage == _KOREAN)
						{
							pData[4] = tOSD_CHARWIDTH_KOREAN[pData[3]][1];	
						}
						else if(ucLanguage == _JAPANESE)
						{
							pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[3]][1];	
						}
						else
						{
							pData[4] = 12;
						}

						
                        pData[2] ++;
                        break;
                }

                pData[7] += pData[4];

                PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;
				if(ucString == _OSD_STRING_Energy_Msg)
				{
					if(pData[3] >0x44 )
					{
						PDATA_WORD(7) -= 0x45*27;
						pFontTable = tFONT_Energy;
					}
					else
					{
						pFontTable = tFONT_ENGLISH;
					}
					
				}
				else
				{
					switch(ucLanguage)
					{			
						case _CHINESE_S:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_S;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _CHINESE_F:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_F;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _KOREAN:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_KOREAN;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							break;
					
						case _JAPANESE:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_JAPANESE;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;	
						
						case _ENGLISH:			
						case _FRENCH:
						case _GERMAN:
						case _ITALIAN:
						case _SPANISH:
						case _PORTUGUESE:
						case _TURKISH:
						case _POLSKI:
						case _DUTCH:
						case _SVENSKA:
						case _CESTINA:
						case _XILAYU:
						case _MAGYAR:
						case _SUOMI:
						case _RUSSIAN:
						case _UKRAINE:
							
							pFontTable = tFONT_ENGLISH;
							break;
							
						default:
							break;
					}
				}
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));
            }

            ucpTemp[pData[0] * 3 + 2] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3 + 1] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
        }

        if(pData[7] <= 12)
        {
            pData[7] = 0;
        }
        else
        {
            pData[7] = pData[7] - 12;
            pData[2] --;
        }

        // Write the pro font data to sram
        //COsdFxLoadFontDataAddrCal(ucBankupFontPointer);

        PDATA_WORD(7) = (WORD)pData[1] * 9;
        PDATA_WORD(7) += 0x100* 9;
        PDATA_WORD(7) += g_usFontTableStart;
        
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
				if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
				{
					ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _ENABLE, _ENABLE);
					ScalerOsdCompressionCtrl(_OSD_DECODE_NON_COMPRESSED, _OSD_COMPRESSION_ENABLE);
				}
				else
#endif
				{
					ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _DISABLE);
					ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
				}

        
        if(PDATA_WORD(7) > 4095)
        {
            ScalerOsdScrambleLoadFontAddrHsbSet();
        }
        else
        {
            ScalerOsdScrambleLoadFontAddrHsbClr();
        }
		
				ScalerOsdAddrSet(_OSD_SRAM, _OSD_BYTEALL, PDATA_WORD(7), _DISABLE);
		
				ScalerOsdBurstWriteDataPort(ucpTemp, 27, GET_CURRENT_BANK_NUMBER(), _BURSTWRITE_DATA_OSD, _BURSTWRITE_FROM_XRAM);
		
				// OSD HW needs time to process it and then write decompressed data into SRAM.
				// The value 1ms is enough at all.
				ScalerTimerDelayXms(1);
		
				ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
		
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
				if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
				{
					ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _ENABLE);
				}
#endif
				ScalerOsdScrambleLoadFontAddrHsbClr();
		
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
				if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
				{
					PDATA_WORD(7) = (WORD)((g_ucOsdWidth-ucRow-1) + g_ucOsdWidth * (pData[5] + pData[10]));
				}
				else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
				{
					PDATA_WORD(7) = (WORD)(g_ucOsdHeight - 1 - pData[5] - pData[10]) * g_ucOsdWidth + ucRow;
				}
				else
#endif
				{
					PDATA_WORD(7) = (WORD)ucRow * g_ucOsdWidth + pData[5] + pData[10];
				}
		

        //ScalerOsdCommandByte(PDATA_WORD(7) + g_usFontSelectStart, _OSD_BYTE1, pData[1]);
        ScalerOsdCommandAllByte(PDATA_WORD(7) + g_usFontSelectStart, 0x6C, pData[1], ucCOLOR);
        pData[10] ++; // Record the length of prop string

        // Increase the sram address pointer
        pData[1] = OsdPropSetFontPointer(ucFptsSelect,pData[1]);
        
    }// End of while(*(pArray + stringcnt) != _END_)

    if(ucFptsSelect == _PFONT_PAGE_0)
    {
        g_ucFontPointer0 = pData[1];
    }
    else if(ucFptsSelect == _PFONT_PAGE_1)
    {
        g_ucFontPointer1 = pData[1];
    }
    else if((ucFptsSelect == _PFONT_PAGE_2) || ((ucFptsSelect >= _PFONT_PAGE_ITEM_1) && (ucFptsSelect  <= _PFONT_PAGE_ITEM_9)))
    {
        g_ucFontPointer2 = pData[1];
    }
}
#endif

#else
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDOsdTableFuncPutStringProp(BYTE ucRow, BYTE ucCol, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex,BYTE COLOR,BYTE ucLanguage)
{
    bit bEndFlag = 0;
    BYTE xdata ucpTemp[27] = {0};
    BYTE *pFontTable = 0;
    BYTE *pArray = 0;    

    pArray = OsdPropGetStringTableAddress(ucString, ucStringIndex,&ucLanguage);

    pData[0] = ucLanguage;
    
    while(pData[0] != _ENGLISH)
    {
        if(*pArray == _END_)
        {
            pData[0]--;
        }
        pArray++;
    }

    pData[1] = OsdPropGetFontPointer(ucFptsSelect);

    // reorder
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT6);
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~(_BIT7 | _BIT5)));

    pData[2] = 0;
    pData[3] = 0;
    pData[4] = 0;
    pData[5] = 0;
    pData[9] = 0;
    
    while(*(pArray + pData[2]) != _END_)
    {
        switch(*(pArray + pData[2]))
        {
            case _END_:
                bEndFlag = 1;
                break;

            default:
                pData[3] = *(pArray + pData[2]);
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    pData[4] = tOSD_CHARWIDTH_Energy[pData[3]][1];    
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[3]][1];    
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE[pData[3]][1];    
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[3]][1];    
				}
				else if(ucLanguage == _KOREAN)
				{
                    pData[4] = tOSD_CHARWIDTH_KOREAN[pData[3]][1];    
				}
				else if(ucLanguage == _JAPANESE)
				{
                    pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[3]][1];    
				}
                else
                {
                    pData[4] = 12;
                }
                pData[2]++;
                break;
        }

        if(pData[5] == 0)
        {
            pData[5] = pData[4];
        }

        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT3);    // first bits shift direction: left shift
        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~_BIT2)); // left bits shift direction: rigth shift
        SCALEROSD_FONT_ROTATE_1_2_BITS_SHIFT_SET(((pData[4] - pData[5]) << 4) | pData[5]); // first bits shift and second bits shift

        pData[6] = pData[2];
        pData[7] = pData[5];

        for(pData[0] = 0; pData[0] < 9; pData[0]++)
        {
            SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT0); // restart from last three bytes

            PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;
			if(ucString == _OSD_STRING_Energy_Msg)
			{
				if(pData[3] >0x44 )
				{
					PDATA_WORD(7) -= 0x45*27;
					pFontTable = tFONT_Energy;
				}
				else
				{
					pFontTable = tFONT_ENGLISH;
				}
				
			}
			else
			{
				switch(ucLanguage)
				{			
					case _CHINESE_S:
						
						if(pData[3] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_CHINESE_S;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;
						
					case _CHINESE_F:
						
						if(pData[3] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_CHINESE_F;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;
						
					case _KOREAN:
						
						if(pData[3] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_KOREAN;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						break;
				
					case _JAPANESE:
						
						if(pData[3] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_JAPANESE;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;	
					
					case _ENGLISH:			
					case _FRENCH:
					case _GERMAN:
					case _ITALIAN:
					case _SPANISH:
					case _PORTUGUESE:
					case _TURKISH:
					case _POLSKI:
					case _DUTCH:
					case _SVENSKA:
					case _CESTINA:
					case _RUSSIAN:
					case _UKRAINE:					
					case _XILAYU:
					case _MAGYAR:
					case _SUOMI:
						
						pFontTable = tFONT_ENGLISH;
						break;

#if(_UZBEK_SUPPRT)
					case _UZBEK:						
						pFontTable = tFONT_ENGLISH;
						break;
#endif
						
					default:
						break;
				}
			}
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));

            pData[2] = pData[6];
            pData[5] = pData[7];

            if((pData[5] == 12) || (*(pArray + pData[2]) == _END_))
            {
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
            }
            else
            {
                pData[8] = *(pArray + pData[2]);

                
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    pData[4] = tOSD_CHARWIDTH_Energy[pData[8]][1];    
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[8]][1];
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE[pData[8]][1];
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[8]][1];
				}
				else if(ucLanguage == _KOREAN)
				{
                    pData[4] = tOSD_CHARWIDTH_KOREAN[pData[8]][1];
				}
				else if(ucLanguage == _JAPANESE)
				{
                    pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[8]][1];
				}
                else
                {
                    pData[4] = 12;
                }


                pData[2] ++;

                PDATA_WORD(7) = pData[8] * 27 + pData[0] * 3;
				
				if(ucString == _OSD_STRING_Energy_Msg)
				{
					if(pData[8] >0x44 )
					{
						PDATA_WORD(7) -= 0x45*27;
						pFontTable = tFONT_Energy;
					}
					else
					{
						pFontTable = tFONT_ENGLISH;
					}
					
				}
				else
				{
					switch(ucLanguage)
					{			
						case _CHINESE_S:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_S;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _CHINESE_F:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_F;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _KOREAN:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_KOREAN;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							break;
					
						case _JAPANESE:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_JAPANESE;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;	
						
						case _ENGLISH:			
						case _FRENCH:
						case _GERMAN:
						case _ITALIAN:
						case _SPANISH:
						case _PORTUGUESE:
						case _TURKISH:
						case _POLSKI:
						case _DUTCH:
						case _SVENSKA:
						case _CESTINA:
						case _XILAYU:
						case _MAGYAR:
						case _SUOMI:
						case _RUSSIAN:
						case _UKRAINE:
							
							pFontTable = tFONT_ENGLISH;
							break;
							
#if(_UZBEK_SUPPRT)
						case _UZBEK:						
							pFontTable = tFONT_ENGLISH;
							break;
#endif


							
						default:
							break;
					}

				}

                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));

                pData[5] += pData[4];
            }

            while((pData[5] < 12) && (*(pArray + pData[2]) != _END_))
            {
                SCALEROSD_FONT_ROTATE_3_L_BITS_SHIFT_SET((pData[5] << 4) | pData[5]); // third bits shift and left bits shift

                switch(*(pArray + pData[2]))
                {
                    case _END_:
                        bEndFlag = 1;
                        break;

                    default:
                        pData[8] = *(pArray + pData[2]);

						if(ucString == _OSD_STRING_Energy_Msg)
						{
		                    pData[4] = tOSD_CHARWIDTH_Energy[pData[8]][1];    
						}
						else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
						{		  
							pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[8]][1];    
						}
						else if(ucLanguage == _CHINESE_S)
						{
							pData[4] = tOSD_CHARWIDTH_CHINESE[pData[8]][1];    
						}
						else if(ucLanguage == _CHINESE_F)
						{
							pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[8]][1];    
						}
						else if(ucLanguage == _KOREAN)
						{
							pData[4] = tOSD_CHARWIDTH_KOREAN[pData[8]][1];    
						}
						else if(ucLanguage == _JAPANESE)
						{
							pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[8]][1];    
						}
						else
						{
							pData[4] = 12;
						}

                        pData[2] ++;
                        break;
                }

                pData[5] += pData[4];

                PDATA_WORD(7) = pData[8] * 27 + pData[0] * 3;
				
				if(ucString == _OSD_STRING_Energy_Msg)
				{
					if(pData[8] >0x44 )
					{
						PDATA_WORD(7) -= 0x45*27;
						pFontTable = tFONT_Energy;
					}
					else
					{
						pFontTable = tFONT_ENGLISH;
					}
					
				}
				else
				{
					switch(ucLanguage)
					{			
						case _CHINESE_S:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_S;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _CHINESE_F:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_F;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _KOREAN:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_KOREAN;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							break;
					
						case _JAPANESE:
							
							if(pData[8] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_JAPANESE;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;	
						
						case _ENGLISH:			
						case _FRENCH:
						case _GERMAN:
						case _ITALIAN:
						case _SPANISH:
						case _PORTUGUESE:
						case _TURKISH:
						case _POLSKI:
						case _DUTCH:
						case _SVENSKA:
						case _CESTINA:
						case _XILAYU:
						case _MAGYAR:
						case _SUOMI:
						case _RUSSIAN:
						case _UKRAINE:
							pFontTable = tFONT_ENGLISH;
							break;

#if(_UZBEK_SUPPRT)
						case _UZBEK:						
							pFontTable = tFONT_ENGLISH;
							break;
#endif
							
						default:
							break;
					}
				}
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));
            }

            ucpTemp[pData[0] * 3 + 2] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3 + 1] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
        }

        if(pData[5] <= 12)
        {
            pData[5] = 0;
        }
        else
        {
            pData[5] = pData[5] - 12;
            pData[2]--;
        }

        // Write the pro font data to sram
        //COsdFxLoadFontDataAddrCal(ucBankupFontPointer);

        PDATA_WORD(7) = (WORD)pData[1] * 9;
        PDATA_WORD(7) += g_usFontTableStart;
		
        PDATA_WORD(7) += 0x100*9;
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
	if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
	{
	
		ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _ENABLE, _ENABLE);
		ScalerOsdCompressionCtrl(_OSD_DECODE_NON_COMPRESSED, _OSD_COMPRESSION_ENABLE);
	}
	else
#endif
	{

		ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _DISABLE);
		ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
	}

        if(PDATA_WORD(7) > 4095)
        {
            ScalerOsdScrambleLoadFontAddrHsbSet();
        }
        else
        {
            ScalerOsdScrambleLoadFontAddrHsbClr();
        }

           ScalerOsdAddrSet(_OSD_SRAM, _OSD_BYTEALL, PDATA_WORD(7), _DISABLE);
        ScalerOsdBurstWriteDataPort(ucpTemp, 27, GET_CURRENT_BANK_NUMBER(), _BURSTWRITE_DATA_OSD, _BURSTWRITE_FROM_XRAM);

        // OSD HW needs time to process it and then write decompressed data into SRAM.
        // The value 1ms is enough at all.
        ScalerTimerDelayXms(1);

        ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
        
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
	if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
	{	
		ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _ENABLE);
	}
#endif

        ScalerOsdScrambleLoadFontAddrHsbClr();


#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
        if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
        {
            PDATA_WORD(7) = (WORD)((g_ucOsdWidth-ucRow-1) + g_ucOsdWidth * (ucCol+ pData[9])) ;
        }
        else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
        {
            PDATA_WORD(7) = (WORD)(g_ucOsdHeight - 1 - ucCol - pData[9]) * g_ucOsdWidth + ucRow;
        }
        else
#endif
        {
            PDATA_WORD(7) = (WORD)ucRow * g_ucOsdWidth + ucCol + pData[9];
        }

        //ScalerOsdCommandByte(PDATA_WORD(7) + g_usFontSelectStart, _OSD_BYTE1, pData[1]);
			ScalerOsdCommandAllByte(PDATA_WORD(7) + g_usFontSelectStart, 0x6C, pData[1], COLOR);

        pData[9]++; // Record the length of prop string
        
        // Increase the sram address pointer        
        pData[1] = OsdPropSetFontPointer(ucFptsSelect,pData[1]);
        
    }// End of while(*(pArray + stringcnt) != _END_)

    if(ucFptsSelect == _PFONT_PAGE_0)
    {
        g_ucFontPointer0 = pData[1];
    }
    else if(ucFptsSelect == _PFONT_PAGE_1)
    {
        g_ucFontPointer1 = pData[1];
    }
    else if((ucFptsSelect == _PFONT_PAGE_2) || ((ucFptsSelect >= _PFONT_PAGE_ITEM_1) && (ucFptsSelect <= _PFONT_PAGE_ITEM_9)))
    {
        g_ucFontPointer2 = pData[1];
    }
}




//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------

void RTDOsdTableFuncPutStringCenter(BYTE ucRow, BYTE ucColStart, BYTE ucColEnd, BYTE ucFptsSelect, BYTE ucString, BYTE ucStringIndex, BYTE ucCOLOR,SBYTE ucCenterOffset , BYTE ucLanguage)
{
    bit bEndFlag = 0;
    BYTE xdata ucpTemp[27] = {0};
    bit bMode = _CENTER;
    BYTE *pFontTable = 0;
    BYTE *pArray = 0;    
	BYTE i = 0;
	//BYTE xdata tempdata[16];
	BYTE  tempdata[16];
	DWORD length=0;//修改居中字符长度过长异常
	
	if(ucString == _OSD_STRING_NOW_RESOLUTION)
	{	
	
		RTDOsdTableFuncGetShowResolutionStringAddress();
		for(i = 0; i < 16; i++)
		{
			tempdata[i] = pData[i];
		}
		
		pArray = tempdata;

	}
	else
	{
		pArray = OsdPropGetStringTableAddress(ucString, ucStringIndex,&ucLanguage);

	}
	
    pData[0] = ucLanguage;
    
    while(pData[0] != _ENGLISH)
    {
        if(*pArray == _END_)
        {
            pData[0]--;
        }
        pArray++;
    }
    
    pData[1] = OsdPropGetFontPointer(ucFptsSelect);
    
    // reorder
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT6);
    SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~(_BIT7 | _BIT5)));

    pData[2] = 0;
    pData[3] = 0;
    pData[4] = 0;
    pData[7] = 0;
    pData[10] = 0;
    
    while(*(pArray + pData[2]) != _END_)
    {
        switch(*(pArray + pData[2]))
        {
            case _END_:

                break;

            default:
                    
                pData[3] = *(pArray + pData[2]);


                
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    length += tOSD_CHARWIDTH_Energy[pData[3]][1];    
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    length += tOSD_CHARWIDTH_ENGLISH[pData[3]][1];    
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    length += tOSD_CHARWIDTH_CHINESE[pData[3]][1];    
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    length += tOSD_CHARWIDTH_CHINESE_F[pData[3]][1];    
				}
				else if(ucLanguage == _KOREAN)
				{
                    length += tOSD_CHARWIDTH_KOREAN[pData[3]][1];    
				}
				else if(ucLanguage == _JAPANESE)
				{
                    length += tOSD_CHARWIDTH_JAPENESE[pData[3]][1];    
				}
                else
                {
                    length += 12;
                }

                pData[2] ++;
                break;
        }
    }
    pData[5] = ucColStart + (((((WORD)((ucColEnd - ucColStart + 1) * 12 ) - length) / 2) + ucCenterOffset) / 12);
    pData[0] = ((((WORD)((ucColEnd - ucColStart + 1) * 12 ) - length) / 2) + ucCenterOffset) % 12;

/*//for Right mode
    ucCol = (ucColEnd - (ucCharWidth/12) -1);
    ucBlinking = 12 - (ucCharWidth % 12);
*/  

    pData[4] = 0;
    pData[2] = 0;    


    if(pData[0] == 0)
    {
        bMode = _NORMAL;
    }
    else
    {    
        bMode = _CENTER;
    }

    while(*(pArray + pData[2]) != _END_)
    {
        switch(*(pArray + pData[2]))
        {
            case _END_:
                bEndFlag = 1;
                break;

            default:
                    
                if(bMode == _CENTER)
                {
                    pData[6] = _;
                }
                else
                {
                    pData[6] = *(pArray + pData[2]);
                }


                
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
						pData[4] = tOSD_CHARWIDTH_Energy[pData[6]][1];	  
                    }
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[6]][1];    
                    }
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_CHINESE[pData[6]][1];    
                    }
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[6]][1];    
                    }
				}
				else if(ucLanguage == _KOREAN)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_KOREAN[pData[6]][1];    
                    }
				}
				else if(ucLanguage == _JAPANESE)
				{
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[6]][1];    
                    }
				}
                else
                {
                    if(bMode == _CENTER)
                    {
                        pData[4] = pData[0];
                    }
                    else
                    {                    
                        pData[4] = 12;    
                    }
                }


                pData[2] ++;
                break;
        }

        if(pData[7] == 0)
        {
            pData[7] = pData[4];
        }

        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT3);    // first bits shift direction: left shift
        SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() & (~_BIT2)); // left bits shift direction: rigth shift
        SCALEROSD_FONT_ROTATE_1_2_BITS_SHIFT_SET(((pData[4] - pData[7]) << 4) | pData[7]); // first bits shift and second bits shift

        pData[8] = pData[2];
        pData[9] = pData[7];

        if(bMode == _CENTER)
        {
            pData[8] = 0;
            pData[6] =0;
            pData[2] = 0;
            bMode = _NORMAL;
        }

        for(pData[0] = 0; pData[0] < 9; pData[0]++)
        {
            SCALEROSD_FONT_ROTATE_SETTING_SET(SCALEROSD_FONT_ROTATE_SETTING_GET() | _BIT0);  // restart from last three bytes
            PDATA_WORD(7)= pData[6] * 27 + pData[0] * 3;
			
			if(ucString == _OSD_STRING_Energy_Msg)
			{
				if(pData[6] >0x44 )
				{
					PDATA_WORD(7) -= 0x45*27;
					pFontTable = tFONT_Energy;
				}
				else
				{
					pFontTable = tFONT_ENGLISH;
				}
				
			}
			else
			{
				switch(ucLanguage)
				{			
					case _CHINESE_S:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_CHINESE_S;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;
						
					case _CHINESE_F:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_CHINESE_F;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;
						
					case _KOREAN:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_KOREAN;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						break;
				
					case _JAPANESE:
						
						if(pData[6] >0x44 )
						{
							PDATA_WORD(7) -= 0x45*27;
							pFontTable = tFONT_JAPANESE;
						}
						else
						{
							pFontTable = tFONT_ENGLISH;
						}
						
						break;	
					
					case _ENGLISH:			
					case _FRENCH:
					case _GERMAN:
					case _ITALIAN:
					case _SPANISH:
					case _PORTUGUESE:
					case _TURKISH:
					case _POLSKI:
					case _DUTCH:
					case _SVENSKA:
					case _CESTINA:
					case _XILAYU:
					case _MAGYAR:
					case _SUOMI:
					case _RUSSIAN:
					case _UKRAINE:
						
						pFontTable = tFONT_ENGLISH;
						break;
						
					default:
						break;
				}
			}
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
            SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));

            pData[2] = pData[8];
            pData[7] = pData[9];


            if((pData[7] == 12) || (*(pArray + pData[2]) == _END_))
            {
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
                SCALEROSD_FONT_ROTATE_INPUT_SET(0x00);
            }
            else
            {
                pData[3] = *(pArray + pData[2]);


				
                
        
				if(ucString == _OSD_STRING_Energy_Msg)
				{
                    pData[4] = tOSD_CHARWIDTH_Energy[pData[3]][1];    
				}
				else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
                {         
                    pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[3]][1];    
                }
				else if(ucLanguage == _CHINESE_S)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE[pData[3]][1];    
				}
				else if(ucLanguage == _CHINESE_F)
				{
                    pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[3]][1];    
				}
				else if(ucLanguage == _KOREAN)
				{
                    pData[4] = tOSD_CHARWIDTH_KOREAN[pData[3]][1];    
				}
				else if(ucLanguage == _JAPANESE)
				{
                    pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[3]][1];    
				}
                else
                {
                    pData[4] = 12;
                }
				

                pData[2] ++;

                PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;
				
				if(ucString == _OSD_STRING_Energy_Msg)
				{
					if(pData[3] >0x44 )
					{
						PDATA_WORD(7) -= 0x45*27;
						pFontTable = tFONT_Energy;
					}
					else
					{
						pFontTable = tFONT_ENGLISH;
					}
					
				}
				else
				{
					switch(ucLanguage)
					{			
						case _CHINESE_S:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_S;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _CHINESE_F:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_F;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _KOREAN:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_KOREAN;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							break;
					
						case _JAPANESE:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_JAPANESE;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;	
						
						case _ENGLISH:			
						case _FRENCH:
						case _GERMAN:
						case _ITALIAN:
						case _SPANISH:
						case _PORTUGUESE:
						case _TURKISH:
						case _POLSKI:
						case _DUTCH:
						case _SVENSKA:
						case _CESTINA:
						case _XILAYU:
						case _MAGYAR:
						case _SUOMI:
						case _RUSSIAN:
						case _UKRAINE:
							
							pFontTable = tFONT_ENGLISH;
							break;
							
						default:
							break;
					}
				}
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));

                pData[7] += pData[4];
            }

            while((pData[7] < 12) && (*(pArray + pData[2]) != _END_))
            {
                SCALEROSD_FONT_ROTATE_3_L_BITS_SHIFT_SET((pData[7] << 4) | pData[7]); // third bits shift and left bits shift

                switch(*(pArray + pData[2]))
                {
                    case _END_:
                        bEndFlag = 1;
                        break;

                    default:
                        pData[3] = *(pArray + pData[2]);
                            
						if(ucString == _OSD_STRING_Energy_Msg)
						{
		                    pData[4] = tOSD_CHARWIDTH_Energy[pData[3]][1];    
						}
						else if(((ucLanguage >= _ENGLISH)&&(ucLanguage <= _RUSSIAN))||(ucLanguage == _UKRAINE)||((ucLanguage >= _XILAYU)&&(ucLanguage <= _TURKISH)))
						{		  
							pData[4] = tOSD_CHARWIDTH_ENGLISH[pData[3]][1];	
						}
						else if(ucLanguage == _CHINESE_S)
						{
							pData[4] = tOSD_CHARWIDTH_CHINESE[pData[3]][1];	
						}
						else if(ucLanguage == _CHINESE_F)
						{
							pData[4] = tOSD_CHARWIDTH_CHINESE_F[pData[3]][1];	
						}
						else if(ucLanguage == _KOREAN)
						{
							pData[4] = tOSD_CHARWIDTH_KOREAN[pData[3]][1];	
						}
						else if(ucLanguage == _JAPANESE)
						{
							pData[4] = tOSD_CHARWIDTH_JAPENESE[pData[3]][1];	
						}
						else
						{
							pData[4] = 12;
						}

						
                        pData[2] ++;
                        break;
                }

                pData[7] += pData[4];

                PDATA_WORD(7) = pData[3] * 27 + pData[0] * 3;
				if(ucString == _OSD_STRING_Energy_Msg)
				{
					if(pData[3] >0x44 )
					{
						PDATA_WORD(7) -= 0x45*27;
						pFontTable = tFONT_Energy;
					}
					else
					{
						pFontTable = tFONT_ENGLISH;
					}
					
				}
				else
				{
					switch(ucLanguage)
					{			
						case _CHINESE_S:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_S;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _CHINESE_F:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_CHINESE_F;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;
							
						case _KOREAN:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_KOREAN;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							break;
					
						case _JAPANESE:
							
							if(pData[3] >0x44 )
							{
								PDATA_WORD(7) -= 0x45*27;
								pFontTable = tFONT_JAPANESE;
							}
							else
							{
								pFontTable = tFONT_ENGLISH;
							}
							
							break;	
						
						case _ENGLISH:			
						case _FRENCH:
						case _GERMAN:
						case _ITALIAN:
						case _SPANISH:
						case _PORTUGUESE:
						case _TURKISH:
						case _POLSKI:
						case _DUTCH:
						case _SVENSKA:
						case _CESTINA:
						case _XILAYU:
						case _MAGYAR:
						case _SUOMI:
						case _RUSSIAN:
						case _UKRAINE:
							
							pFontTable = tFONT_ENGLISH;
							break;
							
						default:
							break;
					}
				}
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7)));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 1));
                SCALEROSD_FONT_ROTATE_INPUT_SET(*(pFontTable + PDATA_WORD(7) + 2));
            }

            ucpTemp[pData[0] * 3 + 2] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3 + 1] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
            ucpTemp[pData[0] * 3] = SCALEROSD_FONT_ROTATE_ONPUT_GET();
        }

        if(pData[7] <= 12)
        {
            pData[7] = 0;
        }
        else
        {
            pData[7] = pData[7] - 12;
            pData[2] --;
        }

        // Write the pro font data to sram
        //COsdFxLoadFontDataAddrCal(ucBankupFontPointer);

        PDATA_WORD(7) = (WORD)pData[1] * 9;
        PDATA_WORD(7) += 0x100* 9;
        PDATA_WORD(7) += g_usFontTableStart;
        
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
				if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
				{
					ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _ENABLE, _ENABLE);
					ScalerOsdCompressionCtrl(_OSD_DECODE_NON_COMPRESSED, _OSD_COMPRESSION_ENABLE);
				}
				else
#endif
				{
					ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _DISABLE);
					ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
				}

        
        if(PDATA_WORD(7) > 4095)
        {
            ScalerOsdScrambleLoadFontAddrHsbSet();
        }
        else
        {
            ScalerOsdScrambleLoadFontAddrHsbClr();
        }
		
				ScalerOsdAddrSet(_OSD_SRAM, _OSD_BYTEALL, PDATA_WORD(7), _DISABLE);
		
				ScalerOsdBurstWriteDataPort(ucpTemp, 27, GET_CURRENT_BANK_NUMBER(), _BURSTWRITE_DATA_OSD, _BURSTWRITE_FROM_XRAM);
		
				// OSD HW needs time to process it and then write decompressed data into SRAM.
				// The value 1ms is enough at all.
				ScalerTimerDelayXms(1);
		
				ScalerOsdCompressionCtrl(_OSD_DECODE_COMPRESSED, _OSD_COMPRESSION_DISABLE);
		
#if((_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE) || (_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE))
				if(GET_OSD_ROTATE_STATUS() != _OSD_ROTATE_DEGREE_0)
				{
					ScalerOsdFontRotateCtrl(GET_OSD_ROTATE_STATUS(), _DISABLE, _ENABLE);
				}
#endif
				ScalerOsdScrambleLoadFontAddrHsbClr();
		
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
				if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
				{
					PDATA_WORD(7) = (WORD)((g_ucOsdWidth-ucRow-1) + g_ucOsdWidth * (pData[5] + pData[10]));
				}
				else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
				{
					PDATA_WORD(7) = (WORD)(g_ucOsdHeight - 1 - pData[5] - pData[10]) * g_ucOsdWidth + ucRow;
				}
				else
#endif
				{
					PDATA_WORD(7) = (WORD)ucRow * g_ucOsdWidth + pData[5] + pData[10];
				}
		

        //ScalerOsdCommandByte(PDATA_WORD(7) + g_usFontSelectStart, _OSD_BYTE1, pData[1]);
        ScalerOsdCommandAllByte(PDATA_WORD(7) + g_usFontSelectStart, 0x6C, pData[1], ucCOLOR);
        pData[10] ++; // Record the length of prop string

        // Increase the sram address pointer
        pData[1] = OsdPropSetFontPointer(ucFptsSelect,pData[1]);
        
    }// End of while(*(pArray + stringcnt) != _END_)

    if(ucFptsSelect == _PFONT_PAGE_0)
    {
        g_ucFontPointer0 = pData[1];
    }
    else if(ucFptsSelect == _PFONT_PAGE_1)
    {
        g_ucFontPointer1 = pData[1];
    }
    else if((ucFptsSelect == _PFONT_PAGE_2) || ((ucFptsSelect >= _PFONT_PAGE_ITEM_1) && (ucFptsSelect  <= _PFONT_PAGE_ITEM_9)))
    {
        g_ucFontPointer2 = pData[1];
    }
}
#endif

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdPropShowNumber(BYTE ucRow, BYTE ucCol, DWORD ulValue, BYTE ucPar, BYTE ucFontPoint, BYTE ucColor)
{
    BYTE ucIndex = 0;
    BYTE ucTemp = 0;
    BYTE ucI = 0;
    BYTE pucDataSN[16] = {0};

    pucDataSN[5] = (_0_ + (ulValue / 100000));
    pucDataSN[4] = (_0_ + (ulValue % 100000 / 10000));
    pucDataSN[3] = (_0_ + (ulValue % 10000) / 1000);
    pucDataSN[2] = (_0_ + (ulValue % 1000) / 100);
    pucDataSN[1] = (_0_ + (ulValue % 100) / 10);
    pucDataSN[0] = (_0_ + (ulValue % 10));

    for(ucIndex = 0; ucIndex < 6; ucIndex++)
    {
        if(pucDataSN[5 - ucIndex] != ((bit)(ucPar & _BIT1) ? _ : _0_))
        {
            ucIndex = 5 - ucIndex;
            break;
        }
    }

    if((ulValue == 0) && ((bit)(ucPar & 0x02) == 0))
    {
        ucIndex = 0;
    }

    if((bit)(ucPar & _BIT1) != 0)
    {
        ucTemp = (ucPar & 0x70) >> 4;
        ucIndex = (ucPar & 0x70) >> 4;
    }
    else
    {
        ucTemp = (ucPar & 0x70) >> 4;

        if(ucTemp < ucIndex)
        {
            ucTemp = ucIndex;
        }
    }

    for(ucI = 0; ucI <= ucTemp; ucI++)
    {
        if(ucIndex >= ucTemp)
        {
            pucDataSN[ucI + 8] = pucDataSN[ucIndex - ucI];
        }
        else
        {
            if(ucI < (ucTemp - ucIndex))
            {
                pucDataSN[ucI + 8] = 0x00;
            }
            else
            {
                pucDataSN[ucI + 8] = pucDataSN[ucIndex - (ucI - (ucTemp - ucIndex))];
            }
        }
    }
    if((ucPar & 0x01) == _ALIGN_LEFT) // Align Right
    {
        pucDataSN[8 + ucTemp + 1] = _; // clear
        pucDataSN[8 + ucTemp + 2] = _; // clear
        pucDataSN[8 + ucTemp + 3] = _END_;
    }
    else
    {
        pucDataSN[8 + ucTemp + 1] = _END_;
    }
    g_pucShowNumberAddress = &pucDataSN[8];

    if((ucPar & 0x01) == _ALIGN_RIGHT)        // Align Right
    {
        RTDOsdTableFuncPutStringProp(ucRow, ROW(ucCol - ucTemp), ucFontPoint, _OSD_STRING_SHOW_NUMBER, 0,ucColor, _ENGLISH);
    }
    else
    {
        RTDOsdTableFuncPutStringProp(ucRow, ucCol, ucFontPoint,_OSD_STRING_SHOW_NUMBER,0, ucColor, _ENGLISH);
    }
}





//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
BYTE *OsdPropGetStringTableAddress(BYTE ucString ,BYTE ucIndex, BYTE* ucLanguage)
{
    BYTE *pucArray = NULL;

    switch(ucString)
    {
		case _OSD_STRING_TITLE:
			pucArray =tOSD_MENU_TITLE_TABLE[ucIndex]; 
		break;
		
	/*	case _MENU_FUN_HOTLEFT:	
		case _MENU_FUN_HOTRIGHT:

			pucArray = tsOSD_HOTKEY_TYPE[ucIndex];
			if((ucIndex == _MENU_FUN_HDR)||(ucIndex == _MENU_FUN_FREESYNC)||(ucIndex == _MENU_FUN_FLICKER_FREE)||(ucIndex == _MENU_FUN_HOTLEFT)||(ucIndex == _MENU_FUN_HOTRIGHT)||(ucIndex == _MENU_FUN_MPRT))
				*ucLanguage = _ENGLISH; 
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
			 if((ucIndex == _MENU_FUN_MBRSYNC))
				 *ucLanguage = _ENGLISH; 
#endif
		break;*/

		case _MENU_FUN_HOTLEFT:	
		case _MENU_FUN_HOTRIGHT:
		case _OSD_STRING_ITEM:		
			pucArray =tOSD_STRING_ITEM_TABLE[ucIndex]; 
			
			ucIndex += _MENU_FUN_BACKLIGHT;
			if((ucIndex == _MENU_FUN_HDR)||(ucIndex == _MENU_FUN_FREESYNC)||(ucIndex == _MENU_FUN_FLICKER_FREE)||(ucIndex == _MENU_FUN_HOTLEFT)||(ucIndex == _MENU_FUN_HOTRIGHT)||(ucIndex == _MENU_FUN_MPRT))
				*ucLanguage = _ENGLISH; 
			
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
			 if((ucIndex == _MENU_FUN_MBRSYNC))
				 *ucLanguage = _ENGLISH; 
#endif
#if(_ROTATE_FUN_SUPPORT)
			if((ucIndex == _MENU_FUN_ROTATE)||(ucIndex == _MENU_FUN_OSD_ROTATE))
				*ucLanguage = _ENGLISH; 
#endif
#if _DEF_KVM_FUN
			if((ucIndex == _MENU_FUN_KVM))
				*ucLanguage = _ENGLISH; 
#endif
#if _DEF_GuangGan_FUN
				//if((ucIndex == _MENU_FUN_GunagGan))
				//	*ucLanguage = _ENGLISH; 
#endif
		break;

#if _DEF_GuangGan_FUN
		case _MENU_FUN_GunagGan:
			pucArray = tsOSD_ON_OFF_STATUS[ucIndex];
			//if(ucIndex != 0)
			//	*ucLanguage = _ENGLISH;
		break;
#endif
		
#if _DEF_KVM_FUN
		case _MENU_FUN_KVM:
			pucArray = tsOSD_KVM_OPTION[ucIndex];
			if(ucIndex != 0)
				*ucLanguage = _ENGLISH;
		break;
#endif
		//case  _OSD_STRING_NOW_RESOLUTION:
		//	RTDOsdTableFuncGetShowResolutionStringAddress();
		//	pucArray = pData;
		//	break;
				
		case _MENU_FUN_LANGUAGE:
			
			pucArray =tOSD_LANGUAGE_PAGE_TABLE[ucIndex]; 
			*ucLanguage = _ENGLISH; 
		break;

		case _MENU_FUN_LANGUAGE_SUB:
			
			pucArray =tOSD_LANGUAGE_PAGE_TABLE_SUB[ucIndex];
			*ucLanguage = _ENGLISH; 
		break;
		
		case _OSD_STRING_SHOW_NUMBER:
		
            pucArray = g_pucShowNumberAddress;
		break;

		case _OSD_STRING_ARROW:
		
            pucArray = tOSD_ARROW_TABLE[ucIndex];
		break;
	    

		case _MENU_FUN_ECO:
			pucArray = tsOSD_ECO_STATUS[ucIndex];
			
#if (_EOC_ENERGY_SUPPORT == _ON)
			if(ucIndex == _COLOREFFECT_ENERGY)
				*ucLanguage = _ENGLISH;
#endif
#if (_EOC_RTS_FPS_SUPPORT == _ON)
			if((ucIndex == _COLOREFFECT_FPS)||(ucIndex == _COLOREFFECT_RTS))
				*ucLanguage = _ENGLISH;
#endif
		break;

		case _MENU_FUN_DCR:

			pucArray = tsOSD_ON_OFF_STATUS[ucIndex];
		break;

		case _MENU_FUN_HDR:
			pucArray = tOSD_HDR_STATUS[ucIndex];
			
		break;

		case _MENU_FUN_ASPECT:
			pucArray = tsOSD_ASPECT_STATUS[ucIndex];
			
		#if(Project_ID != ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ__20200805)
			if(ucIndex != _OSD_ASPECT_RATIO_FULL)
		#endif
				*ucLanguage = _ENGLISH;
				
		break;
		
		case _MENU_FUN_COLORTEMP:
			pucArray = tOSD_CT_STATUS[ucIndex];
			
			if((ucIndex == _CT_5800)||(ucIndex == _CT_SRGB))
				*ucLanguage = _ENGLISH;
		break;

		case _MENU_FUN_LED:

			pucArray = tsOSD_LED_STATUS[ucIndex];
#if(_DEF_DX_LED_MODE || _DEF_DX_LED_MODE2||_DEF_DX_LED_MODE3)
				*ucLanguage = _ENGLISH;
#endif
		break;

		case _MENU_FUN_POWER_OFF:

			pucArray = tOSD_SLEEP_ON_OFF_TABLE[ucIndex];
			
			if(ucIndex != _OFF)
				*ucLanguage = _ENGLISH;
		break;

		case _MENU_FUN_OD:

#if(_OD_WEAK_MID_HIGH)
 			pucArray = tsOSD_RZQ_STATUS[ucIndex];
#else
			pucArray = tsOSD_ON_OFF_STATUS[ucIndex];
#endif
		break;

		case _MENU_FUN_FREESYNC:
		case _MENU_FUN_FLICKER_FREE:
		case _MENU_FUN_AUDOIMUTE:
		case _MENU_FUN_OVERCLOCK:
		case _MENU_FUN_POWER_SAVING:
#if(_ROTATE_FUN_SUPPORT)
		case _MENU_FUN_ROTATE:
#endif
			pucArray = tsOSD_ON_OFF_STATUS[ucIndex];
		break;
		
		case _MENU_FUN_SIGNAL:
			pucArray = tOSD_SOURCE_TYPE_STATUS[ucIndex];
			*ucLanguage = _ENGLISH; 
		break;
		
#if(_ROTATE_FUN_SUPPORT)
		case _MENU_FUN_OSD_ROTATE:
			pucArray = tsOSD_osdRotate_STATUS[ucIndex];
			if(ucIndex!=0)
			*ucLanguage = _ENGLISH;
		break;
#endif
			
		case _OSD_STRING_NO_SIGNAL:

			pucArray = tsOSD_NO_SIGNAL;
		break;
		case _OSD_STRING_NO_SUPPORT:

			pucArray = tsOSD_NO_SUPPORT;
		break;
		
		case _OSD_STRING_POWER_SAVING:
			pucArray = tsOSD_POWERSAVING1;
			*ucLanguage = _ENGLISH;
		break;
#if(_MENU_INFOR_SHOW_HDR)
		case _OSD_STRING_HDR:
		pucArray = tsOSD_HDR;
		break;
#endif

#if !_DEF_OSD_2525
		case _OSD_STRING_NOW_RESOLUTION:
			pucArray = RTDOsdTableFuncGetShowResolutionStringAddress();
		break;
#endif	
		
		case _MENU_FUN_MPRT:
			#if(_MPRT_WEAK_MID_HIGH)
				pucArray = tsOSD_RZQ_STATUS[ucIndex];
			
			#else
				pucArray = tsOSD_ON_OFF_STATUS[ucIndex];
			#endif
		break;
		
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
		 case _MENU_FUN_MBRSYNC:
		#if(_MPRT_WEAK_MID_HIGH)
			 pucArray = tsOSD_RZQ_STATUS[ucIndex];
		#else
			 pucArray = tsOSD_ON_OFF_STATUS[ucIndex];
		#endif
			 break;
#endif
		case _MENU_FUN_COLORGAMUT:		
				pucArray = tsOSD_COLORGAMUT_STATUS[ucIndex];
				
				if(ucIndex != _PCM_OSD_NATIVE)
					*ucLanguage = _ENGLISH;
			break;

		case _MENU_FUN_GAMMA:
			pucArray = tsOSD_GAMMA_STATUS[ucIndex];
			
			if(ucIndex != _GAMMA_OFF)
				*ucLanguage = _ENGLISH;
		break;
		
		case _OSD_STRING_FLICKER_FREE:
		
			pucArray = tsOSD_STRING_FLICKER_FREE;
		break;
		
		case _OSD_STRING_Energy_Msg:
			pucArray = tOSD_EnergyMsg_TABLE[ucIndex];
			
		break;
			
        default:
            break;
    }

    return pucArray;
}
#endif//#if(_OSD_TYPE == _REALTEK_2014_OSD)

