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
// ID Code      : RTD2014OsdFontTable.c
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_OSDFONTTABLE__

#include "UserCommonInclude.h"
#include "RTDLogoFontTable.h"

#if(_OSD_TYPE == _REALTEK_2014_OSD)

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************

//****************************************************************************
// CODE TABLES
//****************************************************************************


BYTE code tOSD_BOARD_UP_LEFT[] =
{
	 _iHKC_14, _iHKC_21,_REPEAT_,39,_iHKC_15,_END_,
};

BYTE code tOSD_BOARD_DOWN_LEFT[] =
{
	 _iHKC_12, _iHKC_20,_REPEAT_,39,_iHKC_13,_END_,
};

BYTE code tOSD_BOARD_UP_LEFT_MSG[] =
{
	 _iHKC_14, _iHKC_21,_REPEAT_,24,_iHKC_15,_END_,
};

BYTE code tOSD_BOARD_DOWN_LEFT_MSG[] =
{
	 _iHKC_12, _iHKC_20,_REPEAT_,24,_iHKC_13,_END_,
};

BYTE code tOSD_BOARD_UP_LEFT_INPUT_MSG[] =
{
	 _iHKC_14, _iHKC_21,_REPEAT_,11,_iHKC_15,_END_,
};

BYTE code tOSD_BOARD_DOWN_LEFT_INPUT_MSG[] =
{
	 _iHKC_12, _iHKC_20,_REPEAT_,11,_iHKC_13,_END_,
};

BYTE code tOSD_BOARD_UP_LEFT_MSG_HOTHEY[] =
{
	 _iHKC_14, _iHKC_21,_REPEAT_,28,_iHKC_15,_END_,
};

BYTE code tOSD_BOARD_DOWN_LEFT_MSG_HOTHEY[] =
{
	 _iHKC_12, _iHKC_20,_REPEAT_,28,_iHKC_13,_END_,
};

BYTE code tOSD_BOARD_UP_LEFT_MSG_HOTHEY1[] =
{
	 _iHKC_14, _iHKC_21,_REPEAT_,34,_iHKC_15,_END_,
};

BYTE code tOSD_BOARD_DOWN_LEFT_MSG_HOTHEY1[] =
{
	 _iHKC_12, _iHKC_20,_REPEAT_,34,_iHKC_13,_END_,
};



BYTE code tiOSD_MAIN_BIR_ICON[] =
{
___,_iHKC_01,_iHKC_02,_iHKC_03,_iHKC_04,___,_NEXT_,				
___,_iHKC_05,_iHKC_06,_iHKC_07,_iHKC_08,___,_END_,				
};

BYTE code tiOSD_MAIN_IMAGE_ICON[] =
{
___,_iHKC_09,_iHKC_0A,_iHKC_0B,_iHKC_0C,___,_NEXT_,				
___,_iHKC_0D,_iHKC_0E,_iHKC_0F,_iHKC_10,___,_END_,				
};

BYTE code tiOSD_MAIN_COLORTEMP_ICON[] =
{
___,_iHKC_11,_iHKC_12,_iHKC_13,_iHKC_14,___,_NEXT_,				
___,_iHKC_15,_iHKC_16,_iHKC_17,_iHKC_18,___,_END_,				
};

BYTE code tiOSD_MAIN_OSDSETTING_ICON[] =
{
___,_iHKC_19,_iHKC_1A,_iHKC_1B,_iHKC_1C,___,_NEXT_,				
___,_iHKC_1D,_iHKC_1E,_iHKC_1F,_iHKC_20,___,_END_,				
};
BYTE code tiOSD_MAIN_RESET_ICON[] =
{
___,_iHKC_21,_iHKC_22,_iHKC_23,_iHKC_24,___,_NEXT_,				
___,_iHKC_25,_iHKC_26,_iHKC_27,_iHKC_28,___,_END_,				
};

BYTE code tiOSD_MAIN_MISC_ICON[] =
{
___,_iHKC_29,_iHKC_2A,_iHKC_2B,_iHKC_2C,___,_NEXT_,				
___,_iHKC_2D,_iHKC_2E,_iHKC_2F,_iHKC_30,___,_END_,				
};

BYTE code tOSD_MUTE_ICON[] =
{
	 0XBD, 0XBE,0XBF,0XC0,0XC1,_NEXT_,
	 0XC2, 0XC3,0XC4,0XC5,0XC6,_NEXT_,
	 0XC7, 0XC8,0XC9,0XCA,0XCB,_END_,
};
BYTE code tOSD_MUTE_ICON1[] =
{
	 0XCC, 0XCD,0XCE,0XCF,0XD0,_NEXT_,
	 0XD1, 0XD2,0XD3,0XD4,0XD5,_NEXT_,
	 0XD6, 0XD7,0XD8,0XD9,0XDA,_END_,
};
#if _ENABLE_MAIN_MENU_F_ICON
BYTE code tOSD_Factory_F[] =
{
	 _iHKC_18,_END_,
};

#endif
#if(_DEF_ECO_ICON)

BYTE code tOSD_ECO_STANDART_ICON[] =
{
	 0x04, 0X05,0X06,0X07,_NEXT_,
	 0x14, 0X15,0X16,0X17,_NEXT_,
	 0x24, 0X25,0X26,0X27,_END_,
	 
};

BYTE code tOSD_ECO_MOVIE_ICON[] =
{
	 0x0c, 0X0d,0X0e,0X0f,_NEXT_,
	 0x1c, 0X1d,0X1e,0X1f,_NEXT_,
	 0x2c, 0X2d,0X2e,0X2f,_END_,
};

BYTE code tOSD_ECO_GAME_ICON[] =
{
	 0x08, 0X09,0X0a,0X0b,_NEXT_,
	 0x18, 0X19,0X1a,0X1b,_NEXT_,
	 0x28, 0X29,0X2a,0X2b,_END_,
};

BYTE code tOSD_ECO_TEXT_ICON[] =
{
	 0x30, 0X31,0X32,0X33,_NEXT_,
	 0x38, 0X39,0X3a,0X3b,_NEXT_,
	 0x40, 0X41,0X42,0X43,_END_,
};


BYTE code tOSD_ECO_FPS_ICON[] =
{
	 0x00, 0X01,0X02,0X03,_NEXT_,
	 0x10, 0X11,0X12,0X13,_NEXT_,
	 0x20, 0X21,0X22,0X23,_END_,
};

BYTE code tOSD_ECO_RTS_ICON[] =
{
	 0x34, 0X35,0X36,0X37,_NEXT_,
	 0x3c, 0X3d,0X3e,0X3f,_NEXT_,
	 0x44, 0X45,0X46,0X47,_END_,
};
#endif
#if(_NAVIGAT_MENU_SURPPORT == _ON)

BYTE code tOSD_BOARD_TOP_NAVIGATE_MSG[] =
{
    _iHKC_1F_0E, _iHKC_1F_12,_REPEAT_,17, _iHKC_1F_0F, _END_,
};

BYTE code tOSD_BOARD_BOTTOM_NAVIGATE_MSG[] =
{
    _iHKC_1F_12,_REPEAT_,19, _END_,
};

BYTE code tOSD_iNAVIGATE_ICON[] =
{
    0x22, 0x23, 0x24, 0x2F, 0x25, 0x26, 0x27, 0x2F, 0x28, 0x29, 0x2A, 0x2F, 0x2F, 0x2B, 0x2C, 0x2F, 0x2F, 0x2D, 0x2E, _END_,
};

BYTE code tOSD_iNAVIGATE_MAIN_OSD_ICON0[] =
{
    _iHKC_19, _iHKC_1A, _END_,
};

BYTE code tOSD_iNAVIGATE_MAIN_OSD_ICON1[] =
{
    _iHKC_1D, _END_,
};

BYTE code tOSD_iNAVIGATE_MAIN_OSD_ICON2[] =
{
    _iHKC_1E, _END_,
};

BYTE code tOSD_iNAVIGATE_MAIN_OSD_ICON3[] =
{
    _iHKC_1F, _END_,
};

BYTE code tOSD_iNAVIGATE_MAIN_OSD_ICON4[] =
{
    _iHKC_1B, _iHKC_1C, _END_,
};

BYTE code tOSD_iFACTORY_F_MAIN_OSD_ICON[] =
{
    _iHKC_18, _END_,
};
#endif



BYTE code tOSD_TYPE1_ICON[]=
{
	0x11,0x12,0x13,0x14,_NEXT_,
	0x15,0x16,0x17,0x18,_END_,
};


BYTE code tOSD_TYPE1_ICON1[]=
{
	0x19,0x1A,0x1B,0x1C,_NEXT_,
	0x1D,0x1E,0x1F,0x20,_END_,
};

BYTE code tOSD_TYPE2_ICON1[]=
{
	0x00,0x00,0x00,0x21,0x22,0x00,0x00,0x00,_NEXT_,
	0x00,0x00,0x00,0x23,0x24,0x00,0x00,0x00,_NEXT_,
	0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,_NEXT_,
	0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,_NEXT_,
	0x00,0x00,0x00,0x35,0x36,0x00,0x00,0x00,_NEXT_,
	0x00,0x00,0x00,0x37,0x38,0x00,0x00,0x00,_END_,
};


BYTE code tOSD_TYPE2_ICON2[]=
{
	0x00,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x00,_NEXT_,
	0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,_NEXT_,
	0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,_NEXT_,
	0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,_NEXT_,
	0x57,0x58,0x59,0x5A,0x5B,0x5C,0x5D,0x5E,_NEXT_,
	0x00,0x5F,0x60,0x61,0x62,0x63,0x64,0x00,_END_,
};

BYTE code tOSD_TYPE2_ICON3[]=
{
	0x00,0x00,0x00,0x65,0x66,0x00,0x00,0x00,_NEXT_,
	0x00,0x67,0x68,0x69,0x6A,0x6B,0x6C,0x00,_NEXT_,
	0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,_NEXT_,
	0x75,0x76,0x77,0x78,0x79,0x7A,0x7B,0x7C,_NEXT_,
	0x00,0x7D,0x7E,0x7F,0x80,0x81,0x82,0x00,_NEXT_,
	0x00,0x00,0x00,0x83,0x84,0x00,0x00,0x00,_END_,
};


BYTE code tOSD_TYPE2_ICON4[]=
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,_NEXT_,
	0x00,0x00,0x00,0x85,0x86,0x00,0x00,0x00,_NEXT_,
	0x00,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x00,_NEXT_,
	0x00,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x00,_NEXT_,
	0x00,0x00,0x00,0x93,0x94,0x00,0x00,0x00,_NEXT_,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,_END_,
};

BYTE code tOSD_TYPE2_ICON5[]=
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,_NEXT_,
	0x00,0x95,0x96,0x97,0x98,0x99,0x9A,0x00,_NEXT_,
	0x00,0x9B,0x9C,0x9D,0x9E,0x9F,0xA0,0x00,_NEXT_,
	0x00,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0x00,_NEXT_,
	0x00,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0x00,_NEXT_,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,_END_,
};


BYTE code tOSD_TYPE2_ICON6[]=
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,_NEXT_,
	0x00,0x00,0x00,0xAD,0xAE,0x00,0x00,0x00,_NEXT_,
	0x00,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0x00,_NEXT_,
	0x00,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0x00,_NEXT_,
	0x00,0x00,0x00,0xBB,0xBC,0x00,0x00,0x00,_NEXT_,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,_END_,
};
#if(_DEF_MENU_LOCK)
BYTE code tOSD_MENULOCK_ICON0[]=
{
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x00,_NEXT_,
    0x00, 0x0B, 0x00, 0x00, 0x0C, 0x0D, 0x00,  _NEXT_,
    0x12, 0x13, 0x14, 0x14, 0x15, 0x16, 0x17,  _NEXT_,
    0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x1E, 0x22, _NEXT_,
    0x1D, 0x1E, 0x26, 0x27, 0x1E, 0x1E, 0x22,  _NEXT_,
    0x2A, 0x2B, 0x2B, 0x2B, 0x2B, 0x2C, 0x2D,  _END_,
};

BYTE code tOSD_MENULOCK_ICON1[]=
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x08, 0x09, 0x0A, _NEXT_,
    0x00, 0x00, 0x00, 0x00, 0x0E, 0x0F, 0x00, 0x00, 0x10, 0x11, _NEXT_,
    0x18, 0x14, 0x14, 0x14, 0x15, 0x19, 0x1A, 0x00, 0x1B, 0x1C, _NEXT_,
    0x1D, 0x1E, 0x23, 0x24, 0x25, 0x1E, 0x0F, 0x00, 0x00, 0x00, _NEXT_,
    0x1D, 0x1E, 0x28, 0x29, 0x1E, 0x1E, 0x0F, 0x00, 0x00, 0x00, _NEXT_,
    0x2E, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2F, 0x00, 0x00, 0x00, _END_,
};
#endif
//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void OsdFontPut1Bit(BYTE ucRow, BYTE ucCol, BYTE ucIcon, BYTE ucColor, BYTE ucPage);
void OsdFontPut1BitTable(BYTE ucRow, BYTE ucCol, BYTE *pucArray, BYTE ucColor, BYTE ucPage);
void OsdFontPut2Bit(BYTE ucRow, BYTE ucCol, BYTE ucIcon, BYTE ucColor0, BYTE ucColor1, BYTE ucColor2, BYTE ucColor3);
void OsdFontPut2BitTable(BYTE ucRow, BYTE ucCol, BYTE *pucArray, BYTE ucColor0, BYTE ucColor1, BYTE ucColor2, BYTE ucColor3);

//***************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFontPut1Bit(BYTE ucRow, BYTE ucCol, BYTE ucIcon, BYTE ucColor, BYTE ucPage)
{
    WORD xdata usOsdAddr = (WORD)ucRow * g_ucOsdWidth + ucCol;
    BYTE xdata ucByte0 = 0x4C;
	if(ucPage == 1)
	{
		ucByte0 = 0x6C;
	}
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
    {
        usOsdAddr = (WORD)((g_ucOsdWidth - ucRow - 1) + g_ucOsdWidth * ucCol);
        ucByte0 = 0x4E;
    }
    else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
    {
        usOsdAddr = (WORD)(g_ucOsdHeight - 1 - ucCol) * g_ucOsdWidth + ucRow;
        ucByte0 = 0x4E;
    }
#endif

    ScalerOsdCommandAllByte(usOsdAddr + g_usFontSelectStart, ucByte0, ucIcon, ucColor);
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFontPut1BitTable(BYTE ucRow, BYTE ucCol, BYTE *pucArray, BYTE ucColor, BYTE ucPage)
{
    BYTE ucOsdWidth = 0;
    BYTE ucCount = 0;
    BYTE ucHTemp = ucCol;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
       (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
    {
        ucOsdWidth = g_ucOsdHeight;
    }
    else
#endif
    {
        ucOsdWidth = g_ucOsdWidth;
    }

    while(*pucArray != _END_)
    {
        if(*pucArray == _NEXT_)
        {
            ucRow++;
            ucHTemp =ucCol;
            pucArray++;
        }
        else if(*pucArray == _SPACE_)
        {
            ucHTemp++;
            pucArray++;
        }
        else if(*pucArray == _REPEAT_)
        {
            ucCount = *(pucArray + 1) - 1;

            while(ucCount > 0)
            {
                if(*(pucArray - 1) != _SPACE_)
                {
                    OsdFontPut1Bit(ucRow, ucHTemp, *(pucArray - 1), ucColor, ucPage);
                }

                ucHTemp++;

                if((ucHTemp == ucOsdWidth) && (*(pucArray + 1) != _NEXT_))
                {
                    ucRow++;
                    ucHTemp =ucCol;
                }
                ucCount--;
            }
            pucArray += 2;
        }
        else
        {
            OsdFontPut1Bit(ucRow, ucHTemp, *pucArray, ucColor, ucPage);
            ucHTemp++;

            if((ucHTemp == ucOsdWidth) && (*(pucArray + 1) != _NEXT_))
            {
                ucRow++;
                ucHTemp =ucCol;
            }
            pucArray++;
        }
    }
}

#if(_PROJECT != _RL6463_PROJECT)
void OsdFontPut4Bit(BYTE ucRow, BYTE ucCol, BYTE ucIcon)
{
    WORD xdata usOsdAddr = (WORD)ucRow * g_ucOsdWidth + ucCol;
    BYTE xdata ucByte0 = 0;
    BYTE xdata ucByte2 = 0;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
    {
        usOsdAddr = (WORD)((g_ucOsdWidth - ucRow - 1) + g_ucOsdWidth * ucCol);
    }
    else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
    {
        usOsdAddr = (WORD)(g_ucOsdHeight - 1 - ucCol) * g_ucOsdWidth + ucRow;
    }
#endif

    ucByte0 = 0xc0;
    ucByte2 =0x00;

    ScalerOsdCommandAllByte(usOsdAddr + g_usFontSelectStart, ucByte0, ucIcon, ucByte2);
}


void OsdFontPut4BitTable(BYTE ucRow, BYTE ucCol, BYTE *pucArray)
{
    BYTE ucOsdWidth = 0;
    BYTE ucCount = 0;
    BYTE ucHTemp = ucCol;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
       (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
    {
        ucOsdWidth = g_ucOsdHeight;
    }
    else
#endif
    {
        ucOsdWidth = g_ucOsdWidth;
    }

    while(*pucArray != _END_)
    {
        if(*pucArray == _NEXT_)
        {
            ucRow++;
            ucHTemp =ucCol;
            pucArray++;
        }
        else if(*pucArray == _SPACE_)
        {
            ucHTemp++;
            pucArray++;
        }
        else if(*pucArray == _REPEAT_)
        {
            ucCount = *(pucArray + 1) - 1;

            while(ucCount > 0)
            {
                if(*(pucArray - 1) != _SPACE_)
                {
                    OsdFontPut4Bit(ucRow, ucHTemp, *(pucArray - 1));
                }

                ucHTemp++;

                if((ucHTemp == ucOsdWidth) && (*(pucArray + 1) != _NEXT_))
                {
                    ucRow++;
                    ucHTemp =ucCol;
                }
                ucCount--;
            }
            pucArray += 2;
        }
        else
        {
            OsdFontPut4Bit(ucRow, ucHTemp, *pucArray);
            ucHTemp++;

            if((ucHTemp == ucOsdWidth) && (*(pucArray + 1) != _NEXT_))
            {
                ucRow++;
                ucHTemp = ucCol;
            }
            pucArray++;
        }
    }
}

#endif
#if(_LOGO_TYPE != _LOGO_NONE)

void OsdFontPut1BitTable_LOGO(BYTE ucRow, BYTE ucCol, BYTE *pucArray, BYTE ucColor, BYTE ucPage)
{
	BYTE ucOsdWidth = 0;
	BYTE ucCount = 0;
	BYTE ucHTemp = ucCol;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
	if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
	   (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
	{
		ucOsdWidth = g_ucOsdHeight;
	}
	else
#endif
	{
		ucOsdWidth = g_ucOsdWidth;
	}

	while(*pucArray != _END_)
	{
		if(*pucArray == _NEXT_)
		{
			ucRow++;
			ucHTemp =ucCol;
			pucArray++;
		}
		else
		{
			OsdFontPut1Bit(ucRow, ucHTemp, *pucArray, ucColor, ucPage);
			ucHTemp++;

			if((ucHTemp == ucOsdWidth) && (*(pucArray + 1) != _NEXT_))
			{
				ucRow++;
				ucHTemp =ucCol;
			}
			pucArray++;
		}
	}
}
#endif

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFontPut2Bit(BYTE ucRow, BYTE ucCol, BYTE ucIcon, BYTE ucColor0, BYTE ucColor1, BYTE ucColor2, BYTE ucColor3)
{
    WORD xdata usOsdAddr = (WORD)ucRow * g_ucOsdWidth + ucCol;
    BYTE xdata ucByte0 = 0;
    BYTE xdata ucByte2 = 0;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)
    {
        usOsdAddr = (WORD)((g_ucOsdWidth - ucRow - 1) + g_ucOsdWidth * ucCol);
    }
    else if(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270)
    {
        usOsdAddr = (WORD)(g_ucOsdHeight - 1 - ucCol) * g_ucOsdWidth + ucRow;
    }
#endif

    ucColor0 &= 0x0F;
    ucByte0 = (_BIT7) | ((ucColor0 & _BIT3) << 2) | ((ucColor1 & _BIT3) << 1) | ((ucColor3 & 0x07) << 1) | ((ucColor0 & _BIT2) >> 2);
    ucByte2 = ((ucColor0 & 0x03) << 6) | ((ucColor2 & 0x07) << 3) | (ucColor1 & 0x07);

    ScalerOsdCommandAllByte(usOsdAddr + g_usFontSelectStart, ucByte0, ucIcon, ucByte2);
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdFontPut2BitTable(BYTE ucRow, BYTE ucCol, BYTE *pucArray, BYTE ucColor0, BYTE ucColor1, BYTE ucColor2, BYTE ucColor3)
{
    BYTE ucOsdWidth = 0;
    BYTE ucCount = 0;
    BYTE ucHTemp = ucCol;

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
       (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
    {
        ucOsdWidth = g_ucOsdHeight;
    }
    else
#endif
    {
        ucOsdWidth = g_ucOsdWidth;
    }

    while(*pucArray != _END_)
    {
        if(*pucArray == _NEXT_)
        {
            ucRow++;
            ucHTemp =ucCol;
            pucArray++;
        }
        else if(*pucArray == _SPACE_)
        {
            ucHTemp++;
            pucArray++;
        }
        else if(*pucArray == _REPEAT_)
        {
            ucCount = *(pucArray + 1) - 1;

            while(ucCount > 0)
            {
                if(*(pucArray - 1) != _SPACE_)
                {
                    OsdFontPut2Bit(ucRow, ucHTemp, *(pucArray - 1), ucColor0, ucColor1, ucColor2, ucColor3);
                }

                ucHTemp++;

                if((ucHTemp == ucOsdWidth) && (*(pucArray + 1) != _NEXT_))
                {
                    ucRow++;
                    ucHTemp =ucCol;
                }
                ucCount--;
            }
            pucArray += 2;
        }
        else
        {
            OsdFontPut2Bit(ucRow, ucHTemp, *pucArray, ucColor0, ucColor1, ucColor2, ucColor3);
            ucHTemp++;

            if((ucHTemp == ucOsdWidth) && (*(pucArray + 1) != _NEXT_))
            {
                ucRow++;
                ucHTemp = ucCol;
            }
            pucArray++;
        }
    }
}

//void OsdFontPut4Bit()
//{
//}

//void OsdFontPut4BitTable()
//{
//}

#endif//#if(_OSD_TYPE == _REALTEK_2014_OSD)

