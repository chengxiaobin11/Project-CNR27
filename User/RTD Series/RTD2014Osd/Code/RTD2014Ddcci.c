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
// ID Code      : RTD2014Ddcci.c No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __RTD_DDCCI__

#include "UserCommonInclude.h"

#if(_OSD_TYPE == _REALTEK_2014_OSD)

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************

#define _DDCCI_FIRMWARE_VERSION                     0x01

#define _DDCCI_BLACKLEVEL_DEFAULT                   0x50

// RC
#define _DDCCI_CMD_GETVCP_RC_NO_ERROR               0x00
#define _DDCCI_CMD_GETVCP_RC_UNSUPPORTED            0x01

// TP
#define _DDCCI_CMD_GETVCP_TP_SET_PARAMETER          0x00
#define _DDCCI_CMD_GETVCP_TP_MOMENTARY              0x01

//--------------------------------------------------
// Definitions of Contrast Range (Real Value)
//--------------------------------------------------
#define _COLORTEMP_USER_MAX                         255
#define _COLORTEMP_USER_MIN                         0
#define _COLORTEMP_USER_CENTER                      (((_COLORTEMP_USER_MAX - _COLORTEMP_USER_MIN) / 2) + _COLORTEMP_USER_MIN)

//--------------------------------------------------
// For DDCCI Set Input Port
//--------------------------------------------------
#define _VGA_1                                      _A0_INPUT_PORT
#define _DVI_1                                      _NO_INPUT_PORT
#define _DVI_2                                      _NO_INPUT_PORT
#define _DP_1                                       _D0_INPUT_PORT
#define _DP_2                                       _NO_INPUT_PORT
#define _HDMI_1                                     _D1_INPUT_PORT
#define _HDMI_2                                     _D2_INPUT_PORT

//--------------------------------------------------
// Dell DDM Tool
//--------------------------------------------------
#define _DDCCI_OPCODE_VCP_DELL_DDM_SUPPORT          0xF1

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************
BYTE code tCOLORPRESET_VALUE[] = {0x08, 0x06, 0x05, 0x04, 0x01, 0x0B, 0x02};
//BYTE code tLANGUAGEDEFINE[] = {0x02, 0x03, 0x04, 0x0a, 0x01, 0x0d, 0x06};
//BYTE code tLANGUAGEDEFINE[] = {0x02, 0x03};
/*
Chinesse_S	0x01
Engish		0x02
French		0x03
German		0x04
Italian		0x05
Japanese		0x06
Korean		0x07
Portuguese	0x08
Russian		0x09
Spanish		0x0A
Swedish		0x0B
Turkish		0x0C
Chineses_T	0x0D
Brzil		0x0E
 Arabic		0x0F
Bulgarian		0x10
Croaian		0x11
Czech		0x12
Danish		0x13
Dutch		0x14
Estonian		0x15
Finnish		0x16
Greek		0x17
Hebrew		0x18
Hindi		0x19
Hungrian		0x1A
Norwegian	0x1B
Polish		0x1C
Romanian		0x1D
Serbian		0x1E
Slovak		0x1F
Slovenian		0x20
Thai		0x21
Ukranian		0x22
Vietnamese	0x23

*/
BYTE code tLANGUAGEDEFINE[] = {0x02,0x03,0x0A, 0x08,0x04,0x05,0x14, 0x0B,0x16,0x1C  ,0x12,0x09 ,0x07,0x01,0x0D, 0x06,0x17,0x1A,0x0C};


//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************
BYTE g_ucDdcciRedBlackLevel   = _DDCCI_BLACKLEVEL_DEFAULT;
BYTE g_ucDdcciGreenBlackLevel = _DDCCI_BLACKLEVEL_DEFAULT;
BYTE g_ucDdcciBlueBlackLevel  = _DDCCI_BLACKLEVEL_DEFAULT;
BYTE g_ucDdcciNewControlValue = 1;
BYTE g_ucDdcciActiveValue;
BYTE g_ucColorTempUnSupport;

bit g_bForcePowSavStatus = _FALSE;

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
void UserDdcciHandler(void);
void RTDDdcciGetVCPFeature(void);
bit RTDDdcciSetVCPFeatureCheck(void);
void RTDDdcciSetVCPFeature(void);
void RTDDdcciResetAllSettings(void);
void RTDDdcciColorReset(void);
extern void RTDDdcciWEdidProc(void);
extern void RTDDdcciAutoAlignPro(void);
void RTDDdcciEdidProc(void);
typedef enum
{
    _VGA_A0 = 0x01,
} EnumOsdSourceTypeVga;

typedef enum
{
    _DVI = 0x02,
#if(_D0_INPUT_PORT_TYPE == _D0_DVI_PORT)
    _DVI_D0,
#endif
#if(_D1_INPUT_PORT_TYPE == _D1_DVI_PORT)
    _DVI_D1,
#endif
#if((_D2_INPUT_PORT_TYPE == _D2_DVI_PORT) || (_D2_INPUT_PORT_TYPE == _D2_DUAL_DVI_PORT))
    _DVI_D2,
#endif
#if((_D3_INPUT_PORT_TYPE == _D3_DVI_PORT) || (_D3_INPUT_PORT_TYPE == _D3_DUAL_DVI_PORT))
    _DVI_D3,
#endif
#if((_D4_INPUT_PORT_TYPE == _D4_DVI_PORT) || (_D4_INPUT_PORT_TYPE == _D4_DUAL_DVI_PORT))
    _DVI_D4,
#endif
#if(_D5_INPUT_PORT_TYPE == _D5_DVI_PORT)
    _DVI_D5,
#endif

    _HDMI = 0x10,
#if((_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT) || (_D0_INPUT_PORT_TYPE == _D0_MHL_PORT))
    _HDMI_D0,
#endif
#if((_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT) || (_D1_INPUT_PORT_TYPE == _D1_MHL_PORT))
    _HDMI_D1,
#endif
#if((_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT) || (_D2_INPUT_PORT_TYPE == _D2_MHL_PORT))
    _HDMI_D2,
#endif
#if((_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT) || (_D3_INPUT_PORT_TYPE == _D3_MHL_PORT))
    _HDMI_D3,
#endif
#if((_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT) || (_D4_INPUT_PORT_TYPE == _D4_MHL_PORT))
    _HDMI_D4,
#endif
#if((_D5_INPUT_PORT_TYPE == _D5_HDMI_PORT) || (_D5_INPUT_PORT_TYPE == _D5_MHL_PORT))
    _HDMI_D5,
#endif
}EnumOsdSourceTypeTMDS;

typedef enum
{
    _DP = 0x0E,
#if(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)
    _DP_D0,
#endif
#if(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)
    _DP_D1,
#endif
#if(_D2_INPUT_PORT_TYPE == _D2_DP_PORT)
    _DP_D2,
#endif
#if(_D6_INPUT_PORT_TYPE == _D6_DP_PORT)
    _DP_D6,
#endif
} EnumOsdSourceTypeDP;
//--------------------------------------------------
// Description :
// Input Value : None
// Output Value : Source Port Number
//--------------------------------------------------
BYTE OsdDispJudgeSourceType(void)
{
    BYTE ucOsdSourcePort = _VGA_A0;

    switch(SysSourceGetInputPort())
    {
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)
        case _A0_INPUT_PORT:
            ucOsdSourcePort = _VGA_A0;
            return ucOsdSourcePort;
#endif

#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)
        case _D0_INPUT_PORT:
#if(_D0_INPUT_PORT_TYPE == _D0_DVI_PORT)
            ucOsdSourcePort = _DVI_D0;
#endif

#if((_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT) || (_D0_INPUT_PORT_TYPE == _D0_MHL_PORT))
            ucOsdSourcePort = _HDMI_D0;
#endif

#if(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)
            ucOsdSourcePort = _DP_D0;
#endif
            return ucOsdSourcePort;
#endif

#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)
        case _D1_INPUT_PORT:
#if(_D1_INPUT_PORT_TYPE == _D1_DVI_PORT)
            ucOsdSourcePort = _DVI_D1;
#endif

#if((_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT) || (_D1_INPUT_PORT_TYPE == _D1_MHL_PORT))
            ucOsdSourcePort = _HDMI_D1;
#endif

#if(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)
            ucOsdSourcePort = _DP_D1;
#endif
            return ucOsdSourcePort;
#endif

#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)
        case _D2_INPUT_PORT:
#if((_D2_INPUT_PORT_TYPE == _D2_DVI_PORT) || (_D2_INPUT_PORT_TYPE == _D2_DUAL_DVI_PORT))
            if(_DVI_D2 > 0x04)
            {
                ucOsdSourcePort = 0x03;
            }
            else
            {
                ucOsdSourcePort = _DVI_D2;
            }
#endif

#if((_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT) || (_D2_INPUT_PORT_TYPE == _D2_MHL_PORT))
            if(_HDMI_D2 > 0x12)
            {
                ucOsdSourcePort = 0x11;
            }
            else
            {
                ucOsdSourcePort = _HDMI_D2;
            }
#endif

#if(_D2_INPUT_PORT_TYPE == _D2_DP_PORT)
            if(_DP_D2 > 0x10)
            {
                ucOsdSourcePort = 0x0F;
            }
            else
            {
                ucOsdSourcePort = _DP_D2;
            }
#endif
            return ucOsdSourcePort;
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)
        case _D3_INPUT_PORT:
#if((_D3_INPUT_PORT_TYPE == _D3_DVI_PORT) || (_D3_INPUT_PORT_TYPE == _D3_DUAL_DVI_PORT))
            if(_DVI_D3 > 0x04)
            {
                ucOsdSourcePort = 0x03;
            }
            else
            {
                ucOsdSourcePort = _DVI_D3;
            }
#endif

#if((_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT) || (_D3_INPUT_PORT_TYPE == _D3_MHL_PORT))
            if(_HDMI_D3 > 0x12)
            {
                ucOsdSourcePort = 0x11;
            }
            else
            {
                ucOsdSourcePort = _HDMI_D3;
            }
#endif
            return ucOsdSourcePort;
#endif

#if(_D4_INPUT_PORT_TYPE != _D4_NO_PORT)
        case _D4_INPUT_PORT:
#if((_D4_INPUT_PORT_TYPE == _D4_DVI_PORT) || (_D4_INPUT_PORT_TYPE == _D4_DUAL_DVI_PORT))
            if(_DVI_D4 > 0x04)
            {
                ucOsdSourcePort = 0x03;
            }
            else
            {
                ucOsdSourcePort = _DVI_D4;
            }
#endif

#if((_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT) || (_D4_INPUT_PORT_TYPE == _D4_MHL_PORT))
            if(_HDMI_D4 > 0x12)
            {
                ucOsdSourcePort = 0x11;
            }
            else
            {
                ucOsdSourcePort = _HDMI_D4;
            }
#endif
            return ucOsdSourcePort;
#endif

#if(_D5_INPUT_PORT_TYPE != _D5_NO_PORT)
        case _D5_INPUT_PORT:
#if(_D5_INPUT_PORT_TYPE == _D5_DVI_PORT)
            if(_DVI_D5 > 0x04)
            {
                ucOsdSourcePort = 0x03;
            }
            else
            {
                ucOsdSourcePort = _DVI_D5;
            }
#endif

#if((_D5_INPUT_PORT_TYPE == _D5_HDMI_PORT) || (_D5_INPUT_PORT_TYPE == _D5_MHL_PORT))
            if(_HDMI_D5 > 0x12)
            {
                ucOsdSourcePort = 0x11;
            }
            else
            {
                ucOsdSourcePort = _HDMI_D5;
            }
#endif
            return ucOsdSourcePort;
#endif

#if(_D6_INPUT_PORT_TYPE != _D6_NO_PORT)
        case _D6_INPUT_PORT:
#if(_D6_INPUT_PORT_TYPE == _D6_DP_PORT)
            if(_DP_D6 > 0x10)
            {
                ucOsdSourcePort = 0x0F;
            }
            else
            {
                ucOsdSourcePort = _DP_D6;
            }
#endif
            return ucOsdSourcePort;
#endif

        default:
            return ucOsdSourcePort;
    }
}

//****************************************************************************
// FUNCTION DEFINITIONS
//****************************************************************************
//--------------------------------------------------
// Description  : DDC Handler Process
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDDdccireply(BYTE Flag)
{
#if  _Def_AutoAlign_Type==1
		g_pucDdcciTxBuf[0]=0x6E;
		g_pucDdcciTxBuf[1]=0x82;
		g_pucDdcciTxBuf[2]=0x02;
		g_pucDdcciTxBuf[3]=Flag;
		g_pucDdcciTxBuf[4] = UserCommonDdcciCalCheckSum();
		ScalerMcuDdcciSendData(g_pucDdcciTxBuf);
		ScalerMcuDdcciReleaseScl();
	
	
#else
		g_pucDdcciTxBuf[0]=0x6F;
		g_pucDdcciTxBuf[1]=0x82;
		g_pucDdcciTxBuf[2]=0x02;
		g_pucDdcciTxBuf[3]=Flag;
		g_pucDdcciTxBuf[4] = UserCommonDdcciCalCheckSum();
		ScalerMcuDdcciSendData(g_pucDdcciTxBuf);
#endif
}


#if(_EDID_TABLE_LOCATED_IN_FLASH)
bit RTDDdcciDdcCheck(BYTE *pucDDCRAM, WORD usSize)
{
    WORD ucChksum = 0;
    BYTE usCount = 0;

    for(usCount = 0; usCount < 127; usCount++)
    {
        ucChksum += pucDDCRAM[usCount];
    }

    ucChksum = (256- ucChksum%256)%256;	
	
    // Checksum Check & EDID Header Check
    if((ucChksum != pucDDCRAM[127])
    || (pucDDCRAM[0] != 0x00) || (pucDDCRAM[1] != 0xFF)
    || (pucDDCRAM[2] != 0xFF) || (pucDDCRAM[3] != 0xFF)
    || (pucDDCRAM[4] != 0xFF) || (pucDDCRAM[5] != 0xFF)
    || (pucDDCRAM[6] != 0xFF) || (pucDDCRAM[7] != 0x00))
    {
        return _FALSE;
    }

    ucChksum = 0;
    if(usSize == 256)
    {
	    for(usCount = 0; usCount < 127; usCount++)
    	    {
        	ucChksum += pucDDCRAM[128+usCount];
    	    }

	    ucChksum = (256- ucChksum%256)%256;	
		
	    if(ucChksum != pucDDCRAM[255])
	    {
			return _FALSE;
	    }
    }

    return _TRUE;
}
#endif
void UserDdcciHandler(void)
{
    if(GET_OSD_DDCCI_STATUS() == _ON)
    {
        // Check if Data is needed to be received
        // Reply data to source according to the request
        if(GET_RUN_DDCCI_COMMAND() == _SUCCESS)
        {
            switch(g_pucDdcciRxBuf[_DDCCI_COMMAND])
            {
                case _DDCCI_CMD_GET_VCP_FEATURE:
                    RTDDdcciGetVCPFeature();
                    break;

                case _DDCCI_CMD_SET_VCP_FEATURE:
                    RTDDdcciSetVCPFeature();
                    break;

                case _DDCCI_CMD_GET_TIMING_REPORT:
                    UserCommonDdcciGetTimingReport();
                    break;

                case _DDCCI_CMD_SAVE_CURRENT_SETTINGS:
                    break;

                case _DDCCI_CMD_CAPABILITIES_REQUEST:
                    UserCommonDdcciGetCapabilitiesRequest();
                    break;

                default:
                    UserCommonDdcciInitTx();
                    break;
            }
			
#if  _Def_AutoAlign_Type==1
			if(g_pucDdcciRxBuf[_DDCCI_SOURCE_OPCODE] == _DDCCI_OPCODE_VCP_AUTOALIGN  || g_pucDdcciRxBuf[_DDCCI_SOURCE_OPCODE] == _DDCCI_OPCODE_VCP_DISP_CALIBRATION)
				ScalerMcuDdcciReleaseScl();
#endif
            UserCommonDdcciInitRx();

            SET_RUN_DDCCI_COMMAND(_FAIL);
        }
    }
#if((_DP_SUPPORT == _ON) && (_DP_MST_SUPPORT == _ON))
    else
    {
        // Check if Data is needed to be received
        // Reply data to source according to the request
        if((GET_RUN_DDCCI_COMMAND() == _SUCCESS) && (UserCommonInterfaceGetDpMstCapablePort() != _DP_MST_NO_PORT))
        {
            UserCommonDdcciInitTx();
            SET_RUN_DDCCI_COMMAND(_FAIL);
        }
    }
#endif
}

#if(_DDCCI_CUSTOM_CAPABILITY_STR_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Get custom capability string data
// Input Value  : pucDest -> destination
//                enumPortType -> port type
//                usStartIndex -> data offset
//                usLength -> data length
// Output Value : None
//--------------------------------------------------
void UserInterfaceDdcciGetCpStringData(BYTE *pucDest, EnumInputPortType enumPortType, WORD usStartIndex, WORD usLength)
{
    pucDest = pucDest;
    enumPortType = enumPortType;
    usStartIndex = usStartIndex;
    usLength = usLength;
}

//--------------------------------------------------
// Description  : Get custom capability string size
// Input Value  : enumPortType -> port type
// Output Value : size
//--------------------------------------------------
WORD UserInterfaceDdcciGetCpStringSize(EnumInputPortType enumPortType)
{
    enumPortType = enumPortType;
    return 0;
}
#endif

//--------------------------------------------------
// Description  : DDCCI Get VCP Feature & VCP Feature Reply
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDDdcciGetVCPFeature(void)
{
    BYTE pucTemp[2] = {0};

    g_pucDdcciTxBuf[_DDCCI_SOURCE] = _DDCCI_DEST_ADDRESS;
    g_pucDdcciTxBuf[_DDCCI_LENGTH] = _DDCCI_CONTROL_STATUS_FLAG | 0x08;
    g_pucDdcciTxBuf[_DDCCI_COMMAND] = _DDCCI_CMD_GET_VCP_FEATURE_REPLY;
    g_pucDdcciTxBuf[_DDCCI_RESULT_CODE] = _DDCCI_CMD_GETVCP_RC_NO_ERROR;
    g_pucDdcciTxBuf[_DDCCI_SINK_OPCODE] = g_pucDdcciRxBuf[_DDCCI_SOURCE_OPCODE];

    switch(g_pucDdcciRxBuf[_DDCCI_SOURCE_OPCODE])
    {

	case _DDCCI_OPCODE_VCP_DDCPROC:
	{
			//	WORD udAddress;
			//	udAddress=((WORD)(256*g_pucDdcciRxBuf[4])+g_pucDdcciRxBuf[5]);
				
				
	///**/flash area 
	/*
				UserCommonFlashRead(_EEPROM_HDCP_KEY_FLASH_BANK,(_MISC_PAGE) * _FLASH_PAGE_SIZE+127, 1, &g_pucDdcciTxBuf[3]);
				UserCommonFlashRead(_EEPROM_HDCP_KEY_FLASH_BANK,(_MISC_PAGE) * _FLASH_PAGE_SIZE+255, 1, &g_pucDdcciTxBuf[4]);
				UserCommonFlashRead(_EEPROM_HDCP_KEY_FLASH_BANK,(_MISC_PAGE) * _FLASH_PAGE_SIZE+383, 1, &g_pucDdcciTxBuf[5]);
				UserCommonFlashRead(_EEPROM_HDCP_KEY_FLASH_BANK,(_MISC_PAGE) * _FLASH_PAGE_SIZE+511, 1, &g_pucDdcciTxBuf[6]);
	*/	
#if((_A0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH))
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)
				g_pucDdcciTxBuf[3] = MCU_DDCRAM_A0[127];
#endif
#endif
	
#if((_D0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH))
#if(_D0_INPUT_PORT_TYPE == _D0_DVI_PORT)
				g_pucDdcciTxBuf[4] = MCU_DDCRAM_D0[127];
	
#elif(_D0_INPUT_PORT_TYPE >_D0_DVI_PORT)
				g_pucDdcciTxBuf[5] = MCU_DDCRAM_D0[127];
				g_pucDdcciTxBuf[6] = MCU_DDCRAM_D0[255];
#endif
#endif
	
#if((_D1_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH))
#if(_D1_INPUT_PORT_TYPE == _D1_DVI_PORT)
				g_pucDdcciTxBuf[4] = MCU_DDCRAM_D1[127];
#elif(_D1_INPUT_PORT_TYPE > _D1_DVI_PORT)
				g_pucDdcciTxBuf[5] = MCU_DDCRAM_D1[127];
				g_pucDdcciTxBuf[6] = MCU_DDCRAM_D1[255];
#endif
#endif
	
				g_pucDdcciTxBuf[7]=0;
				g_pucDdcciTxBuf[8]=0;
				g_pucDdcciTxBuf[9]=0;
				g_pucDdcciTxBuf[10]=0;
				
				g_pucDdcciTxBuf[_DDCCI_LENGTH]=9;
				g_pucDdcciTxBuf[11] = UserCommonDdcciCalCheckSum();
				ScalerMcuDdcciSendData(g_pucDdcciTxBuf);
				//ScalerTimerActiveTimerEvent(SEC(0.5), _USER_TIMER_EVENT_OSD_DISABLE);
				//OsdDispDisableOsd();
				return;
	}
			break;


	
        case _DDCCI_OPCODE_VCP_NEW_CONTROL_VALUE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x0002, g_ucDdcciNewControlValue);
            break;

        case _DDCCI_OPCODE_VCP_FACTORY_RESET:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_MOMENTARY, 0x0001, 0x00);
            break;

        case _DDCCI_OPCODE_VCP_RECAL_BRI_CON:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_MOMENTARY, 0x0001, 0x00);
            break;

        case _DDCCI_OPCODE_VCP_GEOMETRY_RESET:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_MOMENTARY, 0x0001, 0x00);
            break;

        case _DDCCI_OPCODE_VCP_COLOR_RESET:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_MOMENTARY, 0x0001, 0x00);
            break;

        case _DDCCI_OPCODE_VCP_COLOR_TEMP_INCREMENT:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x0000, 100);
            break;

        case _DDCCI_OPCODE_VCP_COLOR_TEMP_REQUEST:
            switch(GET_COLOR_TEMP_TYPE())
            {
                case _CT_SRGB:
                    UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, (93 - 30), (40 - 30));
                    break;

                case _CT_9300:
                    UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, (93 - 30), (93 - 30));
                    break;

                case _CT_7500:
                    UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, (93 - 30), (75 - 30));
                    break;

                case _CT_6500:
                    UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, (93 - 30), (65 - 30));
                    break;

                case _CT_5800:
                    UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, (93 - 30), (50 - 30));
                    break;

                default:
                    UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, (93 - 30), (65 - 30));
                    break;
            }
            break;

#if(_VGA_SUPPORT == _ON)
        case _DDCCI_OPCODE_VCP_CLOCK:

#if(_AUTO_CLOCK_SAVE_VALUE_OPTION == _CLOCK_SAVE_PERCENT_VALUE)
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, GET_VGA_MODE_ADJUST_CLOCK());
#else
            {
                WORD usClockRangeMax = 0;
                WORD usClockRangeMin = 0;
                BYTE ucClock = 0;

                usClockRangeMax = UserCommonAdjustGetAdcClockRange(_GET_CLOCKRANGE_MAX);
                usClockRangeMin = UserCommonAdjustGetAdcClockRange(_GET_CLOCKRANGE_MIN);
                ucClock = UserCommonAdjustRealValueToPercent(GET_VGA_MODE_ADJUST_CLOCK(), usClockRangeMax, usClockRangeMin, (((usClockRangeMax - usClockRangeMin) / 2) + usClockRangeMin));

                UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, ucClock);
            }
#endif
            break;

#endif // End of #if(_VGA_SUPPORT == _ON)

        case _DDCCI_OPCODE_VCP_BACKLIGHT:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100,GET_OSD_BACKLIGHT());
            break;

        case _DDCCI_OPCODE_VCP_CONTRAST:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100,GET_OSD_CONTRAST());
            break;

        case _DDCCI_OPCODE_VCP_SELECT_COLOR_PRESET:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x000B,
                                            tCOLORPRESET_VALUE[GET_COLOR_TEMP_TYPE()]);
            break;

        case _DDCCI_OPCODE_VCP_RED_GAIN:
            pucTemp[0] = GET_COLOR_TEMP_TYPE();

            if(GET_COLOR_TEMP_TYPE() != _CT_USER)
            {
                SET_COLOR_TEMP_TYPE(_CT_USER);

                RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
            }

            pucTemp[1] = UserCommonAdjustRealValueToPercent(GET_COLOR_TEMP_TYPE_USER_R(),
                                                            _COLORTEMP_USER_MAX,
                                                            _COLORTEMP_USER_MIN,
                                                            _COLORTEMP_USER_CENTER);

            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, pucTemp[1]);

            SET_COLOR_TEMP_TYPE(pucTemp[0]);

            RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
            break;

        case _DDCCI_OPCODE_VCP_GREEN_GAIN:
            pucTemp[0] = GET_COLOR_TEMP_TYPE();

            if(GET_COLOR_TEMP_TYPE() != _CT_USER)
            {
                SET_COLOR_TEMP_TYPE(_CT_USER);

                RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
            }

            pucTemp[1] = UserCommonAdjustRealValueToPercent(GET_COLOR_TEMP_TYPE_USER_G(),
                                                            _COLORTEMP_USER_MAX,
                                                            _COLORTEMP_USER_MIN,
                                                            _COLORTEMP_USER_CENTER);

            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, pucTemp[1]);

            SET_COLOR_TEMP_TYPE(pucTemp[0]);

            RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
            break;

        case _DDCCI_OPCODE_VCP_BLUE_GAIN:
            pucTemp[0] = GET_COLOR_TEMP_TYPE();

            if(GET_COLOR_TEMP_TYPE() != _CT_USER)
            {
                SET_COLOR_TEMP_TYPE(_CT_USER);

                RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
            }

            pucTemp[1] = UserCommonAdjustRealValueToPercent(GET_COLOR_TEMP_TYPE_USER_B(),
                                                            _COLORTEMP_USER_MAX,
                                                            _COLORTEMP_USER_MIN,
                                                            _COLORTEMP_USER_CENTER);

            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, pucTemp[1]);

            SET_COLOR_TEMP_TYPE(pucTemp[0]);

            RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
            break;

        case _DDCCI_OPCODE_VCP_AUTO_SET_UP:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_MOMENTARY, 0x0001, 0x00);
            break;

#if(_VGA_SUPPORT == _ON)
        case _DDCCI_OPCODE_VCP_AUTO_COLOR:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x01, 0x01);
            break;
#endif

        case _DDCCI_OPCODE_VCP_HPOSITION:
#if(_VGA_SUPPORT == _ON)
            if(SysSourceGetSourceType() == _SOURCE_VGA)
            {
                UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, GET_VGA_MODE_ADJUST_H_POSITION());
            }
            else
#endif
            {
                UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, GET_DIGITAL_H_POSITION());
            }

            break;

        case _DDCCI_OPCODE_VCP_VPOSITION:
#if(_VGA_SUPPORT == _ON)
            if(SysSourceGetSourceType() == _SOURCE_VGA)
            {
                UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, GET_VGA_MODE_ADJUST_V_POSITION());
            }
            else
#endif
            {
                UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, GET_DIGITAL_V_POSITION());
            }
            break;

#if(_VGA_SUPPORT == _ON)
        case _DDCCI_OPCODE_VCP_CLOCK_PHASE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, GET_VGA_MODE_ADJUST_PHASE());
            break;
#endif

        case _DDCCI_OPCODE_VCP_ACTIVE_CONTROL:
            break;

        case _DDCCI_OPCODE_VCP_INPUT_SOURCE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x03, OsdDispJudgeSourceType());
            break;

#if(_AUDIO_SUPPORT == _ENABLE)
        case _DDCCI_OPCODE_VCP_AUDIO_VOLUME:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, GET_OSD_VOLUME());
            break;
#endif

        case _DDCCI_OPCODE_VCP_RED_BLACK_LEVEL:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, g_ucDdcciRedBlackLevel);
            break;

        case _DDCCI_OPCODE_VCP_GREEN_BLACK_LEVEL:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, g_ucDdcciGreenBlackLevel);
            break;

        case _DDCCI_OPCODE_VCP_BLUE_BLACK_LEVEL:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 100, g_ucDdcciBlueBlackLevel);
            break;

        case _DDCCI_OPCODE_VCP_PRODUCTKEY:
            g_pucDdcciTxBuf[_DDCCI_LENGTH] = _DDCCI_CONTROL_STATUS_FLAG | 9;
            g_pucDdcciTxBuf[_DDCCI_COMMAND] = _DDCCI_CMD_GET_VCP_FEATURE_REPLY;
            break;

        case _DDCCI_OPCODE_VCP_HFREQ:
            // PDATA_DWORD(0) = (DWORD)GET_INPUT_TIMING_HFREQ() * 100;
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, HIWORD(((DWORD)GET_INPUT_TIMING_HFREQ() * 100)), LOWORD(((DWORD)GET_INPUT_TIMING_HFREQ() * 100)));
            break;

        case _DDCCI_OPCODE_VCP_VFREQ:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0xFFFF, GET_INPUT_TIMING_VFREQ()*10);
            break;

        case _DDCCI_OPCODE_VCP_PANEL_TYPE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x01, 1);
            break;

        case _DDCCI_OPCODE_VCP_MONITOR_TYPE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x05, 3);
            break;

        case _DDCCI_OPCODE_VCP_APPLICATION_ENABLE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0xFF, 0x5a);
            break;

        case _DDCCI_OPCODE_VCP_CONTROLLER_TYPE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x0000, 0x0009);
            break;

        case _DDCCI_OPCODE_VCP_FW_LEVEL:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0xFFFF, _DDCCI_FIRMWARE_VERSION);
            break;

        case _DDCCI_OPCODE_VCP_OSD_ON_OFF:
#if(_TRANSLATOR_SUPPORT == _OFF)
            if(ScalerOsdGetOsdEnable() == _TRUE)
            {
                pucTemp[0] = 2;
            }
            else
#endif
            {
                pucTemp[0] = 1;
            }
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x02, pucTemp[0]);
            break;

        case _DDCCI_OPCODE_VCP_OSD_LANGUAGE:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x20, tLANGUAGEDEFINE[GET_OSD_LANGUAGE()]);
            break;

        case _DDCCI_OPCODE_VCP_POWER_MODE:
            if(SysPowerGetPowerStatus() == _POWER_STATUS_OFF)
            {
                pucTemp[0] = 4;
            }
            else if(SysPowerGetPowerStatus() == _POWER_STATUS_SAVING)
            {
                pucTemp[0] = 2;
            }
            else
            {
                pucTemp[0] = 1;
            }
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x0005, pucTemp[0]);
            break;

        case _DDCCI_OPCODE_VCP_VERSION:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0xFFFF, 0x0202);
            break;

        case _DDCCI_OPCODE_VCP_SHARPNESS:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0x0004, GET_OSD_SHARPNESS());
            break;

        case _DDCCI_OPCODE_VCP_DELL_DDM_SUPPORT:
            UserCommonDdcciSetVCPReplyValue(_DDCCI_CMD_GETVCP_TP_SET_PARAMETER, 0xFFFF, 0x01);
            break;
        default:
            g_pucDdcciTxBuf[_DDCCI_RESULT_CODE] = _DDCCI_CMD_GETVCP_RC_UNSUPPORTED;
            break;
    }
    g_pucDdcciTxBuf[_DDCCI_PRESENT_LOW_BYTE + 1] = UserCommonDdcciCalCheckSum();

    ScalerMcuDdcciSendData(g_pucDdcciTxBuf);
}

//--------------------------------------------------
// Description  : Check DDCCI Set VCP Feature
// Input Value  : None
// Output Value : None
//--------------------------------------------------
bit RTDDdcciSetVCPFeatureCheck(void)
{
	
    switch(g_pucDdcciRxBuf[_DDCCI_SOURCE_OPCODE])
    {
        case _DDCCI_OPCODE_VCP_FACTORY_RESET:
        case _DDCCI_OPCODE_VCP_RECAL_BRI_CON:
        case _DDCCI_OPCODE_VCP_GEOMETRY_RESET:
        case _DDCCI_OPCODE_VCP_COLOR_RESET:

            if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0)
            {
                return _FALSE;
            }

            break;

        case _DDCCI_OPCODE_VCP_NEW_CONTROL_VALUE:
        case _DDCCI_OPCODE_VCP_AUTO_SET_UP:
        case _DDCCI_OPCODE_VCP_AUTO_COLOR:

            if((g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0) || (g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] >= 3))
            {
                return _FALSE;
            }

            break;

        case _DDCCI_OPCODE_VCP_SELECT_COLOR_PRESET:

            if((g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0) || (g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] >= 0x0E))
            {
                return _FALSE;
            }

            break;

        case _DDCCI_OPCODE_VCP_OSD_LANGUAGE:

            if((g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0) || (g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] >= 0x26))
            {
                return _FALSE;
            }

            break;

        case _DDCCI_OPCODE_VCP_POWER_MODE:

            if((g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0) || (g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] >= 0x06))
            {
                return _FALSE;
            }

            break;

        default:
            break;
    }

    return _TRUE;
}

//--------------------------------------------------
// Description  : DDCCI Set VCP Feature
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDDdcciSetVCPFeature(void)
{
    BYTE ucTemp = 0;

    if(RTDDdcciSetVCPFeatureCheck() == _FAIL)
    {
        UserCommonDdcciInitTx();
    }
    else
    {
    
        switch(g_pucDdcciRxBuf[_DDCCI_SOURCE_OPCODE])
        {

		case _DDCCI_OPCODE_VCP_AUTOALIGN:



			RTDDdcciAutoAlignPro();



		break;

		case _DDCCI_OPCODE_VCP_DDCPROC:
			RTDDdcciEdidProc();

			break;
		
            case _DDCCI_OPCODE_VCP_NEW_CONTROL_VALUE:

                if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x01)
                {
                    g_ucDdcciNewControlValue = 0x01;
                }

                break;

#if(_SHARPNESS_SUPPORT == _ON)
            case _DDCCI_OPCODE_VCP_SHARPNESS:

                if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] > 4)
                {
                    g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] = 4;
                }
                SET_OSD_SHARPNESS(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);

                UserCommonAdjustSharpness(SysSourceGetInputPort());
                SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

                break;
#endif

            case _DDCCI_OPCODE_VCP_INPUT_SOURCE:

               /* if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x01)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
                    SysSourceSwitchInputPort(_VGA_1);
                    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x03)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
                    SysSourceSwitchInputPort(_DVI_1);
                    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x04)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
                    SysSourceSwitchInputPort(_DVI_2);
                    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x0F)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
                    SysSourceSwitchInputPort(_DP_1);
                    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x10)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
                    SysSourceSwitchInputPort(_DP_2);
                    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x11)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
                    SysSourceSwitchInputPort(_HDMI_1);
                    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0x12)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysSourceSetScanType(_SOURCE_SWITCH_FIXED_PORT);
                    SysSourceSwitchInputPort(_HDMI_2);
                    SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                }*/

				
				SET_FORCE_POW_SAV_STATUS(_FALSE);
///////////////////////////////////////vga///////////////////////////////////////////////////////////////////////////////			   
#if(_A0_INPUT_PORT_TYPE==_A0_VGA_PORT)
				if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0X01)
					SysSourceSwitchInputPort(_A0_INPUT_PORT);
#endif
///////////////////////////////////////dp1///////////////////////////////////////////////////////////////////////////////			   
				if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0X0F)
#if(_D0_INPUT_PORT_TYPE==_D0_DP_PORT)
					SysSourceSwitchInputPort(_D0_INPUT_PORT);
#elif(_D1_INPUT_PORT_TYPE==_D1_DP_PORT)
					SysSourceSwitchInputPort(_D1_INPUT_PORT);
#elif(_D2_INPUT_PORT_TYPE==_D2_DP_PORT)
					SysSourceSwitchInputPort(_D2_INPUT_PORT);
#else
					;
#endif
///////////////////////////////////////dp2///////////////////////////////////////////////////////////////////////////////			   
				if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0X10)
#if(_D0_INPUT_PORT_TYPE==_D0_DP_PORT)&&(_D1_INPUT_PORT_TYPE==_D1_DP_PORT)
					SysSourceSwitchInputPort(_D1_INPUT_PORT);
#elif((_D0_INPUT_PORT_TYPE==_D0_DP_PORT)||(_D1_INPUT_PORT_TYPE==_D1_DP_PORT))&&(_D2_INPUT_PORT_TYPE==_D2_DP_PORT)
					SysSourceSwitchInputPort(_D2_INPUT_PORT);
#else
					;
#endif

///////////////////////////////////////HDMI1///////////////////////////////////////////////////////////////////////////////			   
				if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0X11)
#if(_D0_INPUT_PORT_TYPE==_D0_HDMI_PORT)
					SysSourceSwitchInputPort(_D0_INPUT_PORT);
#elif(_D1_INPUT_PORT_TYPE==_D1_HDMI_PORT)
					SysSourceSwitchInputPort(_D1_INPUT_PORT);
#elif(_D2_INPUT_PORT_TYPE==_D2_HDMI_PORT)
					SysSourceSwitchInputPort(_D2_INPUT_PORT);
#elif(_D3_INPUT_PORT_TYPE==_D3_HDMI_PORT)
					SysSourceSwitchInputPort(_D3_INPUT_PORT);
#elif(_D4_INPUT_PORT_TYPE==_D4_HDMI_PORT)
					SysSourceSwitchInputPort(_D4_INPUT_PORT);
#else
					;
#endif
///////////////////////////////////////HDMI2/////////////////////////////////////////////////////////////////////////////// 
				if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 0X12)
#if(_D4_INPUT_PORT_TYPE==_D4_HDMI_PORT)
					SysSourceSwitchInputPort(_D4_INPUT_PORT);
#elif(_D3_INPUT_PORT_TYPE==_D3_HDMI_PORT)
					SysSourceSwitchInputPort(_D3_INPUT_PORT);
#elif(_D2_INPUT_PORT_TYPE==_D2_HDMI_PORT)
					SysSourceSwitchInputPort(_D2_INPUT_PORT);
#elif(_D1_INPUT_PORT_TYPE==_D1_HDMI_PORT)
					SysSourceSwitchInputPort(_D1_INPUT_PORT);
#elif(_D0_INPUT_PORT_TYPE==_D0_HDMI_PORT)
					SysSourceSwitchInputPort(_D0_INPUT_PORT);
#else
					;
#endif

///////////////////////////////////////ENDIF/////////////////////////////////////////////////////////////////////////////// 		   

				SysModeSetResetTarget(_MODE_ACTION_RESET_TO_SEARCH);
                break;

            case _DDCCI_OPCODE_VCP_FACTORY_RESET:

                RTDDdcciResetAllSettings();

#if(_VGA_SUPPORT == _ON)
                if(SysSourceGetSourceType() == _SOURCE_VGA)
                {
                    UserCommonAutoConfig();
                }
                else
#endif
                {
                    SET_DIGITAL_H_POSITION(50);
                    SET_DIGITAL_V_POSITION(50);
                    UserCommonAdjustHPosition(GET_DIGITAL_H_POSITION());
                    UserCommonAdjustVPosition(GET_DIGITAL_V_POSITION());
                }

                break;

            case _DDCCI_OPCODE_VCP_RECAL_BRI_CON:

                RTDNVRamRestoreBriCon();
                RTDNVRamRestoreBacklight();

                UserAdjustBacklight(GET_OSD_BACKLIGHT());

#if(_CONTRAST_SUPPORT == _ON)
                UserAdjustContrast(GET_OSD_CONTRAST());
#endif

#if(_BRIGHTNESS_SUPPORT == _ON)
                UserAdjustBrightness(GET_OSD_BRIGHTNESS());
#endif
                break;

            case _DDCCI_OPCODE_VCP_GEOMETRY_RESET:

#if(_VGA_SUPPORT == _ON)
                if(SysSourceGetSourceType() == _SOURCE_VGA)
                {
                    UserCommonAutoConfig();
                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
                }
                else
#endif
                {
                    SET_DIGITAL_H_POSITION(50);
                    SET_DIGITAL_V_POSITION(50);
                    UserCommonAdjustHPosition(GET_DIGITAL_H_POSITION());
                    UserCommonAdjustVPosition(GET_DIGITAL_V_POSITION());
                }

                break;

            case _DDCCI_OPCODE_VCP_COLOR_RESET:

                RTDDdcciColorReset();

                break;

            case _DDCCI_OPCODE_VCP_COLOR_TEMP_REQUEST:

                g_ucColorTempUnSupport = (g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] + 30);
                if(g_ucColorTempUnSupport >= 93)
                {
                    SET_COLOR_TEMP_TYPE(_CT_9300);
                }
                else if((g_ucColorTempUnSupport < 85) && (g_ucColorTempUnSupport >= 75))
                {
                    SET_COLOR_TEMP_TYPE(_CT_7500);
                }
                else if((g_ucColorTempUnSupport < 75) && (g_ucColorTempUnSupport >= 65))
                {
                    SET_COLOR_TEMP_TYPE(_CT_6500);
                }
                else if((g_ucColorTempUnSupport < 60) && (g_ucColorTempUnSupport >= 50))
                {
                    SET_COLOR_TEMP_TYPE(_CT_5800);
                }
                else
                {
                    SET_COLOR_TEMP_TYPE(_CT_SRGB);
                }

                RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());

#if(_CONTRAST_SUPPORT == _ON)
                UserAdjustContrast(GET_OSD_CONTRAST());
#endif
                OsdDispDisableOsd();

                break;

            case _DDCCI_OPCODE_VCP_CLOCK:

#if(_VGA_SUPPORT == _ON)
                if(SysSourceGetSourceType() == _SOURCE_VGA)
                {
                    if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] > 100)
                    {
                        g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] = 100;
                    }

#if(_AUTO_CLOCK_SAVE_VALUE_OPTION == _CLOCK_SAVE_PERCENT_VALUE)
                    SET_VGA_MODE_ADJUST_CLOCK(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);
#else
                    {
                        WORD usClockRangeMax = 0;
                        WORD usClockRangeMin = 0;

                        usClockRangeMax = UserCommonAdjustGetAdcClockRange(_GET_CLOCKRANGE_MAX);
                        usClockRangeMin = UserCommonAdjustGetAdcClockRange(_GET_CLOCKRANGE_MIN);

                        SET_VGA_MODE_ADJUST_CLOCK(UserCommonAdjustPercentToRealValue(GET_VGA_MODE_ADJUST_CLOCK(), usClockRangeMax, usClockRangeMin, (((usClockRangeMax - usClockRangeMin) / 2) + usClockRangeMin)));
                    }
#endif
                    UserCommonAdjustClock(GET_VGA_MODE_ADJUST_CLOCK());
                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
                }
#endif // End of #if(_VGA_SUPPORT == _ON)

                break;

            case _DDCCI_OPCODE_VCP_BACKLIGHT:
                ucTemp=g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE];

                if(ucTemp > 100)
                {
                    ucTemp = 100;
                }

                SET_OSD_BACKLIGHT(ucTemp);

                UserAdjustBacklight(GET_OSD_BACKLIGHT());
                SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

                break;

            case _DDCCI_OPCODE_VCP_CONTRAST:

 
                 
                 ucTemp=g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE];
                  
                  if(ucTemp > 100)
                  {
                      ucTemp = 100;
                  }
                 

                SET_OSD_CONTRAST(ucTemp);

#if(_CONTRAST_SUPPORT == _ON)
                UserAdjustContrast(GET_OSD_CONTRAST());
#endif
                SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_BRICON_MSG);

                break;

            case _DDCCI_OPCODE_VCP_SELECT_COLOR_PRESET:
//"(prot(monitor)type(LCD)model(RTK)cmds(01 02 03 07 0C E3 F3)
//vcp(02 04 05 06 08 0B 0C 0E 10 12 
//14(01 02 04 05 06 08 0B) 16 18 1A 1E 1F 20 30 3E 52 
//60(01 03 04 0F 10 11 12) 87 AC AE B2 B6 C6 C8 CA 
//CC(00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10 11 12) 
//D6(01 02 04) 
//DF FD FF)
//mswhql(1)
//asset_eep(40)
//mccs_ver(2.2))"

                switch(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE])
                {
                    case 0x0B:
                        SET_COLOR_TEMP_TYPE(_CT_USER);
                        break;

                    case 0x05:
                        SET_COLOR_TEMP_TYPE(_CT_6500);
                        break;

                    case 0x08:
                        SET_COLOR_TEMP_TYPE(_CT_9300);
                        break;

                    case 0x01:
                        SET_COLOR_TEMP_TYPE(_CT_SRGB);
                        break;

                    case 0x04:
                        SET_COLOR_TEMP_TYPE(_CT_5800);
                        break;

                    case 0x06:
                        SET_COLOR_TEMP_TYPE(_CT_7500);
                        break;
                    /*
                    case 0x02:
                        SET_COLOR_TEMP_TYPE(_CT_OFF);
                        break;
                    */
                    default:
                        break;
                }

                RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());

#if(_CONTRAST_SUPPORT == _ON)
                UserAdjustContrast(GET_OSD_CONTRAST());
#endif
                OsdDispDisableOsd();

                break;

            case _DDCCI_OPCODE_VCP_RED_GAIN:
                // Only write at customer color
                if(GET_COLOR_TEMP_TYPE() != _CT_USER)
                {
                    ucTemp = GET_COLOR_TEMP_TYPE();

                    SET_COLOR_TEMP_TYPE(_CT_USER);

                    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());

                    SET_COLOR_TEMP_TYPE_USER_R(UserCommonAdjustPercentToRealValue(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE],
                                                                                  _COLORTEMP_USER_MAX,
                                                                                  _COLORTEMP_USER_MIN,
                                                                                  _COLORTEMP_USER_CENTER));

                    RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());

                    SET_COLOR_TEMP_TYPE(ucTemp);

                    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
                }
                else
                {
                    SET_COLOR_TEMP_TYPE_USER_R(UserCommonAdjustPercentToRealValue(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE],
                                                                                  _COLORTEMP_USER_MAX,
                                                                                  _COLORTEMP_USER_MIN,
                                                                                  _COLORTEMP_USER_CENTER));
#if(_CONTRAST_SUPPORT == _ON)
                    UserAdjustContrast(GET_OSD_CONTRAST());
#endif

                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_COLORPROC_MSG);
                }

                break;

            case _DDCCI_OPCODE_VCP_GREEN_GAIN:
                // Only write at customer color
                if(GET_COLOR_TEMP_TYPE() != _CT_USER)
                {
                    ucTemp = GET_COLOR_TEMP_TYPE();

                    SET_COLOR_TEMP_TYPE(_CT_USER);

                    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());

                    SET_COLOR_TEMP_TYPE_USER_G(UserCommonAdjustPercentToRealValue(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE],
                                                                                  _COLORTEMP_USER_MAX,
                                                                                  _COLORTEMP_USER_MIN,
                                                                                  _COLORTEMP_USER_CENTER));

                    RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());

                    SET_COLOR_TEMP_TYPE(ucTemp);

                    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
                }
                else
                {
                    SET_COLOR_TEMP_TYPE_USER_G(UserCommonAdjustPercentToRealValue(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE],
                                                                                  _COLORTEMP_USER_MAX,
                                                                                  _COLORTEMP_USER_MIN,
                                                                                  _COLORTEMP_USER_CENTER));
#if(_CONTRAST_SUPPORT == _ON)
                    UserAdjustContrast(GET_OSD_CONTRAST());
#endif

                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_COLORPROC_MSG);
                }

                break;

            case _DDCCI_OPCODE_VCP_BLUE_GAIN:
                // Only write at customer color
                if(GET_COLOR_TEMP_TYPE() != _CT_USER)
                {
                    ucTemp = GET_COLOR_TEMP_TYPE();

                    SET_COLOR_TEMP_TYPE(_CT_USER);

                    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());

                    SET_COLOR_TEMP_TYPE_USER_B(UserCommonAdjustPercentToRealValue(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE],
                                                                                  _COLORTEMP_USER_MAX,
                                                                                  _COLORTEMP_USER_MIN,
                                                                                  _COLORTEMP_USER_CENTER));

                    RTDNVRamSaveColorSetting(GET_COLOR_TEMP_TYPE());

                    SET_COLOR_TEMP_TYPE(ucTemp);

                    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());
                }
                else
                {
                    SET_COLOR_TEMP_TYPE_USER_B(UserCommonAdjustPercentToRealValue(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE],
                                                                                  _COLORTEMP_USER_MAX,
                                                                                  _COLORTEMP_USER_MIN,
                                                                                  _COLORTEMP_USER_CENTER));
#if(_CONTRAST_SUPPORT == _ON)
                    UserAdjustContrast(GET_OSD_CONTRAST());
#endif

                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_COLORPROC_MSG);
                }

                break;

#if(_VGA_SUPPORT == _ON)
            case _DDCCI_OPCODE_VCP_AUTO_SET_UP:

                if(SysSourceGetSourceType() == _SOURCE_VGA)
                {
                    if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] != 0)
                    {
                        SET_OSD_EVENT_MESSAGE(_OSDEVENT_DO_AUTO_CONFIG_MSG);
                    }
                }

                break;
#endif

            case _DDCCI_OPCODE_VCP_HPOSITION:
#if(_VGA_SUPPORT == _ON)
                if(SysSourceGetSourceType() == _SOURCE_VGA)
                {
                    SET_VGA_MODE_ADJUST_H_POSITION(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);
                    UserCommonAdjustHPosition(GET_VGA_MODE_ADJUST_H_POSITION());
                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
                }
                else
#endif
                {
                    SET_DIGITAL_H_POSITION(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);
                    UserCommonAdjustHPosition(GET_DIGITAL_H_POSITION());
                }
                break;

            case _DDCCI_OPCODE_VCP_VPOSITION:
#if(_VGA_SUPPORT == _ON)
                if(SysSourceGetSourceType() == _SOURCE_VGA)
                {
                    if(abs(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] - GET_VGA_MODE_ADJUST_V_POSITION()) > 50)
                    {
                        SET_VGA_MODE_ADJUST_V_POSITION(50);
                    }
                    SET_VGA_MODE_ADJUST_V_POSITION(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);
                    UserCommonAdjustVPosition(GET_VGA_MODE_ADJUST_V_POSITION());
                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
                }
                else
#endif
                {
                    SET_DIGITAL_V_POSITION(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);
                    UserCommonAdjustVPosition(GET_DIGITAL_V_POSITION());
                }

                break;

#if(_VGA_SUPPORT == _ON)
            case _DDCCI_OPCODE_VCP_CLOCK_PHASE:

                if(SysSourceGetSourceType() == _SOURCE_VGA)
                {
                    if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] > 100)
                    {
                        g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] = 100;
                    }

                    SET_VGA_MODE_ADJUST_PHASE(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);

                    UserCommonAdjustPhase(GET_VGA_MODE_ADJUST_PHASE());
                    SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_MODEUSERDATA_MSG);
                }

                break;
#endif

            case _DDCCI_OPCODE_VCP_ACTIVE_CONTROL:

                g_ucDdcciActiveValue = g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE];

                break;

#if(_AUDIO_SUPPORT == _ON)
            case _DDCCI_OPCODE_VCP_AUDIO_VOLUME:

                if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] > 100)
                {
                    g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] = 100;
                }

                SET_OSD_VOLUME(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE]);

                UserAdjustAudioVolume(GET_OSD_VOLUME());
                SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

                break;
#endif // End of #if(_AUDIO_SUPPORT == _ON)

            case _DDCCI_OPCODE_VCP_RED_BLACK_LEVEL:

                g_ucDdcciRedBlackLevel = g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE];
                // UserAdjustBrightness(g_ucDdcciRedBlackLevel);                            // Please don't delete

                break;

            case _DDCCI_OPCODE_VCP_GREEN_BLACK_LEVEL:

                g_ucDdcciGreenBlackLevel = g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE];
                // UserAdjustBrightness(g_ucDdcciGreenBlackLevel);                             // Please don't delete

                break;

            case _DDCCI_OPCODE_VCP_BLUE_BLACK_LEVEL:

                g_ucDdcciBlueBlackLevel = g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE];
                // UserAdjustBrightness(g_ucDdcciGreenBlackLevel);                             // Please don't delete

                break;

            case _DDCCI_OPCODE_VCP_POWER_MODE:

                if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 4)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysPowerSetTargetPowerStatus(_POWER_STATUS_OFF);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 2)
                {
                    SET_FORCE_POW_SAV_STATUS(_TRUE);
                    SysPowerSetTargetPowerStatus(_POWER_STATUS_SAVING);
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 1)
                {
                    SET_FORCE_POW_SAV_STATUS(_FALSE);
                    SysPowerSetTargetPowerStatus(_POWER_STATUS_NORMAL);
                }

                break;
				
            case _DDCCI_OPCODE_VCP_OSD_LANGUAGE:

                switch(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE])
                {
                    case 0x02:
                        ucTemp=_ENGLISH;
                        break;
                    case 0x03:
                        ucTemp=_FRENCH;
                        break;
                    case 0x0A:
                        ucTemp=_SPANISH;
                        break;
                    case 0x08:
                        ucTemp=_PORTUGUESE;
                        break;
                    case 0x04:
                        ucTemp=_GERMAN;
                        break;
                    case 0x05:
                        ucTemp=_ITALIAN;
                        break;
                    case 0x14:
                        ucTemp=_DUTCH;
                        break;
                    case 0x0B:
                        ucTemp=_SVENSKA;
                        break;
                    case 0x16:
                        ucTemp=_SUOMI;
                        break;
                    case 0x1C:
                        ucTemp=_POLSKI;
                        break;
                    case 0x12:
                        ucTemp=_CESTINA;
                        break;
                    case 0x09:
                        ucTemp=_RUSSIAN;
                        break;
                    case 0x07:
                        ucTemp=_KOREAN;
                        break;
                    case 0x01:
                        ucTemp=_CHINESE_F;
                        break;
                    case 0x0D:
                        ucTemp=_CHINESE_S;
                        break;
                    case 0x06:
                        ucTemp=_JAPANESE;
                        break;
                    case 0x17:
                        ucTemp=_XILAYU;
                        break;
                    case 0x1A:
                        ucTemp=_MAGYAR;
                        break;
                    case 0xC:
                        ucTemp=_TURKISH;
                        break;
                   
                    default:
                        break;
                }

                SET_OSD_LANGUAGE(ucTemp);
                UpdateMaskValue();
                RTDNVRamSaveOSDData();
               // OsdDispDisableOsd();
               // SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);
              

                break;

            case _DDCCI_OPCODE_VCP_OSD_ON_OFF:

                if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 1)
                {
                    OsdDispDisableOsd();
                }
                else if(g_pucDdcciRxBuf[_DDCCI_SET_LOW_BYTE] == 2)
                {
	                OsdDispMainMenu();
//                    OsdFuncEnableOsd();
                }

                break;

#if((_OGC_SUPPORT == _ON) || (_OCC_SUPPORT == _ON) || (_OGC_DICOM_SUPPORT == _ON))
            case _DDCCI_OPCODE_VCP_DISP_CALIBRATION:

                UserCommonDdcciDispCalibProcess();

                break;
#endif

            default:

                UserCommonDdcciInitTx();

                break;
        }
    }
}

//--------------------------------------------------
// Description  : Reset monitor
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDDdcciResetAllSettings(void)
{
    UserCommonNVRamRestoreSystemData();
    RTDNVRamRestoreOSDData();

#if(_VGA_SUPPORT == _ON)
    UserCommonNVRamRestoreModeUserData();
#endif

    if((UserCommonNVRamGetSystemData(_SEARCH_PORT) != SysSourceGetInputPort()) ||
       (UserCommonNVRamGetSystemData(_SOURCE_SCAN_TYPE) != SysSourceGetScanType()))
    {
        UserCommonNVRamSetSystemData(_SEARCH_PORT, SysSourceGetInputPort());
        UserCommonNVRamSetSystemData(_SOURCE_SCAN_TYPE, SysSourceGetScanType());
        UserCommonNVRamSaveSystemData();
    }

    RTDDdcciColorReset();
}

//--------------------------------------------------
// Description  : Reset color to default
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void RTDDdcciColorReset(void)
{
    g_ucDdcciRedBlackLevel = _DDCCI_BLACKLEVEL_DEFAULT;
    g_ucDdcciGreenBlackLevel = _DDCCI_BLACKLEVEL_DEFAULT;
    g_ucDdcciBlueBlackLevel = _DDCCI_BLACKLEVEL_DEFAULT;

    RTDNVRamRestoreUserColorSetting();
    RTDNVRamLoadColorSetting(GET_COLOR_TEMP_TYPE());

    RTDNVRamRestoreBriCon();
    RTDNVRamRestoreBacklight();

    UserAdjustBacklight(GET_OSD_BACKLIGHT());

#if(_CONTRAST_SUPPORT == _ON)
    UserAdjustContrast(GET_OSD_CONTRAST());
#endif

#if(_BRIGHTNESS_SUPPORT == _ON)
    UserAdjustBrightness(GET_OSD_BRIGHTNESS());
#endif
}


void RTDDdcciEdidProc(void)
{
	BYTE udAddress = 0;
	BYTE ucFlag = 0;

	ucFlag = (g_pucDdcciRxBuf[4]);
	udAddress = (g_pucDdcciRxBuf[5]);

	switch(ucFlag)

	{
		case 0xff:
			if(UserCommonFlashErasePage(_EDID_FLASH_BANK, _EDID_ADDRESS_FLASH))
				RTDDdccireply(_TRUE);				
			break;
			
		case 1:				
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)
#if(_A0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			memcpy(&MCU_DDCRAM_A0[udAddress], &g_pucDdcciRxBuf[6], 8);
			RTDDdccireply(_TRUE);	
#elif(_A0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_A0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
#else
			RTDDdccireply(_FALSE);	
#endif
			break;


		case 2:				
#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)
#if(_D0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			memcpy(&MCU_DDCRAM_D0[udAddress], &g_pucDdcciRxBuf[6], 8);
			RTDDdccireply(_TRUE);		
#elif(_D0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)	
#elif(_D0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
#else
		RTDDdccireply(_FALSE);	
#endif
			break;
			

		case 3:			
#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)
#if(_D1_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			memcpy(&MCU_DDCRAM_D1[udAddress], &g_pucDdcciRxBuf[6], 8);
			RTDDdccireply(_TRUE);		
#elif(_D1_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_D1_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
#else
		RTDDdccireply(_FALSE);	
#endif
			break;

		case 4:				
#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)
#if(_D2_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			memcpy(&MCU_DDCRAM_D2[udAddress], &g_pucDdcciRxBuf[6], 8);
			RTDDdccireply(_TRUE);
#elif(_D2_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_D2_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
#else
		RTDDdccireply(_FALSE);	
#endif
			break;

		case 5:			
#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)
#if(_D3_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			memcpy(&MCU_DDCRAM_D3[udAddress], &g_pucDdcciRxBuf[6], 8);
			RTDDdccireply(_TRUE);	
#elif(_D3_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_D3_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
#else
		RTDDdccireply(_FALSE);	
#endif
			break;

		case 0x80:
#if(_A0_INPUT_PORT_TYPE != _A0_NO_PORT)
#if(_A0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			if(UserCommonFlashWrite(_EDID_FLASH_BANK,_EDID_A0_ADDRESS_FLASH, _A0_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_A0))
			{
				if(UserCommonFlashRead(_EDID_FLASH_BANK,_EDID_A0_ADDRESS_FLASH, _A0_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_A0))
				{
					if(!RTDDdcciDdcCheck(MCU_DDCRAM_A0,_A0_EMBEDDED_DDCRAM_MAX_SIZE))
					{
						RTDDdccireply(_FALSE);				
						return;
					}
				}
			}
			else
			{		
				return;
			}
#elif(_A0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_A0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif

#endif

#if(_D0_INPUT_PORT_TYPE != _D0_NO_PORT)
#if(_D0_INPUT_PORT_TYPE ==_D0_DVI_PORT )
			udAddress = 128;
#else
			udAddress = 256;
#endif
#if(_D0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			if(UserCommonFlashWrite(_EDID_FLASH_BANK,_EDID_D0_ADDRESS_FLASH, _D0_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D0))
			{
				if(UserCommonFlashRead(_EDID_FLASH_BANK,_EDID_D0_ADDRESS_FLASH, _D0_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D0))
				{
					if(!RTDDdcciDdcCheck(MCU_DDCRAM_D0,_D0_EMBEDDED_DDCRAM_MAX_SIZE))
					{
						RTDDdccireply(_FALSE);				
						return;
					}
				}
			}
			else
			{
				return;
			}
#elif(_D0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_D0_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
			
#endif
			
#if(_D1_INPUT_PORT_TYPE != _D1_NO_PORT)
#if(_D1_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			if(UserCommonFlashWrite(_EDID_FLASH_BANK,_EDID_D1_ADDRESS_FLASH, _D1_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D1))
			{
				if(UserCommonFlashRead(_EDID_FLASH_BANK,_EDID_D1_ADDRESS_FLASH, _D1_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D1))
				{
					if(!RTDDdcciDdcCheck(MCU_DDCRAM_D1,_D1_EMBEDDED_DDCRAM_MAX_SIZE))
					{
						RTDDdccireply(_FALSE);				
						return;
					}
				}
			}
			else 
			{
				return;
			}
#elif(_D1_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_D1_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
#endif
							

#if(_D2_INPUT_PORT_TYPE != _D2_NO_PORT)
#if(_D2_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)				
			if(UserCommonFlashWrite(_EDID_FLASH_BANK,_EDID_D2_ADDRESS_FLASH, _D2_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D2))
			{
				if(UserCommonFlashRead(_EDID_FLASH_BANK,_EDID_D2_ADDRESS_FLASH, _D2_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D2))
				{
					if(!RTDDdcciDdcCheck(MCU_DDCRAM_D2,_D2_EMBEDDED_DDCRAM_MAX_SIZE))
					{
						RTDDdccireply(_FALSE);				
						return;
					}
				}
			}
			else
			{
				return;
			}
#elif(_D2_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_D2_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif
			
							
#endif

#if(_D3_INPUT_PORT_TYPE != _D3_NO_PORT)
#if(_D3_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_FLASH)
			if(UserCommonFlashWrite(_EDID_FLASH_BANK,_EDID_D3_ADDRESS_FLASH, _D3_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D3))
			{
				if(UserCommonFlashRead(_EDID_FLASH_BANK,_EDID_D3_ADDRESS_FLASH, _D3_EMBEDDED_DDCRAM_MAX_SIZE, MCU_DDCRAM_D3))
				{
					if(!RTDDdcciDdcCheck(MCU_DDCRAM_D3,_D3_EMBEDDED_DDCRAM_MAX_SIZE))
					{
						RTDDdccireply(_FALSE);				
						return;
					} 
				}
			}
			else
			{
				return;
			}
#elif(_D3_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_SYSTEM_EEPROM)
#elif(_D3_EMBEDDED_DDCRAM_LOCATION == _EDID_TABLE_LOCATION_USER)
#endif												
#endif
			RTDDdccireply(_TRUE);				

			break;

		default:
			break;

	}

}

#endif // End of #if(_OSD_TYPE == _REALTEK_2014_OSD)
