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
// ID Code      : RTD2014OsdDisplay.c No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_OSDDISPLAY__

#include "UserCommonInclude.h"

#if(_OSD_TYPE == _REALTEK_2014_OSD)
BYTE Cross_flag = 0;

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************
void OsdDispSetPosition_DefineHeight(BYTE ucType, EnumOsdPositionType enumOsdPositionType, WORD usHPos, WORD usVPos);


//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************

//****************************************************************************
// CODE TABLES
//****************************************************************************
extern void MENU_FUN_COMMON(void);
extern void MENU_HOT_KEY_FUNC(void);

void OsdFuncOsdToEnergyMsg()
{
#if _DEF_Energy_Msg
	if(GET_OSD_STATE() == _MENU_HOT_KEY_FUNC)
	{
		OSD_MAIN_MENU_ITEM=OSD_SubMenuCur;
		g_usBackupValue=GET_KEYMESSAGE();
		OSD_EnergyValue=GET_OSD_STATE();
	}
	else
	{
		OSD_MAIN_MENU_ITEM=OSD_MAIN_MENU_ITEM<<4|OSD_SubMenuCur;
		g_usBackupValue=GET_KEYMESSAGE();
		OSD_EnergyValue=GET_OSD_STATE();
	}
	//OSD_EnergyValue=ucValue;
	RTDOsdDispHotkeyFuncAdjust_Energy(_MENU_FUN_Energy- _MENU_FUN_BACKLIGHT);
#endif
}

void OsdFuncEnergyMsgToOsd()
{
#if _DEF_Energy_Msg
	extern void OsdDispMainMenu_1(void);
	BYTE i,j,k=0;
	i=OSD_EnergyValue;
	j=g_usBackupValue;
	k=OSD_MAIN_MENU_ITEM;
	if(i==_MENU_HOT_KEY_FUNC)
	{
		RTDOsdDispHotkeyFuncAdjust(k- _MENU_FUN_BACKLIGHT);
		OsdFuncDisableOsd();
		if(!GET_OSD_EnergyMsg())
		{
			SET_KEYMESSAGE(j);
			MENU_HOT_KEY_FUNC(); 		
			SET_KEYMESSAGE(_NONE_KEY_MESSAGE);
			#if(_MC_EUROPE)
			SET_OSD_POWER_SAVING(_OFF);
			UserAdjustBacklight(GET_OSD_BACKLIGHT());
			#endif
		}
		
		
		OsdFuncEnableOsd();
	}
	else
	{	
	#if(_MC_EUROPE)
		if(!GET_OSD_EnergyMsg())
		{
			SET_OSD_POWER_SAVING(_OFF);
			DebugMessageOsd("BACKLIGHT()1",GET_OSD_BACKLIGHT());
			UserAdjustBacklight(GET_OSD_BACKLIGHT());
		}
		OSD_MAIN_MENU_ITEM=(k>>4);
		DebugMessageOsd("3.Energy OSD_MAIN_MENU_ITEM",OSD_MAIN_MENU_ITEM);
		OsdDispMainMenu_1();
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		//OsdFuncDisableOsd();
		OSD_MAIN_MENU_ITEM=(k>>4);
		UpdateOSDMainInterface(_OSD_MAIN_PICTURE+OSD_MAIN_MENU_ITEM);
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		SET_KEYMESSAGE(_MENU_KEY_MESSAGE);
		OSDSubMenuMove();
		OSDSubMenuMove();
		DebugMessageOsd("g_usAdjustValue2",g_usAdjustValue);
		/*
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		SET_KEYMESSAGE(_MENU_KEY_MESSAGE);
		*/
		
		if(!GET_OSD_EnergyMsg())
		{
			SET_KEYMESSAGE(_NONE_KEY_MESSAGE);
		}
		
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		OsdFuncEnableOsd();
	#else
		
		OSD_MAIN_MENU_ITEM=(k>>4);
		DebugMessageOsd("3.Energy OSD_MAIN_MENU_ITEM",OSD_MAIN_MENU_ITEM);
		OsdDispMainMenu_1();
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		//OsdFuncDisableOsd();
		OSD_MAIN_MENU_ITEM=(k>>4);
		UpdateOSDMainInterface(_OSD_MAIN_PICTURE+OSD_MAIN_MENU_ITEM);
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		SET_KEYMESSAGE(_MENU_KEY_MESSAGE);
		OSDSubMenuMove();
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		while(OSD_SubMenuCur!=(k&0x0f))
		{
			SET_KEYMESSAGE(_RIGHT_KEY_MESSAGE);
			OSDSubMenuMove();
		}
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		SET_KEYMESSAGE(_MENU_KEY_MESSAGE);
		OSDSubMenuMove();			
		if(!GET_OSD_EnergyMsg())
		{
			SET_KEYMESSAGE(j);
			MENU_FUN_COMMON();
			SET_KEYMESSAGE(_NONE_KEY_MESSAGE);
		}
		
		DebugMessageOsd("3.Energy getosd",GET_OSD_STATE());
		OsdFuncEnableOsd();
	#endif
	}
#endif		
}



//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void UpdateMaskValue(void);
BYTE OsdDisplayGetSourcePortString(void);


BYTE OsdDispJudgeSourceType(void);
void OsdDispDisableOsd(void);
void OsdDispSetPosition(BYTE ucType, EnumOsdPositionType enumOsdPositionType, WORD usHPos, WORD usVPos);
void OSDSubMenuMove(void);


WORD OsdDisplayDetOverRange(WORD usValue, WORD usMax, WORD usMin, bit bCycle);
void OsdDispOsdMessage(EnumOSDDispMsg enumMessage);

#if(_VGA_SUPPORT == _ON)
void OsdDispAutoConfigProc(void);
void OsdDisplayAutoBalanceProc(void);
#endif

void OsdDispOsdReset(void);
void OsdDispShowLogo(void);

void OsdDispSliderAndNumber(BYTE ucItemRow,BYTE ucOsdState, WORD usValue);
void OsdDispNavigatMenu(void);
void RTDOsdDispHotkeyFuncAdjust(BYTE ucHotkeyType);
void RTDOsdDisplayDrawMessageWindow(void);
WORD DetOverRangeForHotkeySelect(WORD usValue, WORD usMax, WORD usMin, bit bCycle);
void UpdateItemMaskValue(void);


//****************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if(_NAVIGAT_MENU_SURPPORT)

void OsdDispDisableOsdForNavigat(void)
{
    SET_OSD_STATE(_MENU_NAVIGAT_NONE);
    SET_OSD_IN_FACTORY_MENU_STATUS(_FALSE);
    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    OsdFuncDisableOsd();
    OsdFuncCloseWindow(_OSD_WINDOW_ALL);
    g_ucOsdWidth = 0;
    g_ucOsdHeight = 0;
    g_ucOsdWidthB = 0;
    g_ucOsdHeightB = 0;
}
#endif

//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : None
//--------------------------------------------------
#if(_NAVIGAT_MENU_SURPPORT)

void OsdDispNavigatMenu(void)
{
    OsdDispDisableOsdForNavigat();
    
    OsdFuncApplyMap(WIDTH(_OSD_NAVIGAT_MENU_WIDTH), HEIGHT(_OSD_NAVIGAT_MENU_HEIGHT), COLOR(_CP_WHITE, _CP_BG));

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
    ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE,  HEIGHT(_OSD_NAVIGAT_MENU_HEIGHT), _DISABLE, 0, _ENABLE);
#endif

    OsdFuncBlending(_OSD_TRANSPARENCY_ALL);
    OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());

    // Adjust Color Palette
    OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
    OsdFontVLCLoadFont(_FONT1_GLOBAL);

    //20140210 Abel Background window Modify
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
    if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90)||(GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
    {
        OsdWindowDrawingByFont(_OSD_WINDOW_1, ROW(0), COL(0), WIDTH(12), HEIGHT(g_ucOsdWidth), _COLOR_BG_0);
        OsdWindowDrawingByFont(_OSD_WINDOW_0, ROW(0), COL(12), WIDTH(g_ucOsdHeight-12),HEIGHT(g_ucOsdWidth), _COLOR_BG_0);
    }
    else
#endif
    {
        OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(6), XEND(_OSD_NAVIGAT_MENU_WIDTH * 12), YEND(18*_OSD_NAVIGAT_MENU_HEIGHT - 5), _COLOR_BG_0);
    }

    OsdFontPut1BitTable( ROW(0), COL(0), tOSD_BOARD_TOP_NAVIGATE_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);
    OsdFontPut1BitTable( ROW(_OSD_NAVIGAT_MENU_HEIGHT-2), COL(0), tOSD_iNAVIGATE_ICON, COLOR(_COLOR_BG_1, _CP_BG), 0);
    OsdFontPut1BitTable( ROW(_OSD_NAVIGAT_MENU_HEIGHT-1), COL(0), tOSD_BOARD_BOTTOM_NAVIGATE_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);    

	OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, GET_OSD_ROTATE_STATUS()? 5:95, GET_OSD_ROTATE_STATUS()?100:0);
	
	#if(2160 <= _PANEL_DV_HEIGHT)
	if(!GET_OSD_ROTATE_STATUS())
		ScalerSetByte(0x3A2C, 0x3e);
	#endif

    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    OsdFuncEnableOsd();
}
#endif
//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : None
//--------------------------------------------------

void RTDOsdDisplayDrawMessageWindow(void)
{
    g_ucFontPointer0 = _OSD_PAGE_0_START;
    g_ucFontPointer1 = _OSD_PAGE_1_START;
    g_ucFontPointer2 = _OSD_PAGE_2_START;

    
#if(_NAVIGAT_MENU_SURPPORT)
	OsdDispDisableOsdForNavigat();
#else
	OsdDispDisableOsd();
#endif
    OsdFuncApplyMap(WIDTH(30), HEIGHT(9), COLOR(_CP_DARKBLUE, _CP_BG));
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
    ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE,  HEIGHT(9), _DISABLE, 0, _ENABLE);
#endif

    OsdFuncBlending(_OSD_TRANSPARENCY_ALL);
    OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());

    // Adjust Color Palette
    OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
    OsdFontVLCLoadFont(_FONT1_GLOBAL);
#if(_OSD_BLACK_WHITE_TYPE == _ON)
        OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(312+48), YEND(152), _COLOR_BG_0);        
        OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(19), XEND(312+48), YEND(138), _CP_WHITE);    
        OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(23), XEND(312+48), YEND(134), _COLOR_BG_3);    
#else
		OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(312+48), YEND(152), _COLOR_BG_0);        
		OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(19), XEND(312+48), YEND(138), _COLOR_BG_3);    
#endif
        OsdFontPut1BitTable( ROW(0), COL(0), tOSD_BOARD_UP_LEFT_MSG_HOTHEY, COLOR(_COLOR_BG_0, _CP_BG), 0);
		OsdFontPut1BitTable( ROW(8), COL(0), tOSD_BOARD_DOWN_LEFT_MSG_HOTHEY, COLOR(_COLOR_BG_0, _CP_BG), 0);

}

//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : None
//--------------------------------------------------

void OsdInputSourceHotkey()
{
	BYTE i = 0;
    OsdDispDisableOsd();
		
    g_ucFontPointer0 = _OSD_PAGE_0_START;
    g_ucFontPointer1 = _OSD_PAGE_1_START;
    g_ucFontPointer2 = _OSD_PAGE_2_START;

    SET_OSD_STATE(_MENU_FUN_SOURCE_HOTKEY);
	OsdFuncApplyMap(WIDTH(13), HEIGHT(3+_OSD_INPUT_AMOUNT*2), COLOR(_COLOR_BG_0, _CP_BG));

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE,  HEIGHT(3+_OSD_INPUT_AMOUNT*2), _DISABLE, 0, _ENABLE);
#endif

	OsdFuncBlending(_OSD_TRANSPARENCY_ALL);
	OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());
    // Adjust Color Palette
    OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
    OsdFontVLCLoadFont(_FONT1_GLOBAL);
	OsdFuncSetOsdItemFlag();

	
     g_usBackupValue =  GET_OSD_INPUT_PORT_OSD_ITEM();
   	
		{
        #if(_OSD_BLACK_WHITE_TYPE == _ON)    
            OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(156), YEND(80+(_OSD_INPUT_AMOUNT-1)*36), _COLOR_BG_0);                
            OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(14), XEND(156), YEND(72+(_OSD_INPUT_AMOUNT-1)*36), _CP_WHITE);    
            OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(18), XEND(156), YEND(68+(_OSD_INPUT_AMOUNT-1)*36), _COLOR_BG_3);  
        #else
            OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(156), YEND(80+(_OSD_INPUT_AMOUNT-1)*36), _COLOR_BG_0);
            OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(14), XEND(156), YEND(72+(_OSD_INPUT_AMOUNT-1)*36), _COLOR_BG_3);    
        #endif
    		OsdFontPut1BitTable( ROW(0), COL(0), tOSD_BOARD_UP_LEFT_INPUT_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);
    		OsdFontPut1BitTable( ROW(3+_OSD_INPUT_AMOUNT*2-1), COL(0), tOSD_BOARD_DOWN_LEFT_INPUT_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);
		}

	for(i = 0; i < _OSD_INPUT_AMOUNT; i++)
	RTDOsdTableFuncPutStringCenter(ROW(2+i*2), COL(0), COL(12), _PFONT_PAGE_0, _MENU_FUN_SIGNAL, i,COLOR(_COLOR_BG_2,_CP_BG), _OSD_MESSAGE_PIXEL_OFFSET, GET_OSD_LANGUAGE());					 

	OsdWindowDrawingHighlight(_OSD_WINDOW_4_1, 0, (2+GET_OSD_INPUT_PORT_OSD_ITEM()*2)*18, 13*12, (3+GET_OSD_INPUT_PORT_OSD_ITEM()*2)*18, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, _ENABLE); 

	//OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 98, 98);
	OsdDispSetPosition_DefineHeight(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, GET_OSD_HPOS(), GET_OSD_VPOS());

    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

    OsdFuncEnableOsd();
	#if(_DEF_HOTKEY_TIME)
		ScalerTimerReactiveTimerEvent(SEC(3), _USER_TIMER_EVENT_OSD_DISABLE);
	#else
		ScalerTimerReactiveTimerEvent(SEC(GET_OSD_TIME_OUT()), _USER_TIMER_EVENT_OSD_DISABLE);
	#endif
	
}

void OsdShowMuteIcon()
{
	BYTE i = 0;
    OsdDispDisableOsd();
		
    g_ucFontPointer0 = _OSD_PAGE_0_START;
    g_ucFontPointer1 = _OSD_PAGE_1_START;
    g_ucFontPointer2 = _OSD_PAGE_2_START;

    SET_OSD_STATE(_MENU_FUN_SOURCE_MUTEICON);
	OsdFuncApplyMap(WIDTH(5), HEIGHT(3), COLOR(_COLOR_BG_0, _CP_BG));

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE,  HEIGHT(3), _DISABLE, 0, _ENABLE);
#endif

	OsdFuncBlending(_OSD_TRANSPARENCY_ALL);
	OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());
    // Adjust Color Palette
    OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
    OsdFontVLCLoadFont(_HOTKEY_1BIT_ICON);
	if(GET_OSD_VOLUME_MUTE())
		OsdFontPut1BitTable( ROW(0), COL(0), tOSD_MUTE_ICON1, COLOR(_COLOR_BG_0, _CP_BG), 0);
	else
		OsdFontPut1BitTable( ROW(0), COL(0), tOSD_MUTE_ICON, COLOR(_COLOR_BG_0, _CP_BG), 0);

	
	OsdDispSetPosition_DefineHeight(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, GET_OSD_HPOS(), GET_OSD_VPOS());

	//OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 98, 98);
	//OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);

    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

    OsdFuncEnableOsd();
}
#if(_DEF_ECO_ICON)

void OsdShowEcoIcon()
{
	RTDOsdDisplayDrawMessageWindow();
	DrawMenuEcoIcon();
	OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
}
#endif

//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : None
//--------------------------------------------------

void OsdDispOsdMessage(EnumOSDDispMsg ucMessage)
{
    OsdDispDisableOsd();
		
    g_ucFontPointer0 = _OSD_PAGE_0_START;
    g_ucFontPointer1 = _OSD_PAGE_1_START;
    g_ucFontPointer2 = _OSD_PAGE_2_START;

    
	if(ucMessage == _OSD_DISP_INPUT_SIGNAL_MSG)
    	OsdFuncApplyMap(WIDTH(13), HEIGHT(5), COLOR(_COLOR_BG_0, _CP_BG));
	else
    	OsdFuncApplyMap(WIDTH(26), HEIGHT(9), COLOR(_COLOR_BG_0, _CP_BG));

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
	if(ucMessage == _OSD_DISP_INPUT_SIGNAL_MSG)
    	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE,  HEIGHT(5), _DISABLE, 0, _ENABLE);
	else    
    	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE,  HEIGHT(9), _DISABLE, 0, _ENABLE);
#endif

	OsdFuncBlending(_OSD_TRANSPARENCY_ALL);
	OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());
    // Adjust Color Palette
    OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
    OsdFontVLCLoadFont(_FONT1_GLOBAL);
    
    if(ucMessage == _OSD_DISP_PANEL_UNIFORMITY_ONOFF_MSG)
    {
        OsdWindowDrawingByFont(_OSD_WINDOW_1, ROW(0), COL(0), WIDTH(g_ucOsdWidth), g_ucOsdHeight, _CP_LIGHTBLUE);
    }
    else
    {
	    if(ucMessage == _OSD_DISP_INPUT_SIGNAL_MSG)
		{
        #if(_OSD_BLACK_WHITE_TYPE == _ON)    
            OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(156), YEND(80), _COLOR_BG_0);                
            OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(14), XEND(156), YEND(72), _CP_WHITE);    
            OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(18), XEND(156), YEND(68), _COLOR_BG_3);  
        #else
            OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(156), YEND(80), _COLOR_BG_0);
            OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(14), XEND(156), YEND(72), _COLOR_BG_3);    
        #endif
    		OsdFontPut1BitTable( ROW(0), COL(0), tOSD_BOARD_UP_LEFT_INPUT_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);
    		OsdFontPut1BitTable( ROW(4), COL(0), tOSD_BOARD_DOWN_LEFT_INPUT_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);
		}
	    else
		{
        #if(_OSD_BLACK_WHITE_TYPE == _ON)     
            OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(312), YEND(152), _COLOR_BG_0);                
            OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(19), XEND(312), YEND(138), _CP_WHITE);   
            OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(23), XEND(312), YEND(134), _COLOR_BG_3);    
        #else
            OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(312), YEND(152), _COLOR_BG_0);
            OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(19), XEND(312), YEND(138), _COLOR_BG_3);    
        #endif
    		OsdFontPut1BitTable( ROW(0), COL(0), tOSD_BOARD_UP_LEFT_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);
    		OsdFontPut1BitTable( ROW(8), COL(0), tOSD_BOARD_DOWN_LEFT_MSG, COLOR(_COLOR_BG_0, _CP_BG), 0);
		}
	//four corner
    }	

        //==== Show page item =======
    switch(ucMessage)
    {
        case _OSD_DISP_NOSIGNAL_MSG:
            
			RTDOsdTableFuncPutStringCenter(_OSD_MESSAGE_ROW_START, _OSD_MESSAGE_CENTER_COL_START, _OSD_MESSAGE_CENTER_COL_END, _PFONT_PAGE_0, _OSD_STRING_NO_SIGNAL, 0,COLOR(_COLOR_BG_2,_CP_BG), _OSD_MESSAGE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 		

            break;

        case _OSD_DISP_NOCABLE_MSG:
        
			RTDOsdTableFuncPutStringCenter(_OSD_MESSAGE_ROW_START, _OSD_MESSAGE_CENTER_COL_START, _OSD_MESSAGE_CENTER_COL_END, _PFONT_PAGE_0, _OSD_STRING_NO_SIGNAL, 0,COLOR(_COLOR_BG_2,_CP_BG), _OSD_MESSAGE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 		
        
            break;

        case _OSD_DISP_NOSUPPORT_MSG:
			
			RTDOsdTableFuncPutStringCenter(_OSD_MESSAGE_ROW_START, _OSD_MESSAGE_CENTER_COL_START, _OSD_MESSAGE_CENTER_COL_END, _PFONT_PAGE_0, _OSD_STRING_NO_SUPPORT, 0,COLOR(_COLOR_BG_2,_CP_BG), _OSD_MESSAGE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 		
            break;

        case _OSD_DISP_FAIL_SAFE_MODE_MSG:
            break;

        case _OSD_DISP_AUTO_CONFIG_MSG:

    		RTDOsdTableFuncPutStringCenter(_OSD_MESSAGE_ROW_START, _OSD_MESSAGE_CENTER_COL_START, _OSD_MESSAGE_CENTER_COL_END, _PFONT_PAGE_0, _OSD_STRING_ITEM, _MENU_FUN_AUTO_ADJUST - _MENU_FUN_BACKLIGHT,COLOR(_COLOR_BG_2,_CP_BG) ,_OSD_MESSAGE_PIXEL_OFFSET, GET_OSD_LANGUAGE());                    

            break;

        case _OSD_DISP_INPUT_SIGNAL_MSG:

			{
            	RTDOsdTableFuncPutStringCenter(ROW(2), COL(0), COL(12), _PFONT_PAGE_0, _MENU_FUN_SIGNAL, (OsdDisplayGetSourcePortString()),COLOR(_COLOR_BG_2,_CP_BG), _OSD_MESSAGE_PIXEL_OFFSET, _ENGLISH); 
				#if(_HDR10_SUPPORT == _ON && _MENU_INFOR_SHOW_HDR == _ON)	
				if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(GET_HDR10_EOTF_SETTING() == _HDR_TARGET_STATUS_SMPTE_ST_2084))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
				{
					RTDOsdTableFuncPutStringCenter(ROW(3), COL(0), COL(12), _PFONT_PAGE_0, _OSD_STRING_HDR, (OsdDisplayGetSourcePortString()),COLOR(_COLOR_BG_2,_CP_BG), _OSD_MESSAGE_PIXEL_OFFSET, _ENGLISH); 
				}
				#endif
			}
			break;

        case _OSD_DISP_AUTO_COLOR_MSG:
    		RTDOsdTableFuncPutStringCenter(_OSD_MESSAGE_ROW_START, _OSD_MESSAGE_CENTER_COL_START, _OSD_MESSAGE_CENTER_COL_END, _PFONT_PAGE_0, _OSD_STRING_ITEM, _MENU_FUN_AUTO_COLOR - _MENU_FUN_BACKLIGHT,COLOR(_COLOR_BG_2,_CP_BG) ,_OSD_MESSAGE_PIXEL_OFFSET, GET_OSD_LANGUAGE());                    

            break;

        case _OSD_DISP_POWER_SAVING_MSG:
			
			RTDOsdTableFuncPutStringCenter(_OSD_MESSAGE_ROW_START, _OSD_MESSAGE_CENTER_COL_START, _OSD_MESSAGE_CENTER_COL_END, _PFONT_PAGE_0, _OSD_STRING_POWER_SAVING, 0,COLOR(_COLOR_BG_2,_CP_BG), _OSD_MESSAGE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 		
            break;
        case _OSD_DISP_PANEL_UNIFORMITY_ONOFF_MSG:

            break;
			
    }



	if(ucMessage==_OSD_DISP_INPUT_SIGNAL_MSG)
	//	if(GET_OSD_ROTATE_STATUS()==_OSD_ROTATE_DEGREE_180)
	//		OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 2, 2);
	//	else
			OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 98, 98);
	else
    	OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);

    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

    OsdFuncEnableOsd();
}

//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : None
//--------------------------------------------------
void HotKeySpacilProc(BYTE ucHotkeyType)
{
#if _DYNAMIC_COLOR_AUTO_MEASURE
#define _DIGITAL_H_DIALPOINT_OFFSET       3// for Font Map H shift 3 pixel
#define _DIGITAL_V_DIALPOINT_OFFSET       0
		//11*7
#define _ANALOG_H_DIALPOINT_OFFSET        4
#define _ANALOG_V_DIALPOINT_OFFSET        0
		
//#define _OSD_SPOT_WIDTH                            132//(11 font*12 = 132)
//#define _OSD_SPOT_HEIGHT                           126

#define _OSD_SPOT_WIDTH_1                            (4*12)//(11 font*12 = 132)
#define _OSD_SPOT_HEIGHT_1                           (2*18)
#define _OSD_SPOT_WIDTH_2                           (8*12)//(11 font*12 = 132)
#define _OSD_SPOT_HEIGHT_2                           (6*18)

//	BYTE usHCenter;
//	BYTE usVCenter;
#endif
	OsdDispDisableOsd();		

	switch(ucHotkeyType)
	{
	
		case _MENU_FUN_SOURCE_HOTKEY:
			OsdInputSourceHotkey();

		break;

		case _MENU_FUN_SOURCE_MUTEICON:
			OsdShowMuteIcon();

		break;
#if(_DEF_ECO_ICON)

		case _MENU_FUN_ECO_ICON:
			OsdShowEcoIcon();
			break;
#endif			
		case _HOT_KEY_LOS_TYPE1:
			
			OsdFuncApplyMap(WIDTH(4), HEIGHT(2), COLOR(_CP_BG, _CP_BG));   

		#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
			ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, HEIGHT(2), _DISABLE, 0, _ENABLE);  
		#endif
			OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);    
			OsdFuncTransparency(_OSD_TRANSPARENCY_ALL); 

			// Adjust Color Palette
			OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);


			OsdFontVLCLoadFont(_HOTKEY_1BIT_ICON);
			if(0 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_RED, _CP_BG),0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_RED, _CP_BG),0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE1())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON, COLOR(_CP_GREEN, _CP_BG),0);
			else
			    OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE1_ICON1, COLOR(_CP_GREEN, _CP_BG),0);
			
			OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
#if _DYNAMIC_COLOR_AUTO_MEASURE
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(4), HEIGHT(2), FG_COLOR(_CP_RED), BG_COLOR(_CP_BG));
			SET_OSD_DIAL_POINT_STYLE(_ON);
			if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
			{
				g_stOsdInfo.b1DynamicDiapointStatus = _TRUE;
				ScalerOsdSetColorPalette(_CP_RED,0xd1,0x05,0x00);//default diapoint color
				DebugMessageOsd("3.234",g_stOsdInfo.b1DynamicDiapointStatus);
			}
			/*if(SysSourceGetSourceType() == _SOURCE_VGA)
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_ANALOG_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_ANALOG_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			else
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_1/2)+_DIGITAL_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_1/2)+_DIGITAL_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			OsdFuncSetPosition( _OSD_POSITION_GLOBAL_A, usHCenter, usVCenter);*/
#endif

	
			break;

		case _HOT_KEY_LOS_TYPE2:
			
			OsdFuncApplyMap(WIDTH(8), HEIGHT(6), COLOR(_CP_BG, _CP_BG));   

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
			ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, HEIGHT(6), _DISABLE, 0, _ENABLE);  
#endif
			OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);    
			OsdFuncTransparency(_OSD_TRANSPARENCY_ALL); 

			// Adjust Color Palette
			OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
			OsdFontVLCLoadFont(_HOTKEY_1BIT_ICON);
			
			if(0 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON1, COLOR(_CP_YELLOW, _CP_BG),0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON2, COLOR(_CP_RED, _CP_BG),0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON3, COLOR(_CP_YELLOW, _CP_BG),0);
			else if(3 == GET_OSD_CROSS_HAIR_TYPE2())
			    OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON4, COLOR(_CP_RED, _CP_BG),0);
			else if(4 == GET_OSD_CROSS_HAIR_TYPE2())
			    OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON5, COLOR(_CP_YELLOW, _CP_BG),0);
			else if(5 == GET_OSD_CROSS_HAIR_TYPE2())
			    OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON6, COLOR(_CP_RED, _CP_BG),0);
#if _DYNAMIC_COLOR_AUTO_MEASURE
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(8), HEIGHT(6), FG_COLOR(_CP_RED), BG_COLOR(_CP_BG));
			SET_OSD_DIAL_POINT_STYLE(_ON);
			if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
			{
				g_stOsdInfo.b1DynamicDiapointStatus = _TRUE;
				ScalerOsdSetColorPalette(_CP_RED,0xd1,0x05,0x00);//default diapoint color
			}
			/*if(SysSourceGetSourceType() == _SOURCE_VGA)
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_2/2)+_ANALOG_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_2/2)+_ANALOG_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			else
			{
				usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH_2/2)+_DIGITAL_H_DIALPOINT_OFFSET;
				usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT_2/2)+_DIGITAL_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
			}
			OsdFuncSetPosition( _OSD_POSITION_GLOBAL_A, usHCenter, usVCenter);*/
#endif

	
		OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
			break;
#if(_DEF_LOS_TYPE3)	
		case _HOT_KEY_LOS_TYPE3:
			
			OsdFuncApplyMap(WIDTH(8), HEIGHT(6), COLOR(_CP_BG, _CP_BG));   

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
			ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, HEIGHT(6), _DISABLE, 0, _ENABLE);  
#endif
			OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);    
			OsdFuncTransparency(_OSD_TRANSPARENCY_ALL); 

			// Adjust Color Palette
			OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
			OsdFontVLCLoadFont(_HOTKEY_1BIT_ICON);

			
            if(0 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON1, COLOR(_CP_RED, _CP_BG),0);
			else if(1 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON2, COLOR(_CP_RED, _CP_BG),0);
			else if(2 == GET_OSD_CROSS_HAIR_TYPE2())
				OsdFontPut1BitTable(ROW(0), COL(0), tOSD_TYPE2_ICON3, COLOR(_CP_RED, _CP_BG),0);
#if _DYNAMIC_COLOR_AUTO_MEASURE
			ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(8), HEIGHT(6), FG_COLOR(_CP_RED), BG_COLOR(_CP_BG));
			SET_OSD_DIAL_POINT_STYLE(_ON);
			if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
			{
				g_stOsdInfo.b1DynamicDiapointStatus = _TRUE;
				ScalerOsdSetColorPalette(_CP_RED,0xd1,0x05,0x00);//default diapoint color
			}
#endif
			
	
		OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
			break;
#endif

#if(_DEF_MENU_LOCK)
        case _MENU_FUN_MENU_LOCK:
                    
                    OsdFuncApplyMap(WIDTH(10), HEIGHT(6), COLOR(_CP_BG, _CP_BG));   
        
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
                    ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, HEIGHT(6), _DISABLE, 0, _ENABLE);  
#endif
                    OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);    
                    OsdFuncTransparency(_OSD_TRANSPARENCY_ALL); 
        
                    // Adjust Color Palette
                    OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
                    OsdFontVLCLoadFont(_MENULOCK_1BIT_ICON);
                    
                    if(1 == GET_OSD_MENU_LOCK_TYPE())
                        OsdFontPut1BitTable(ROW(0), COL(0), tOSD_MENULOCK_ICON0, COLOR(_CP_RED, _CP_BG), 0);
                    else if(0 == GET_OSD_MENU_LOCK_TYPE())
                        OsdFontPut1BitTable(ROW(0), COL(0), tOSD_MENULOCK_ICON1, COLOR(_CP_RED, _CP_BG), 0);
                    OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
                    break;
#endif
		default:

			break;
	}

}

//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : None
//--------------------------------------------------
void RTDOsdDispHotkeyFuncAdjust_Energy(BYTE ucHotkeyType)
{
	ucHotkeyType += _MENU_FUN_BACKLIGHT;
	if(ucHotkeyType==_MENU_FUN_Energy)
	{
		g_ucFontPointer0 = _OSD_PAGE_0_START;
		g_ucFontPointer1 = _OSD_PAGE_1_START;
		g_ucFontPointer2 = _OSD_PAGE_2_START;
	
		
		OsdDispDisableOsd();
		OsdFuncApplyMap(WIDTH(36), HEIGHT(9), COLOR(_CP_DARKBLUE, _CP_BG));
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
		ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE,	HEIGHT(9), _DISABLE, 0, _ENABLE);
#endif
	
		OsdFuncBlending(_OSD_TRANSPARENCY_ALL);
		OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());
	
		// Adjust Color Palette
		OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);
		OsdFontVLCLoadFont(_FONT1_GLOBAL);
#if(_OSD_BLACK_WHITE_TYPE == _ON)
		OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(36*12), YEND(152), _COLOR_BG_0);		
		OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(19+18*2-4), XEND(36*12), YEND(138), _CP_WHITE);    
		OsdWindowDrawing(_OSD_WINDOW_2, XSTART(0), YSTART(23+18*2-4), XEND(36*12), YEND(134), _COLOR_BG_3);	 
#else
		OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(36*12), YEND(152), _COLOR_BG_0);		
		OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(19+18*2-8), XEND(36*12), YEND(138), _COLOR_BG_3);	 
#endif
		#if(_MC_EUROPE)
		RTDOsdTableFuncPutStringCenter(1,0,35,_PFONT_PAGE_1,_OSD_STRING_Energy_Msg,0,COLOR( _COLOR_MENU_FONT_SELECT, _CP_BG),0,_ENGLISH);
		RTDOsdTableFuncPutStringCenter(3,0,35, _PFONT_PAGE_1, _OSD_STRING_Energy_Msg, 1, COLOR(_COLOR_MENU_FONT, _CP_BG),0, _ENGLISH);
		RTDOsdTableFuncPutStringCenter(4,0,35, _PFONT_PAGE_1, _OSD_STRING_Energy_Msg, 2, COLOR(_COLOR_MENU_FONT, _CP_BG),0, _ENGLISH);
		
		RTDOsdTableFuncPutStringCenter(6,0,17,_PFONT_PAGE_1,_OSD_STRING_Energy_Msg,3,COLOR( _COLOR_MENU_FONT_SELECT, _CP_BG),0,_ENGLISH);
		RTDOsdTableFuncPutStringCenter(6,18,35,_PFONT_PAGE_1,_OSD_STRING_Energy_Msg,4,COLOR( _COLOR_MENU_FONT, _CP_BG),0,_ENGLISH);
		#else
		RTDOsdTableFuncPutStringCenter(1,0,35,_PFONT_PAGE_1,_OSD_STRING_Energy_Msg,0,COLOR( _COLOR_MENU_FONT_SELECT, _CP_BG),0,GET_OSD_LANGUAGE());
		RTDOsdTableFuncPutStringCenter(3,0,35, _PFONT_PAGE_1, _OSD_STRING_Energy_Msg, 1, COLOR(_COLOR_MENU_FONT, _CP_BG),0, GET_OSD_LANGUAGE());
		RTDOsdTableFuncPutStringCenter(4,0,35, _PFONT_PAGE_1, _OSD_STRING_Energy_Msg, 2, COLOR(_COLOR_MENU_FONT, _CP_BG),0, GET_OSD_LANGUAGE());
		
		RTDOsdTableFuncPutStringCenter(6,0,17,_PFONT_PAGE_1,_OSD_STRING_Energy_Msg,3,COLOR( _COLOR_MENU_FONT_SELECT, _CP_BG),0,GET_OSD_LANGUAGE());
		RTDOsdTableFuncPutStringCenter(6,18,35,_PFONT_PAGE_1,_OSD_STRING_Energy_Msg,4,COLOR( _COLOR_MENU_FONT, _CP_BG),0,GET_OSD_LANGUAGE());
		#endif
		
		g_usAdjustValue = GetOsdValue(ucHotkeyType);
		ScalerOsdChange1BitColor( ROW(6),COL(18-18*g_usAdjustValue),LENGTH(18), HEIGHT(1), FG_COLOR(_COLOR_MENU_FONT_SELECT), BG_COLOR(_CP_BG));
		ScalerOsdChange1BitColor( ROW(6),COL(0+18*g_usAdjustValue),LENGTH(18), HEIGHT(1), FG_COLOR(_COLOR_MENU_FONT), BG_COLOR(_CP_BG));

        OsdFontPut1BitTable( ROW(0), COL(0), tOSD_BOARD_UP_LEFT_MSG_HOTHEY1, COLOR(_COLOR_BG_0, _CP_BG), 0);
		OsdFontPut1BitTable( ROW(8), COL(0), tOSD_BOARD_DOWN_LEFT_MSG_HOTHEY1, COLOR(_COLOR_BG_0, _CP_BG), 0);

		UpdateMaskItem();
		UpdateMaskValue();
		//UpdateItemMaskValue();
		OSD_SubMenuCur = 	ucHotkeyType;

		if(OSD_MASK_GET(ucHotkeyType))
		{
			OSD_SubMenuCur = 0xff;
		}
		SET_OSD_STATE(_MENU_FUN_Energy);
		
		OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
	}
	OsdFuncEnableOsd();
}

void RTDOsdDispHotkeyFuncAdjust(BYTE ucHotkeyType)
{
	ucHotkeyType += _MENU_FUN_BACKLIGHT;
	if(ucHotkeyType > _MENU_NULL)
	{
		HotKeySpacilProc(ucHotkeyType);
//		SET_OSD_STATE(ucHotkeyType);
	}
	else
	{
		#if(_ENABLE_VGA_AUTO_ADJUST == _ON)
		if(ucHotkeyType == _MENU_FUN_AUTO_ADJUST)
		{
			SET_OSD_EVENT_MESSAGE(_OSDEVENT_DO_AUTO_CONFIG_MSG);
		}
		else
		#endif
		{
			RTDOsdDisplayDrawMessageWindow();
			UpdateMaskItem();
			UpdateMaskValue();
			// UpdateItemMaskValue();
			if(GetOsdShowType(ucHotkeyType) == _TYPE_NONE)
			{
				RTDOsdTableFuncPutStringCenter(_HOTKEY_ROW_START,0,29,_PFONT_PAGE_1,_OSD_STRING_ITEM,ucHotkeyType -_MENU_FUN_BACKLIGHT,COLOR(OSD_MASK_GET(ucHotkeyType)?_CP_GRAY: _COLOR_MENU_FONT, _CP_BG),0,GET_OSD_LANGUAGE());
			}
			else
			{
				SG_PutStringProp(_HOTKEY_ROW_START, 1, _PFONT_PAGE_1, _MENU_FUN_HOTLEFT, ucHotkeyType, COLOR(OSD_MASK_GET(ucHotkeyType)?_CP_GRAY: _COLOR_MENU_FONT, _CP_BG),GET_OSD_LANGUAGE());
			}
			g_usBackupValue = GetOsdValue(ucHotkeyType);
			OSD_SubMenuCur = 	ucHotkeyType;

			if(OSD_MASK_GET(ucHotkeyType))
			{
				OSD_SubMenuCur = 0xff;
			}

			SET_OSD_STATE(_MENU_HOT_KEY_FUNC);
			OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, 50, 50);
		}

	}
	
#if _DYNAMIC_COLOR_AUTO_MEASURE
	if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
	{
	}
	else
#endif
		OsdFuncEnableOsd();
}

//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : None
//--------------------------------------------------
#if(_PCB_TYPE == _RL6432__156PIN__HKMRT2556E01__2H1DP__LVDS)
BYTE OsdDisplayGetSourcePortString(void)
{
    switch(SysSourceGetInputPort())
    {
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)
        case _A0_INPUT_PORT:
            return _STRING_A0_PORT;
#endif
#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)
        case _D0_INPUT_PORT:
            return _STRING_D0_PORT;
#endif
#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)
        case _D1_INPUT_PORT:
            return _STRING_D3_PORT;
#endif
#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)
        case _D2_INPUT_PORT:
            return _STRING_D2_PORT;
#endif
#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)
        case _D3_INPUT_PORT:
            return _STRING_D1_PORT;
#endif
#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)
        case _D4_INPUT_PORT:
            return _STRING_D4_PORT;
#endif
#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)
        case _D5_INPUT_PORT:
            return _STRING_D5_PORT;
#endif
#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)
        case _D6_INPUT_PORT:
            return _STRING_D6_PORT;
#endif
        default:
            return 0;
    }
}

#elif(_PCB_TYPE == _RL6463__128PIN__HKMRT2525E02__1A2H__LVDS && _DEF_HDMI_SWAP)
BYTE OsdDisplayGetSourcePortString(void)
{
    switch(SysSourceGetInputPort())
    {
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)
        case _A0_INPUT_PORT:
            return _STRING_A0_PORT;
#endif
#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)
        case _D0_INPUT_PORT:
            return _STRING_D1_PORT;
#endif
#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)
        case _D1_INPUT_PORT:
            return _STRING_D0_PORT;
#endif
#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)
        case _D2_INPUT_PORT:
            return _STRING_D2_PORT;
#endif
#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)
        case _D3_INPUT_PORT:
            return _STRING_D3_PORT;
#endif
#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)
        case _D4_INPUT_PORT:
            return _STRING_D4_PORT;
#endif
#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)
        case _D5_INPUT_PORT:
            return _STRING_D5_PORT;
#endif
#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)
        case _D6_INPUT_PORT:
            return _STRING_D6_PORT;
#endif
        default:
            return 0;
    }
}

#else
BYTE OsdDisplayGetSourcePortString(void)
{
    switch(SysSourceGetInputPort())
    {
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)
        case _A0_INPUT_PORT:
            return _STRING_A0_PORT;
#endif
#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)
        case _D0_INPUT_PORT:
            return _STRING_D0_PORT;
#endif
#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)
        case _D1_INPUT_PORT:
            return _STRING_D1_PORT;
#endif
#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)
        case _D2_INPUT_PORT:
            return _STRING_D2_PORT;
#endif
#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)
        case _D3_INPUT_PORT:
            return _STRING_D3_PORT;
#endif
#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)
        case _D4_INPUT_PORT:
            return _STRING_D4_PORT;
#endif
#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)
        case _D5_INPUT_PORT:
            return _STRING_D5_PORT;
#endif
#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)
        case _D6_INPUT_PORT:
            return _STRING_D6_PORT;
#endif
        default:
            return 0;
    }
}
#endif
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdDispDisableOsd(void)
{
    SET_OSD_STATE(_MENU_NONE);
    SET_OSD_IN_FACTORY_MENU_STATUS(_FALSE);
    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    OsdFuncDisableOsd();
    OsdFuncCloseWindow(_OSD_WINDOW_ALL);
    g_ucOsdWidth = 0;
    g_ucOsdHeight = 0;
    g_ucOsdWidthB = 0;
    g_ucOsdHeightB = 0;
}
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdDispSetPosition_DefineHeight(BYTE ucType, EnumOsdPositionType enumOsdPositionType, WORD usHPos, WORD usVPos)
{
    WORD usX  = 0;
    WORD usY = 0;
    BYTE ucFonWidth = 12;
    BYTE ucFonHeight = 18;
    BYTE ucHorizontalDelayStep = 4;
    BYTE ucTempWidth = g_ucOsdWidth;
    BYTE ucTempHeight = g_ucOsdHeight; //BYTE ucTempHeight = g_ucOsdHeight - 6;
	usVPos = 100 -usVPos;
	if(GET_OSD_ROTATE_STATUS()== _OSD_ROTATE_DEGREE_180)
	{
		usVPos = 100 -usVPos;
		usHPos = 100 -usHPos;
	}
    if((enumOsdPositionType == _OSD_POSITION_GLOBAL_B) ||
       (enumOsdPositionType == _OSD_POSITION_FONT_B))
    {
        ucTempWidth = g_ucOsdWidthB;
        ucTempHeight = g_ucOsdHeightB;
    }

    if(ScalerOsdGetHorizontalDelayStep() == _OSD_HORIZONTAL_DELAY_STEP_1_PIXEL)
    {
        ucHorizontalDelayStep = 1;
    }

    if(GET_OSD_DOUBLE_SIZE() == _ON)
    {
        ucFonWidth *= 2;
        ucFonHeight *= 2;
    }

    if(ucType == _POS_PERCENT)
    {
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
        if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
           (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonHeight) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonWidth) * usVPos) / _OSD_V_POS_MAX;
        }
        else
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonWidth) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonHeight) * usVPos) / _OSD_V_POS_MAX;
        }
#elif(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
        if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
           (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempHeight * ucFonHeight) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempWidth * ucFonWidth) * usVPos) / _OSD_V_POS_MAX;
        }
        else
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonWidth) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonHeight + 8) * usVPos) / _OSD_V_POS_MAX;
			DebugMessageOsd("usY",usY);
        }
#else
        usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonWidth) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
        usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonHeight) * usVPos) / _OSD_V_POS_MAX;
#endif

    }
    else
    {
        // Notice!!! if osd set double size need to chek real position
        usX = usHPos;
        usY = usVPos;
    }
    if(GET_OSD_DOUBLE_SIZE() == _ON)
    {
        usX = usX / 2;
        usY = usY / 2;
    }

    OsdFuncSetPosition(enumOsdPositionType, usX, usY);
}

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdDispSetPosition(BYTE ucType, EnumOsdPositionType enumOsdPositionType, WORD usHPos, WORD usVPos)
{
    WORD usX  = 0;
    WORD usY = 0;
    BYTE ucFonWidth = 12;
    BYTE ucFonHeight = 18;
    BYTE ucHorizontalDelayStep = 4;
    BYTE ucTempWidth = g_ucOsdWidth;
    BYTE ucTempHeight = g_ucOsdHeight;
	usVPos = 100 - usVPos;
	if(GET_OSD_ROTATE_STATUS()== _OSD_ROTATE_DEGREE_180)
	{
		usVPos = 100 -usVPos;
		usHPos = 100 -usHPos;
	}

    if((enumOsdPositionType == _OSD_POSITION_GLOBAL_B) ||
       (enumOsdPositionType == _OSD_POSITION_FONT_B))
    {
        ucTempWidth = g_ucOsdWidthB;
        ucTempHeight = g_ucOsdHeightB;
    }

    if(ScalerOsdGetHorizontalDelayStep() == _OSD_HORIZONTAL_DELAY_STEP_1_PIXEL)
    {
        ucHorizontalDelayStep = 1;
    }

    if(GET_OSD_DOUBLE_SIZE() == _ON)
    {
        ucFonWidth *= 2;
        ucFonHeight *= 2;
    }

    if(ucType == _POS_PERCENT)
    {
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_SOFTWARE)
        if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
           (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonHeight) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonWidth) * usVPos) / _OSD_V_POS_MAX;
        }
        else
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonWidth) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonHeight) * usVPos) / _OSD_V_POS_MAX;
        }
#elif(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
        if((GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_90) ||
           (GET_OSD_ROTATE_STATUS() == _OSD_ROTATE_DEGREE_270))
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempHeight * ucFonHeight) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempWidth * ucFonWidth) * usVPos) / _OSD_V_POS_MAX;
        }
        else
        {
            usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonWidth) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
            usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonHeight) * usVPos) / _OSD_V_POS_MAX;
        }
#else
        usX = ((((DWORD)(_PANEL_DH_WIDTH) - (DWORD)ucTempWidth * ucFonWidth) / ucHorizontalDelayStep) * usHPos) / _OSD_H_POS_MAX;
        usY = (((DWORD)_PANEL_DV_HEIGHT - (DWORD)ucTempHeight * ucFonHeight) * usVPos) / _OSD_V_POS_MAX;
#endif
    }
    else
    {
        // Notice!!! if osd set double size need to chek real position
        usX = usHPos;
        usY = usVPos;
    }
    if(GET_OSD_DOUBLE_SIZE() == _ON)
    {
        usX = usX / 2;
        usY = usY / 2;
    }
	if(2048 <= usY)
	{
		usY = 2047; //usY的寄存器只有11位  luo
	}
    OsdFuncSetPosition(enumOsdPositionType, usX, usY);
}

//--------------------------------------------------
// Description  :
// Input Value  :
// Output Value :
//--------------------------------------------------

void RTDOsdDisplaySlider(BYTE ucRow, BYTE ucCol, BYTE ucLength, WORD usValue, WORD usMax, WORD usMin, BYTE ucColor)
{
	BYTE xdata ucCnt = 0;
    BYTE xdata ucCount = 0;
    BYTE xdata ucHTemp = ucCol;
    BYTE *pArray = 0;

	BYTE xdata ucTmp[32] = {0};

	if(usValue < usMin)
	{
		usValue = usMin;
	}

	if(usValue > usMax)
	{
		usValue = usMax;
	}

	usValue -= usMin;
	// ------------------------------------------------------------------------
	// Draw MINUS ICON
	// ------------------------------------------------------------------------
	ucTmp[0] = _HKC_BAR_L;
	// ------------------------------------------------------------------------
	// Draw BAR
	// ------------------------------------------------------------------------
	for(ucCnt = 1; ucCnt < (ucLength - 1); ucCnt++)
	{
		ucTmp[ucCnt] = _HKC_BAR0;
	}

	if(usMax > usMin)
	{
		ucCnt = ((WORD)(usValue * (ucLength - 2))) / (usMax - usMin);

		if(ucCnt < (ucLength - 2))
		{
			ucTmp[ucCnt + 1] = (_HKC_BAR0) + (((((WORD)(usValue * (ucLength - 2))) * _SLIDER_RESOLUTION) / (usMax - usMin)) % _SLIDER_RESOLUTION);
		}
		for(; ucCnt > 0; ucCnt--)
		{
			ucTmp[ucCnt] = _HKC_BAR10;
		}
	}

	if((ucTmp[ucLength - 2] == _HKC_BAR10) && ((usValue + usMin) != usMax))
	{
		ucTmp[ucLength - 2] = _HKC_BAR9;
	}

	if((ucTmp[1] == _HKC_BAR0) && ((usValue + usMin) != usMin))
	{
		ucTmp[1] = _HKC_BAR1;
	}

	// ------------------------------------------------------------------------
	// Draw PLUS ICON
	// ------------------------------------------------------------------------
	ucTmp[ucLength - 1] = _HKC_BAR_R;
	ucTmp[ucLength] = _END_;

	//RTDOsdFuncPutString(ucRow, ucCol, _ENGLISH, ucTmp, ucColor);
    pArray = ucTmp;


    while(*pArray != _END_)
    {
        if(*pArray == _NEXT_)
        {
            ucRow++;
            ucHTemp = ucCol;
            pArray++;
        }
        else if(*pArray == _SPACE_)
        {
            ucHTemp++;
            pArray++;
        }
        else if(*pArray == _REPEAT_)
        {
            ucCount =*(pArray + 1) - 1;
            
            while(ucCount > 0)
            {
                OsdFontPut1Bit(ucRow, ucHTemp, *(pArray - 1), ucColor, 0);
                ucHTemp++;
       
                if((ucHTemp == g_ucOsdWidth) && (*(pArray + 1) != _NEXT_))
                {
                    ucRow++;
                    ucHTemp =ucCol;  
                }
                ucCount--;
            }
            pArray += 2;
        }
        else
        {            
            OsdFontPut1Bit(ucRow, ucHTemp, *pArray, ucColor, 0);
            ucHTemp++;

            if((ucHTemp == g_ucOsdWidth) && (*(pArray + 1) != _NEXT_))
            {
                ucRow++;
                ucHTemp = ucCol;  
            }
            pArray++;
        }
    }
}

//--------------------------------------------------
// Description  :
// Input Value  :
// Output Value :
//--------------------------------------------------
void OsdDispSliderAndNumber(BYTE ucItemRow,BYTE ucOsdState, WORD usValue)
{
	OsdDispSliderAndNumber_1(ucItemRow,ucOsdState,usValue,1);


}

void OsdDispSliderAndNumber_1(BYTE ucItemRow,BYTE ucOsdState, WORD usValue, WORD usValue1)
{
	BYTE ucColor = 0;
	BYTE ucShowMax = 100;
	BYTE ucShowMin = 0;    
	BYTE ucPagePositionSelect = 23;
	BYTE ucPFnotPageItem = _PFONT_PAGE_ITEM_1 + ((ucItemRow -_ITEM_1_ROW)/_OSD_ITEM_ROW_CHANGE);

	ucColor = ((_COLOR_MENU_FONT<<4)|_CP_BG);
	if(OSD_MASK_GET(ucOsdState)&&(ucOsdState>=_MENU_FUN_BACKLIGHT &&_MENU_NULL>ucOsdState))
		ucColor = ((_CP_GRAY<<4)|_CP_BG);
	if((GET_OSD_STATE() == _MENU_HOT_KEY_FUNC)||
#if(_NAVIGAT_MENU_SURPPORT)
	(GET_OSD_STATE() == _MENU_NAVIGAT_NONE))
#else
	(GET_OSD_STATE() == _MENU_NONE))
#endif
	{
		ucPagePositionSelect = _HOTKEY_SLIDER_COL;
		if(OSD_MASK_GET(ucOsdState))
		ucColor = ((_CP_GRAY<<4)|_CP_BG);
	}

	g_usAdjustValue = usValue;

	if((_MENU_FUN_BACKLIGHT<=GET_OSD_STATE() && GET_OSD_STATE()< _MENU_END)&& (GET_OSD_STATE() != _MENU_FUN_COLORTEMP)&&(usValue1==1))
	{
			switch(ucOsdState)
			{
				case _MENU_FUN_BACKLIGHT:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					DebugMessageOsd("BACKLIGHT()",GET_OSD_BACKLIGHT());
					DebugMessageOsd("g_usAdjustValue",g_usAdjustValue);
					#if _DEF_Energy_Msg
						#if(_MC_EUROPE)
						if(GET_OSD_EnergyMsg())
						{
							OsdFuncOsdToEnergyMsg();
							return ;
						}
						
						#else
						if(g_usAdjustValue>_DEF_Energy_Value&&GET_OSD_EnergyMsg())
						{
							OsdFuncOsdToEnergyMsg();
							return ;
						}
						#endif
					#endif
					SET_OSD_BACKLIGHT(g_usAdjustValue);
					UserAdjustBacklight(GET_OSD_BACKLIGHT());
					
#if 1//(_OSD_POWER_SAVING_MODE)
					if(GET_OSD_POWER_SAVING())
						SET_OSD_POWER_SAVING(_OFF);
#endif					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

					break;
					
				case _MENU_FUN_CONTRAST:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_OSD_CONTRAST(g_usAdjustValue);				
					UserAdjustContrast(GET_OSD_CONTRAST());
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_BRICON_MSG);
					break;

				case _MENU_FUN_BRIGHTNESS:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_OSD_BRIGHTNESS(g_usAdjustValue);
					UserAdjustBrightness(GET_OSD_BRIGHTNESS());	
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_BRICON_MSG);
					break;
					
				case _MENU_FUN_DCC:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 20, 0, _OFF);
					SET_OSD_DCC(g_usAdjustValue);
#if(_DCC_FUNCTION == _ON)
					UserAdjustDCC(GET_OSD_DCC()); 
#endif
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_BRICON_MSG);
					
					ucShowMax = 20;
					break;


				case _MENU_FUN_SHARPNESS:				
					ucShowMax = 4;
				    ucShowMin = 0;    
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 4, 0, _OFF);
					SET_OSD_SHARPNESS(g_usAdjustValue);
#if(_SHARPNESS_SUPPORT == _ON)
					UserCommonAdjustSharpness(SysSourceGetInputPort());
#endif
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

					break;
#if(_VGA_SUPPORT == _ON)
					
				case _MENU_FUN_VGA_HPOSITON:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_VGA_MODE_ADJUST_H_POSITION(g_usAdjustValue);
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
			        UserCommonAdjustHPosition(GET_VGA_MODE_ADJUST_H_POSITION());        
				
					break;
					
				case _MENU_FUN_VGA_VPOSITON:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_VGA_MODE_ADJUST_V_POSITION(g_usAdjustValue);
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
			        UserCommonAdjustVPosition(GET_VGA_MODE_ADJUST_V_POSITION());        			
					break;

				case _MENU_FUN_VGA_CLK:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_VGA_MODE_ADJUST_CLOCK(g_usAdjustValue);
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
					UserCommonAdjustClock(GET_VGA_MODE_ADJUST_CLOCK());			
					break;
				case _MENU_FUN_VGA_PHASE:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_VGA_MODE_ADJUST_PHASE(g_usAdjustValue);
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
					UserCommonAdjustPhase(GET_VGA_MODE_ADJUST_PHASE());			
					break;
#endif
				case _MENU_FUN_R:	
					
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_R);
					if(GET_OSD_STATE() == _MENU_FUN_R || GET_OSD_STATE() == _MENU_HOT_KEY_FUNC)
					{
						g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
						SET_COLOR_TEMP_TYPE_USER_R(UserCommonAdjustPercentToRealValue(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_R));
					}
					UserAdjustContrast(GET_OSD_CONTRAST());	
					
					RTDNVRamSaveColorSetting(_CT_USER);
					break;

				case _MENU_FUN_G:	
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_G);			
					if(GET_OSD_STATE() == _MENU_FUN_G || GET_OSD_STATE() == _MENU_HOT_KEY_FUNC)
					{
						g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
						SET_COLOR_TEMP_TYPE_USER_G(UserCommonAdjustPercentToRealValue(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_G));
					}
					UserAdjustContrast(GET_OSD_CONTRAST());		
					
					RTDNVRamSaveColorSetting(_CT_USER);
					break;
					
				case _MENU_FUN_B:	
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_B);
					if(GET_OSD_STATE() == _MENU_FUN_B || GET_OSD_STATE() == _MENU_HOT_KEY_FUNC)
					{
						g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
						SET_COLOR_TEMP_TYPE_USER_B(UserCommonAdjustPercentToRealValue(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_B));
					}			
					UserAdjustContrast(GET_OSD_CONTRAST());
					
					RTDNVRamSaveColorSetting(_CT_USER);
					break;

					
				case _MENU_FUN_OSD_HPOSITON:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_OSD_HPOS(g_usAdjustValue);
					
					if(GET_OSD_STATE() != _MENU_HOT_KEY_FUNC)
					OsdDispSetPosition_DefineHeight(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, GET_OSD_HPOS(), GET_OSD_VPOS());	
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
					break;
				
				case _MENU_FUN_OSD_VPOSITON:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_OSD_VPOS(g_usAdjustValue);
					
					if(GET_OSD_STATE() != _MENU_HOT_KEY_FUNC)
					OsdDispSetPosition_DefineHeight(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, GET_OSD_HPOS(), GET_OSD_VPOS());	
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
					break;
					
				case _MENU_FUN_OSD_TIME:
				
					ucShowMax = 60;
					ucShowMin = 0;   
					
				#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 60, 5, _OFF);
				#else
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 60, 10, _OFF);
				#endif
						SET_OSD_TIME_OUT(g_usAdjustValue);
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
				
					break;

				case _MENU_FUN_OSD_TRANS:	
				
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 160, 0, 80);
#if(OSD_TRANS)					
					while(1)
					{
					   g_usAdjustValue= (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);

						if(g_usAdjustValue % 20 == 0)
						{
							break;
							
							if(GET_KEYMESSAGE()==_RIGHT_KEY_MESSAGE)
								g_usAdjustValue--;
							else if(GET_KEYMESSAGE()==_LEFT_KEY_MESSAGE)
								g_usAdjustValue++;
						}
					}
#else					
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
#endif					
					SET_OSD_TRANSPARENCY_STATUS(UserCommonAdjustPercentToRealValue(g_usAdjustValue, 160, 0, 80));
					OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());		
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
					break;

				case _MENU_FUN_LOWBLUE:	
					while(1)
					{
					   g_usAdjustValue= (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					   if(g_usAdjustValue % 25 == 0)
					   {
						   break;
					   }
					}
					SET_OSD_LOW_BLUE(g_usAdjustValue);
					UserAdjustContrast(GET_OSD_CONTRAST());	
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
					break;	

				case _MENU_FUN_AUDOIVOLUME:	
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
				#if _DEF_Energy_Msg
					#if(!_MC_EUROPE)
						if(g_usAdjustValue>_DEF_VOLUME&&GET_OSD_EnergyMsg())
						{
							OsdFuncOsdToEnergyMsg();
							return ;
						}
					#endif
				#endif					
					SET_OSD_VOLUME(g_usAdjustValue);
					UserAdjustAudioVolume(GET_OSD_VOLUME());	
					if(GET_OSD_VOLUME_MUTE())
					{
						SET_OSD_VOLUME_MUTE(_OFF);

						if(GET_OSD_STATE() != _MENU_HOT_KEY_FUNC)
						{
							if(OSD_ITEM(_MENU_FUN_AUDOIMUTE)>>4 == OSD_MAIN_MENU_ITEM)
							{
							
								OsdFuncClearOsd(_ITEM_1_ROW+(OSD_ITEM(_MENU_FUN_AUDOIMUTE)&0x0f)*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_SLIDER+1, 12 , 1);					 
								RTDOsdTableFuncPutStringCenter(_ITEM_1_ROW+(OSD_ITEM(_MENU_FUN_AUDOIMUTE)&0x0f)*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_SLIDER+1, _OSD_ITEM_COL_SLIDER+12, _PFONT_PAGE_ITEM_1 + (OSD_ITEM(_MENU_FUN_AUDOIMUTE)&0x0f), 
									(OsdStateDefine((OSD_ITEM(_MENU_FUN_AUDOIMUTE)>>4),(OSD_ITEM(_MENU_FUN_AUDOIMUTE)&0x0f))),	GetOsdValue(OsdStateDefine((OSD_ITEM(_MENU_FUN_AUDOIMUTE)>>4),(OSD_ITEM(_MENU_FUN_AUDOIMUTE)&0x0f))),
									COLOR(_COLOR_MENU_FONT, _CP_BG), 0, GET_OSD_LANGUAGE()); 		
							
							}
						}
						UserAdjustAudioMuteSwitch();
					}
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
					
					break;	

				case _MENU_FUN_SATURATION:	
					
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 200, 0, 100);
					g_usAdjustValue = (BYTE)OsdDisplayDetOverRange(g_usAdjustValue, 100, 0, _OFF);
					SET_OSD_SATURATION(UserCommonAdjustPercentToRealValue(g_usAdjustValue, 200, 0, 100));
#if(_GLOBAL_HUE_SATURATION == _ON)
					UserAdjustGlobalHueSat((SWORD)GET_OSD_HUE(), GET_OSD_SATURATION());
#endif
					
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
					break;	
					
				default :

					break;
			}
	}
	else
	{
		switch(ucOsdState)
			{
				case _MENU_FUN_SHARPNESS:				
					ucShowMax = 4;
					ucShowMin = 0;	  
					break;
					
				case _MENU_FUN_DCC:				
					ucShowMax = 20;
					ucShowMin = 0;	  
					break;
					
				case _MENU_FUN_R:	
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_R);
					break;

				case _MENU_FUN_G:	
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_G); 		
					break;
					
				case _MENU_FUN_B:	
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 255, 0, _DEF_CT_USER_OSD_B);
					break;
					
				case _MENU_FUN_OSD_TIME:			
					ucShowMax = 60;
					ucShowMin = 0;	  				
					break;

				case _MENU_FUN_OSD_TRANS:				
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 160, 0, 80);
					break;

					
				case _MENU_FUN_SATURATION:	
					g_usAdjustValue = UserCommonAdjustRealValueToPercent(g_usAdjustValue, 200, 0, 100);
					break;

					
				default :

					break;
			}


	}
	
	ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
	RTDOsdDisplaySlider(ucItemRow, COL(ucPagePositionSelect), LENGTH(14), g_usAdjustValue, ucShowMax, ucShowMin, ucColor);
	OsdPropShowNumber(ucItemRow, COL(ucPagePositionSelect + LENGTH(14)), g_usAdjustValue, (_ALIGN_LEFT | _FORCE_SHOW_NUMBER_OFF | _SHOW_3), ucPFnotPageItem, ucColor);


}

//--------------------------------------------------
// Description  :
// Input Value  :
// Output Value :
//--------------------------------------------------
#if !_MEW_OSD_FONT
void RTDOsdFuncSetMapRowHeight(BYTE ucMapHeight)
{
	BYTE ucTmp;

	for(ucTmp = 0; ucTmp < ucMapHeight; ucTmp++)
	{
		if(ucTmp == 5)
			ScalerOsdCommandByte(ucTmp, _OSD_BYTE1, 0);     
		else if(ucTmp == 8)
			ScalerOsdCommandByte(ucTmp, _OSD_BYTE1, 0);     
		else if(ucTmp == 11)
			ScalerOsdCommandByte(ucTmp, _OSD_BYTE1, 0);     
		else if(ucTmp == 14)
			ScalerOsdCommandByte(ucTmp, _OSD_BYTE1, 0);     
		else if(ucTmp == 17)
			ScalerOsdCommandByte(ucTmp, _OSD_BYTE1, 0);     
		else if(ucTmp == 21)
			ScalerOsdCommandByte(ucTmp, _OSD_BYTE1, 0); 	
		else	
			ScalerOsdCommandByte(ucTmp, _OSD_BYTE1, 17);     				
	}

	// Row Command end
	ScalerOsdCommandByte(ucMapHeight, _OSD_BYTE0, 0x00);
}
#endif
//--------------------------------------------------
// Description  :更新图标
// Input Value  :
// Output Value :
//--------------------------------------------------

void UpdateOSDMainIcon(void)
{
    #if(_ENABLE_MAIN_MENU_F_ICON == _ON)
    if(GET_OSD_STATE() != _OSD_MAIN_F)
	#endif
	RTDOsdTableFuncPutStringCenter(_TITLE_ROW_START, _TITLE_COL_START, _TITLE_COL_END, _PFONT_PAGE_0, _OSD_STRING_TITLE, GET_OSD_STATE() - _OSD_MAIN_PICTURE,COLOR(_CP_WHITE, _CP_BG), _TITLE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 
	#if _MEW_OSD_FONT
		if(GET_OSD_STATE()==_OSD_MAIN_PICTURE)
			OsdFontPut2BitTable(ROW(_ITEM_1_ROW-1), COL(0), tiOSD_MAIN_BIR_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_BLACK) ,COLOR2(_CP_YELLOW) ,COLOR3(_CP_WHITE));
		else
			OsdFontPut2BitTable(ROW(_ITEM_1_ROW-1), COL(0), tiOSD_MAIN_BIR_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_BLACK) ,COLOR2(_CP_YELLOW) ,COLOR3(_CP_WHITE));
	
		if(GET_OSD_STATE()==_OSD_MAIN_DISPLAY)
			OsdFontPut2BitTable(ROW(_ITEM_2_ROW-1), COL(0), tiOSD_MAIN_IMAGE_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_WHITE) ,COLOR3(_CP_DARKBLUE));
		else
			OsdFontPut2BitTable(ROW(_ITEM_2_ROW-1), COL(0), tiOSD_MAIN_IMAGE_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_WHITE) ,COLOR3(_CP_DARKBLUE));
	
		if(GET_OSD_STATE()==_OSD_MAIN_COLORTEMP)
			OsdFontPut2BitTable(ROW(_ITEM_3_ROW-1), COL(0), tiOSD_MAIN_COLORTEMP_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_GREEN) ,COLOR3(_CP_BLUE));
		else
			OsdFontPut2BitTable(ROW(_ITEM_3_ROW-1), COL(0), tiOSD_MAIN_COLORTEMP_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_GREEN) ,COLOR3(_CP_BLUE));
	
		if(GET_OSD_STATE()==_OSD_MAIN_OSDSETTING)
#if (_OSD_BLACK_WHITE_TYPE==_ON)
			OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_GRAY) ,COLOR3(_CP_LIGHTBLUE));
#else
			OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_LIGHTBLUE));
#endif
		else
#if (_OSD_BLACK_WHITE_TYPE==_ON)
			OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_GRAY) ,COLOR3(_CP_LIGHTBLUE));
#else
			OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_LIGHTBLUE));
#endif
	
		if(GET_OSD_STATE()==_OSD_MAIN_RESET)
			OsdFontPut2BitTable(ROW(_ITEM_5_ROW-1), COL(0), tiOSD_MAIN_RESET_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_BLUE));
		else
			OsdFontPut2BitTable(ROW(_ITEM_5_ROW-1), COL(0), tiOSD_MAIN_RESET_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_BLUE));
	
		if(GET_OSD_STATE()==_OSD_MAIN_MISC)
			OsdFontPut2BitTable(ROW(_ITEM_6_ROW-1), COL(0), tiOSD_MAIN_MISC_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_DARKBLUE) ,COLOR3(_CP_BLACK));
		else
			OsdFontPut2BitTable(ROW(_ITEM_6_ROW-1), COL(0), tiOSD_MAIN_MISC_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_DARKBLUE) ,COLOR3(_CP_BLACK));

	#else
	if(GET_OSD_STATE()==_OSD_MAIN_PICTURE)
		OsdFontPut2BitTable(ROW(_ITEM_1_ROW-1), COL(0), tiOSD_MAIN_BIR_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_BLACK) ,COLOR2(_CP_YELLOW) ,COLOR3(_CP_WHITE));
	else
		OsdFontPut2BitTable(ROW(_ITEM_1_ROW-1), COL(0), tiOSD_MAIN_BIR_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_BLACK) ,COLOR2(_CP_YELLOW) ,COLOR3(_CP_WHITE));

	if(GET_OSD_STATE()==_OSD_MAIN_DISPLAY)
		OsdFontPut2BitTable(ROW(_ITEM_2_ROW-1), COL(0), tiOSD_MAIN_IMAGE_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_WHITE) ,COLOR3(_CP_DARKBLUE));
	else
		OsdFontPut2BitTable(ROW(_ITEM_2_ROW-1), COL(0), tiOSD_MAIN_IMAGE_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_WHITE) ,COLOR3(_CP_DARKBLUE));

	if(GET_OSD_STATE()==_OSD_MAIN_COLORTEMP)
		OsdFontPut2BitTable(ROW(_ITEM_3_ROW-1), COL(0), tiOSD_MAIN_COLORTEMP_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_GREEN) ,COLOR3(_CP_BLUE));
	else
		OsdFontPut2BitTable(ROW(_ITEM_3_ROW-1), COL(0), tiOSD_MAIN_COLORTEMP_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_RED) ,COLOR2(_CP_GREEN) ,COLOR3(_CP_BLUE));

	if(GET_OSD_STATE()==_OSD_MAIN_OSDSETTING)
#if (_OSD_BLACK_WHITE_TYPE==_ON)
		OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_GRAY) ,COLOR3(_CP_LIGHTBLUE));
#else
		OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_LIGHTBLUE));
#endif
	else
#if (_OSD_BLACK_WHITE_TYPE==_ON)
		OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_GRAY) ,COLOR3(_CP_LIGHTBLUE));
#else
		OsdFontPut2BitTable(ROW(_ITEM_4_ROW-1), COL(0), tiOSD_MAIN_OSDSETTING_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_LIGHTBLUE));
#endif

	if(GET_OSD_STATE()==_OSD_MAIN_RESET)
		OsdFontPut2BitTable(ROW(_ITEM_5_ROW-1), COL(0), tiOSD_MAIN_RESET_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_BLUE));
	else
		OsdFontPut2BitTable(ROW(_ITEM_5_ROW-1), COL(0), tiOSD_MAIN_RESET_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_BLACK) ,COLOR3(_CP_BLUE));

	if(GET_OSD_STATE()==_OSD_MAIN_MISC)
		OsdFontPut2BitTable(ROW(_ITEM_6_ROW-1), COL(0), tiOSD_MAIN_MISC_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_SELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_DARKBLUE) ,COLOR3(_CP_BLACK));
	else
		OsdFontPut2BitTable(ROW(_ITEM_6_ROW-1), COL(0), tiOSD_MAIN_MISC_ICON, (_PALETTE_INDEX0 << 4) | COLOR0(_ICON_UNSELECT_BACK_COLOR0) ,COLOR1(_CP_WHITE) ,COLOR2(_CP_DARKBLUE) ,COLOR3(_CP_BLACK));
	#endif
	#if(_ENABLE_MAIN_MENU_F_ICON == _ON)
    if(GET_OSD_STATE() != _OSD_MAIN_F&&GET_OSD_FACTORY_MODE())
		OsdFontPut1BitTable(ROW(0), COL(0), tOSD_Factory_F, COLOR(_CP_WHITE, _CP_BG) , 0);
	else if(GET_OSD_STATE() == _OSD_MAIN_F)
		OsdFontPut1BitTable(ROW(0), COL(0), tOSD_Factory_F, COLOR(_CP_RED, _CP_BG) , 0);
	//else
	//	OsdFuncClearOsd(ROW(0), COL(0), WIDTH(1), HEIGHT(1));
	#endif
}

void OsdGameModeInputLow(void)
{
ScalerTimerDelayXms(150);
	
	#if((_D0_INPUT_PORT_TYPE == _D0_DP_PORT)&&((_DEF_GAME_MODE==_ON)||(_DEF_DP_OVERCLOCK==_ON)))		
							
	
						if(!PCB_D0_PIN())
						{
							PCB_D0_HOTPLUG(_D0_HOT_PLUG_LOW);
	
						}
	#elif((_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D0_PIN())
						{
							PCB_D0_HOTPLUG(_D0_HOT_PLUG_LOW);
	
						}
	#elif((_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D0_PIN())
					{
						PCB_D0_HOTPLUG(_D0_HOT_PLUG_LOW);

					}
	#endif

	#if((_D1_INPUT_PORT_TYPE == _D1_DP_PORT)&&((_DEF_GAME_MODE==_ON)||(_DEF_DP_OVERCLOCK==_ON)))		
							
	
						if(!PCB_D1_PIN())
						{
							PCB_D1_HOTPLUG(_D1_HOT_PLUG_LOW);
	
						}
	#elif((_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D1_PIN())
						{
							PCB_D1_HOTPLUG(_D1_HOT_PLUG_LOW);
	
						}
	#elif((_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D1_PIN())
					{
						PCB_D1_HOTPLUG(_D1_HOT_PLUG_LOW);

					}
	#endif

	#if((_D2_INPUT_PORT_TYPE == _D2_DP_PORT)&&((_DEF_GAME_MODE==_ON)||(_DEF_DP_OVERCLOCK==_ON)))		
							
	
						if(!PCB_D2_PIN())
						{
							PCB_D2_HOTPLUG(_D2_HOT_PLUG_LOW);
	
						}
	#elif((_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D2_PIN())
						{
							PCB_D2_HOTPLUG(_D2_HOT_PLUG_LOW);
	
						}
	#elif((_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D2_PIN())
					{
						PCB_D2_HOTPLUG(_D2_HOT_PLUG_LOW);

					}
	#endif
	
	#if((_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D3_PIN())
						{
							PCB_D3_HOTPLUG(_D3_HOT_PLUG_LOW);
	
						}
	#elif((_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D3_PIN())
					{
						PCB_D3_HOTPLUG(_D3_HOT_PLUG_LOW);

					}
	#endif
						
}

void OsdGameModeInputHigh(void)
{
ScalerTimerDelayXms(150);
	
	#if((_D0_INPUT_PORT_TYPE == _D0_DP_PORT)&&((_DEF_GAME_MODE==_ON)||(_DEF_DP_OVERCLOCK==_ON)))		
							
	
						if(!PCB_D0_PIN())
						{
							PCB_D0_HOTPLUG(_D0_HOT_PLUG_HIGH);
	
						}
	#elif((_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D0_PIN())
						{
							PCB_D0_HOTPLUG(_D0_HOT_PLUG_HIGH);
	
						}
	#elif((_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D0_PIN())
					{
						PCB_D0_HOTPLUG(_D0_HOT_PLUG_HIGH);

					}
	#endif

	#if((_D1_INPUT_PORT_TYPE == _D1_DP_PORT)&&((_DEF_GAME_MODE==_ON)||(_DEF_DP_OVERCLOCK==_ON)))		
							
	
						if(!PCB_D1_PIN())
						{
							PCB_D1_HOTPLUG(_D1_HOT_PLUG_HIGH);
	
						}
	#elif((_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D1_PIN())
						{
							PCB_D1_HOTPLUG(_D1_HOT_PLUG_HIGH);
	
						}
	#elif((_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D1_PIN())
					{
						PCB_D1_HOTPLUG(_D1_HOT_PLUG_HIGH);

					}
	#endif

	#if((_D2_INPUT_PORT_TYPE == _D2_DP_PORT)&&((_DEF_GAME_MODE==_ON)||(_DEF_DP_OVERCLOCK==_ON)))		
							
	
						if(!PCB_D2_PIN())
						{
							PCB_D2_HOTPLUG(_D2_HOT_PLUG_HIGH);
	
						}
	#elif((_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D2_PIN())
						{
							PCB_D2_HOTPLUG(_D2_HOT_PLUG_HIGH);
	
						}
	#elif((_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D2_PIN())
					{
						PCB_D2_HOTPLUG(_D2_HOT_PLUG_HIGH);

					}
	#endif
	
	#if((_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_DEF_GAME_MODE==_ON)&&(_DEF_DP_GAME_MODE==_OFF))			
							
	
						if(!PCB_D3_PIN())
						{
							PCB_D3_HOTPLUG(_D3_HOT_PLUG_HIGH);
	
						}
	#elif((_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_DEF_HDMI_OVERCLOCK==_ON))			
		

					if(!PCB_D3_PIN())
					{
						PCB_D3_HOTPLUG(_D3_HOT_PLUG_HIGH);

					}
	#endif
						
}

//--------------------------------------------------
// Description  :更新主界面
// Input Value  :
// Output Value :
//--------------------------------------------------

void UpdateOSDMainInterface(BYTE ucState)
{
	BYTE i = 0;
	
	SET_OSD_STATE(ucState);
	OSD_MAIN_MENU_ITEM = ucState - _OSD_MAIN_PICTURE;

	OsdFuncClearOsd(ROW(1), COL(7), WIDTH(_OSD_MAIN_MENU_WIDTH-7), HEIGHT(_OSD_MAIN_MENU_HEIGHT-4));
	
	UpdateOSDMainIcon();

    #if(_ENABLE_MAIN_MENU_F_ICON == _ON)
	if(ucState != _OSD_MAIN_F)
	#endif
	{
		UpdateMaskValue();
		OSD_SubMenuCur = 0;
		for(i=0; i<6; i++)
		{
			if(OsdStateDefine(OSD_MAIN_MENU_ITEM,i) == _MENU_NULL)
			{
				OSD_MASKSET(OSD_MAIN_MENU_ITEM,i);	
			}
			else
			{
				//SG_PutStringProp(_ITEM_1_ROW+i*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START, _PFONT_PAGE_1, _OSD_STRING_ITEM, OsdStateDefine(OSD_MAIN_MENU_ITEM,i), COLOR(_COLOR_MENU_FONT, _CP_BG),GET_OSD_LANGUAGE());
				
				SG_PutStringProp(_ITEM_1_ROW+i*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START, _PFONT_PAGE_1, _OSD_STRING_ITEM, OsdStateDefine(OSD_MAIN_MENU_ITEM,i), 
					COLOR((OSD_ITEM_MASK_GET(OsdStateDefine(OSD_MAIN_MENU_ITEM,i))? _COLOR_MENU_FONT_GRAY : _COLOR_MENU_FONT), _CP_BG),GET_OSD_LANGUAGE());
			}
		}
#if(!_OSD_SHOW_SYNC)
	//show timing information
	if((ucState == _OSD_MAIN_MISC) && (OsdStateDefine(5,5) == _MENU_NULL))
	{
		RTDOsdTableFuncPutStringCenter(ROW(_ITEM_6_ROW), COL(_OSD_ITEM_COL_START+5), COL(_OSD_ITEM_COL_START + 26), _PFONT_PAGE_1, _OSD_STRING_NOW_RESOLUTION, 0, COLOR(_COLOR_MENU_FONT,_CP_BG), 0, _ENGLISH);
		
	#if(_HDR10_SUPPORT == _ON && _MENU_INFOR_SHOW_HDR == _ON)	
		if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(GET_HDR10_EOTF_SETTING() == _HDR_TARGET_STATUS_SMPTE_ST_2084))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
		{
			RTDOsdTableFuncPutStringCenter(ROW(_ITEM_6_ROW), COL(_OSD_ITEM_COL_START + 26), COL(_OSD_ITEM_COL_START + 29), _PFONT_PAGE_1, _OSD_STRING_HDR, 0, COLOR(_COLOR_MENU_FONT,_CP_BG), 0, _ENGLISH);

		}
	#endif

	}
	
#endif
	//UpdateMaskValue();
	}
}
//--------------------------------------------------
// Description  :
// Input Value  :
// Output Value :
//--------------------------------------------------
void SpecialFuncAdj(void)
{
	BYTE i = 0;
	BYTE freesync_status=GET_OSD_FREE_SYNC_STATUS();
#if(!_DEF_OSD_LANGUAGE_ARROW) 
	switch(GET_OSD_STATE())
	{
		case _MENU_FUN_LANGUAGE:			
			OsdFuncClearOsd(ROW(1), COL(7), WIDTH(_OSD_MAIN_MENU_WIDTH-7), HEIGHT(_OSD_MAIN_MENU_HEIGHT-4));
			RTDOsdTableFuncPutStringCenter(_TITLE_ROW_START, _TITLE_COL_START, _TITLE_COL_END, _PFONT_PAGE_0, _OSD_STRING_TITLE, 6,COLOR(_CP_WHITE, _CP_BG), _TITLE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 
			for(i = 0; i <=_LANGUAGE_AMOUNT; i++)
			{
			#if(Project_ID==ID_CH_HK2556E02DP1HDMI__BOE_MV238QHM_N10_LVDS_QHD75HZ_20210115)
                RTDOsdTableFuncPutStringProp(_ITEM_1_ROW + (i/4)* _OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START+(i%4)* 9, _PFONT_PAGE_1, _MENU_FUN_LANGUAGE, i, COLOR(_COLOR_MENU_FONT, _CP_BG), _ENGLISH);
            #else
				#if(_DEF_OSD_LANGUAGE_PAGE_RANK_4x6)
					RTDOsdTableFuncPutStringProp(_ITEM_1_ROW + (i%6)* _OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START+(i/6)* 8+1, _PFONT_PAGE_1, _MENU_FUN_LANGUAGE_SUB, i, COLOR(_COLOR_MENU_FONT, _CP_BG), _ENGLISH);
				#else
					RTDOsdTableFuncPutStringProp(_ITEM_1_ROW + (i/4)* _OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START+(i%4)* 9, _PFONT_PAGE_1, _MENU_FUN_LANGUAGE_SUB, i, COLOR(_COLOR_MENU_FONT, _CP_BG), _ENGLISH);
				#endif
	
            #endif
            }
			SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
			break;		
	}

	
#endif
	switch(GET_OSD_STATE_PREVIOUS())
	{
		case _MENU_FUN_FREESYNC:
			if((GET_KEYMESSAGE() == _MENU_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{
				#if(_FREESYNC_SUPPORT == _ON)
					UserCommonInterfaceFreeSyncSupportSwitch();
				#endif	
			}
			else if((GET_KEYMESSAGE() == _EXIT_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{			
				Osd3thChange(GET_OSD_STATE_PREVIOUS());
				SET_OSD_FREE_SYNC_STATUS(g_usBackupValue);
			}
			SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
			
			break;

		case _MENU_FUN_SIGNAL:
		
			if((GET_KEYMESSAGE() == _MENU_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{
			
#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)||(Project_ID == ID_CW_HK2556E18_2T1H_SN238CS041_LVDS_FDH60HZ_20230522)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
			
				g_SouceSelect = 0;
#endif
				SET_FORCE_POW_SAV_STATUS(_FALSE);
				SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
		
				#if(_SOURCE_AUTO_ON)
				if(GET_OSD_INPUT_PORT_OSD_ITEM() == _OSD_INPUT_AUTO)
				{
					SysSourceSetScanType(_SOURCE_SWITCH_AUTO_IN_GROUP);
					
					if(UserCommonNVRamGetSystemData(_SOURCE_SCAN_TYPE) != SysSourceGetScanType())
					{
						UserCommonNVRamSetSystemData(_SOURCE_SCAN_TYPE, SysSourceGetScanType());
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG);
					}
				}
				else
				{		
					SysSourceSwitchInputPort(OsdFuncGetOsdItemFlag());
					SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
					if((UserCommonNVRamGetSystemData(_SEARCH_PORT) != SysSourceGetInputPort()) ||
					   (UserCommonNVRamGetSystemData(_SOURCE_SCAN_TYPE) != SysSourceGetScanType()))
					{
						UserCommonNVRamSetSystemData(_SEARCH_PORT, SysSourceGetInputPort());
						UserCommonNVRamSetSystemData(_SOURCE_SCAN_TYPE, SysSourceGetScanType());
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG);
					}
				}
				#else					
				SysSourceSwitchInputPort(OsdFuncGetOsdItemFlag());
			#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)
				if(GET_OSD_BURNING_MODE())
					SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
				else
			#endif
				SysSourceSetScanType(_SOURCE_SWITCH_AUTO_IN_GROUP);
				if((UserCommonNVRamGetSystemData(_SEARCH_PORT) != SysSourceGetInputPort()) ||
				   (UserCommonNVRamGetSystemData(_SOURCE_SCAN_TYPE) != SysSourceGetScanType()))
				{
					UserCommonNVRamSetSystemData(_SEARCH_PORT, SysSourceGetInputPort());
					UserCommonNVRamSetSystemData(_SOURCE_SCAN_TYPE, SysSourceGetScanType());
					SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG);
				}						
				#endif   			
			}
			else if((GET_KEYMESSAGE() == _EXIT_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{			
				Osd3thChange(GET_OSD_STATE_PREVIOUS());
				SET_OSD_INPUT_PORT_OSD_ITEM(g_usBackupValue);
			}
		
			SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
			break;
#if(!_DEF_OSD_LANGUAGE_ARROW) 

		case _MENU_FUN_LANGUAGE:
		
			OsdFuncClearOsd(ROW(1), COL(7), WIDTH(_OSD_MAIN_MENU_WIDTH-7), HEIGHT(_OSD_MAIN_MENU_HEIGHT-4));					
			RTDOsdTableFuncPutStringCenter(_TITLE_ROW_START, _TITLE_COL_START, _TITLE_COL_END, _PFONT_PAGE_0, _OSD_STRING_TITLE, OSD_MAIN_MENU_ITEM - _OSD_MAIN_PICTURE+1,COLOR(_CP_WHITE, _CP_BG), _TITLE_PIXEL_OFFSET, GET_OSD_LANGUAGE()); 

			for(i=0; i<6; i++)
			{
				if(OsdStateDefine(OSD_MAIN_MENU_ITEM,i) == _MENU_NULL)
				{
#if 1//!_DEF_OSD_2525
					OSD_MASKSET(OSD_MAIN_MENU_ITEM,i);	
#endif
				}
				else
				{
					SG_PutStringProp(_ITEM_1_ROW+i*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START, _PFONT_PAGE_1, _OSD_STRING_ITEM, OsdStateDefine(OSD_MAIN_MENU_ITEM,i), COLOR(_COLOR_MENU_FONT, _CP_BG),GET_OSD_LANGUAGE());
				}
			}
			UpdateMaskValue();
			SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
			break;	
#endif

		case _MENU_FUN_OVERCLOCK:
			
			if((GET_KEYMESSAGE() == _MENU_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{
				//UserCommonInterfaceLoadEmbeddedEdidData();
			#if(_DEF_GAME_MODE)	
				SET_OSD_FREE_SYNC_STATUS(_OFF);
			#if(_FREESYNC_SUPPORT == _ON)
				UserCommonInterfaceFreeSyncSupportSwitch();
			#endif	
			#endif

				OsdGameModeInputLow();
			#if(_EMBEDDED_EDID_SUPPORT == _ON)
				UserCommonInterfaceLoadEmbeddedEdidData();
			#endif				
				OsdGameModeInputHigh();
     
			#if(_DEF_GAME_MODE)&&(!_DEF_GAME_FREESYNC)	
			    SET_OSD_FREE_SYNC_STATUS(freesync_status);
			#if(_FREESYNC_SUPPORT == _ON)
				UserCommonInterfaceFreeSyncSupportSwitch();
			#endif	
			#endif
			}
			else if((GET_KEYMESSAGE() == _EXIT_KEY_MESSAGE) && (g_usBackupValue != g_usAdjustValue))
			{			
				Osd3thChange(GET_OSD_STATE_PREVIOUS());
				SET_OSD_OVERCLOCK(g_usBackupValue);
			}
			SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
			break;
	}
	
}

//--------------------------------------------------
// Description  :
// Input Value  :
// Output Value :
//--------------------------------------------------
void OSDSubMenuMove1(void)
{
	BYTE i = OSD_SubMenuCur; 
	BYTE count = 6;
	WORD WinRowStartX = 0,WinRowEndX = 1,WinRowStartY = 0,WinRowEndY = 1;
	BYTE enable = _ENABLE;
	
	if((_MENU_PICTURE_TATE0 <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5) && GET_KEYMESSAGE() == _MENU_KEY_MESSAGE)
	{
		g_usAdjustValue = GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur));
		DebugMessageOsd("g_usAdjustValue1",g_usAdjustValue);
		g_usBackupValue = GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur));
	}	
	
	while(count--)
	{
		if(GET_KEYMESSAGE() == _LEFT_KEY_MESSAGE)
		{
			if(i == 5)
			{
				i = 0;
			}
			else
			{
				i++;
			}
				
			if(OSD_MASK(OSD_MAIN_MENU_ITEM,i) == 0 && OsdStateDefine(OSD_MAIN_MENU_ITEM,i)!=_MENU_NULL)
			{
				OSD_SubMenuCur = i;
				SET_OSD_STATE(_MENU_PICTURE_TATE0+OSD_MAIN_MENU_ITEM*6+OSD_SubMenuCur); 				

				break;
			}
			
		}
		else if(GET_KEYMESSAGE() == _RIGHT_KEY_MESSAGE)
		{
			if(i == 0)
			{
				i = 5;
			}
			else
			{
				i--;
			}
				
			if(OSD_MASK(OSD_MAIN_MENU_ITEM,i) == 0 && OsdStateDefine(OSD_MAIN_MENU_ITEM,i)!=_MENU_NULL)
			{
				OSD_SubMenuCur = i;
				SET_OSD_STATE(_MENU_PICTURE_TATE0+OSD_MAIN_MENU_ITEM*6+OSD_SubMenuCur); 		

				break;
			}	
		}
		else if(GET_KEYMESSAGE() == _MENU_KEY_MESSAGE)
		{	
			if(OSD_MASK(OSD_MAIN_MENU_ITEM,i) == 0 && OsdStateDefine(OSD_MAIN_MENU_ITEM,i)!=_MENU_NULL)
			{
				OSD_SubMenuCur = i;
				if((_MENU_PICTURE_TATE0 <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))		
				{
				#if 1
					if((GetOsdShowType(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)) == _TYPE_NONE))
					{
						//OsdFuncAdj();						
						return ;
					}
					/*else if(GetOsdShowType(OsdStateDefine[OSD_MAIN_MENU_ITEM][OSD_SubMenuCur])  == _TYPE_SUBMENU)
					{						
						OsdFuncAdj();						
						SET_OSD_STATE(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur));			
					}*/
					else
					{						
						SET_OSD_STATE(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur));			
					}
				#endif
				}
				else	
				{
					SET_OSD_STATE(_MENU_PICTURE_TATE0+OSD_MAIN_MENU_ITEM*6+OSD_SubMenuCur); 		
				}
				break;			
			}
			
			if(i == 5)
			{
				i = 0;
			}
			else
			{
				i++;
			}
	 	}		
		else if(GET_KEYMESSAGE() == _EXIT_KEY_MESSAGE)
		{			
			if((_MENU_PICTURE_TATE0 <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))
			{
				enable = _DISABLE;				
			#if(_OSD_RECALL_FUNC == _OFF)
				OSD_SubMenuCur = 0;
			#endif
				SET_OSD_STATE(_OSD_MAIN_PICTURE+OSD_MAIN_MENU_ITEM);	
			}
			else
			{
				SET_OSD_STATE(_MENU_PICTURE_TATE0+OSD_MAIN_MENU_ITEM*6+OSD_SubMenuCur);	
			}
				break;			
		}

		
	}

	if((_MENU_PICTURE_TATE0 <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))
	{
		WinRowStartX = _OSD_WINDOW_X_START;
		WinRowEndX   = _OSD_WINDOW_X_END1;
		WinRowStartY = _OSD_WINDOW_Y_START+OSD_SubMenuCur*36;
		WinRowEndY   = _OSD_WINDOW_Y_END+OSD_SubMenuCur*36;
		if(GetOsdShowType(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)) == _TYPE_NONE)
		{
			WinRowEndX   = _OSD_WINDOW_X_END2;
		}
	}
	else if((_MENU_FUN_BACKLIGHT <= GET_OSD_STATE()) && (GET_OSD_STATE() < _MENU_NULL))
	{	

		switch(GetOsdShowType(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)))
		{
			case _TYPE_NONE:
		    case _TYPE_ARROW:
		    case _TYPE_SLIDER:
				WinRowStartX = _OSD_WINDOW_X_START;
				WinRowEndX	 = _OSD_WINDOW_X_END2;
				WinRowStartY = _OSD_WINDOW_Y_START+OSD_SubMenuCur*36;
				WinRowEndY	 = _OSD_WINDOW_Y_END+OSD_SubMenuCur*36;

			break;

        #if(Project_ID == ID_CH_HK2556E02DP1HDMI__BOE_MV238QHM_N10_LVDS_QHD75HZ_20210115)
            case _TYPE_SUBMENU:
                WinRowStartX = _OSD_WINDOW_X_START + (GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur))%4)*108;//132
                WinRowEndX  = WinRowStartX +72;
                WinRowStartY = _OSD_WINDOW_Y_START+((GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur))/4))*36;
                WinRowEndY  = WinRowStartY + 18;        
        #else
			
			case _TYPE_SUBMENU:
		#if(_DEF_OSD_LANGUAGE_PAGE_RANK_4x6)
				WinRowStartX = _OSD_WINDOW_X_START + (GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur))/6)*(8*12)+12;//108;//132
				WinRowEndX	= WinRowStartX +12*7;//72;
				WinRowStartY = _OSD_WINDOW_Y_START+(GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur))%6)*36;
				WinRowEndY	= WinRowStartY + 18;
		#else
				WinRowStartX = _OSD_WINDOW_X_START + ((GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)) - GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur))%5)%4)*108;//132
				WinRowEndX	= WinRowStartX +72+4;
				WinRowStartY = _OSD_WINDOW_Y_START+(GetOsdValue(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur))%5)*36;
				WinRowEndY	= WinRowStartY + 18;
		#endif
			break;
        #endif
		}
	}

#if 0//!_MEW_OSD_FONT
	if(GET_OSD_ROTATE_STATUS())
	{
		WinRowStartY += 102;
		WinRowEndY += 102;
	}
#endif
	
	{
		OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, WinRowStartX, WinRowStartY, WinRowEndX, WinRowEndY, _COLOR_BG_3, _COLOR_MENU_FONT_SELECT, _CP_BG, enable);	
	}
	SpecialFuncAdj();
	
}
void OSDSubMenuMove(void)
{
	BYTE i = OSD_SubMenuCur; 
	if(GET_KEYMESSAGE() == _MENU_KEY_MESSAGE)
	{	
		if(OSD_MASK(OSD_MAIN_MENU_ITEM,i) == 0 && OsdStateDefine(OSD_MAIN_MENU_ITEM,i)!=_MENU_NULL)
		{
			OSD_SubMenuCur = i;
			if((_MENU_PICTURE_TATE0 <= GET_OSD_STATE()) && (GET_OSD_STATE() <= _MENU_MISC_TATE5))		
			{
				if((GetOsdShowType(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur)) == _TYPE_NONE))
				{
					OsdFuncAdj();						
					return ;
				}
				else
				{						
				//	SET_OSD_STATE(OsdStateDefine(OSD_MAIN_MENU_ITEM,OSD_SubMenuCur));			
				}
			}
			else	
			{
				//SET_OSD_STATE(_MENU_PICTURE_TATE0+OSD_MAIN_MENU_ITEM*6+OSD_SubMenuCur); 		
			}
		}
	}		

	OSDSubMenuMove1();

}


//--------------------------------------------------
// Description  :初始化OSD_ITEM_BASE数组，方便后续功能定位。
// Input Value  :
// Output Value :
//--------------------------------------------------
void UpdateMaskItem(void)
{
#if !_DEF_OSD_2525
	BYTE i,j;
	
	memset(OSD_ITEM_BASE, 0xff, sizeof(OSD_ITEM_BASE));
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(OsdStateDefine(i,j) != _MENU_NULL)
			{
				OSD_ITEM(OsdStateDefine(i,j)) = ((i<<4) | j);								
			}
			else
			{
				OSD_MASKSET(i,j);	
			}
		}
	}
#endif
}
//--------------------------------------------------
// Description  :	逻辑列表，可以添加规则  暂时只给hotkey使用
// Input Value  :
// Output Value :
//--------------------------------------------------
#if 0
void UpdateItemMaskValue(void)
{
	BYTE i = 0;
	
#if((_HDR10_SUPPORT == _OFF)&&((_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6369_PROJECT)))
	BYTE pucHDRInfoData[_HW_DP_INFOFRAME_RSV0_LENGTH];
#endif
	memcpy(OSD_ITEM_MASK,0,sizeof(OSD_ITEM_MASK));
	
#if((_HDR10_SUPPORT == _OFF)&&((_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6369_PROJECT)))
	ScalerGetHDR10Data_MOCK(pucHDRInfoData);
	if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(pucHDRInfoData[0] == 1)&&(pucHDRInfoData[1] == 0x1A)&&(pucHDRInfoData[2] == 2))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
#elif(_HDR10_SUPPORT == _ON)	
	if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(GET_HDR10_EOTF_SETTING() == _HDR_TARGET_STATUS_SMPTE_ST_2084))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))

#else
	if(0)
#endif
	{
#if 1//(_OSD_POWER_SAVING_MODE)
		OSD_ITEM_MASK_SET(_MENU_FUN_POWER_SAVING);		
#endif
		OSD_ITEM_MASK_SET(_MENU_FUN_SATURATION);		
		OSD_ITEM_MASK_SET(_MENU_FUN_BACKLIGHT);		
		OSD_ITEM_MASK_SET(_MENU_FUN_CONTRAST);		
		OSD_ITEM_MASK_SET(_MENU_FUN_BRIGHTNESS); 	
		OSD_ITEM_MASK_SET(_MENU_FUN_SHARPNESS);
		OSD_ITEM_MASK_SET(_MENU_FUN_ECO);		
		OSD_ITEM_MASK_SET(_MENU_FUN_DCR);
		OSD_ITEM_MASK_SET(_MENU_FUN_GAMMA);
		OSD_ITEM_MASK_SET(_MENU_FUN_COLORGAMUT);
		OSD_ITEM_MASK_SET(_MENU_FUN_LOWBLUE);
		OSD_ITEM_MASK_SET(_MENU_FUN_DCC);
		OSD_ITEM_MASK_SET(_MENU_FUN_COLORTEMP);
		OSD_ITEM_MASK_SET(_MENU_FUN_MPRT);
#if(_DEF_ECO_ICON)
		
		OSD_ITEM_MASK_SET(_MENU_FUN_ECO_ICON);
#endif
	}
	
	if(GET_COLOR_TEMP_TYPE() != _CT_USER)
	{
		OSD_ITEM_MASK_SET(_MENU_FUN_R); 	
		OSD_ITEM_MASK_SET(_MENU_FUN_G); 	
		OSD_ITEM_MASK_SET(_MENU_FUN_B); 		
	}
		
#if(_DEF_DCR_ECO_GRAY)
	if((GET_OSD_COLOR_EFFECT()!= _COLOREFFECT_STANDARD))
	{
		OSD_ITEM_MASK_SET(_MENU_FUN_DCR);	
		
	}

	if(GET_OSD_DCR_STATUS() != _OFF)
	{
		OSD_ITEM_MASK_SET(_MENU_FUN_ECO);	
	}
#endif
	if((GET_OSD_COLOR_EFFECT()!= _COLOREFFECT_STANDARD)||(GET_OSD_DCR_STATUS() != _OFF))
	{
#if(_OSD_POWER_SAVING_MODE)
		OSD_ITEM_MASK_SET(_MENU_FUN_POWER_SAVING);		
#endif
		OSD_ITEM_MASK_SET(_MENU_FUN_BACKLIGHT);		
		OSD_ITEM_MASK_SET(_MENU_FUN_CONTRAST);		
		OSD_ITEM_MASK_SET(_MENU_FUN_BRIGHTNESS); 	
		OSD_ITEM_MASK_SET(_MENU_FUN_SHARPNESS);
		
	}	
	

/*						VGA 				 */
	if(SysSourceGetSourceType() != _SOURCE_VGA)
	{
		OSD_ITEM_MASK_SET(_MENU_FUN_VGA_HPOSITON);		
		OSD_ITEM_MASK_SET(_MENU_FUN_VGA_VPOSITON);		
		OSD_ITEM_MASK_SET(_MENU_FUN_VGA_CLK);		
		OSD_ITEM_MASK_SET(_MENU_FUN_VGA_PHASE);
		OSD_ITEM_MASK_SET(_MENU_FUN_AUTO_ADJUST);		
		OSD_ITEM_MASK_SET(_MENU_FUN_AUTO_COLOR);
		//OSD_ITEM_MASK_CLR(_MENU_FUN_HDR);
	}
	
	if(GET_OSD_MPRT() != _OFF)
	{
	
		OSD_ITEM_MASK_SET(_MENU_FUN_OD);
	}

	if(GET_OSD_MPRT() != _OFF || SysSourceGetSourceType() == _SOURCE_VGA)
	{
	
		OSD_ITEM_MASK_SET(_MENU_FUN_FREESYNC);
	}

	if((GET_OSD_FREE_SYNC_STATUS() != _OFF)||(GET_INPUT_TIMING_VFREQ()<= _MPRT_MIN_FRAME_RATE))
	{		
		OSD_ITEM_MASK_SET(_MENU_FUN_MPRT);
	}

	#if(_DEF_HDR_MPRT_GRAY)	

	if(GET_OSD_MPRT() != _OFF)
	{
	
		OSD_ITEM_MASK_SET(_MENU_FUN_HDR);
	}
	#endif
#if(_DEF_GAME_MODE)&&(!_DEF_GAME_FREESYNC)	
	if(GET_OSD_OVERCLOCK() != _OFF)
	{
		OSD_MASK_SET(_MENU_FUN_FREESYNC);
	}
	else if(GET_OSD_MPRT() != _OFF)
	{

		OSD_MASK_SET(_MENU_FUN_FREESYNC);
	}
	else
#elif 0//(_PCB_DP_OUT_ENABLE)
	if(GET_OSD_MST_STATUS() != _OFF)
	{
		OSD_MASK_SET(_MENU_FUN_FREESYNC);
	}
	else

#endif

}

#endif


//--------------------------------------------------
// Description  :	逻辑列表，可以添加规则
// Input Value  :
// Output Value :
//--------------------------------------------------
void UpdateMaskValue(void)
{
	BYTE i = 0;
	BYTE j = 0;
	
#if((_HDR10_SUPPORT == _OFF)&&((_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6369_PROJECT)))
		BYTE pucHDRInfoData[_HW_DP_INFOFRAME_RSV0_LENGTH];
#endif
//memcpy 需要对等长度,memset 不需要
		//memcpy(OSD_ITEM_MASK,0,sizeof(OSD_ITEM_MASK));
		
#if !_DEF_OSD_2525		
	memset(OSD_ITEM_MASK,0,sizeof(OSD_ITEM_MASK));
	memset(OSD_MASK,0,sizeof(OSD_MASK));
#endif
	//OSD_MASK_SET(_MENU_NULL); //null 需要去掉



#if((_HDR10_SUPPORT == _OFF)&&((_PROJECT == _RL6463_PROJECT)||(_PROJECT == _RL6369_PROJECT)))
	ScalerGetHDR10Data_MOCK(pucHDRInfoData);
	if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(pucHDRInfoData[0] == 1)&&(pucHDRInfoData[1] == 0x1A)&&(pucHDRInfoData[2] == 2))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
#elif(_HDR10_SUPPORT == _ON)	
	if(((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)&&(GET_HDR10_EOTF_SETTING() == _HDR_TARGET_STATUS_SMPTE_ST_2084))||(GET_OSD_HDR_MODE() == _HDR10_MODE_FORCE_2084))
#else
	if(0)
#endif
	{
		OSD_MASK_SET(_MENU_FUN_SATURATION);	
#if(_OSD_POWER_SAVING_MODE)
		OSD_MASK_SET(_MENU_FUN_POWER_SAVING);		
#endif
		OSD_MASK_SET(_MENU_FUN_BACKLIGHT);		
		OSD_MASK_SET(_MENU_FUN_CONTRAST);		
		OSD_MASK_SET(_MENU_FUN_BRIGHTNESS); 	
		OSD_MASK_SET(_MENU_FUN_SHARPNESS);
		OSD_MASK_SET(_MENU_FUN_ECO);		
		OSD_MASK_SET(_MENU_FUN_DCR);
		OSD_MASK_SET(_MENU_FUN_GAMMA);
		OSD_MASK_SET(_MENU_FUN_COLORGAMUT);
		OSD_MASK_SET(_MENU_FUN_LOWBLUE);
		OSD_MASK_SET(_MENU_FUN_DCC);
		OSD_MASK_SET(_MENU_FUN_COLORTEMP);
		
		OSD_MASK_SET(_MENU_FUN_R);		
		OSD_MASK_SET(_MENU_FUN_G);		
		OSD_MASK_SET(_MENU_FUN_B);		
#if(_DEF_HDR_MPRT_GRAY) 
		OSD_MASK_SET(_MENU_FUN_MPRT);
#endif
	}
//	DebugMessageOsd("3.hdr",((GET_OSD_HDR_MODE() == _HDR10_MODE_AUTO)));
//	DebugMessageOsd("3.hdr 0",(pucHDRInfoData[0]));
//	DebugMessageOsd("3.hdr 1",(pucHDRInfoData[1]));
//	DebugMessageOsd("3.hdr 2",(pucHDRInfoData[2]));
	if(GET_COLOR_TEMP_TYPE() != _CT_USER)
	{
		OSD_MASK_SET(_MENU_FUN_R);		
		OSD_MASK_SET(_MENU_FUN_G);		
		OSD_MASK_SET(_MENU_FUN_B);		
	}

#if(_DEF_DCR_ECO_GRAY)
	if((GET_OSD_COLOR_EFFECT()!= _COLOREFFECT_STANDARD))
	{
		OSD_MASK_SET(_MENU_FUN_DCR);	
	}
	if(GET_OSD_DCR_STATUS() != _OFF)
	{
		OSD_MASK_SET(_MENU_FUN_ECO);	
	}
#endif

	if((GET_OSD_COLOR_EFFECT()!= _COLOREFFECT_STANDARD)||(GET_OSD_DCR_STATUS() != _OFF))
	{
#if(_OSD_POWER_SAVING_MODE)
		OSD_MASK_SET(_MENU_FUN_POWER_SAVING);		
#endif
		OSD_MASK_SET(_MENU_FUN_BACKLIGHT);		
		OSD_MASK_SET(_MENU_FUN_CONTRAST);		
		OSD_MASK_SET(_MENU_FUN_BRIGHTNESS); 	
		OSD_MASK_SET(_MENU_FUN_SHARPNESS);
	}
#if(_OSD_POWER_SAVING_MODE)
	#if(!_MC_EUROPE)
	if(GET_OSD_POWER_SAVING())
	{
		OSD_MASK_SET(_MENU_FUN_BACKLIGHT);		
	}
	#endif
#endif

#if(_PROJECT == _RL6463_PROJECT || _PROJECT == _RL6851_PROJECT)
	if(SysSourceGetSourceType() == _SOURCE_VGA)
	{
		OSD_MASK_SET(_MENU_FUN_HDR);
	}
	else
	{
		OSD_MASK_CLR(_MENU_FUN_HDR);
	}
#endif

/*						VGA 				 */
	if(SysSourceGetSourceType() != _SOURCE_VGA)
	{
		OSD_MASK_SET(_MENU_FUN_VGA_HPOSITON);		
		OSD_MASK_SET(_MENU_FUN_VGA_VPOSITON);		
		OSD_MASK_SET(_MENU_FUN_VGA_CLK);		
		OSD_MASK_SET(_MENU_FUN_VGA_PHASE);
		OSD_MASK_SET(_MENU_FUN_AUTO_ADJUST);		
		OSD_MASK_SET(_MENU_FUN_AUTO_COLOR);
		//OSD_MASK_CLR(_MENU_FUN_HDR);
	}
	
#if(_MPRT_DCR_REPULSION)
	if(GET_OSD_MPRT() != _OFF)
	{
		OSD_MASK_SET(_MENU_FUN_DCR);
	}
	
	if(GET_OSD_DCR_STATUS() != _OFF)
	{
		OSD_MASK_SET(_MENU_FUN_MPRT);
	}
#endif

	if(GET_OSD_MPRT() != _OFF)
	{
		OSD_MASK_SET(_MENU_FUN_OD);
		OSD_MASK_SET(_MENU_FUN_CONTRAST);
	}

	if(GET_OSD_MPRT() != _OFF || (SysSourceGetSourceType() == _SOURCE_VGA))
	{
	
		OSD_MASK_SET(_MENU_FUN_FREESYNC);
		
	}

	if((GET_OSD_FREE_SYNC_STATUS() != _OFF)||(GET_INPUT_TIMING_VFREQ()<= _MPRT_MIN_FRAME_RATE))
	{		
		OSD_MASK_SET(_MENU_FUN_MPRT);
	}
	
#if _DEF_GuangGan_FUN
	if(GET_OSD_GuangGan() != _OFF)
	{
		OSD_MASK_SET(_MENU_FUN_BACKLIGHT);
		OSD_MASK_SET(_MENU_FUN_DCR);
		OSD_MASK_SET(_MENU_FUN_ECO);
		OSD_MASK_SET(_MENU_FUN_HDR);
	}
#endif	
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
	OSD_MASK_SET(_MENU_FUN_MBRSYNC);
#if((_FREESYNC_SUPPORT == _ON) && (_DRR_MOTION_BLUR_REDUCTION_SUPPORT == _ON))
	if((ScalerSyncGetFREESYNCEnable() == _TRUE) && (UserCommonInterfaceMbrDrrGetHWSupport() == _TRUE))
	{
		OSD_MASK_CLR(_MENU_FUN_MBRSYNC);
	}
#endif
#if(_RTK_ADVANCED_MOTION_BLUR_REDUCTION_SUPPORT == _ON)
	if(ScalerMbrGetAdvMbrStatus() == _ENABLE)
	{
		OSD_MASK_CLR(_MENU_FUN_MBRSYNC);
	}
#endif

#endif
	#if(_DEF_HDR_MPRT_GRAY)	

	if(GET_OSD_MPRT() != _OFF)
	{
	
		OSD_MASK_SET(_MENU_FUN_HDR);
	}
	#endif
	
#if(_DEF_GAME_MODE)&&(!_DEF_GAME_FREESYNC)	
	if(GET_OSD_OVERCLOCK() != _OFF)
	{
			OSD_MASK_SET(_MENU_FUN_FREESYNC);
	}
	else if(GET_OSD_MPRT() != _OFF)
	{

		OSD_MASK_SET(_MENU_FUN_FREESYNC);
	}
#endif

	if(GET_OSD_STATE()<_MENU_NULL&&GET_OSD_STATE()>_MENU_NONE)
	{
		for(i = 0; i < 6; i++)
		{

#if(_DEF_OSD_LANGUAGE_ARROW) 
			if(OSD_MASK(OSD_MAIN_MENU_ITEM,i) )
#else
			if(OSD_MASK(OSD_MAIN_MENU_ITEM,i) && (GET_OSD_STATE() != _MENU_FUN_LANGUAGE))

#endif
			{
				ScalerOsdChange1BitColor( _ITEM_1_ROW+i*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START,LENGTH(33), HEIGHT(1+1), FG_COLOR(_COLOR_MENU_FONT_GRAY), BG_COLOR(_CP_BG));//底部字符未完全变色
				//OsdMenuDrawingHighlight(_OSD_WINDOW_4_1+i, _CP_GRAY, _CP_BG, _ENABLE);
			}
			else
			{
				ScalerOsdChange1BitColor( _ITEM_1_ROW+i*_OSD_ITEM_ROW_CHANGE, _OSD_ITEM_COL_START,LENGTH(33), HEIGHT(1+1), FG_COLOR(_COLOR_MENU_FONT), BG_COLOR(_CP_BG));
				//OsdMenuDrawingHighlight(_OSD_WINDOW_4_1+i, _CP_GRAY, _CP_BG, _DISABLE);
			}
		}
	}
	
}


//--------------------------------------------------
// Description  :
// Input Value  :
// Output Value :
//--------------------------------------------------
void OsdDispMainMenu_1(void)
{
    BYTE i = 0;

    g_ucFontPointer0 = _OSD_PAGE_0_START;
    g_ucFontPointer1 = _OSD_PAGE_1_START;
    g_ucFontPointer2 = _OSD_PAGE_2_START;


    //OsdDispDisableOsd();
    OsdDispDisableOsd();

    OsdFuncApplyMap(WIDTH(_OSD_MAIN_MENU_WIDTH), HEIGHT(_OSD_MAIN_MENU_HEIGHT), COLOR(_CP_WHITE, _CP_BG));
#if !_MEW_OSD_FONT
	RTDOsdFuncSetMapRowHeight(HEIGHT(_OSD_MAIN_MENU_HEIGHT));
#endif
//20140304 Abel
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
    ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, HEIGHT(_OSD_MAIN_MENU_HEIGHT), _DISABLE, 0, _ENABLE);
#endif
#if !_MEW_OSD_FONT
	if(GET_OSD_ROTATE_STATUS())
	{
		for(i = 0; i < 6; i++)
		OsdWindowDrawing(_OSD_WINDOW_4_1+i, _OSD_WINDOW_X_START, _OSD_WINDOW_Y_START+i*36+102, _OSD_WINDOW_X_END2, _OSD_WINDOW_Y_END+i*36+102, _COLOR_BG_3);
	}
	else
	{
		for(i = 0; i < 6; i++)
		OsdWindowDrawing(_OSD_WINDOW_4_1+i, _OSD_WINDOW_X_START, _OSD_WINDOW_Y_START+i*36, _OSD_WINDOW_X_END2, _OSD_WINDOW_Y_END+i*36, _COLOR_BG_3);
	}
#endif
	UpdateMaskItem();
	UpdateMaskValue();
	//UpdateMaskValue();
	//UpdateItemMaskValue();
    OsdFuncBlending(_OSD_TRANSPARENCY_ALL);
    OsdFuncTransparency(GET_OSD_TRANSPARENCY_STATUS());

    // Adjust Color Palette
    OsdPaletteSelectPalette(_PALETTE_MAIN_MENU);

    // Load Font & Icon
    OsdFuncSet2BitIconOffset(_2BIT_ICON_OFFSET);

    OsdFontVLCLoadFont(_FONT1_GLOBAL);
    OsdFontVLCLoadFont(_FONT2_ICON_MENU);
	
#if(_SMALL_LOGO_TYPE >=0xEF00)
	OsdFontVLCLoadFont(_FONT1_SMALL_LOGO_2BIT);
#elif(_SMALL_LOGO_TYPE != _SMALL_LOGO_TYPE_NONE)
     OsdFontVLCLoadFont(_FONT1_SMALL_LOGO);
#endif

#if _MEW_OSD_FONT
	{
		OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(492), YEND(315), _COLOR_BG_0);
		OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(50), XEND(492), YEND(274), _COLOR_BG_1);    
		OsdWindowDrawing(_OSD_WINDOW_2, XSTART(75), YSTART(54), XEND(492), YEND(270), _COLOR_BG_3);	
		OsdWindowDrawing(_OSD_WINDOW_3, XSTART(0), YSTART(54), XEND(72), YEND(270), _COLOR_BG_3);	
		for(i = 0; i < 5; i++)
			OsdWindowDrawing(_OSD_WINDOW_4_1+i, 0, _OSD_WINDOW_Y_START+36+i*36-18, 72, _OSD_WINDOW_Y_START+36+i*36-18+1, _COLOR_BG_1);
		
	}
#else
    // Background window
	if(GET_OSD_ROTATE_STATUS()== _OSD_ROTATE_DEGREE_0)
	{
#if(_OSD_BLACK_WHITE_TYPE == _ON)	
		OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(492), YEND(315+5), _COLOR_BG_0);
		OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(50), XEND(492), YEND(278), _COLOR_BG_1);    
		OsdWindowDrawing(_OSD_WINDOW_2, XSTART(72+3), YSTART(54), XEND(492), YEND(274), _COLOR_BG_3);	
#else
		OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(4), XEND(492), YEND(320), _COLOR_BG_0);
		OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(48), XEND(492), YEND(280), _COLOR_BG_1);    
		OsdWindowDrawing(_OSD_WINDOW_2, XSTART(75), YSTART(52), XEND(490), YEND(276), _COLOR_BG_3);  
#endif	
	}
	
	if(GET_OSD_ROTATE_STATUS()== _OSD_ROTATE_DEGREE_180)
	{
		OsdWindowDrawing(_OSD_WINDOW_0, XSTART(0), YSTART(102+5), XEND(492), YEND(102+315+5), _COLOR_BG_0);
		OsdWindowDrawing(_OSD_WINDOW_1, XSTART(0), YSTART(102+48), XEND(492), YEND(102+315-44+9), _COLOR_BG_1);	
		OsdWindowDrawing(_OSD_WINDOW_2, XSTART(72+3), YSTART(102+48+4), XEND(492-2), YEND(102+315-48+9), _COLOR_BG_3); 
	}
#endif
		///////////////////1bit small logo//////////////////////
		#if(_SMALL_LOGO_TYPE != _SMALL_LOGO_TYPE_NONE) 
			#if(_SMALL_LOGO_TYPE <=0xEF00)
				OsdFontPut1BitTable(ROW(_ITEM_7_ROW), COL(0), tOSD_ICON1_1, COLOR(_CP_WHITE, _CP_BG),0);
			#else
				///////////////////2bit small logo//////////////////////
				#if(_SMALL_LOGO_TYPE == _SMALL_LOGO2BIT_MATRIX)
				OsdFontPut2BitTable(ROW(_ITEM_7_ROW), COL(1), tOSD_ICON1_2, (_PALETTE_INDEX0 << 4) | _CP_BLACK,_CP_WHITE , _CP_RED, _CP_BG);
				#else
				OsdFontPut2BitTable(ROW(_ITEM_7_ROW), COL(0), tOSD_ICON1_2, (_PALETTE_INDEX0 << 4) | _CP_BLACK, _CP_WHITE, _CP_DARKBLUE, _CP_BLACK);
				#endif
			#endif
	#endif
	
#if _OSD_LOGO_TYPE==_OSD_LOGO_Big_Crossover
	OsdFontPut1BitTable(ROW(1), COL(15), tOSD_OsdLLogo_ICON, COLOR(_CP_WHITE, _CP_BG) , 0);
#elif _OSD_LOGO_TYPE==_OSD_LOGO_Crossover
	OsdFontPut1BitTable(ROW(1), COL(15), tOSD_OsdLLogo_ICON, COLOR(_CP_WHITE, _CP_BG) , 0);
#elif _OSD_LOGO_TYPE==_OSD_LOGO_OP
	OsdFontPut1BitTable(ROW(2), COL(15), tOSD_OsdLLogo_ICON, COLOR(_CP_WHITE, _CP_BG) , 0);
#endif

#if(_OSD_FLICKER_FREE)	
	RTDOsdTableFuncPutStringCenter(_ITEM_7_ROW, 0, 41, _PFONT_PAGE_ITEM_9, _OSD_STRING_FLICKER_FREE, 0,COLOR(_COLOR_BG_2,_CP_BG) ,_OSD_MESSAGE_PIXEL_OFFSET, _ENGLISH);		
#elif(_OSD_SHOW_SYNC)
	RTDOsdTableFuncPutStringCenter(ROW(_ITEM_7_ROW), COL(_OSD_ITEM_COL_START+1), COL(_OSD_ITEM_COL_START + 26), _PFONT_PAGE_ITEM_9, _OSD_STRING_NOW_RESOLUTION, 0, COLOR(_CP_WHITE,_CP_BG), 0, _ENGLISH);
#endif
	OsdDispSetPosition_DefineHeight(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, GET_OSD_HPOS(), GET_OSD_VPOS());

//	DebugMessageOsd("1.2bMode",11);
}
void OsdDispMainMenu(void)
{
	OsdDispMainMenu_1();
#if(_OSD_RECALL_FUNC)
	UpdateOSDMainInterface(OSD_MAIN_MENU_ITEM+_OSD_MAIN_PICTURE);
#else
	UpdateOSDMainInterface(_OSD_MAIN_PICTURE);
#endif

    // Osd Enable
    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    OsdFuncEnableOsd();
	DebugMessageOsd("GET_OSD_VOLUME_MUTE()", GET_OSD_VOLUME_MUTE());
//	DebugMessageOsd("1.2bMode",11);
}

//--------------------------------------------------
// Description    :
// Input Value    : None
// Output Value : None
//--------------------------------------------------
WORD DetOverRangeForHotkeySelect(WORD usValue, WORD usMax, WORD usMin, bit bCycle)
{

	bCycle = bCycle;
if( _MENU_FUN_BACKLIGHT<=GET_OSD_STATE() && GET_OSD_STATE()< _MENU_END)
{
    switch(GET_KEYMESSAGE())
    {
        case _RIGHT_KEY_MESSAGE:
			do{
			    if(usValue >= usMax)
			    {
		            usValue = usMin;
			    }
			    else
			    {
			        usValue++;
			    }
			}while((usValue == (_MENU_NULL - _MENU_FUN_BACKLIGHT))?1:(((_MENU_NULL - _MENU_FUN_BACKLIGHT) < usValue)?0: OSD_MASK_GET(usValue+_MENU_FUN_BACKLIGHT)));
			
			
            break;

        case _LEFT_KEY_MESSAGE:
			
			do{
			    if (usValue <= usMin)
			    {
		            usValue = usMax;
			    }
			    else
			    {
			        usValue--;
			    }			
			}while((usValue == (_MENU_NULL - _MENU_FUN_BACKLIGHT))?1:(((_MENU_NULL - _MENU_FUN_BACKLIGHT) < usValue)?0: OSD_MASK_GET(usValue+_MENU_FUN_BACKLIGHT)));
			
				
		    break;

        default:
            break;
    }
}
    return usValue;
}

//--------------------------------------------------
// Description    :
// Input Value    : None
// Output Value : None
//--------------------------------------------------
WORD OsdDisplayDetOverRangeRotation(WORD usValue, WORD usMax, WORD usMin, bit bCycle)
{
#if(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)	

if( _MENU_FUN_LANGUAGE==GET_OSD_STATE())
{
    switch(GET_KEYMESSAGE())
    {
        case _UP_KEY_MESSAGE:
            if(usValue >= usMax)
            {
                if(bCycle == _ON)
                {
                    return usMin;
                }
                else
                {
                    return usMax;
                }
            }
            else
            {
                usValue++;
            }

            break;

        case _DOWN_KEY_MESSAGE :
            if (usValue <= usMin)
            {
                if(bCycle == _ON)
                {
                    return usMax;
                }
                else
                {
                    return usMin;
                }
            }
            else
            {
                usValue--;
            }
            break;

        case _LEFT_KEY_MESSAGE:
            if(usValue < usMin+5)
            {
                if(bCycle == _ON)
                {
                    return (((WORD)(usMax/5)*5+usValue%5)>usMax?((WORD)(usMax/5)*5+usValue%5-5):((WORD)(usMax/5)*5+usValue%5));
                                   
                }
                else
                {
                    return usValue;
                }
            }
            else
            {
                usValue-=5;
            }

            break;

        case _RIGHT_KEY_MESSAGE :
            if(usValue+5 > usMax)
            {
                if(bCycle == _ON)
                {
                    return usValue%5;
                }
                else
                {
                    return usValue;
                }
            }
            else
            {
                usValue+=5;
            }
            break;

        default:
            break;
    }
}
else if( _MENU_FUN_BACKLIGHT<=GET_OSD_STATE() && GET_OSD_STATE()< _MENU_END&& _MENU_FUN_LANGUAGE!=GET_OSD_STATE())


#else

if( _MENU_FUN_BACKLIGHT<=GET_OSD_STATE() && GET_OSD_STATE()< _MENU_END)

#endif 


{
    switch(GET_KEYMESSAGE())
    {
        case _LEFT_KEY_MESSAGE:
            if(usValue >= usMax)
            {
                if(bCycle == _ON)
                {
                    return usMin;
                }
                else
                {
                    return usMax;
                }
            }
            else
            {
                usValue++;
            }

            break;

        case _RIGHT_KEY_MESSAGE :
            if (usValue <= usMin)
            {
                if(bCycle == _ON)
                {
                    return usMax;
                }
                else
                {
                    return usMin;
                }
            }
            else
            {
                usValue--;
            }
            break;

        default:
            break;
    }
}
    return usValue;
}

//--------------------------------------------------
// Description    :
// Input Value    : None
// Output Value : None
//--------------------------------------------------
WORD OsdDisplayDetOverRange(WORD usValue, WORD usMax, WORD usMin, bit bCycle)
{
	BYTE ucKeyMessage=0;
	if( _OSD_MAIN_START<=GET_OSD_STATE() && GET_OSD_STATE()<= (_OSD_MAIN_END+_ENABLE_MAIN_MENU_F_ICON))
		ucKeyMessage=(GET_KEYMESSAGE()==_RIGHT_KEY_MESSAGE ? _LEFT_KEY_MESSAGE : _RIGHT_KEY_MESSAGE);
	//else if(GET_OSD_STATE()==_MAIN_MENU_STATE_END)
	//	ucKeyMessage=(GET_KEYMESSAGE()==_RIGHT_KEY_MESSAGE ? _LEFT_KEY_MESSAGE : _RIGHT_KEY_MESSAGE);
	// if(GET_OSD_STATE()==_MENU_FUN_LANGUAGE)
	//	ucKeyMessage=(GET_KEYMESSAGE()==_RIGHT_KEY_MESSAGE ? _LEFT_KEY_MESSAGE : _RIGHT_KEY_MESSAGE);
	//else if( _MENU_FUN_SOURCE_HOTKEY==GET_OSD_STATE() )
	//	ucKeyMessage=(GET_KEYMESSAGE()==_RIGHT_KEY_MESSAGE ? _LEFT_KEY_MESSAGE : _RIGHT_KEY_MESSAGE);
	else if( _OSD_FUN_START<=GET_OSD_STATE() && GET_OSD_STATE()< _OSD_FUN_END)
		ucKeyMessage=GET_KEYMESSAGE();

	
    switch(ucKeyMessage)
    {
        case _RIGHT_KEY_MESSAGE:
            if(usValue >= usMax)
            {
                if(bCycle == _ON)
                {
                    return usMin;
                }
                else
                {
                    return usMax;
                }
            }
            else
            {
                usValue++;
            }

            break;

        case _LEFT_KEY_MESSAGE:
            if (usValue <= usMin)
            {
                if(bCycle == _ON)
                {
                    return usMax;
                }
                else
                {
                    return usMin;
                }
            }
            else
            {
                usValue--;
            }
            break;

        default:
            break;
    }
    return usValue;
}

//--------------------------------------------------
// Description  : Six Color Get One Color
// Input Value  : SixColor
// Output Value : None
//--------------------------------------------------

#if(_VGA_SUPPORT == _ON)
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdDispAutoConfigProc(void)
{
    OsdDispOsdMessage(_OSD_DISP_AUTO_CONFIG_MSG);
    UserCommonAutoConfig();
    OsdDispDisableOsd();
}
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdDisplayAutoBalanceProc(void)
{
    OsdDispDisableOsd();
    OsdDispOsdMessage(_OSD_DISP_AUTO_COLOR_MSG);

    if(SysSourceGetSourceType() == _SOURCE_VGA)
    {
        if(GET_OSD_COLOR_FORMAT() == _COLOR_SPACE_RGB)
        {
            // Perform auto-color for RGB
            if(ScalerAutoDoWhiteBalance(_AUTO_TUNE_RGB) == _AUTO_SUCCESS)
            {
                ScalerAutoGetAutoColorResult(&g_stAdcData);
                UserCommonNVRamSaveADCSetting(_COLOR_SPACE_RGB);

#if((_YPBPR_SUPPORT == _ON) && (_YPBPR_AUTO_METHOD == _YPBPR_AUTO_BY_FORMULA))
                // Calculate YPbPr gain/offset using formula
                g_stAdcData = ScalerAutoBalanceYPbPrFromFormula(&g_stAdcData);
                UserCommonNVRamSaveADCSetting(_COLOR_SPACE_YPBPR);

                // Restore RGB gain/offset
                ScalerAutoGetAutoColorResult(&g_stAdcData);
#endif
            }
            else
            {
                UserCommonNVRamRestoreADCSetting();
            }
        }
#if((_YPBPR_SUPPORT == _ON) && (_YPBPR_AUTO_METHOD == _YPBPR_AUTO_BY_SOURCE))
        else
        {
            // Perform auto-color for YPbPr
            if(ScalerAutoDoWhiteBalance(_AUTO_TUNE_YPBPR) == _AUTO_SUCCESS)
            {
                ScalerAutoGetAutoColorResult(&g_stAdcData);
                UserCommonNVRamSaveADCSetting(_COLOR_SPACE_YPBPR);
            }
            else
            {
                UserCommonNVRamRestoreADCSetting();
            }
        }
#endif
    }

    OsdDispDisableOsd();
    // SET_KEYMESSAGE(_HOLD_KEY_MESSAGE);
}
#endif // End of #if(_VGA_SUPPORT == _ON)

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------

//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdDispOsdReset(void)
{
    BYTE ucIndex = GET_OSD_LANGUAGE();
    BYTE Language_init = GET_OSD_LANGUAGE_INIT();
	BYTE TEMP_LEFT = GET_OSD_HOTKEY_LEFT();
	BYTE TEMP_RIGHT = GET_OSD_HOTKEY_RIGHT();
#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
    ScalerColorHLWDDomainEnable(_FUNCTION_OFF);
#endif

    OsdDispDisableOsd();

    UserCommonNVRamRestoreSystemData();
    RTDNVRamRestoreOSDData();

    RTDNVRamRestoreUserColorSetting();
    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
    RTDNVRamRestoreSixColorData();

    RTDNVRamRestoreBriCon();
    RTDNVRamRestoreBacklight();

#if(_VGA_SUPPORT == _ON)
    UserCommonNVRamRestoreModeUserData();

    if(SysSourceGetSourceType() == _SOURCE_VGA)
    {
        SET_VGA_MODE_DO_FIRST_AUTO(_TRUE);
        UserCommonModeSearchInitalUserAndCenterData(g_stVGAModeUserData.ucModeNumber);
        UserCommonNVRamSaveModeUserData();
    }
#endif

#if(_DP_SUPPORT == _ON)
    // Set Aux Diff mode & Resistance Setting
    SET_DP_AUX_DIFF_MODE();

    SET_DP_AUX_ADJR_SETTING(UserCommonNVRamGetSystemData(_DP_AUX_ADJR_SETTING));

    UserCommonInterfaceDpAuxSet();
#endif
#if !(_RESET_KEEP_LANGUAGE)
	if(Language_init!=GET_OSD_LANGUAGE())
	{
		SET_OSD_LANGUAGE(Language_init);
		SET_OSD_LANGUAGE_INIT(Language_init);
		RTDNVRamSaveOSDData();
	}
#endif 

#if(_RESET_KEEP_LANGUAGE)
    if(ucIndex != GET_OSD_LANGUAGE())
    {
		SET_OSD_LANGUAGE(ucIndex);
        SET_OSD_LANGUAGE_INIT(ucIndex);
        RTDNVRamSaveOSDData();
    }
#endif 
	SET_OSD_HOTKEY_LEFT(TEMP_LEFT);
	SET_OSD_HOTKEY_RIGHT(TEMP_RIGHT);
#if(_DEF_RESET_FACTORY_OFF)
	SET_OSD_FACTORY_MODE(_OFF);
	SET_OSD_BURNING_MODE(_OFF);
#endif
	RTDNVRamSaveOSDData();

#if(_DCR_SUPPORT)
	UserAdjustDCRControl(GET_OSD_DCR_STATUS());
#endif	
#if(_FREESYNC_SUPPORT == _ON)
		UserCommonInterfaceFreeSyncSupportSwitch();
#endif
#if(_DEF_GAME_MODE || _DEF_DP_GAME_MODE ||_DEF_DP_OVERCLOCK ||_DEF_HDMI_OVERCLOCK )
	OsdGameModeInputLow();
	UserCommonInterfaceLoadEmbeddedEdidData();
	OsdGameModeInputHigh();
#endif
    OsdFuncSetOsdItemFlag();
    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_DISPLAY_SETTING);

    SET_OSD_STATE(_MENU_NONE);

#if(_TWO_CHIP_DATA_EXCHANGE_MODE != _DATA_EXCHANGE_MODE_NONE)
    UserCommonInterfaceDataExchangeAllDataReset();
#endif
}

//--------------------------------------------------
// Description  : Logo showing function
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if(_LOGO_TYPE == _LOGO_BLUE_BG)
void OsdDispShowLogo(void)
{
	BYTE i=0;
    g_ucLogoTimerCounter = 0;
    OsdFuncDisableOsd();
	
	ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    ScalerDDomainBackgroundSetColor(0, 0, 255);
    ScalerDDomainBackgroundEnable(_ENABLE);
	
    OsdPaletteSelectPalette(_PALETTE_RTD_LOGO);
	
    //OsdFuncApplyMap(WIDTH(_LOGO_COL_SIZE), HEIGHT(_LOGO_ROW_SIZE), COLOR(_LOGO_CP_BG, _LOGO_CP_BG));

//#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
//    ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, g_ucOsdHeight, _DISABLE, 0, _ENABLE);
//#endif

    OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);
    OsdFuncTransparency(_OSD_TRANSPARENCY_MAX);
	
//    OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO0);
//	OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO1);


    ScalerOsdDisableOsd();

    SET_OSD_LOGO_ON(_ON);
}
#elif(_LOGO_New_Tool ==  _ON)
//此logo不支持旋转
//仅支持_USER_OSD_GEN_3及以上，2795系列是_USER_OSD_GEN_2，不支持
//#define DEF_CP_Gain			7/8	
#include "RTDLogoPalette.h"
void OsdDispShowLogo(void)
{
	BYTE i=0;
	BYTE j=GET_OSD_ROTATE_STATUS();
	SET_OSD_ROTATE_STATUS(0);
    g_ucLogoTimerCounter = 0;
	g_usFontTableStart=0;
    OsdFuncDisableOsd();
	//SET_OSD_DOUBLE_SIZE(1);
	ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    ScalerDDomainBackgroundSetColor((tPALETTE_LOGO[0]),(tPALETTE_LOGO[1]),(tPALETTE_LOGO[2]));
    ScalerDDomainBackgroundEnable(_ENABLE);
	
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	ScalerOsd2FontFunction(_ENABLE);
	ScalerOsdReferenceDelay(_OSD_A, _OSD_FIRST_DELAY);
	ScalerOsdReferenceDelay(_OSD_B, _OSD_SECOND_DELAY);
#endif	
	OsdFuncSet2BitIconOffset(_OSD_LOGO_2BIT_OFFSET);
	OsdFuncSet4BitIconOffset(_OSD_LOGO_4BIT_OFFSET);
    for(i = 0; i < (sizeof(tPALETTE_LOGO)/3); i++)
    {
        ScalerOsdSetColorPalette(i, (tPALETTE_LOGO[(i * 3)+0]),(tPALETTE_LOGO[(i * 3)+1]),(tPALETTE_LOGO[(i * 3)+2]));
    }
   // OsdPaletteSelectPalette(_PALETTE_RTD_LOGO);
	
    g_ucOsdWidth = _OSD_LOGOA_WIDTH/12;
    g_ucOsdHeight = _OSD_LOGOA_HEIGHT/18;
    g_ucOsdWidthB = _OSD_LOGOB_WIDTH/12;
    g_ucOsdHeightB = _OSD_LOGOB_HEIGHT/18;
    SET_OSD_MAPA_COL_MAX(WIDTH(g_ucOsdWidth));
    SET_OSD_MAPB_COL_MAX(WIDTH(g_ucOsdWidthB));
	ScalerOsdDoubleFunction( 0, 0);

#if 0//(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, g_ucOsdHeight, _DISABLE, g_ucOsdHeightB, _ENABLE);
#else
	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, g_ucOsdHeight, _DISABLE, g_ucOsdHeightB, _DISABLE);
#endif	
#endif

	
	ScalerOsdSramBaseAddressSet(_OSD_A, _OSD_LOGOA_ADDRESS_ROWCOMMAND, _OSD_LOGOA_ADDRESS_CHARCOMMAND, _OSD_LOGO_FONT_BASE_ADDRESS);
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	ScalerOsdSramBaseAddressSet(_OSD_B, _OSD_LOGOB_ADDRESS_ROWCOMMAND, _OSD_LOGOB_ADDRESS_CHARCOMMAND, _OSD_LOGO_FONT_BASE_ADDRESS);
#endif	


    OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);
    OsdFuncTransparency(_OSD_TRANSPARENCY_MAX);
	
    OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO0);
	//OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO1);

    OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, _LOGO_POS_H, _LOGO_POS_V);
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_B, 99, 99);
#endif	
    OsdFuncEnableOsd();
	SET_OSD_ROTATE_STATUS(j);

    SET_OSD_LOGO_ON(_ON);
}
#elif(_LOGO_New_Tool_4==  _ON)
//此logo不支持旋转
//仅支持_USER_OSD_GEN_3及以上，2795系列是_USER_OSD_GEN_2，不支持
//#define DEF_CP_Gain			7/8	
#include "RTDLogoPalette.h"
#if(_LOGO_TYPE ==  _LOGO_adhua_4)

#endif
WORD GET_OSD_LOGO_SHUJU(BYTE i)
{
	switch(i)
	{
		case 1://_OSD_LOGO_2BIT_OFFSET
			switch(GET_OSD_ROTATE_STATUS())
			{
				case _OSD_ROTATE_DEGREE_0:
					return _OSD_LOGO_2BIT_OFFSET;
					break;
			
				case _OSD_ROTATE_DEGREE_180:
					return _OSD_LOGO_2BIT_OFFSET_180;
					break;
					
				case _OSD_ROTATE_DEGREE_90:
					return _OSD_LOGO_2BIT_OFFSET_90;
					break;
					
				case _OSD_ROTATE_DEGREE_270:
					return _OSD_LOGO_2BIT_OFFSET_270;
					break;
			}
			break;
			
		case 2://_OSD_LOGO_4BIT_OFFSET
			switch(GET_OSD_ROTATE_STATUS())
			{
				case _OSD_ROTATE_DEGREE_0:
					return _OSD_LOGO_4BIT_OFFSET;
					break;
			
				case _OSD_ROTATE_DEGREE_180:
					return _OSD_LOGO_4BIT_OFFSET_180;
					break;
					
				case _OSD_ROTATE_DEGREE_90:
					return _OSD_LOGO_4BIT_OFFSET_90;
					break;
					
				case _OSD_ROTATE_DEGREE_270:
					return _OSD_LOGO_4BIT_OFFSET_270;
					break;
			}
			break;
				
			case 3://_OSD_LOGOA_WIDTH
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOA_WIDTH;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOA_WIDTH_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOA_WIDTH_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOA_WIDTH_270;
						break;
				}
				break;
					
			case 4://_OSD_LOGOA_HEIGHT
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOA_HEIGHT;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOA_HEIGHT_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOA_HEIGHT_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOA_HEIGHT_270;
						break;
				}
				break;
					
			case 5://_OSD_LOGOB_WIDTH
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOB_WIDTH;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOB_WIDTH_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOB_WIDTH_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOB_WIDTH_270;
						break;
				}
				break;
					
			case 6://_OSD_LOGOB_HEIGHT
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOB_HEIGHT;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOB_HEIGHT_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOB_HEIGHT_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOB_HEIGHT_270;
						break;
				}
				break;
					
			case 7://_OSD_LOGO_FONT_BASE_ADDRESS
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGO_FONT_BASE_ADDRESS;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGO_FONT_BASE_ADDRESS_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGO_FONT_BASE_ADDRESS_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGO_FONT_BASE_ADDRESS_270;
						break;
				}
				break;
					
			case 8://_OSD_LOGO_FONT_END_ADDRESS//no user
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGO_FONT_END_ADDRESS;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGO_FONT_END_ADDRESS_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGO_FONT_END_ADDRESS_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGO_FONT_END_ADDRESS_270;
						break;
				}
				break;
					
			case 9://_OSD_LOGOA_ADDRESS_ROWCOMMAND
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOA_ADDRESS_ROWCOMMAND;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOA_ADDRESS_ROWCOMMAND_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOA_ADDRESS_ROWCOMMAND_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOA_ADDRESS_ROWCOMMAND_270;
						break;
				}
				break;
					
			case 10://_OSD_LOGOA_ADDRESS_CHARCOMMAND
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOA_ADDRESS_CHARCOMMAND;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOA_ADDRESS_CHARCOMMAND_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOA_ADDRESS_CHARCOMMAND_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOA_ADDRESS_CHARCOMMAND_270;
						break;
				}
				break;
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
			case 11://_OSD_LOGOB_ADDRESS_ROWCOMMAND
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOB_ADDRESS_ROWCOMMAND;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOB_ADDRESS_ROWCOMMAND_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOB_ADDRESS_ROWCOMMAND_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOB_ADDRESS_ROWCOMMAND_270;
						break;
				}
				break;

			
			case 12://_OSD_LOGOB_ADDRESS_CHARCOMMAND
				switch(GET_OSD_ROTATE_STATUS())
				{
					case _OSD_ROTATE_DEGREE_0:
						return _OSD_LOGOB_ADDRESS_CHARCOMMAND;
						break;
				
					case _OSD_ROTATE_DEGREE_180:
						return _OSD_LOGOB_ADDRESS_CHARCOMMAND_180;
						break;
						
					case _OSD_ROTATE_DEGREE_90:
						return _OSD_LOGOB_ADDRESS_CHARCOMMAND_90;
						break;
						
					case _OSD_ROTATE_DEGREE_270:
						return _OSD_LOGOB_ADDRESS_CHARCOMMAND_270;
						break;
				}
				break;
#endif
	}
}

void OsdDispShowLogo(void)
{
	BYTE i=0;
	BYTE j=GET_OSD_ROTATE_STATUS();
	//SET_OSD_ROTATE_STATUS(0);
    g_ucLogoTimerCounter = 0;
	g_usFontTableStart=0;
    OsdFuncDisableOsd();
	//SET_OSD_DOUBLE_SIZE(1);
	ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    ScalerDDomainBackgroundSetColor((tPALETTE_LOGO[0]),(tPALETTE_LOGO[1]),(tPALETTE_LOGO[2]));
    ScalerDDomainBackgroundEnable(_ENABLE);
	
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	ScalerOsd2FontFunction(_ENABLE);
	ScalerOsdReferenceDelay(_OSD_A, _OSD_FIRST_DELAY);
	ScalerOsdReferenceDelay(_OSD_B, _OSD_SECOND_DELAY);
#endif	
	OsdFuncSet2BitIconOffset(GET_OSD_LOGO_SHUJU(1));
	OsdFuncSet4BitIconOffset(GET_OSD_LOGO_SHUJU(2));
    for(i = 0; i < (sizeof(tPALETTE_LOGO)/3); i++)
    {
        ScalerOsdSetColorPalette(i, (tPALETTE_LOGO[(i * 3)+0]),(tPALETTE_LOGO[(i * 3)+1]),(tPALETTE_LOGO[(i * 3)+2]));
    }
   // OsdPaletteSelectPalette(_PALETTE_RTD_LOGO);
	
    g_ucOsdWidth = GET_OSD_LOGO_SHUJU(3)/12;
    g_ucOsdHeight = GET_OSD_LOGO_SHUJU(4)/18;
    g_ucOsdWidthB = GET_OSD_LOGO_SHUJU(5)/12;
    g_ucOsdHeightB = GET_OSD_LOGO_SHUJU(6)/18;
    SET_OSD_MAPA_COL_MAX(WIDTH(g_ucOsdWidth));
    SET_OSD_MAPB_COL_MAX(WIDTH(g_ucOsdWidthB));
	ScalerOsdDoubleFunction( 0, 0);

#if 0//(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, g_ucOsdHeight, _DISABLE, g_ucOsdHeightB, _ENABLE);
#else
	ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, g_ucOsdHeight, _DISABLE, g_ucOsdHeightB, _DISABLE);
#endif	
#endif

	
	ScalerOsdSramBaseAddressSet(_OSD_A, GET_OSD_LOGO_SHUJU(9), GET_OSD_LOGO_SHUJU(10), GET_OSD_LOGO_SHUJU(7));
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	ScalerOsdSramBaseAddressSet(_OSD_B, GET_OSD_LOGO_SHUJU(11), GET_OSD_LOGO_SHUJU(12), GET_OSD_LOGO_SHUJU(7));
#endif	


    OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);
    OsdFuncTransparency(_OSD_TRANSPARENCY_MAX);
	
    OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO0);
	//OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO1);

    OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, _LOGO_POS_H, _LOGO_POS_V);
#if(_OSD_2_FONT_FUNCTION_LOGO == _ON)
	OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_B, 99, 99);
#endif	
    OsdFuncEnableOsd();
	SET_OSD_ROTATE_STATUS(j);

    SET_OSD_LOGO_ON(_ON);
}

#elif(_LOGO_TYPE != _LOGO_NONE)

void OsdDispShowLogo(void)
{
    g_ucLogoTimerCounter = 0;
    OsdFuncDisableOsd();
	//SET_OSD_DOUBLE_SIZE(1);
	ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    ScalerDDomainBackgroundSetColor(_LOGO_BG_RED, _LOGO_BG_GREEN, _LOGO_BG_BLUE);
    ScalerDDomainBackgroundEnable(_ENABLE);
	
    OsdPaletteSelectPalette(_PALETTE_RTD_LOGO);
#if 1//!_MEW_OSD_FONT
	if(GET_OSD_ROTATE_STATUS()==_OSD_ROTATE_DEGREE_180)
	{//延长1度，防止异常，2bit
		OsdFuncApplyMap(WIDTH(_LOGO_COL_SIZE), HEIGHT(_LOGO_ROW_SIZE+2), COLOR(_LOGO_CP_BG, _LOGO_CP_BG));
#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
		ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, _LOGO_ROW_SIZE+2, _DISABLE, 0, _ENABLE);
#endif
	}
	else
#endif
	{
	    OsdFuncApplyMap(WIDTH(_LOGO_COL_SIZE), HEIGHT(_LOGO_ROW_SIZE), COLOR(_LOGO_CP_BG, _LOGO_CP_BG));

#if(_OSD_ROTATE_FUNCTION == _OSD_ROTATE_HARDWARE)
	    ScalerOsdMapRotation(GET_OSD_ROTATE_STATUS(), _ENABLE, _LOGO_ROW_SIZE, _DISABLE, 0, _ENABLE);
#endif
	}
    OsdFuncBlending(_OSD_TRANSPARENCY_ONLY_WINDOW);
    OsdFuncTransparency(_OSD_TRANSPARENCY_MAX);
	
    OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO0);
	OsdFontVLCLoadFont(_REALTEK_1BIT_LOGO1);

#if(_LOGO_TYPE == _LOGO_TIEMU)
	OsdFontPut4BitTable(0,0,tiOSD_1BIT_LOGO0);
#elif(_LOGO_TYPE == _LOGO_ANMTE)
	OsdFontPut2BitTable(ROW(0), COL(0), tiOSD_1BIT_LOGO0,_LOGO_BG_COLOR,_LOGO_FG_COLOR,_LOGO_FG_COLOR1,_LOGO_FG_COLOR1);
#elif(_LOGO_TYPE ==  _LOGO_QTOUCH)
	OsdFontPut2BitTable(ROW(0), COL(0), tiOSD_1BIT_LOGO0,_LOGO_BG_COLOR,_LOGO_FG_COLOR,_LOGO_FG_COLOR1,_LOGO_BG_COLOR1);
#elif(_LOGO_TYPE ==  _LOGO_TECMIYO)
	OsdFontPut2BitTable(ROW(0), COL(0), tiOSD_1BIT_LOGO0,_LOGO_BG_COLOR,_LOGO_FG_COLOR,_LOGO_FG_COLOR1,_LOGO_FG_COLOR2);

#elif(_LOGO_TYPE == _LOGO_ZYNTECH)

	OsdFontPut2BitTable(ROW(0), COL(0), tiOSD_1BIT_LOGO0,_LOGO_BG_COLOR,_LOGO_FG_COLOR,_LOGO_FG_COLOR,_LOGO_FG_COLOR2);
	OsdFontPut2BitTable(ROW(17), COL(0), tiOSD_1BIT_LOGO1,_LOGO_BG_COLOR,_LOGO_FG_COLOR1,_LOGO_FG_COLOR1,_LOGO_FG_COLOR1);
	
#elif(_LOGO_TYPE ==  _LOGO_STEALTH)
	OsdFontPut2BitTable(ROW(0), COL(0), tiOSD_1BIT_LOGO0,_LOGO_CP_BG,_LOGO_CP_GRAY,_LOGO_CP_WHITE,_LOGO_CP_WHITE);
#elif(_LOGO_TYPE == _LOGO_MECER_BIG)
	//g_ucOsdWidth=_LOGO_COL_SIZE+20;
	OsdFontPut1BitTable_LOGO(ROW(0), COL(34), tiOSD_1BIT_LOGO0, COLOR(_LOGO_FG_COLOR, _LOGO_BG_COLOR), 0);
	OsdFontPut1BitTable_LOGO(ROW(12), COL(0), tiOSD_1BIT_LOGO1, COLOR(_LOGO_FG_COLOR1, _LOGO_BG_COLOR1) , 1);
#elif(_LOGO_TYPE == _LOGO_CRUA)
	//g_ucOsdWidth=_LOGO_COL_SIZE+20;
	OsdFontPut1BitTable_LOGO(ROW(0), COL(0), tiOSD_1BIT_LOGO0, COLOR(_LOGO_BG_COLOR, _LOGO_FG_COLOR), 0);
	OsdFontPut1BitTable_LOGO(ROW(0), COL(37), tiOSD_1BIT_LOGO1, COLOR(_LOGO_BG_COLOR1, _LOGO_FG_COLOR1) , 1);
#elif(_LOGO_TYPE == _LOGO_MONSTER)
		//g_ucOsdWidth=_LOGO_COL_SIZE+20;
		OsdFontPut1BitTable_LOGO(ROW(0), COL(0), tiOSD_1BIT_LOGO0, COLOR(_LOGO_BG_COLOR, _LOGO_FG_COLOR), 0);
		OsdFontPut1BitTable_LOGO(ROW(_LOGO_ROW_START1), COL(_LOGO_COL_START1), tiOSD_1BIT_LOGO1, COLOR(_LOGO_BG_COLOR1, _LOGO_FG_COLOR1) , 1);

#elif(_LOGO_TYPE == _LOGO_SODIMAC)
	
		OsdFontPut1BitTable_LOGO(ROW(0), COL(0), tiOSD_1BIT_LOGO0, COLOR(_LOGO_FG_COLOR1, _LOGO_BG_COLOR) , 1);
		OsdFontPut1BitTable_LOGO(ROW(_LOGO_ROW_START1), COL(_LOGO_COL_START1), tiOSD_1BIT_LOGO1, COLOR(_LOGO_FG_COLOR1, _LOGO_BG_COLOR) , 1);


#elif(_LOGO_TYPE != _LOGO_NONE)

    OsdFontPut1BitTable_LOGO(ROW(0), COL(0), tiOSD_1BIT_LOGO0, COLOR(_LOGO_FG_COLOR, _LOGO_BG_COLOR), 0);
	#if(0xf000 <= _LOGO_TYPE)
	OsdFontPut1BitTable_LOGO(ROW(_LOGO_ROW_START1), COL(_LOGO_COL_START1), tiOSD_1BIT_LOGO1, COLOR(_LOGO_FG_COLOR1, _LOGO_BG_COLOR1) , 1);
	#endif

	
	

#endif

#if(_LOGO_TYPE == _LOGO_BIG_ELECTRIQ)
	OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, 56*12, 0, (56+19)*12, 11*18, _CP_WHITE, _CP_WHITE, _LOGO_CP_GREEN_1, _ENABLE); 
#elif(_LOGO_TYPE == _LOGO_ABIT_LOGO)
	ScalerOsdChange1BitColor(ROW(0), COL(38), LENGTH(6), HEIGHT(4), FG_COLOR(_LOGO_FG_COLOR), BG_COLOR(_LOGO_CP_PINK));
#elif(_LOGO_TYPE == _LOGO_ABIT_SMALL_LOGO)
	ScalerOsdChange1BitColor(ROW(0), COL(28), LENGTH(5), HEIGHT(3), FG_COLOR(_LOGO_FG_COLOR), BG_COLOR(_LOGO_CP_PINK));
#elif(_LOGO_TYPE == _LOGO_HONXIA)
	//	ScalerOsdChange1BitColor(ROW(4), COL(19), LENGTH(6), HEIGHT(3), FG_COLOR(_LOGO_CP_BLUE ), BG_COLOR(_LOGO_FG_COLOR));
	OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, 19*12, 4*18+3, (6+19)*12, 7*18, _CP_WHITE, _LOGO_CP_BLUE, _CP_WHITE, _ENABLE); 
#elif(_LOGO_TYPE == _LOGO_ZORO)
	OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, 0*12, 0, (20)*12, 13*18, _CP_WHITE, _LOGO_CP_DARKBLUE , _CP_WHITE, _ENABLE); 
#elif(_LOGO_TYPE == _LOGO_MUCAI)
   ScalerOsdChange1BitColor(ROW(12), COL(0), LENGTH(14), HEIGHT(2), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
   ScalerOsdChange1BitColor(ROW(12), COL(14), LENGTH(15), HEIGHT(2), FG_COLOR(_LOGO_CP_GREEN), BG_COLOR(_LOGO_BG_COLOR));
   ScalerOsdChange1BitColor(ROW(12), COL(29), LENGTH(14), HEIGHT(2), FG_COLOR(_LOGO_CP_BLUE), BG_COLOR(_LOGO_BG_COLOR));
#elif(_LOGO_TYPE == _LOGO_IMAGIC)
	ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(52), HEIGHT(12), FG_COLOR(_LOGO_CP_WHITE), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(52), HEIGHT(5), FG_COLOR(_LOGO_FG_COLOR), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(5), COL(0), LENGTH(19), HEIGHT(7), FG_COLOR(_LOGO_FG_COLOR), BG_COLOR(_LOGO_BG_COLOR));
#elif(_LOGO_TYPE == _LOGO_NCT)
        ScalerOsdChange1BitColor(ROW(6), COL(34), LENGTH(13), HEIGHT(5), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
        ScalerOsdChange1BitColor(ROW(0), COL(46), LENGTH(9), HEIGHT(16), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
        ScalerOsdChange1BitColor(ROW(8), COL(33), LENGTH(1), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
        OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, 34*12,10*18, 34*12+5, 11*18, _LOGO_BG_COLOR, _LOGO_FG_COLOR, _LOGO_BG_COLOR, _ENABLE); 
#elif (_LOGO_TYPE == _LOGO_GUANJIE)
    OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, 0, 0, (50)*12, (18)*18, _CP_WHITE, _CP_WHITE, _LOGO_CP_RED, _ENABLE); 
#elif (_LOGO_TYPE == _LOGO_BLAUPUNKT)
	ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(6), HEIGHT(4), FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_BLUE_1));
#elif(_LOGO_TYPE == _LOGO_SEVENWIN)
    ScalerOsdChange1BitColor(ROW(0), COL(30), LENGTH(17), HEIGHT(4), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
    ScalerOsdChange1BitColor(ROW(4), COL(35), LENGTH(9), HEIGHT(12), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
    
    ScalerOsdChange1BitColor(ROW(22), COL(15), LENGTH(16), HEIGHT(2), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
    ScalerOsdChange1BitColor(ROW(22), COL(50), LENGTH(10), HEIGHT(2), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	//OsdWindowDrawingHighlight(_OSD_WINDOW_4_8, 0, 0, (50)*12, (18)*18, _CP_WHITE, _CP_WHITE, _LOGO_CP_RED, _ENABLE); 
#elif(_LOGO_TYPE == _LOGO_FMDISPLAY)
	ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(14), HEIGHT(2), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
#elif(_LOGO_TYPE == _LOGO_ODNA)
	ScalerOsdChange1BitColor(ROW(3), COL(8), LENGTH(8), HEIGHT(1), FG_COLOR(_LOGO_CP_BG), BG_COLOR(_LOGO_CP_PINK));
	ScalerOsdChange1BitColor(ROW(4), COL(5), LENGTH(13), HEIGHT(8), FG_COLOR(_LOGO_CP_BG), BG_COLOR(_LOGO_CP_PINK));
	ScalerOsdChange1BitColor(ROW(12), COL(8), LENGTH(8), HEIGHT(1), FG_COLOR(_LOGO_CP_BG), BG_COLOR(_LOGO_CP_PINK));
#elif(_LOGO_TYPE == _LOGO_JVC)
   //ScalerOsdChange1BitColor(ROW(21), COL(8), LENGTH(31), HEIGHT(4), FG_COLOR(_LOGO_CP_BLUE_1), BG_COLOR(_LOGO_BG_COLOR));		
#elif(_LOGO_TYPE == _LOGO_EXAN)
	ScalerOsdChange1BitColor(ROW(0), COL(0), LENGTH(17), HEIGHT(3), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(3), COL(0), LENGTH(18), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(4), COL(13), LENGTH(6), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(5), COL(12), LENGTH(9), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(6), COL(16), LENGTH(6), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(7), COL(17), LENGTH(5), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(8), COL(18), LENGTH(11), HEIGHT(3), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	
	ScalerOsdChange1BitColor(ROW(3), COL(26), LENGTH(2), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(4), COL(25), LENGTH(4), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(5), COL(24), LENGTH(6), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(6), COL(23), LENGTH(7), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(7), COL(22), LENGTH(7), HEIGHT(1), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));

	ScalerOsdChange1BitColor(ROW(0), COL(43), LENGTH(10), HEIGHT(11), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(0), COL(38), LENGTH(2), HEIGHT(4), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(0), COL(40), LENGTH(1), HEIGHT(5), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(1), COL(41), LENGTH(1), HEIGHT(4), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(2), COL(42), LENGTH(1), HEIGHT(4), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
#elif(_LOGO_TYPE ==  _LOGO_Polaroid)
	ScalerOsdChange1BitColor(ROW(12), COL(0), LENGTH(7), HEIGHT(2), FG_COLOR(_LOGO_CP_RED), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(12), COL(7), LENGTH(7), HEIGHT(2), FG_COLOR(_LOGO_CP_GRAY), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(12), COL(14), LENGTH(7), HEIGHT(2), FG_COLOR(_LOGO_CP_YELLOW), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(12), COL(21), LENGTH(7), HEIGHT(2), FG_COLOR(_LOGO_CP_GREEN), BG_COLOR(_LOGO_BG_COLOR));
	ScalerOsdChange1BitColor(ROW(12), COL(28), LENGTH(7), HEIGHT(2), FG_COLOR(_LOGO_CP_BLUE), BG_COLOR(_LOGO_BG_COLOR));
	
#elif(_LOGO_TYPE == _LOGO_SODIMAC)
	ScalerOsdChange1BitColor( ROW(0),COL(0),LENGTH(21),HEIGHT(11),  FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_BG_COLOR));


	ScalerOsdChange1BitColor( ROW(2),COL(7),  LENGTH(9),HEIGHT(3),	FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_BLUE));
	ScalerOsdChange1BitColor( ROW(3),COL(16),LENGTH(1),HEIGHT(2),	FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_BLUE));
	ScalerOsdChange1BitColor( ROW(4),COL(17),LENGTH(2),HEIGHT(1),	FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_BLUE));

	
	ScalerOsdChange1BitColor( ROW(5),COL(1),LENGTH(9),HEIGHT(5),  FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_RED));
	 ScalerOsdChange1BitColor( ROW(2),COL(4),LENGTH(3), HEIGHT(1), FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_YELLOW));
	 ScalerOsdChange1BitColor( ROW(3),COL(3),LENGTH(5),HEIGHT(1),  FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_YELLOW));
	 ScalerOsdChange1BitColor( ROW(4),COL(1),LENGTH(8), HEIGHT(1), FG_COLOR(_LOGO_CP_BLACK), BG_COLOR(_LOGO_CP_YELLOW));
#elif(_LOGO_TYPE ==  _LOGO_DUALSHINE)

    ScalerOsdChange1BitColor( ROW(0),COL(0),LENGTH(36),HEIGHT(11),  FG_COLOR(_LOGO_CP_BLUE_1), BG_COLOR(_LOGO_CP_WHITE));

#endif

    OsdDispSetPosition(_POS_PERCENT, _OSD_POSITION_GLOBAL_A, _LOGO_POS_H, _LOGO_POS_V);
    OsdFuncEnableOsd();

    SET_OSD_LOGO_ON(_ON);
}

#endif

//--------------------------------------------------
// Description  : Six Color Set One Color
// Input Value  : SixColor
// Output Value : None
//--------------------------------------------------
void OsdDisplaySixColorSetOneColor(BYTE ucColor)
{
#if !_DEF_OSD_2525
    switch(ucColor)
    {
        case _SIXCOLOR_R:
            g_stSixColorData.ucSixColorHueR = GET_OSD_SIX_COLOR_HUE();
            g_stSixColorData.ucSixColorSaturationR = GET_OSD_SIX_COLOR_SATURATION();
            break;

        case _SIXCOLOR_Y:
            g_stSixColorData.ucSixColorHueY = GET_OSD_SIX_COLOR_HUE();
            g_stSixColorData.ucSixColorSaturationY = GET_OSD_SIX_COLOR_SATURATION();
            break;

        case _SIXCOLOR_G:
            g_stSixColorData.ucSixColorHueG = GET_OSD_SIX_COLOR_HUE();
            g_stSixColorData.ucSixColorSaturationG = GET_OSD_SIX_COLOR_SATURATION();
            break;

        case _SIXCOLOR_C:
            g_stSixColorData.ucSixColorHueC = GET_OSD_SIX_COLOR_HUE();
            g_stSixColorData.ucSixColorSaturationC = GET_OSD_SIX_COLOR_SATURATION();
            break;

        case _SIXCOLOR_B:
            g_stSixColorData.ucSixColorHueB = GET_OSD_SIX_COLOR_HUE();
            g_stSixColorData.ucSixColorSaturationB = GET_OSD_SIX_COLOR_SATURATION();
            break;

        case _SIXCOLOR_M:
            g_stSixColorData.ucSixColorHueM = GET_OSD_SIX_COLOR_HUE();
            g_stSixColorData.ucSixColorSaturationM = GET_OSD_SIX_COLOR_SATURATION();
            break;

        default:
            break;
    }
#endif
}

//--------------------------------------------------
// Description  : Six Color Get One Color
// Input Value  : SixColor
// Output Value : None
//--------------------------------------------------
void OsdDisplaySixColorGetOneColor(BYTE ucColor)
{
#if !_DEF_OSD_2525
    switch(ucColor)
    {
        case _SIXCOLOR_R:
            SET_OSD_SIX_COLOR_HUE(g_stSixColorData.ucSixColorHueR);
            SET_OSD_SIX_COLOR_SATURATION(g_stSixColorData.ucSixColorSaturationR);
            break;

        case _SIXCOLOR_Y:
            SET_OSD_SIX_COLOR_HUE(g_stSixColorData.ucSixColorHueY);
            SET_OSD_SIX_COLOR_SATURATION(g_stSixColorData.ucSixColorSaturationY);
            break;

        case _SIXCOLOR_G:
            SET_OSD_SIX_COLOR_HUE(g_stSixColorData.ucSixColorHueG);
            SET_OSD_SIX_COLOR_SATURATION(g_stSixColorData.ucSixColorSaturationG);
            break;

        case _SIXCOLOR_C:
            SET_OSD_SIX_COLOR_HUE(g_stSixColorData.ucSixColorHueC);
            SET_OSD_SIX_COLOR_SATURATION(g_stSixColorData.ucSixColorSaturationC);
            break;

        case _SIXCOLOR_B:
            SET_OSD_SIX_COLOR_HUE(g_stSixColorData.ucSixColorHueB);
            SET_OSD_SIX_COLOR_SATURATION(g_stSixColorData.ucSixColorSaturationB);
            break;

        case _SIXCOLOR_M:
            SET_OSD_SIX_COLOR_HUE(g_stSixColorData.ucSixColorHueM);
            SET_OSD_SIX_COLOR_SATURATION(g_stSixColorData.ucSixColorSaturationM);
            break;

        default:
            break;
    }
#endif
}
#if 0//(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
#if 0
//--------------------------------------------------
// Description  : Draw DialPoint HotKey Menu
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void OsdDispHotKeyDialPointMenu(void)
{
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
    if(GET_OSD_DIAL_POINT_STYLE() == _DIAPOINT_STYLE_2)
    {
        SET_OSD_DIAL_POINT_STYLE(_DIAPOINT_STYLE_OFF);
    }
    else
    {
        SET_OSD_DIAL_POINT_STYLE(GET_OSD_DIAL_POINT_STYLE()+1);
    }
#else
    if(GET_OSD_DIAL_POINT_STYLE() == _ON)
    {
        SET_OSD_DIAL_POINT_STYLE(_OFF);
    }
    else
    {
        SET_OSD_DIAL_POINT_STYLE(_ON);
    }
#endif
    ScalerTimerReactiveTimerEvent(SEC(1),_USER_TIMER_EVENT_SAVE_NVRAM_OSDUSERDATA);

    OsdFuncDisableOsd();
#if(_DIALPOINT_SUPPORT == _ON)
    if((SysModeGetModeState() ==_MODE_STATUS_ACTIVE)&&(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF))
    {
        SET_OSD_EVENT_MESSAGE(_OSDEVENT_SHOW_DIAPOINT_N_FRAME_COUNTER_MSG);
        return;
    }
#endif
   /* if((SysModeGetModeState() ==_MODE_STATUS_ACTIVE)&&(GET_OSD_FRAME_COUNTER() != _FRAME_COUNTER_OFF))
    {
        SET_OSD_EVENT_MESSAGE(_OSDEVENT_SHOW_DIAPOINT_N_FRAME_COUNTER_MSG);
    }*/

/*
    OsdDisplayMsgMenu();
    SET_OSD_STATE(_HOTKEY_DIALPOINT);
    OsdPropPutStringCenter(ROW(5), COL(1),ALIGNLEFT(0),_PFONT_PAGE_0, OSD_DIAL_POINT_STR,0,COLOR(_CP_AGON_BAR_1,_CP_AGON_BG),(GET_OSD_LANGUAGE()));
    OsdFuncLoadText(ROW(5), COL(_AGON_MSG_BRACKET_START), FGCOLOR(_CP_AGON_BAR_1), BGCOLOR(_CP_AGON_BG), GET_OSD_LANGUAGE(), OSD_ON_OFF_SELECT,GET_OSD_DIAL_POINT_STYLE(),_BRACKET_CENTER_MODE);//17
    OsdFuncEnableOsd();
*/
}
#endif
#endif

#endif//#if(_OSD_TYPE == _REALTEK_2014_OSD)
