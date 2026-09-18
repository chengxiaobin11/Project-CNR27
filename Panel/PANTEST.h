
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
#if(_PANEL_TYPE == _PANTEST)
#if(Project_ID    ==  ID_CS_2795_M270QAN070_UHD)
//----------------------------------------------------------------------------------------------------
// ID Code      : _LG_LM270WR2_EDP_UHD_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#define _PANEL_PRESET_MODE_FRAME_RATE            600

//////////////////
// General Info //
//////////////////
//#define _PANNEL_NAME                            _P__,_A__,_N__,_E__,_L__,__,_COLON__,__,_L__,_M__,_2__,_7__,_0__,_W__,_R__,_2__
#define _PANNEL_NAME                            _P__,_A__,_N__,_E__,_L__,__,_COLON__,__,_L__,_M__,_2__,_7__,_0__,_W__,_R__,_3__

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR2
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_8
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE

//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF


//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_LGD

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_30_BIT
///////////////////////////////////////////////////////////////////
/*
//屏极限
HBR2 8LANE _PANEL_DISP_30_BIT 最高可支持QHD250//输出没问题 _PANEL_DISP_30_BIT/_PANEL_DISP_24_BIT


*/
//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_TYP_FRAME_RATE                   1700
#define _PANEL_MAX_FRAME_RATE                   1810//720
#define _PANEL_MIN_FRAME_RATE                   600

#if(_FREESYNC_SUPPORT == _ON)
//--------------------------------------------------
// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE         1800//700
#define _PANEL_FREESYNC_MIN_FRAME_RATE          600
#endif

///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         72
#define _PANEL_DH_WIDTH                         2560
#define _PANEL_DH_END                           2608

#define _PANEL_DH_TOTAL                    		2800//2760
#define _PANEL_DH_TOTAL_MAX         			2960//6000//4000
#define _PANEL_DH_TOTAL_MIN               		2784//2672

#define _PANEL_DV_START                         10
#define _PANEL_DV_HEIGHT                        1440
#define _PANEL_DV_END                           1450

#define _PANEL_DV_TOTAL                  		1488
#define _PANEL_DV_TOTAL_MAX             		8080
#define _PANEL_DV_TOTAL_MIN                   	1468

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                   	720//483
#define _PANEL_PIXEL_CLOCK_MAX           		790//780//720//700
#define _PANEL_PIXEL_CLOCK_MIN                	700//220
//640x480锟届场---锟斤拷锟斤拷DCLK:559MHz

#define _PANEL_POWER_ON_T1                      10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      500

#define _PANEL_POWER_OFF_T4                     220
#define _PANEL_POWER_OFF_T5                     10
#define _PANEL_POWER_OFF_T6                     1010


/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 150)

//--------------------------------------------------
// Definitions for Frame Sync Margin (Unit: 0.1Hz)
//--------------------------------------------------
#define _FRAME_SYNC_MARGIN                      20

//--------------------------------------------------
// Definitions for Panel DCLK Unit
//--------------------------------------------------
#define _PANEL_PIXEL_CLOCK_UNIT                 _PANEL_CLOCK_MHZ


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


//--------------------------------------------------
// Definitions for video compensation
//-------------------------------------------------
#define BYPASS_VIDEO_COMPENSATION(Vin, Vout)    ((Vin) == ((Vout) >> 1))


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


///////////////////////////
// Color Characteristics //
///////////////////////////

//--------------------------------------------------
// Definitions for Display HDR
//--------------------------------------------------
#define _PANEL_MAX_LUMINANCE                    0x62 // from OGC Tool
#define _PANEL_MAX_FRAME_AVERAGE_LUMINANCE      0x62 // from OGC Tool
#elif(Project_ID    ==  ID_CS_2795)
//----------------------------------------------------------------------------------------------------
// ID Code      : _LG_LM270WR2_EDP_UHD_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
#define _PANEL_PRESET_MODE_FRAME_RATE            600

//////////////////
// General Info //
//////////////////
//#define _PANNEL_NAME                            _P__,_A__,_N__,_E__,_L__,__,_COLON__,__,_L__,_M__,_2__,_7__,_0__,_W__,_R__,_2__
#define _PANNEL_NAME                            _P__,_A__,_N__,_E__,_L__,__,_COLON__,__,_L__,_M__,_2__,_7__,_0__,_W__,_R__,_3__

//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE            600

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_DPTX

//--------------------------------------------------
// Definitions for DPTx Panel Configuration
//--------------------------------------------------
#define _PANEL_DPTX_LINK_RATE                   _PANEL_DPTX_LINK_HBR2
#define _PANEL_DPTX_LANE_NUMBER                 _PANEL_DPTX_LANE_NUMBER_8
#define _PANEL_DPTX_VENDOR_SPECIFIC_TYPE        _PANEL_DPTX_VENDOR_SPECIFIC_NONE

//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF


//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_LGD

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_TYP_FRAME_RATE                   1800
#define _PANEL_MAX_FRAME_RATE                   2410
#define _PANEL_MIN_FRAME_RATE                   590

#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          2400
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif

///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         3840
#define _PANEL_DH_END                           3888

#define _PANEL_DH_TOTAL                         4400
#define _PANEL_DH_TOTAL_MAX                     4800
#define _PANEL_DH_TOTAL_MIN                     4240

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080//2160
#define _PANEL_DV_END                           1086//2166

#define _PANEL_DV_TOTAL                         1121//2250
#define _PANEL_DV_TOTAL_MAX                     12000
#define _PANEL_DV_TOTAL_MIN                     1100//2200

#define _PANEL_DH_SYNC_WIDTH                    16//8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                      594
#define _PANEL_PIXEL_CLOCK_MAX                  1400
#define _PANEL_PIXEL_CLOCK_MIN                  560

#define _PANEL_POWER_ON_T1                      5
#define _PANEL_POWER_ON_T2                      200
#define _PANEL_POWER_ON_T3                      1500

#define _PANEL_POWER_OFF_T4                     100
#define _PANEL_POWER_OFF_T5                     50
#define _PANEL_POWER_OFF_T6                     500



/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 300)

//--------------------------------------------------
// Definitions for Frame Sync Margin (Unit: 0.1Hz)
//--------------------------------------------------
#define _FRAME_SYNC_MARGIN                      20

//--------------------------------------------------
// Definitions for Panel DCLK Unit
//--------------------------------------------------
#define _PANEL_PIXEL_CLOCK_UNIT                 _PANEL_CLOCK_MHZ


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


//--------------------------------------------------
// Definitions for video compensation
//-------------------------------------------------
#define BYPASS_VIDEO_COMPENSATION(Vin, Vout)    ((Vin) == ((Vout) >> 1))


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


///////////////////////////
// Color Characteristics //
///////////////////////////

//--------------------------------------------------
// Definitions for Display HDR
//--------------------------------------------------
#define _PANEL_MAX_LUMINANCE                    0x62 // from OGC Tool
#define _PANEL_MAX_FRAME_AVERAGE_LUMINANCE      0x62 // from OGC Tool

#elif (Project_ID    ==  ID_CS_2556)

//----------------------------------------------------------------------------------------------------
// ID Code      : 44_AUO_T215HVN05_1_LVDS_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_H__,_C__,_A__,_L__,_7__,_B__
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE          3000// 1650

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#define _LVDS_OUTPUT_PORT                       _LVDS_4_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_0
//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_AUO

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_TYP_FRAME_RATE                   700//2400
#define _PANEL_MAX_FRAME_RATE                  	2420//3020//2010
#define _PANEL_MIN_FRAME_RATE                	480//590//   480


#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          2400//2000//750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif



///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#if 0//(Project_ID    ==  ID_RD_HK2557E02_1P1H_SN238CS041_LVDS_FDH180HZ_20230522)
#define _PANEL_DH_TOTAL                   		2040// 2120// 2176//    2100
#else
#define _PANEL_DH_TOTAL                   		2280//2016//2020//2080//2100// 2120// 2176//    2100
#endif
#define _PANEL_DH_TOTAL_MAX                  	8000//   3356
#define _PANEL_DH_TOTAL_MIN                    	2080//2080//2020//2060//2020// 2000//2120

#define _PANEL_DV_START                         6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1086

#define _PANEL_DV_TOTAL                         1111
#define _PANEL_DV_TOTAL_MAX                    	8000// 3365//1836
#define _PANEL_DV_TOTAL_MIN                     1100//1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                     	141// 148
#define _PANEL_PIXEL_CLOCK_MAX                	600//620//360//700//480//500//500// 190//   180
#define _PANEL_PIXEL_CLOCK_MIN                 	110// 106//110


#define _PANEL_POWER_ON_T1                      20//10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      600

#define _PANEL_POWER_OFF_T4                     300//210
#define _PANEL_POWER_OFF_T5               		25
#define _PANEL_POWER_OFF_T6                     1500


/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 150)

//--------------------------------------------------
// Definitions for Frame Sync Margin (Unit: 0.1Hz)
//--------------------------------------------------
#define _FRAME_SYNC_MARGIN               40//       20

//--------------------------------------------------
// Definitions for Panel DCLK Unit
//--------------------------------------------------
#define _PANEL_PIXEL_CLOCK_UNIT                 _PANEL_CLOCK_MHZ

//--------------------------------------------------
// Definitions for video compensation
//-------------------------------------------------
#define BYPASS_VIDEO_COMPENSATION(Vin, Vout)    ((Vin) == ((Vout) >> 1))


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


///////////////////////////
// Color Characteristics //
///////////////////////////

//--------------------------------------------------
// Definitions for Display HDR
//--------------------------------------------------
#define _PANEL_MAX_LUMINANCE                    0x62 // from OGC Tool
#define _PANEL_MAX_FRAME_AVERAGE_LUMINANCE      0x62 // from OGC Tool




#elif 0
//----------------------------------------------------------------------------------------------------
// ID Code      : _INNOLUX_M270KCJ_L5B_LVDS_QHD.h No.0000
// Update Note  :


#define _PANEL_PRESET_MODE_FRAME_RATE            750

//////////////////
// General Info // 
//////////////////
#define _PANNEL_NAME                            _P__,_N__,_L__,__,_COLON__,__,_M__,_2__,_7__,_0__,_K__,_C__,_J__,_K__,_L__,_5__,_B__


//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#define _LVDS_OUTPUT_PORT                       _LVDS_4_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#if (Project_ID    ==  ID_CS_2556)
#define  _LVDS_CABLE_TYPE						_LVDS_CABLE_TYPE_2
#else
#define  _LVDS_CABLE_TYPE						_LVDS_CABLE_TYPE_0
#endif
//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_INNOLUX

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                    _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------


#define _PANEL_TYP_FRAME_RATE                   600
#define _PANEL_MAX_FRAME_RATE                 2000
#define _PANEL_MIN_FRAME_RATE                   460

//--------------------------------------------------
// Definitions for FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          2000
#define _PANEL_FREESYNC_MIN_FRAME_RATE          460


///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48                  // Display Horizontal Start Position
#define _PANEL_DH_WIDTH                         2560                // Display Horizontal Width
#define _PANEL_DH_END                           2608                // Display Horizontal End Position

#define _PANEL_DH_TOTAL                         2792                // Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MAX                     12000//2800                // Maxinum Display Horizontal Total Clock Number in One Display Line
#define _PANEL_DH_TOTAL_MIN                     2784                // Mininum Display Horizontal Total Clock Number in One Display Line

#define _PANEL_DV_START                         6                   // Display Vertical Start Position
#define _PANEL_DV_HEIGHT                        1440                // Display Vertical Width
#define _PANEL_DV_END                           1446                // Display Vertical End Position

#define _PANEL_DV_TOTAL                         1481                // Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MAX                     12000//3000//1487                // Maxinum Display Vertical Total Clock Number in One Display Line
#define _PANEL_DV_TOTAL_MIN                     1479                // Mininum Display Vertical Total Clock Number in One Display Line

#define _PANEL_DH_SYNC_WIDTH                    8                   // Display Horizontal Sync Width
#define _PANEL_DV_SYNC_HEIGHT                   2                   // Display Vertical Sync Height

#define _PANEL_PIXEL_CLOCK                      248                 // Typical Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MAX                  500//312                 // Maxinum Pixel Clock in MHz
#define _PANEL_PIXEL_CLOCK_MIN                  190                 // Mininum Pixel Clock in MHz


#define _PANEL_POWER_ON_T1                      20                  // Panel Power On T1 (ms)
#define _PANEL_POWER_ON_T2                      20                  // Panel Power On T2 (ms)
#define _PANEL_POWER_ON_T3                      550                 // Panel Power On T3 (ms)

#define _PANEL_POWER_OFF_T4                     150                 // Panel Power Off T4 (ms)
#define _PANEL_POWER_OFF_T5                     25                  // Panel Power Off T5 (ms)
#define _PANEL_POWER_OFF_T6                     1300                // Panel Power Off T6 (ms)

/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 200)

//--------------------------------------------------
// Definitions for Frame Sync Margin (Unit: 0.1Hz)
//--------------------------------------------------
#define _FRAME_SYNC_MARGIN                      20

//--------------------------------------------------
// Definitions for Panel DCLK Unit
//--------------------------------------------------
#define _PANEL_PIXEL_CLOCK_UNIT                 _PANEL_CLOCK_MHZ

//--------------------------------------------------
// Definitions for video compensation
//-------------------------------------------------
#define BYPASS_VIDEO_COMPENSATION(Vin, Vout)    ((Vin) == ((Vout) >> 1))


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


///////////////////////////
// Color Characteristics //
///////////////////////////
#define _PANEL_MAX_LUMINANCE                    0x62 // from OGC Tool
#define _PANEL_MAX_FRAME_AVERAGE_LUMINANCE      0x62 // from OGC Tool



/////////////////////////
// Color Default Table //
/////////////////////////

//--------------------------------------------------
// Color Default Value
//--------------------------------------------------

#else // End of #if(_PANEL_TYPE == _AUO_M270DAN02V0_LVDS_QHD)

//----------------------------------------------------------------------------------------------------
// ID Code      : 44_AUO_T215HVN05_1_LVDS_60HZ.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#define _PANNEL_NAME                        _P__,_a__,_n__,_e__,_l__,__,_COLON__,__,_M__,_2__,_7__,_0__,_H__,_C__,_A__,_L__,_7__,_B__
//////////////////
// General Info //
//////////////////
#define _PANEL_PRESET_MODE_FRAME_RATE          1440// 1650

//--------------------------------------------------
// Definitions for Panel Style
//--------------------------------------------------
#define _PANEL_STYLE                            _PANEL_LVDS

//--------------------------------------------------
// Definitions for LVDS Panel Configuration
//--------------------------------------------------
#define _LVDS_OUTPUT_PORT                       _LVDS_2_PORT
#define _LVDS_PANEL_SECTION                     _LVDS_PANEL_1_SECTION
#define _LVDS_TABLE_TYPE                        _LVDS_BIT_MAP_TABLE_1_3
#if(Project_ID    ==  ID_WM_HK2557E04_1P2H_SG2701B018_LVDS_FDH200HZ_20230517)
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_1

#else
#define _LVDS_CABLE_TYPE                        _LVDS_CABLE_TYPE_0
#endif
//--------------------------------------------------
// Definitions for MultiPanel Support
//--------------------------------------------------
#define _PANEL_EXIST_MULTIPANEL                 _OFF

//--------------------------------------------------
// Definitions for Panel Manufacturer
//--------------------------------------------------
#define _PANEL_MANUFACTURER                     _PANEL_AUO

//--------------------------------------------------
// Definitions for Panel Display Color Depth
//--------------------------------------------------
#define _PANEL_DISP_BIT_MODE                   _PANEL_DISP_24_BIT// _PANEL_DISP_24_BIT

//--------------------------------------------------
// Definitions for Maximum Panel Frame Rate (Unit: 0.1 Hz)
//--------------------------------------------------
#define _PANEL_TYP_FRAME_RATE                   1200//2400
#define _PANEL_MAX_FRAME_RATE                  	3000//3020//2010
#define _PANEL_MIN_FRAME_RATE                	480//590//   480


#if(_FREESYNC_SUPPORT == _ON)
	//--------------------------------------------------
	// FREESYNC Maximum Panel Frame Rate (Unit: 0.1 Hz)
	//--------------------------------------------------
#define _PANEL_FREESYNC_MAX_FRAME_RATE          3000//2000//750
#define _PANEL_FREESYNC_MIN_FRAME_RATE          480

#endif



///////////////
// Parameter //
///////////////

//--------------------------------------------------
// Definitions for Panel Parameter
//--------------------------------------------------
#define _PANEL_DH_START                         48
#define _PANEL_DH_WIDTH                         1920
#define _PANEL_DH_END                           1968

#if 0//(Project_ID    ==  ID_RD_HK2557E02_1P1H_SN238CS041_LVDS_FDH180HZ_20230522)
#define _PANEL_DH_TOTAL                   		2040// 2120// 2176//    2100
#else
#define _PANEL_DH_TOTAL                   		2200//2088//2048//2088//2020//2080//2100// 2120// 2176//    2100
#endif
#define _PANEL_DH_TOTAL_MAX                  	4000//2240//8000//   3356
#define _PANEL_DH_TOTAL_MIN                    	2048//2020//2060//2020// 2000//2120

#define _PANEL_DV_START                         8//6
#define _PANEL_DV_HEIGHT                        1080
#define _PANEL_DV_END                           1088//1086

#define _PANEL_DV_TOTAL                         1111
#define _PANEL_DV_TOTAL_MAX                    	8000// 3365//1836
#define _PANEL_DV_TOTAL_MIN                     1090//1100

#define _PANEL_DH_SYNC_WIDTH                    8
#define _PANEL_DV_SYNC_HEIGHT                   2

#define _PANEL_PIXEL_CLOCK                     	200//141// 148
#define _PANEL_PIXEL_CLOCK_MAX                	700//360//700//480//500//500// 190//   180
#define _PANEL_PIXEL_CLOCK_MIN                 	114//180//114// 106//110


#define _PANEL_POWER_ON_T1                      20//10
#define _PANEL_POWER_ON_T2                      20
#define _PANEL_POWER_ON_T3                      700

#define _PANEL_POWER_OFF_T4                     300//210
#define _PANEL_POWER_OFF_T5               		25
#define _PANEL_POWER_OFF_T6                     1100


/////////////
// Display //
/////////////

//--------------------------------------------------
// Definitions for Last Line Finetune Target
//--------------------------------------------------
#define _LAST_LINE_TARGET                       (_PANEL_DH_TOTAL - 150)

//--------------------------------------------------
// Definitions for Frame Sync Margin (Unit: 0.1Hz)
//--------------------------------------------------
#define _FRAME_SYNC_MARGIN               40//       20

//--------------------------------------------------
// Definitions for Panel DCLK Unit
//--------------------------------------------------
#define _PANEL_PIXEL_CLOCK_UNIT                 _PANEL_CLOCK_MHZ

//--------------------------------------------------
// Definitions for video compensation
//-------------------------------------------------
#define BYPASS_VIDEO_COMPENSATION(Vin, Vout)    ((Vin) == ((Vout) >> 1))


////////////////////
// VGA Auto Color //
////////////////////

//--------------------------------------------------
// Definitions for ADC Gain/Offset Adjust
//--------------------------------------------------
#define _PANEL_ADC_OFFSET_BIAS                  (0)
#define _PANEL_ADC_GAIN_BIAS                    (0)


///////////////////////////
// Color Characteristics //
///////////////////////////

//--------------------------------------------------
// Definitions for Display HDR
//--------------------------------------------------
#define _PANEL_MAX_LUMINANCE                    0x62 // from OGC Tool
#define _PANEL_MAX_FRAME_AVERAGE_LUMINANCE      0x62 // from OGC Tool


#endif // End of #if(_PANEL_TYPE == _AUO_T215HVN05_1_LVDS_60HZ)

/////////////////////////
// Color Default Table //
/////////////////////////

//--------------------------------------------------
// Color Default Value
//--------------------------------------------------
#include "./RTDColorDefaultTable/ColorTableInclude.h"

#endif // End of #if(_PANEL_TYPE == _AUO_T215HVN05_1_LVDS_60HZ)




