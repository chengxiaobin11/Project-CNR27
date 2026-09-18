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
// ID Code      : RTD2014OsdPalette.c No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_OSDPALETTE__

#include "UserCommonInclude.h"

#if(_OSD_TYPE == _REALTEK_2014_OSD)



//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************
#define _RGB_BLACK                              0,   0,   0
#define _RGB_WHITE                              255, 255, 255
#define _RGB_RED                                255,   0,   0
#define _RGB_GREEN                              0, 255,   0//19,  119,  19
#define _RGB_YELLOW                             255, 255,   0
#define _RGB_BLUE                               65,   150, 210//0,    68, 166
#define _RGB_GRAY                               210,210,210//96,  96,   96
#define _RGB_BLUE_120                           0,   30,  120
#define _RGB_ORANGE                             255, 196,   0
#define _RGB_LIGHTBLUE                          170, 205, 235// 208, 208, 208
#define _RGB_DARKBLUE                           60,  90, 150
#define _RGB_GRAY0                              120,  120,  120

#define _RGB_SELECTBOTTOM                       60,  90, 150//58,  70,  80
#define _RGB_PINK                               255, 128, 255

#define _RGB_ORANGE_H                           250, 180,  40
#define _RGB_ORANGE_DARK                        224, 120,   7
#define _RGB_LIGHT_GRAY                         210, 210, 210

#define _RGB_BLUE_255                           30,30,255


#define _LOGO_BLACK                             0,     0,   0


#if(_LOGO_TYPE == _LOGO_ZYNTECH)

#define _LOGO_WHITE                             235,   235,   235 
#define _LOGO_RED                               102, 104, 103 
#define _LOGO_GREEN                             128,   128,   128 
#elif(_LOGO_TYPE == _LOGO_ANMTE)

#define _LOGO_WHITE                             0,   0,   255 
#define _LOGO_RED                               255, 255, 255 
#define _LOGO_GREEN                             151,   151,   255 
#elif(_LOGO_TYPE ==  _LOGO_Polaroid)
#define _LOGO_WHITE                             255, 255, 255
#define _LOGO_RED                               227, 37, 25 
#define _LOGO_GREEN                             117, 186, 43 
#elif(_LOGO_TYPE == _LOGO_MONSTER)

#define _LOGO_RED                               218, 13, 44
#define _LOGO_WHITE                             255, 255, 255
#define _LOGO_GREEN                             0,   255,   0
#elif(_LOGO_TYPE == _LOGO_SODIMAC)

#define _LOGO_RED                                  212, 22, 34
#define _LOGO_WHITE                             255, 255, 255
#define _LOGO_GREEN                             0,   255,   0

#else
#define _LOGO_WHITE                             255, 255, 255
#define _LOGO_RED                               255,   0,   0
#define _LOGO_GREEN                             0,   255,   0
#endif

#if(_LOGO_TYPE == _LOGO_CRK_RUIKE)	
#define _LOGO_BLUE                              7,     82, 165
#elif(_LOGO_TYPE ==  _LOGO_Polaroid)
#define _LOGO_BLUE                              7,     82, 165//38,    133, 201
#elif(_LOGO_TYPE == _LOGO_SODIMAC)
#define _LOGO_BLUE                              17, 101, 171
#elif(_LOGO_TYPE == _LOGO_TECMIYO)
#define _LOGO_BLUE                              27, 115, 249
#else
#define _LOGO_BLUE                              0,     0, 255

#endif
#if(_LOGO_TYPE ==  _LOGO_Polaroid)
#define _LOGO_YELLOW                            247, 186,   0
#define _LOGO_GRAY                              239,   130,  1
#elif(_LOGO_TYPE == _LOGO_SODIMAC)
#define _LOGO_YELLOW                            242, 229, 39
#define _LOGO_GRAY                              96,   96,  96
#else
#define _LOGO_YELLOW                            255, 255,   0
#define _LOGO_GRAY                              96,   96,  96

#endif


#define _LOGO_DARKBLUE                          64,   64, 255
#define _LOGO_LIGHTBLUE                         128, 128, 255
#define _LOGO_SELECTBOTTOM                      58,   70,  80

#if(_LOGO_TYPE == _LOGO_ABIT_LOGO)||(_LOGO_TYPE == _LOGO_ABIT_SMALL_LOGO)
#define _LOGO_PINK                              255,150,0//  255, 128, 255
#elif(_LOGO_TYPE == _LOGO_ODNA)
#define _LOGO_PINK                              233, 84, 18

#else
#define _LOGO_PINK                              255, 128, 255
#endif

#if(_LOGO_TYPE == _LOGO_ONN)
#define _LOGO_BLUE1                             51,66,181
#elif(_LOGO_TYPE == _LOGO_HSO)
#define _LOGO_BLUE1                             5,110,185
#elif(_LOGO_TYPE == _LOGO_BRAUMERS)
#define _LOGO_BLUE1                             0,0,152
#elif((_LOGO_TYPE == _LOGO_BEZEL)||(_LOGO_TYPE == _LOGO_MUCAI))
#define _LOGO_BLUE1                             0,0,0
#elif(_LOGO_TYPE == _LOGO_KKTV)
#define _LOGO_BLUE1                             54, 118, 180
#elif(_LOGO_TYPE == _LOGO_EFOUND)
#define _LOGO_BLUE1                             174, 13, 21
#elif(_LOGO_TYPE == _LOGO_ATAS)
#define _LOGO_BLUE1                             237, 163, 66
#elif(_LOGO_TYPE == _LOGO_AIMU_no)
#define _LOGO_BLUE1                             0, 0, 0
#elif(_LOGO_TYPE == _LOGO_AIMU)
#define _LOGO_BLUE1                             0,0,0
#elif(_LOGO_TYPE == _LOGO_IFOVED_R)
#define _LOGO_BLUE1                             0,0, 255
#elif(_LOGO_TYPE == _LOGO_KLKE)
#define _LOGO_BLUE1                             255,255,255
#elif(_LOGO_TYPE == _LOGO_RENZHEN)
#define _LOGO_BLUE1                             0, 0, 0
#elif(_LOGO_TYPE == _LOGO_IMAGIC)
#define _LOGO_BLUE1                             241,129,3  
#elif(_LOGO_TYPE == _LOGO_HYINGDA)
#define _LOGO_BLUE1								60,50,118
#elif(_LOGO_TYPE == _LOGO_GENLOVE)
#define _LOGO_BLUE1                             16,122,222 
#elif(_LOGO_TYPE == _LOGO_LAPAELO)                     
#define _LOGO_BLUE1                             227,25,75
#elif(_LOGO_TYPE == _LOGO_ABIT_LOGO)||(_LOGO_TYPE == _LOGO_ABIT_SMALL_LOGO)
#define _LOGO_BLUE1                             0,   0,  0
#elif(_LOGO_TYPE == _LOGO_GUANJIE)
#define _LOGO_BLUE1                             0,   0,  0
#elif(_LOGO_TYPE == _LOGO_GJMXJ)
#define _LOGO_BLUE1                             52,   43,  46
#elif(_LOGO_TYPE == _LOGO_APEX)
#define _LOGO_BLUE1                             255,   33,  39
#elif(_LOGO_TYPE == _LOGO_ODNA)
#define _LOGO_BLUE1                             160,   160,  160
#elif(_LOGO_TYPE == _LOGO_CRK_RUIKE)	
#define _LOGO_BLUE1								254,107,21
#elif(_LOGO_TYPE == _LOGO_DUAM)	
#define _LOGO_BLUE1								0,0,0
//#elif(_LOGO_TYPE == _LOGO_EXAN)	
//#define _LOGO_BLUE1								254,107,21
#elif(_LOGO_TYPE == _LOGO_XENTA)	
#define _LOGO_BLUE1								0,123,193
#elif(_LOGO_TYPE == _LOGO_BLAUPUNKT)	
#define _LOGO_BLUE1								0,156,223
#elif(_LOGO_TYPE == _LOGO_TEROS)	
#define _LOGO_BLUE1								223,18,51
#elif(_LOGO_TYPE == _LOGO_HAIER)	
#define _LOGO_BLUE1								0,78,162
#elif(_LOGO_TYPE == _LOGO_DUALSHINE)	
#define _LOGO_BLUE1								220, 13, 27
#elif(_LOGO_TYPE == _LOGO_FUEGO)
#define _LOGO_BLUE1								237,87,34
#elif(_LOGO_TYPE == _LOGO_GAMEBOOSTER)
#define _LOGO_BLUE1								194,39,45
#else
#define _LOGO_BLUE1                             1,123,188
#endif


#define _LOGO_GREEN1                            92,191,20
#if(_LOGO_TYPE == _LOGO_FUEGO)
#define _LOGO_ORANGE_H                          97, 97,  97
#else
#define _LOGO_ORANGE_H                          250, 180,  40
#endif


#define _LOGO_ORANGE_L                          235, 160,   5
#define _LOGO_BLUE_1                            10,     46, 140


#if(_LOGO_TYPE ==  _LOGO_QTOUCH)
#undef _LOGO_GREEN
#define _LOGO_GREEN                             0,204,63
#undef _LOGO_GRAY
#define _LOGO_GRAY                              128,128,128

#endif
//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************
#define _RGB_BLUE1                              100,210,210
#define _RGB_LIGHTBLACK1                        130,130,130



//****************************************************************************
// CODE TABLES
//****************************************************************************
#if(_LOGO_TYPE == _LOGO_TIEMU)

BYTE code tPALETTE_RTD_LOGO[] =
{


    _LOGO_BLACK,
    _RGB_BLUE1,
    _RGB_BLUE1,
    _RGB_BLUE1,
    _RGB_BLUE1,
    _RGB_BLUE1,
    _RGB_BLUE1,
    _RGB_BLUE1,
    _RGB_BLUE1,
    _RGB_LIGHTBLACK1,
    _RGB_LIGHTBLACK1,
    _RGB_LIGHTBLACK1,
    _RGB_LIGHTBLACK1,
    _RGB_LIGHTBLACK1,
    _RGB_LIGHTBLACK1,
    _RGB_LIGHTBLACK1,

    
};

#else

BYTE code tPALETTE_RTD_LOGO[] =
{
    _LOGO_BLACK,
    _LOGO_WHITE,
    _LOGO_RED,
    _LOGO_GREEN,
    _LOGO_BLUE,
    _LOGO_YELLOW,
    _LOGO_GRAY,
    _LOGO_DARKBLUE,
    _LOGO_LIGHTBLUE,
    _LOGO_SELECTBOTTOM,
    _LOGO_PINK,
     _LOGO_RED,
    _LOGO_GREEN1,
    _LOGO_ORANGE_L,
    _LOGO_ORANGE_H,
    _LOGO_BLUE1,
};

#endif


BYTE code tPALETTE_MAIN_MENU[] =
{

        _RGB_BLACK,
        _RGB_WHITE,
        _RGB_RED,
        _RGB_GREEN,
        _RGB_BLUE,
        _RGB_YELLOW,
        _RGB_LIGHTBLUE,
        _RGB_DARKBLUE,
        _RGB_LIGHTBLUE,
        _RGB_GRAY0,
        _RGB_BLACK,
        _RGB_DARKBLUE,
        _RGB_BLUE,  
        _RGB_LIGHT_GRAY,
        _RGB_BLUE_120,
        _RGB_SELECTBOTTOM,    

};
 #if(_DEF_ECO_ICON)
BYTE code tPALETTE_ECO_ICON_MENU[] =
{
		_RGB_BLACK,
		_RGB_WHITE,
		_RGB_RED,
		_RGB_GREEN,
		_RGB_BLUE,
		_RGB_YELLOW,
		_RGB_LIGHTBLUE,
		_RGB_DARKBLUE,
		_RGB_LIGHTBLUE,
		_RGB_GRAY0,
		_RGB_BLACK,
		_RGB_DARKBLUE,
		_RGB_BLUE,	
		_RGB_LIGHT_GRAY,
		_RGB_BLUE_120,
		_RGB_SELECTBOTTOM,    

};
#endif

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void OsdPaletteLoadPigment(BYTE ucPaletteIndex, BYTE *pucColorPaletteArray);
void OsdPaletteSelectPalette(BYTE ucValue);

//****************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdPaletteLoadPigment(BYTE ucPaletteIndex, BYTE *pucColorPaletteArray)
{
    BYTE ucAddr = ucPaletteIndex * 16;
    BYTE ucI = 0;

    for(ucI = 0; ucI < 16; ucI++)
    {
        ScalerOsdSetColorPalette(ucAddr + ucI, *(pucColorPaletteArray + (ucI * 3)), *(pucColorPaletteArray + (ucI * 3) + 1), *(pucColorPaletteArray + (ucI * 3) + 2));
    }
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdPaletteSelectPalette(BYTE ucValue)
{
    switch(ucValue)
    {
        case _PALETTE_RTD_LOGO:
            OsdPaletteLoadPigment(_PALETTE_INDEX0, tPALETTE_RTD_LOGO);
            break;

        case _PALETTE_MAIN_MENU:
            OsdPaletteLoadPigment(_PALETTE_INDEX0, tPALETTE_MAIN_MENU);
            break;
 #if(_DEF_ECO_ICON)
		 case _PALETTE_ECO_MENU:
            OsdPaletteLoadPigment(_PALETTE_INDEX0, tPALETTE_ECO_ICON_MENU);
            break;
#endif
        default:
            break;
    }
}

#endif // End of #if(_OSD_TYPE == _REALTEK_2014_OSD)
