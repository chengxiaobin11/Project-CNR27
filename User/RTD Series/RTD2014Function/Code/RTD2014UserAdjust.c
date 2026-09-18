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
// ID Code      : RTD2014UserAdjust.c No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define __USER_ADJUST__
#define __USER_PANEL__

#include "UserCommonInclude.h"
#if(_AUDIO_SUPPORT == _ON)
#if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
#include "./TTS/RTD2014UserTTSRecordList.h"
#endif
#endif

#if(_OSD_TYPE == _REALTEK_2014_OSD)

//****************************************************************************
// DEFINITIONS / MACROS
//****************************************************************************

#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
#define _HLWIN_TYPE5_MOVE_TIME                      SEC(0.01)
#endif


//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************


//****************************************************************************
// CODE TABLES
//****************************************************************************
//----------------------------------------------------------------------------------------------------
// IR TABLE
//----------------------------------------------------------------------------------------------------
#if(_IR_SUPPORT == _IR_HW_SUPPORT)
BYTE code tIR_INITIAL_TABLE[] =
{
#if(_IR_PROTOCAL == _IR_NEC_DTV328)||(_IR_PROTOCAL == _IR_HHT_NEC)||(_IR_PROTOCAL == _IR_HHT_DZ_X5_147)
    #include "IRRemote/NEC_DTV328.h"

#elif(_IR_PROTOCAL == _IR_SONY_B102P)
    #include "IRRemote/SONY_B102P.h"

#elif(_IR_PROTOCAL == _IR_PHILIPS_RC6)
    #include "IRRemote/PHILIPS_RC6.h"
#else
    #include "IRRemote/NEC_DTV328.h"
#endif // End of #if(_IR_PROTOCAL == _IR_NEC_DTV328)
};
#endif

//****************************************************************************
// VARIABLE DECLARATIONS
//****************************************************************************
#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
bit g_bHLWinRLMove = _RIGHT;
WORD g_usHLWinHPos;
WORD g_usHLWinHWidth;
WORD g_usHLWinVPos;
WORD g_usHLWinVHeight;
#endif

#if((_DP_TYPE_C_PORT_CTRL_SUPPORT == _ON) && ((_PORT_CONTROLLER_RTS5400_SERIES_SUPPORT == _ON) || (_PORT_CONTROLLER_USERDECITION_SUPPORT == _ON)))
#if(_TWO_CHIP_DATA_EXCHANGE_MODE == _DATA_EXCHANGE_MODE_NONE)
bit g_bTypeCPortControllerPowerOffFlag = _FALSE;
#endif
#endif

//****************************************************************************
// FUNCTION DECLARATIONS
//****************************************************************************
//-------------------------------------------------------
// Adjust Backlight
//-------------------------------------------------------

//-------------------------------------------------------
// Dp Load Edid Related
//-------------------------------------------------------
#if((_EMBEDDED_EDID_SUPPORT == _ON) && (_WRITE_EDID_LOCATION_BY_USER_SUPPORT == _ON))
EnumEdidSelection UserAdjustGetDpEdidIndex(BYTE ucInputPort);
#endif

//-------------------------------------------------------
// Audio Related
//-------------------------------------------------------
#if(_AUDIO_SUPPORT == _ON)
#if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
void UserAdjustAudioTtsPlayEvent(EnumAudioTtsEvent enumTtsEvent);
#endif // End of #if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)

void UserAdjustAudioMuteSwitch(void);
void UserAdjustAudioVolume(BYTE ucVolume);
WORD UserAdjustAudioVolumeMapping(BYTE ucVolume);
#endif // End of #if(_AUDIO_SUPPORT == _ON)

//-------------------------------------------------------
// DCC
//-------------------------------------------------------
#if(_DCC_FUNCTION == _ON)
void UserAdjustDCC(BYTE ucColorEffect);
#endif // End of #if(_DCC_FUNCTION == _ON)

//-------------------------------------------------------
// ICM
//-------------------------------------------------------
#if(_ICM_SUPPORT == _ON)
void UserAdjustICM(BYTE ucColorEffect);
#endif

#if(_SCM_SUPPORT == _ON)
void UserAdjustSCM(BYTE ucColorEffect);
#endif

#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))
void UserAdjustColorEffectMode(void);
#endif

//-------------------------------------------------------
// CTS / BRI
//-------------------------------------------------------
#if(_CONTRAST_SUPPORT == _ON)
void UserAdjustContrast(WORD usContrast);
#endif

#if(_BRIGHTNESS_SUPPORT == _ON)
void UserAdjustBrightness(WORD usBrightness);
#endif

//-------------------------------------------------------
// 3D Gamma
//-------------------------------------------------------

//-------------------------------------------------------
// sRGB
//-------------------------------------------------------
#if(_GLOBAL_HUE_SATURATION == _ON)
void UserAdjustGlobalHueSat(SWORD shHue, WORD usSat);
#endif

//-------------------------------------------------------
// Unifomity
//-------------------------------------------------------

//-------------------------------------------------------
// Output Gamma
//-------------------------------------------------------

//-------------------------------------------------------
// OD
//-------------------------------------------------------
#if(_OD_SUPPORT == _ON)
void UserAdjustOD(void);
#endif

//-------------------------------------------------------
// Highlight window
//-------------------------------------------------------
#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
void UserAdjustHLWinType(BYTE ucHLWinType);
void UserAdjustHLWinType5Move(void);
void UserAdjustHighLightWindowEffectSpace(void);
#endif

#if(_FREESYNC_OD_MEASURE == _ON)
void UserAdjustFREESYNCODMeasure(void);
#endif


//-------------------------------------------------------
// HW IR Mode
//-------------------------------------------------------
#if(_IR_SUPPORT == _IR_HW_SUPPORT)
void UserAdjusIR(void);
#endif

//-------------------------------------------------------
// DP
//-------------------------------------------------------
#if(_DP_EMBEDDED_SWITCH_SUPPORT_TYPE == _DP_EMBEDDED_SWITCH_2_DP)
void UserAdjustEmbeddedDpSwitch(void);
#endif

//-------------------------------------------------------
// Pixel Shift
//-------------------------------------------------------
#if(_PIXEL_SHIFT_SUPPORT == _ON)
void UserAdjustPixelShifting(void);
#endif

//-------------------------------------------------------
// SDRToHDR
//-------------------------------------------------------
#if(_SDR_TO_HDR_SUPPORT == _ON)
void UserAdjustSDRToHDR(bit bOn);
#endif

//-------------------------------------------------------
// DCR
//-------------------------------------------------------
#if(_DCR_SUPPORT == _ON)
#if(_LD_TUNNEL_DETECT_SUPPORT == _ON)
void UserAdjustDCRTHD(void);
#endif
#endif

//-------------------------------------------------------
// Type-C Port Controller
//-------------------------------------------------------
#if(_DP_TYPE_C_PORT_CTRL_SUPPORT == _ON)
#if((_PORT_CONTROLLER_RTS5400_SERIES_SUPPORT == _ON) || (_PORT_CONTROLLER_USERDECITION_SUPPORT == _ON))
#if(_TWO_CHIP_DATA_EXCHANGE_MODE == _DATA_EXCHANGE_MODE_NONE)
void UserAjustTypeCPowerControl(EnumPowerAction enumSwitch);
#endif
#endif
#endif

//-------------------------------------------------------
// HDR
//-------------------------------------------------------
#if((_EMBEDDED_EDID_SUPPORT == _ON) && (_DP_HDR10_SUPPORT == _ON) && (_DP_SUPPORT == _ON))
void UserAdjustHdrCheckDpVersion(WORD usHdrMode);
#endif

//-------------------------------------------------------
// DP Version
//-------------------------------------------------------
#if(_DP_SUPPORT == _ON)
void UserAdjustDpVersionForceUpdate(BYTE ucInputPort, bit bEnable, EnumDpVersionType enumDpVersionType);
#endif

//-------------------------------------------------------
// HDMI External Edid Index
//-------------------------------------------------------
#if(_HDMI_SUPPORT == _ON)
EnumEdidSelection UserAdjustGetHdmiExternalEdidIndex(BYTE ucInputPort);
#endif

//----------------------------------------------------------------------------
// Not Kernel Related Function
//----------------------------------------------------------------------------

#if((_EMBEDDED_EDID_SUPPORT == _ON) && (_WRITE_EDID_LOCATION_BY_USER_SUPPORT == _ON))
//--------------------------------------------------
// Description  : Get the Mapping of Edid index of Function Application
// Input Value  : ucInputPort
// Output Value : Edid Index
//--------------------------------------------------
EnumEdidSelection UserAdjustGetDpEdidIndex(BYTE ucInputPort)
{
    BYTE ucIndex = 0;
    BYTE ucDpResolution = 0;

#if(_DP_FREESYNC_SUPPORT == _ON)
    if((GET_OSD_FREE_SYNC_STATUS() == _ON))
    {
        ucIndex += ((_DP_HDR10_SUPPORT == _ON) ? 0x06 : 0x03);
    }
#endif

#if(_DP_HDR10_SUPPORT == _ON)
    if((UserInterfaceHDRGetHDR10ModeStatus(ucInputPort) != _HDR10_MODE_OFF))
    {
        ucIndex += 0x03;
    }
#endif

#if(_DP_ADAPTIVESYNC_SUPPORT == _ON)
    if((GET_OSD_DP_ADAPTIVE_SYNC_STATUS() == _ON))
    {
        ucIndex += ((GET_OSD_FREE_SYNC_STATUS() == _ON) ? 0x06 : 0x03);
    }
#endif

    switch(ucInputPort)
    {
        case _D0_INPUT_PORT:
            ucDpResolution = UserCommonNVRamGetSystemData(_EDID_D0_SELECT);
            break;
        case _D1_INPUT_PORT:
            ucDpResolution = UserCommonNVRamGetSystemData(_EDID_D1_SELECT);
            break;
        case _D2_INPUT_PORT:
            ucDpResolution = UserCommonNVRamGetSystemData(_EDID_D2_SELECT);
            break;
        case _D6_INPUT_PORT:
            ucDpResolution = UserCommonNVRamGetSystemData(_EDID_D6_SELECT);
            break;
        default:
            break;
    }

    switch(ucDpResolution)
    {
        case _DP_EDID_1080P:
            break;

        case _DP_EDID_2560_1440:
            ucIndex += 0x01;
            break;

        case _DP_EDID_4K2K_60HZ:
            ucIndex += 0x02;
            break;

        default:
            break;
    }

    return ucIndex;
}
#endif

#if(_AUDIO_SUPPORT == _ON)
#if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)
//--------------------------------------------------
// Description  : Adjust TTS Play Event
// Input Value  : EnumAudioTtsEvent
// Output Value : None
//--------------------------------------------------
void UserAdjustAudioTtsPlayEvent(EnumAudioTtsEvent enumTtsEvent)
{
    StructAudioTtsSegment pstTtsSegment[_AUDIO_TTS_DATA_SEGMENT_SIZE];
    EnumAudioTtsPlayStatus enumTtsPlayStatus = UserCommonAudioTtsGetPlaybackStatus();

    if(enumTtsPlayStatus == _TTS_PROCESSING)
    {
        DebugMessageAudio("[TTS] Playback Still Processing", 0x00);

        return;
    }
    else if(enumTtsPlayStatus == _TTS_PLAY_ERROR)
    {
        DebugMessageAudio("[TTS] Playback Error", 0x00);

        // Check Error Segment
        switch(UserCommonAudioTtsGetErrorSegment())
        {
            case 0x00:
                break;

            default:
                break;
        }

        return;
    }

    // TTS Event Judgment
    switch(enumTtsEvent)
    {
        case _AUDIO_TTS_EVENT_POWER_ON:

            DebugMessageAudio("[TTS] Set POWER_ON event", _AUDIO_TTS_EVENT_POWER_ON);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_POWER_ON;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_POWER_ON;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DISPLAY_INFORMATION;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_DISPLAY_INFORMATION;

            // Check Input Port
            switch(SysSourceGetInputPort())
            {
                case _A0_INPUT_PORT:

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_ANALOG_PORT_0;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_ANALOG_PORT_0;

                    pstTtsSegment[3].ulDataAddress = _TTS_ADDRESS_VGA_PORT;
                    pstTtsSegment[3].usDataLength = _TTS_LENGTH_VGA_PORT;

                    break;

                case _D0_INPUT_PORT:

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_0;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_DIGITAL_PORT_0;

                    pstTtsSegment[3].ulDataAddress = _TTS_ADDRESS_DP_PORT;
                    pstTtsSegment[3].usDataLength = _TTS_LENGTH_DP_PORT;

                    break;

                case _D1_INPUT_PORT:

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_1;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_DIGITAL_PORT_1;

                    pstTtsSegment[3].ulDataAddress = _TTS_ADDRESS_HDMI_PORT;
                    pstTtsSegment[3].usDataLength = _TTS_LENGTH_HDMI_PORT;

                    break;

                default:

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_OTHER;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_OTHER;

                    pstTtsSegment[3].ulDataAddress = _TTS_ADDRESS_OTHER;
                    pstTtsSegment[3].usDataLength = _TTS_LENGTH_OTHER;

                    break;
            }

            pstTtsSegment[4].ulDataAddress = _TTS_ADDRESS_1920_BY_1080_60_HZ;
            pstTtsSegment[4].usDataLength = _TTS_LENGTH_1920_BY_1080_60_HZ;

            // End command: Data_Length = 0x0000
            pstTtsSegment[5].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 5, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_POWER_OFF:
        case _AUDIO_TTS_EVENT_POWER_SAVING:

            DebugMessageAudio("[TTS] Set POWER_OFF event", _AUDIO_TTS_EVENT_POWER_OFF);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_POWER_OFF;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_POWER_OFF;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_MENU:

            DebugMessageAudio("[TTS] Set MENU event", _AUDIO_TTS_EVENT_KEY_MENU);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_MENU;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_MENU;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_PICTURE;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_PICTURE;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_LEFT:

            DebugMessageAudio("[TTS] Set KEY_LEFT event", _AUDIO_TTS_EVENT_KEY_LEFT);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DISPLAY_INFORMATION;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DISPLAY_INFORMATION;

            // Check Input Port
            switch(SysSourceGetInputPort())
            {
                case _A0_INPUT_PORT:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_ANALOG_PORT_0;
                    pstTtsSegment[1].usDataLength = _TTS_LENGTH_ANALOG_PORT_0;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_VGA_PORT;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_VGA_PORT;

                    break;

                case _D0_INPUT_PORT:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_0;
                    pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_0;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_DP_PORT;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_DP_PORT;

                    break;

                case _D1_INPUT_PORT:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_1;
                    pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_1;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_HDMI_PORT;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_HDMI_PORT;

                    break;

                default:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_OTHER;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_OTHER;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_OTHER;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_OTHER;

                    break;
            }

            pstTtsSegment[3].ulDataAddress = _TTS_ADDRESS_1920_BY_1080_60_HZ;
            pstTtsSegment[3].usDataLength = _TTS_LENGTH_1920_BY_1080_60_HZ;

            // End command: Data_Length = 0x0000
            pstTtsSegment[4].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 4, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_RIGHT:

            DebugMessageAudio("[TTS] Set KEY_RIGHT event", _AUDIO_TTS_EVENT_KEY_RIGHT);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_INPUT_SOURCE;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_INPUT_SOURCE;

            // if((SysSourceGetScanType() != _SOURCE_SWITCH_FIXED_PORT) || (SysSourceGetInputPort() != _A0_INPUT_PORT))
            if(SysSourceGetScanType() != _SOURCE_SWITCH_FIXED_PORT)
            {
                // Auto Search
                pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_AUTO_SEARCH;
                pstTtsSegment[1].usDataLength = _TTS_LENGTH_AUTO_SEARCH;

                // End command: Data_Length = 0x0000
                pstTtsSegment[2].usDataLength = 0x0000;
            }
            else
            {
                // Check Input Port
                switch(SysSourceGetInputPort())
                {
                    case _A0_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_ANALOG_PORT_0;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_ANALOG_PORT_0;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_VGA_PORT;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_VGA_PORT;

                        break;

                    case _D0_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_0;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_0;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_DP_PORT;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_DP_PORT;

                        break;

                    case _D1_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_1;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_1;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_HDMI_PORT;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_HDMI_PORT;

                        break;

                    case _D2_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_2;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_2;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_OFF;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_OFF;

                        break;

                    case _D3_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_3;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_3;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_OFF;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_OFF;

                        break;

                    case _D4_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_4;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_4;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_OFF;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_OFF;

                        break;

                    case _D5_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_5;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_5;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_OFF;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_OFF;

                        break;

                    case _D6_INPUT_PORT:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_6;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_6;

                        pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_ERROR;
                        pstTtsSegment[2].usDataLength = _TTS_LENGTH_ERROR;

                        break;

                    default:

                        pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_ERROR;
                        pstTtsSegment[1].usDataLength = _TTS_LENGTH_ERROR;

                        // End command: Data_Length = 0x0000
                        pstTtsSegment[2].usDataLength = 0x0000;

                        break;
                }
            }

            // End command: Data_Length = 0x0000
            pstTtsSegment[3].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 3, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_ON:

            DebugMessageAudio("[TTS] Set ON event", _AUDIO_TTS_EVENT_KEY_ON);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_ON;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_ON;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_OFF:

            DebugMessageAudio("[TTS] Set OFF event", _AUDIO_TTS_EVENT_KEY_OFF);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_OFF;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_OFF;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_NUMBER:

            DebugMessageAudio("[TTS] Set NUMBER event", _AUDIO_TTS_EVENT_KEY_NUMBER);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_20;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_20;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_3;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_3;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_DIGITAL:

            DebugMessageAudio("[TTS] Set DIGITAL event", _AUDIO_TTS_EVENT_KEY_DIGITAL);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_KEY_ANALOG:

            DebugMessageAudio("[TTS] Set ANALOG event", _AUDIO_TTS_EVENT_KEY_ANALOG);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_ANALOG;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_ANALOG;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_LOGO_SHOW:

            DebugMessageAudio("[TTS] Set OSD_LOGO_SHOW event", _AUDIO_TTS_EVENT_OSD_LOGO_SHOW);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_REALTEK;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_REALTEK;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_PICTURE:

            DebugMessageAudio("[TTS] Set PICTURE event", _AUDIO_TTS_EVENT_OSD_PICTURE);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_PICTURE;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_PICTURE;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_DISPLAY_CONFIG:

            DebugMessageAudio("[TTS] Set DISPLAY_CONFIG event", _AUDIO_TTS_EVENT_OSD_DISPLAY_CONFIG);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DISPLAY;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DISPLAY;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_COLOR:

            DebugMessageAudio("[TTS] Set COLOR event", _AUDIO_TTS_EVENT_OSD_COLOR);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_COLOR;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_COLOR;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_ADVANCE:

            DebugMessageAudio("[TTS] Set ADVANCE event", _AUDIO_TTS_EVENT_OSD_ADVANCE);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_ADVANCE;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_ADVANCE;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_SOURCE:

            DebugMessageAudio("[TTS] Set INPUT_SOURCE event", _AUDIO_TTS_EVENT_OSD_INPUT_SOURCE);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_INPUT_SOURCE;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_INPUT_SOURCE;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO:

            DebugMessageAudio("[TTS] Set AUDIO event", _AUDIO_TTS_EVENT_OSD_AUDIO);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_AUDIO;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_AUDIO;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_OTHER:

            DebugMessageAudio("[TTS] Set OTHER event", _AUDIO_TTS_EVENT_OSD_OTHER);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_OTHER;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_OTHER;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_DISPLAY_INFORMATION:

            DebugMessageAudio("[TTS] Set DISPLAY_INFORMATION event", _AUDIO_TTS_EVENT_OSD_DISPLAY_INFORMATION);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DISPLAY_INFORMATION;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DISPLAY_INFORMATION;

            // Check Input Port
            switch(SysSourceGetInputPort())
            {
                case _A0_INPUT_PORT:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_ANALOG_PORT_0;
                    pstTtsSegment[1].usDataLength = _TTS_LENGTH_ANALOG_PORT_0;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_VGA_PORT;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_VGA_PORT;

                    break;

                case _D0_INPUT_PORT:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_0;
                    pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_0;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_DP_PORT;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_DP_PORT;

                    break;

                case _D1_INPUT_PORT:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_1;
                    pstTtsSegment[1].usDataLength = _TTS_LENGTH_DIGITAL_PORT_1;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_HDMI_PORT;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_HDMI_PORT;

                    break;

                default:

                    pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_OTHER;
                    pstTtsSegment[1].usDataLength = _TTS_LENGTH_OTHER;

                    pstTtsSegment[2].ulDataAddress = _TTS_ADDRESS_OTHER;
                    pstTtsSegment[2].usDataLength = _TTS_LENGTH_OTHER;

                    break;
            }

            pstTtsSegment[3].ulDataAddress = _TTS_ADDRESS_1920_BY_1080_60_HZ;
            pstTtsSegment[3].usDataLength = _TTS_LENGTH_1920_BY_1080_60_HZ;

            // End command: Data_Length = 0x0000
            pstTtsSegment[4].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 4, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_FACTORY:

            DebugMessageAudio("[TTS] Set FACTORY event", _AUDIO_TTS_EVENT_OSD_FACTORY);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_FACTORY;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_FACTORY;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_VOLUME:

            DebugMessageAudio("[TTS] Set AUDIO_VOLUME event", _AUDIO_TTS_EVENT_OSD_AUDIO_VOLUME);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_VOLUME;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_VOLUME;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_MUTE:

            DebugMessageAudio("[TTS] Set AUDIO_MUTE event", _AUDIO_TTS_EVENT_OSD_AUDIO_MUTE);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_MUTE;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_MUTE;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_STAND_ALONG:

            DebugMessageAudio("[TTS] Set STAND_ALONG event", _AUDIO_TTS_EVENT_OSD_AUDIO_STAND_ALONG);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_STAND_ALONG;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_STAND_ALONG;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_SOURCE:

            DebugMessageAudio("[TTS] Set AUDIO_SOURCE event", _AUDIO_TTS_EVENT_OSD_AUDIO_SOURCE);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_AUDIO_SOURCE;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_AUDIO_SOURCE;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_MODE:

            DebugMessageAudio("[TTS] Set AUDIO_MODE event", _AUDIO_TTS_EVENT_OSD_AUDIO_MODE);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_SOUND_MODE;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_SOUND_MODE;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_TTS:

            DebugMessageAudio("[TTS] Set AUDIO_TTS event", _AUDIO_TTS_EVENT_OSD_AUDIO_TTS);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_TTS;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_TTS;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_TTS_SUPPORT:

            DebugMessageAudio("[TTS] Set AUDIO_TTS_SUPPORT event", _AUDIO_TTS_EVENT_OSD_AUDIO_TTS_SUPPORT);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_TTS_SUPPORT;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_TTS_SUPPORT;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_TTS_TEXT_VOLUME:

            DebugMessageAudio("[TTS] Set AUDIO_TTS_TEXT_VOLUME event", _AUDIO_TTS_EVENT_OSD_AUDIO_TTS_TEXT_VOLUME);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_TTS_TEXT_VOLUME;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_TTS_TEXT_VOLUME;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_AUDIO_TTS_MUSIC_VOLUME:

            DebugMessageAudio("[TTS] Set AUDIO_TTS_MUSIC_VOLUME event", _AUDIO_TTS_EVENT_OSD_AUDIO_TTS_MUSIC_VOLUME);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_TTS_MUSIC_VOLUME;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_TTS_MUSIC_VOLUME;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_AUTO:

            DebugMessageAudio("[TTS] Set INPUT_AUTO event", _AUDIO_TTS_EVENT_OSD_INPUT_AUTO);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_AUTO_SEARCH;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_AUTO_SEARCH;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_A0:

            DebugMessageAudio("[TTS] Set INPUT_A0 event", _AUDIO_TTS_EVENT_OSD_INPUT_A0);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_ANALOG_PORT_0;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_ANALOG_PORT_0;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_VGA_PORT;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_VGA_PORT;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_D0:

            DebugMessageAudio("[TTS] Set INPUT_D0 event", _AUDIO_TTS_EVENT_OSD_INPUT_D0);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_0;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL_PORT_0;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_DP_PORT;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_DP_PORT;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_D1:

            DebugMessageAudio("[TTS] Set INPUT_D1 event", _AUDIO_TTS_EVENT_OSD_INPUT_D1);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_1;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL_PORT_1;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_HDMI_PORT;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_HDMI_PORT;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_D2:

            DebugMessageAudio("[TTS] Set INPUT_D2 event", _AUDIO_TTS_EVENT_OSD_INPUT_D2);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_2;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL_PORT_2;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_OFF;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_OFF;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_D3:

            DebugMessageAudio("[TTS] Set INPUT_D3 event", _AUDIO_TTS_EVENT_OSD_INPUT_D3);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_3;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL_PORT_3;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_OFF;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_OFF;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_D4:

            DebugMessageAudio("[TTS] Set INPUT_D4 event", _AUDIO_TTS_EVENT_OSD_INPUT_D4);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_4;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL_PORT_4;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_OFF;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_OFF;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_D5:

            DebugMessageAudio("[TTS] Set INPUT_D5 event", _AUDIO_TTS_EVENT_OSD_INPUT_D5);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_5;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL_PORT_5;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_OFF;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_OFF;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_OSD_INPUT_D6:

            DebugMessageAudio("[TTS] Set INPUT_D6 event", _AUDIO_TTS_EVENT_OSD_INPUT_D6);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_DIGITAL_PORT_6;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_DIGITAL_PORT_6;

            pstTtsSegment[1].ulDataAddress = _TTS_ADDRESS_OFF;
            pstTtsSegment[1].usDataLength = _TTS_LENGTH_OFF;

            // End command: Data_Length = 0x0000
            pstTtsSegment[2].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 2, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        case _AUDIO_TTS_EVENT_NONE:

            DebugMessageAudio("[TTS] Set NONE event", _AUDIO_TTS_EVENT_NONE);

            // Set TTS Data Info
            pstTtsSegment[0].ulDataAddress = _TTS_ADDRESS_ERROR;
            pstTtsSegment[0].usDataLength = _TTS_LENGTH_ERROR;

            // End command: Data_Length = 0x0000
            pstTtsSegment[1].usDataLength = 0x0000;

            // Active TTS Data Play
            UserCommonAudioTtsSetPlaybackActiveEvent(pstTtsSegment, 1, UserInterfaceAudioGetTtsPlayTextVolume(), UserInterfaceAudioGetTtsPlayAudioVolume());

            break;

        default:
            break;
    }
}
#endif // End of #if(_AUDIO_TTS_SUPPORT_TYPE == _AUDIO_TTS_EMBEDDED_TYPE)

//--------------------------------------------------
// Description  : Mute/Unmute Aduio Volume
// Input Value  : bMute
// Output Value : None
//--------------------------------------------------
void UserAdjustAudioMuteSwitch(void)
{
    SysAudioMuteProc(UserInterfaceGetAudioMuteStatus());
}

//--------------------------------------------------
// Description  : Adjust Aduio Volume
// Input Value  : ucVolume
// Output Value : Node
//--------------------------------------------------
void UserAdjustAudioVolume(BYTE ucVolume)
{
	PCB_AUDIO_VOLUME_PWM(UserCommonAdjustPercentToRealValue(_DEF_VOLUME_PWM, 255, 0, 128));

    ScalerAudioDigitalAdjustVolume(UserAdjustAudioVolumeMapping(ucVolume));
}

//--------------------------------------------------
// Description  : OSD Volume Mapping to Real Value
// Input Value  : usVolume
// Output Value : usVolume
//--------------------------------------------------
WORD UserAdjustAudioVolumeMapping(BYTE ucVolume)
{
	DebugMessageOsd("ucVolume", ucVolume);
	DebugMessageOsd("Volum",UserCommonAdjustPercentToRealValue(ucVolume, _DEF_DIGITAL_VOL_MAX, _DEF_DIGITAL_VOL_MIN, _DEF_DIGITAL_VOL_CENTER));

#if(_LINE_IN_SUPPORT == _ON)
    if(UserInterfaceGetAudioSource() == _LINE_IN_AUDIO)
    {
        return (UserCommonAdjustPercentToRealValue(ucVolume, _DEF_LINEIN_VOL_MAX, _DEF_LINEIN_VOL_MIN, _DEF_LINEIN_VOL_CENTER));
    }
    else
#endif // End of #if(_LINE_IN_SUPPORT == _ON)
    {   
		return (UserCommonAdjustPercentToRealValue(ucVolume, _DEF_DIGITAL_VOL_MAX, _DEF_DIGITAL_VOL_MIN, _DEF_DIGITAL_VOL_CENTER));
    }
}
#endif // End of #if(_AUDIO_SUPPORT == _ON)

#if(_DCC_FUNCTION == _ON)
//--------------------------------------------------
// Description  : Set DCC Table
// Input Value  : Request DCC Table
// Output Value : None
//--------------------------------------------------
void UserAdjustDCC(BYTE ucColorEffect)
{
        ScalerColorDCCAdjust(tDCC_TABLE[ucColorEffect], GET_CURRENT_BANK_NUMBER());
}
#endif // End of #if(_DCC_FUNCTION == _ON)


#if(_ICM_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Set ICM parameter
// Input Value  : Adjust Option
// Output Value : None
//--------------------------------------------------
void UserAdjustICM(BYTE ucColorEffect)
{
    if((ucColorEffect >= _COLOREFFECT_GAME) && (ucColorEffect < _COLOREFFECT_USER))
    {
        ScalerColorICMLoadTable(tICM_TABLE[ucColorEffect], GET_CURRENT_BANK_NUMBER());
    }
}
#endif // End of #if(_ICM_SUPPORT == _ON)

#if(_SCM_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Set SCM parameter
// Input Value  : Adjust Option
// Output Value : None
//--------------------------------------------------
void UserAdjustSCM(BYTE ucColorEffect)
{
    if((ucColorEffect >= _COLOREFFECT_GAME) && (ucColorEffect < _COLOREFFECT_USER))
    {
        ScalerColorSCMLoadTable(tSCM_TABLE[ucColorEffect], GET_CURRENT_BANK_NUMBER());
    }
}
#endif // End of #if(_SCM_SUPPORT == _ON)

#if((_DCC_FUNCTION == _ON) || (_ICM_SUPPORT == _ON) || (_SCM_SUPPORT == _ON) || (_SIX_COLOR_SUPPORT == _ON))
//--------------------------------------------------
// Description  : Set UltraVivid Settings
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjustColorEffectMode(void)
{
    BYTE ucIndex = 0;
    BYTE ucBackupSixColor = 0;
    BYTE ucBackupHue = 0;
    BYTE ucBackupSaturation = 0;

    ucBackupSixColor = GET_OSD_SIX_COLOR();
    ucBackupHue = GET_OSD_SIX_COLOR_HUE();
    ucBackupSaturation = GET_OSD_SIX_COLOR_SATURATION();

    switch(GET_OSD_COLOR_EFFECT())
    {
        case _COLOREFFECT_STANDARD:
            ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
#if(_DCC_FUNCTION == _ON)
       //     ScalerColorDCCEnable(_FUNCTION_OFF);
#endif

#if(_ICM_SUPPORT == _ON)
            ScalerColorICMEnable(_FUNCTION_OFF);
#endif
            break;

        case _COLOREFFECT_USER:
            ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
#if(_DCC_FUNCTION == _ON)
       //     ScalerColorDCCEnable(_FUNCTION_OFF);
#endif

#if(_ICM_SUPPORT == _ON)
            ScalerColorICMEnable(_FUNCTION_OFF);
#endif

            break;

        case _COLOREFFECT_MOVIE:
        case _COLOREFFECT_GAME:
        case _COLOREFFECT_PHOTO:
        case _COLOREFFECT_VIVID:
            ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
#if(_DCC_FUNCTION == _ON)
      //      ScalerColorDCCEnable(_FUNCTION_OFF);
#endif

#if(_ICM_SUPPORT == _ON)
            ScalerColorICMEnable(_FUNCTION_OFF);
#endif

#if(_DCC_FUNCTION == _ON)
          //  UserAdjustDCC(GET_OSD_COLOR_EFFECT());
#endif

// Adjust SCM Table, Should before ICM Adjust
#if(_SCM_SUPPORT == _ON)
            UserAdjustSCM(GET_OSD_COLOR_EFFECT());
#endif

#if(_ICM_SUPPORT == _ON)
            UserAdjustICM(GET_OSD_COLOR_EFFECT());
#endif


#if(_DCC_FUNCTION == _ON)
         //   ScalerColorDCCEnable(_FUNCTION_ON);
#endif

#if(_ICM_SUPPORT == _ON)
            ScalerColorICMEnable(_FUNCTION_ON);
#endif
            break;

        default:
            break;
    }

    SET_OSD_SIX_COLOR(ucBackupSixColor);
    SET_OSD_SIX_COLOR_HUE(ucBackupHue);
    SET_OSD_SIX_COLOR_SATURATION(ucBackupSaturation);
}
#endif // End of #if(_SIX_COLOR_SUPPORT == _ON)

#if(_CONTRAST_SUPPORT == _ON)
//--------------------------------------------------
// Description  : User Adjust Contrast
// Input Value  : 12 bit input, old 8 bit contrast input value must left shift 4 bit
//                0 (00h) ~ 1(800h) ~  2(FFFh)
// Output Value : void
//--------------------------------------------------
void UserAdjustContrast(WORD usContrast)
{
#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
    WORD pusData[6] = {0};

#if(_CTS_TYPE == _CTS_GEN_1_12BIT)
    pusData[3] = 0x800;
    pusData[4] = 0x800;
    pusData[5] = 0x800;
#else
    pusData[3] = 0x80;
    pusData[4] = 0x80;
    pusData[5] = 0x80;
#endif

#else
    WORD pusData[3] = {0};
#endif
usContrast = GetOsdValue(_MENU_FUN_CONTRAST);

/*
	switch(GET_OSD_COLOR_EFFECT())
	{
		case _COLOREFFECT_MOVIE :
			usContrast = _ECO_MOVIE_CONTRAST;
			break;
		case _COLOREFFECT_GAME:
			usContrast = _ECO_GAME_CONTRAST;
			break;
			
		case _COLOREFFECT_PHOTO :
			usContrast = _ECO_TEXT_CONTRAST;
			break;
		case _COLOREFFECT_STANDARD :
			usContrast = usContrast;
			break;
#if(_EOC_RTS_FPS_SUPPORT == _ON)
		case _COLOREFFECT_FPS:
			usContrast = _ECO_FPS_CONTRAST;
			break;
			
		case _COLOREFFECT_RTS :
			usContrast = _ECO_RTS_CONTRAST;
			break;
#endif			
			
		default:
			break;
	}
*/
	usContrast = UserCommonAdjustPercentToRealValue(usContrast, _CONTRAST_MAX, _CONTRAST_MIN, _CONTRAST_CENTER);

#if(_CTS_TYPE == _CTS_GEN_1_12BIT)
    pusData[0] = (WORD)(((DWORD)g_stColorProcData.usColorTempR * usContrast / 2048) > 4095) ? 4095 : (WORD)((DWORD)g_stColorProcData.usColorTempR * usContrast / 2048);
    pusData[1] = (WORD)(((DWORD)g_stColorProcData.usColorTempG * usContrast / 2048) > 4095) ? 4095 : (WORD)((DWORD)g_stColorProcData.usColorTempG * usContrast / 2048);
    pusData[2] = (WORD)(((DWORD)g_stColorProcData.usColorTempB * usContrast / 2048) > 4095) ? 4095 : (WORD)((DWORD)g_stColorProcData.usColorTempB * usContrast / 2048);

    if(_PANEL_DISP_BIT_MODE == _PANEL_DISP_30_BIT)
    {
        // 10-bit Panel
        pusData[0] = UserCommonAdjust10bitPanelCompensate(pusData[0]);
        pusData[1] = UserCommonAdjust10bitPanelCompensate(pusData[1]);
        pusData[2] = UserCommonAdjust10bitPanelCompensate(pusData[2]);
    }
#if(_CONTRAST_6BIT_PANEL_COMPENSATE == _ON)
    else if(_PANEL_DISP_BIT_MODE == _PANEL_DISP_18_BIT)
    {
#if(_GAMMA_FUNCTION == _ON)
        if(GET_OSD_GAMMA() == _GAMMA_OFF)
#endif
        {
            pusData[0] = UserCommonAdjust6bitPanelCompensate(pusData[0]);
            pusData[1] = UserCommonAdjust6bitPanelCompensate(pusData[1]);
            pusData[2] = UserCommonAdjust6bitPanelCompensate(pusData[2]);
        }
    }
#endif

	pusData[2] = pusData[2] - (pusData[2]/2 /100*GET_OSD_LOW_BLUE());

#else
    pusData[0] = (WORD)(((DWORD)g_stColorProcData.usColorTempR * usContrast / 128) > 255) ? 255 : (WORD)((DWORD)g_stColorProcData.usColorTempR * usContrast / 128);
    pusData[1] = (WORD)(((DWORD)g_stColorProcData.usColorTempG * usContrast / 128) > 255) ? 255 : (WORD)((DWORD)g_stColorProcData.usColorTempG * usContrast / 128);
    pusData[2] = (WORD)(((DWORD)g_stColorProcData.usColorTempB * usContrast / 128) > 255) ? 255 : (WORD)((DWORD)g_stColorProcData.usColorTempB * usContrast / 128);

#if(_CONTRAST_6BIT_PANEL_COMPENSATE == _ON)
    if(_PANEL_DISP_BIT_MODE == _PANEL_DISP_18_BIT)
    {
#if(_GAMMA_FUNCTION == _ON)
        if(GET_OSD_GAMMA() == _GAMMA_OFF)
#endif
        {
            pusData[0] = UserCommonAdjust6bitPanelCompensate(pusData[0]);
            pusData[1] = UserCommonAdjust6bitPanelCompensate(pusData[1]);
            pusData[2] = UserCommonAdjust6bitPanelCompensate(pusData[2]);
        }
    }
#endif
	//	pusData[2] = pusData[2] - (pusData[2]/2 /100*GET_OSD_LOW_BLUE());
	#if(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)||(Project_ID == _ID_XIANYOU_2525BREQ4_SG2701B05_6_FHD100HZ_20251015)
		pusData[2] = pusData[2] - (pusData[2]*GET_OSD_LOW_BLUE()/4/100);
	#else
		pusData[2] = pusData[2] - (pusData[2]*GET_OSD_LOW_BLUE()/2/100);
	#endif

#endif

/*
#if(Project_ID == ID_XKBH_HK2513E02_1V1H__HV320FHB_N02__20201218)||(Project_ID == ID_XKBH_HK2513E02_1V1H_HV320FHB_N02_20220927)||(Project_ID == _ID_XIANYOU_2525BREQ4_SG2701B05_6_FHD100HZ_20251015)
		pusData[2] = pusData[2] - (pusData[2]*GET_OSD_LOW_BLUE()/4/100);
#else
		pusData[2] = pusData[2] - (pusData[2]/2 /100*GET_OSD_LOW_BLUE());
#endif
*/

    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);

#if(_CONTRAST_BY_SRGB_SUPPORT == _ON)

    pusData[0] = pusData[0] * 4;
    pusData[1] = pusData[1] * 4;
    pusData[2] = pusData[2] * 4;
    UserCommonAdjustContrastBysRGB(pusData);

#else

#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
    if(GET_OSD_HLWIN_TYPE() == _HL_WIN_OFF)
    {
        ScalerColorContrastAdjust(_CONTRAST_COEF_A, pusData);
        ScalerColorContrastAdjust(_CONTRAST_COEF_B, &pusData[3]);
    }
    else
    {
        ScalerColorContrastAdjust(_CONTRAST_COEF_B, pusData);
        ScalerColorContrastAdjust(_CONTRAST_COEF_A, &pusData[3]);
    }
#else
    ScalerColorContrastAdjust(_CONTRAST_COEF_A, pusData);
#endif

    ScalerColorContrastEnable(_FUNCTION_ON);
#endif

}
#endif

#if(_BRIGHTNESS_SUPPORT == _ON)
//--------------------------------------------------
// Description  : User Adjust Brightness
// Input Value  : 10 bit input, old 8 bit brightness input value must left shift 2 bit
//                -2048(00h) ~ 0(200h) ~  +2044(3FFh)
// Output Value : void
//--------------------------------------------------
void UserAdjustBrightness(WORD usBrightness)
{
#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
    WORD pusData[6] = {0};

#if(_BRI_TYPE == _BRI_GEN_1_10BIT)
    pusData[3] = 0x200;
    pusData[4] = 0x200;
    pusData[5] = 0x200;
#else
    pusData[3] = 0x80;
    pusData[4] = 0x80;
    pusData[5] = 0x80;
#endif

#else
    WORD pusData[3] = {0};
#endif
	usBrightness=GetOsdValue(_MENU_FUN_BRIGHTNESS);

/*
		switch(GET_OSD_COLOR_EFFECT())
		{
			case _COLOREFFECT_MOVIE :
				usBrightness = _ECO_MOVIE_BLACKLEVEL;
				break;
			case _COLOREFFECT_GAME:
				usBrightness = _ECO_GAME_BLACKLEVEL;
				break;
				
			case _COLOREFFECT_PHOTO :
				usBrightness = _ECO_TEXT_BLACKLEVEL;
				break;
			case _COLOREFFECT_STANDARD :
				usBrightness = usBrightness;
				break;
#if(_EOC_RTS_FPS_SUPPORT == _ON)
			case _COLOREFFECT_FPS:
				usBrightness = _ECO_FPS_BLACKLEVEL;
				break;
				
			case _COLOREFFECT_RTS :
				usBrightness = _ECO_RTS_BLACKLEVEL;
				break;
#endif			
				
			default:
				break;
		}
*/
		usBrightness = UserCommonAdjustPercentToRealValue(usBrightness, _BRIGHTNESS_MAX, _BRIGHTNESS_MIN, _BRIGHTNESS_CENTER);

    pusData[0] = usBrightness;
    pusData[1] = usBrightness;
    pusData[2] = usBrightness;

#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
    if(GET_OSD_HLWIN_TYPE() == _HL_WIN_OFF)
    {
        ScalerColorBrightnessAdjust(_BRIGHTNESS_COEF_A, pusData);
        ScalerColorBrightnessAdjust(_BRIGHTNESS_COEF_B, &pusData[3]);
    }
    else
    {
        ScalerColorBrightnessAdjust(_BRIGHTNESS_COEF_B, pusData);
        ScalerColorBrightnessAdjust(_BRIGHTNESS_COEF_A, &pusData[3]);
    }
#else
    ScalerColorBrightnessAdjust(_BRIGHTNESS_COEF_A, pusData);
#endif

    ScalerColorBrightnessEnable(_FUNCTION_ON);
}
#endif


#if(_GLOBAL_HUE_SATURATION == _ON)
//--------------------------------------------------
// Description  : Adjust Global Hue Saturation
// Input Value  : Hue and Saturation
// Output Value : None
//--------------------------------------------------
void UserAdjustGlobalHueSat(SWORD shHue, WORD usSat)  // for OSD Adjust & Dianliang:  Display Off & ON
{
#if(_GLOBAL_COLOR_CONVERT_HUE_SATURATION_FUNCTION == _ON)
    if(GET_OSD_PCM_STATUS() != _PCM_OSD_NATIVE)
    {
        UserCommonAdjustColorConvertHueSat(_DEFAULT_HUE - shHue, usSat);
    }
#if(_OCC_PCM_GAMMA_SUPPORT == _ON)
    else if(GET_OSD_PCM_STATUS() == _PCM_OSD_NATIVE)
    {
        UserCommonAdjustColorConvertHueSat(_DEFAULT_HUE - shHue, usSat);
    }
#endif
    else
#endif
    {
        UserCommonAdjustGlobalHueSat(_DEFAULT_HUE - shHue, usSat);
    }
}
#endif  // Enf of #if(_GLOBAL_HUE_SATURATION == _ON)

#if(_OD_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Load OD LUT
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjustOD(void)
{
#if(_FREESYNC_SUPPORT == _ON)
    if(ScalerSyncGetFREESYNCEnable() == _TRUE)
    {
        ScalerODLoadLUT(tOD_FREESYNC_TABLE[0], GET_CURRENT_BANK_NUMBER(), _OD_LUT_MODE);
    }
    else
#endif
    {
        ScalerODLoadLUT(tOD_TABLE[0], GET_CURRENT_BANK_NUMBER(), _OD_LUT_MODE);
    }
}
#endif // End of #if(_OD_SUPPORT == _ON)

#if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Adjust High Light Window
// Input Value  : HLWinType
// Output Value : None
//--------------------------------------------------
void UserAdjustHLWinType(BYTE ucHLWinType)
{
    ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_HLWIN_TYPE5_MOVE);

    if(ucHLWinType == _HL_WIN_OFF)
    {
        return;
    }

    if(GET_MDOMAIN_OUTPUT_HWIDTH() == _PANEL_DH_WIDTH)
    {
        g_usHLWinHPos = 0;
    }
    else
    {
        g_usHLWinHPos = (_PANEL_DH_WIDTH - GET_MDOMAIN_OUTPUT_HWIDTH()) / 2;
    }

    if(GET_MDOMAIN_OUTPUT_VHEIGHT() == _PANEL_DV_HEIGHT)
    {
        g_usHLWinVPos = 0;
    }
    else
    {
        g_usHLWinVPos = (_PANEL_DV_HEIGHT - GET_MDOMAIN_OUTPUT_VHEIGHT()) / 2;
    }

    switch(ucHLWinType)
    {
        case _HL_WIN_1:

            g_usHLWinHWidth = GET_MDOMAIN_OUTPUT_HWIDTH() - _HL_WIN_BORDER_SIZE;
            g_usHLWinVHeight = GET_MDOMAIN_OUTPUT_VHEIGHT() - _HL_WIN_BORDER_SIZE;

            break;

        case _HL_WIN_2:

            g_usHLWinHWidth = GET_MDOMAIN_OUTPUT_HWIDTH() / 2;
            g_usHLWinVHeight = GET_MDOMAIN_OUTPUT_VHEIGHT() - _HL_WIN_BORDER_SIZE;

            break;

        case _HL_WIN_3:

            g_usHLWinHWidth = GET_MDOMAIN_OUTPUT_HWIDTH() - _HL_WIN_BORDER_SIZE;
            g_usHLWinVHeight = GET_MDOMAIN_OUTPUT_VHEIGHT() / 2;

            break;

        case _HL_WIN_4:

            g_usHLWinHWidth = GET_MDOMAIN_OUTPUT_HWIDTH() / 2;
            g_usHLWinVHeight = GET_MDOMAIN_OUTPUT_VHEIGHT() / 2;
            g_usHLWinHPos = ((GET_MDOMAIN_OUTPUT_HWIDTH() - g_usHLWinHWidth) / 2) + ((_PANEL_DH_WIDTH - GET_MDOMAIN_OUTPUT_HWIDTH()) / 2) - 1;
            g_usHLWinVPos = (GET_MDOMAIN_OUTPUT_VHEIGHT() - g_usHLWinVHeight) / 2 - 1;

            break;

        case _HL_WIN_5:

            g_usHLWinHWidth = GET_MDOMAIN_OUTPUT_HWIDTH() / 6;
            g_usHLWinVHeight = GET_MDOMAIN_OUTPUT_VHEIGHT() - _HL_WIN_BORDER_SIZE;
            g_usHLWinHPos = (GET_MDOMAIN_OUTPUT_HWIDTH() - g_usHLWinHWidth) / 2;

            ScalerTimerActiveTimerEvent(_HLWIN_TYPE5_MOVE_TIME, _USER_TIMER_EVENT_HLWIN_TYPE5_MOVE);

            break;

        default:

            break;
    }

    ScalerColorHLWAdjust(g_usHLWinHPos, g_usHLWinHWidth, g_usHLWinVPos, g_usHLWinVHeight, _DB_APPLY_NONE);
}

//--------------------------------------------------
// Description  : High Light Window Type5 Move
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjustHLWinType5Move(void)
{
    WORD usNonFullScreenOffset = 0;

    if(GET_MDOMAIN_OUTPUT_HWIDTH() == _PANEL_DH_WIDTH)
    {
        // Full screen
        usNonFullScreenOffset = 0;
    }
    else
    {
        // Non full screen
        usNonFullScreenOffset = (_PANEL_DH_WIDTH - GET_MDOMAIN_OUTPUT_HWIDTH()) / 2;
    }

    if(g_bHLWinRLMove == _RIGHT)
    {
        g_usHLWinHPos++;

        if((GET_MDOMAIN_OUTPUT_HWIDTH() + usNonFullScreenOffset) <= (g_usHLWinHPos + g_usHLWinHWidth + _HL_WIN_BORDER_SIZE))
        {
            g_bHLWinRLMove = _LEFT;
            g_usHLWinHPos = (GET_MDOMAIN_OUTPUT_HWIDTH() + usNonFullScreenOffset) - (g_usHLWinHWidth + _HL_WIN_BORDER_SIZE);
        }
    }
    else // _LEFT
    {
        g_usHLWinHPos--;

        if(g_usHLWinHPos <= usNonFullScreenOffset)
        {
            g_bHLWinRLMove = _RIGHT;
            g_usHLWinHPos = usNonFullScreenOffset;
        }
    }

    ScalerColorHLWAdjust(g_usHLWinHPos, g_usHLWinHWidth, g_usHLWinVPos, g_usHLWinVHeight, _DB_APPLY_NO_POLLING);

    ScalerTimerActiveTimerEvent(_HLWIN_TYPE5_MOVE_TIME, _USER_TIMER_EVENT_HLWIN_TYPE5_MOVE);
}

//--------------------------------------------------
// Description  : Adjust All High Light Window Effect Space
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjustHighLightWindowEffectSpace(void)
{
#if((_CONTRAST_SUPPORT == _ON) || (_BRIGHTNESS_SUPPORT == _ON))
    ScalerColorHLWBRICTSAdjust(_BRI_CON_B_ON_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_DCC_FUNCTION == _ON)
    ScalerColorHLWDCCAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_GAMMA_FUNCTION == _ON)
    ScalerColorHLWOutputGammaAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_GLOBAL_HUE_SATURATION == _ON)
    ScalerColorHLWSRGBAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_IAPS_SUPPORT == _ON)
    ScalerColorHLWIAPSGainAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_ICM_SUPPORT == _ON)
    ScalerColorHLWICMAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if((_DCR_SUPPORT == _ON) || (_IAPS_SUPPORT == _ON))
    ScalerColorHLWDCRAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_ULTRA_VIVID_SUPPORT == _ON)
    ScalerColorHLWUltraVividAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_YPEAKING_SUPPORT == _ON)
    ScalerColorHLWYpeakingAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_UNIFORMITY_SUPPORT == _ON)
    ScalerColorHLWPanelUniformityAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_PCM_FUNCTION == _ON)
    ScalerColorHLWPCMAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif

#if(_RGB_3D_GAMMA == _ON)
    ScalerColorHLWRGB3DGammaAdjust(_HLW_INSIDE_WINDOW, _DB_APPLY_NO_POLLING);
#endif
}
#endif // End of #if(_HIGHLIGHT_WINDOW_SUPPORT == _ON)

#if(_FREESYNC_OD_MEASURE == _ON)
//--------------------------------------------------
// Description  : Set FREESYNC OD Measure
// Input Value  : Current DHtotal(pixel)/ Current Dclk(kHz)/ Target Measure VFreq(0.1Hz)
// Output Value : None
//--------------------------------------------------
void UserAdjustFREESYNCODMeasure(void)
{
    // Set Backlight
    UserAdjustBacklight(100);

    // Enable Backlight
    UserCommonInterfacePanelPowerAction(_BACKLIGHT_ON);

    // Disable OSD
    ScalerOsdDisableOsd();

    // Disable D-domain Pattern Gen.
    ScalerDDomainPatternGenEnable(_DISABLE);

    // According FREESYNC setting to set accurate Htotal/ Dclk
    ScalerMDomainFREESYNCODSetDisplayFormat(((WORD)_PANEL_DH_TOTAL), ((DWORD)_PANEL_PIXEL_CLOCK_MAX_KHZ), ((WORD)_PANEL_FREESYNC_MIN_FRAME_RATE));

    while(_TRUE)
    {
        ScalerDebug();
        ScalerDDomainFREESYNCODSetBackgroundGrayLevel();
    }
}
#endif


#if(_IR_SUPPORT == _IR_HW_SUPPORT)
//--------------------------------------------------
// Description  : Set IR Table
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjusIR(void)
{
    ScalerIRHWModeDecoder(tIR_INITIAL_TABLE, GET_CURRENT_BANK_NUMBER());
}
#endif // End of #if(_IR_SUPPORT == _IR_HW_SUPPORT)

#if(_DP_EMBEDDED_SWITCH_SUPPORT_TYPE == _DP_EMBEDDED_SWITCH_2_DP)
//--------------------------------------------------
// Description  : Set embedded DP switch status
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjustEmbeddedDpSwitch(void)
{
#if(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)
    if(ScalerSyncDpCableStatus(_D0_INPUT_PORT) == _TRUE)
    {
        if(GET_DP_EMBEDDED_SWITCH_SELECT() != _D0_INPUT_PORT)
        {
            SysSourceEmbeddedDpSwitch(_D0_INPUT_PORT);
        }
        return;
    }
#endif

#if(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)
    if(ScalerSyncDpCableStatus(_D1_INPUT_PORT) == _TRUE)
    {
        if(GET_DP_EMBEDDED_SWITCH_SELECT() != _D1_INPUT_PORT)
        {
            SysSourceEmbeddedDpSwitch(_D1_INPUT_PORT);
        }
        return;
    }
#endif

#if(_D2_INPUT_PORT_TYPE == _D2_DP_PORT)
    if(ScalerSyncDpCableStatus(_D2_INPUT_PORT) == _TRUE)
    {
        if(GET_DP_EMBEDDED_SWITCH_SELECT() != _D2_INPUT_PORT)
        {
            SysSourceEmbeddedDpSwitch(_D2_INPUT_PORT);
        }
        return;
    }
#endif
}
#endif

#if(_PIXEL_SHIFT_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Pixel orbiting step as following
//  -2->
// ^    |
// |    3
// 1    |
// |    v
// < -0- <-7-
//      |     |
//      4     6
//      |     |
//      v -5->
// Input Value  :
// Output Value :
//--------------------------------------------------
void UserAdjustPixelShifting(void)
{
#if(_PIXEL_SHIFT_MODE == _PIXEL_SHIFT_IN_IDOMAIN)
    BYTE ucPixelShift = 0;

    WORD usVdelay = 0;
    WORD usHdelay = 0;
    BYTE ucVstep = 2;
    BYTE ucHstep = 2;

#if(_FORMAT_CONVERSION_SUPPORT == _ON)
    if(ScalerFmtCnvFtoPGetStatus() == _TRUE)
    {
        ucVstep = (ucVstep + 1) & 0xFE;
    }
#endif

    ScalerGlobalWatchDog(_DISABLE);

#if(_VGA_SUPPORT == _ON)
    if(SysSourceGetSourceType() == _SOURCE_VGA)
    {
        usHdelay = ScalerVgaTopGetCaptureHDelay();
        usVdelay = ScalerVgaTopGetCaptureVDelay();
    }
    else
#endif
    {
        usHdelay = ScalerVgipGetCaptureHDelay();
        usVdelay = ScalerVgipGetCaptureVDelay();
    }

    for(ucPixelShift = 0; ucPixelShift < 8; ucPixelShift++)
    {
        ScalerTimerDelayXms(200);

        switch(ucPixelShift)
        {
            case 0: // _PIXEL0_TURN_LEFT:
            case 7: // _PIXEL1_TURN_LEFT:
                usHdelay += ucHstep;
                break;

            case 2: // _PIXEL0_TURN_RIGHT:
            case 5: // _PIXEL1_TURN_RIGHT:
                if(usHdelay >= ucHstep)
                {
                    usHdelay -= ucHstep;
                }
                else
                {
                    usHdelay = 0;
                }
                break;

            case 1: // _PIXEL0_TURN_UP:
            case 6: // _PIXEL1_TURN_UP:
                usVdelay += ucVstep;
                break;

            case 3: // _PIXEL0_TURN_DOWN:
            case 4: // _PIXEL1_TURN_DOWN:
                if(usVdelay >= ucVstep)
                {
                    usVdelay -= ucVstep;
                }
                else
                {
                    usVdelay = 0;
                }
                break;

            default:
                break;
        }

#if(_VGA_SUPPORT == _ON)
        if(SysSourceGetSourceType() == _SOURCE_VGA)
        {
            ScalerVgaTopSetCaptureHDelay(usHdelay);
            ScalerVgaTopSetCaptureVDelay(usVdelay);
            ScalerVgaTopDoubleBufferApply();
        }
        else
#endif
        {
            ScalerVgipSetCaptureHDelay(usHdelay);
            ScalerVgipSetCaptureVDelay(usVdelay);
            ScalerGlobalIDomainDBApply(_DB_APPLY_POLLING);
        }
    }

    ScalerTimerWaitForEvent(_EVENT_IVS);
    ScalerGlobalWatchDog(_ENABLE);

#endif

#if(_PIXEL_SHIFT_MODE == _PIXEL_SHIFT_IN_MDOMAIN)
    BYTE ucPixelShift = 0;
    WORD usDHstart = ScalerMDomainGetDisplayTimingGenActiveRegionHStart();
    WORD usDHend = ScalerMDomainGetDisplayTimingGenActiveRegionHEnd();
    WORD usDVstart = ScalerMDomainGetDisplayTimingGenActiveRegionVStart();
    WORD usDVend = ScalerMDomainGetDisplayTimingGenActiveRegionVEnd();
    WORD usDVBGstart = GET_MDOMAIN_OUTPUT_VBSTART();
    WORD usDVBGend = GET_MDOMAIN_OUTPUT_VBSTART() + GET_MDOMAIN_OUTPUT_VBHEIGHT();
    WORD usDisplayHstart = usDHstart;
    WORD usDisplayVstart = usDVstart;

    // usDVBGstart/usDVBGend
    ScalerMDomainSetDisplayTimingGenBackgroundVStart(HIBYTE(usDVBGstart), LOBYTE(usDVBGstart), _DB_APPLY_NONE);
    ScalerMDomainSetDisplayTimingGenBackgroundVEnd(HIBYTE(usDVBGend), LOBYTE(usDVBGend), _DB_APPLY_NO_POLLING);

    // capture H start/end
    ScalerMDomainSetCaptureWindowHStart(HIBYTE(usDHstart), LOBYTE(usDHstart));
    ScalerMDomainSetCaptureWindowHEnd(HIBYTE(usDHend), LOBYTE(usDHend));
    // capture V start/end
    ScalerMDomainSetCaptureWindowVStart(HIBYTE(usDVstart), LOBYTE(usDVstart));
    ScalerMDomainSetCaptureWindowVEnd(HIBYTE(usDVend), LOBYTE(usDVend));

    ScalerMDomainSetCaptureWindowEnable(_ENABLE);

    for(ucPixelShift = 0; ucPixelShift < 8; ucPixelShift++)
    {
        ScalerTimerDelayXms(200);
        switch(ucPixelShift)
        {
            // H <-
            case 0: // _PIXEL0_TURN_LEFT:
                usDHend -= 1;
                usDisplayHstart -= 1;
                break;

            // V ^
            case 1: // _PIXEL0_TURN_UP:
                usDVstart += 1;
                usDVBGstart += 1;
                usDVBGend += 1;
                break;

            // H ->
            case 2: // _PIXEL0_TURN_RIGHT:
                usDHend += 1;
                usDisplayHstart += 1;
                break;

            // V v
            case 3: // _PIXEL0_TURN_DOWN:
                usDVstart -= 1;
                usDVBGstart -= 1;
                usDVBGend -= 1;
                break;

            // V v
            case 4: // _PIXEL1_TURN_DOWN:
                usDisplayVstart += 1;
                usDVstart += 1;
                break;

            // H ->
            case 5: // _PIXEL1_TURN_RIGHT:
                usDisplayHstart += 1;
                usDHstart += 1;
                break;

            // V ^
            case 6: // _PIXEL1_TURN_UP:
                usDisplayVstart -= 1;
                usDVstart -= 1;
                break;

            // H <-
            case 7: // _PIXEL1_TURN_LEFT:
                usDisplayHstart -= 1;
                usDHstart -= 1;
                break;

            default:
                break;
        }

        switch(ucPixelShift)
        {
            case 0: // _PIXEL0_TURN_LEFT:
            case 2: // _PIXEL0_TURN_RIGHT:
            case 5: // _PIXEL1_TURN_RIGHT:
            case 7: // _PIXEL1_TURN_LEFT:
                // Display H active start setting
                ScalerMDomainSetDisplayTimingGenActiveRegionHStart(HIBYTE(usDisplayHstart), LOBYTE(usDisplayHstart), _DB_APPLY_POLLING);
                // Capture window H start setting
                ScalerMDomainSetCaptureWindowHStart(HIBYTE(usDHstart), LOBYTE(usDHstart));
                // Capture window H end setting
                ScalerMDomainSetCaptureWindowHEnd(HIBYTE(usDHend), LOBYTE(usDHend));

                break;

            case 1: // _PIXEL0_TURN_UP:
            case 3: // _PIXEL0_TURN_DOWN:
            case 4: // _PIXEL1_TURN_DOWN:
            case 6: // _PIXEL1_TURN_UP:
                // Display V active start setting
                ScalerMDomainSetDisplayTimingGenActiveRegionVStart(HIBYTE(usDisplayVstart), LOBYTE(usDisplayVstart), _DB_APPLY_POLLING);
                // Capture window V start setting
                ScalerMDomainSetCaptureWindowVStart(HIBYTE(usDVstart), LOBYTE(usDVstart));
                // Display V background start setting
                ScalerMDomainSetDisplayTimingGenBackgroundVStart(HIBYTE(usDVBGstart), LOBYTE(usDVBGstart), _DB_APPLY_POLLING);
                // Display V background end setting
                ScalerMDomainSetDisplayTimingGenBackgroundVEnd(HIBYTE(usDVBGend), LOBYTE(usDVBGend), _DB_APPLY_POLLING);
                break;

            default:
                break;
        }
    }

    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    ScalerTimerWaitForEvent(_EVENT_DEN_STOP);
    ScalerMDomainSetCaptureWindowEnable(_DISABLE);
#endif
}
#endif

#if(_SDR_TO_HDR_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Set SDRToHDR parameter
// Input Value  : Adjust Option
// Output Value : None
//--------------------------------------------------
void UserAdjustSDRToHDR(bit bOn)
{
    if(bOn == _ON)
    {
#if(_CONTRAST_SUPPORT == _ON)
        ScalerColorContrastEnable(_FUNCTION_OFF);
#endif
        UserCommonAdjustSDRToHDR(tSDRTOHDR_INPUTGAMMA, tSDRTOHDR_ICM, tSDRTOHDR_DCC, GET_CURRENT_BANK_NUMBER());
    }
    else
    {
        UserAdjustColorEffectMode();
        OsdFuncColorPcmAdjust();
    }
}
#endif // End of #if(_SDR_TO_HDR_SUPPORT == _ON)

#if(_DCR_SUPPORT == _ON)
#if(_LD_TUNNEL_DETECT_SUPPORT == _ON)
//--------------------------------------------------
// Description  : User Adjust DCR initial
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjustDCRTHD(void)
{
    // Adjust DCR Threshold & Source
#if(_DCR_BIT_MODE == _DCR_GEN_1_0_10BIT)
    ScalerColorDCRAdjust(_DCR_THESHOLD1, _DCR_THESHOLD2, _MEASURE_AVERAGE);
#elif((_DCR_BIT_MODE == _DCR_GEN_0_0_8BIT) || (_DCR_BIT_MODE == _DCR_GEN_0_1_8BIT))
    ScalerColorDCRAdjust((_DCR_THESHOLD1 >> 2), (_DCR_THESHOLD2 >> 2), _MEASURE_AVERAGE);
#endif
}
#endif // End of #if(_LD_TUNNEL_DETECT_SUPPORT == _ON)
#endif // End of #if(_DCR_SUPPORT == _ON)

#if(_DP_TYPE_C_PORT_CTRL_SUPPORT == _ON)
#if((_PORT_CONTROLLER_RTS5400_SERIES_SUPPORT == _ON) || (_PORT_CONTROLLER_USERDECITION_SUPPORT == _ON))
#if(_TWO_CHIP_DATA_EXCHANGE_MODE == _DATA_EXCHANGE_MODE_NONE)
//--------------------------------------------------
// Description  : User Control Type-C Port Controller Power
// Input Value  : ucSwitch --> Power Action
// Output Value : None
//--------------------------------------------------
void UserAjustTypeCPowerControl(EnumPowerAction enumSwitch)
{
    switch(enumSwitch)
    {
        case _POWER_ACTION_AC_ON_TO_NORMAL:

            //Switch On Port Controller Power By PCB Control
            PCB_PORT_CTRL_POW_RTD_USER(_PORT_CTRL_POWER_ON);
            CLR_TYPE_C_PORT_CTRL_POWER_OFF_FLG();

            break;

        case _POWER_ACTION_PS_TO_NORMAL:
        case _POWER_ACTION_OFF_TO_NORMAL:

            if(GET_PCB_PORT_CTRL_POW_STATUS_RTD_USER() == _PORT_CTRL_POWER_OFF)
            {
                // Switch On Port Conroller Power By PCB Control
                PCB_PORT_CTRL_POW_RTD_USER(_PORT_CTRL_POWER_ON);
            }

            break;

        case _POWER_ACTION_AC_ON_TO_OFF:
        case _POWER_ACTION_NORMAL_TO_OFF:
        case _POWER_ACTION_PS_TO_OFF:
        case _POWER_ACTION_NORMAL_TO_PS:

#if((_D0_INPUT_PORT_TYPE != _D0_NO_PORT) && ((_D0_DP_TYPE_C_PORT_CTRL_TYPE == _PORT_CONTROLLER_RTS5400_SERIES) || (_D0_DP_TYPE_C_PORT_CTRL_TYPE == _PORT_CONTROLLER_USER )))
            if(SysSourceGetCableDetect(_D0_INPUT_PORT) == _FALSE)
#elif((_D1_INPUT_PORT_TYPE != _D1_NO_PORT) && ((_D1_DP_TYPE_C_PORT_CTRL_TYPE == _PORT_CONTROLLER_RTS5400_SERIES) || (_D1_DP_TYPE_C_PORT_CTRL_TYPE == _PORT_CONTROLLER_USER )))
            if(SysSourceGetCableDetect(_D1_INPUT_PORT) == _FALSE)
#elif((_D6_INPUT_PORT_TYPE != _D6_NO_PORT) && ((_D6_DP_TYPE_C_PORT_CTRL_TYPE == _PORT_CONTROLLER_RTS5400_SERIES) || (_D6_DP_TYPE_C_PORT_CTRL_TYPE == _PORT_CONTROLLER_USER )))
            if(SysSourceGetCableDetect(_D6_INPUT_PORT) == _FALSE)
#endif
            {
                // Switch Off Repeater Power By PCB Control
                PCB_PORT_CTRL_POW_RTD_USER(_PORT_CTRL_POWER_OFF);
                SET_TYPE_C_PORT_CTRL_POWER_OFF_FLG();
            }
            else
            {
                CLR_TYPE_C_PORT_CTRL_POWER_OFF_FLG();
            }

            break;

        default:

            break;
    }
}
#endif // End of #if(_TWO_CHIP_DATA_EXCHANGE_MODE == _DATA_EXCHANGE_MODE_NONE)
#endif // End of #if((_PORT_CONTROLLER_RTS5400_SERIES_SUPPORT == _ON) || (_PORT_CONTROLLER_USERDECITION_SUPPORT == _ON))
#endif // End of #if(_DP_TYPE_C_PORT_CTRL_SUPPORT == _ON)

#if((_EMBEDDED_EDID_SUPPORT == _ON) && (_DP_HDR10_SUPPORT == _ON) && (_DP_SUPPORT == _ON))
//--------------------------------------------------
// Description  : Switch Dp Version to 1.4, if HDR On
// Input Value  : None
// Output Value : None
//--------------------------------------------------
void UserAdjustHdrCheckDpVersion(WORD usHdrMode)
{
    // Switch Dp Version to 1.3, if HDR Function Support
    if(usHdrMode != _HDR10_MODE_OFF)
    {
#if(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)
        if(GET_OSD_DP_D0_VERSION() <= _DP_VER_1_DOT_2)
        {
            SET_OSD_DP_D0_VERSION(_DP_VER_1_DOT_3);

            SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

            UserCommonInterfaceDpVersionSwitch(_D0_INPUT_PORT, UserInterfaceGetDPVersion(_D0_INPUT_PORT), UserInterfaceGetDpMSTCapablePort());
        }
#endif

#if(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)
        if(GET_OSD_DP_D1_VERSION() <= _DP_VER_1_DOT_2)
        {
            SET_OSD_DP_D1_VERSION(_DP_VER_1_DOT_3);

            SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

            UserCommonInterfaceDpVersionSwitch(_D1_INPUT_PORT, UserInterfaceGetDPVersion(_D1_INPUT_PORT), UserInterfaceGetDpMSTCapablePort());
        }
#endif

#if(_D2_INPUT_PORT_TYPE == _D2_DP_PORT)
        if(GET_OSD_DP_D2_VERSION() <= _DP_VER_1_DOT_2)
        {
            SET_OSD_DP_D2_VERSION(_DP_VER_1_DOT_3);

            SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_OSDUSERDATA_MSG);

            UserCommonInterfaceDpVersionSwitch(_D2_INPUT_PORT, UserInterfaceGetDPVersion(_D2_INPUT_PORT), UserInterfaceGetDpMSTCapablePort());
        }
#endif
    }
}
#endif // End of #if((_EMBEDDED_EDID_SUPPORT == _ON) && (_DP_HDR10_SUPPORT == _ON) && (_DP_SUPPORT == _ON))

#if(_DP_SUPPORT == _ON)
//--------------------------------------------------
// Description  : DP Version Force Update
// Input Value  : enumInputPort, bEnable, enumDpVersionType
// Output Value : None
//--------------------------------------------------
void UserAdjustDpVersionForceUpdate(BYTE ucInputPort, bit bEnable, EnumDpVersionType enumDpVersionType)
{
    EnumOSDDpPortVersionDef enumOSDDpPortVersionDef = enumDpVersionType - 0x11;

    switch(ucInputPort)
    {
#if(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)
        case _D0_INPUT_PORT:

            if((GET_OSD_DP_D0_VERSION() < enumOSDDpPortVersionDef) && (bEnable == _ENABLE))
            {
                SET_OSD_DP_D0_VERSION(enumOSDDpPortVersionDef);

                UserCommonInterfaceDpVersionSwitch(_D0_INPUT_PORT, UserInterfaceGetDPVersion(_D0_INPUT_PORT), UserCommonInterfaceGetDpMstCapablePort());
            }

            break;
#endif

#if(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)
        case _D1_INPUT_PORT:

            if((GET_OSD_DP_D1_VERSION() < enumOSDDpPortVersionDef) && (bEnable == _ENABLE))
            {
                SET_OSD_DP_D1_VERSION(enumOSDDpPortVersionDef);

                UserCommonInterfaceDpVersionSwitch(_D1_INPUT_PORT, UserInterfaceGetDPVersion(_D1_INPUT_PORT), UserCommonInterfaceGetDpMstCapablePort());
            }

            break;
#endif

#if(_D2_INPUT_PORT_TYPE == _D2_DP_PORT)
        case _D2_INPUT_PORT:

            if((GET_OSD_DP_D2_VERSION() < enumOSDDpPortVersionDef) && (bEnable == _ENABLE))
            {
                SET_OSD_DP_D2_VERSION(enumOSDDpPortVersionDef);

                UserCommonInterfaceDpVersionSwitch(_D2_INPUT_PORT, UserInterfaceGetDPVersion(_D2_INPUT_PORT), UserCommonInterfaceGetDpMstCapablePort());
            }

            break;
#endif

        default:
            break;
    }
}
#endif // End of #if(_DP_SUPPORT == _ON)

#if(_HDMI_SUPPORT == _ON)
//--------------------------------------------------
// Description  : Get Ext HDMI EDID Index
// Input Value  : enumInputPort
// Output Value : Edid Index Enum
//--------------------------------------------------
EnumEdidSelection UserAdjustGetHdmiExternalEdidIndex(BYTE ucInputPort)
{
    EnumEdidSelection enumEdidIndex = _EDID_INDEX_0;

    ucInputPort = ucInputPort;

#if((_EDID_EXTERNAL_EEPROM_MAX_SIZE != _EDID_SIZE_NONE) && ((_HDMI_FREESYNC_SUPPORT == _ON) || (_HDMI21_VRR_SUPPORT == _ON) || (_HDMI21_FVA_SUPPORT == _ON)))

#if(_HDMI_MULTI_EDID_SUPPORT == _ON)

#if(_HDMI_FREESYNC_SUPPORT == _ON)
    if((GET_OSD_FREE_SYNC_STATUS() == _ON))
    {
        enumEdidIndex += ((_HDMI_HDR10_SUPPORT == _ON) ? 0x02 : 0x01);
    }
#endif

#if(_HDMI_HDR10_SUPPORT == _ON)
    if((UserInterfaceHDRGetHDR10ModeStatus(ucInputPort) != _HDR10_MODE_OFF))
    {
        enumEdidIndex ++;
    }
#endif

#endif

#endif

    return enumEdidIndex;
}
#endif
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
#if 0
#define _DIGITAL_H_DIALPOINT_OFFSET       3// for Font Map H shift 3 pixel
#define _DIGITAL_V_DIALPOINT_OFFSET       0
//11*7
#define _ANALOG_H_DIALPOINT_OFFSET        4
#define _ANALOG_V_DIALPOINT_OFFSET        0

#define _OSD_SPOT_WIDTH                            132//(11 font*12 = 132)
#define _OSD_SPOT_HEIGHT                           126

void OsdMenuDiaPointNFrameCounter(void)
{
    BYTE ucLoop = 0;
    WORD usHCenter = 0x0000;
    WORD usVCenter = 0x0000;

#if 1//(_DIALPOINT_SUPPORT == _ON)
    if((GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)/*||(GET_OSD_FRAME_COUNTER() != _FRAME_COUNTER_OFF)*/)
#else
    if(GET_OSD_FRAME_COUNTER() != _FRAME_COUNTER_OFF)
#endif
    {
        ScalerOsdDisableOsd();
        ScalerOsd2FontFunction(_ENABLE);

       // ScalerTimerCancelTimerEvent(_USER_TIMER_EVENT_FRAME_COUNTER);
        SET_OSD_STATE(_MENU_NONE);
#if 1//(_OSD_DOUBLE_SIZE == _ON)
        SET_OSD_DOUBLE_SIZE(_OFF);
        ScalerOsdDoubleFunction(_OSD_DOUBLE_WIDTH_DISABLE,_OSD_DOUBLE_HEIGHT_DISABLE);
#endif

        ScalerOsdWindowDisable(_OSD_WINDOW_ALL);
        // Adjust Color Palette
        ScalerOsdSetTransparencyType(_OSD_TRANSPARENCY_ALL);
		OsdPaletteSelectPalette(_PALETTE_HOT_DIALPOINT);
		ScalerOsdSetTransparency(GET_OSD_TRANSPARENCY_STATUS());
        // Load Font & Icon
        ScalerOsd2BitFontOffset(0);
        ScalerOsd4BitFontOffset(0);
        //load font
        g_ucFontPointer0 = _OSD_PAGE_0_START;
        g_ucFontPointer1 = _OSD_PAGE_1_START;

        //draw OSD Frame
      //  OsdFuncApplyMapSetting(_OSD_MAP4);
#if(_DIALPOINT_SUPPORT == _ON)
        if(GET_OSD_DIAL_POINT_STYLE() != _DIAPOINT_STYLE_OFF)
        {
           // OsdLoadVLCTable(_FONT_AGON_SPOT);// put here, character command no need rotate, but P3A_0B_FRAME_CTRL_0B[0] will _DISABLE when put below
#if(_DYNAMIC_COLOR_AUTO_MEASURE == _ON)
            g_stOsdInfo.b1DynamicDiapointStatus = _TRUE;
            ScalerOsdSetColorPalette(2,0xd1,0x05,0x00);//default diapoint color
#endif
        }
#endif
       // OsdLoadVLCTable(_FONT_AGON_DIAPOINT_FRAME_COUNTER);


        ScalerOsdPosition(_OSD_POSITION_GLOBAL_A,  0,  0);
        ScalerOsdPosition(_OSD_POSITION_GLOBAL_B,  0,  0);
    	if(SysSourceGetSourceType() == _SOURCE_VGA)
        {
            usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH/2)+_ANALOG_H_DIALPOINT_OFFSET;
            usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT/2)+_ANALOG_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
        }
        else
        {
            usHCenter = GET_MDOMAIN_OUTPUT_HSTART()-GET_MDOMAIN_OUTPUT_HBSTART()+(GET_MDOMAIN_OUTPUT_HWIDTH()/2)-(_OSD_SPOT_WIDTH/2)+_DIGITAL_H_DIALPOINT_OFFSET;
            usVCenter = GET_MDOMAIN_OUTPUT_VSTART()-GET_MDOMAIN_OUTPUT_VBSTART()+(GET_MDOMAIN_OUTPUT_VHEIGHT()/2)-(_OSD_SPOT_HEIGHT/2)+_DIGITAL_V_DIALPOINT_OFFSET;//_PANEL_DV_HEIGHT/2)-(_OSD_DIALPOINT_VHEIGHT/2);
        }

        ScalerOsdPosition(_OSD_POSITION_FONT_A, usHCenter, usVCenter);// for Font Map H shift 3 pixel

     //   ScalerOsdPosition(_OSD_POSITION_FONT_A, ((_PANEL_DH_WIDTH/2)-(_OSD_SPOT_WIDTH/2))+3, ((_PANEL_DV_HEIGHT/2)-(_OSD_SPOT_HEIGHT/2)));// for Font Map H shift 3 pixel
        ScalerOsdPosition(_OSD_POSITION_FONT_B, 0, 0);//((_PANEL_DV_HEIGHT/2)-(_OSD_FRAME_COUNTER_HEIGHT*_FONT_HEIGHT/2)));

       /* if(GET_OSD_FRAME_COUNTER() != _FRAME_COUNTER_OFF)
        {
            OsdMenuFrameCounterUpdate();
#if(_FREESYNC_SUPPORT == _ON)
            if(ScalerSyncGetFREESYNCEnable() == _TRUE)
            {
                ScalerTimerActiveTimerEvent(SEC(0.2), _USER_TIMER_EVENT_FRAME_COUNTER);
            }
#endif
        }*/

        OsdFuncEnableOsd();
    }
}
#endif
//--------------------------------------------------
// Description  : Measure Input data initial
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#if 0//(_PANEL_RESOLUTION == _TYPE_FHD)
#define _CROSSHAIR_WIDTH        12
#else
#define _CROSSHAIR_WIDTH        18
#endif
#define _CROSSHAIR_DHSTART      ((_PANEL_DH_WIDTH / 2) - (_CROSSHAIR_WIDTH / 2))
#define _CROSSHAIR_DHEND        (_CROSSHAIR_DHSTART + (_CROSSHAIR_WIDTH - 1))
#define _CROSSHAIR_DVSTART      ((_PANEL_DV_HEIGHT / 2) - (_CROSSHAIR_WIDTH / 2))
#define _CROSSHAIR_DVEND        (_CROSSHAIR_DVSTART + (_CROSSHAIR_WIDTH - 1))
void UserAdjustSmartCrosshairInit(void)
{
    if(GET_OSD_DIAL_POINT_STYLE() == _ON)
    {
        UserCommonAdjustColorSetDynamicColorInitialBoundary(_CROSSHAIR_DHSTART, _CROSSHAIR_DHEND, _CROSSHAIR_DVSTART, _CROSSHAIR_DVEND);
        UserCommonAdjustColorSetAutoMeasure(_AUTO_RED_CHANNEL);
        g_stOsdInfo.ucDcrMeasureType = (_AUTO_RED_CHANNEL);

        g_stOsdInfo.ucDcrMeasureR = g_stOsdInfo.ucDcrMeasureG = g_stOsdInfo.ucDcrMeasureB = 0;
    }
}
//--------------------------------------------------
// Description  :
// Input Value  : None
// Output Value : None
//--------------------------------------------------
BYTE UserAdjustCheckValue(SDWORD shValue)
{
    if(shValue < 0)
    {
        return 0;
    }
    if(shValue > 255)
    {
        return 255;
    }
    return (BYTE)shValue;
}
//--------------------------------------------------
// Description  : Measure Input data to change Pattle
// Input Value  : None
// Output Value : None
//--------------------------------------------------
BYTE UserAdjustRGBtoCT(BYTE ucRGB)
{
#if 1//reverse
        return ~(ucRGB);
#endif
#if 0//convert to 8  RGB to Pattle R/G/B/C/Y/M + W/Black
    if(ucRGB >= 128)
    {
        return 0x00;
    }
    return 0xFF;
#endif
#if 0//convert to 14  RGB to Pattle R/G/B/C/Y/M + W/Black +Orange/Chartreuse/Aquamarine/Azure/Voilet/Rose & Gray
    if(ucRGB >= 192)
    {
        return 0x00;
    }
    else if(ucRGB <= 64)
    {
        return 0xFF;
    }
    return 0x80;
#endif
}

//--------------------------------------------------
// Description  : Measure Input data to change Pattle
// Input Value  : None
// Output Value : None
//--------------------------------------------------
#define MAXOF3(a, b, c)                         (MAXOF((MAXOF((a), (b))), (c)))
void UserAdjustSmartCrosshairHandler(void)
{
    SDWORD shTemp = 0;
    BYTE ucCtR=0xFF;
    BYTE ucCtG=0xFF;
    BYTE ucCtB=0xFF;
    BYTE ucMRValue=128;
    BYTE ucMGValue=128;
    BYTE ucMBValue=128;
    BYTE ucResult = 0;
	static bit bInitial = _FALSE;
    static BYTE setRGB = 0;

    if(SysModeGetModeState() != _MODE_STATUS_ACTIVE)
    {
        bInitial = _FALSE;
		setRGB=0;
        return;
    }
	//DebugMessageOsd("3.1UserAdjustSmartCrosshairHandler",GET_OSD_DIAL_POINT_STYLE());
	//DebugMessageOsd("3.2UserAdjustSmartCrosshairHandler",g_stOsdInfo.b1DynamicDiapointStatus);

    if((GET_OSD_DIAL_POINT_STYLE() == _ON) && (GET_OSD_STATE() == _HOT_KEY_LOS_TYPE1 || GET_OSD_STATE() == _HOT_KEY_LOS_TYPE2/* || GET_OSD_STATE() == _HOT_KEY_LOS_TYPE3 */) && (g_stOsdInfo.b1DynamicDiapointStatus == _TRUE))
    {

        if(bInitial == _FALSE)
        {
            bInitial = _TRUE;
			setRGB=0;
            UserAdjustSmartCrosshairInit();
        }
		DebugMessageOsd("3.2UserAdjustSmartCrosshairHandler",UserCommonAdjustColorGetDynamicColorMeasureResult(&ucResult, _NOT_WAIT));

        if(UserCommonAdjustColorGetDynamicColorMeasureResult(&ucResult, _NOT_WAIT) == _TRUE)
        {
            if(g_stOsdInfo.ucDcrMeasureType == _AUTO_RED_CHANNEL)
            {
                g_stOsdInfo.ucDcrMeasureR = ucResult;
                g_stOsdInfo.ucDcrMeasureType = (_AUTO_GREEN_CHANNEL);
            }
            else if(g_stOsdInfo.ucDcrMeasureType == _AUTO_GREEN_CHANNEL)
            {
                g_stOsdInfo.ucDcrMeasureG = ucResult;
                g_stOsdInfo.ucDcrMeasureType = (_AUTO_BLUE_CHANNEL);
            }
            else if(g_stOsdInfo.ucDcrMeasureType== _AUTO_BLUE_CHANNEL)
            {
                g_stOsdInfo.ucDcrMeasureB = ucResult;
                g_stOsdInfo.ucDcrMeasureType =(_AUTO_RED_CHANNEL);
            }
			if(ScalerOsdGetOsdEnable()	!= _TRUE && setRGB<=10)
			{
				setRGB++;
			}

            DebugMessageOsd("9. g_stOsdInfo.ucDcrMeasureR", g_stOsdInfo.ucDcrMeasureR);
            DebugMessageOsd("9. g_stOsdInfo.ucDcrMeasureG", g_stOsdInfo.ucDcrMeasureG);
            DebugMessageOsd("9. g_stOsdInfo.ucDcrMeasureB", g_stOsdInfo.ucDcrMeasureB);

            if(_COLOR_SPACE_RGB != ScalerColorGetColorSpace())
            {
                DebugMessageOsd("9. _COLOR_SPACE_YCBCR444", ScalerColorGetColorSpace());
                shTemp = (((SDWORD)1164 * ((SDWORD)g_stOsdInfo.ucDcrMeasureG - 16) + (SDWORD)1793 * ((SDWORD)g_stOsdInfo.ucDcrMeasureR - 128)) / 1000);
                ucMRValue = UserAdjustCheckValue(shTemp);

                shTemp = (((SDWORD)1164 * ((SDWORD)g_stOsdInfo.ucDcrMeasureG - 16) - (SDWORD)213 * ((SDWORD)g_stOsdInfo.ucDcrMeasureB - 128) - (SDWORD)533 * ((SDWORD)g_stOsdInfo.ucDcrMeasureR - 128)) / 1000);
                ucMGValue = UserAdjustCheckValue(shTemp);

                shTemp = (((SDWORD)1164 * ((SDWORD)g_stOsdInfo.ucDcrMeasureG - 16) + (SDWORD)2112 * ((SDWORD)g_stOsdInfo.ucDcrMeasureB - 128)) / 1000);
                ucMBValue = UserAdjustCheckValue(shTemp);
            }
            else
            {
                DebugMessageOsd("9. _COLOR_SPACE_RGB", ScalerColorGetColorSpace());
                ucMRValue = g_stOsdInfo.ucDcrMeasureR;
                ucMGValue = g_stOsdInfo.ucDcrMeasureG;
                ucMBValue = g_stOsdInfo.ucDcrMeasureB;
            }
            DebugMessageOsd("9.  cal R", ucMRValue);
            DebugMessageOsd("9.  cal G", ucMGValue);
            DebugMessageOsd("9.  cal B", ucMBValue);

            //convert  RGB to Pattle
            ucCtR = UserAdjustRGBtoCT(ucMRValue);
            ucCtG = UserAdjustRGBtoCT(ucMGValue);
            ucCtB = UserAdjustRGBtoCT(ucMBValue);


            DebugMessageOsd("9.  ucCtR", ucCtR);
            DebugMessageOsd("9.  ucCtG", ucCtG);
            DebugMessageOsd("9.  ucCtB", ucCtB);

#if 1//Robert Wang 20221227 from TPV , 5 color R/G/B/W/Black
            if(ucCtR == (MAXOF3(ucCtR, ucCtG, ucCtB)) && ((ucCtR - MINOF(ucCtG, ucCtB)) > 40))
            {
                ucCtR = 255;
                ucCtG = 0;
                ucCtB = 0;
            }
            else if(ucCtG == (MAXOF3(ucCtR, ucCtG, ucCtB)) && ((ucCtG - MINOF(ucCtR, ucCtB)) > 40))
            {
                ucCtR = 0;
                ucCtG = 255;
                ucCtB = 0;
            }
            else if(ucCtB == (MAXOF3(ucCtR, ucCtG, ucCtB)) && ((ucCtB - MINOF(ucCtG, ucCtR)) > 40))
            {
                ucCtR = 0;
                ucCtG = 0;
                ucCtB = 255;
            }
			/*
            else if((((ucCtR + ucCtG +ucCtB)/3) >= 127) && (ucCtG > 200))
            {
                ucCtR = 255;
                ucCtG = 255;
                ucCtB = 255;
            }
            else
            {
                ucCtR = 0;
                ucCtG = 0;
                ucCtB = 0;
            }
            */
            else if(((ucCtR + ucCtG +ucCtB)/3) < 127)
            {
                ucCtR = 0;
                ucCtG = 0;
                ucCtB = 0;
            }
            else
            {
                ucCtR = 255;
                ucCtG = 255;
                ucCtB = 255;
            }
#endif

            ScalerOsdSetColorPalette(_CP_RED, ucCtR, ucCtG, ucCtB);
            DebugMessageOsd("9.  CT R", ucCtR);
            DebugMessageOsd("9.  CT G", ucCtG);
            DebugMessageOsd("9.  CT B", ucCtB);

            UserCommonAdjustColorSetAutoMeasure(g_stOsdInfo.ucDcrMeasureType);

        }
		if(setRGB>4)
			OsdFuncEnableOsd();
    }
}

#endif

#endif//#if(_OSD_TYPE == _REALTEK_2014_OSD)
