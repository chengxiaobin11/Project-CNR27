/********************************************************************************/
/*   The  Software  is  proprietary,  confidential,  and  valuable to Realtek   */
/*   Semiconductor  Corporation  ("Realtek").  All  rights, including but not   */
/*   limited  to  copyrights,  patents,  trademarks, trade secrets, mask work   */
/*   rights, and other similar rights and interests, are reserved to Realtek.   */
/*   Without  prior  written  consent  from  Realtek,  copying, reproduction,   */
/*   modification,  distribution,  or  otherwise  is strictly prohibited. The   */
/*   Software  shall  be  kept  strictly  in  confidence,  and  shall  not be   */
/*   disclosed to or otherwise accessed by any third party.                     */
/*   c<2003> - <2017>                                                           */
/*   The Software is provided "AS IS" without any warranty of any kind,         */
/*   express, implied, statutory or otherwise.                                  */
/********************************************************************************/

//----------------------------------------------------------------------------------------------------
// ID Code      : RTDOsdTableDefine.h
// Update Note  :
//----------------------------------------------------------------------------------------------------
//_AR_F2_,_AR_F2_,_AR_F2_,_END_,
#if(_OSD_TYPE == _REALTEK_2014_OSD)

#if(_MC_EUROPE)
BYTE code tsOSD_BRI[] =
{
	_L_,__u_,__m_,__i_,__n_,__a_,__n_,__c_,__e_,_END_,
	_L_,_u_,_m_,_i_,_n_,_o_,_s_,_i_,_t_,_e2_,_END_,
	_B_,_r_,_i_,_l_,_l_,_o_,_END_,
	_B_,_r_,_i_,_l_,_l_,_o_,_END_,
	_H_,__e_,__l_,__l_,__i_,_g_,__k_,__e_,__i_,__t_,_END_,
	_L_,_u_,_m_,_i_,_n_,_o_,_s_,_i_,_t_,_a4_E6,_END_,
	_H_,__e_,__l_,__d_,__e_,_r_,__h_,__e_,__i_,__d_,_END_,
	_L_,_u_,_m_,_i_,_n_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_a_,_n_,_c_,_j_,_a_,_END_,
	
	_S_,_v_,_e1_,_t_,_e_,_l_,_n_,_DOT_,_END_,
	_EY_FR_DF,_EY_PX_C2,_EY_KX_B6,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,	//俄语	明亮度
	_HY_46_,_HY_47_,_END_,
	_FT_liang_47,_FT_du_48,_END_,     //亮度 
	_CH_MING_49,_CH_LIANG_4A,_CH_DU_4B,_END_,	//?òì??D??  ?÷áá?è
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_4b,_JA_bd,_JA_4d,_JA_4e,_END_,	//15
#else
	_JA_49,_JA_4a,_END_,	//15
#endif

	 
    _47,_48,_49,_4a,_4b,_4c,_4d,_49,_4e,_49,_4f,_END_,
	_L_,__u_,__m_,__i_,__n_,__a_,__n_,__c_,__i_,__a_,_END_,
	_L_,__u_,__m_,__i_,__n_,__a_,__n_,__s_,_END_,
	
	_x49_,_x4a_,_,_s_,_x4b_,_n_,_g_,_END_,
	_x4b_,_x54_,_x4c_,_x53_,_x5c_,_END_,
	_AR_1_,_AR_2_,_AR_3_,_AR_4_,_AR_5_,_END_,

	_Y_,_o_,_r_,_q_,_i_,_n_,_l_,_i_,_k_,_END_, // _UZBEK_SUPPRT
	_EY_FR_DF,_EY_CX_C4,_EY_KX_B6,_EY_PX_C2,_EY_AX_A0,_EY_BX_A4,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT

};

#else
BYTE code tsOSD_BRI[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)
	_P_,__i_,__c_,__t_,__u_,__r_,__e_,_END_,
#else
	_L_,__u_,__m_,__i_,__n_,__a_,__n_,__c_,__e_,_END_,
#endif
	_L_,_u_,_m_,_i_,_n_,_o_,_s_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_o_,_s_,_DOT_,_END_,
	_A_,_j_,_u_,_s_,_t_,_e_,_,_d_,_e_,_,_I_,_m_,_a_,_g_,_e_,_m_,_END_,
	_L_,_e_,_u_,_c_,_h_,_t_,_k_,_r_,_a_,_f_,_t_,_END_,

	//_L_,_u_,_m_,_i_,_n_,_o_,_s_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_o_,_s_,_i_,_t_,_a4_E6,_END_,
	_L_,_u_,_m_,_i_,_n_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_a_,_n_,_c_,_j_,_a_,_END_,
	
	_S_,_v_,_e1_,_t_,_e_,_l_,_n_,_DOT_,_END_,
	
	_EY_FR_DF,_EY_PX_C2,_EY_KX_B6,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,	//俄语	明亮度
	_HY_46_,_HY_47_,_END_,
	_FT_liang_47,_FT_du_48,_END_,     //亮度 
	_CH_MING_49,_CH_LIANG_4A,_CH_DU_4B,_END_,	//?òì??D??  ?÷áá?è
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_4b,_JA_bd,_JA_4d,_JA_4e,_END_,	//15
#else
	_JA_49,_JA_4a,_END_,	//15
#endif

	 
    _47,_48,_49,_4a,_4b,_4c,_4d,_49,_4e,_49,_4f,_END_,
	_L_,__u_,__m_,__i_,__n_,__a_,__n_,__c_,__i_,__a_,_END_,
	_L_,__u_,__m_,__i_,__n_,__a_,__n_,__s_,_END_,
	
	_x49_,_x4a_,_,_s_,_x4b_,_n_,_g_,_END_,
	_x4b_,_x54_,_x4c_,_x53_,_x5c_,_END_,
	_AR_1_,_AR_2_,_AR_3_,_AR_4_,_AR_5_,_END_,

	_Y_,_o_,_r_,_q_,_i_,_n_,_l_,_i_,_k_,_END_, // _UZBEK_SUPPRT
	_EY_FR_DF,_EY_CX_C4,_EY_KX_B6,_EY_PX_C2,_EY_AX_A0,_EY_BX_A4,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT

};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_IMAGE[] =
{
    _I_,__m_,__a_,__g_,__e_,_END_,
    _I_,__m_,__a_,__g_,__e_,_END_,
    _I_,__m_,__a_,__g_,__e_,_n_,_END_,
    _I_,__m_,__a_,__g_,__e_,_m_,_END_,
	_B_,_i_,_l_,_d_,_END_,
	_I_,_m_,_m_,_a_,_g_,_i_,_n_,_e_,_END_,
	_B_,_e_,_e_,_l_,_d_,_END_,
	_B_,_i_,_l_,_d_,_e_,_i_,_n_,_r_,__i_,__c_,__h_,__t_,__u_,__n_,__g_,_END_,
	_K_,_u_,_v_,_a_,_BLANK_1,_A_,_s_,_e_,__t_,__u_,__k_,_DOT_,_END_,
	_U_,_s_,_t_,_a_,_w_,_i_,_e_,_n_,_DOT_,__b_,__r_,__a_,__z_,__u_,_END_,
	_N_,_a_,_s_,_t_,_a_,_v_,_DOT_,_O_,_b_,__r_,__a_,__z_,__u_,_END_,

	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_DOT_,_,_EY_N_B1,_EY_3X_B0,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_EY_AX_A0,_EY_ZZX_AE,_DOT_,_END_,	//俄语	图像设置
	_HY_48_,_HY_49_,_HY_4A_,_,_HY_4B_,_HY_4C_,_END_,
		_FT_tu_49,_FT_xiang_4A,_FT_she_4B,_FT_ding_4F_,_END_,   //圖像設定
	_CH_TU_4C,_CH_XIANG_4D,_CH_SHE_4E,_CH_ZHI_4F,_END_,		//?òì??D??  í???éè??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_4b,_JA_c6,_JA_4d,_JA_be,_END_,
#else
	_JA_4b,_JA_4c,_JA_4d,_JA_4e,_END_,
		
#endif

	
	_P_,_50,_51,_52,_4b,_53,_4e,_,_4a,_4b,_54,_4d,_4c,_4f,_55,_END_,
	_K_,_e2_,_p_,_b_,_e_,_a2_,_l_,_l_,_i2_,_t_,_a2_,_s_,_END_,
	_G_,_o3_,_r_,_u3_,_n_,_t_,_u3_,_,_A_,_y_,_a_,_r_,_l_,_a_,_m_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_h_,_x4d_,_n_,_h_,_,_x4e_,_n_,_h_,_END_,
	_x4b_,_x54_,_x53_,_x5c_,_,_x5c_,_x5a_,_x4a_,_x49_,_x4b_,_END_,
	_AR_38_,_AR_39_,_AR_3A_,_AR_3B_,_AR_3C_,_END_,

	_R_,_a_,_s_,_m_,_n_,_i_,_END_,	// _UZBEK_SUPPRT
	_EY_3_AF,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_EY_AX_A0,_EY_ZZX_AE,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT


};

#else
BYTE code tsOSD_IMAGE[] =
{
    _I_,__m_,__a_,__g_,__e_,___,_S_,__e_,__t_,__u_,__p_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_I_,__m_,__a_,__g_,__e_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_I_,__m_,__a_,__g_,__e_,__n_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_I_,__m_,__a_,__g_,__e_,__m_,_END_,
	_B_,_i_,_l_,_d_,_e_,_i_,_n_,_s_,__t_,__e_,__l_,__l_,_DOT_,_END_,
	_I_,_m_,_p_,_DOT_,_I_,__m_,__m_,__a_,__g_,__i_,_n_,_e_,_END_,
	_B_,_e_,_e_,_l_,_d_,_i_,_n_,_s_,__t_,_DOT_,_END_,
	_B_,_i_,_l_,_d_,_e_,_i_,_n_,_r_,__i_,__c_,__h_,__t_,__u_,__n_,__g_,_END_,
	_K_,_u_,_v_,_a_,_BLANK_1,_A_,_s_,_e_,__t_,__u_,__k_,_DOT_,_END_,
	_U_,_s_,_t_,_a_,_w_,_i_,_e_,_n_,_DOT_,__b_,__r_,__a_,__z_,__u_,_END_,
	_N_,_a_,_s_,_t_,_a_,_v_,_DOT_,_O_,_b_,__r_,__a_,__z_,__u_,_END_,

	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_DOT_,_,_EY_N_B1,_EY_3X_B0,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_EY_AX_A0,_EY_ZZX_AE,_DOT_,_END_,	//俄语	图像设置
	_HY_48_,_HY_49_,_HY_4A_,_,_HY_4B_,_HY_4C_,_END_,
		_FT_tu_49,_FT_xiang_4A,_FT_she_4B,_FT_ding_4F_,_END_,   //圖像設定
	_CH_TU_4C,_CH_XIANG_4D,_CH_SHE_4E,_CH_ZHI_4F,_END_,		//?òì??D??  í???éè??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_4b,_JA_c6,_JA_4d,_JA_be,_END_,
#else
	_JA_4b,_JA_4c,_JA_4d,_JA_4e,_END_,
		
#endif

	
	_P_,_50,_51,_52,_4b,_53,_4e,_,_4a,_4b,_54,_4d,_4c,_4f,_55,_END_,
	_K_,_e2_,_p_,_b_,_e_,_a2_,_l_,_l_,_i2_,_t_,_a2_,_s_,_END_,
	_G_,_o3_,_r_,_u3_,_n_,_t_,_u3_,_,_A_,_y_,_a_,_r_,_l_,_a_,_m_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_h_,_x4d_,_n_,_h_,_,_x4e_,_n_,_h_,_END_,
	_x4b_,_x54_,_x53_,_x5c_,_,_x5c_,_x5a_,_x4a_,_x49_,_x4b_,_END_,
	_AR_38_,_AR_39_,_AR_3A_,_AR_3B_,_AR_3C_,_END_,

	_R_,_a_,_s_,_m_,_n_,_i_,_,_s_,_o_,_z_,_l_,_a_,_m_,_a_,_l_,_a_,_r_,_i_,_END_,	// _UZBEK_SUPPRT
	_EY_3_AF,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_EY_AX_A0,_EY_ZZX_AE,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT

};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_CT_TITLE[] =
{
	_C_,__o_,__l_,__o_,__r_,_END_,
	_C_,_o_,_u_,_l_,_e_,_u_,_r_,_END_,
	_C_,__o_,__l_,__o_,__r_,_END_,
	_C_,__o_,__r_,_END_,
	_F_,_a_,_r_,_b_,_e_,_END_,
	_C_,__o_,__l_,__o_,_r_,_e_,_END_,
	_K_,_l_,_e_,_u_,_r_,_END_,
	_F_,_a3_,_r_,_g_,_i_,_n_,_s_,__t_,_DOT_,_END_,
	_V_,_a3_,_r_,_i_,_a_,_s_,_DOT_,_END_,
	_U_,_s_,_t_,_DOT_,_,_K_,_o_,_l_,__o_,__r_,_o2_,_w_,_END_,
	_N_,_a_,_s_,_t_,_DOT_,_B_,_a_,_r_,__v_,__y_,_END_,

	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_DOT_,_,_EY_UWX_CE,_EY_BX_A4,_DOT_,_END_,	//	俄语   颜色设定
	_HY_4D_,_HY_4E_,_,_HY_4B_,_HY_4C_,_END_,
	_FT_se_4E,_FT_cai_46,_FT_she_4B,_FT_ding_4F_,_END_,  //色彩設定
	_CH_YAN_50,_CH_SE_51,_CH_SHE_4E,_CH_DING_52,_END_,		//?òì?		??é?éè?¨
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_4f,_JA_50,_JA_51,_END_,
#else
	_JA_83,_JA_5e,_JA_61,_JA_4d,_JA_4e,_END_,
				
#endif

	_P_,_50,_51,_52,_4b,_53,_4e,_,_56,_57,_58,_52,_4f,_49,_o_,_55,_END_,
	_S_,_z_,_i2_,_n_,_b_,_e_,_a2_,_l_,_l_,_i2_,_t_,_a2_,_s_,_END_,
	_R_,_e_,_n_,_k_,_,_A_,_y_,_a_,_r_,_l_,_a_,_m_,_a_,_END_,
	
	_N_,_h_,_i_,_x48_,_t_,_,_x58_,_x4a_,_,_m_,_x4f_,_u_,_DOT_,_END_,
	_x56_,_x48_,_x58_,_,_x5c_,_x5a_,_x4c_,_x4f_,_x5a_,_x57_,_x53_,_x4f_,_DOT_,_END_,
	_AR_5B_,_AR_5C_,_AR_5D_,_AR_5E_,_END_,

	_R_,_a_,_n_,_g_,_END_,// _UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_PAIX_B8,_UA_I_SMALL_F5,_EY_PX_C2,_END_,//_UKRAINE_SUPPORT

};

#else
BYTE code tsOSD_CT_TITLE[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _C_,__o_,__l_,__o_,__r_,_,_T_,__e_,__m_,__p_,_DOT_,_END_,
#else
	_C_,__o_,__l_,__o_,__r_,_,_S_,__e_,__t_,__u_,__p_,_END_,
#endif
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_C_,__o_,__u_,__l_,_DOT_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_C_,__o_,__l_,__o_,_r_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_C_,__o_,__r_,_END_,
	_F_,_a_,_r_,_b_,_e_,_i_,_n_,_s_,__t_,__e_,__l_,__l_,_DOT_,_END_,
	//_C_,_o_,_n_,_f_,_DOT_,_c_,__o_,__l_,__o_,_r_,_e_,_END_,
	_C_,_o_,_l_,_o_,_r_,_e_,_END_,
	_K_,_l_,_e_,_u_,_r_,_i_,_n_,_s_,__t_,_DOT_,_END_,
	_F_,_a3_,_r_,_g_,_i_,_n_,_s_,__t_,_DOT_,_END_,
	_V_,_a3_,_r_,_i_,_a_,_s_,_DOT_,_END_,
	_U_,_s_,_t_,_DOT_,_,_K_,_o_,_l_,__o_,__r_,_o2_,_w_,_END_,
	_N_,_a_,_s_,_t_,_DOT_,_B_,_a_,_r_,__v_,__y_,_END_,

	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_DOT_,_,_EY_UWX_CE,_EY_BX_A4,_DOT_,_END_,	//	俄语   颜色设定
	_HY_4D_,_HY_4E_,_,_HY_4B_,_HY_4C_,_END_,
	_FT_se_4E,_FT_cai_46,_FT_she_4B,_FT_ding_4F_,_END_,  //色彩設定
	_CH_YAN_50,_CH_SE_51,_CH_SHE_4E,_CH_DING_52,_END_,		//?òì?		??é?éè?¨
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_4f,_JA_50,_JA_51,_END_,
#else
	_JA_83,_JA_5e,_JA_61,_JA_4d,_JA_4e,_END_,
				
#endif

	_P_,_50,_51,_52,_4b,_53,_4e,_,_56,_57,_58,_52,_4f,_49,_o_,_55,_END_,
	_S_,_z_,_i2_,_n_,_b_,_e_,_a2_,_l_,_l_,_i2_,_t_,_a2_,_s_,_END_,
	_R_,_e_,_n_,_k_,_,_A_,_y_,_a_,_r_,_l_,_a_,_m_,_a_,_END_,
	
	_N_,_h_,_i_,_x48_,_t_,_,_x58_,_x4a_,_,_m_,_x4f_,_u_,_DOT_,_END_,
	_x56_,_x48_,_x58_,_,_x5c_,_x5a_,_x4c_,_x4f_,_x5a_,_x57_,_x53_,_x4f_,_DOT_,_END_,
	_AR_5B_,_AR_5C_,_AR_5D_,_AR_5E_,_END_,

	_R_,_a_,_n_,_g_,_,_s_,_o_,_z_,_l_,_a_,_m_,_a_,_l_,_a_,_r_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_PAIX_B8,_UA_I_SMALL_F5,_EY_PX_C2,_END_,//_UKRAINE_SUPPORT


};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_CT[] =
{
    _C_,_o_,_l_,_o_,_r_,_,_T_,_e_,_m_,_p_,_DOT_,_END_,
	_T_,_e_,_m_,_p_,_DOT_,_,_d_,_e_,_,_C_,_o_,_u_,_l_,_e_,_u_,_r_,_END_,
	_T_,_e_,_m_,_p_,_DOT_,_C_,_o_,_l_,_o_,_r_,_END_,
	_T_,_e_,_m_,_p_,_DOT_,_,_d_,_a_,_,_C_,_o_,_r_,_END_,
	_F_,_a_,_r_,_b_,_t_,_e_,_m_,_p_,_e_,_r_,_a_,_t_,_u_,_r_,_END_,
	_T_,_e_,_m_,_p_,_DOT_,_,_C_,_o_,_l_,_o_,_r_,_e_,_END_,
	_K_,_l_,_e_,_u_,_r_,_t_,_e_,_m_,_p_,_DOT_,_END_,
	_F_,_a3_,_r_,_g_,_END_,
	_V_,_a3_,_r_,_i_,__l_,_a3_,_m_,_p_,_o3_,_t_,_DOT_,_END_,
	_T_,_e_,_m_,_p_,_e_,_r_,_DOT_,_B_,_a_,_r_,_w_,_o_,_w_,_a_,_END_,
	_T_,_e_,_p_,_DOT_,_B_,_a_,_r_,_e_,_v_,_END_,
	
	_EY_UW_CD,_EY_BX_A4,_DOT_,_,_EY_P_C1,_EY_EX_AA,_EY_ZZX_AE,_EY_NX_B2,_EY_MX_BA,_END_,	//俄语   色温	
	_HY_4D_,_,_HY_4F_,_HY_47_,_END_,
	_FT_se_4E,_FT_wen_6B,_END_, 	//色溫
	_CH_SE_51,_CH_WEN_6E,_END_,		//?òì? 	é???
	_JA_4f,_JA_96,_JA_4a,_END_,


	_64,_4a,_57,_52,_o_,_54,_57,_4f,_53,_5d,_4f,_ ,_56,_57,_58,_52,_4f,_49,_o_,_55,_END_,
	_S_,_z_,_i2_,_n_,_h_,_o4_,_m_,_e2_,_r_,_s_,_e2_,_k_,_l_,_e_,_t_,_END_,
	_R_,_e_,_n_,_k_,_ ,_S_,_I10_,_c_,_k_,_END_,
	
	_N_,_h_,_i_,_x48_,_t_,_,_x58_,_x4a_,_,_m_,_x4f_,_u_,_END_,
	_x56_,_x48_,_x58_,_,_x5c_,_x5a_,_x4c_,_x4f_,_x5a_,_x57_,_x53_,_x4f_,_END_,
	_AR_5B_,_AR_5C_,_AR_5D_,_AR_5E_,_END_,

	_R_,_a_,_n_,_g_,_,_h_,_a_,_r_,_o_,_r_,_a_,_t_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_PAIX_B8,_UA_I_SMALL_F5,_EY_PX_C2,_END_,//_UKRAINE_SUPPORT

};

#else
BYTE code tsOSD_CT[] =
{
#if 0//(Project_ID == ID_MC_HK2795E05_1DP2HDMI_M250HAN01_A_4LAN_HBR2_FHD240HZ_20220516)||(Project_ID == ID_MC_HK2795E05_1DP2HDMI_M250HAN01_3_8LAN_HBR2_FHD240HZ_20220517)
    _C_,_o_,_l_,_o_,_r_,_,_T_,_e_,_m_,_p_,_DOT_,_END_,
#else
    _C_,_o_,_l_,_o_,_r_,_,_T_,_e_,_m_,_p_,_END_,
#endif
	_C_,_o_,_u_,_l_,_e_,_u_,_r_,_END_,
	_T_,_e_,_m_,_p_,_DOT_,_C_,_o_,_l_,_o_,_r_,_END_,
	_A_,_j_,_u_,_s_,_t_,_e_,_ ,_d_,_e_,_, _C_,_o_,_r_,_END_,
	_F_,_a_,_r_,_b_,_t_,_e_,_m_,_p_,_DOT_,_END_,
	_C_,_o_,_l_,_o_,_r_,_e_,_END_,
	_K_,_l_,_e_,_u_,_r_,_t_,_e_,_m_,_p_,_DOT_,_END_,
	_F_,_a3_,_r_,_g_,_END_,
	_V_,_a3_,_r_,_i_,__l_,_a3_,_m_,_p_,_o3_,_t_,_DOT_,_END_,
	_T_,_e_,_m_,_p_,_e_,_r_,_DOT_,_B_,_a_,_r_,_w_,_o_,_w_,_a_,_END_,
	_T_,_e_,_p_,_DOT_,_B_,_a_,_r_,_e_,_v_,_END_,
	
	_EY_UW_CD,_EY_BX_A4,_DOT_,_,_EY_P_C1,_EY_EX_AA,_EY_ZZX_AE,_EY_NX_B2,_EY_MX_BA,_END_,	//俄语   色温	
	_HY_4D_,_,_HY_4F_,_HY_47_,_END_,
	_FT_se_4E,_FT_wen_6B,_END_, 	//色溫
	_CH_SE_51,_CH_WEN_6E,_END_,		//?òì? 	é???
	_JA_4f,_JA_96,_JA_4a,_END_,


	_64,_4a,_57,_52,_o_,_54,_57,_4f,_53,_5d,_4f,_ ,_56,_57,_58,_52,_4f,_49,_o_,_55,_END_,
	_S_,_z_,_i2_,_n_,_h_,_o4_,_m_,_e2_,_r_,_s_,_e2_,_k_,_l_,_e_,_t_,_END_,
	_R_,_e_,_n_,_k_,_ ,_S_,_I10_,_c_,_k_,_END_,
	
	_N_,_h_,_i_,_x48_,_t_,_,_x58_,_x4a_,_,_m_,_x4f_,_u_,_END_,
	_x56_,_x48_,_x58_,_,_x5c_,_x5a_,_x4c_,_x4f_,_x5a_,_x57_,_x53_,_x4f_,_END_,
	_AR_5B_,_AR_5C_,_AR_5D_,_AR_5E_,_END_,
	
	_R_,_a_,_n_,_g_,_,_h_,_a_,_r_,_o_,_r_,_a_,_t_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_PAIX_B8,_UA_I_SMALL_F5,_EY_PX_C2,_END_,//_UKRAINE_SUPPORT

};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_OSDSETTING[] =
{
    _O_,_S_,_D_,_END_,
    _O_,_S_,_D_,_END_,
    _O_,_S_,_D_,_END_,
    _O_,_S_,_D_,_END_,
    _O_,_S_,_D_,_END_,
    _O_,_S_,_D_,_END_,
    _O_,_S_,_D_,_END_,
	_B_,_i_,_l_,_d_,_s_,__k_,_a3_,__r_,__m_,__s_,__i_,__n_,__s_,__t_,_DOT_,_END_,
	_O_,_S_,_D_,_BLANK_1,_A_,__s_,__e_,__t_,_DOT_,_END_,
	_U_,_s_,_t_,_a_,_w_,_i_,_e_,_n_,_i_,_a_,_,_O_,_S_,_D_,_END_,
	_N_,_a_,_s_,_t_,_a_,_v_,_DOT_,_O_,_S_,_D_,_END_,

	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_DOT_,_,_EY_MX_BA,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,	//俄语	OSD	
	 _O_,_S_,_D_,_,_HY_4B_,_HY_4C_,_END_,
	 _O_,_S_,_D_,_FT_she_4B,_FT_ding_4F_,_END_,  // OSD 設定
	 _O_,_S_,_D_,_CH_SHE_4E,_CH_ZHI_4F,_END_,		//?òì?  OSDéè??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_S_,_D_,_,_,_JA_50,_JA_51,_END_,
#else
	_O_,_S_,_D_,_JA_50,_JA_51,_END_,
				
#endif


	_P_,_50,_51,_52,_4b,_53,_4e,_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,_,_b_,_e_,_a2_,_l_,_l_,_i2_,_t_,_a2_,_s_,_END_,
	_O_,_S_,_D_,_,_A_,_y_,_a_,_r_,_l_,_a_,_m_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,_,_x5c_,_x5a_,_x4a_,_x49_,_x4b_,_END_,
	_AR_80_,_AR_81_,_AR_82_,_AR_83_,_AR_84_,_AR_85_,_AR_86_,_AR_87_,_AR_88_,_AR_89_,_AR_8A_,_AR_8B_,_AR_8C_,_AR_4D_,_END_,
	_O_,_S_,_D_,_,_s_,_o_,_z_,_l_,_a_,_m_,_a_,_l_,_a_,_r_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_H_BB,_EY_AX_A0,_EY_PAIX_B8,_EY_AX_A0,_EY_CZX_D2,_EY_TX_C6,_DOT_,_,_M_,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,//_UKRAINE_SUPPORT

};

#else
BYTE code tsOSD_OSDSETTING[] =
{
    _O_,_S_,_D_,_,_S_,__e_,__t_,__u_,__p_,_END_,
	_R_,_e2_,_g_,_DOT_,_O_,_S_,_D_,_END_,
    _C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_O_,_S_,_D_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_M_,_e_,_m_,_u_,_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,_BLANK_1,_E_,__i_,__n_,__s_,__t_,__e_,__l_,__l_,_DOT_,_END_,
	_I_,_m_,_p_,_DOT_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,_BLANK_1,_I_,__n_,__s_,__t_,__e_,__l_,__l_,__i_,__n_,__g_,_END_,
	_B_,_i_,_l_,_d_,_s_,__k_,_a3_,__r_,__m_,__s_,__i_,__n_,__s_,__t_,_DOT_,_END_,
	_O_,_S_,_D_,_BLANK_1,_A_,__s_,__e_,__t_,_DOT_,_END_,
	_U_,_s_,_t_,_a_,_w_,_i_,_e_,_n_,_i_,_a_,_,_O_,_S_,_D_,_END_,
	_N_,_a_,_s_,_t_,_a_,_v_,_DOT_,_O_,_S_,_D_,_END_,

	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_DOT_,_,_EY_MX_BA,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,	//俄语	OSD	
	 _O_,_S_,_D_,_,_HY_4B_,_HY_4C_,_END_,
	 _O_,_S_,_D_,_FT_she_4B,_FT_ding_4F_,_END_,  // OSD 設定
	 _O_,_S_,_D_,_CH_SHE_4E,_CH_ZHI_4F,_END_,		//?òì?  OSDéè??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_S_,_D_,_,_,_JA_50,_JA_51,_END_,
#else
	_O_,_S_,_D_,_JA_50,_JA_51,_END_,
				
#endif


	_P_,_50,_51,_52,_4b,_53,_4e,_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,_,_b_,_e_,_a2_,_l_,_l_,_i2_,_t_,_a2_,_s_,_END_,
	_O_,_S_,_D_,_,_A_,_y_,_a_,_r_,_l_,_a_,_m_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,_,_x5c_,_x5a_,_x4a_,_x49_,_x4b_,_END_,
	_AR_80_,_AR_81_,_AR_82_,_AR_83_,_AR_84_,_AR_85_,_AR_86_,_AR_87_,_AR_88_,_AR_89_,_AR_8A_,_AR_8B_,_AR_8C_,_AR_4D_,_END_,

	_O_,_S_,_D_,_,_s_,_o_,_z_,_l_,_a_,_m_,_a_,_l_,_a_,_r_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_H_BB,_EY_AX_A0,_EY_PAIX_B8,_EY_AX_A0,_EY_CZX_D2,_EY_TX_C6,_DOT_,_,_M_,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,//_UKRAINE_SUPPORT

};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_RESET[] =
{
    _R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e2_,_i_,_n_,_i_,_t_,_i_,_a_,_l_,_i_,_s_,_e_,_r_,_END_,
	_R_,_e_,_s_,_t_,_a_,_b_,_l_,_e_,_c_,_e_,_r_,_END_,
	_R_,_e_,_s_,_t_,_a_,_u_,_r_,_a_,_r_,_END_,
	_Z_,_u_,_r_,_u3_,_c_,_k_,_s_,_e_,_t_,_z_,_e_,_n_,_END_,
	
	//_R_,_i_,_p_,_r_,_i_,_s_,_t_,_i_,_n_,_o_,_END_,
   	_R_,_i_,_p_,_r_,_i_,_s_,_t_,_i_,_n_,_o_,_END_,
	_R_,_e_,_s_,_e_,_t_,_t_,_e_,_n_,_END_,
	_A10_,_t_,_e_,_r_,_s_,_t_,_DOT_,_END_,
	_N_,_o_,_l_,_l_,_a_,_u_,_s_,_END_,
	_R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e_,_s_,_e_,_t_,_o_,_v_,_a_,_t_,_END_,

	_EY_C_C3,_EY_6_A1,_EY_PX_C2,_EY_OX_BE,_EY_CX_C4,_,_EY_HX_BC,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_EY_OX_BE,_EY_EX_AA,_EY_KX_B6,_END_,	//俄语	重置
	_HY_50_,_HY_51_,_HY_52_,_END_,
	FT_chong_50,_FT_she_4B,_END_,                //重設
	_CH_ZHONG_53,_CH_ZHI_4F,_END_,		//?òì?   ????
	_JA_52,_JA_53,_JA_54,_JA_55,_END_,

	
	_E_,_59,_4f,_4c,_4f,_5a,_o_,_57,_5b,_END_,
	_A_,_l_,_a_,_p_,_h_,_e_,_l_,_y_,_z_,_e_,_t_,_END_,
	_S_,_I10_,_f_,_I10_,_r_,_l_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_l_,_x51_,_i_,_,_,_END_,
	_x55_,_x4c_,_x57_,_x50_,_x47_,_END_,
	_AR_B2_,_AR_B3_,_AR_B4_,_AR_B5_,_AR_B6_,_AR_B7_,_AR_8B_,_AR_B9_,_END_,

	_Q_,_a_,_y_,_t_,_a_,_,_s_,_o_,_z_,_l_,_a_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_KX_B6,_EY_NX_B2,_EY_KOUX_A8,_EY_AX_A0,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT

};

#else
BYTE code tsOSD_RESET[] =
{
    _R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e2_,_i_,_n_,_i_,_t_,_DOT_,_END_,
	_R_,_e_,_i_,_n_,_i_,_DOT_,_END_,
	_R_,_e_,_s_,_t_,_a_,_u_,_r_,_a_,_r_,_END_,
	_Z_,_u_,_r_,_u3_,_c_,_k_,_s_,_e_,_t_,_z_,_e_,_n_,_END_,
	
	//_R_,_i_,_p_,_r_,_i_,_s_,_t_,_i_,_n_,_o_,_END_,
    _R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e_,_s_,_e_,_t_,_END_,
	_A10_,_t_,_e_,_r_,_s_,_t_,_DOT_,_END_,
	_N_,_o_,_l_,_l_,_a_,_u_,_s_,_END_,
	_R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e_,_s_,_e_,_t_,_o_,_v_,_a_,_t_,_END_,

	_EY_C_C3,_EY_6_A1,_EY_PX_C2,_EY_OX_BE,_EY_CX_C4,_,_EY_HX_BC,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_EY_OX_BE,_EY_EX_AA,_EY_KX_B6,_END_,	//俄语	重置
	_HY_50_,_HY_51_,_HY_52_,_END_,
	FT_chong_50,_FT_she_4B,_END_,                //重設
	_CH_ZHONG_53,_CH_ZHI_4F,_END_,		//?òì?   ????
	_JA_52,_JA_53,_JA_54,_JA_55,_END_,

	
	_E_,_59,_4f,_4c,_4f,_5a,_o_,_57,_5b,_END_,
	_A_,_l_,_a_,_p_,_h_,_e_,_l_,_y_,_z_,_e_,_t_,_END_,
	_S_,_I10_,_f_,_I10_,_r_,_l_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_l_,_x51_,_i_,_,_,_END_,
	_x55_,_x4c_,_x57_,_x50_,_x47_,_END_,
	_AR_B2_,_AR_B3_,_AR_B4_,_AR_B5_,_AR_B6_,_AR_B7_,_AR_8B_,_AR_B9_,_END_,

	_Q_,_a_,_y_,_t_,_a_,_,_s_,_o_,_z_,_l_,_a_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_KX_B6,_EY_NX_B2,_EY_KOUX_A8,_EY_AX_A0,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT
};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_MISC[] =
{
	_O_,_t_,_h_,_e_,_r_,_s_,_END_,
	_A_,_u_,_t_,_r_,_e_,_s_,_END_,
	_O_,_t_,_r_,_o_,_s_,_END_,
	_O_,_u_,_t_,_r_,_a_,_s_,_END_,
	_A_,_n_,_d_,_e_,_r_,_e_,_END_,
	_A_,_l_,_t_,_r_,_i_,_END_,
	_A_,_n_,_d_,_e_,_r_,_e_,_n_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_L_,__i_,__s_,_a3_,_END_,
	_E_,__k_,__s_,__t_,__r_,__a_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,

	_EY_KOU_A7,_EY_OX_BE,_EY_MENX_C0,_DOT_,_,_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_EY_OX_BE,_EY_NSX_B4,_EY_KX_B6,_EY_NX_B2,_END_,	//俄语	其他
	_HY_53_,_HY_54_,_HY_51_,_HY_55_,_END_,
		_FT_qi_51,_FT_ta_52,_END_,  
	_CH_QI_54,_CH_TA_55,_END_,		//?òì? ??????
	_JA_56,_JA_57,_JA_58,_END_,

	_5c,_57,_4d,_53,_51,_4a,_49,_4f,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_E_,__k_,__s_,__t_,__r_,__a_,_END_,
	
	_M_,_x52_,_,_R_,_x4a_,_n_,_g_,_END_,
	_x4b_,_x5a_,_x4f_,_x55_,_x59_,_x47_,_END_,
	_AR_D4_,_AR_D5_,_AR_D6_,_END_,
	_B_,_o_,_s_,_h_,_q_,_a_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_UA_I_SMALL_F5,_EY_3X_B0,_EY_HX_BC,_EY_EX_AA,_END_,//_UKRAINE_SUPPORT
};

#else
BYTE code tsOSD_MISC[] =
{
#if(_HONGXIA_OSD)
    _O_,__t_,__h_,__e_,__r_,__s_,_END_,
#else
	_E_,__x_,__t_,__r_,__a_,_END_,
#endif
    _E_,__x_,__t_,__r_,__a_,_END_,
    _E_,__x_,__t_,__r_,__a_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_L_,__i_,__s_,_a3_,_END_,
	_E_,__k_,__s_,__t_,__r_,__a_,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,

	_EY_KOU_A7,_EY_OX_BE,_EY_MENX_C0,_DOT_,_,_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_EY_OX_BE,_EY_NSX_B4,_EY_KX_B6,_EY_NX_B2,_END_,	//俄语	其他
	_HY_53_,_HY_54_,_HY_51_,_HY_55_,_END_,
		_FT_qi_51,_FT_ta_52,_END_,  
	_CH_QI_54,_CH_TA_55,_END_,		//?òì? ??????
	_JA_56,_JA_57,_JA_58,_END_,

	_5c,_57,_4d,_53,_51,_4a,_49,_4f,_END_,
	_E_,__x_,__t_,__r_,__a_,_END_,
	_E_,__k_,__s_,__t_,__r_,__a_,_END_,
	
	_M_,_x52_,_,_R_,_x4a_,_n_,_g_,_END_,
	_x4b_,_x5a_,_x4f_,_x55_,_x59_,_x47_,_END_,
	_AR_D4_,_AR_D5_,_AR_D6_,_END_,
	_Q_,_o_,_HARD_SIGN_F3,_s_,_h_,_i_,_m_,_c_,_h_,_a_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_UA_I_SMALL_F5,_EY_3X_B0,_EY_HX_BC,_EY_EX_AA,_END_,//_UKRAINE_SUPPORT

};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_BRIGHTNESS[] =
{
	_B_,__r_,__i_,__g_,__h_,__t_,__n_,__e_,__s_,__s_,_END_,	//_ENGLISH
    _L_,_u_,_m_,_i_,_n_,_o_,_s_,_i_,_t_,_e2_,_END_,
	_B_,__r_,__i_,__l_,__l_,__o_,_END_,
	_B_,__r_,__i_,__l_,_h_,__o_,_END_,
	_H_,__e_,__l_,__l_,__i_,_g_,__k_,__e_,__i_,__t_,_END_,
	_L_,_u_,_m_,_i_,_n_,_o_,_s_,_i_,_t_,_xe6_,_END_,
	_H_,__e_,__l_,__d_,__e_,_r_,__h_,__e_,__i_,__d_,_END_,
	_L_,_j_,_u_,_s_,_s_,_t_,_DOT_,_END_,
	_K_,_i_,_r_,_k_,_k_,_a_,_u_,_s_,_END_,
	_J_,_a_,_s_,_n_,_o_,_s2_,_c2_,_END_,
	_J_,_a_,_s_,_END_,
	
	_EY_FR_DF,_EY_PX_C2,_EY_KX_B6,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,	//俄语	亮度
	_HY_56_,_HY_51_,_END_,
	_FT_liang_47,_FT_du_48,_END_,
	_CH_LIANG_4A,_CH_DU_4B,_END_,		//?òì? 	áá?è
	_JA_59,_JA_5a,_JA_5b,_END_,

	_47,_48,_49,_4a,_4b,_4c,_4d,_49,_4e,_49,_4f,_END_,
	_F_,_e2_,_n_,_y_,_e_,_r_,_o4_,_END_,
	_P_,_a_,_r_,_l_,_a_,_k_,_l_,_I10_,_k_,_END_,
	
	_x49_,_x4a_,_,_s_,_x4b_,_n_,_g_,_END_,
	_x5c_,_x4c_,_x50_,_x4a_,_x4c_,_x49_,_x50_,_x54_,_END_,
	_AR_6_,_AR_7_,_AR_8_,_AR_9_,_AR_A_,_END_,

	_Y_,_o_,_r_,_q_,_i_,_n_,_l_,_i_,_k_,_END_,//_UZBEK_SUPPRT
	_B_,_r_,_i_,_g_,_h_,_t_,_n_,_e_,_s_,_s_,_END_,//_UKRAINE_SUPPORT
	
	
};

#else
BYTE code tsOSD_BRIGHTNESS[] =
{
	_B_,__r_,__i_,__g_,__h_,__t_,__n_,__e_,__s_,__s_,_END_,
    _L_,_u_,_m_,_i_,_n_,_o_,_s_,_DOT_,_END_,
	_B_,__r_,__i_,__l_,__l_,__o_,_END_,
	_B_,__r_,__i_,__l_,_h_,__o_,_END_,
	_H_,__e_,__l_,__l_,__i_,_g_,__k_,__e_,__i_,__t_,_END_,
	//_L_,_u_,_m_,_i_,_n_,_o_,_s_,_DOT_,_END_,
	_L_,_u_,_m_,_i_,_n_,_o_,_s_,_i_,_t_,_a4_E6,_END_,
	_H_,__e_,__l_,__d_,__e_,_r_,__h_,__e_,__i_,__d_,_END_,
	_L_,_j_,_u_,_s_,_s_,_t_,_DOT_,_END_,
	_K_,_i_,_r_,_k_,_k_,_a_,_u_,_s_,_END_,
	_J_,_a_,_s_,_n_,_o_,_s2_,_c2_,_END_,
	_J_,_a_,_s_,_END_,
	
	_EY_FR_DF,_EY_PX_C2,_EY_KX_B6,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,	//俄语	亮度
	_HY_56_,_HY_51_,_END_,
	_FT_liang_47,_FT_du_48,_END_,
	_CH_LIANG_4A,_CH_DU_4B,_END_,		//?òì? 	áá?è
	_JA_59,_JA_5a,_JA_5b,_END_,

	_47,_48,_49,_4a,_4b,_4c,_4d,_49,_4e,_49,_4f,_END_,
	_F_,_e2_,_n_,_y_,_e_,_r_,_o4_,_END_,
	_P_,_a_,_r_,_l_,_a_,_k_,_l_,_I10_,_k_,_END_,
	
	_x49_,_x4a_,_,_s_,_x4b_,_n_,_g_,_END_,
	_x5c_,_x4c_,_x50_,_x4a_,_x4c_,_x49_,_x50_,_x54_,_END_,
	_AR_6_,_AR_7_,_AR_8_,_AR_9_,_AR_A_,_END_,

	_Y_,_o_,_r_,_q_,_i_,_n_,_l_,_i_,_k_,_END_,//_UZBEK_SUPPRT
	_EY_FR_DF,_EY_CX_C4,_EY_KX_B6,_EY_PX_C2,_EY_AX_A0,_EY_BX_A4,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT
	
};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_CONTRAST[] =
{
    _C_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,
	_C_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_e_,_END_,
	_C_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_e_,_END_,
	_C_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_e_,_END_,
	_K_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,
		_C_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_o_,_END_,
	_C_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,
	_K_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,
	_K_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_i_,_END_,
	_K_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,
	_K_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,

	_EY_K_B5,_EY_OX_BE,_EY_HX_BC,_EY_TX_C6,_EY_PX_C2,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_END_,	//俄语	对比度
	_HY_57_,_HY_58_,_END_,
	_FT_dui_53,_FT_bi_54,_FT_du_48,_END_,
	_CH_DUI_56,_CH_BI_57,_CH_DU_4B,_END_,		//?òì?    ??±è?è
	_JA_5c,_JA_5d,_JA_55,_JA_5e,_JA_5f,_JA_55,_END_,

	_A_,_4c,_49,_5d,_51,_4a,_53,_4e,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,_z_,__t_,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,
	
	_S_,_x53_,_,_t_,_x54_,_x55_,_n_,_g_,_,_p_,_h_,_x4e_,_n_,_END_,
	_x5c_,_x4c_,_x5a_,_x50_,_x4b_,_x48_,_END_,
	_AR_B_,_AR_C_,_AR_D_,_AR_E_,_AR_F_,_AR_10_,_END_,

	_K_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_HX_BC,_EY_TX_C6,_EY_PX_C2,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_END_,//_UKRAINE_SUPPORT
	



};

#else
BYTE code tsOSD_CONTRAST[] =
{
    _C_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,
	_C_,__o_,__n_,__t_,__r_,__a_,__s_,_DOT_,_END_,
	_C_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,__e_,_END_,
	_C_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,__e_,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,
	_C_,__o_,__n_,__t_,__r_,_DOT_,_END_,
	_C_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,__i_,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,

	_EY_K_B5,_EY_OX_BE,_EY_HX_BC,_EY_TX_C6,_EY_PX_C2,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_END_,	//俄语	对比度
	_HY_57_,_HY_58_,_END_,
	_FT_dui_53,_FT_bi_54,_FT_du_48,_END_,
	_CH_DUI_56,_CH_BI_57,_CH_DU_4B,_END_,		//?òì?    ??±è?è
	_JA_5c,_JA_5d,_JA_55,_JA_5e,_JA_5f,_JA_55,_END_,

	_A_,_4c,_49,_5d,_51,_4a,_53,_4e,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,_z_,__t_,_END_,
	_K_,__o_,__n_,__t_,__r_,__a_,__s_,__t_,_END_,
	
	_S_,_x53_,_,_t_,_x54_,_x55_,_n_,_g_,_,_p_,_h_,_x4e_,_n_,_END_,
	_x5c_,_x4c_,_x5a_,_x50_,_x4b_,_x48_,_END_,
	_AR_B_,_AR_C_,_AR_D_,_AR_E_,_AR_F_,_AR_10_,_END_,
	
	_K_,_o_,_n_,_t_,_r_,_a_,_s_,_t_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_HX_BC,_EY_TX_C6,_EY_PX_C2,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_END_,//_UKRAINE_SUPPORT



};
#endif

#if(_ROTATE_FUN_SUPPORT)
BYTE code tsOSD_Rotation[]=
{
	_R_,_o_,_t_,_a_,_t_,_i_,_o_,_n_,_END_,
};
BYTE code tsOSD_OSDRotation[]=
{
	_O_,_S_,_D_,_,_R_,_o_,_t_,_a_,_t_,_i_,_o_,_n_,_END_,
};

#endif


BYTE code tsOSD_BLACKLEVEL[] =  //DAIDING
{
    _B_,_l_,_a_,_c_,_k_,_,_L_,_e_,_v_,_e_,_l_,_END_,
    _N_,_i_,_v_,_e_,_a_,_u_,_,_n_,_o_,_i_,_r_,_END_,
	_B_,_a_,_l_,_a_,_n_,_c_,_e_,_,_d_,_e_,_,_n_,_e_,_g_,_r_,_o_,_s_,_END_,
	_E_,_q_,_u_,_i_,_l_,_i2_,_b_,_r_,_i_,_o_,_,_n_,_e_,_g_,_r_,_o_,_END_,
	_S_,_c_,_h_,_w_,_a_,_r_,_z_,_a_,_b_,_g_,_l_,_e_,_i_,_c_,_h_,_END_,
	_B_,_i_,_l_,_a_,_n_,_c_,_i_,_a_,_m_,_e_,_n_,_t_,_o_,_,_d_,_e_,_l_,_,_n_,_e_,_r_,_o_,_END_,
    _Z_,_w_,_a_,_r_,_t_,_,_s_,_a_,_l_,_d_,_o_,_END_,
	_S_,_v_,_a_,_r_,_t_,_b_,_a_,_l_,_a_,_n_,_s_,_END_,
	_M_,_u_,_s_,_t_,_a_,_,_t_,_a_,_s_,_a_,_p_,_a_,_i_,_n_,_o_,_END_,
	_B_,_a_,_l_,_a_,_n_,_s_,_,_c_,_z_,_e_,_r_,_n_,_i_,_END_,
	_V_,_y_,_v_,_a2_,_z3_E1,_e_,_n_,_i2_,_,_c3_E2,_e_,_r_,_n_,_e2_,_END_,
	_EY_6_A1,_EY_AX_A0,_EY_PAIX_B8,_EY_AX_A0,_EY_HX_BC,_EY_CX_C4,_,_EY_LDX_D0,_EY_EX_AA,_EY_PX_C2,_EY_HX_BC,_EY_OX_BE,_EY_GZX_A6,_EY_OX_BE,_END_,

	_HY_75_,_HY_9F_,_,_HY_A0_,_HY_A1_,_END_,
	_FT_HEI_97,_FT_se_4E,_FT_ping_62,_FT_HENG_98,_END_,
	_CH_HEI_91,_CH_SE_51,_CH_PING_65,_CH_HENG_92,_END_,
	
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
    _B_,_L_,_A_,_C_,_K_,_,_,_L_,_E_,_V_,_E_,_L_,_END_,
#else
	_JA_95,_JA_5e,_JA_54,_JA_a9,_JA_90,_JA_5e,_JA_5d,_JA_5f,_END_,
				
#endif

    _M_,_4f,_50,_57,_4e,_,_4b,_53,_o_,_57,_57,_o_,_59,_5d,_4f,_END_,
	_F_,_e_,_k_,_e_,_t_,_e_,_,_e_,_g_,_y_,_e_,_n_,_s_,_u2_,_l_,_y_,_END_,
	_S_,_i_,_y_,_a_,_h_,_,_d_,_e_,_n_,_g_,_e_,_s_,_i_,_END_,
	
	_C_,_x56_,_n_,_,_b_,_x57_,_n_,_g_,_,_x58_,_e_,_n_,_END_,
	_x5a_,_x4c_,_x4e_,_x5b_,_,_x5c_,_x53_,_x5a_,_END_,
	_AR_11_,_AR_12_,_AR_13_,_AR_14_,_AR_15_,_,_AR_16_,_AR_17_,_AR_18_,_AR_19_,_END_,

	_Q_,_o_,_r_,_a_,_,_d_,_a_,_r_,_a_,_j_,_a_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_UA_I_SMALL_F5,_EY_BX_A4,_EY_EX_AA,_EY_HX_BC,_EY_XBX_DA,_,_EY_LDX_D0,_EY_OX_BE,_EY_PX_C2,_EY_HX_BC,_EY_OX_BE,_EY_GZX_A6,_EY_OX_BE,_END_,//_UKRAINE_SUPPORT
		
};

BYTE code tsOSD_ECO[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

	_E_,_C_,_O_,_END_,
#elif(Project_ID == ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903)||(Project_ID == ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215)||(_MC_LANGUAGE)
    _I_,_m_,_a_,_g_,_e_,_,_M_,_o_,_d_,_e_,_END_,
#else
	_E_,__c_,__o_,_,_M_,__o_,__d_,__e_,_END_,
#endif
	_E_,__c_,__o_,_END_,
	_E_,__c_,__o_,_END_,
	_E_,__c_,__o_,_END_,
	_O3_,_k_,_o_,_END_,
	_E_,__c_,__o_,_DOT_,_END_,
	_E_,_C_,_O_,_s_,_t_,_a_,_n_,_d_,_END_,
	_S_,_p_,_a_,_r_,_l_,_a3_,_g_,_e_,_END_,
	_S_,_a3_,_a3_,_s_,_t_,_o3_,_t_,_i_,_l_,_a_,_END_,
	_E_,_k_,_o_,_n_,_o_,_m_,_i_,_c_,_z_,_n_,_y_,_END_,
	_E_,__k_,__o_,_END_,

	_EY_OH_DB,_EY_KX_B6,_EY_OX_BE,_EY_HX_BC,_EY_OX_BE,_EY_MX_BA,_END_,	//俄语	亮度情景模式
	
    _HY_8A_,_HY_8B_,_HY_77_,_HY_78_,_END_,//	_E_,__c_,__o_,_END_,

	_FT_qing_55,_FT_jing_56,_FT_mo_57,_FT_shi_58,_END_,	
	_CH_QING_58,_CH_JING_59,_CH_MO_5A,_CH_SHI_5B,_END_,	//?òì?  		áá?è?é?°?￡ê?

#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
		_JA_c4,_JA_a9,_JA_c5,_JA_94,_JA_61,_JA_60,_JA_61,_JA_62,_END_,
#else
		_JA_60,_JA_61,_JA_62,_JA_50,_JA_51,_END_,
							
#endif

	  _5e,_4a,_4b,_49,__o_,_4c,_57,_60,_5d,_4f,_,_E_,__c_,__o_,_END_,
	_E_,__c_,__o_,_,_u3_,_z_,_e_,_m_,_m_,_o2_,_d_,_END_,
	_E_,__k_,__o_,_,_M_,__o_,__d_,_END_,
	
	_C_,_h_,_x47_,_,_x58_,_x4a_,_,_t_,_i_,_x47_,_t_,_,_k_,_i_,_x48_,_m_,_END_,
	_E_,_C_,_O_,_END_,
	0xEA,_E_,_C_,_O_,_END_,

	_E_,_k_,_o_,_l_,_o_,_g_,_i_,_k_,_,_r_,_e_,_j_,_i_,_m_,_END_,//_UZBEK_SUPPRT
	_EY_E_A9,_EY_KX_B6,_EY_OX_BE,_END_,//_UKRAINE_SUPPORT


};


BYTE code tsOSD_DCR[] =
{
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_FT_dong_84,_FT_TAI_99,_FT_dui_53,_FT_bi_54,_FT_du_48,_END_,
	_CH_DONG_86,_CH_TAI_93,_CH_DUI_56,_CH_BI_57,_CH_DU_4B,_END_,

	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	_D_,_C_,_R_,_END_,
	
	_x49_,_x4a_,_,_t_,_x54_,_x55_,_n_,_g_,_,_p_,_h_,_x4e_,_n_,_,_x58_,_x4a_,_n_,_g_,_END_,
	_D_,_C_,_R_,_END_,
	0xEA,_D_,_C_,_R_,_END_,
	
	_D_,_C_,_R_,_END_,//_UZBEK_SUPPRT
	_EY_KOU_A7,_EY_NX_B2,_EY_HX_BC,_,_DOT_,_,_EY_KX_B6,_EY_OX_BE,_EY_HX_BC,_EY_TX_C6,_EY_PX_C2,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_DOT_,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_SHARPNESS[] =  //DAIDING
{
	_S_,_h_,_a_,_r_,_p_,_n_,_e_,_s_,_s_,_END_,
	
	_C_,_l_,_a_,_r_,_t_,_e2_,_END_,
	
	_N_,_i_,_t_,_i_,_d_,_e_,_z_,_END_,
	_N_,_i_,_t_,_i_,_d_,_e_,_z_,_END_,
	_S_,_c_,_h_,_a3_,_r_,_f_,_e_,_END_,
	_N_,_i_,_t_,_i_,_d_,_e_,_z_,_z_,_a_,_END_,
	_S_,_c_,_h_,_e_,_r_,_p_,_t_,_e_,_END_,
	_S_,_k_,_a3_,_r_,_p_,_a_,_END_,
	_T_,_e_,_r_,_a3_,_v_,_y_,_y_,_s_,_END_,
	_O_,_s_,_t_,_r_,_o_,_s2_,_c2_,_END_,
	_O_,_s_,_t_,_r_,_o_,_s_,_t_,_END_,

#if(_OSD_DX_RUSSIAN_TEXT)
	_EY_P_C1,_EY_EX_AA,_EY_3X_B0,_EY_KX_B6,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,  
#else	
	_EY_LD_CF,_EY_EX_AA,_EY_TX_C6,_,_EY_KX_B6,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_BX_A4,_END_,  
#endif

		_HY_71_,_HY_57_,_HY_47_,_END_,//_HY_A2_,_HY_A3_,_HY_73_,_HY_A4_,_END_,

	_FT_QING_9A,_FT_XI_95,_FT_du_48,_END_,
	_CH_QING_94,_CH_XI_95,_CH_DU_4B,_END_,
		_JA_aa,_JA_ab,_JA_61,_JA_ac,_JA_ad,_JA_5f,_END_,

	_A_,_4b,_56,_52,_4e,_57,_4d,_49,_4e,_49,_4f,_END_,
	_E2_E3,_l_,_e_,_s_,_s_,_e2_,_g_,_END_,
	_K_,_e_,_s_,_k_,_i_,_n_,_l_,_i_,_k_,_END_,
	
	_x49_,_x4a_,_,_s_,_x50_,_c_,_,_n_,_x6e_,_t_,_END_,	
	_x5c_,_x4c_,_x4a_,_x4e_,_END_,
	_AR_1A_,_AR_1B_,_AR_1C_,_AR_1D_,_END_,
	
	_O_,_HARD_SIGN_F3,_t_,_k_,_i_,_r_,_l_,_i_,_k_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_UA_I_SMALL_F5,_EY_3X_B0,_EY_KX_B6,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT
};

#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
BYTE code tsOSD_HDR_MODE[] = 
{
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,

	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,

	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,

	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,

	0xEA,_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,
	
	_H_,_D_,_R_,_,_,_M_,_O_,_D_,_E_,_END_,//_UZBEK_SUPPRT
	_H_,_D_,_R_,_END_,//_UKRAINE_SUPPORT


};
#elif 1
BYTE code tsOSD_HDR_MODE[] = 
{
	_H_,_D_,_R_,_END_,
};

#else
BYTE code tsOSD_HDR_MODE[] = 
{
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,

	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,

	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,

	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
	_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,

	0xEA,_H_,_D_,_R_,_,_M_,_O_,_D_,_E_,_END_,
};

#endif




BYTE code tsOSD_H_POSITION[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _H_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
#else
    _H_,_DOT_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
#endif
	_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_H_,_END_,
	_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_H_,_END_,
	_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_H_,_END_,
	_H_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
	_P_,__o_,__s_,__i_,__z_,__i_,__o_,__n_,__e_,_BLANK_1,_O_,_DOT_,_END_,
	_H_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__e_,_END_,
	_P_,__o_,__s_,__i_,__t_,__i_,__e_,_BLANK_1,_H_,_END_,
	_V_,_,_S_,__i_,__j_,__a_,__i_,__n_,_t_,_i_,_END_,
	_P_,__o_,__z_,__y_,__c_,__j_,__a_,_ ,_P_,_o_,_z_,_i_,_o_,_m_,_a_,_END_,
	_H_,_DOT_,_P_,__o_,__l_,__o_,__h_,__a_,_END_,

	_EY_MEN_BF,_EY_OX_BE,_EY_PAIX_B8,_EY_OX_BE,_EY_ZZX_AE,_DOT_,_,_EY_MEN_BF,_EY_OX_BE,_,_EY_GZ_A5,_EY_OX_BE,_EY_PX_C2,_DOT_,_END_,	//俄语		水平位置
	_HY_59_,_HY_5A_,_,_HY_5B_,_HY_5C_,_END_,
		_FT_shui_61,_FT_ping_62,_FT_wei_63,_FT_zhi_4C,_END_,
	_CH_SHUI_64,_CH_PING_65,_CH_WEI_66,_CH_ZHI_4F,_END_,		//?òì? 		????????
	_JA_63,_JA_64,_JA_65,_JA_66,_END_,

	_O_,_57,_4b,_63,_DOT_, _,_51,_62,_53,_4e,_END_,
	_H_,_DOT_,_,_p_,__o_,__z_,_i2_,__c_,__i_,_o2_,_END_,
	_Y_,_a_,_t_,__a_,__y_, _,_K_,_o_,_n_,_u_,_m_,_END_,
	
	_V_,_x61_,_,_t_,_r_,_x62_,_,_n_,_x57_,_m_,_,_n_,_g_,_a_,_n_,_g_,_END_,
	_x50_,_x59_,_x57_,_x4c_,_x47_,_,_x53_,_x4c_,_x59_,_x50_,_x53_,_END_,

	_AR_92_,_AR_93_,_AR_94_,_AR_95_,_,_AR_96_,_AR_97_,_AR_98_,_AR_99_,_END_,
	
	_H_,_DOT_,_,_P_,_o_,_z_,_i_,_t_,_s_,_i_,_y_,_a_,_s_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_GZ_A5,_BLANK_1,_EY_MENX_C0,_EY_OX_BE,_EY_3X_B0,_EY_NX_B2,_EY_UWX_CE,_UA_I_SMALL_F5,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT


};

BYTE code tsOSD_V_POSITION[] =
{

#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _V_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
#else
    _V_,_DOT_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
#endif
_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_V_,_END_,
_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_V_,_END_,
_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_V_,_END_,
_V_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
_P_,__o_,__s_,__i_,__z_,__i_,__o_,__n_,__e_,_BLANK_1,_V_,_DOT_,_END_,
_V_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__e_,_END_,
_P_,__o_,__s_,__i_,__t_,__i_,__e_,_BLANK_1,_V_,_END_,
_P_,_,_S_,__i_,__j_,__a_,__i_,__n_,_t_,_i_,_END_,
_P_,__o_,__z_,__y_,__c_,__j_,__a_,_ ,_P_,_i_,_o_,_n_,_o_,_w_,_a_,_END_,
_V_,_DOT_,_P_,__o_,__l_,__o_,__h_,__a_,_END_,

_EY_MEN_BF,_EY_OX_BE,_EY_PAIX_B8,_EY_OX_BE,_EY_ZZX_AE,_DOT_,_,_EY_MEN_BF,_EY_OX_BE,_,_EY_B_A3,_EY_EX_AA,_EY_PX_C2,_DOT_,_END_,	//俄语		垂直位置
_HY_59_,_HY_5D_,_,_HY_5B_,_HY_5C_,_END_,   
_FT_chui_64,_FT_zhi_65,_FT_wei_63,_FT_zhi_4C,_END_,
	_CH_CHUI_67,_CH_ZHI_68,_CH_WEI_66,_CH_ZHI_4F,_END_,		//?òì?	′1?±????
_JA_67,_JA_68,_JA_65,_JA_66,_END_,


_K_,_4f,_49,_4f,_54,_DOT_, _,_51,_62,_53,_4e,_END_,
_V_,_DOT_,_,_p_,__o_,__z_,_i2_,__c_,__i_,_o2_,_END_,
_D_,_i_,_k_,__e_,__y_, _,_K_,_o_,_n_,_u_,_m_,_END_,

_V_,_x61_,_,_t_,_r_,_x62_,_,_t_,_h_,_x57_,_n_,_g_,_,_x58_,_x63_,_n_,_g_,_END_,
_x50_,_x51_,_x54_,_x47_,_,_x53_,_x4c_,_x59_,_x50_,_x53_,_END_,
_AR_9A_,_AR_9B_,_AR_9C_,_AR_9D_,_AR_9E_,_,_AR_96_,_AR_97_,_AR_98_,_AR_99_,_END_,

_V_,_DOT_,_,_P_,_o_,_z_,_i_,_t_,_s_,_i_,_y_,_a_,_s_,_i_,_END_,//_UZBEK_SUPPRT
_EY_B_A3,_BLANK_1,_EY_MENX_C0,_EY_OX_BE,_EY_3X_B0,_EY_NX_B2,_EY_UWX_CE,_UA_I_SMALL_F5,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT


};
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
BYTE code tsOSD_OSD_H_POSITION[] =
{
    _O_,_S_,_D_,_,_,_H_,_DOT_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
	_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_H_,_END_,
	_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_H_,_END_,
	_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_H_,_END_,
	_O_,_S_,_D_,_,_,_H_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
	_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__z_,__i_,__o_,__n_,__e_,_BLANK_1,_O_,_DOT_,_END_,
	_O_,_S_,_D_,_,_,_H_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__e_,_END_,
	_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__e_,_BLANK_1,_H_,_END_,
	_O_,_S_,_D_,_,_,_V_,_,_S_,__i_,__j_,__a_,__i_,__n_,_t_,_i_,_END_,
	_O_,_S_,_D_,_,_,_P_,__o_,__z_,__y_,__c_,__j_,__a_,_ ,_P_,_o_,_z_,_i_,_o_,_m_,_a_,_END_,
	_O_,_S_,_D_,_,_,_H_,_DOT_,_P_,__o_,__l_,__o_,__h_,__a_,_END_,

	_EY_MEN_BF,_EY_OX_BE,_EY_PAIX_B8,_EY_OX_BE,_EY_ZZX_AE,_DOT_,_,_EY_MEN_BF,_EY_OX_BE,_,_EY_GZ_A5,_EY_OX_BE,_EY_PX_C2,_DOT_,_END_,	//俄语		水平位置
	_O_,_S_,_D_,_,_,_HY_59_,_HY_5A_,_,_HY_5B_,_HY_5C_,_END_,
	_O_,_S_,_D_,_,_,_FT_shui_61,_FT_ping_62,_FT_wei_63,_FT_zhi_4C,_END_,
	_O_,_S_,_D_,_,_,_CH_SHUI_64,_CH_PING_65,_CH_WEI_66,_CH_ZHI_4F,_END_,		//?òì? 		????????
	_O_,_S_,_D_,_,_,_JA_63,_JA_64,_JA_65,_JA_66,_END_,

	_O_,_57,_4b,_63,_DOT_, _,_51,_62,_53,_4e,_END_,
	_O_,_S_,_D_,_,_,_H_,_DOT_,_,_p_,__o_,__z_,_i2_,__c_,__i_,_o2_,_END_,
	_O_,_S_,_D_,_,_,_Y_,_a_,_t_,__a_,__y_, _,_K_,_o_,_n_,_u_,_m_,_END_,
	
	_O_,_S_,_D_,_,_,_V_,_x61_,_,_t_,_r_,_x62_,_,_n_,_x57_,_m_,_,_n_,_g_,_a_,_n_,_g_,_END_,
	_O_,_S_,_D_,_,_,_x50_,_x59_,_x57_,_x4c_,_x47_,_,_x53_,_x4c_,_x59_,_x50_,_x53_,_END_,
	_AR_92_,_AR_93_,_AR_94_,_AR_95_,_,_AR_96_,_AR_97_,_AR_98_,_AR_99_,_END_,

	_O_,_S_,_D_,_,_,_H_,_DOT_,_,_P_,_o_,_z_,_i_,_t_,_s_,_i_,_y_,_a_,_s_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_GZ_A5,_BLANK_1,_EY_MENX_C0,_EY_OX_BE,_EY_3X_B0,_EY_NX_B2,_EY_UWX_CE,_UA_I_SMALL_F5,_EY_FRX_E0,_,_EY_MX_BA,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,//_UKRAINE_SUPPORT
};

BYTE code tsOSD_OSD_V_POSITION[] =
{

_O_,_S_,_D_,_,_,_V_,_DOT_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_V_,_END_,
_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_V_,_END_,
_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_BLANK_1,_V_,_END_,
_O_,_S_,_D_,_,_,_V_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__o_,__n_,_END_,
_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__z_,__i_,__o_,__n_,__e_,_BLANK_1,_V_,_DOT_,_END_,
_O_,_S_,_D_,_,_,_V_,_BLANK_1,_P_,__o_,__s_,__i_,__t_,__i_,__e_,_END_,
_O_,_S_,_D_,_,_,_P_,__o_,__s_,__i_,__t_,__i_,__e_,_BLANK_1,_V_,_END_,
_O_,_S_,_D_,_,_,_P_,_,_S_,__i_,__j_,__a_,__i_,__n_,_t_,_i_,_END_,
_O_,_S_,_D_,_,_,_P_,__o_,__z_,__y_,__c_,__j_,__a_,_ ,_P_,_i_,_o_,_n_,_o_,_w_,_a_,_END_,
_O_,_S_,_D_,_,_,_V_,_DOT_,_P_,__o_,__l_,__o_,__h_,__a_,_END_,

_EY_MEN_BF,_EY_OX_BE,_EY_PAIX_B8,_EY_OX_BE,_EY_ZZX_AE,_DOT_,_,_EY_MEN_BF,_EY_OX_BE,_,_EY_B_A3,_EY_EX_AA,_EY_PX_C2,_DOT_,_END_,	//俄语		垂直位置
_O_,_S_,_D_,_,_,_HY_59_,_HY_5D_,_,_HY_5B_,_HY_5C_,_END_,   
_O_,_S_,_D_,_,_,_FT_chui_64,_FT_zhi_65,_FT_wei_63,_FT_zhi_4C,_END_,
_O_,_S_,_D_,_,_,_CH_CHUI_67,_CH_ZHI_68,_CH_WEI_66,_CH_ZHI_4F,_END_,		//?òì?	′1?±????
_O_,_S_,_D_,_,_,_JA_67,_JA_68,_JA_65,_JA_66,_END_,


_O_,_S_,_D_,_,_,_K_,_4f,_49,_4f,_54,_DOT_, _,_51,_62,_53,_4e,_END_,
_O_,_S_,_D_,_,_,_V_,_DOT_,_,_p_,__o_,__z_,_i2_,__c_,__i_,_o2_,_END_,
_O_,_S_,_D_,_,_,_D_,_i_,_k_,__e_,__y_, _,_K_,_o_,_n_,_u_,_m_,_END_,

_O_,_S_,_D_,_,_,_V_,_x61_,_,_t_,_r_,_x62_,_,_t_,_h_,_x57_,_n_,_g_,_,_x58_,_x63_,_n_,_g_,_END_,
_O_,_S_,_D_,_,_,_x50_,_x51_,_x54_,_x47_,_,_x53_,_x4c_,_x59_,_x50_,_x53_,_END_,
_AR_9A_,_AR_9B_,_AR_9C_,_AR_9D_,_AR_9E_,_,_AR_96_,_AR_97_,_AR_98_,_AR_99_,_END_,

_O_,_S_,_D_,_,_,_V_,_DOT_,_,_P_,_o_,_z_,_i_,_t_,_s_,_i_,_y_,_a_,_s_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_B_A3,_BLANK_1,_EY_MENX_C0,_EY_OX_BE,_EY_3X_B0,_EY_NX_B2,_EY_UWX_CE,_UA_I_SMALL_F5,_EY_FRX_E0,_,_EY_MX_BA,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,//_UKRAINE_SUPPORT



};
#endif
BYTE code tsOSD_PIXEL_CLOCK[] =
{
    _C_,_l_,_o_,_c_,_k_,_END_,
	_H_,_o_,_r_,_l_,_o_,_g_,_e_,_END_,
	_R_,_e_,_l_,_o_,_j_,_END_,
	_C_,_l_,_o_,_c_,_k_,_END_,
	_T_,_a_,_k_,_t_,_END_,
	_O_,_r_,_o_,_l_,_o_,_g_,_i_,_o_,_END_,
	_K_,_l_,_o_,_k_,_END_,
	_K_,_l_,_o_,_c_,_k_,_a_,_END_,
	_K_,_e_,_l_,_l_,_o_,_END_,
	_Z_,_e_,_g_,_a_,_r_,_END_,
	_T_,_a_,_k_,_t_,_END_,

	_EY_LD_CF,_EY_AX_A0,_EY_CX_C4,_EY_BIX_D8,_END_,		//俄语	时钟
	_HY_5E_,_HY_5F_,_END_,
	_FT_shi_66,_FT_zhong_67,_END_,
	_CH_SHI_69,_CH_ZHONG_6A,_END_,		//?òì?		ê±?ó
	_JA_63,_JA_64,_JA_69,_JA_6a,_JA_6b,_END_,

	_P_,_o_,_pai_,_4d,_4b,_END_,
	_O2_,_r_,_a_,_END_,
	_S_,_a_,_a_,_t_,_END_,
	
   _x49_,_x5d_,_n_,_g_,_,_h_,_x5d_,_END_, 
   _x54_,_x4c_,_x56_,_x5b_,_END_,
   0xEA,_AR_46_,_AR_47_,_AR_48_,_AR_49_,_AR_4A_,_END_,
   _S_,_o_,_a_,_t_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_CZ_D1,_EY_NX_B2,_EY_PX_C2,_EY_NX_B2,_EY_HX_BC,_EY_AX_A0,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_PHASE[] =
{
    _P_,_h_,_a_,_s_,_e_,_END_,
	_M_,_a_,_p_,_END_,
	_E_,_n_,_f_,_o_,_q_,_u_,_e_,_END_,
	_F_,_o_,_c_,_o_,_END_,
	_F_,_o_,_k_,_u_,_s_,_END_,
	_F_,_u_,_o_,_c_,_o_,_END_,
	_F_,_a_,_s_,_e_,_END_,
	_F_,_o_,_k_,_u_,_s_,_END_,
	_V_,_a_,_i_,_h_,_e_,_END_,
	_F_,_a_,_z_,_a_,_END_,
	_F_,_a2_,_z_,_e_,_END_,

	_EY_FAI_C9,_EY_OX_BE,_EY_KX_B6,_EY_YX_C8,_EY_CX_C4,_DOT_,_END_,	//俄语	相位
	_HY_5B_,_HY_4E_,_END_,
	_FT_xiang_68,_FT_wei_63,_END_,
	_CH_XIANG_6B,_CH_WEI_66,_END_,		//?à??
	_JA_65,_JA_6c,_END_,

	_47,_5b,_53,_4e,_END_,
	_F_,_a2_,_z_,_i_,_s_,_END_,
	_F_,_a_,_z_,_END_,
	
	_G_,_i_,_a_,_i_,_,_x58_,_o_,_x51_,_n_,_END_,
	_x48_,_x52_,_x5b_,_END_,
	 0xEA,_AR_55_,_AR_56_,_AR_57_,_AR_58_,_AR_59_,_END_,
	 _B_,_o_,_s_,_q_,_i_,_c_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_FAI_C9,_EY_AX_A0,_EY_3X_B0,_EY_AX_A0,_END_,//_UKRAINE_SUPPORT

};

#if(_MC_EUROPE)
BYTE code tsOSD_ASPECT[] =
{
	_I_,_m_,_a_,_g_,_e_,_,_R_,_a_,_t_,_i_,_o_,_END_,	//_ENGLISH

	_R_,_a_,_p_,_p_,_o_,_r_,_t_,_,_D_,_i_,_m_,_a_,_g_,_e_,_END_,//_F_,_o_,_r_,_m_,_,_I_,_m_,_a_,_g_,_e_,_END_,
	_R_,_e_,_l_,_a_,_c_,_i_,_o2_,_n_,_,_d_,_e_,_,_I_,_m_,_a_,_g_,_e_,_n_,_END_,//_R_,_e_,_l_,_DOT_,_I_,__m_,__a_,__g_,__e_,__n_,_END_,
	_P_,_r_,_o_,_p_,_o_,_r_,_c7_,_a5_,_o_,_,_d_,_e_,_,_I_,_m_,_a_,_g_,_e_,_m_,_END_,//_P_,_r_,_o_,_p_,_DOT_,_I_,__m_,__a_,__g_,__e_,__m_,_END_,
	_B_,_i_,_l_,_d_,_v_,_e_,_r_,_h_,_a3_,_l_,_t_,_n_,_i_,_s_,_END_,//_S_,_e_,_i_,_t_,_e_,_n_,_v_,_e_,_r_,_h_,_a3_,_l_,_t_,_END_,
	_R_,_a_,_p_,_p_,_o_,_r_,_t_,_o_,_,_I_,_m_,_m_,_a_,_g_,_i_,_n_,_e_,_END_,//_R_,_a_,_p_,_p_,_o_,_r_,_t_,_o_,_,_P_,_r_,_o_,_p_,_o_,_r_,_z_,_i_,_o_,_n_,_i_,_END_,
	_B_,_e_,_e_,_l_,_d_,_v_,_e_,_r_,__h_,_o_,_u_,_d_,_i_,_n_,_g_,_END_, 
	_B_,_i_,_l_,_d_,_f_,_o3_,_r_,_h_,_a6_,__l_,__l_,_DOT_,_END_,
	_K_,_u_,_v_,_a_,_s_,_u_,_h_,_d_,__e_,_END_,
	_W_,_s_,_p_,_o2_,_l10_,_c_,_z_,_DOT_,_O_,__b_,__r_,__a_,__z_,__u_,_END_,
	_P_,_o_,_m_,_e1_,_r_, _,_S_,_t_,_r_,__a_,__n_, _,_O_,_b_,_r_,_DOT_,_END_,	
	
	_EY_FAI_C9,_EY_OX_BE,_EY_PX_C2,_EY_MX_BA,_EY_AX_A0,_EY_TX_C6,_,_EY_N_B1,_EY_3X_B0,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_EY_AX_A0,_EY_ZZX_AE,_DOT_,_END_,	//俄语	图像比例
	
	 _HY_52_,_HY_AD_,_HY_60_,_HY_61_,_END_,//_HY_48_,_HY_49_,_HY_4A_,_,_HY_60_,_HY_61_,_END_,

	_FT_tu_49,_FT_xiang_4A,_FT_bi_54,_FT_li_69,_END_,	
	_CH_TU_4C,_CH_XIANG_4D,_CH_BI_57,_CH_LI_6C,_END_,	//?òì?		í???±èày	
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_bf,_JA_5f,_JA_c0,_JA_a9,_JA_55,_JA_c1,_END_,
#else
	_JA_4b,_JA_4c,_JA_6d,_END_,
						
#endif


	
	_A_,_4c,_4f,_pai_,_o_,_60,_5d,_4f,_,_4a,_4b,_54,_4d,_4c,_4f,_55,_END_,
	_K_,_e2_,_p_,_a_,_r_,_a2_,_n_,_y_,_END_,
	_G_,_o3_,_r_,_u3_,_n_,_t_,_u3_,_,_O_,_r_,_a_,_n_,_I10_,_END_,
	
	_T_,_x5e_,_,_l_,_x48_,_,_h_,_x4d_,_n_,_h_,_,_x4e_,_n_,_h_,_END_,
	_x55_,_x4e_,_x50_,_END_,
	_AR_AD_,_AR_AE_,_AR_AF_,_AR_B0_,_AR_B1_,_END_,
	_R_,_a_,_s_,_m_,_,_n_,_i_,_s_,_b_,_a_,_t_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_FAI_C9,_EY_OX_BE,_EY_PX_C2,_EY_MX_BA,_EY_AX_A0,_EY_TX_C6,_END_,//_UKRAINE_SUPPORT


};

#else
BYTE code tsOSD_ASPECT[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)
    _A_,_s_,_p_,_e_,_c_,_t_,_END_,
#elif(Project_ID == ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903)||(Project_ID == ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215)||(_MC_LANGUAGE)
	_I_,_m_,_a_,_g_,_e_, _,_R_,_a_,_t_,_i_,_o_,_END_,
#else
    _I_,_m_,_a_,_g_,_e_,_R_,_a_,_t_,_i_,_o_,_END_,
#endif
	_F_,_o_,_r_,_m_,_,_I_,__m_,__a_,__g_,__e_,_END_,
	_R_,_e_,_l_,_DOT_,_I_,__m_,__a_,__g_,__e_,__n_,_END_,
	_P_,_r_,_o_,_p_,_DOT_,_I_,__m_,__a_,__g_,__e_,__m_,_END_,
	_S_,_e_,_i_,_t_,_e_,_n_,_v_,_e_,__r_,__h_,_a3_,__l_,_DOT_,_END_,
	_R_,_a_,_p_,_p_,_DOT_,_I_,__m_,__m_,__a_,__g_,_DOT_,_END_,
	_B_,_e_,_e_,_l_,_d_,_v_,_e_,_r_,__h_,_o_,_u_,_d_,_DOT_,_END_,	
	_B_,_i_,_l_,_d_,_f_,_o3_,_r_,_h_,_a6_,__l_,__l_,_DOT_,_END_,
	_K_,_u_,_v_,_a_,_s_,_u_,_h_,_d_,__e_,_END_,
	_W_,_s_,_p_,_o2_,_l10_,_c_,_z_,_DOT_,_O_,__b_,__r_,__a_,__z_,__u_,_END_,
	_P_,_o_,_m_,_e1_,_r_, _,_S_,_t_,_r_,__a_,__n_, _,_O_,_b_,_r_,_DOT_,_END_,	

	_EY_FAI_C9,_EY_OX_BE,_EY_PX_C2,_EY_MX_BA,_EY_AX_A0,_EY_TX_C6,_,_EY_N_B1,_EY_3X_B0,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_EY_AX_A0,_EY_ZZX_AE,_DOT_,_END_,	//俄语	图像比例
	
	 _HY_52_,_HY_AD_,_HY_60_,_HY_61_,_END_,//_HY_48_,_HY_49_,_HY_4A_,_,_HY_60_,_HY_61_,_END_,

	_FT_tu_49,_FT_xiang_4A,_FT_bi_54,_FT_li_69,_END_,	
	_CH_TU_4C,_CH_XIANG_4D,_CH_BI_57,_CH_LI_6C,_END_,	//?òì?		í???±èày	
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_bf,_JA_5f,_JA_c0,_JA_a9,_JA_55,_JA_c1,_END_,
#else
	_JA_4b,_JA_4c,_JA_6d,_END_,
						
#endif


	
	_A_,_4c,_4f,_pai_,_o_,_60,_5d,_4f,_,_4a,_4b,_54,_4d,_4c,_4f,_55,_END_,
	_K_,_e2_,_p_,_a_,_r_,_a2_,_n_,_y_,_END_,
	_G_,_o3_,_r_,_u3_,_n_,_t_,_u3_,_,_O_,_r_,_a_,_n_,_I10_,_END_,
	
	_T_,_x5e_,_,_l_,_x48_,_,_h_,_x4d_,_n_,_h_,_,_x4e_,_n_,_h_,_END_,
	_x55_,_x4e_,_x50_,_END_,
	_AR_AD_,_AR_AE_,_AR_AF_,_AR_B0_,_AR_B1_,_END_,
	_R_,_a_,_s_,_m_,_,_n_,_i_,_s_,_b_,_a_,_t_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_FAI_C9,_EY_OX_BE,_EY_PX_C2,_EY_MX_BA,_EY_AX_A0,_EY_TX_C6,_END_,//_UKRAINE_SUPPORT


};
#endif

#if(_DEF_DX_LED_MODE)

BYTE code tsOSD_SPECTRUM[] =
{
	_S_,_p_,_e_,_c_,_t_,_r_,_u_,_m_,_END_,
};


BYTE code tsOSD_GYAN[] =
{
	_G_,_y_,_a_,_n_,_END_,
};

BYTE code tsOSD_PURPLE[] =
{
	_P_,_u_,_r_,_p_,_l_,_e_,_END_,
};

BYTE code tsOSD_YELLOW[] =
{
	_Y_,_e_,_l_,_l_,_o_,_w_,_END_,
};

#elif(_DEF_DX_LED_MODE2)||(_DEF_DX_LED_MODE3)
BYTE code tsOSD_SPECTRUM[] =
{
	_S_,_p_,_e_,_c_,_t_,_r_,_u_,_m_,_END_,
};

BYTE code tsOSD_Marquee[] =
{
	_M_,_a_,_r_,_q_,_u_,_e_,_e_,_END_,
};


BYTE code tsOSD_Rotate[] =
{
	_R_,_o_,_t_,_a_,_t_,_e_,_END_,
};


#endif

BYTE code tsOSD_RED[] =
{
    _R_,_e_,_d_,_END_,
	_R_,_o_,_u_,_g_,_e_,_END_,
	_R_,_o_,_j_,_o_,_END_,
	_V_,_e_,_r_,_m_,_e_,_l_,_h_,_o_,_END_,
	_R_,_o_,_t_,_END_,
	_R_,_o_,_s_,_s_,_o_,_END_,
	_R_,_o_,_o_,_d_,_END_,
	_R_,_o3_,_d_,_END_,
	_P_,_u_,_n_,_a_,_i_,_n_,_e_,_n_,_END_,
	_C_,_z_,_e_,_r_,_w_,_o_,_n_,_y_,_END_,
	_C1_,_e_,_r_,_v_,_e_,_n_,_a2_,_END_,

	_EY_K_B5,_EY_PX_C2,_EY_AX_A0,_EY_CX_C4,_EY_HX_BC,_EY_BIX_D8,_EY_NSX_B4,_END_,	//俄语	红
	_HY_62_,_HY_4D_,_END_,
	_FT_hong_6F,_END_,
	_CH_HONG_72,_END_,		//oì
	_JA_8d,_END_,

	
	_K_,_4d,_54,_54,_4b,_4c,_o_,_END_,
	_P_,_i_,_r_,_o_,_s_,_END_,
	_K_,_I10_,_r_,_m_,_I10_,_z_,_I10_,_END_,
	
	_M_,_x4f_,_u_,_,_x58_,_x64_,_END_,
	_x53_,_x4c_,_x4a_,_x47_,_END_,
	_AR_68_,_AR_69_,_AR_6A_,_END_,
	_Q_,_i_,_z_,_i_,_l_,_END_,	//_UZBEK_SUPPRT
	_EY_LD_CF,_EY_EX_AA,_EY_PX_C2,_EY_BX_A4,_EY_OX_BE,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT

	
};


BYTE code tsOSD_GREEN[] =
{
    _G_,_r_,_e_,_e_,_n_,_END_,
    _V_,_e_,_r_,_t_,_END_,
	_V_,_e_,_r_,_d_,_e_,_END_,
	_V_,_e_,_r_,_d_,_e_,_END_,
	_G_,_r_,_u3_,_n_,_END_,
	_V_,_e_,_r_,_d_,_e_,_END_,	
	_G_,_r_,_o_,_e_,_n_,_END_,
	_G_,_r_,_o3_,_n_,_END_,
	_V_,_i_,_h_,_r_,_e_,_a3_,_END_,
	_Z_,_i_,_e_,_l_,_o_,_n_,_y_,_END_,
	_Z_,_e_,_l_,_e_,_n_,_a2_,_END_,

	_EY_3_AF,_EY_EX_AA,_EY_PAIX_B8,_EY_EX_AA,_EY_HX_BC,_EY_BIX_D8,_EY_NSX_B4,_END_,	//俄语		绿
	_HY_63_,_HY_4D_,_END_,
	_FT_lv_70,_END_,
	_CH_LV_73,_END_,	//?ì
	_JA_98,_END_,

	_5c,_57,_5b,_53,_4b,_4c,_o_,_END_,
	_Z_,_o3_,_l_,_d_,_END_,
	_Y_,_e_,_s7_,_i_,_l_,_END_,	
	
	_M_,_x4f_,_u_,_,_x_,_a_,_n_,_h_,_,_l_,_x4b_,_END_,
	_x59_,_x4c_,_x5a_,_x50_,_END_,
	_AR_6B_,_AR_6C_,_AR_6D_,_END_,
	_Y_,_a_,_s_,_h_,_i_,_l_,_END_,//_UZBEK_SUPPRT
	_EY_3_AF,_EY_EX_AA,_EY_PAIX_B8,_EY_EX_AA,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT
};

BYTE code tsOSD_BLUE[] =
{
    _B_,_l_,_u_,_e_,_END_,
	_B_,_l_,_e_,_u_,_END_,
	_A_,_z_,_u_,_l_,_END_,
	_A_,_z_,_u_,_l_,_END_,
	_B_,_l_,_a_,_u_,_END_,
	_B_,_l_,_u_,_END_,
	_B_,_l_,_a_,_u_,_w_,_END_,
	_B_,_l_,_a6_,_END_,
	_S_,_i_,_n_,_i_,_n_,_e_,_n_,_END_,
	_N_,_i_,_e_,_b_,_i_,_e_,_s_,_k_,_i_,_END_,
	_M_,_o_,_d_,_r_,_a2_,_END_,

	_EY_C_C3,_EY_NX_B2,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_END_,	//俄语		蓝
	_HY_64_,_HY_4D_,_END_,
	_FT_lan_71,_END_,
	_CH_LAN_74,_END_,	//?òì?		à?
	_JA_8e,_END_,

	
	_M_,_59,_pai_,_4a,_END_,
	_K_,_e2_,_k_,_END_,
	_M_,_a_,_v_,_i_,_END_,
	
	_M_,_x4f_,_u_,_,_x_,_a_,_n_,_h_,_,_d_,_a_,_,_t_,_r_,_x65_,_i_,_END_,
	_x52_,_x4c_,_x4e_,_x51_,_END_,
	_AR_6E_,_AR_6D_,_AR_70_,_END_,
	_K_,_o_,_HARD_SIGN_F3,_k_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_NX_B2,_EY_HX_BC,_UA_I_SMALL_F5,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT

	
};



BYTE code tsOSD_LANGUAGE[] =
{
    _L_,_a_,_n_,_g_,_u_,_a_,_g_,_e_,_END_,
	_L_,_a_,_n_,_g_,_u_,_a_,_g_,_END_,
	_I_,_d_,_i_,_o_,_m_,_a_,_END_,
	_L_,_i2_,_n_,_g_,_u_,_a_,_END_,	//_I_,_d_,_i_,_o_,_m_,_a_,_END_,
	_S_,_p_,_r_,_a_,_c_,_h_,_e_,_END_,
	_L_,_i_,_n_,_g_,_u_,_a_,_END_,
	_T_,_a_,_a_,_l_,_END_,
	_S_,_p_,_r_,_a6_,_k_,_END_,
	_K_,_i_,_e_,_l_,_i_,_END_,
	_J_,_e7_,_z_,_y_,_k_,_END_,
	_J_,_a_,_z_,_y_,_k_,_END_,

	_EY_FR_DF,_EY_3X_B0,_EY_BIX_D8,_EY_KX_B6,_END_,		//俄语	语言
	_HY_65_,_HY_66_,_END_,
	_FT_yu_7E,_FT_yan_7F,_END_,
	_CH_YU_80,_CH_YAN_81,_END_,		//?òì?	ó???
	_JA_70,_JA_71,_END_,	


	
	_66,_pai_,_58,_53,_53,_4f,_END_,
	_N_,_y_,_e_,_l_,_v_,_END_,
	_D_,_i_,_l_,_END_,
	
	_N_,_g_,_x5f_,_n_,_,_N_,_g_,_x60_,_END_,
	_x4b_,_x57_,_x5b_,_END_,
	_AR_8E_,_AR_8F_,_AR_90_,_AR_91_,_END_,
	_T_,_i_,_l_,_END_,//_UZBEK_SUPPRT
	_EY_M_B9,_EY_OX_BE,_EY_BX_A4,_EY_AX_A0,_END_,//_UKRAINE_SUPPORT
	
	
};

#if(_MC_EUROPE)
BYTE code tsOSD_OSD_TIMER[] =
{
	_O_,_S_,_D_,_,_T_,_i_,_m_,_e_,_o_,_u_,_t_,_END_,
	_T_,_e_,_m_,_p_,_o_,_r_,_i_,_s_,_a_,_t_,_i_,_o_,_n_,_,_O_,_S_,_D_,_END_,
	_T_,_i_,_e_,_m_,_p_,_o_,_,_d_,_e_,_,_e_,_s_,_p_,_e_,_r_,_a_,_,_d_,_e_,_,_O_,_S_,_D_,_END_,
	_T_,_e_,_m_,_p_,_o_,_,_L_,_i_,_m_,_i_,_t_,_e_,_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,0x45,_A_,_b_,_s_,_c_,_h_,_a_,_l_,_t_,_z_,_e_,_i_,_t_,_END_,
	_T_,_i_,_m_,_e_,_o_,_u_,_t_,_,_O_,_S_,_D_,_END_,
	_O_,_S_,_D_,_,_T_,_i_,_m_,_e_,_o_,_u_,_t_,_END_,
	_T_,_i_,_m_,_e_,_o_,_u_,_t_,_END_,
	_A_,_i_,_k_,_a_,_k_,_a_,_t_,_DOT_,_END_,
	_C_,_z_,_a_,_s_,_,_Z_,_a_,_k_,_o_,_n2_,_DOT_,_END_,
	_C1_,_a_,_s_,_o_,_v_,_y2_, _,_I_,_n_,_t_,_e_,_r_,_v_,_a_,_l_,_END_,
	
	_EY_B_A3,_EY_PX_C2,_DOT_,_,_EY_O_BD,_EY_TX_C6,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_DOT_,_,_EY_M_B9,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,	//俄语	显示时间
	_HY_4A_,_HY_67_,_HY_68_,_HY_69_,_END_,
	_FT_shi_66,_FT_jian_82,_FT_ti_80,_FT_shi_81,_END_,
	_CH_XIAN_82,_CH_SHI_83,_CH_SHI_69,_CH_JIAN_84,_END_,	//?òì?		??ê?ê±??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_S_,_D_,_,_,_JA_74,_JA_76,_JA_50,_JA_51,_END_,
#else
	_O_,_S_,_D_,_JA_72,_JA_73,_JA_74,_JA_76,_JA_50,_JA_51,_END_,
#endif

	
	_X_,_57,_o_,_4c,_4b,_54,_4d, _,_4d,_57,_4b,_o_,_END_,
	_K_,_i_,_k_,_a_,_p_,_c_,_s_,_o_,_l_,_a2_,_s_,_END_,
	_Z_,_a_,_m_,_a_,_n_, _,_A_,_s7_,_I10_,_m_,_I10_,_END_,
	
	_H_,_i_,_x66_,_n_,_,_t_,_h_,_x61_,_,_t_,_h_,_x65_,_i_,_,_g_,_i_,_a_,_n_,_END_,
	_O_,_S_,_D_,_x54_,_x53_,_x4d_,_,_x59_,_x55_,_x57_,_END_,
	_AR_5F_,_AR_60_,_AR_61_,_AR_62_,_,_AR_63_,_AR_64_,_AR_65_,_AR_66_,_AR_67_,_END_,
	_O_,_S_,_D_,_,_V_,_a_,_q_,_t_,_,_t_,_u_,_g_,_a_,_d_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_T_C5,_EY_AX_A0,_EY_NSX_B4,_EY_MX_BA,_EY_EX_AA,_EY_PX_C2,_END_,//_UKRAINE_SUPPORT


};

#else
BYTE code tsOSD_OSD_TIMER[] =
{
#if 0//(Project_ID == ID_MC_HK2795E05_1DP2HDMI_M250HAN01_A_4LAN_HBR2_FHD240HZ_20220516)||(Project_ID == ID_MC_HK2795E05_1DP2HDMI_M250HAN01_3_8LAN_HBR2_FHD240HZ_20220517)
    _T_,_i_,_m_,_e_,_,_O_,_u_,_t_,_END_,
#else
    _T_,_i_,_m_,_e_,_o_,_u_,_t_,_END_,
#endif
    _D_,_u_,_r_,_e2_,_e_,_,_O_,_S_,_D_,_END_,
	_T_,_i_,_e_,_m_,_p_,_DOT_,_e_,_s_,_p_,_DOT_,_O_,_S_,_D_,_END_,
	_T_,_e_,_m_,_p_,_o_, _,_L_,_i_,_m_,_i_,_t_,_e_,_END_,
	_O_,_S_,_D_,_BLANK_1,_E_, _A_,_u_,_s_,_z_,_e_,_i_,_t_,_END_,
	_T_,_i_,_m_,_e_,_o_,_u_,_t_,_END_,
	_T_,_i_,_m_,_e_,_BLANK_1,_o_,_u_,_t_,_END_,
	_T_,_i_,_m_,_e_,_o_,_u_,_t_,_END_,
	_A_,_i_,_k_,_a_,_k_,_a_,_t_,_DOT_,_END_,
	_C_,_z_,_a_,_s_,_,_Z_,_a_,_k_,_o_,_n2_,_DOT_,_END_,
	_C1_,_a_,_s_,_o_,_v_,_y2_, _,_I_,_n_,_t_,_e_,_r_,_v_,_a_,_l_,_END_,

	_EY_B_A3,_EY_PX_C2,_DOT_,_,_EY_O_BD,_EY_TX_C6,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_DOT_,_,_EY_M_B9,_EY_EX_AA,_EY_HX_BC,_EY_NXX_DE,_END_,	//俄语	显示时间
	_HY_4A_,_HY_67_,_HY_68_,_HY_69_,_END_,
	_FT_shi_66,_FT_jian_82,_FT_ti_80,_FT_shi_81,_END_,
	_CH_XIAN_82,_CH_SHI_83,_CH_SHI_69,_CH_JIAN_84,_END_,	//?òì?		??ê?ê±??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_S_,_D_,_,_,_JA_74,_JA_76,_JA_50,_JA_51,_END_,
#else
	_O_,_S_,_D_,_JA_72,_JA_73,_JA_74,_JA_76,_JA_50,_JA_51,_END_,
#endif

	
	_X_,_57,_o_,_4c,_4b,_54,_4d, _,_4d,_57,_4b,_o_,_END_,
	_K_,_i_,_k_,_a_,_p_,_c_,_s_,_o_,_l_,_a2_,_s_,_END_,
	_Z_,_a_,_m_,_a_,_n_, _,_A_,_s7_,_I10_,_m_,_I10_,_END_,
	
	_H_,_i_,_x66_,_n_,_,_t_,_h_,_x61_,_,_t_,_h_,_x65_,_i_,_,_g_,_i_,_a_,_n_,_END_,
	_O_,_S_,_D_,_x54_,_x53_,_x4d_,_,_x59_,_x55_,_x57_,_END_,
	_AR_5F_,_AR_60_,_AR_61_,_AR_62_,_,_AR_63_,_AR_64_,_AR_65_,_AR_66_,_AR_67_,_END_,
	_V_,_a_,_q_,_t_,_,_t_,_u_,_g_,_a_,_d_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_T_C5,_EY_AX_A0,_EY_NSX_B4,_EY_MX_BA,_EY_EX_AA,_EY_PX_C2,_END_,//_UKRAINE_SUPPORT


};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_TRANSPARENCY[] =
{

	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_c_,_e_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_c_,_e_,_END_,//_T_,_r_,_a_,_n_,_s_,_p_,_DOT_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_c_,_i_,_a_,_END_,//_T_,_r_,_a_,_n_,_s_,_DOT_,_END_, 
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e8_,_n_,_c_,_i_,_a_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_z_,_END_,//_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_DOT_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_z_,_a_,_END_,//_T_,_r_,_a_,_s_,_p_,_DOT_,_END_,
	
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_t_,_i_,_e_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_DOT_,_END_,
	_L_,_a3_,_p_,_i_,_n_,_a3_,_k_,_DOT_,_END_,
	_P_,_r_,_z_,_e_,_z_,_r_,_DOT_,_END_,
	_P_,_r_,_u6_,_h_,_l_,_e_,_d_,_n_,_o_,_s_,_t_,_END_,

	_EY_MEN_BF,_EY_PX_C2,_EY_OX_BE,_EY_3X_B0,_EY_PX_C2,_DOT_,_END_,	//俄语	透明度
	_HY_6A_,_HY_57_,_HY_47_,_END_,
	_FT_tou_83,_FT_ming_96,_FT_du_48,_END_,
	_CH_TOU_85,_CH_MING_49,_CH_DU_4B,_END_,		//?òì? 	í??÷?è
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_S_,_D_,_,_,_JA_77,_JA_59,_JA_4a,_END_,
#else
	_O_,_S_,_D_,_JA_77,_JA_78,_JA_4a,_END_,
#endif


	_67,_4b,_4f,_5a,_5b,_4c,_4a,_4b,_4f,_END_,
	_A2_,_t_,_l_,_a2_,_t_,_s_,_z_,_o2_,_s_,_a2_,_g_,_END_,
	_S7_,_e_,_f_,_f_,_a_,_f_,_l_,_I10_,_k_,_END_,
	
	_x49_,_x4a_,_,_t_,_r_,_o_,_n_,_g_,_,_s_,_u_,_x5c_,_t_,_END_,
	_x51_,_x55_,_x53_,_x4b_,_,_x52_,_x56_,_,_x5c_,_x4c_,_x57_,_x50_,_x59_,_x5b_,_END_,
	_AR_A6_,_AR_A7_,_AR_A8_,_AR_A9_,_AR_AA_,_AR_AB_,_AR_AC_,
	_S_,_h_,_a_,_f_,_f_,_o_,_f_,_l_,_i_,_k_,_END_,//_UZBEK_SUPPRT
	_EY_MEN_BF,_EY_PX_C2,_EY_OX_BE,_EY_3X_B0,_EY_OX_BE,_EY_PX_C2,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT

};


#else
BYTE code tsOSD_TRANSPARENCY[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_c_,_y_,_END_,
#else
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e_,_n_,_c_,_e_,_END_,
#endif
	_T_,_r_,_a_,_n_,_s_,_p_,_DOT_,_END_,
	_T_,_r_,_a_,_n_,_s_,_DOT_,_END_, 
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_e8_,_n_,_c_,_i_,_a_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_DOT_,_END_,
	_T_,_r_,_a_,_s_,_p_,_DOT_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_a_,_r_,_a_,_n_,_t_,_i_,_e_,_END_,
	_T_,_r_,_a_,_n_,_s_,_p_,_DOT_,_END_,
	_L_,_a3_,_p_,_i_,_n_,_a3_,_k_,_DOT_,_END_,
	_P_,_r_,_z_,_e_,_z_,_r_,_DOT_,_END_,
	_P_,_r_,_u6_,_h_,_l_,_e_,_d_,_n_,_o_,_s_,_t_,_END_,

	_EY_MEN_BF,_EY_PX_C2,_EY_OX_BE,_EY_3X_B0,_EY_PX_C2,_DOT_,_END_,	//俄语	透明度
	_HY_6A_,_HY_57_,_HY_47_,_END_,
	_FT_tou_83,_FT_ming_96,_FT_du_48,_END_,
	_CH_TOU_85,_CH_MING_49,_CH_DU_4B,_END_,		//?òì? 	í??÷?è
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_S_,_D_,_,_,_JA_77,_JA_59,_JA_4a,_END_,
#else
	_O_,_S_,_D_,_JA_77,_JA_78,_JA_4a,_END_,
#endif


	_67,_4b,_4f,_5a,_5b,_4c,_4a,_4b,_4f,_END_,
	_A2_,_t_,_l_,_a2_,_t_,_s_,_z_,_o2_,_s_,_a2_,_g_,_END_,
	_S7_,_e_,_f_,_f_,_a_,_f_,_l_,_I10_,_k_,_END_,
	
	_x49_,_x4a_,_,_t_,_r_,_o_,_n_,_g_,_,_s_,_u_,_x5c_,_t_,_END_,
	_x51_,_x55_,_x53_,_x4b_,_,_x52_,_x56_,_,_x5c_,_x4c_,_x57_,_x50_,_x59_,_x5b_,_END_,
	_AR_A6_,_AR_A7_,_AR_A8_,_AR_A9_,_AR_AA_,_AR_AB_,_AR_AC_,_END_,
	_S_,_h_,_a_,_f_,_f_,_o_,_f_,_l_,_i_,_k_,_END_,//_UZBEK_SUPPRT
	_EY_MEN_BF,_EY_PX_C2,_EY_OX_BE,_EY_3X_B0,_EY_OX_BE,_EY_PX_C2,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT
};
#endif

BYTE code tsOSD_IMAGE_AUTO_ADJUST[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

	_A_,_u_,_t_,_o_,_,_a_,_d_,_j_,_u_,_s_,_t_,_END_,
#else
	_A_,_u_,_t_,_o_,_,_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_END_,
#endif
    _R_,_e2_,_g_,_DOT_,_,_A_,_u_,_t_,_o_,_END_,
	_A_,_j_,_u_,_s_,_t_,_e_,_,_A_,_u_,_t_,_o_,_DOT_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_A_,_u_,_t_,_o_,_m_,_DOT_,_END_,
	_A_,_u_,_t_,_o_,_DOT_,_E_,_i_,_n_,_s_,_t_,_e_,_l_,_l_,_DOT_,_END_,
	_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_A_,_u_,_t_,_o_,_m_,_END_,
	_A_,_u_,_t_,_o_,_DOT_,_C_,_o_,_n_,_f_,_i_,_g_,_DOT_,_END_,
	_A_,_u_,_t_,_o_, _,_K_,_o_,_n_,_f_,_i_,_g_,_END_,
	_A_,_u_,_t_,_o_, _DOT_,_A_,_s_,_e_,_t_,_u_,_k_,_DOT_,_END_,
	_A_,_u_,_t_,_o_,_m_, _DOT_,_K_,_o_,_n_,_f_,_i_,_g_,_u_,_r_,_DOT_,_END_,
	_A_,_u_,_t_,_o_, _,_K_,_o_,_n_,_f_,_i_,_g_,_END_,

	_EY_A_9F,_EY_BX_A4,_EY_TX_C6,_EY_OX_BE,_EY_HX_BC,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_DOT_,_END_,	//俄语	自动图像调整
	
	_HY_52_,_HY_AD_,_HY_6C_,_HY_6D_,_HY_6E_,_HY_4C_,_END_,	//_HY_6C_,_HY_6D_,_HY_6E_,_HY_4C_,_END_,


	

	_FT_zi_6A,_FT_dong_84,_FT_tu_49,_FT_xiang_4A,_FT_tiao_92,_FT_zheng_93,_END_,
	_CH_ZI_6D,_CH_DONG_86,_CH_TU_4C,_CH_XIANG_4D,_CH_TIAO_79,_CH_ZHENG_7A,_END_,	//×??ˉí???μ÷??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_79,_JA_7a,_JA_4d,_JA_be,_END_,
#else
	_JA_79,_JA_7a,_JA_4d,_JA_4e,_END_,
#endif

	
	_A_,_5f,_49,_DOT_, _61,_4b,_4f,_52,_4d,_57,_5a,_48,_53,_4e,_END_,
	_A_,_u_,_t_,_o_, _DOT_,_,_k_,_o_,_n_,_f_,_i_,_g_,_DOT_,_END_,
	_O_,_t_,_o_, _,_K_,_o_,_n_,_f_,_i_,_g_,_DOT_,_END_,
	
	_x49_,_i_,_x67_,_u_,_,_c_,_h_,_x68_,_n_,_h_,_,_h_,_x4d_,_n_,_h_,_,_x4e_,_n_,_h_,_,_t_,_x53_,_,_x58_,_x4a_,_n_,_g_,_END_,
	_x5c_,_x50_,_x5c_,_x53_,_x4c_,_x4f_,_x4c_,_x47_,_,_x5c_,_x53_,_x47_,_x47_,_x5c_,_x4b_,_END_,
	_AR_52_,_AR_53_,_AR_54_,_AR_55_,_AR_56_,_END_,
	_A_,_v_,_t_,_o_,_m_,_a_,_t_,_i_,_k_,_,_s_,_o_,_z_,_l_,_a_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_A_9F,_EY_BX_A4,_EY_TX_C6,_EY_OX_BE,_EY_PX_C2,_EY_EX_AA,_EY_GZX_A6,_,_DOT_,_,_EY_3X_B0,_EY_OX_BE,_EY_6X_A2,_EY_PX_C2,_EY_AX_A0,_EY_ZZX_AE,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT

};


BYTE code tsOSD_COLOR_AUTO_ADJUST[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

	_A_,_u_,_t_,_o_,_,_c_,_o_,_l_,_o_,_r_,_END_,
#else
	_A_,_u_,_t_,_o_,_,_C_,_o_,_l_,_o_,_r_,_END_,
#endif
	_A_,_o_,_u_,_l_,_e_,_u_,_r_,_,_A_,_u_,_t_,_o_,_END_,
	_C_,_o_,_l_,_o_,_r_,_,_A_,_u_,_t_,_o_,_DOT_,_END_,
	_A_,_u_,_t_,_o_,_,_C_,_o_,_l_,_o_,_r_,_END_,
	_A_,_u_,_t_,_o_,_F_,_a_,_r_,_b_,_e_,_END_,
	_C_,_o_,_l_,_o_,_r_,_e_, _,_A_,_u_,_t_,_o_,_END_,
	_A_,_u_,_t_,_o_,_DOT_,_K_,_l_,_e_,_u_,_r_,_END_,
	_A_,_u_,_t_,_o_,_,_C_,_o_,_l_,_o_,_r_,_END_,
	_A_,_u_,_t_,_o_,  _V_,_a3_,_r_,_i_,_END_,
	_A_,_u_,_t_,_o_,_,_K_,_o_,_l_,_o_,_r_,_END_,
	_A_,_u_,_t_,_o_, _,_B_,_a_,_r_,_v_,_a_,_END_,


	_EY_A_9F,_EY_BX_A4,_EY_TX_C6,_EY_OX_BE,_,_EY_UWX_CE,_EY_BX_A4,_EY_EX_AA,_EY_TX_C6,_END_,	//俄语	自动颜色调整	
	_HY_4D_,_HY_4E_,_HY_6C_,_HY_6D_,_HY_6E_,_HY_4C_,_END_,//_HY_6C_,_HY_6D_,_HY_4D_,_HY_4E_,_END_,
	_FT_zi_6A,_FT_dong_84,_FT_yan_4D,_FT_se_4E,_FT_tiao_92,_FT_zheng_93,_END_,
	_CH_ZI_6D,_CH_DONG_86,_CH_YAN_50,_CH_SE_51,_CH_TIAO_79,_CH_ZHENG_7A,_END_,		//?òì?	×??ˉ??é?μ÷??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
			_JA_c7,_JA_7b,_JA_6a,_JA_55, _JA_90,_JA_5e,_JA_5d,_JA_5f,_END_,
#else
			_JA_7e,_JA_61,_JA_55,_JA_83,_JA_5e,_JA_61,_JA_4d,_JA_4e,_END_,
#endif

	_A_,_5f,_49,_DOT_, _56,_57,_58,_52,_4f,_END_,
	_A_,_u_,_t_,_o_, _DOT_,_,_s_,_z_,_i2_,_n_,_END_,
	_O_,_t_,_o_, _,_R_,_e_,_n_,_k_,_END_,
	
	_x49_,_i_,_x67_,_u_,_,_c_,_h_,_x68_,_n_,_h_,_,_m_,_x4f_,_u_,_,_t_,_x53_,_,_x58_,_x4a_,_n_,_g_,_END_,
	_x50_,_x4f_,_x53_,_x4c_,_x4f_,_x4c_,_x47_,_END_,//_,_x56_,_x48_,_x58_,
	_AR_5F_,_AR_60_,_AR_61_,_AR_62_,_,_AR_52_,_AR_53_,_AR_54_,_AR_55_,_AR_56_,_END_,
	_A_,_v_,_t_,_o_,_m_,_a_,_t_,_i_,_k_,_,_r_,_a_,_n_,_g_,_END_,//_UZBEK_SUPPRT
	_EY_A_9F,_EY_BX_A4,_EY_TX_C6,_EY_OX_BE,_EY_PX_C2,_EY_EX_AA,_EY_GZX_A6,_,_DOT_,_,_EY_KX_B6,_EY_OX_BE,_EY_PAIX_B8,_EY_XBX_DA,_EY_OX_BE,_EY_PX_C2,_EY_YX_C8,_END_,//_UKRAINE_SUPPORT

};
#if(_MC_EUROPE)
BYTE code tsOSD_RESET_PAGE[] =
{
   	_R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e2_,_i_,_n_,_i_,_t_,_i_,_a_,_l_,_i_,_s_,_e_,_r_,_END_,//_DOT_,_END_,
	_R_,_e_,_s_,_t_,_a_,_b_,_l_,_e_,_c_,_e_,_r_,_END_,//_R_,_e_,_i_,_n_,_i_,_DOT_,_END_,
	_R_,_e_,_s_,_t_,_a_,_u_,_r_,_a_,_r_,_END_,
	_Z_,_u_,_r_,_u3_,_c_,_k_,_s_,_e_,_t_,_z_,_e_,_n_,_END_,//_Z_,_u_,_r_,_u3_,_c_,_k_,_s_,_e_,_t_,_z_,_DOT_,_END_,
	_R_,_i_,_p_,_r_,_i_,_s_,_t_,_i_,_n_,_o_,_END_,
	_R_,_e_,_s_,_e_,_t_,_t_,_e_,_n_,_END_,//_R_,_e_,_s_,_e_,_t_,_END_,
	_A10_,_t_,_e_,_r_,_s_,_t_,_DOT_,_END_,
	_N_,_o_,_l_,_l_,_a_,_u_,_s_,_END_,
	_R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e_,_s_,_e_,_t_,_o_,_v_,_a_,_t_,_END_,

	_EY_C_C3,_EY_6_A1,_EY_PX_C2,_EY_OX_BE,_EY_CX_C4,_,_EY_HX_BC,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_EY_OX_BE,_EY_EX_AA,_EY_KX_B6,_END_,	//俄语		重置
	_HY_50_,_HY_51_,_HY_52_,_END_,
	FT_chong_50,_FT_she_4B,_END_,
	_CH_ZHONG_53,_CH_ZHI_4F,_END_,		//?òì?   ????
	_JA_52,_JA_53,_JA_54,_JA_55,_END_,

	
	_E_,_59,_4f,_4c,_4f,_5a,_o_,_57,_5b,_END_,
	_A_,_l_,_a_,_p_,_h_,_e_,_l_,_y_,_z_,_e_,_t_,_END_,
	_S_,_I10_,_f_,_I10_,_r_,_l_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_l_,_x51_,_i_,_,_,_END_,
	_x55_,_x4c_,_x57_,_x50_,_x47_,_END_,
	_AR_CC_,_AR_CD_,_AR_CE_,_AR_CF_,_AR_D0_,_AR_D1_,_AR_D2_,_AR_D3_,_END_,
	_Q_,_a_,_y_,_t_,_a_,_,_s_,_o_,_z_,_l_,_a_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_KX_B6,_EY_NX_B2,_EY_KOUX_A8,_EY_AX_A0,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT


};

#else
BYTE code tsOSD_RESET_PAGE[] =
{
    _R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e2_,_i_,_n_,_i_,_t_,_DOT_,_END_,
	_R_,_e_,_i_,_n_,_i_,_DOT_,_END_,
	_R_,_e_,_s_,_t_,_a_,_u_,_r_,_a_,_r_,_END_,
	_Z_,_u_,_r_,_u3_,_c_,_k_,_s_,_e_,_t_,_z_,_DOT_,_END_,
	//_R_,_i_,_p_,_r_,_i_,_s_,_t_,_i_,_n_,_o_,_END_,
	_R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e_,_s_,_e_,_t_,_END_,
	_A10_,_t_,_e_,_r_,_s_,_t_,_DOT_,_END_,
	_N_,_o_,_l_,_l_,_a_,_u_,_s_,_END_,
	_R_,_e_,_s_,_e_,_t_,_END_,
	_R_,_e_,_s_,_e_,_t_,_o_,_v_,_a_,_t_,_END_,

	_EY_C_C3,_EY_6_A1,_EY_PX_C2,_EY_OX_BE,_EY_CX_C4,_,_EY_HX_BC,_EY_AX_A0,_EY_CX_C4,_EY_TX_C6,_EY_PX_C2,_EY_OX_BE,_EY_EX_AA,_EY_KX_B6,_END_,	//俄语		重置
	_HY_50_,_HY_51_,_HY_52_,_END_,
	FT_chong_50,_FT_she_4B,_END_,
	_CH_ZHONG_53,_CH_ZHI_4F,_END_,		//?òì?   ????
	_JA_52,_JA_53,_JA_54,_JA_55,_END_,

	
	_E_,_59,_4f,_4c,_4f,_5a,_o_,_57,_5b,_END_,
	_A_,_l_,_a_,_p_,_h_,_e_,_l_,_y_,_z_,_e_,_t_,_END_,
	_S_,_I10_,_f_,_I10_,_r_,_l_,_a_,_END_,
	
	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_l_,_x51_,_i_,_,_,_END_,
	_x55_,_x4c_,_x57_,_x50_,_x47_,_END_,
	_AR_CC_,_AR_CD_,_AR_CE_,_AR_CF_,_AR_D0_,_AR_D1_,_AR_D2_,_AR_D3_,_END_,
	_Q_,_a_,_y_,_t_,_a_,_,_s_,_o_,_z_,_l_,_a_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_KX_B6,_EY_NX_B2,_EY_KOUX_A8,_EY_AX_A0,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT


};
#endif

#if _DEF_GuangGan_FUN
	
BYTE code tsOSD_GuangGan[] =
{
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,

	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,

	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,

	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//	_HY_50_,_HY_51_,_HY_52_,_END_,
	_FT_guang_60,_FT_gan_AB,_END_,//	FT_chong_50,_FT_she_4B,_END_,
	_CH_GUANG_63,_CH_gan_AB,_END_,//	_CH_ZHONG_53,_CH_ZHI_4F,_END_,		//?òì?   ????
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//	_JA_52,_JA_53,_JA_54,_JA_55,_END_,

	
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//	_E_,_59,_4f,_4c,_4f,_5a,_o_,_57,_5b,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//	_A_,_l_,_a_,_p_,_h_,_e_,_l_,_y_,_z_,_e_,_t_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//	_S_,_I10_,_f_,_I10_,_r_,_l_,_a_,_END_,
	
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//	_T_,_h_,_i_,_x47_,_t_,_,_l_,_x4c_,_p_,_,_l_,_x51_,_i_,_,_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//	_x55_,_x4c_,_x57_,_x50_,_x47_,_END_,
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//_AR_CC_,_AR_CD_,_AR_CE_,_AR_CF_,_AR_D0_,_AR_D1_,_AR_D2_,_AR_D3_,_END_,
	
	_G_,_u_,_a_,_n_,_g_,_G_,_a_,_n_,_END_,//


};
#endif


BYTE code tsOSD_SIGNAL_SOURCE[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _I_,_n_,_p_,_u_,_t_,_END_,
#else
    _I_,_n_,_p_,_u_,_t_,_,_S_,_e_,_l_,_e_,_c_,_t_,_END_,
#endif
    _S_,_e2_,_l_,_e_,_c_, _DOT_,_e_,_n_,_t_,_r_,_e2_,_e_,_END_,
    _S_,_e_,_l_,_DOT_,_E_, _n_,_t_,_r_,_a_,_d_,_a_,_END_,
	_S_,_e_,_l_,_DOT_,_d_,_e_, _,_E_, _n_,_t_,_r_,_a_,_d_,_a_,_END_,
	_E_,_i_,_n_,_g_,_a_, _n_,_g_,_s_,_w_,_a_,_h_,_l_,_END_,
	_S_,_e_,_l_,_e_,_z_, _DOT_,_I_,_n_,_p_,_u_,_t_,_END_,
	_I_,_n_,_g_,_a_,_n_,_g_,_s_,_s_,_e_,_l_,_e_,_c_,_DOT_,_END_,
	_V_,_a3_,_l_,_j_,_ ,_I_,_n_,_m_,_a_,_t_,_DOT_,_END_,
	_T_,_u_,_l_,_o_,_v_,_a_,_l_,_i_,_n_,_t_,_a_,_END_,
	_W_,_y_,_b_,_o3_,_r_, _,_W_,_e_,_j_,_s2_,_c_,_i_,_a_,_END_,
	_V_,_y2_,_b_,_e1_,_r_, _,_V_,_s_,_t_,_u_,_p_,_u_,_END_,

	_EY_B_A3,_EY_BIX_D8,_EY_6_A1,_EY_OX_BE,_EY_PX_C2,_,_EY_B_A3,_EY_XX_CC,_EY_OX_BE,_EY_KOUX_A8,_EY_AX_A0,_END_,	//俄语		输入选择
	_HY_6F_,_HY_70_,_,_HY_71_,_HY_72_,_END_,
	_FT_shu_85,_FT_ru_86,_FT_xuan_87,FT_ze_88,_END_,
	_CH_SHU_87,_CH_RU_88,_CH_XUAN_89,_CH_ZE_8A,_END_,	//?òì?	ê?è?????

#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_82,_JA_83,_JA_ca,_JA_61,_JA_5f,_END_,

#else
	_JA_82,_JA_83,_JA_84,_JA_85,_END_,

#endif
	
	_E_,_59,_4b,_pai_,_o_, _60,_86, _,_4a,_4b,_53,_4d,_61,_o_,_5f,_END_,
	_B_,_e_,_m_,_e_,_n_, _e_,_t_,_ ,_k_,_i_,_v_,_a2_,_l_,_DOT_,_END_,
	_G_,_i_,_r_,_i_,_s7_,  _,_S_,_e_ ,_c7_,_END_,
	
	_C_,_h_,_x69_,_n_,_,_x58_,_x6a_,_u_,_,_v_,_x4f_,_o_,_END_,
	_x4f_,_x52_,_x59_,_,_x5a_,_x4c_,_x59_,_x53_,_END_,
	_AR_D7_,_AR_D8_,_AR_D9_,_AR_DA_,_AR_DB_,_END_,
	_K_,_i_,_r_,_i_,_s_,_h_,_n_,_i_,_,_t_,_a_,_n_,_l_,_a_,_n_,_g_,_END_,//_UZBEK_SUPPRT
	_EY_KOU_A7,_EY_ZZX_AE,_EY_EX_AA,_EY_PX_C2,_EY_EX_AA,_EY_PAIX_B8,_EY_OX_BE,_,_EY_CX_C4,_EY_NX_B2,_EY_GZX_A6,_EY_HX_BC,_EY_AX_A0,_EY_PAIX_B8,_EY_YX_C8,_END_,//_UKRAINE_SUPPORT



};

#if(_MC_EUROPE)
BYTE code tsOSD_LOW_BLUE[] =
{
	_L_,_o_,_w_,_,_B_,_l_,_u_,_e_,_,_M_,_o_,_d_,_e_,_END_,
	_M_,_o_,_d_,_e_,_,_B_,_l_,_e_,_u_,_e_,_,_F_,_a_,_i_,_b_,_l_,_e_,_END_,
	_M_,_o_,_d_,_o_,_,_d_,_e_,_,_A_,_z_,_u_,_l_,_,_B_,_a_,_j_,_o_,_END_,
	_M_,_o_,_d_,_o_,_,_L_,_o_,_w_,_,_B_,_l_,_u_,_e_,_END_,
	_L_,_o_,_w_,_,_B_,_l_,_u_,_e_,_,_L_,_i_,_g_,_h_,_t_,_,_M_,_o_,_d_,_u_,_s_,_END_,
	_M_,_o_,_d_,_a_,_l_,_i_,_t_,0xea,_,_B_,_l_,_u_,_,_B_,_a_,_s_,_s_,_o_,_END_,
	_L_,_a_,_g_,_e_,_,_b_,_l_,_a_,_u_,_w_,_e_,_,_M_,_o_,_d_,_u_,_s_,_END_,
	_L_,_a6_,_g_,_t_,_ ,_b_,_l_,_a6_,_t_,_t_,_ ,_l_,_j_,_u_,_s_,_END_,
	_M_,_a_,_t_,_a_,_l_ ,_a_,_ ,_s_,_i_,_n_,_i_ ,_n_,_e_,_n_,_ ,_v_,_a_,_l_,_o_,_END_,
	_L_,_o_,_w_,_B_,_l_,_u_,_e_,_L_,_i_,_g_,_h_,_t_,_END_,
	_N_,_i2_,_z_,_k_,_e2_ ,_ ,_m_,_o_,_d_,_r_ ,_e2_, _,_s_,_v_ ,_e1_,_t_,_l_,_o_,_END_,

#if(_OSD_DX_RUSSIAN_TEXT)
	_L_,_o_,_w_,_,_B_,_l_,_u_,_e_,_,_L_,_i_,_g_,_h_,_t_,_END_,
#else
	_EY_H_BB,_EY_NX_B2,_EY_3X_B0,_EY_KX_B6,_EY_NX_B2,_EY_NSX_B4,_,_EY_CX_C4,_EY_NX_B2,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_,_EY_CX_C4,_EY_BX_A4,_EY_EX_AA,_EY_TX_C6,_END_,	//俄语	低蓝光	
#endif
	_L_,_o_,_w_,_B_,_l_,_u_,_e_,_L_,_i_,_g_,_h_,_t_,_END_,

	

	_FT_di_5F,_FT_lan_71,_FT_guang_60,_END_,
	_CH_DI_62,_CH_LAN_74,_CH_GUANG_63,_END_,	//?òì? 	μíà?1a
	_JA_95,_JA_93,_JA_61,_JA_5e,_JA_6a,_JA_55,_JA_a5,_JA_a6,_END_,

	
	_X_,_4f,_52,_4e,_pai_ ,_4d , _,_52,_59,_pai_ ,_4a,_END_,
	_A_,_l_,_a_,_c_,_s_ ,_o_ ,_n_,_y_,_,_k_ ,_e2_, _k_,_END_,
	_D_,_u3_,_s7_,_u3_,_k_ ,_  ,_M_,_a_,_v_,_i_ ,_, _I_,_s7_,_I10_,_k_,_END_,
	
	_x59_,_n_,_h_,_,_s_,_x4b_,_n_,_g_,_,_x_,_a_,_n_,_h_,_,_t_,_h_,_x5a_,_p_,_END_,
	_x5b_,_x52_,_x4e_,_,_x52_,_x4c_,_x4e_,_x51_,_,_x5a_,_x4c_,_x47_,_END_,
	_AR_42_,_AR_43_,_AR_44_,_AR_45_,_AR_46_,_AR_47_,_AR_48_,_AR_49_,_AR_4A_,_AR_4B_,_AR_4C_,_AR_4D_,_END_,

	_P_,_a_,_s_,_t_,_,_k_,_o_,_HARD_SIGN_F3,_k_,_END_,//_UZBEK_SUPPRT
	_EY_FAI_C9,_UA_I_SMALL_F5,_EY_MENX_C0,_EY_XBX_DA,_EY_TX_C6,_EY_PX_C2,_,_EY_CX_C4,_EY_NX_B2,_EY_HX_BC,_EY_XBX_DA,_EY_OX_BE,_EY_GZX_A6,_EY_OX_BE,_END_,//_UKRAINE_SUPPORT
};

#else
BYTE code tsOSD_LOW_BLUE[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _L_,_o_,_w_,_,_b_,_l_,_u_,_e_,_,_l_,_i_,_g_,_h_,_t_,_END_,
    
#elif(Project_ID == ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903)||(Project_ID == ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215)||(_MC_LANGUAGE)
	_L_,_o_,_w_,_,_B_,_l_,_u_,_e_,_,_L_,_i_,_g_,_h_,_t_,_END_,
#else
    _L_,_o_,_w_,_B_,_l_,_u_,_e_,_END_,
#endif
    _L_,_u_,_m_,_,_b_,_l_,_e_,_u_,_e_,_,_f_,_a_,_i_,_b_,_l_,_END_,
	_L_,_u_,_z_,_,_a_,_z_,_u_,_l_,_,_b_,_a_,_j_,_a_,_END_,
	_L_,_u_,_z_,_,_a_,_z_,_u_,_l_,_,_b_,_a_,_j_,_x_,_a_,_END_,
	_S_,_c_,_h_,_w_,_a_,_c_,_h_,_e_,_s_,_,_B_,_l_,_a_,_u_,_l_,_i_,_c_,_h_,_t_,_END_,
	_B_,_a_,_s_,_s_,_a_, _,_l_,_u_,_c_,_e_, _,_b_,_l_,_u_,_END_,
	_L_,_a_,_a_,_g_,_ ,_b_,_l_,_a_,_u_,_w_,_ ,_l_,_i_,_c_,_h_,_t_,_END_,
	_L_,_a6_,_g_,_t_,_ ,_b_,_l_,_a6_,_t_,_t_,_ ,_l_,_j_,_u_,_s_,_END_,
	_M_,_a_,_t_,_a_,_l_ ,_a_,_ ,_s_,_i_,_n_,_i_ ,_n_,_e_,_n_,_ ,_v_,_a_,_l_,_o_,_END_,
	_L_,_o_,_w_,_B_,_l_,_u_,_e_,_L_,_i_,_g_,_h_,_t_,_END_,
	_N_,_i2_,_z_,_k_,_e2_ ,_ ,_m_,_o_,_d_,_r_ ,_e2_, _,_s_,_v_ ,_e1_,_t_,_l_,_o_,_END_,

#if(_OSD_DX_RUSSIAN_TEXT)
	_L_,_o_,_w_,_,_B_,_l_,_u_,_e_,_,_L_,_i_,_g_,_h_,_t_,_END_,
#else
	_EY_H_BB,_EY_NX_B2,_EY_3X_B0,_EY_KX_B6,_EY_NX_B2,_EY_NSX_B4,_,_EY_CX_C4,_EY_NX_B2,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_,_EY_CX_C4,_EY_BX_A4,_EY_EX_AA,_EY_TX_C6,_END_,	//俄语	低蓝光	
#endif
	_L_,_o_,_w_,_B_,_l_,_u_,_e_,_L_,_i_,_g_,_h_,_t_,_END_,

	

	_FT_di_5F,_FT_lan_71,_FT_guang_60,_END_,
	_CH_DI_62,_CH_LAN_74,_CH_GUANG_63,_END_,	//?òì? 	μíà?1a
	_JA_95,_JA_93,_JA_61,_JA_5e,_JA_6a,_JA_55,_JA_a5,_JA_a6,_END_,

	
	_X_,_4f,_52,_4e,_pai_ ,_4d , _,_52,_59,_pai_ ,_4a,_END_,
	_A_,_l_,_a_,_c_,_s_ ,_o_ ,_n_,_y_,_,_k_ ,_e2_, _k_,_END_,
	_D_,_u3_,_s7_,_u3_,_k_ ,_  ,_M_,_a_,_v_,_i_ ,_, _I_,_s7_,_I10_,_k_,_END_,
	
	_x59_,_n_,_h_,_,_s_,_x4b_,_n_,_g_,_,_x_,_a_,_n_,_h_,_,_t_,_h_,_x5a_,_p_,_END_,
	_x5b_,_x52_,_x4e_,_,_x52_,_x4c_,_x4e_,_x51_,_,_x5a_,_x4c_,_x47_,_END_,
	_AR_42_,_AR_43_,_AR_44_,_AR_45_,_AR_46_,_AR_47_,_AR_48_,_AR_49_,_AR_4A_,_AR_4B_,_AR_4C_,_AR_4D_,_END_,
	_P_,_a_,_s_,_t_,_,_k_,_o_,_HARD_SIGN_F3,_k_,_END_,//_UZBEK_SUPPRT
	_EY_FAI_C9,_UA_I_SMALL_F5,_EY_MENX_C0,_EY_XBX_DA,_EY_TX_C6,_EY_PX_C2,_,_EY_CX_C4,_EY_NX_B2,_EY_HX_BC,_EY_XBX_DA,_EY_OX_BE,_EY_GZX_A6,_EY_OX_BE,_END_,//_UKRAINE_SUPPORT


};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_MUTE[] = //DAIDING
{
    _M_,_u_,_t_,_e_,_END_,
	_M_,_u_,_e_,_t_,_END_,
	_S_,_i_,_l_,_e_,_n_,_c_,_i_,_o_,_END_,//_M_,_u_,_d_,_o_,_END_,
	_C_,_o_,_r_,_t_,_a_,_r_,_,_o_,_,_s_,_o_,_m_,_END_,//_M_,_u_,_d_,_o_,_END_,
	_S_,_t_,_u_,_m_,_m_,_END_,

	_M_,_u_,_t_,_e_,_END_,
	_D_,_e_,_m_,_p_,_e_,_n_,_END_,
	_S_,_t_,_u_,_m_,_END_,
	_m_,_y_,_k_,_i_,_s_,_t_,_a3_,_a3_,_END_,
	_N_,_i_,_e_,_m_,_y_,_END_,
    _Z_,_t_,_l_,_u_,_m_,_i_,_t_,_END_,
    
	_EY_6_A1,_EY_EX_AA,_EY_3X_B0,_,_EY_3X_B0,_EY_BX_A4,_EY_YX_C8,_EY_KX_B6,_EY_AX_A0,_END_,  
		_HY_8F_,_HY_A5_,_HY_A6_,_END_,
	_FT_JING_9B,_FT_ying_89,_END_,
	_CH_JING_96,_CH_YIN_8B,_END_,
		_JA_ae,_JA_af,_JA_61,_JA_55,_END_,

   _B_,_O_,_5f,_xila_BETE_E5,_4d,_55,_END_,
	_N_,_e2_,_m_,_a_,_END_,
	_S_,_e_,_s_,_s_,_i_,_z_,_END_,
	
	_T_,_x50_,_t_,_,_t_,_i_,_x47_,_n_,_g_,_END_,
	_x53_,_x52_,_x50_,_x47_,_END_,
	_AR_C5_,_AR_C6_,_AR_C7_,_AR_C8_,_,_AR_C9_,_AR_CA_,_AR_CB_,_END_,
	_O_,_v_,_o_,_z_,_n_,_i_,_,_o_,_HARD_SIGN_F3,_c_,_h_,_i_,_r_,_i_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_B_A3,_EY_NX_B2,_EY_MX_BA,_EY_KX_B6,_EY_HX_BC,_DOT_,_,_EY_3X_B0,_EY_BX_A4,_EY_YX_C8,_EY_KX_B6,_END_,//_UKRAINE_SUPPORT
};

#else
BYTE code tsOSD_MUTE[] = //DAIDING
{
    _M_,_u_,_t_,_e_,_END_,
	_M_,_u_,_e_,_t_,_END_,
	_M_,_u_,_d_,_o_,_END_,
	_M_,_u_,_d_,_o_,_END_,
	_S_,_t_,_u_,_m_,_m_,_END_,


	_M_,_u_,_t_,_e_,_END_,
	_D_,_e_,_m_,_p_,_e_,_n_,_END_,
	_S_,_t_,_u_,_m_,_END_,
	_m_,_y_,_k_,_i_,_s_,_t_,_a3_,_a3_,_END_,
	_N_,_i_,_e_,_m_,_y_,_END_,
    _Z_,_t_,_l_,_u_,_m_,_i_,_t_,_END_,
    
	_EY_6_A1,_EY_EX_AA,_EY_3X_B0,_,_EY_3X_B0,_EY_BX_A4,_EY_YX_C8,_EY_KX_B6,_EY_AX_A0,_END_,  
		_HY_8F_,_HY_A5_,_HY_A6_,_END_,
	_FT_JING_9B,_FT_ying_89,_END_,
	_CH_JING_96,_CH_YIN_8B,_END_,
		_JA_ae,_JA_af,_JA_61,_JA_55,_END_,

   _B_,_O_,_5f,_xila_BETE_E5,_4d,_55,_END_,
	_N_,_e2_,_m_,_a_,_END_,
	_S_,_e_,_s_,_s_,_i_,_z_,_END_,
	
	_T_,_x50_,_t_,_,_t_,_i_,_x47_,_n_,_g_,_END_,
	_x53_,_x52_,_x50_,_x47_,_END_,
	_AR_C5_,_AR_C6_,_AR_C7_,_AR_C8_,_,_AR_C9_,_AR_CA_,_AR_CB_,_END_,
	_O_,_v_,_o_,_z_,_n_,_i_,_,_o_,_HARD_SIGN_F3,_c_,_h_,_i_,_r_,_i_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_B_A3,_EY_NX_B2,_EY_MX_BA,_EY_KX_B6,_EY_HX_BC,_DOT_,_,_EY_3X_B0,_EY_BX_A4,_EY_YX_C8,_EY_KX_B6,_END_,//_UKRAINE_SUPPORT
};
#endif


BYTE code tsOSD_VOLUME[] =
{
    _V_,_o_,_l_,_u_,_m_,_e_,_END_,
	_V_,_o_,_l_,_u_,_m_,_e_,_END_,
	_V_,_o_,_l_,_u_,_m_,_e_,_n_,_END_,
	_V_,_o_,_l_,_u_,_m_,_e_,_n_,_END_,
	_L_,_a_,_u_,_t_,_s_,_t_,_a2_,_r_,_k_,_e_,_END_,
	_V_,_o_,_l_,_u_,_m_,_e_,_END_,
	_V_,_o_,_l_,_u_,_m_,_e_,_END_,
	_V_,_o_,_l_,_y_,_m_,_END_,
	_A3_,_a3_,_n_,_e_,_n_,_v_,_o_,_i_,_m_,_DOT_,_END_,
	_G_,_l10_,_o_,_s2_,_n_,_o_,_s2_,_c2_,_END_,
	_H_,_l_,_a_,_s_,_i_,_t_,_o_,_s_,_t_,_END_,

	_EY_GZ_A5,_EY_PX_C2,_EY_OX_BE,_EY_MX_BA,_EY_KX_B6,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,	//俄语	音量
		_HY_9B_,_HY_79_,_END_,
	_FT_ying_89,_FT_liang_8A,_END_,
	_CH_YIN_8B,_CH_LIANG_8C,_END_,	//?òì?		ò?á?
	_JA_86,_JA_87,_END_,

	
	_68,_4c,_49,_4f,_53,_4e,_ ,_86,_56,_o_,_5f,_END_,
	_H_,_a_,_n_,_g_,_e_,_r_,_o4_, _END_,
	_S_,_e_,_s_, _END_,
	
	_x6b_,_m_,_,_l_,_x54_,_x6c_,_n_,_g_,_END_,
	_x4e_,_x57_,_x54_,_END_,
	_AR_C5_,_AR_C6_,_AR_C7_,_AR_C8_,_END_,
	_O_,_v_,_o_,_z_,_,_b_,_a_,_l_,_a_,_n_,_d_,_l_,_i_,_g_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_GZ_A5,_EY_YX_C8,_EY_LDX_D0,_EY_HX_BC,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT


};
#if(\
	Project_ID == ID_DX_2513E01_1A1H_SG2381B01_1_FHD100HZ_SPANISH_LOGO_TEROS_20230619\
	||Project_ID == ID_DX_2513E01_1A1H_SG2701B01_A_FHD100HZ_ENGLISH_LOGO_3KO_20230614\
	||Project_ID == ID_DX_2513E01_1A1H_SG2701B01_7_FHD100HZ_ENGLISH_LOGO_3KO_20230615\
	||Project_ID == ID_DX_HK255XE15_1P2H_SG2701B022_FHD165HZ_20230731\
	||Project_ID == ID_DX_HK255XE15_1P2H_SG2381B012_FHD165HZ_LOGO_ROMBICA_20230802\
	||(Project_ID == ID_DX_HK255XE15_1P2H_QF238FHB_NF0_FHD165HZ_2023818)\
	||(Project_ID == ID_DX_HK2556E01_SG2701B02_2_FHD165HZ_EDID_HALION_20230818)\
	||(Project_ID == ID_MC_HK255XE05_SN238CS04_1_FHD200HZ_20250903)\
	||(Project_ID == ID_MC_HK255XE05_MV270FHB_NF6_FHD240HZ_20251215)\
	||(Project_ID == _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)\
	||(_MC_LANGUAGE)\
	)
BYTE code tsOSD_FREESYNC[] =  
{
	_A_,_d_,_a_,_p_,_t_,_i_,_v_,_e_,_,_s_,_y_,_n_,_c_,_END_,
};    

#else
BYTE code tsOSD_FREESYNC[] =  
{
#if 0//(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_F_,_r_,_e_,_e_,_,_,_S_,_y_,_n_,_c_,_END_,
		
#else
	_F_,_r_,_e_,_e_,_S_,_y_,_n_,_c_,_END_,
		
#endif

	
};    
#endif
BYTE code tsOSD_OD_PAGE[] =
{
    _O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	_S_,_u_,_r_,_i_,_n_,_t_,_e_,_n_,_s_,_i_,_f_,_i_,_c_,_a_,_t_,_i_,_o_,_n_,_END_,
	_A_,_c_,_e_,_l_,_e_,_r_,_a_,_c_,_i_,_o2_,_n_,_END_,
	_I_,_n_,_t_,_e_,_n_,_s_,_i_,_f_,_i_,_c_,_a_,_c7_,_a6_,_o_,_END_,
	_U3_,_b_,_e_,_r_,_s_,_t_,_e_,_u_,_e_,_r_,_u_,_n_,_g_,_END_,
	_O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	_O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	_O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	_Y_,_l_,_i_,_v_,_a_,_i_,_h_,_d_,_e_,_END_,
	_P_,_r_,_z_,_s_,_p_,_i_,_e_,_z_,_e_,_n_,_i_,_e_,_END_,	 
	_Z_,_r_,_y_,_c_,_h_,_l_,_e_,_n_,_i2_,_END_,

	
#if(_OSD_DX_RUSSIAN_TEXT)
	_O_,_v_,_e_,_r_,_D_,_r_,_i_,_v_,_e_,_END_,
#else
	_EY_P_C1,_EY_AX_A0,_EY_3X_B0,_EY_GZX_A6,_EY_OX_BE,_EY_HX_BC,_END_,
#endif

	_O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	_O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	_O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	
    _JA_7e,_JA_61,_JA_90,_JA_61,_JA_62,_JA_5e,_JA_6a,_JA_95,_END_,

	
    _O_,_v_,_e_,_r_,_d_,_r_,_i_,_v_,_e_,_END_,
	_F_,_e_,_l_,_u3_,_l_,_i2_,_r_,_END_,
	_A_,_s7_,_I10_,_r_,_I10_,_,_Y_,_u3_,_k_,_l_,_e_,_n_,_m_,_e_,_END_,
	
	_T_,_x5b_,_n_,_g_,_,_t_,_x5c_,_c_,_END_,
	_x48_,_x50_,_x50_,_x5a_,_x4a_,_x5a_,_x48_,_x4c_,_x47_,_END_,
	_AR_DC_,_AR_DD_,_AR_DE_,_AR_DF_,_AR_E0_,_AR_E1_,_AR_E2_,_AR_E3_,_AR_E4_,_END_,
	_T_,_e_,_z_,_l_,_a_,_t_,_i_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_O_,_D_,_END_,//_UKRAINE_SUPPORT
};


BYTE code tsOSD_AUTO_POWERDOWN[] =
{
    _O_,_f_,_f_,___,_T_,_i_,_m_,_e_,_r_,_END_,
	_M_,_i_,_n_,_u_,_t_,_DOT_,_d_,_e2_,_s_,_a_,_c_,_t_,_END_,
	_T_,_e_,_m_,_p_,_DOT_,_A_,_p_,_a_,_g_,_a_,_d_,_o_,_END_,
	_D_,_e_,_s_,_l_,_DOT_,_T_,_e_,_m_,_p_,_o_,_r_,_i_,_z_,_DOT_,_END_,
	_A_,_b_,_s_,_c_,_h_,_a_,_l_,_t_,_t_,_i_,_m_,_e_,_r_,_END_,
	_T_,_i_,_m_,_e_,_r_,_ ,_s_,_p_,_e_,_g_,_n_,_i_,_m_,_DOT_,_END_,
	_U_,_i_,_t_,_BLANK_1,_t_,_i_ ,_m_,_e_,_r_,_END_,
	_A_,_v_,_s_,_t_,_a3_,_n_ ,_g_,_n_,_DOT_,_t_,_i_,_m_,_e_,_r_,_END_,	
	_S_,_a_,_m_,_m_,_DOT_,_A_ ,_j_,_a_,_s_,_t_,_i_,_u_,_s_,_END_,	
	_T_,_i_,_m_,_e_,_r_,_  ,_w_,_y_,_l10_,_z_,_a_,_s_,_i_,_l_,_END_,
	_C1_,_a_,_s_,_o_,_v_,_a_,_C1_,_v_,_y_,_p_,_DOT_,_END_,
	
   	_EY_T_C5,_EY_AX_A0,_EY_NSX_B4,_EY_MX_BA,_EY_EX_AA,_EY_PX_C2,_EY_BX_A4,_EY_XBX_DA,_EY_KX_B6,_EY_PAIX_B8,_END_,	//俄语	定时关机	
	_HY_AE_,_HY_AF_,_,_HY_4B_,_HY_4C_,_END_,//_HY_97_,_HY_98_,_HY_7C_,_HY_51_,_,_HY_68_,_HY_69_,_END_,
	
	
	_FT_ding_4F_,_FT_shi_66,_FT_guan_72,_FT_ji_94,_END_,
	_CH_DING_52,_CH_SHI_69,_CH_GUAN_75,_CH_JI_8F,_END_,		//?òì?		?¨ê±1??ú
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_79,_JA_7a,_JA_c2,_JA_c3,_JA_7e,_JA_7f,_END_,
#else
	_JA_7e,_JA_7f,_JA_88,_JA_6a,_JA_a3,_JA_61,_END_,
#endif

	_X_,_57,_o_,_4c,_4b,_54,_4d, _,_54,_pai_,_4a,_5d,_53,_4b,_52,_o_,_END_,
	_I_,_d_,_o4_,_z_,_i2_,_t_,_e_,_t_,_t_,_,_l_,_e_,_a2_,_l_,_l_,_i2_,_t_,_a2_,_s_,_END_,
	_Z_,_a_,_m_,_a_,_n_,_l_,_a_,_n_,_m_,_I10_,_s7_,_ ,_k_,_a_,_p_,_a_,_t_,_m_,_a_,_END_,
	
	_H_,_x6d_,_n_,_,_g_,_i_,_x65_,_,_t_,_x50_,_t_,_END_,
	_x50_,_x4c_,_x48_,_x51_,_,_x5a_,_x53_,_x50_,_x50_,_x4f_,_END_,
	_AR_BA_,_AR_BB_,_AR_BC_,_AR_BD_,_AR_BE_,_AR_BF_,_AR_C0_,_AR_C1_,_AR_C2_,_AR_C3_,_AR_C4_,_END_,
	_O_,_HARD_SIGN_F3,_c_,_h_,_i_,_r_,_i_,_s_,_h_,_,_t_,_a_,_y_,_m_,_e_,_r_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_T_C5,_EY_AX_A0,_EY_NSX_B4,_EY_MX_BA,_EY_EX_AA,_EY_PX_C2,_,_EY_BX_A4,_EY_NX_B2,_EY_MX_BA,_EY_KX_B6,_EY_HX_BC,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT

	
};

#if 1//(_OSD_POWER_SAVING_MODE)
#if 1//(Project_ID == ID_MC_HK2795E05_1DP2HDMI_M250HAN01_A_4LAN_HBR2_FHD240HZ_20220516)||(Project_ID == ID_MC_HK2795E05_1DP2HDMI_M250HAN01_3_8LAN_HBR2_FHD240HZ_20220517)

BYTE code tsOSD_POWERSAVING[] =
{
	_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
		_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
   	
	
	_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,	 		//俄语		
	_HY_AE_,_HY_71_,_HY_77_,_HY_78_,_END_,
	
	_FT_jie_AB,_FT_dian_5B,_FT_mo_57,_FT_shi_58,_END_,
	_CH_jie_AB,_CH_DIAN_5E,_CH_MO_5A,_CH_SHI_5B,_END_,		//节电模式
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_c8,_JA_c9,_JA_ad,_END_,
#else
	_JA_be,_JA_bc,_JA_ad,_END_,
#endif
	_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
	_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
	_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
	_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
	_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
	
	0xEA,_E_,_n_,_e_,_r_,_g_,_y_,_,_S_,_a_,_v_,_e_,_END_,
	
	_E_,_n_,_e_,_r_,_g_,_i_,_y_,_a_,_,_T_,_e_,_j_,_a_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_E_A9,_EY_HX_BC,_EY_EX_AA,_EY_PX_C2,_EY_GZX_A6,_EY_OX_BE,_EY_3X_B0,_EY_6X_A2,_EY_EX_AA,_EY_PX_C2,_EY_EX_AA,_EY_ZZX_AE,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT
};
#else
BYTE code tsOSD_POWERSAVING[] =
{
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
   	
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,  		//俄语		
	_HY_AE_,_HY_71_,_HY_77_,_HY_78_,_END_,
	
	_FT_jie_AB,_FT_dian_5B,_FT_mo_57,_FT_shi_58,_END_,
	_CH_jie_AB,_CH_DIAN_5E,_CH_MO_5A,_CH_SHI_5B,_END_,		//节电模式
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_JA_c8,_JA_c9,_JA_ad,_END_,
#else
	_JA_be,_JA_bc,_JA_ad,_END_,
#endif
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	0XEA,_E_,_N_,_E_,_R_,_G_,_Y_,_,_S_,_A_,_V_,_E_,_END_,
	
};
#endif
#endif


BYTE code tsOSD_HOTKEY_RIGHT[] =  
{
	_H_,_o_,_t_,_k_,_e_,_y_,_DOT_,_R_,_i_,_g_,_h_,_t_,_END_,
};



BYTE code tsOSD_HOTKEY_LEFT[] = 
{
	_H_,_o_,_t_,_k_,_e_,_y_,_DOT_,_L_,_e_,_f_,_t_,_END_,
};

BYTE code tsOSD_LOS_TYPE1[] = 
{
	_L_,_o_,_s_,_,_T_,_y_,_p_,_e_,_1_,_END_,
};

BYTE code tsOSD_LOS_TYPE2[] = 
{
	_L_,_o_,_s_,_,_T_,_y_,_p_,_e_,_2_,_END_,
};

BYTE code tsOSD_FLICKER_FREE[] =  
{
	_F_,_l_,_i_,_c_,_k_,_e_,_r_,_,_F_,_r_,_e_,_e_,_END_,
};

#if(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__M270KCJ_K7B_QHD165HZ_279Q3_20210327)\
	||(Project_ID == ID_SHUNWEI_HK27851DP3HDMI__AUO_M270HAN02_2_FHD165HZ__20200521)\
	||(Project_ID == ID_NYC_SHUNWEI_HK27851DP3HDMI__AUO_M270HAN02_2_FHD144HZ__20210203)\
	||(Project_ID == ID_NYC_SW_HK2785E07_1P3H_AUO_M270HAN036_FHD165HZ_20220503)\
	||(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__MV340VWB_N10__20201214)\
	||(Project_ID == ID_SHUNWEI_HK2795E05_1P2H_AUO_M350QVR015_EDP8LAN_WQHD120HZ_20211211)\
	||(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__M270DAN03_0_FHD240HZ__20201211)\
	||(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__COST_SG3151B05_9_FHD240HZ__20200920)\
	||(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__AUO_M270KCJ_K7B_QHD165HZ__20200917)\
	||(ID_SHUNWEI_SG2795_1DP2HDMI1USB__AUO_M270K7B_QHD165HZ_20200608 == Project_ID)\
	||(Project_ID == ID_SHUNWEI_HK2556E06_1P1H_M270HVR013_LVDS_FHD165_20210525)\
	||(Project_ID == ID_SHUNWEI_HK2556E06_1P1H_SG2701B01_8_LVDS_FHD165_20211023)\
	||(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_20210913 && _PROJEC_ID_TYPE==1)\
	||(1==0)


BYTE code tsOSD_MPRT[] =  
{
	_M_,_P_,_R_,_T_,_2_,_END_,
};

#else


BYTE code tsOSD_MPRT[] = 
{
	_M_,_P_,_R_,_T_,_END_,
};


#endif


BYTE code tsOSD_MBRSYNC[] = 
{
	_M_,_B_,_R_,_,_S_,_Y_,_N_,_C_,_END_,
};


BYTE code tsOSD_GAMMA[] = //DAIDING
{
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_a_,_END_,

	_EY_GZX_A6,_EY_AX_A0,_EY_MX_BA,_EY_MX_BA,_EY_AX_A0,_END_,  
		_HY_A7_,_HY_A8_,_END_,
	_FT_GA_9C,_FT_MA_9D,_END_,
	_CH_GA_97,_CH_MA_98,_END_,
		_JA_b0,_JA_5d,_JA_a3,_END_,

	_66,_5b,_52,_52,_4f,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_END_,
	0XEA,_G_,_a_,_m_,_m_,_a_,_END_,
	
	_G_,_a_,_m_,_m_,_a_,_END_,//_UZBEK_SUPPRT
	_EY_GZ_A5,_EY_AX_A0,_EY_MX_BA,_EY_MX_BA,_EY_AX_A0,_END_,//_UKRAINE_SUPPORT
		
};

BYTE code tsOSD_COLOURGAMUT_MODE[] = //DAIDING
{

	_C_,_o_,_l_,_o_,_u_,_r_,_,_G_,_a_,_m_,_u_,_t_,_END_,
	_G_,_a_,_m_,_m_,_e_,_,_d_,_e_,_,_c_,_o_,_u_,_l_,_e_,_u_,_r_,_s_,_END_,
	_G_,_a_,_m_,_a_,_,_d_,_e_,_,_c_,_o_,_l_,_o_,_r_,_e_,_s_,_END_,
	_G_,_a_,_m_,_a_,_,_d_,_e_,_,_c_,_o_,_r_,_e_,_s_,_END_,
	_F_,_a_,_r_,_b_,_s_,_k_,_a_,_l_,_a_,_END_,
	_G_,_a_,_m_,_m_,_a_,_,_d_,_i_,_,_c_,_o_,_l_,_o_,_r_,_i_,_END_,
	_K_,_l_,_e_,_u_,_r_,_e_,_n_,_g_,_a_,_m_,_m_,_a_,_END_,
	_F_,_a3_,_r_,_g_,_s_,_k_,_a_,_l_,_a_,_END_,
	_F_,_a3_,_r_,_g_,_s_,_k_,_a_,_l_,_a_,_END_,
	 _G_,_a_,_m_,_a_,_,_k_,_o_,_l_,_o_,_r_,_4d,_w_,_END_,
	 _B_,_a_,_r_,_e_,_v_,_n_,_y2_,_,_g_,_a_,_m_,_u_,_t_,_END_,
	 
	_EY_UW_CD,_EY_BX_A4,_EY_EX_AA,_EY_TX_C6,_EY_OX_BE,_EY_BX_A4,_EY_AX_A0,_EY_FRX_E0,_,_EY_GZX_A6,_EY_AX_A0,_EY_MX_BA,_EY_MX_BA,_EY_AX_A0,_END_,  
		
	_HY_4D_,_,_HY_A9_,_HY_AA_,_HY_61_,_END_,
	 _FT_se_4E,_FT_YU_9E,_END_,
	 _CH_SE_51,_CH_YU_99,_END_,
#if( Project_ID == _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)
	_JA_4f,_JA_b1,_END_,
#else
	_JA_4f,_JA_57,_JA_b1,_END_,
#endif
	 _X_,_57,_48,_52,_4f,_49,_4b,_54,_86,_,_60,_54,_5b,_52,_4f,_END_,
	 _S_,_z_,_i2_,_n_,_s_,_k_,_a2_,_l_,_a_,_END_,

	 _R_,_e_,_n_,_k_,_,_a_,_r_,_a_,_l_,_I10_,_g1_,_I10_,_END_,
	 
	_G_,_a_,_m_,_,_m_,_x4f_,_u_,_END_,
	_x53_,_x50_,_x56_,_x48_,_x58_,_,_x53_,_x52_,_x5c_,_x4c_,_x55_,_END_,
	_AR_5E_,_AR_5F_,_AR_60_,_AR_61_,_AR_62_,_AR_63_,_AR_64_,_AR_65_,_AR_66_,_AR_67_,_AR_63_,_AR_64_,_END_,
	_R_,_a_,_n_,_g_,_l_,_a_,_r_,_,_g_,_a_,_m_,_u_,_t_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_PAIX_B8,_UA_I_SMALL_F5,_EY_PX_C2,_EY_HX_BC,_EY_AX_A0,_,_EY_GZX_A6,_EY_AX_A0,_EY_MX_BA,_EY_AX_A0,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_SATURATION_MODE[] = //DAIDING
{

	 _S_,_a_,_t_,_u_,_r_,_a_,_t_,_i_,_o_,_n_,_END_,
	 _S_,_a_,_t_,_u_,_r_,_a_,_t_,_i_,_o_,_n_,_END_,
	 _S_,_a_,_t_,_u_,_r_,_a_,_c_,_i_,_o2_,_n_,_END_,
	 _S_,_a_,_t_,_u_,_r_,_a_,_55,_a5_,_o_,_END_,
	 _S_,_a3_,_t_,_t_,_i_,_g_,_u_,_n_,_g_,_END_,
	 _S_,_a_,_t_,_u_,_r_,_a_,_z_,_i_,_o_,_n_,_e_,_END_,
	 _V_,_e_,_r_,_z_,_a_,_d_,_i_,_g_,_i_,_n_,_g_,_END_,
	 _M_,_a3_,_t_,_t_,_n_,_a_,_d_,_END_,
	 _K_,_y_,_l_,_l_,_a2_,_i_,_s_,_y_,_y_,_s_,_END_,
	 _N_,_a_,_s_,_y_,_c_,_e_,_n_,_i_,_e_,_END_,
	 _N_,_a_,_s_,_y_,_c_,_e_,_n_,_i2_,_END_,

#if(_OSD_DX_RUSSIAN_TEXT)
	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_BIX_D8,_EY_CZWX_D4,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_OX_BE,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,
#else
	 _EY_HX_BC,_EY_AX_A0,_EY_CX_C4,_EY_BTX_D6,_I10_,_EY_CZWX_D4,_EY_EX_AA,_EY_HX_BC,_EY_NX_B2,_EY_EX_AA,_END_,  	
#endif

	_HY_AB_,_HY_52_,_HY_47_,_END_,//_HY_AB_,_HY_52_,_END_,	

	 _FT_BAO_9F,_FT_HE_A0,_FT_du_48,_END_,
	 _CH_BAO_9A,_CH_HE_9B,_CH_DU_4B,_END_,
	#if(Project_ID == _ID_SQY_2795E21_N4TA430_VBO_UHD60HZ_20260421)
	 _JA_cd,_JA_ce,_END_,
	#else
	 _JA_b2,_JA_b3,_END_,
    #endif
	 _K_,_o_,_57,_4a,_53,_52,_4d,_55,_END_,

	 _t_,_e_,_l_,_i2_,_t_,_e_,_t_,_t_,_s_,_e2_,_g_,_END_,
	 _d_,_o_,_y_,_m_,_a_,_END_,
	 
	 _x49_,_x4a_,_,_b_,_x6f_,_o_,_,_h_,_x70_,_a_,_END_,
	 _x4b_,_x50_,_x4c_,_x4c_,_x5a_,_END_,
	 _AR_3D_,_AR_3E_,_AR_3F_,_AR_40_,_AR_41_,_END_,
	 _T_,_o_,_HARD_SIGN_F3,_q_,_i_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_H_BB,_EY_AX_A0,_EY_CX_C4,_EY_NX_B2,_EY_LDX_D0,_EY_EX_AA,_EY_HX_BC,_UA_I_SMALL_F5,_EY_CX_C4,_EY_TX_C6,_EY_XBX_DA,_END_,//_UKRAINE_SUPPORT

};

#if(_DEF_GAME_MODE)	

BYTE code tsOSD_OVERCLOCK_MODE[] =
{

	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	0XEA,_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,
	
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,//_UZBEK_SUPPRT
	_G_,_A_,_M_,_E_, _,_M_,_O_,_D_,_E_,_END_,//_UKRAINE_SUPPORT


	};
#else

BYTE code tsOSD_OVERCLOCK_MODE[] =//DAIDING
{
 	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_i_,_n_,_g_,_END_,
	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_i_,_n_,_g_,_END_,
	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_i_,_n_,_g_,_END_,
	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_i_,_n_,_g_,_END_,
	 _U3_,_b_,_e_,_r_,_t_,_a_,_k_,_t_,_e_,_n_,_END_,
 	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_i_,_n_,_g_,_END_,
	 _O_,_v_,_e_,_r_,_k_,_l_,_o_,_k_,_k_,_e_,_n_,_END_,
	 _O3_,_v_,_e_,_r_,_k_,_l_,_o_,_c_,_k_,_n_,_i_,_n_,_g_,_END_,
	 _Y_,_l_,_i_,_k_,_e_,_l_,_l_,_o_,_t_,_u_,_s_,_END_,
	 _P_,_r_,_z_,_e_,_t_,_a_,_k_,_t_,_o_,_w_,_y_,_w_,_a_,_n_,_i_,_e_,_END_,
	 _P_,_r1_,_e_,_t_,_a_,_k_,_t_,_o_,_v_,_a2_,_n_,_i2_,_END_,

	 _EY_P_C1,_EY_AX_A0,_EY_3X_B0,_EY_GZX_A6,_EY_OX_BE,_EY_HX_BC,_END_,	 
	 _HY_AC_,_HY_93_,_,_HY_5E_,_HY_94_,_HY_9D_,_END_,
	//_HY_77_,_HY_94_,_,_HY_5E_,_HY_93_,_HY_94_,_END_,//77,AC,5E,AD,AE
	 _FT_CHAO_A1,_FT_PING_A2,_END_,
	 _CH_CHAO_9C,_CH_PING_9D,_END_,
		 _JA_7e,_JA_61,_JA_90,_JA_61,_JA_a9,_JA_b4,_JA_54,_JA_a9,_END_,

	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_i_,_n_,_g_,_END_,
	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_i_,_n_,_g_,_END_,
	 _O_,_v_,_e_,_r_,_c_,_l_,_o_,_c_,_k_,_END_,
	 
	 _x71_,_p_,_,_x_,_u_,_n_,_g_,_END_,
	 _x59_,_x4c_,_x52_,_x59_,_x5a_,_x48_,_x4c_,_x47_,_END_, 
	 _AR_DC_,_AR_DD_,_AR_DE_,_AR_DF_,_AR_E0_,_AR_E1_,_AR_E2_,_AR_E3_,_AR_E4_,_END_,
	 _O_,_r_,_t_,_i_,_q_,_c_,_h_,_a_,_,_t_,_e_,_z_,_l_,_a_,_s_,_h_,_t_,_i_,_r_,_i_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_EY_OX_BE,_EY_3X_B0,_EY_GZX_A6,_UA_I_SMALL_F5,_EY_HX_BC,_END_,//_UKRAINE_SUPPORT

};

#endif
BYTE code tsOSD_NULL[] =  
{
	_N_,_U_,_L_,_L_,_END_,
};
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
BYTE code tsOSD_LED_TYPE[] =//DAIDING
{
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,

	_EY_OH_DB,_EY_FAIX_CA,_EY_FAIX_CA,_EY_EX_AA,_EY_KX_B6,_EY_TX_C6,_,_EY_OX_BE,_EY_CX_C4,_EY_BX_A4,_EY_EX_AA,_EY_CZWX_D4,_EY_EX_AA,_EY_HX_BC,_EY_NX_B2,_EY_FRX_E0,_END_,	
	_HY_6E_,_HY_57_,_,_HY_9C_,_HY_9A_,_END_,	//	_HY_6E_,_HY_57_,_,_HY_9C_,_HY_9A_,_END_,
	_FT_DENG_A3,_FT_XIAO_A4,_END_,
	_CH_DENG_9E,_CH_XIAO_9F,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,

	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	0XEA,_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,
	
	_R_,_G_,_B_,_,_l_,_i_,_g_,_h_,_t_,_END_,//_UZBEK_SUPPRT
	_EY_MEN_BF,_UA_I_SMALL_F5,_EY_KOUX_A8,_EY_CX_C4,_EY_BX_A4,_UA_I_SMALL_F5,_EY_TX_C6,_EY_KX_B6,_EY_AX_A0,_,_R_,_G_,_B_,_END_,//_UKRAINE_SUPPORT


	
};

#else
BYTE code tsOSD_LED_TYPE[] =//DAIDING
{
	_L_,_i_,_g_,_h_,_t_,_i_,_n_,_g_,_,_E_,_f_,_f_,_e_,_c_,_t_,_END_,
	_E_,_f_,_f_,_e_,_t_,_,_l_,_u_,_m_,_i_,_n_,_e_,_u_,_x_,_END_,
	_E_,_f_,_e_,_c_,_t_,_o_,_,_d_,_e_,_,_i_,_l_,_u_,_m_,_i_,_n_,_a_,_c_,_i_,_o2_,_n_,_END_,
	_E_,_f_,_e_,_i_,_t_,_o_,_,_d_,_e_,_,_I_,_l_,_u_,_m_,_i_,_n_,_a_,_55,_a5_,_o_,_END_,
	_L_,_i_,_c_,_h_,_t_,_e_,_f_,_f_,_e_,_k_,_t_,_END_,
	_E_,_f_,_f_,_e_,_t_,_t_,_o_,_,_l_,_u_,_m_,_i_,_n_,_o_,_s_,_o_,_END_,
	_L_,_i_,_c_,_h_,_t_,_e_,_f_,_f_,_e_,_c_,_t_,_END_,
	_L_,_j_,_u_,_s_,_e_,_f_,_f_,_e_,_k_,_t_,_END_,
	_V_,_a_,_l_,_a_,_i_,_s_,_t_,_u_,_s_,_END_,
	_E_,_f_,_e_,_k_,_t_,_,_s2_,_w_,_i_,_e_,_t_,_l_,_n_,_y_,_END_,
	_S_,_v_,_e1_,_t_,_e_,_l_,_n_,_y2_,_,_e_,_f_,_e_,_k_,_t_,_END_,
	
	_EY_OH_DB,_EY_FAIX_CA,_EY_FAIX_CA,_EY_EX_AA,_EY_KX_B6,_EY_TX_C6,_,_EY_OX_BE,_EY_CX_C4,_EY_BX_A4,_EY_EX_AA,_EY_CZWX_D4,_EY_EX_AA,_EY_HX_BC,_EY_NX_B2,_EY_FRX_E0,_END_,	
		_HY_6E_,_HY_57_,_,_HY_9C_,_HY_9A_,_END_,	//	_HY_6E_,_HY_57_,_,_HY_9C_,_HY_9A_,_END_,
	_FT_DENG_A3,_FT_XIAO_A4,_END_,
	_CH_DENG_9E,_CH_XIAO_9F,_END_,
		_JA_b5,_JA_59,_JA_b6,_JA_b7,_END_,
	_E_,_5a,_62,_,_5a,_48,_49,_4b,_53,_52,_o_,_50,_END_,

	_f_,_e2_,_n_,_y_,_h_,_a_,_t_,_a2_,_s_,_t_,_END_,
	_A_,_y_,_d_,_I10_,_n_,_l_,_a_,_t_,_m_,_a_,_,_e_,_t_,_k_,_i_,_s_,_i_,_END_,
	
	_H_,_i_,_x48_,_u_,_,_x63_,_n_,_g_,_,_x4b_,_n_,_h_,_,_s_,_x4b_,_n_,_g_,_END_,
	_L_,_E_,_D_,_,_x4f_,_x49_,_x57_,_x47_,_END_,
	0XEA,_AR_68_,_AR_69_,_AR_6A_,_AR_6B_,_AR_6C_,_AR_6D_,_AR_6E_,_AR_6F_,_AR_70_,_AR_71_,_END_,
	_Y_,_o_,_r_,_i_,_t_,_i_,_s_,_h_,_,_e_,_f_,_f_,_e_,_k_,_t_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_MEN_BF,_UA_I_SMALL_F5,_EY_KOUX_A8,_EY_CX_C4,_EY_BX_A4,_UA_I_SMALL_F5,_EY_TX_C6,_EY_KX_B6,_EY_AX_A0,_,_R_,_G_,_B_,_END_,//_UKRAINE_SUPPORT

	
};
#endif
BYTE code tsOSD_ARROWS1[] = 
{
	_LEFT_ARROWS_,_END_,
};
BYTE code tsOSD_ARROWS2[] = 
{
	_RIGHT_ARROWS_,_END_,
};
#if (_EOC_ENERGY_SUPPORT == _ON)
BYTE code tsOSD_ECO_ENERGY[] = //ONLY ENGLISH
{
	_e_,_n_,_e_,_r_,_g_,_y_,_,_s_,_t_,_a_,_r_,_END_,	

};
#endif
BYTE code tsOSD_ECO_FPS[] = //ONLY ENGLISH
{
    _F_,_P_,_S_,_END_,	

};
BYTE code tsOSD_ECO_RTS[] = 
{
    _R_,_T_,_S_,_END_,
};

BYTE code tsOSD_ECO_STANDARD[] =
{
    _S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
    _S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_, 
    _E_,_S_,_t_,_a2_,_n_,_d_,_a_,_r_,_END_,
	_P_,_a_,_d_,_r_,_a5_,_o_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_i_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_n_,_i2_,_END_,	

	_EY_C_C3,_EY_TX_C6,_EY_AX_A0,_EY_HX_BC,_EY_KOUX_A8,_EY_AX_A0,_EY_PX_C2,_EY_TX_C6,_END_,	//	俄语		标准
	_HY_7D_,_HY_7E_,_END_,  
	_FT_biao_59,_FT_zhun_5A,_END_,
	_CH_BIAO_5C,_CH_ZHUN_5D,_END_,	//?òì?		±ê×?
	_JA_5f,_JA_88,_JA_5d,_JA_80,_JA_61,_JA_62,_END_,


	
	_T_,_4c,_59,_4b,_54,_4d,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_t_,_END_,
	
	_T_,_i_,_x75_,_u_,_,_c_,_h_,_u_,_x76_,_n_,_END_,
	_x4c_,_x59_,_x5c_,_END_,
	_AR_27_,_AR_28_,_AR_29_,_AR_2A_,_AR_2B_,_END_,
	_S_,_t_,_a_,_n_,_d_,_a_,_r_,_t_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_TX_C6,_EY_AX_A0,_EY_HX_BC,_EY_KOUX_A8,_EY_AX_A0,_EY_PX_C2,_EY_TX_C6,_END_,//_UKRAINE_SUPPORT

	
};

BYTE code tsOSD_ECO_GAME[] =
{
    _G_,_a_,_m_,_e_,_END_,
    _J_,_e_,_u_,_END_,
	_J_,_u_,_e_,_g_,_o_,_END_,
	_G_,_a_,_m_,_e_,_END_,
	_S_,_p_,_i_,_e_,_l_,_END_,
	_G_,_i_,_o_,_c_,_h_,_i_,_END_,
	_S_,_p_,_e_,_l_,_END_,
	_S_,_p_,_e_,_l_,_END_,
	_P_,_e_,_l_,_i_,_END_,
	_G_,_r_,_a_,_END_,
	_H_,_r_,_a_,_END_,

	_EY_N_B1,_EY_GZX_A6,_EY_PX_C2,_EY_AX_A0,_END_,	//俄语	游戏
	_HY_7F_,_HY_80_,_END_,
	_FT_you_5D,_FT_xi_5E,_END_,
	_CH_YOU_60,_CH_XI_61,_END_,		//?òì?		ó??·
	_JA_8b,_JA_61,_JA_8c,_END_,

	_5c,_4f,_4b,_56,_4c,_5d,_61,_4b,_END_,
	_J_,_a2_,_t_,_e2_,_k_,_END_,
	_O_,_y_,_u_,_n_,_END_,
	
	_T_,_r_,_x70_,_,_c_,_h_,_x55_,_i_,_END_,
	_x59_,_x4e_,_x5b_,_x53_,_END_,
	_AR_2C_,_AR_2D_,_AR_2E_,_AR_2F_,_END_,
	_O_,_HARD_SIGN_F3,_y_,_i_,_n_,_END_,//_UZBEK_SUPPRT
	_EY_GZ_A5,_EY_PX_C2,_EY_AX_A0,_END_,//_UKRAINE_SUPPORT

};


BYTE code tsOSD_ECO_MOVIE[] =
{
    _M_,_o_,_v_,_i_,_e_,_END_,
    _f_,_i_,_l_,_m_,_END_,
	_P_,_e_,_l_,_i2_,_c_,_u_,_l_,_a_,_END_,
	_C_,_i_,_n_,_e_,_m_,_a_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_E_,_l_,_o_,_k_,_u_,_v_,_a_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,

	_EY_K_B5,_EY_NXX_DE,_EY_HX_BC,_EY_OX_BE,_END_,
	_HY_6B_,_HY_52_,_END_,
	_FT_dian_5B,_FT_ying_5C,_END_,
	_CH_DIAN_5E,_CH_YING_5F,_END_,		//?òì?		μ?ó°
	_JA_8a,_JA_4b,_END_,

	
	_T_,_4f,_4b,_4c,_5d,_4f,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	
	_P_,_h_,_i_,_m_,_,_x4e_,_n_,_h_,_END_,
	_x4f_,_x5a_,_x55_,_END_,
	_AR_30_,_AR_31_,_AR_32_,_END_,
	
	_K_,_i_,_n_,_o_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_UA_I_SMALL_F5,_EY_HX_BC,_EY_OX_BE,_END_,//_UKRAINE_SUPPORT

};
#if(_DEF_ECO_ICON)
BYTE code tsOSD_ECO_INTERNET[] =
{
    _I_,_n_,_t_,_e_,_r_,_END_,
    _f_,_i_,_l_,_m_,_END_,
	_P_,_e_,_l_,_i2_,_c_,_u_,_l_,_a_,_END_,
	_C_,_i_,_n_,_e_,_m_,_a_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_E_,_l_,_o_,_k_,_u_,_v_,_a_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,

	_EY_K_B5,_EY_NXX_DE,_EY_HX_BC,_EY_OX_BE,_END_,
	_HY_57_,_HY_52_,_END_,
	_FT_dian_5B,_FT_ying_5C,_END_,
	_CH_DIAN_5E,_CH_YING_5F,_END_,		//?òì?		μ?ó°
	_JA_8a,_JA_4b,_END_,
	
	_T_,_4f,_4b,_4c,_5d,_4f,_END_,
	_F_,_i_,_l_,_m_,_END_,
	_F_,_i_,_l_,_m_,_END_,
	
	_I_,_n_,_t_,_e_,_r_,_END_,
	_x4f_,_x54_,_x5a_,_x4f_,_x54_,_x50_,_x47_,_END_,
	0XEA,_I_,_n_,_t_,_e_,_r_,_END_,
	
    _I_,_n_,_t_,_e_,_r_,_END_,	//_UZBEK_SUPPRT
	_UA_I_CAPITAL_F2,_EY_HX_BC,_EY_TX_C6,_EY_EX_AA,_EY_PX_C2,_EY_HX_BC,_EY_EX_AA,_EY_TX_C6,_END_,//_UKRAINE_SUPPORT

};

#endif

BYTE code tsOSD_ECO_TEXT[] =
{
#if(_HONGXIA_OSD)
	_E_,_n_,_e_,_r_,_g_,_y_,_END_,
#else
	_T_,_e_,_x_,_t_,_END_,
#endif
	_T_,_e_,_x_,_t_,_e_,_END_,
	_T_,_e_,_x_,_t_,_o_,_END_,
	_T_,_e_,_x_,_t_,_o_,_END_,
	_T_,_e_,_x_,_t_,_END_,
	_T_,_e_,_s_,_t_,_o_,_END_,
	_T_,_e_,_k_,_s_,_t_,_END_,
	_T_,_e_,_x_,_t_,_END_,
	_T_,_e_,_k_,_s_,_t_,_i_,_END_,
	_T_,_e_,_k_,_s_,_t_,_END_,
	_T_,_e_,_x_,_t_,_END_,
	_EY_T_C5,_EY_EX_AA,_EY_KX_B6,_EY_CX_C4,_EY_TX_C6,_END_,
	_HY_B1_,_HY_B2_,_END_,
	_FT_wen_A7,_FT_ben_A8,_END_,
	_CH_wen_A5,_CH_ben_A6,_END_,	
	_JA_ba,_JA_bb,_JA_5f,_JA_55,_END_,
	_K_,_4a,_5d,_52,_4a,_4c,_o_,_END_,//Κε?μενο	
	_S_,_z_,_o3_,_v_,_e_,_g_,_END_,
	_M_,_e_,_t_,_i_,_n_,_END_,
	
	_V_,_x5b_,_n_,_,_b_,_x4e_,_n_,_END_,
	_x4f_,_x55_,_x51_,_x4f_,_END_,
	_AR_33_,_AR_34_,_AR_35_,_AR_36_,_AR_37_,_END_,
	_M_,_a_,_t_,_n_,_END_,//_UZBEK_SUPPRT
	_EY_T_C5,_EY_EX_AA,_EY_KX_B6,_EY_CX_C4,_EY_TX_C6,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_ON[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _O_,_n_,_END_,
#else
    _O_,_N_,_END_,
#endif
	_M_,_a_,_r_,_DOT_,_END_,
	_E_,_n_,_c_,_e_,_n_,_d_,_DOT_,_END_,
	_L_,_i_,_g_,_a_,_r_,_END_,
	_E_,_i_,_n_,_END_,
	_A_,_t_,_t_,_i_,_v_,_o_,_END_,
	_A_,_a_,_n_,_END_,
	_P_,_a6_,_END_,
	_P_,_a3_,_a3_,_l_,_l_,_e_,_END_,
	_W_,_l10_,_a10_,_c_,_z_,_o_,_n_,_e_,_END_,
	_Z_,_a_,_p_,_n_,_u_,_t_,_o_,_END_,

	
	_EY_B_A3,_EY_KX_B6,_EY_PAIX_B8,_DOT_,_END_,		//开启 
	_HY_81_,_HY_51_,_END_,
	_FT_kai_74,_FT_qi_75,_END_,
	_CH_KAI_77,_CH_QI_78,_END_,		//?òì?		?a??
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_N_,_END_,
#else
	_JA_7e,_JA_5d,_END_,
#endif

	_A_,_4c,_4a,_4c,_4a,_57,_60,_4d,_END_,
	_B_,_e_,_END_,
	_A_,_c7_,_I10_,_k_,_END_,
	
	_B_,_x4c_,_t_,_END_,
	_x4b_,_x47_,_x52_,_x4b_,_END_,
	_AR_23_,_AR_24_,_AR_25_,_AR_26_,_END_,
	_Y_,_o_,_q_,_i_,_l_,_g_,_a_,_n_,_END_,//_UZBEK_SUPPRT
	_EY_Y_C7,_EY_BX_A4,_UA_I_SMALL_F5,_EY_MX_BA,_EY_KX_B6,_EY_HX_BC,_EY_EX_AA,_EY_HX_BC,_EY_OX_BE,_END_,//_UKRAINE_SUPPORT

};
#if(_LED_EFFECT)
BYTE code tsOSD_MODE1[] =
{
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,


	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_FT_mo_57,_FT_shi_58,_1_,_END_,

    _CH_xuan_A9,_CH_cai_AA,_END_,	

	_M_,_o_,_d_,_e_,_l_,_1_,_END_,

	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	0XEA,_M_,_o_,_d_,_e_,_l_,_1_,_END_,
	
	_M_,_o_,_d_,_e_,_l_,_1_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_EY_EX_AA,_EY_ZZX_AE,_EY_NX_B2,_EY_MX_BA,_,_1_,_END_,//_UKRAINE_SUPPORT

};
BYTE code tsOSD_MODE2[] =
{
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,

	
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_FT_mo_57,_FT_shi_58,_2_,_END_,
	//_CH_MO_5A,_CH_SHI_5B,_2_,_END_,		//?òì?		?a??
	_CH_HONG_72,_CH_SE_51,_END_,		//?òì?		?a??

	
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,

	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	0XEA,_M_,_o_,_d_,_e_,_l_,_2_,_END_,
	
	_M_,_o_,_d_,_e_,_l_,_2_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_EY_EX_AA,_EY_ZZX_AE,_EY_NX_B2,_EY_MX_BA,_,_2_,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_MODE3[] =
{
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,

	
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_FT_mo_57,_FT_shi_58,_3_,_END_,
//	_CH_MO_5A,_CH_SHI_5B,_3_,_END_,		//?òì?		?a??

	_CH_LAN_74,_CH_SE_51,_END_,		//?òì?		?a??

	_M_,_o_,_d_,_e_,_l_,_3_,_END_,

	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	0XEA,_M_,_o_,_d_,_e_,_l_,_3_,_END_,
	
	_M_,_o_,_d_,_e_,_l_,_3_,_END_,//_UZBEK_SUPPRT
	_EY_P_C1,_EY_EX_AA,_EY_ZZX_AE,_EY_NX_B2,_EY_MX_BA,_,_3_,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_MODE4[] =
{
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,

	
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_FT_mo_57,_FT_shi_58,_4_,_END_,
//	_CH_MO_5A,_CH_SHI_5B,_4_,_END_,		//?òì?		?a??

        _CH_LV_73,_CH_SE_51,_END_,      //?òì?        ?a??
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,

	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,

	0XEA,_M_,_o_,_d_,_e_,_l_,_4_,_END_,
	
	_M_,_o_,_d_,_e_,_l_,_4_,_END_,	//_UZBEK_SUPPRT
	_EY_P_C1,_EY_EX_AA,_EY_ZZX_AE,_EY_NX_B2,_EY_MX_BA,_,_4_,_END_,//_UKRAINE_SUPPORT

};
#endif
BYTE code tsOSD_FLICKER[] = //DAIDING
{
	_F_,_l_,_i_,_c_,_k_,_e_,_r_,_END_,
	_V_,_a_,_c_,_i_,_l_,_l_,_e_,_r_,_END_,
	_P_,_a_,_r_,_p_,_a_,_d_,_e_,_o_,_END_,
	_T_,_r_,_e_,_m_,_e_,_l_,_u_,_z_,_i_,_r_,_END_,
	_F_,_l_,_a_,_c_,_k_,_e_,_r_,_n_,_END_,
	_S_,_f_,_a_,_r_,_f_,_a_,_l_,_l_,_i_,_o_,_END_,
	_F_,_l_,_i_,_k_,_k_,_e_,_r_,_e_,_n_,_END_,
	_F_,_l_,_i_,_m_,_m_,_e_,_r_,_END_,
	_Y_,_l_,_i_,_k_,_e_,_l_,_l_,_o_,_t_,_u_,_s_,_END_,
	_m_,_i_,_g_,_o_,_c_,_z_,_END_,	
	_B_,_l_,_i_,_k_,_a2_,_END_,
	
	_EY_M_B9,_EY_EX_AA,_EY_PX_C2,_EY_UWX_CE,_EY_AX_A0,_EY_HX_BC,_EY_NX_B2,_EY_EX_AA,_END_,	
	_HY_96_,_HY_92_,_HY_80_,_END_,
	_FT_SHAN_A5,_FT_SHUO_A6,_END_,
	_CH_SHAN_A0,_CH_SHUO_A1,_END_,
		_JA_b8,_JA_b9,_END_,
	_A_,_4c,_4f,_xila_BETE_E5,_o_,_53,_xila_BETE_E5,_86,_4c,_4a,_4b,_END_,

	_V_,_i_,_l_,_l_,_o_,_g_,_END_,
	_Y_,_a_,_n_,_I10_,_p_,_END_,
	
	_N_,_h_,_x5a_,_p_,_,_n_,_h_,_x4b_,_y_,_END_,
	_x4b_,_x4a_,_x50_,_x56_,_x5a_,_END_,
	0XEA,_AR_73_,_AR_74_,_AR_75_,_AR_76_,_AR_77_,_AR_78_,_END_,
	_M_,_i_,_l_,_t_,_i_,_l_,_l_,_a_,_s_,_h_,_END_,//_UZBEK_SUPPRT
	_EY_M_B9,_EY_EX_AA,_EY_PX_C2,_EY_EX_AA,_EY_XX_CC,_EY_TX_C6,_UA_I_SMALL_F5,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_STRING_FLICKER_FREE[] =
{
	_F_,_L_,_I_,_C_,_K_,_E_,_R_,_,_F_,_R_,_E_,_E_,_END_,
};


BYTE code tsGAMMA1_8[] = //ONLY ENGLISH
{
	_1_,_DOT_,_8_,_END_,	
};


BYTE code tsGAMMA2_0[] =
{
	_2_,_DOT_,_0_,_END_,	
	
};

BYTE code tsGAMMA2_2[] =
{
	_2_,_DOT_,_2_,_END_,
		
};

BYTE code tsGAMMA2_4[] =
{
	_2_,_DOT_,_4_,_END_,	
};


BYTE code tsGAMMA2_6[] =
{
	_2_,_DOT_,_6_,_END_,
};

#if 0//(Project_ID==ID_SHUNWEI_HK2556E01_1P2H_AUO_M250HAN01_8_LVDS_FHD165HZ_20211117 && _PROJEC_ID_TYPE==2||Project_ID==ID_MC_HK2556E01_1P2H_AUO_M250HAN01_8_LVDS_FHD165HZ_20211122)||(Project_ID==ID_MC_HK2556E01_1P2H_BOE_DF245FHB_NFO_D940_FHD165HZ_20220329)||(Project_ID==ID_MC_HK2556E01_1P2H_AUO_M270HVR01_0_FHD165HZ_20220406)
BYTE code tsOSD_WEAK[] = //DAIDING
{
	_L_,_o_,_w_,_END_,
	_M_,_e_,_u_,_g_,_l_,_e_,_r_,_END_,
	_B_,_a_,_j_,_a_,_END_,
	_B_,_a_,_i_,_x_,_o_,_END_,
	_N_,_i_,_e_,_d_,_r_,_i_,_g_,_END_,
	_B_,_a_,_s_,_s_,_o_,_END_,
	_L_,_a_,_a_,_g_,_END_,
	_L_,_a6_,_g_,_END_,
	_M_,_a_,_t_,_a_,_l_,_a_,_END_,
	_N_,_i_,_s_,_k_,_i_,_END_,
	_N_,_i2_,_z_,_k_,_y2_,_END_,
	_EY_H_BB,_EY_NX_B2,_EY_3X_B0,_EY_KX_B6,_EY_NX_B2,_EY_NSX_B4,_END_,	
	_HY_B3_,_HY_B4_,_END_,//
	_FT_di_5F,_END_,
	_CH_DI_62,_END_,
	_JA_cb,_END_,
	_X_,_a_,_52,_4e,_pai_,_4d,_55,_END_,
	_A_,_l_,_a_,_c_,_s_,_o_,_n_,_y_,_END_,
	_D_,_u3_,_s7_,_u3_,_k_,_END_,

};

BYTE code tsOSD_MID[] = //DAIDING
{
	_M_,_e_,_d_,_i_,_u_,_m_,_END_,
	_M_,_o_,_y_,_e_,_n_,_END_,
	_M_,_e_,_d_,_i_,_a_,_END_,
	_M_,_e2_,_d_,_i_,_a_,_END_,
	_M_,_i_,_t_,_t_,_e_,_l_,_END_,
	_M_,_e_,_d_,_i_,_o_,_END_,
	_G_,_e_,_m_,_i_,_d_,_d_,_e_,_l_,_d_,_END_,
	_M_,_e_,_d_,_i_,_u_,_m_,_END_,
	_N_,_o_,_r_,_m_,_a_,_a_,_l_,_i_,_END_,
	_S2_E4,_r_,_e_,_d_,_n_,_i_,_END_,
	_S_,_t_,_r1_,_e_,_d_,_n_,_i2_,_END_,

	_EY_C_C3,_EY_PX_C2,_EY_EX_AA,_EY_KOUX_A8,_EY_HX_BC,_EY_FRX_E0,_EY_FRX_E0,_END_,	
	_HY_90_,_HY_9E_,_END_,//
	_FT_zhong_77,_END_,
	_CH_ZHONG_A3,_END_,
	_JA_91,_END_,
	_M_,_62,_49,_57,_4b,_o_,_END_,
	_K_,_o3_,_z_,_e_,_p_,_e_,_s_,_END_,
	_O_,_r_,_t_,_a_,_END_,
		
};

BYTE code tsOSD_STRONG[] = //DAIDING
{
    _H_,_i_,_g_,_h_,_t_,_END_,
	_H_,_i_,_g_,_h_,_t_,_END_,
	_A_,_l_,_t_,_u_,_r_,_a_,_END_,
	
	_H_,_a_,_u_,_e_,_n_,_END_,
	
	_a_,_l_,_t_,_o_,_END_,
	_H_,_o_,_o_,_g_,_t_,_e_,_END_,
	_S_,_t_,_e_,_r_,_k_,_END_,
	_H_,_o3_,_j_,_d_,_END_,
    _K_,_o_,_r_,_k_,_e_,_u_,_s_,_END_,
	_W_,_y_,_s_,_o_,_k_,_o_,_s2_,_c2_,_END_,
	_V_,_y2_,_s1_,_k_,_a_,_END_,
	_EY_B_A3,_EY_BX_A4,_I10_,_EY_CX_C4,_EY_OX_BE,_EY_TX_C6,_EY_AX_A0,_END_,	
	_HY_B5_,_HY_48_,_END_,//

	_FT_gao_AC,_END_,
	_CH_gao_AC,_END_,
	_JA_cc,_END_,
//
	_Y_,_5a,_4e,_pai_,_4d,_55,_END_,
	_M_,_a_,_g_,_a_,_s_,_s_,_a2_,_g_,_END_,
	_Y_,_u3_,_k_,_s_,_e_,_k_,_l_,_i_,_k_,_END_,
};

#else
BYTE code tsOSD_WEAK[] = //DAIDING
{
    _W_,_e_,_a_,_k_,_END_,
    _F_,_a_,_i_,_b_,_l_,_e_,_END_,
	_D_,_e2_,_b_,_i_,_l_,_END_,
	_F_,_r_,_a_,_c_,_a_,_END_,
	_S_,_c_,_h_,_w_,_a_,_c_,_h_,_END_,
    _D_,_e_,_b_,_o_,_l_,_e_,_END_,
    _Z_,_w_,_a_,_k_,_END_,
	_S_,_v_,_a_,_g_,_END_,
	_H_,_e_,_i_,_k_,_k_,_o_,_END_,
	_S_,_l10_,_a_,_b_,_y_,_END_,
    _S_,_l_,_a_,_b_,_e2_,_END_,
    
	_EY_H_BB,_EY_NX_B2,_EY_3X_B0,_EY_KX_B6,_EY_AX_A0,_EY_FRX_E0,_END_,	
		_HY_91_,_HY_7A_,_HY_7F_,_END_,//
	_FT_ruo_76,_END_,
	_CH_RUO_A2,_END_,
		_JA_7c,_END_,

    _A_,_61,_50,_4c,_4f,_52,_o_,_END_,
    _G_,_y_,_e_,_n_,_g_,_e_,_END_,
	_Z_,_a_,_y_,_I10_,_f_,_END_,
	
	_Y_,_x47_,_u_,_END_,
	_x5b_,_x52_,_x4e_,_END_,
	0XEA,_AR_79_,_AR_7A_,_AR_7B_,_AR_7C_,_END_,
	_Z_,_a_,_i_,_f_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_PAIX_B8,_EY_AX_A0,_EY_6X_A2,_EY_KX_B6,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT
	
};

BYTE code tsOSD_MID[] = //DAIDING
{
    _M_,_e_,_d_,_i_,_u_,_m_,_END_,
	_M_,_o_,_y_,_e_,_n_,_END_,
	_M_,_e_,_d_,_i_,_a_,_END_,
	_M_,_e2_,_d_,_i_,_a_,_END_,
	_M_,_i_,_t_,_t_,_e_,_l_,_END_,
    _M_,_e_,_d_,_i_,_o_,_END_,
	_G_,_e_,_m_,_i_,_d_,_d_,_e_,_l_,_d_,_END_,
	_M_,_e_,_d_,_i_,_u_,_m_,_END_,
	_N_,_o_,_r_,_m_,_a_,_a_,_l_,_i_,_END_,
	_S2_E4,_r_,_e_,_d_,_n_,_i_,_END_,
    _S_,_t_,_r1_,_e_,_d_,_n_,_i2_,_END_,
    
	_EY_C_C3,_EY_PX_C2,_EY_EX_AA,_EY_KOUX_A8,_EY_HX_BC,_EY_FRX_E0,_EY_FRX_E0,_END_,	
	_HY_90_,_HY_9E_,_END_,//
	_FT_zhong_77,_END_,
	_CH_ZHONG_A3,_END_,
	_JA_91,_END_,

   _M_,_62,_49,_57,_4b,_o_,_END_,
	_K_,_o3_,_z_,_e_,_p_,_e_,_s_,_END_,
	_O_,_r_,_t_,_a_,_END_,
	
	_T_,_r_,_u_,_n_,_g_,_,_b_,_x4d_,_n_,_h_,_END_,	
	_x50_,_x54_,_x4c_,_x54_,_x50_,_x48_,_END_,
	0XEA,_AR_7D_,_AR_7E_,_AR_7F_,_AR_80_,_AR_81_,_AR_82_,_AR_83_,_AR_84_,_AR_85_,_AR_86_,_END_,
	_O_,_HARD_SIGN_F3,_r_,_t_,_a_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_EX_AA,_EY_PX_C2,_EY_EX_AA,_EY_KOUX_A8,_EY_HX_BC,_UA_I_SMALL_F5,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT
};


BYTE code tsOSD_STRONG[] = //DAIDING
{
    _S_,_t_,_r_,_o_,_n_,_g_,_END_,
	_F_,_o_,_r_,_t_,_END_,
	_I_,_n_,_t_,_e_,_n_,_s_,_a_,_END_,
	_F_,_o_,_r_,_t_,_e_,_END_,
	
	_S_,_t_,_a_,_r_,_k_,_END_,
	
	_F_,_o_,_r_,_t_,_e_,_END_,
	_S_,_t_,_e_,_r_,_k_,_END_,
		_S_,_t_,_a_,_r_,_k_,_END_,
    _V_,_o_,_i_,_m_,_a_,_k_,_a_,_s_,_END_,
	_V_,_o_,_i_,_m_,_a_,_k_,_a_,_s_,_END_,
	_S_,_i_,_l_,_n_,_e2_,_END_,
			_EY_B_A3,_EY_BTX_D6,_I10_,_EY_CX_C4,_EY_OX_BE,_EY_KX_B6,_EY_AX_A0,_EY_FRX_E0,_END_,	
	_HY_86_,_HY_7A_,_HY_7F_,_END_,//

	_FT_qiang_78,_END_,
	_CH_QIANG_A4,_END_,
	_JA_7d,_END_,

	_I_,_53,_56,_5f,_57,_4d,_END_,
	_E_,_r_,_o4_,_s_,_END_,
	_G_,_u3_,_55,_l_,_u3_,_END_,
	
	_M_,_x51_,_n_,_h_,_END_,
	_x59_,_x4d_,_x4e_,_END_,
	0XEA,_AR_87_,_AR_88_,_AR_89_,_END_,
	_K_,_u_,_c_,_h_,_l_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_C_C3,_EY_NX_B2,_EY_PAIX_B8,_EY_XBX_DA,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT
};
#endif

BYTE code tsOSD_OFF[] =
{
#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _O_,_f_,_f_,_END_,
#else
    _O_,_F_,_F_,_END_,
#endif
    _A_,_r_,_r_,_DOT_,_END_,
	_A_,_p_,_a_,_g_,_DOT_,_END_,
	_D_,_e_,_s_,_l_,_i_,_g_,_a_,_r_,_END_,
	_A_,_u_,_s_,_END_,
	_D_,_i_,_s_,_a_,_t_,_DOT_,_END_,
	_U_,_i_,_t_,_END_,
	_A_,_v_,_END_,
	_P_,_o_,_i_,_s_, _,_P_,_a3_,_a3_,_l_,_t_,_a3_,_END_,
	_W_,_y_,_l10_,_a10_, _c_,_z_,_o_,_n_,_e_,_END_,
	_V_,_y_,_p_,_n_,_u_,_t_,_o_,_END_,

	_EY_B_A3,_EY_BIX_D8,_EY_KX_B6,_EY_PAIX_B8,_DOT_,_END_,	//关闭
	_HY_7C_,_HY_51_,_END_,
	_FT_guan_72,_FT_bi_73,_END_,
	_CH_GUAN_75,_CH_BI_76,_END_,	//?òì?		1?±?
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_O_,_F_,_F_,_END_,
#else
	_JA_7e,_JA_7f,_END_,

#endif

	_E_,_4c,_4a,_57,_60,_4d,_END_,
	_K_,_i_,_END_,
	_K_,_a_,_p_,_a_,_l_,_I10_,_END_,
	
	_T_,_x50_,_t_,_END_,
	_x50_,_x4c_,_x48_,_x51_,_END_,
	_AR_4E_,_AR_4F_,_AR_50_,_AR_51_,_END_,
	_O_,_HARD_SIGN_F3,_c_,_h_,_i_,_r_,_i_,_l_,_g_,_a_,_n_,_END_,//_UZBEK_SUPPRT
	_EY_B_A3,_EY_NX_B2,_EY_MX_BA,_EY_KX_B6,_EY_HX_BC,_EY_EX_AA,_EY_HX_BC,_EY_OX_BE,_END_,//_UKRAINE_SUPPORT

};

BYTE code tsOSD_AUTO[] = //DAIDING
{
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_A_,_U_,_T_,_O_,_END_,
#else
	_A_,_u_,_t_,_o_,_END_,
#endif
	_A_,_u_,_t_,_o_,_END_,
	_A_,_u_,_t_,_o_,_END_,
	_A_,_u_,_t_,_o_,_m_,_END_,
	_A_,_u_,_t_,_o_,_END_,
	_A_,_u_,_t_,_o_,_m_,_END_,
	_A_,_u_,_t_,_o_,_END_,
	_A_,_u_,_t_,_o_,_END_,
	_A_,_u_,_t_,_o_,_END_,
	_A_,_u_,_t_,_o_,_m_,_END_,
	_A_,_u_,_t_,_o_,_END_,
	
	_EY_A_9F,_EY_BX_A4,_EY_TX_C6,_EY_OX_BE,_END_,	
	
#if 1
#if 0
(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH180HZ_20210106)\
	||(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_M315HVR010_FDH200HZ_20210608)\
	||(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH200HZ_20210324)\
	||(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270HCA_L7B_FHD165HZ_20201228)\
	||(Project_ID == ID_HHT_HK2556E06_1P1H_INN_M270HCA_L7B_FHD165HZ_20210222)\
	||(Project_ID == ID_HHT_HK2556E06_1P1H_AUO_M270HVR01_FHD165_20210302)\
	||(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270KCJ_L5Z_QHD75HZ_20210126)\
	||(Project_ID == ID_HHT_HK2556E02_1P1H_INN_M270HCA_P7B_FHD165HZ_20210127)\
	||(Project_ID == ID_HHT_HK2556E06_1P1H_LG_LM270WQ5_SSA1_QHD60HZ_20210308)\
	||(Project_ID == ID_HHT_HK2556E06_1P1H_INN_M270KCJ_L5E_QHD75HZ_20210120)\
	||(Project_ID == ID_SHUNWEI_HK2556E01_1P2H_AUO_M270HAN032_EDP4LAN_FHD165HZ_20210913 && _PROJEC_ID_TYPE==1)
#endif

	_A_,_u_,_t_,_o_,_END_,
#else
	_HY_6C_,_HY_6D_,_END_,//
#endif
	_FT_zi_6A,_FT_dong_84,_END_,
	_CH_ZI_6D,_CH_DONG_86,_END_,

#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_A_,_U_,_T_,_O_,_END_,
#else
	_JA_79,_JA_7a,_END_,
#endif
	_4f,_5f,_49,_4d,_52,_4f,_49,_o_,_END_,
	_a_,_u_,_t_,_o_,_m_,_a_,_t_,_a_,_END_,
	_o_,_t_,_o_,_m_,_a_,_t_,_i_,_k_,_END_,
	
	_T_,_x53_,_,_x58_,_x4a_,_n_,_g_,_END_,
	_x50_,_x4f_,_x53_,_x4c_,_x4f_,_x4c_,_x47_,_END_,
	_AR_52_,_AR_53_,_AR_54_,_AR_55_,_AR_56_,_END_,
	_A_,_v_,_t_,_o_,_END_,//_UZBEK_SUPPRT
	_A_,_U_,_T_,_O_,_END_,//_UKRAINE_SUPPORT
};



BYTE code	tsOSD_ASPECT_WIDE[]=
{
	_W_,_i_,_d_,_e_,_END_,
	_L_,_a_,_r_,_g_,_e_,_u_,_r_,_END_,
	_A_,_n_,_c_,_h_,_o_,_END_,
	_W_,_i_,_d_,_e_,_s_,_c_,_r_,_e_,_e_,_n_,_END_,
	_B_,_r_,_e_,_i_,_t_,_END_,
	_W_,_i_,_d_,_e_,_s_,_c_,_r_,_e_,_e_,_n_,_END_,
	_B_,_r_,_e_,_e_,_d_,_b_,_e_,_e_,_l_,_d_,_END_,
	_B_,_r_,_e_,_d_,_END_,
	_L_,_e_,_v_,_e_,_a3_,_END_,
	_S_,_z_,_e_,_r_,_o_,_k_,_i_,_END_,
	_S1_,_i_,_r_,_o_,_k_,_o_,_u2_,_h_,_l_,_y2_,_END_,
	
	_EY_CZ_D1,_EY_NX_B2,_EY_PX_C2,_EY_OX_BE,_EY_KX_B6,_EY_NX_B2,_EY_NSX_B4,_END_,	//宽屏
	_HY_83_,_HY_48_,_HY_78_,_END_,
	_FT_kuan_79,_FT_ping_7A,_END_,
	_CH_KUAN_7B,_CH_PIN_7C,_END_,	//?òì?		?í?á
	_JA_7b,_JA_6a,_JA_62,_END_,

	_E_,_5f,_57,_4a,_5d,_4f,_END_,
	_S_,_z_,_e2_,_l_,_e_,_s_,_END_,
	_G_,_e_,_n_,_i_,_s7_,_END_,
	
	_R_,_x4a_,_n_,_g_,_END_,
	_x48_,_x4b_,_x5a_,_END_,
	0XEA,_AR_8A_,_AR_8B_,_AR_8C_,_AR_8D_,_AR_8E_,_AR_8F_,_AR_90_,_AR_91_,_AR_92_,_AR_93_,_END_,
	_K_,_e_,_n_,_g_,_END_,//_UZBEK_SUPPRT
	_EY_CZ_D1,_EY_NX_B2,_EY_PX_C2,_EY_OX_BE,_EY_KX_B6,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT


};

BYTE code tsOSD_ASPECT_43[]=  //ONLY ENGLISH 
{
	_4_,_COLON_,_3_,_END_,
};

BYTE code tsOSD_ASPECT_16_9[]=  //ONLY ENGLISH 
{
	_1_,_6_,_COLON_,_9_,_END_,
};

BYTE code tsOSD_ASPECT_21_9[]=  //ONLY ENGLISH 
{
	_2_,_1_,_COLON_,_9_,_END_,
};


BYTE code tsOSD_7500[] =
{

#if(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)

    _S_,_t_,_a_,_n_,_d_,_a_,_r_,_d_,_END_,
#else
    _N_,_o_,_r_,_m_,_a_,_l_,_END_,
#endif
	_N_,_o_,_r_,_m_,_a_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_e_,_END_,
	_N_,_o_,_r_,_m_,_a_,_a_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_a_,_l_,_i_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_n_,_i2_,_END_,
	_N_,_o_,_r_,_m_,_a2_,_l_,_n_,_e_,_END_,
	
	_EY_H_BB,_EY_OX_BE,_EY_PX_C2,_EY_MX_BA,_EY_AX_A0,_EY_PAIX_B8,_EY_XBX_DA,_EY_HX_BC,_EY_BIX_D8,_EY_NSX_B4,_END_,	//正常

	
	_HY_7D_,_HY_7E_,_END_,//_HY_51_,_HY_82_,_HY_4D_,_END_,
	//_FT_zhengd_7B,_FT_chang_7C,_FT_se_4E,_END_,
	//_CH_ZHENG_7D,_CH_CHANG_7E,_END_,	//?òì?		?y3￡
#if(Project_ID ==ID_SONGREN_HK2513E01_1V1H_ST215B042_20210329)||(Project_ID ==ID_SONGREN_HK2513E01_1V1H_SG2381B01_20210129)
	_FT_zhengd_7B,_FT_chang_7C,_FT_se_4E,_END_,	
	_CH_ZHENG_7D,_CH_CHANG_7E,_END_,
#else
	_FT_biao_59,_FT_zhun_5A,_END_,
	_CH_BIAO_5C,_CH_ZHUN_5D,_END_,	//?òì?		±ê×?
#endif
	_JA_a7,_JA_61,_JA_a3,_JA_93,_END_,

       _K_,_4f,_4c,_o_,_4c,_4b,_54,_4d,_END_,
	_N_,_o_,_r_,_m_,_a2_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_END_,
	_N_,_o_,_r_,_m_,_a_,_l_,_END_,
	_x52_,_x50_,_x49_,_x5a_,_END_,
	0XEA,_AR_94_,_AR_95_,_AR_96_,_AR_97_,_AR_98_,_AR_99_,_AR_9A_,_END_,
	_O_,_d_,_d_,_i_,_y_,_END_,//_UZBEK_SUPPRT
	_EY_H_BB,_EY_OX_BE,_EY_PX_C2,_EY_MX_BA,_EY_AX_A0,_EY_PAIX_B8,_EY_XBX_DA,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT

};



BYTE code tsOSD_5800[] =//ONLY ENGLISH 
{
	_5_,_8_,_0_,_0_,_END_,
   
};

BYTE code tsOSD_COOL[] =
{

    _C_,_o_,_o_,_l_,_END_,
	_F_,_r_,_o_,_i_,_d_,_END_,
	_F_,_r_,_i2_,_o_,_END_,
	_F_,_r_,_i_,_a_,_END_,
	_K_,_u3_,_h_,_l_,_END_,
	_F_,_r_,_e_,_d_,_d_,_o_,_END_,
	_K_,_o_,_e_,_l_,_END_,
	_K_,_a_,_l_,_l_,_END_,
	_K_,_y_,_l_,_m_,_a3_,_END_,
	_Z_,_i_,_m_,_n_,_e_,_END_,
	_S_,_t_,_u_,_d_,_e_,_n_,_e2_,_END_,
	
	_EY_X_CB,_EY_OX_BE,_EY_PAIX_B8,_EY_OX_BE,_EY_KOUX_A8,_EY_HX_BC,_EY_BIX_D8,_EY_NSX_B4,_END_,	//冷色
	 _HY_84_,_HY_54_,_HY_A4_,_END_,//_HY_84_,_HY_54_,_HY_85_,_HY_4D_,_END_,

	_FT_leng_6D,_FT_se_4E,_FT_wen_6B,_END_,
	_CH_LEN_70,_CH_SE_51,_END_,		//?òì?		à?é?
	_JA_97,_JA_4f,_END_,


	
	_65,_5f,_56,_57,_4d,_END_,
	_H_,_i_,_d_,_e_,_g_,_END_,
	_S_,_e_,_r_,_i_,_n_,_END_,
	_M_,_x4f_,_u_,_,_L_,_x51_,_n_,_h_,_END_,
	_x5a_,_x50_,_x5a_,_x59_,_END_,
	_AR_75_,_AR_76_,_AR_77_,_AR_78_,_END_,
	_Z_,_o_,_HARD_SIGN_F3,_r_,_END_,//_UZBEK_SUPPRT
	_EY_X_CB,_EY_OX_BE,_EY_PAIX_B8,_EY_OX_BE,_EY_KOUX_A8,_EY_HX_BC,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT
	

};

BYTE code tsOSD_WARM[] =
{

    _W_,_a_,_r_,_m_,_END_,
    _C_,_h_,_a_,_u_,_d_,_END_,
	_C_,_a2_,_l_,_i_,_d_,_o_,_END_,
	_Q_,_u_,_e_,_n_,_t_,_e_,_END_,
	_W_,_a_,_r_,_m_,_END_,
	_C_,_a_,_l_,_d_,_o_,_END_,
	_W_,_a_,_r_,_m_,_END_,
	_V_,_a_,_r_,_m_,_END_,
	_L_,_a3_,_m_,_m_,_i_,_n_,_END_,
	_C_,_i_,_e_,_p_,_l10_,_e_,_END_,
	_T_,_e_,_p_,_l_,_e2_,_END_,

	_EY_T_C5,_EY_EDX_AC,_EY_MENX_C0,_EY_PAIX_B8,_EY_BIX_D8,_EY_NSX_B4,_END_,	//暖色
	
	_HY_87_,_HY_88_,_HY_B0_,_END_,//	_HY_87_,_HY_88_,_HY_7B_,_HY_4D_,_END_,

	_FT_nuan_6C,_FT_se_4E,_FT_wen_6B,_END_,
	_CH_NUAN_6F,_CH_SE_51,_END_,	//?òì?		?ˉé?
	_JA_6e,_JA_4f,_END_,

	_64,_4a,_57,_52,_4d,_END_,
	_M_,_e_,_l_,_e_,_g_,_END_,
	_S_,_I10_,_c_,_a_,_k_,_END_,
	
	_m_,_x4f_,_u_,_,_x72_,_m_,_END_,
	_x53_,_x4e_,_END_,
	_AR_71_,_AR_72_,_AR_73_,_AR_74_,_END_,
	_I_,_s_,_s_,_i_,_q_,_END_,//_UZBEK_SUPPRT
	_EY_T_C5,_EY_EX_AA,_EY_MENX_C0,_EY_PAIX_B8,_EY_NX_B2,_EY_NSX_B4,_END_,//_UKRAINE_SUPPORT

};


BYTE code tsOSD_USER[] =
{
    _U_,_s_,_e_,_r_,_END_,
	_U_,_t_,_i_,_l_,_i_,_s_,_DOT_,_END_,
	_U_,_s_,_u_,_a_,_r_,_i_,_o_,_END_,
		_U_,_s_,_u_,_a2_,_r_,_i_,_o_,_END_,
	_A_,_n_,_w_,_e_,_n_,_d_,_e_,_r_,_END_,
	_U_,_t_,_e_,_n_,_t_,_e_,_END_,
	_G_,_e_,_b_,_r_,_DOT_,_END_,
	_A_,_n_,_v_,_a3_,_n_,_d_,_a_,_r_,_e_,_END_, 
	_K_,_a3_,_y_,_t_,_t_,_a3_,_j_,_a3_,_END_,
	_U_,_z10_,_y_,_t_,_k_,_o_,_w_,_n_,_i_,_k_,_a_,_END_, 
	_V_,_l_,_a_,_s_,_t_,_n_,_i2_,_END_, 
	
	_EY_MEN_BF,_EY_OX_BE,_EY_PAIX_B8,_EY_XBX_DA,_EY_3X_B0,_EY_OX_BE,_EY_BX_A4,_DOT_,_END_,	//用户设定

	  _HY_8A_,_HY_8B_,_HY_6C_,_END_,//_HY_8A_,_HY_8B_,_HY_6C_,_HY_4D_,_END_,
	_FT_shi_7D,_FT_yong_91,_FT_leng_6E,_FT_she_4B,_FT_ding_4F_,_END_,
	_CH_YONG_7F,_CH_HU_71,_CH_SHE_4E,_CH_DING_52,_END_,		//?òì?	ó??§éè?¨
	_JA_6f,_JA_61,_JA_a8,_JA_61,_JA_50,_JA_51,_END_,


	
	_56,_57,_86,_53,_49,_4e,_55,_END_, 
	_F_,_e_,_l_,_h_,_a_,_s_,_z_,_n_,_a2_,_l_,_o2_,_END_, 
	_K_,_u_,_l_,_l_,_a_,_n_,_I10_,_c_,_I10_,_END_,  
	//_N_,_g_,_x54_,_x65_,_i_,_,_s_,_x73_,_,_d_,_x74_,_n_,_g_,_END_,
	
	0x5B,0x53,0x5C,0x5B,0x53,_END_,
	_x5b_,_x53_,_x5c_,_x5b_,_x53_,_END_,
	_AR_79_,_AR_7A_,_AR_7B_,_AR_7C_,_AR_7D_,_AR_7E_,_AR_7F_,_END_,
	_F_,_o_,_y_,_d_,_a_,_l_,_a_,_n_,_u_,_v_,_c_,_h_,_i_,_END_,//_UZBEK_SUPPRT
	_EY_K_B5,_EY_OX_BE,_EY_PX_C2,_EY_NX_B2,_EY_CX_C4,_EY_TX_C6,_EY_YX_C8,_EY_BX_A4,_EY_AX_A0,_EY_LDX_D0,_EY_AX_A0,_END_,//_UKRAINE_SUPPORT
	
};

BYTE code tsOSD_SRGB[] =//ONLY ENGLISH 
{
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	_s_,_R_,_G_,_B_,_END_,
#elif(_OSD_FONT_TYPE==_DEF_OSD_MC_NANFEI)
	_s_,_R_,_G_,_B_,_END_,
#else
	_s_,_R_,_G_,_B_,_END_,
#endif
};

BYTE code tsOSD_ADOBE[] =
{
	_A_,_D_,_O_,_B_,_E_,_END_,
};


BYTE code tsOSD_DCIP3[] =
{
	_D_,_C_,_I_,_BLANK_1,_P_,_3_,_END_,

};



BYTE code tsOSD_10[] =//ONLY ENGLISH 
{
    _1_,_0_,_END_,

};
BYTE code tsOSD_20[] =
{
    _2_,_0_,_END_,

};


BYTE code tsOSD_30[] =
{
    _3_,_0_,_END_,

};


BYTE code tsOSD_40[] =
{
    _4_,_0_,_END_,

};


BYTE code tsOSD_50[] =
{
    _5_,_0_,_END_,

};



BYTE code tsOSD_60[] =
{
    _6_,_0_,_END_,

};

BYTE code tsOSD_120[] =
{
    _1_,_2_,_0_,_END_,

};

BYTE code tsOSD_240[] =
{
    _2_,_4_,_0_,_END_,

};

BYTE code tsOSD_VGA[] =
{
	_V_,_G_,_A_,_END_,
};
BYTE code tsOSD_DVI[] =
{
	_D_,_V_,_I_,_END_,
};
BYTE code tsOSD_HDMI[] =
{
    _H_,_D_,_M_,_I_,_END_,
};
#if(Project_ID == ID_SHUNWEI_HK2795E041DP2HDMI__AUO_M315DVR01_3_QHD165HZ__20200706)||(Project_ID == ID_SHUNWEI_HK2795E051DP2HDMI__COST_SG3151B05_9_FHD240HZ__20200920)||(Project_ID == ID_SHUNWEI_HK25561DP2HDMI_M270DAN09V0_QHD60HZ__20210319)

BYTE code tsOSD_HDMI2[] =
{
    _H_,_D_,_M_,_I_,_1_,_END_,
};

BYTE code tsOSD_HDMI1[] =
{
    _H_,_D_,_M_,_I_,_2_,_END_,
};
#else
BYTE code tsOSD_HDMI1[] =
{
    _H_,_D_,_M_,_I_,_1_,_END_,
};

BYTE code tsOSD_HDMI2[] =
{
    _H_,_D_,_M_,_I_,_2_,_END_,
};

#endif
BYTE code tsOSD_HDMI3[] =
{
    _H_,_D_,_M_,_I_,_3_,_END_,
};

BYTE code tsOSD_HDMI4[] =
{
    _H_,_D_,_M_,_I_,_4_,_END_,
};


BYTE code tsOSD_DP[] =
{
    _D_,_P_,_END_,
};

BYTE code tsOSD_DP1[] =
{
    _D_,_P_,_1_,_END_,
};

BYTE code tsOSD_DP2[] =
{
    _D_,_P_,_2_,_END_,
};

#if(_MHL_SUPPORT==_ON)    
BYTE code tsOSD_MHL[] =
{
    _M_,_H_,_L_,_END_,
};
#endif


//================Language. Page ==============//
BYTE code tsOSD_LANGUAGE_SELECT_ROW1[] =
{
    _E_,_n_,_g_,_l_,_i_,_s_,_h_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW2[] =
{
    _F_,_r_,_a_,_n_,_c7_,_a_,_i_,_s_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW3[] =
{
    _E_,_s_,_p_,_a_,_n5_,_o_,_l_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW4[] =
{
    _P_,_o_,_r_,_t_,_u_,_g_,_u_,_e8_,_s_,_e_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW5[] =
{
    _D_,_e_,_u_,_t_,_s_,_c_,_h_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW6[] =
{
    _I_,_t_,_a_,_l_,_i_,_a_,_n_,_o_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW7[] =
{
    _N_,_e_,_d_,_e_,_r_,_l_,_a_,_n_,_d_,_s_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW8[] =
{
    _S_,_v_,_e_,_n_,_s_,_k_,_a_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW9[] =
{
	_S_,_u_,_o_,_m_,_i_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW10[] =
{
    _P_,_o_,_l_,_s_,_k_,_i_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW11[] =
{
    _C1_,_e_,_s1_,_t_,_i_,_n_,_a_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW12[] =
{
	_P_,_y_,_c_,_DOT_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW13[] =
{
	_KR1_,_KR2_,_KR3_,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW14[] =
{
	_CH_F1_,_CH_F2_,_CH_S3_,_CH_S4_,_END_,    
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW15[] =
{
	_CH_S1_,_CH_S2_,_CH_S3_,_CH_S4_,_END_,    
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW16[] =
{
	_JA1_,_JA2_,_JA3_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW17[] =
{
    _E_,_pai_,_pai_,_4e,_4c,_4b,_54,_5b,_END_,
};
BYTE code tsOSD_LANGUAGE_SELECT_ROW18[] =
{
    _M_,_a_,_g_,_y_,_a_,_r_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW19[] =
{
   _N_,_YN_x5d,_N_,_YN_x5e,_N_,_YN_x5f,_N_,_YN_x60,_N_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW20[] =
{
	_V_,_i_,_YN_E7,_t_,_,_n_,_a_,_m_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW21[] =
{
	_xe8_,_xe9_,_xea_,_xeb_,_END_,
};

BYTE code tsOSD_LANGUAGE_SELECT_ROW22[] =
{
	_xec_,_xed_,_xee_,_xef_,_xf0_,_xf1_,_END_,
};
#if(_UZBEK_SUPPRT)
// O'zbek #if(_UZBEK_SUPPRT)
BYTE code tsOSD_LANGUAGE_SELECT_ROW23[] =
{
	_O_,_HARD_SIGN_F3,_z_,_b_,_e_,_k_,_END_,
};
#else
BYTE code tsOSD_LANGUAGE_SELECT_ROW23[] =
{
	_,_END_,
};
#endif

#if(_UKRAINE_SUPPRT == _ON)
BYTE code tsOSD_LANGUAGE_SELECT_ROW24[] =
{
	_EY_Y_C7,_EY_KX_B6,_EY_PX_C2,_EY_AX_A0,_UA_YI_SMALL_F7,_EY_HX_BC,_EY_CX_C4,_EY_XBX_DA,_EY_KX_B6,_EY_AX_A0,_END_,
};
#else
BYTE code tsOSD_LANGUAGE_SELECT_ROW24[] =
{
	_,_END_,
};
#endif

BYTE code tsOSD_NO_SIGNAL[] =
{
	_N_,_o_,_,_S_,_i_,_g_,_n_,_a_,_l_,_END_,
	_P_,_a_,_s_,_,_S_,_i_,_g_,_n_, _END_,
	_S_,_i_,_n_,_,_S_,_e_,_n5_,_a_,_l_, _END_,
	_S_,_e_,_m_,_,_S_,_i_,_n_,_a_,_l_,_,_d_,_e_,_,_E_,_n_,_t_,_r_,_a_,_d_,_a_, _END_,
	_K_,_e_,_i_,_n_, _,_S_,_i_,_g_,_n_,_a_,_l_,_END_,
	_N_,_e_,_s_,_s_, _u_,_n_,_,_S_,_e_,_g_,_n_,_a_,_l_,_e_,_END_,
	_G_,_e_,_e_,_n_,_,_S_,_i_,_g_,_n_,_END_,
	_S_,_i_,_g_,_n_,_END_,
	_E_,_i_,_,_S_,_i_,_g_,_n_,_a_,_a_,_l_,_i_,_a_,_END_,
    _B_,_r_,_a_,_k_,_,_S_,_y_,_g_,_n_,_a_,_l10_,_u_,_END_,
    _Z1_,_a2_,_d_,_n_,_y2_,_,_S_,_i_,_g_,_n_,_a2_,_l_,_END_,

	_EY_H_BB,_EY_EX_AA,_EY_TX_C6,_,_EY_CX_C4,_EY_NX_B2,_EY_GZX_A6,_EY_HX_BC,_EY_AX_A0,_EY_PAIX_B8,_EY_AX_A0,_END_,	//无信号
	_HY_8C_,_HY_8D_,_,_HY_8E_,_HY_8F_,_END_,
	_FT_wu_8D,_FT_xin_8B,_FT_hao_8C,_END_,
	_CH_WU_90,_CH_XIN_8D,_CH_HAO_8E,_END_,		//?òì?  		?TD?o?
	_JA_75,_JA_8f,_JA_9a,_JA_81,_END_,

    _67,_4a,_4c,_,_5f,_59,_5b,_57,_56,_4a,_4b,_,_53,_86,_52,_4f,_END_,
    _N_,_i_,_n_,_c_,_s_,_,_j_,_e_,_l_,_END_,
    _S_,_i_,_n_,_y_,_a_,_l_,_,_Y_,_o_,_k_,_END_,
    
    _K_,_h_,_x5f_,_n_,_g_,_,_c_,_x77_,_,_t_,_x62_,_n_,_,_h_,_i_,_x48_,_u_,_END_,
    _x5c_,_x4c_,_x47_,_,_x54_,_x50_,_x47_,_END_,
    0XEA,_AR_4B_,_AR_4C_,_AR_4D_,_AR_4E_,_AR_4F_,_AR_50_,_AR_51_,_AR_52_,_AR_53_,_AR_54_,_END_,
    _S_,_i_,_g_,_n_,_a_,_l_,_,_y_,_o_,_HARD_SIGN_F3,_q_,_END_,//_UZBEK_SUPPRT
	_EY_H_BB,_EY_EX_AA,_EY_MX_BA,_EY_AX_A0,_UA_IE_SMALL_F9,_,_EY_C_C3,_EY_NX_B2,_EY_GZX_A6,_EY_HX_BC,_EY_AX_A0,_EY_PAIX_B8,_EY_YX_C8,_END_,//_UKRAINE_SUPPORT
};

BYTE code tsOSD_POWERSAVING1[] =
{
	_P_,_O_,_W_,_E_,_R_,_,_S_,_A_,_V_,_I_,_N_,_G_,_END_,

};
#if(_MENU_INFOR_SHOW_HDR)
BYTE code tsOSD_HDR[] =
{
	_H_,_D_,_R_,_END_,
};
#endif


BYTE code tsOSD_NO_SUPPORT[] =
{
	_I_,_n_,_p_,_u_,_t_,_,_N_,_o_,_t_,_,_S_,_u_,_p_,_p_,_o_,_r_,_t_,_END_,
	_E_,_n_,_t_,_DOT_,_N_,_o_,_n_,_,_S_,_u_,_p_,_p_,_o_,_r_,_t_,_DOT_, _END_,
	_E_,_n_,_t_,_r_,_DOT_,_N_,_o_,_,_A_,_d_,_m_,_DOT_, _END_,
	_E_,_n_,_t_,_r_,_a_,_d_,_a_,_,_N_,_a5_,_o_,_,_S_,_u_,_p_,_o_,_r_,_t_,_a_,_d_,_a_, _END_,
	_N_,_DOT_,_U_,_n_,_t_,_e_,_r_,_s_,_t_,_DOT_,_E_,_i_,_n_,_g_,_DOT_,_END_,
	_I_,_n_,_g_,_r_,_DOT_,_N_,_o_,_n_,_,_S_,_u_,_p_,_p_,_END_,
	_N_,_i_,_e_,_t_,_,_O_,_n_,_d_,_e_,_r_,_s_,_t_,_END_,
	_I_,_n_,_m_,_a_,_t_,_n_,_DOT_,_,_S_,_t_,_o3_,_d_,_s_,_,_E_,_j_,_END_,
	_T_,_u_,_l_,_o_,_a_,_,_e_,_i_,_,_T_,_u_,_e_,_t_,_a_,_END_,
	_W_,_e_,_j_,_s2_,_c_,_i_,_e_,_,_N_,_i_,_e_,_o_,_b_,_s_,_l10_,_u_,_g_,_i_,_w_,_END_,
	_N_,_e_,_p_,_o_,_d_,_p_,_o_,_r_,_DOT_,_V_,_s_,_t_,_u_,_p_,_END_,

	_EY_B_A3,_EY_XX_CC,_EY_OX_BE,_EY_KOUX_A8,_,_EY_HX_BC,_EY_EX_AA,_,_EY_MENX_C0,_EY_OX_BE,_EY_KOUX_A8,_EY_KOUX_A8,_END_,	//输入不支持
	_HY_6F_,_HY_70_,_,_HY_4A_,_HY_98_,_,_HY_99_,_HY_89_,_END_,
	_FT_shu_85,_FT_ru_86,_FT_bu_8E,_FT_bu_8F,_FT_yuan_90,_END_,
	_CH_SHU_87,_CH_RU_88,_CH_BU_46,_CH_ZHI_47,_CH_CHI_48,_END_,		//?òì?		ê?è?2??§3?
	_JA_82,_JA_83,_JA_9b,_JA_69,_JA_9c,_JA_61,_JA_55,_JA_5b,_JA_9d,_JA_9e,_JA_9f,_JA_a1,_JA_bc,_JA_a2,_END_,


	_H_,_,_4a,_5d,_53,_o_,_61,_o_,55,_,_61,_4a,_4c,_,_5f,_59,_o_,_53,_49,_4e,_57,_5d,_63,_4a,_49,_4f,_4b,_END_,
	_B_,_e_,_m_,_e_,_n_,_e_,_t_, _,_n_,_e_,_m_, _,_t_,_a2_,_m_,_o_,_g_,_a_,_t_,_o_,_t_,_t_,_END_,
	_G_,_i_,_r_,_i_,_s7_,_ ,_D_,_e_,_s_, _t_,_e_,_k_,_l_,_e_,_n_,_m_,_i_,_y_,_o_,_r_,_END_,
	
	_x49_,_x6a_,_u_,_,_v_,_x4f_,_o_,_,_k_,_h_,_x5f_,_n_,_g_,_,_x58_,_x54_,_x6c_,_c_,_,_h_,_x78_,_,_t_,_r_,_x6c_,_END_,
	_x4f_,_x52_,_x59_,_,_x47_,_x52_,_,_x5a_,_x4c_,_x59_,_x53_,_END_,
	 0XEA,_AR_5A_,_AR_5B_,_AR_5C_,_AR_5D_,_END_,
	 _K_,_i_,_r_,_i_,_s_,_h_,_,_f_,_o_,_r_,_m_,_a_,_t_,_i_,_,_q_,_o_,_HARD_SIGN_F3,_l_,_l_,_a_,_b_,_BLANK_1,_q_,_u_,_v_,_v_,_a_,_t_,_l_,_a_,_n_,_m_,_a_,_y_,_d_,_i_,_END_,
	_EY_B_A3,_EY_XX_CC,_UA_I_SMALL_F5,_EY_KOUX_A8,_,_EY_HX_BC,_EY_EX_AA,_,_EY_HX_BC,_EY_EX_AA,_,_EY_MENX_C0,_UA_I_SMALL_F5,_EY_KOUX_A8,_EY_TX_C6,_EY_PX_C2,_EY_NX_B2,_EY_MX_BA,_EY_YX_C8,_UA_IE_SMALL_F9,_EY_TX_C6,_EY_XBX_DA,_EY_CX_C4,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT

};



#if(Project_ID == ID_TEST_HK2556MINI_TYPEC_WIFI_EDP60HZ_20200908)
BYTE code tsOSD_TYPEC[] =
{
    _T_,_Y_,_P_,_E_,_C_,_END_,
};


BYTE code tsOSD_LINUX[] =
{
    _L_,_I_,_N_,_U_,_X_,_END_,
};

code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
	tsOSD_TYPEC,tsOSD_HDMI,tsOSD_LINUX,
};
#elif(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E02__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E06__1T1DP1H__eDPVB1)
 BYTE code tsOSD_TYPEC[] =
{
    _T_,_Y_,_P_,_E_,_C_,_END_,
};


code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
	tsOSD_TYPEC,tsOSD_DP,tsOSD_HDMI,
};
#elif(_PCB_TYPE == _RL6432__156PIN__HKMRT2557E03__1T1H1DP_EDP)
 BYTE code tsOSD_TYPEC[] =
{
    _T_,_Y_,_P_,_E_,_C_,_END_,
};


code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
	tsOSD_TYPEC,tsOSD_DP,tsOSD_HDMI,
};
#elif(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2775E05__1T1DP1H__eDPVB1)||(_PCB_TYPE == _RL6449__216PIN__HK_M_RTD2795E20__1T1DP2H__eDPVB1)||(_PCB_TYPE == _RL6432__156PIN__HKMRT2557E17_1T1P1H_LVDS)||(_PCB_TYPE ==  _RL6432__216PIN__HKM_RT2785E19_1T1P1H_LVDS)
BYTE code tsOSD_TYPEC[] =
{
	#if(Project_ID == ID_KAIDI_HK2557E19_MV270QHM_N30_QHD75HZ_20260319)||(Project_ID == ID_KAIDI_HK2785E20_MV315QHM_NX0_QHD75HZ_20260319)
	_T_,_Y_,_P_,_E_,_C_,_END_,
	#else
    _T_,_y_,_p_,_e_,_BLANK_1,_C_,_END_,
    #endif
};
code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
#if(_SOURCE_AUTO_ON)
	tsOSD_AUTO,
#endif
	tsOSD_TYPEC,tsOSD_DP,tsOSD_HDMI,
};
#elif(Project_ID == ID_HHT_2795E06_1T1P1H_M280DCA_E3B_20210330)||(Project_ID == ID_HUIXIONG_CROSSOVER_2795E06_1T1P1H_M350QVR010_VBY_WQHD100HZ_20210427)
BYTE code tsOSD_TYPEC[] =
{
    _T_,_Y_,_P_,_E_,_C_,_END_,
};

code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
	tsOSD_TYPEC,tsOSD_DP,tsOSD_HDMI,
};
#elif 0// 
code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
#if(_SOURCE_AUTO_ON)
	
		tsOSD_AUTO,
#endif
	tsOSD_DP,tsOSD_HDMI2,tsOSD_HDMI1,
};
#elif(Project_ID == ID_DX_2525E01_1A1H_SG2381B011_FHD75HZ_ENGLISH_LOGO_EKO_20221012)
code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
#if(_SOURCE_AUTO_ON)
	
		tsOSD_AUTO,
#endif
	tsOSD_VGA,tsOSD_HDMI2,tsOSD_HDMI1,
};

#else

code BYTE *tOSD_SOURCE_TYPE_STATUS[] =
{
#if(_SOURCE_AUTO_ON)

	tsOSD_AUTO,
#endif
#if(_A0_INPUT_PORT_TYPE == _A0_VGA_PORT)
    tsOSD_VGA,
#endif

#if (_D0_INPUT_PORT_TYPE == _D0_MHL_PORT)    
    tsOSD_MHL,
#elif(_D0_INPUT_PORT_TYPE == _D0_DVI_PORT)
    tsOSD_DVI,
#elif(_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT)&&((_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)||(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)||(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)||(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT))
	tsOSD_HDMI1,
#elif(_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT)
    tsOSD_HDMI,
#elif(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)
	tsOSD_DP1,
#elif(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)&&(_D1_INPUT_PORT_TYPE != _D1_DP_PORT)	
	tsOSD_DP,
#endif

#if (_D1_INPUT_PORT_TYPE == _D1_MHL_PORT)
    tsOSD_MHL,
#elif(_D1_INPUT_PORT_TYPE == _D1_DVI_PORT)
    tsOSD_DVI,
#elif(_D0_INPUT_PORT_TYPE == _D0_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)
	tsOSD_HDMI2,
#elif(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&((_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)||(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)||(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT))
	tsOSD_HDMI1,
#elif(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&((_D2_INPUT_PORT_TYPE != _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT)&&(_D4_INPUT_PORT_TYPE != _D4_HDMI_PORT))
	tsOSD_HDMI,
#elif(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)&&(_D0_INPUT_PORT_TYPE == _D0_DP_PORT)
	tsOSD_DP2,
#elif(_D1_INPUT_PORT_TYPE == _D1_DP_PORT)&&(_D0_INPUT_PORT_TYPE != _D0_DP_PORT)	
	tsOSD_DP,
#endif

#if (_D2_INPUT_PORT_TYPE == _D2_MHL_PORT)
    tsOSD_MHL,
#elif (_D2_INPUT_PORT_TYPE == _D2_DVI_PORT)||(_D2_INPUT_PORT_TYPE==_D2_DUAL_DVI_PORT)
    tsOSD_DVI,
#elif(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)
    tsOSD_HDMI2,
#elif(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&((_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)||(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT))
	tsOSD_HDMI1,   
#elif(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&((_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT)&&(_D4_INPUT_PORT_TYPE != _D4_HDMI_PORT))
	tsOSD_HDMI,   
#elif (_D2_INPUT_PORT_TYPE == _D2_DP_PORT)
    tsOSD_DP,
#endif

#if (_D3_INPUT_PORT_TYPE == _D3_MHL_PORT)
    tsOSD_MHL,
#elif(_D3_INPUT_PORT_TYPE == _D3_DVI_PORT)||(_D3_INPUT_PORT_TYPE==_D3_DUAL_DVI_PORT)
    tsOSD_DVI,
#elif(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)
	tsOSD_HDMI3,
#elif(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE != _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)
	tsOSD_HDMI2,
#elif(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE != _D2_HDMI_PORT)
	tsOSD_HDMI2,
#elif(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)
	tsOSD_HDMI1,
#elif(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)&&(_D4_INPUT_PORT_TYPE != _D4_HDMI_PORT)
	tsOSD_HDMI,
	
#endif

#if (_D4_INPUT_PORT_TYPE == _D4_MHL_PORT)
    tsOSD_MHL,
#elif(_D4_INPUT_PORT_TYPE == _D4_DVI_PORT)||(_D4_INPUT_PORT_TYPE==_D4_DUAL_DVI_PORT)
    tsOSD_DVI,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)
    tsOSD_HDMI4,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE != _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)   
	tsOSD_HDMI3,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE != _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)   
	tsOSD_HDMI3,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT)   
	tsOSD_HDMI3,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE != _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE != _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE == _D3_HDMI_PORT)   
	tsOSD_HDMI2,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE == _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE != _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT)   
	tsOSD_HDMI2,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE != _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE == _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT)   
	tsOSD_HDMI2,
#elif(_D4_INPUT_PORT_TYPE == _D4_HDMI_PORT)&&(_D1_INPUT_PORT_TYPE != _D1_HDMI_PORT)&&(_D2_INPUT_PORT_TYPE != _D2_HDMI_PORT)&&(_D3_INPUT_PORT_TYPE != _D3_HDMI_PORT)   
	tsOSD_HDMI,
	
#endif



#if (_D5_INPUT_PORT_TYPE == _D5_MHL_PORT)
    tsOSD_MHL,
#elif(_D5_INPUT_PORT_TYPE == _D5_DVI_PORT)
    tsOSD_DVI,
#elif(_D5_INPUT_PORT_TYPE == _D5_HDMI_PORT)
    tsOSD_HDMI,
#endif

#if (_D6_INPUT_PORT_TYPE == _D6_DP_PORT)
    tsOSD_DP,
#endif
};


#endif




code BYTE *tOSD_SLEEP_ON_OFF_TABLE[] =
{
	tsOSD_OFF,tsOSD_10,tsOSD_20,tsOSD_30,tsOSD_40,tsOSD_50,tsOSD_60,tsOSD_120,tsOSD_240,
};



code BYTE *tOSD_CT_STATUS[] =
{
    tsOSD_COOL,
    tsOSD_7500,
    tsOSD_WARM, 
    tsOSD_5800,  
    tsOSD_SRGB,
    tsOSD_USER,
};
code BYTE *tsOSD_ASPECT_STATUS[] =
{
#if(Project_ID == ID_SHUNWEI_HK2513E02_1V1H__CC240PV1D_FHD60HZ__20200805)
	tsOSD_ASPECT_16_9,tsOSD_ASPECT_43,tsOSD_ASPECT_WIDE,tsOSD_ASPECT_21_9,
#else
	tsOSD_ASPECT_WIDE,tsOSD_ASPECT_43,tsOSD_ASPECT_16_9,tsOSD_ASPECT_21_9,
#endif
};

/*
code BYTE *tsOSD_ASPECT_STATUS[] =
{
	tsOSD_ASPECT_WIDE,tsOSD_ASPECT_43,tsOSD_AUTO,
};*/


code BYTE *tOSD_HDR_STATUS[] =
{

		tsOSD_OFF,
#if(Project_ID != _ID_XY_2313BRE01_PN238CS02_2_FHD100HZ_20260730)
		tsOSD_AUTO,
#endif		
		tsOSD_ON,


};

#if(_ROTATE_FUN_SUPPORT)

BYTE code tsOSD_0[] =//ONLY ENGLISH 
{
    _0_,_END_,
};
BYTE code tsOSD_180[] =//ONLY ENGLISH 
{
    _1_,_8_,_0_,_END_,
};
BYTE code tsOSD_270[] =//ONLY ENGLISH 
{
    _2_,_7_,_0_,_END_,
};
BYTE code tsOSD_90[] =//ONLY ENGLISH 
{
    _9_,_0_,_END_,
};


code BYTE *tsOSD_osdRotate_STATUS[] =
{
	tsOSD_OFF,tsOSD_90,tsOSD_270,tsOSD_180,//_OSD_ROTATE_DEGREE_0
};
#endif

#if _DEF_KVM_FUN
BYTE code tsOSD_KVM[] =
{
	_K_,_V_,_M_,_END_,
/*		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,
		_K_,_V_,_M_,_END_,*/
		
};
BYTE code tsOSD_PC[] =
{
	_P_,_C_,_END_,
};
BYTE code tsOSD_TYPEC1[] =
{
    _T_,_Y_,_P_,_E_,_C_,_END_,
};


code BYTE *tsOSD_KVM_OPTION[] =
{
	tsOSD_AUTO,tsOSD_PC,tsOSD_TYPEC1,
};

#endif

code BYTE *tsOSD_ON_OFF_STATUS[] =
{
	tsOSD_OFF,tsOSD_ON,
};

code BYTE *tsOSD_RZQ_STATUS[] =
{
	tsOSD_OFF,tsOSD_WEAK,tsOSD_MID,tsOSD_STRONG
};


code BYTE *tsOSD_GAMMA_STATUS[] =
{
	tsOSD_OFF,tsGAMMA1_8,tsGAMMA2_0,tsGAMMA2_2,tsGAMMA2_4,tsGAMMA2_6,
};


code BYTE *tsOSD_COLORGAMUT_STATUS[] =
{
	tsOSD_SRGB,
	tsOSD_ADOBE,
	tsOSD_DCIP3,
    tsOSD_OFF,
};
#if(_DEF_DX_LED_MODE)
code BYTE *tsOSD_LED_STATUS[] =
{
	tsOSD_OFF,tsOSD_SPECTRUM,tsOSD_RED,tsOSD_GREEN,tsOSD_BLUE,tsOSD_GYAN,tsOSD_PURPLE,tsOSD_YELLOW,
};

#elif(_DEF_DX_LED_MODE2)||(_DEF_DX_LED_MODE3)
code BYTE *tsOSD_LED_STATUS[] =
{
	tsOSD_OFF,tsOSD_SPECTRUM,tsOSD_Marquee,tsOSD_Rotate,
};


#elif(_LED_EFFECT)
code BYTE *tsOSD_LED_STATUS[] =
{
	tsOSD_OFF,tsOSD_MODE1,tsOSD_MODE2,tsOSD_MODE3,tsOSD_MODE4,
};


#else

code BYTE *tsOSD_LED_STATUS[] =
{
	tsOSD_OFF,tsOSD_ON,tsOSD_FLICKER,
};

#endif

code BYTE *tsOSD_ECO_STATUS[] =
{
	tsOSD_ECO_STANDARD,
	tsOSD_ECO_GAME,
#if (Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH180HZ_20210106)||(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH200HZ_20210324)
	tsOSD_ECO_FPS,
	tsOSD_ECO_RTS,
	tsOSD_ECO_MOVIE,
	tsOSD_ECO_TEXT,
#else
	tsOSD_ECO_MOVIE,
	tsOSD_ECO_TEXT,
#if (_EOC_ENERGY_SUPPORT == _ON)
	tsOSD_ECO_ENERGY,
#endif
	tsOSD_ECO_FPS,
	tsOSD_ECO_RTS,
#endif
};



code BYTE *tOSD_ARROW_TABLE[] =
{
    tsOSD_ARROWS1,
    tsOSD_ARROWS2,
};

code BYTE *tOSD_MENU_TITLE_TABLE[] =
{
    tsOSD_BRI,
    tsOSD_IMAGE,
    tsOSD_CT_TITLE,
    tsOSD_OSDSETTING,
    tsOSD_RESET,
    tsOSD_MISC, 
    tsOSD_LANGUAGE,
};

/*
code BYTE *tsOSD_HOTKEY_TYPE[] =
{
    tsOSD_BRIGHTNESS,
    tsOSD_CONTRAST,
    tsOSD_BLACKLEVEL,
    tsOSD_SHARPNESS,
    tsOSD_ECO,
    tsOSD_DCR,
    tsOSD_HDR_MODE,

	tsOSD_BLACKLEVEL,
    tsOSD_H_POSITION,
    tsOSD_V_POSITION,
    tsOSD_PIXEL_CLOCK,
    tsOSD_PHASE,    
    tsOSD_ASPECT,

    tsOSD_CT,
    tsOSD_RED,
    tsOSD_GREEN,
    tsOSD_BLUE,  

    
    tsOSD_LANGUAGE,

#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	tsOSD_OSD_H_POSITION,
	tsOSD_OSD_V_POSITION,
#else
	tsOSD_H_POSITION,
  tsOSD_V_POSITION,

#endif
  
    tsOSD_OSD_TIMER,    
    tsOSD_TRANSPARENCY,

    
    tsOSD_IMAGE_AUTO_ADJUST,
    tsOSD_COLOR_AUTO_ADJUST,
    tsOSD_RESET_PAGE,

    
	tsOSD_SIGNAL_SOURCE,	
	tsOSD_LOW_BLUE,		
	tsOSD_MUTE,
	tsOSD_VOLUME,
	tsOSD_FREESYNC,
	tsOSD_OD_PAGE,
	tsOSD_AUTO_POWERDOWN,
	tsOSD_LED_TYPE,
	tsOSD_FLICKER_FREE,
	tsOSD_MPRT,
	tsOSD_GAMMA,
	tsOSD_COLOURGAMUT_MODE,
	tsOSD_SATURATION_MODE,
	tsOSD_OVERCLOCK_MODE,
#if(_ROTATE_FUN_SUPPORT)
	tsOSD_Rotation,
	tsOSD_OSDRotation,
#endif
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
	tsOSD_MBRSYNC,//_MENU_FUN_MBRSYNC
#endif
	tsOSD_HOTKEY_LEFT,
	tsOSD_HOTKEY_RIGHT,
#if 1//(_OSD_POWER_SAVING_MODE)
	tsOSD_POWERSAVING,
#endif
	tsOSD_NULL,
	tsOSD_LOS_TYPE1,	
	tsOSD_LOS_TYPE2,
	
};
*/



code BYTE *tOSD_STRING_ITEM_TABLE[] =
{
    tsOSD_BRIGHTNESS,
    tsOSD_CONTRAST,
    tsOSD_BLACKLEVEL,
    tsOSD_SHARPNESS,
    tsOSD_ECO,
    tsOSD_DCR,
    tsOSD_HDR_MODE,
	tsOSD_BLACKLEVEL,
    tsOSD_H_POSITION,
    tsOSD_V_POSITION,
    tsOSD_PIXEL_CLOCK,
    tsOSD_PHASE,    
    tsOSD_ASPECT,

    tsOSD_CT,
    tsOSD_RED,
    tsOSD_GREEN,
    tsOSD_BLUE,  

    
    tsOSD_LANGUAGE,
#if(_OSD_FONT_TYPE==_OSD_FONT_SW_JAPANESE)
	tsOSD_OSD_H_POSITION,
	tsOSD_OSD_V_POSITION,
#else
	tsOSD_H_POSITION,
	tsOSD_V_POSITION,

#endif

    tsOSD_OSD_TIMER,    
    tsOSD_TRANSPARENCY,

    
    tsOSD_IMAGE_AUTO_ADJUST,
    tsOSD_COLOR_AUTO_ADJUST,
    tsOSD_RESET_PAGE,

    
#if _DEF_GuangGan_FUN
	tsOSD_GuangGan,//	_MENU_FUN_GunagGan
#endif
	tsOSD_SIGNAL_SOURCE,	
	tsOSD_LOW_BLUE,		
	tsOSD_MUTE,
	tsOSD_VOLUME,
	tsOSD_FREESYNC,
	tsOSD_OD_PAGE,
	tsOSD_AUTO_POWERDOWN,
	tsOSD_LED_TYPE,
	tsOSD_FLICKER_FREE,
	tsOSD_MPRT,	
	tsOSD_GAMMA,
	tsOSD_COLOURGAMUT_MODE,
	tsOSD_SATURATION_MODE,
	tsOSD_OVERCLOCK_MODE,
#if(_ROTATE_FUN_SUPPORT)
	tsOSD_Rotation,
	tsOSD_OSDRotation,
#endif
#if 1//_MOTION_BLUR_REDUCTION_SUPPORT
		tsOSD_MBRSYNC,//_MENU_FUN_MBRSYNC
#endif
	
	tsOSD_HOTKEY_LEFT,
	tsOSD_HOTKEY_RIGHT,

#if 1//(_OSD_POWER_SAVING_MODE)
	tsOSD_POWERSAVING,//_MENU_FUN_POWER_SAVING
#endif
#if _DEF_KVM_FUN
	tsOSD_KVM,//_MENU_FUN_KVM
#endif
	tsOSD_NULL,
	tsOSD_LOS_TYPE1,	
	tsOSD_LOS_TYPE2,
};

code BYTE *tOSD_LANGUAGE_PAGE_TABLE_SUB[] =
{
	#if 0//(Project_ID == ID_CH_HK2556E02DP1HDMI__BOE_MV238QHM_N10_LVDS_QHD75HZ_20210115)
	tsOSD_LANGUAGE_SELECT_ROW1,
	tsOSD_LANGUAGE_SELECT_ROW2,
	tsOSD_LANGUAGE_SELECT_ROW3,
	tsOSD_LANGUAGE_SELECT_ROW4,
	
	tsOSD_LANGUAGE_SELECT_ROW5,
	tsOSD_LANGUAGE_SELECT_ROW6,
	tsOSD_LANGUAGE_SELECT_ROW7,
	
#else
#if _DEF_OSD_LANGUAGE_PAGE_RANK_4x6
	tsOSD_LANGUAGE_SELECT_ROW1,
	tsOSD_LANGUAGE_SELECT_ROW2,
	tsOSD_LANGUAGE_SELECT_ROW3,
	tsOSD_LANGUAGE_SELECT_ROW4,
	tsOSD_LANGUAGE_SELECT_ROW5,
	tsOSD_LANGUAGE_SELECT_ROW6,
	
	tsOSD_LANGUAGE_SELECT_ROW7,
	tsOSD_LANGUAGE_SELECT_ROW8,
	tsOSD_LANGUAGE_SELECT_ROW9,
	tsOSD_LANGUAGE_SELECT_ROW10,
	tsOSD_LANGUAGE_SELECT_ROW11,
	tsOSD_LANGUAGE_SELECT_ROW12,
	
	tsOSD_LANGUAGE_SELECT_ROW13,
	tsOSD_LANGUAGE_SELECT_ROW14,
	tsOSD_LANGUAGE_SELECT_ROW15,
	tsOSD_LANGUAGE_SELECT_ROW16,
	tsOSD_LANGUAGE_SELECT_ROW17,
	tsOSD_LANGUAGE_SELECT_ROW18,
	
	tsOSD_LANGUAGE_SELECT_ROW19,
	tsOSD_LANGUAGE_SELECT_ROW20,
	tsOSD_LANGUAGE_SELECT_ROW21,
	tsOSD_LANGUAGE_SELECT_ROW22,
#if(_UZBEK_SUPPRT)
	tsOSD_LANGUAGE_SELECT_ROW23,
#endif
#if(_UKRAINE_SUPPRT == _ON)
	tsOSD_LANGUAGE_SELECT_ROW24,
#endif

#else
	tsOSD_LANGUAGE_SELECT_ROW1,
	tsOSD_LANGUAGE_SELECT_ROW6,
	tsOSD_LANGUAGE_SELECT_ROW11,
	tsOSD_LANGUAGE_SELECT_ROW16,

	tsOSD_LANGUAGE_SELECT_ROW2,
	tsOSD_LANGUAGE_SELECT_ROW7,
	tsOSD_LANGUAGE_SELECT_ROW12,
	tsOSD_LANGUAGE_SELECT_ROW17,

	tsOSD_LANGUAGE_SELECT_ROW3,
	tsOSD_LANGUAGE_SELECT_ROW8,
	tsOSD_LANGUAGE_SELECT_ROW13,
	tsOSD_LANGUAGE_SELECT_ROW18,

	tsOSD_LANGUAGE_SELECT_ROW4,
	tsOSD_LANGUAGE_SELECT_ROW9,
	tsOSD_LANGUAGE_SELECT_ROW14,
	tsOSD_LANGUAGE_SELECT_ROW19,

	tsOSD_LANGUAGE_SELECT_ROW5,
	tsOSD_LANGUAGE_SELECT_ROW10,
	tsOSD_LANGUAGE_SELECT_ROW15,
	tsOSD_LANGUAGE_SELECT_ROW20,
	tsOSD_LANGUAGE_SELECT_ROW21,
	
#endif
#endif
};


code BYTE *tOSD_LANGUAGE_PAGE_TABLE[] =
{
	tsOSD_LANGUAGE_SELECT_ROW1,
	tsOSD_LANGUAGE_SELECT_ROW2,
	tsOSD_LANGUAGE_SELECT_ROW3,
	tsOSD_LANGUAGE_SELECT_ROW4,
	tsOSD_LANGUAGE_SELECT_ROW5,
	tsOSD_LANGUAGE_SELECT_ROW6,
	tsOSD_LANGUAGE_SELECT_ROW7,
	tsOSD_LANGUAGE_SELECT_ROW8,
	tsOSD_LANGUAGE_SELECT_ROW9,
	tsOSD_LANGUAGE_SELECT_ROW10,
	tsOSD_LANGUAGE_SELECT_ROW11,
	tsOSD_LANGUAGE_SELECT_ROW12,
	tsOSD_LANGUAGE_SELECT_ROW13,
	tsOSD_LANGUAGE_SELECT_ROW14,
	tsOSD_LANGUAGE_SELECT_ROW15,
	tsOSD_LANGUAGE_SELECT_ROW16,
	tsOSD_LANGUAGE_SELECT_ROW17,
	tsOSD_LANGUAGE_SELECT_ROW18,
	tsOSD_LANGUAGE_SELECT_ROW19,
	tsOSD_LANGUAGE_SELECT_ROW20,
	tsOSD_LANGUAGE_SELECT_ROW21,
	tsOSD_LANGUAGE_SELECT_ROW22,
#if(_UZBEK_SUPPRT)
	tsOSD_LANGUAGE_SELECT_ROW23,
#endif
#if(_UKRAINE_SUPPRT == _ON)
	tsOSD_LANGUAGE_SELECT_ROW24,
#endif

	
};
#define LANG_1           	_ON
#define LANG_2            	_ON
#define LANG_3            	_ON
#define LANG_4            	_ON
#define LANG_5            	_ON
#define LANG_6            	_ON
#define LANG_7            	_ON
#define LANG_8            	_ON
#define LANG_9            	_ON
#define LANG_10            	_ON
#define LANG_11            	_ON
#define LANG_12            	_ON
#define LANG_13            	_ON
#define LANG_14            	_ON
#define LANG_15            	_ON
#define LANG_16            	_ON
#define LANG_17            	_ON
#define LANG_18            	_ON
#define LANG_19            	_ON
#define LANG_20            	_ON
#define LANG_21            	_ON
#define LANG_22            	_ON
#define LANG_23            	_ON
#define LANG_24            	_ON



BYTE code tsOSD_WarningMessage[]=
{
#if LANG_1
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_,_M_,_e_,_s_,_s_,_a_,_g_,_e_,_END_,
#endif
#if LANG_2
_M_,_e_,_s_,_s_,_a_,_g_,_e_,_,_d_,_x46_,_a_,_v_,_e_,_r_,_t_,_i_,_s_,_s_,_e_,_m_,_e_,_n_,_t_,_END_,
#endif
#if LANG_3
_M_,_e_,_n_,_s_,_a_,_j_,_e_,_,_d_,_e_,_,_a_,_d_,_v_,_e_,_r_,_t_,_e_,_n_,_c_,_i_,_a_,_END_,
#endif
#if LANG_4
_M_,_e_,_n_,_s_,_a_,_g_,_e_,_m_,_,_d_,_e_,_,_a_,_v_,_i_,_s_,_o_,_END_,
#endif
#if LANG_5
_W_,_a_,_r_,_n_,_m_,_e_,_l_,_d_,_u_,_n_,_g_,_END_,
#endif
#if LANG_6
_M_,_e_,_s_,_s_,_a_,_g_,_g_,_i_,_o_,_,_d_,_i_,_,_a_,_v_,_v_,_i_,_s_,_o_,_END_,
#endif
#if LANG_7
_W_,_a_,_a_,_r_,_s_,_c_,_h_,_u_,_w_,_i_,_n_,_g_,_s_,_b_,_e_,_r_,_i_,_c_,_h_,_t_,_END_,
#endif
#if LANG_8
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_,_M_,_e_,_s_,_s_,_a_,_g_,_e_,_END_,
#endif
#if LANG_9
_V_,_a_,_r_,_o_,_i_,_t_,_u_,_s_,_v_,_i_,_e_,_s_,_t_,_i_,_END_,
#endif
#if LANG_10
_K_,_o_,_m_,_u_,_n_,_i_,_k_,_a_,_t_,_,_o_,_s_,_t_,_r_,_z_,_e_,_x53_,_e_,_n_,_i_,_a_,_END_,
#endif
#if LANG_11
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_,_M_,_e_,_s_,_s_,_a_,_g_,_e_,_END_,
#endif
#if LANG_12
_x57_,_x58_,_x59_,_x5a_,_x5b_,_x5c_,_x58_,_x59_,_x5d_,_x5a_,_x59_,_x5e_,_x5f_,_x59_,_END_,
#endif
#if LANG_13
_x77_,_x78_,_,_x79_,_x7a_,_x7b_,_END_,
#endif
#if LANG_14
_x97_,_x98_,_x99_,_x9a_,_END_,
#endif
#if LANG_15
_x97_,_x98_,_xad_,_x9a_,_END_,
#endif
#if LANG_16
_x97_,_x98_,_xb5_,_xb6_,_xb7_,_xb8_,_xb9_,_END_,
#endif
#if LANG_17
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_,_M_,_e_,_s_,_s_,_a_,_g_,_e_,_END_,
#endif
#if LANG_18
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_,_M_,_e_,_s_,_s_,_a_,_g_,_e_,_END_,
#endif
#if LANG_19
_U_,_y_,_a_,_r_,_x72_,_,_m_,_e_,_s_,_a_,_j_,_x72_,_END_,
#endif
#if LANG_20
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_COLON_,_END_,
#endif
#if LANG_21
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_COLON_,_END_,
#endif
#if LANG_22
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_COLON_,_END_,
#endif
#if LANG_23
_W_,_a_,_r_,_n_,_i_,_n_,_g_,_COLON_,_END_,
#endif
#if LANG_24
_EY_MEN_BF,_EY_OX_BE,_EY_MENX_C0,_EY_EX_AA,_EY_PX_C2,_EY_EX_AA,_EY_KOUX_A8,_EY_ZZX_AE,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_COLON_,_END_,//_UKRAINE_SUPPORT
#endif
};
#if(_MC_EUROPE)
BYTE code tsOSD_WarningMessage1[]=
{
#if LANG_1
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_2
_L_,_a_,_,_c_,_o_,_n_,_s_,_o_,_m_,_m_,_a_,_t_,_i_,_o_,_n_,_,_x47_,_n_,_e_,_r_,_g_,_x47_,_t_,_i_,_q_,_u_,_e_,_,_s_,_e_,_r_,_a_,_,_s_,_a_,_n_,_s_,_,_d_,_o_,_u_,_t_,_e_,_,_a_,_u_,_g_,_m_,_e_,_n_,_t_,_x47_,_e_,_x3f_,_END_,
#endif
#if LANG_3
_E_,_s_,_,_p_,_r_,_o_,_b_,_a_,_b_,_l_,_e_,_,_q_,_u_,_e_,_,_a_,_u_,_m_,_e_,_n_,_t_,_e_,_,_e_,_l_,_,_c_,_o_,_n_,_s_,_u_,_m_,_o_,_,_d_,_e_,_,_e_,_n_,_e_,_r_,_g_,_x49_,_a_,_x3f_,_END_,
#endif
#if LANG_4
_P_,_o_,_d_,_e_,_r_,_x4c_,_,_a_,_u_,_m_,_e_,_n_,_t_,_a_,_r_,_,_o_,_,_c_,_o_,_n_,_s_,_u_,_m_,_o_,_,_d_,_e_,_,_e_,_n_,_e_,_r_,_g_,_i_,_a_,_x3f_,_END_,
#endif
#if LANG_5
_s_,_i_,_c_,_h_,_e_,_r_,_x50_,_,_D_,_a_,_d_,_u_,_r_,_c_,_h_,_,_w_,_i_,_r_,_d_,_,_I_,_h_,_r_,_,_E_,_n_,_e_,_r_,_g_,_i_,_e_,_v_,_e_,_r_,_b_,_r_,_a_,_u_,_c_,_h_,_,_v_,_e_,_r_,_m_,_u_,_t_,_l_,_i_,_c_,_h_,_,_e_,_r_,_h_,_x4f_,_h_,_t_,_x3f_,_END_,
#endif
#if LANG_6
_x52_,_,_p_,_r_,_o_,_b_,_a_,_b_,_i_,_l_,_e_,_,_c_,_h_,_e_,_,_a_,_u_,_m_,_e_,_n_,_t_,_i_,_,_i_,_l_,_,_c_,_o_,_n_,_s_,_u_,_m_,_o_,_,_d_,_i_,_,_e_,_n_,_e_,_r_,_g_,_i_,_a_,_x3f_,_END_,
#endif
#if LANG_7
_H_,_e_,_t_,_,_i_,_s_,_,_w_,_a_,_a_,_r_,_s_,_c_,_h_,_i_,_j_,_n_,_l_,_i_,_j_,_k_,_,_e_,_e_,_n_,_,_t_,_o_,_e_,_n_,_a_,_m_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_i_,_e_,_v_,_e_,_r_,_b_,_r_,_u_,_i_,_k_,_x3f_,_,_END_,
#endif
#if LANG_8
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_9
_S_,_e_,_,_t_,_o_,_d_,_e_,_n_,_n_,_x51_,_k_,_x4f_,_i_,_s_,_e_,_s_,_t_,_i_,_,_l_,_i_,_s_,_x51_,_x51_,_,_e_,_n_,_e_,_r_,_g_,_i_,_a_,_n_,_k_,_u_,_l_,_u_,_t_,_u_,_s_,_t_,_a_,_x3f_,_END_,
#endif
#if LANG_10
_P_,_r_,_a_,_w_,_d_,_o_,_p_,_o_,_d_,_o_,_b_,_n_,_y_,_,_w_,_z_,_r_,_o_,_s_,_t_,_,_z_,_u_,_x53_,_y_,_c_,_i_,_a_,_,_e_,_n_,_e_,_r_,_g_,_i_,_i_,_x3f_,_,_END_,
#endif
#if LANG_11
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_12
_x60_,_x5e_,_x59_,_x58_,_x61_,_x62_,_x5c_,_x62_,_x63_,_x58_,_x59_,_x64_,_x65_,_x59_,_x5e_,_x5f_,_x59_,_x50_,_,_x66_,_x59_,_x58_,_x62_,_x67_,_x63_,_x5e_,_x62_,_x50_,_,_x5b_,_x66_,_x59_,_x65_,_x5f_,_x68_,_x5f_,_x63_,_x69_,_x67_,_x3f_,_END_,
#endif
#if LANG_13
_x7c_,_x7d_,_x7e_,_,_x77_,_x7f_,_,_x80_,_x81_,_x7b_,_,_x82_,_x83_,_x84_,_,_x85_,_x84_,_x86_,_x87_,_x88_,_x3f_,_END_,
#endif
#if LANG_14
_x9b_,_x9c_,_x9d_,_x9e_,_x9f_,_xa0_,_xa1_,_xa2_,_x3f_,_END_,
#endif
#if LANG_15
_x9f_,_x9b_,_x9e_,_x9f_,_xae_,_xa1_,_xa2_,_x3f_,_END_,
#endif
#if LANG_16
_xba_,_xbb_,_xbc_,_xbd_,_xb8_,_xad_,_xbe_,_xbf_,_xc0_,_xc1_,_xc2_,_x9e_,_x9f_,_xc3_,_xbf_,_xc4_,_xc5_,_xc6_,_xc7_,_x3f_,_END_,
#endif
#if LANG_17
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_18
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_19
_E_,_n_,_e_,_r_,_j_,_i_,_,_t_,_x73_,_k_,_e_,_t_,_i_,_m_,_i_,_n_,_d_,_e_,_,_b_,_x73_,_y_,_x73_,_k_,_,_o_,_l_,_a_,_s_,_x72_,_l_,_x72_,_k_,_l_,_a_,_,_a_,_r_,_t_,_x72_,_x74_,_,_o_,_l_,_a_,_c_,_a_,_k_,_t_,_x72_,_r_,_x3f_,_END_,
#endif
#if LANG_20
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_21
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_22
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_23
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_24
_EY_MENX_C0,_EY_OX_BE,_EY_TX_C6,_EY_OX_BE,_EY_LDX_D0,_EY_HX_BC,_EY_AX_A0,_,_EY_OX_BE,_EY_MENX_C0,_EY_EX_AA,_EY_PX_C2,_EY_AX_A0,_EY_UWX_CE,_UA_I_SMALL_F5,_EY_FRX_E0,_,_EY_MENX_C0,_EY_PX_C2,_EY_NX_B2,_EY_3X_B0,_EY_BX_A4,_EY_EX_AA,_EY_KOUX_A8,_EY_EX_AA,_,_EY_KOUX_A8,_EY_OX_BE,_,_EY_3X_B0,_EY_6X_A2,_UA_I_SMALL_F5,_EY_PAIX_B8,_EY_XBX_DA,_EY_CZX_D2,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT
#endif
};

#else
BYTE code tsOSD_WarningMessage1[]=
{
#if LANG_1
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_2
_L_,_a_,_,_c_,_o_,_n_,_s_,_o_,_m_,_m_,_a_,_t_,_i_,_o_,_n_,_,_x47_,_n_,_e_,_r_,_g_,_x47_,_t_,_i_,_q_,_u_,_e_,_,_s_,_e_,_r_,_a_,_,_s_,_a_,_n_,_s_,_,_d_,_o_,_u_,_t_,_e_,_,_a_,_u_,_g_,_m_,_e_,_n_,_t_,_x47_,_e_,_x3f_,_END_,
#endif
#if LANG_3
_E_,_s_,_,_p_,_r_,_o_,_b_,_a_,_b_,_l_,_e_,_,_q_,_u_,_e_,_,_a_,_u_,_m_,_e_,_n_,_t_,_e_,_,_e_,_l_,_,_c_,_o_,_n_,_s_,_u_,_m_,_o_,_,_d_,_e_,_,_e_,_n_,_e_,_r_,_g_,_x49_,_a_,_x3f_,_END_,
#endif
#if LANG_4
_P_,_o_,_d_,_e_,_r_,_x4c_,_,_a_,_u_,_m_,_e_,_n_,_t_,_a_,_r_,_,_o_,_,_c_,_o_,_n_,_s_,_u_,_m_,_o_,_,_d_,_e_,_,_e_,_n_,_e_,_r_,_g_,_i_,_a_,_x3f_,_END_,
#endif
#if LANG_5
_s_,_i_,_c_,_h_,_e_,_r_,_x50_,_,_D_,_a_,_d_,_u_,_r_,_c_,_h_,_,_w_,_i_,_r_,_d_,_,_I_,_h_,_r_,_,_E_,_n_,_e_,_r_,_g_,_i_,_e_,_v_,_e_,_r_,_b_,_r_,_a_,_u_,_c_,_h_,_,_v_,_e_,_r_,_m_,_u_,_t_,_l_,_i_,_c_,_h_,_,_e_,_r_,_h_,_x4f_,_h_,_t_,_x3f_,_END_,
#endif
#if LANG_6
_x52_,_,_p_,_r_,_o_,_b_,_a_,_b_,_i_,_l_,_e_,_,_c_,_h_,_e_,_,_a_,_u_,_m_,_e_,_n_,_t_,_i_,_,_i_,_l_,_,_c_,_o_,_n_,_s_,_u_,_m_,_o_,_,_d_,_i_,_,_e_,_n_,_e_,_r_,_g_,_i_,_a_,_x3f_,_END_,
#endif
#if LANG_7
_H_,_e_,_t_,_,_i_,_s_,_,_w_,_a_,_a_,_r_,_s_,_c_,_h_,_i_,_j_,_n_,_l_,_i_,_j_,_k_,_,_e_,_e_,_n_,_,_t_,_o_,_e_,_n_,_a_,_m_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_i_,_e_,_v_,_e_,_r_,_b_,_r_,_u_,_i_,_k_,_x3f_,_,_END_,
#endif
#if LANG_8
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_9
_S_,_e_,_,_t_,_o_,_d_,_e_,_n_,_n_,_x51_,_k_,_x4f_,_i_,_s_,_e_,_s_,_t_,_i_,_,_l_,_i_,_s_,_x51_,_x51_,_,_e_,_n_,_e_,_r_,_g_,_i_,_a_,_n_,_k_,_u_,_l_,_u_,_t_,_u_,_s_,_t_,_a_,_x3f_,_END_,
#endif
#if LANG_10
_P_,_r_,_a_,_w_,_d_,_o_,_p_,_o_,_d_,_o_,_b_,_n_,_y_,_,_w_,_z_,_r_,_o_,_s_,_t_,_,_z_,_u_,_x53_,_y_,_c_,_i_,_a_,_,_e_,_n_,_e_,_r_,_g_,_i_,_i_,_x3f_,_,_END_,
#endif
#if LANG_11
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_12
_x60_,_x5e_,_x59_,_x58_,_x61_,_x62_,_x5c_,_x62_,_x63_,_x58_,_x59_,_x64_,_x65_,_x59_,_x5e_,_x5f_,_x59_,_x50_,_,_x66_,_x59_,_x58_,_x62_,_x67_,_x63_,_x5e_,_x62_,_x50_,_,_x5b_,_x66_,_x59_,_x65_,_x5f_,_x68_,_x5f_,_x63_,_x69_,_x67_,_x3f_,_END_,
#endif
#if LANG_13
_x7c_,_x7d_,_x7e_,_,_x77_,_x7f_,_,_x80_,_x81_,_x7b_,_,_x82_,_x83_,_x84_,_,_x85_,_x84_,_x86_,_x87_,_x88_,_x3f_,_END_,
#endif
#if LANG_14
_x9b_,_x9c_,_x9d_,_x9e_,_x9f_,_xa0_,_xa1_,_xa2_,_x3f_,_END_,
#endif
#if LANG_15
_x9f_,_x9b_,_x9e_,_x9f_,_xae_,_xa1_,_xa2_,_x3f_,_END_,
#endif
#if LANG_16
_xba_,_xbb_,_xbc_,_xbd_,_xb8_,_xad_,_xbe_,_xbf_,_xc0_,_xc1_,_xc2_,_x9e_,_x9f_,_xc3_,_xbf_,_xc4_,_xc5_,_xc6_,_xc7_,_x3f_,_END_,
#endif
#if LANG_17
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_18
_I_,_t_,_,_w_,_i_,_l_,_l_,_,_b_,_e_,_,_l_,_i_,_k_,_e_,_l_,_y_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_i_,_n_,_,_e_,_n_,_e_,_r_,_g_,_y_,_,_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_x3f_,_END_,
#endif
#if LANG_19
_E_,_n_,_e_,_r_,_j_,_i_,_,_t_,_x73_,_k_,_e_,_t_,_i_,_m_,_i_,_n_,_d_,_e_,_,_b_,_x73_,_y_,_x73_,_k_,_,_o_,_l_,_a_,_s_,_x72_,_l_,_x72_,_k_,_l_,_a_,_,_a_,_r_,_t_,_x72_,_x74_,_,_o_,_l_,_a_,_c_,_a_,_k_,_t_,_x72_,_r_,_x3f_,_END_,
#endif
#if LANG_20
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_21
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_22
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_23
_C_,_u_,_r_,_r_,_e_,_n_,_t_,_,_o_,_p_,_e_,_r_,_a_,_t_,_i_,_o_,_n_,_,_w_,_i_,_l_,_l_,_,_i_,_n_,_c_,_r_,_e_,_a_,_s_,_e_,_,_p_,_r_,_o_,_d_,_u_,_c_,_t_,_,_e_,_n_,_e_,_r_,_g_,_y_,_END_,
#endif
#if LANG_24
_EY_MENX_C0,_EY_OX_BE,_EY_TX_C6,_EY_OX_BE,_EY_LDX_D0,_EY_HX_BC,_EY_AX_A0,_,_EY_OX_BE,_EY_MENX_C0,_EY_EX_AA,_EY_PX_C2,_EY_AX_A0,_EY_UWX_CE,_UA_I_SMALL_F5,_EY_FRX_E0,_,_EY_MENX_C0,_EY_PX_C2,_EY_NX_B2,_EY_3X_B0,_EY_BX_A4,_EY_EX_AA,_EY_KOUX_A8,_EY_EX_AA,_,_EY_KOUX_A8,_EY_OX_BE,_,_EY_3X_B0,_EY_6X_A2,_UA_I_SMALL_F5,_EY_PAIX_B8,_EY_XBX_DA,_EY_CZX_D2,_EY_EX_AA,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_END_,//_UKRAINE_SUPPORT
#endif
};
#endif

#if(_MC_EUROPE)
BYTE code tsOSD_WarningMessage2[]=
{
#if LANG_1
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x41_,_END_,
#endif
#if LANG_2
_V_,_e_,_u_,_i_,_l_,_l_,_e_,_z_,_,_v_,_o_,_u_,_s_,_,_a_,_s_,_s_,_u_,_r_,_e_,_r_,_,_q_,_u_,_e_,_,_v_,_o_,_u_,_s_,_,_s_,_o_,_u_,_h_,_a_,_i_,_t_,_e_,_z_,_,_a_,_c_,_t_,_i_,_v_,_e_,_r_,_,_c_,_e_,_,_p_,_a_,_r_,_a_,_m_,_x48_,_t_,_r_,_e_,_x3f_,_END_,
#endif
#if LANG_3
_A_,_s_,_e_,_g_,_x4a_,_r_,_e_,_s_,_e_,_,_d_,_e_,_,_q_,_u_,_e_,_,_d_,_e_,_s_,_e_,_a_,_,_s_,_e_,_l_,_e_,_c_,_c_,_i_,_o_,_n_,_a_,_r_,_,_e_,_s_,_a_,_,_c_,_o_,_n_,_f_,_i_,_g_,_u_,_r_,_a_,_c_,_i_,_x4b_,_n_,_x3f_,_END_,
#endif
#if LANG_4
_C_,_e_,_r_,_t_,_i_,_f_,_i_,_q_,_u_,_e_,_x45_,_s_,_e_,_,_d_,_e_,_,_q_,_u_,_e_,_,_d_,_e_,_s_,_e_,_j_,_a_,_,_s_,_e_,_l_,_e_,_c_,_i_,_o_,_n_,_a_,_r_,_,_e_,_s_,_s_,_a_,_s_,_,_d_,_e_,_f_,_i_,_n_,_i_,_x4d_,_x4e_,_e_,_s_,_x3f_,_END_,
#endif
#if LANG_5
_S_,_t_,_e_,_l_,_l_,_e_,_n_,_,_S_,_i_,_e_,_,_o_,_b_,_,_S_,_i_,_e_,_,_d_,_i_,_e_,_s_,_e_,_,_E_,_i_,_n_,_s_,_t_,_e_,_l_,_l_,_u_,_n_,_g_,_e_,_n_,_,_w_,_i_,_r_,_k_,_l_,_i_,_c_,_h_,_,_a_,_u_,_s_,_w_,_x51_,_h_,_l_,_e_,_n_,_,_m_,_x4f_,_c_,_h_,_t_,_e_,_n_,_x3f_,_END_,
#endif
#if LANG_6
_A_,_s_,_s_,_i_,_c_,_u_,_r_,_a_,_r_,_s_,_i_,_,_d_,_i_,_,_s_,_e_,_l_,_e_,_z_,_i_,_o_,_n_,_a_,_r_,_e_,_,_q_,_u_,_e_,_l_,_l_,_e_,_,_i_,_m_,_p_,_o_,_s_,_t_,_a_,_z_,_i_,_o_,_n_,_i_,_x3f_,_END_,
#endif
#if LANG_7
_Z_,_o_,_r_,_g_,_,_e_,_r_,_v_,_o_,_o_,_r_,_,_d_,_a_,_t_,_,_u_,_,_d_,_i_,_e_,_,_i_,_n_,_s_,_t_,_e_,_l_,_l_,_i_,_n_,_g_,_,_w_,_i_,_l_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_e_,_r_,_e_,_n_,_x3f_,_END_,
#endif
#if LANG_8
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_9
_V_,_a_,_r_,_m_,_i_,_s_,_t_,_a_,_x50_,_,_e_,_t_,_t_,_x51_,_,_h_,_a_,_l_,_u_,_a_,_t_,_,_v_,_a_,_l_,_i_,_t_,_a_,_,_k_,_y_,_s_,_e_,_i_,_s_,_e_,_n_,_,_a_,_s_,_e_,_t_,_u_,_k_,_s_,_e_,_n_,_x3f_,_END_,
#endif
#if LANG_10
_N_,_a_,_l_,_e_,_x53_,_y_,_,_s_,_i_,_x54_,_,_u_,_p_,_e_,_w_,_n_,_i_,_x55_,_x50_,_,_x53_,_e_,_,_t_,_e_,_,_u_,_s_,_t_,_a_,_w_,_i_,_e_,_n_,_i_,_a_,_,_m_,_a_,_j_,_x56_,_,_b_,_y_,_x55_,_,_w_,_y_,_b_,_r_,_a_,_n_,_e_,_x3f_,_END_,
#endif
#if LANG_11
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_12
_x57_,_x58_,_x62_,_x66_,_x59_,_x58_,_x6a_,_x63_,_x59_,_,_x5e_,_x59_,_x62_,_x64_,_x6b_,_x62_,_x5a_,_x5f_,_x6c_,_x62_,_x69_,_x63_,_x6a_,_,_x66_,_x6d_,_x64_,_x62_,_x58_,_x6e_,_,_x6f_,_x63_,_x5f_,_x6b_,_,_x5e_,_x6e_,_x69_,_x63_,_x58_,_x62_,_x59_,_x70_,_x3f_,_END_,
#endif
#if LANG_13
_x89_,_x8a_,_,_x7c_,_x7d_,_x8b_,_,_x8c_,_x8d_,_x8e_,_,_x8f_,_x90_,_x91_,_x7b_,_,_x92_,_x93_,_x90_,_x94_,_x7a_,_x95_,_x3f_,_END_,
#endif
#if LANG_14
_xa3_,_xa4_,_xa5_,_xa6_,_xa7_,_xa8_,_xa9_,_xaa_,_xab_,_xa5_,_x3f_,_END_,
#endif
#if LANG_15
_xaf_,_xa5_,_xa6_,_xa7_,_xb0_,_xb1_,_xb2_,_xb3_,_xb4_,_x3f_,_END_,
#endif
#if LANG_16
_xc8_,_xc9_,_xca_,_xcb_,_xab_,_xa5_,_xcc_,_xa8_,_xcd_,_xce_,_xcf_,_xd0_,_xd1_,_xd2_,_xd3_,_x3f_,_END_,
#endif
#if LANG_17
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_18
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_19
_B_,_u_,_,_a_,_y_,_a_,_r_,_l_,_a_,_r_,_x72_,_,_s_,_e_,_x4d_,_m_,_e_,_k_,_,_i_,_s_,_t_,_e_,_d_,_i_,_x75_,_i_,_n_,_i_,_z_,_d_,_e_,_n_,_,_e_,_m_,_i_,_n_,_,_o_,_l_,_u_,_n_,_x3f_,_END_,
#endif
#if LANG_20
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_21
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_22
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_23
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_24
_EY_EX_AA,_EY_HX_BC,_EY_EX_AA,_EY_PX_C2,_EY_GZX_A6,_EY_OX_BE,_EY_CX_C4,_EY_MENX_C0,_EY_OX_BE,_EY_ZZX_AE,_EY_NX_B2,_EY_BX_A4,_EY_AX_A0,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_,_EY_TX_C6,_EY_OX_BE,_EY_BX_A4,_EY_AX_A0,_EY_PX_C2,_EY_YX_C8,_DOT_,_,_EY_MEN_BF,_EY_PX_C2,_EY_OX_BE,_EY_KOUX_A8,_EY_OX_BE,_EY_BX_A4,_EY_ZZX_AE,_EY_NX_B2,_EY_TX_C6,_EY_NX_B2,_x3f_,_END_,//_UKRAINE_SUPPORT
#endif
};
#else
BYTE code tsOSD_WarningMessage2[]=
{
#if LANG_1
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_2
_V_,_e_,_u_,_i_,_l_,_l_,_e_,_z_,_,_v_,_o_,_u_,_s_,_,_a_,_s_,_s_,_u_,_r_,_e_,_r_,_,_q_,_u_,_e_,_,_v_,_o_,_u_,_s_,_,_s_,_o_,_u_,_h_,_a_,_i_,_t_,_e_,_z_,_,_a_,_c_,_t_,_i_,_v_,_e_,_r_,_,_c_,_e_,_,_p_,_a_,_r_,_a_,_m_,_x48_,_t_,_r_,_e_,_x3f_,_END_,
#endif
#if LANG_3
_A_,_s_,_e_,_g_,_x4a_,_r_,_e_,_s_,_e_,_,_d_,_e_,_,_q_,_u_,_e_,_,_d_,_e_,_s_,_e_,_a_,_,_s_,_e_,_l_,_e_,_c_,_c_,_i_,_o_,_n_,_a_,_r_,_,_e_,_s_,_a_,_,_c_,_o_,_n_,_f_,_i_,_g_,_u_,_r_,_a_,_c_,_i_,_x4b_,_n_,_x3f_,_END_,
#endif
#if LANG_4
_C_,_e_,_r_,_t_,_i_,_f_,_i_,_q_,_u_,_e_,_x45_,_s_,_e_,_,_d_,_e_,_,_q_,_u_,_e_,_,_d_,_e_,_s_,_e_,_j_,_a_,_,_s_,_e_,_l_,_e_,_c_,_i_,_o_,_n_,_a_,_r_,_,_e_,_s_,_s_,_a_,_s_,_,_d_,_e_,_f_,_i_,_n_,_i_,_x4d_,_x4e_,_e_,_s_,_x3f_,_END_,
#endif
#if LANG_5
_S_,_t_,_e_,_l_,_l_,_e_,_n_,_,_S_,_i_,_e_,_,_o_,_b_,_,_S_,_i_,_e_,_,_d_,_i_,_e_,_s_,_e_,_,_E_,_i_,_n_,_s_,_t_,_e_,_l_,_l_,_u_,_n_,_g_,_e_,_n_,_,_w_,_i_,_r_,_k_,_l_,_i_,_c_,_h_,_,_a_,_u_,_s_,_w_,_x51_,_h_,_l_,_e_,_n_,_,_m_,_x4f_,_c_,_h_,_t_,_e_,_n_,_x3f_,_END_,
#endif
#if LANG_6
_A_,_s_,_s_,_i_,_c_,_u_,_r_,_a_,_r_,_s_,_i_,_,_d_,_i_,_,_s_,_e_,_l_,_e_,_z_,_i_,_o_,_n_,_a_,_r_,_e_,_,_q_,_u_,_e_,_l_,_l_,_e_,_,_i_,_m_,_p_,_o_,_s_,_t_,_a_,_z_,_i_,_o_,_n_,_i_,_x3f_,_END_,
#endif
#if LANG_7
_Z_,_o_,_r_,_g_,_,_e_,_r_,_v_,_o_,_o_,_r_,_,_d_,_a_,_t_,_,_u_,_,_d_,_i_,_e_,_,_i_,_n_,_s_,_t_,_e_,_l_,_l_,_i_,_n_,_g_,_,_w_,_i_,_l_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_e_,_r_,_e_,_n_,_x3f_,_END_,
#endif
#if LANG_8
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_9
_V_,_a_,_r_,_m_,_i_,_s_,_t_,_a_,_x50_,_,_e_,_t_,_t_,_x51_,_,_h_,_a_,_l_,_u_,_a_,_t_,_,_v_,_a_,_l_,_i_,_t_,_a_,_,_k_,_y_,_s_,_e_,_i_,_s_,_e_,_n_,_,_a_,_s_,_e_,_t_,_u_,_k_,_s_,_e_,_n_,_x3f_,_END_,
#endif
#if LANG_10
_N_,_a_,_l_,_e_,_x53_,_y_,_,_s_,_i_,_x54_,_,_u_,_p_,_e_,_w_,_n_,_i_,_x55_,_x50_,_,_x53_,_e_,_,_t_,_e_,_,_u_,_s_,_t_,_a_,_w_,_i_,_e_,_n_,_i_,_a_,_,_m_,_a_,_j_,_x56_,_,_b_,_y_,_x55_,_,_w_,_y_,_b_,_r_,_a_,_n_,_e_,_x3f_,_END_,
#endif
#if LANG_11
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_12
_x57_,_x58_,_x62_,_x66_,_x59_,_x58_,_x6a_,_x63_,_x59_,_,_x5e_,_x59_,_x62_,_x64_,_x6b_,_x62_,_x5a_,_x5f_,_x6c_,_x62_,_x69_,_x63_,_x6a_,_,_x66_,_x6d_,_x64_,_x62_,_x58_,_x6e_,_,_x6f_,_x63_,_x5f_,_x6b_,_,_x5e_,_x6e_,_x69_,_x63_,_x58_,_x62_,_x59_,_x70_,_x3f_,_END_,
#endif
#if LANG_13
_x89_,_x8a_,_,_x7c_,_x7d_,_x8b_,_,_x8c_,_x8d_,_x8e_,_,_x8f_,_x90_,_x91_,_x7b_,_,_x92_,_x93_,_x90_,_x94_,_x7a_,_x95_,_x3f_,_END_,
#endif
#if LANG_14
_xa3_,_xa4_,_xa5_,_xa6_,_xa7_,_xa8_,_xa9_,_xaa_,_xab_,_xa5_,_x3f_,_END_,
#endif
#if LANG_15
_xaf_,_xa5_,_xa6_,_xa7_,_xb0_,_xb1_,_xb2_,_xb3_,_xb4_,_x3f_,_END_,
#endif
#if LANG_16
_xc8_,_xc9_,_xca_,_xcb_,_xab_,_xa5_,_xcc_,_xa8_,_xcd_,_xce_,_xcf_,_xd0_,_xd1_,_xd2_,_xd3_,_x3f_,_END_,
#endif
#if LANG_17
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_18
_B_,_e_,_,_s_,_u_,_r_,_e_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_s_,_e_,_l_,_e_,_c_,_t_,_,_t_,_h_,_a_,_t_,_,_s_,_e_,_t_,_t_,_i_,_n_,_g_,_s_,_x3f_,_END_,
#endif
#if LANG_19
_B_,_u_,_,_a_,_y_,_a_,_r_,_l_,_a_,_r_,_x72_,_,_s_,_e_,_x4d_,_m_,_e_,_k_,_,_i_,_s_,_t_,_e_,_d_,_i_,_x75_,_i_,_n_,_i_,_z_,_d_,_e_,_n_,_,_e_,_m_,_i_,_n_,_,_o_,_l_,_u_,_n_,_x3f_,_END_,
#endif
#if LANG_20
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_21
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_22
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_23
_c_,_o_,_n_,_s_,_u_,_m_,_p_,_t_,_i_,_o_,_n_,_DOT_,_D_,_o_,_,_y_,_o_,_u_,_,_w_,_a_,_n_,_t_,_,_t_,_o_,_,_c_,_o_,_n_,_t_,_i_,_n_,_u_,_e_,_x3f_,_END_,
#endif
#if LANG_24
_EY_EX_AA,_EY_HX_BC,_EY_EX_AA,_EY_PX_C2,_EY_GZX_A6,_EY_OX_BE,_EY_CX_C4,_EY_MENX_C0,_EY_OX_BE,_EY_ZZX_AE,_EY_NX_B2,_EY_BX_A4,_EY_AX_A0,_EY_HX_BC,_EY_HX_BC,_EY_FRX_E0,_,_EY_TX_C6,_EY_OX_BE,_EY_BX_A4,_EY_AX_A0,_EY_PX_C2,_EY_YX_C8,_DOT_,_,_EY_MEN_BF,_EY_PX_C2,_EY_OX_BE,_EY_KOUX_A8,_EY_OX_BE,_EY_BX_A4,_EY_ZZX_AE,_EY_NX_B2,_EY_TX_C6,_EY_NX_B2,_x3f_,_END_,//_UKRAINE_SUPPORT
#endif
};

#endif
BYTE code tsOSD_Cancel[]=
{
#if LANG_1
_C_,_a_,_n_,_c_,_e_,_l_,_END_,
#endif
#if LANG_2
_A_,_n_,_n_,_u_,_l_,_e_,_r_,_END_,
#endif
#if LANG_3
_C_,_a_,_n_,_c_,_e_,_l_,_a_,_r_,_END_,
#endif
#if LANG_4
_C_,_a_,_n_,_c_,_e_,_l_,_a_,_r_,_END_,
#endif
#if LANG_5
_A_,_b_,_b_,_r_,_e_,_c_,_h_,_e_,_n_,_END_,
#endif
#if LANG_6
_A_,_n_,_n_,_u_,_l_,_l_,_a_,_END_,
#endif
#if LANG_7
_A_,_n_,_n_,_u_,_l_,_e_,_r_,_e_,_n_,_END_,
#endif
#if LANG_8
_C_,_a_,_n_,_c_,_e_,_l_,_END_,
#endif
#if LANG_9
_P_,_e_,_r_,_u_,_END_,
#endif
#if LANG_10
_A_,_n_,_u_,_l_,_u_,_j_,_END_,
#endif
#if LANG_11
_C_,_a_,_n_,_c_,_e_,_l_,_END_,
#endif
#if LANG_12
_x71_,_x63_,_x6c_,_x59_,_x5e_,_x6e_,_END_,
#endif
#if LANG_13
_x96_,_x82_,_END_,
#endif
#if LANG_14
_xac_,_xad_,_END_,
#endif
#if LANG_15
_xac_,_xad_,_END_,
#endif
#if LANG_16
_xd4_,_xd5_,_xd6_,_xb7_,_xbc_,_END_,
#endif
#if LANG_17
_C_,_a_,_n_,_c_,_e_,_l_,_END_,
#endif
#if LANG_18
_C_,_a_,_n_,_c_,_e_,_l_,_END_,
#endif
#if LANG_19
_x76_,_p_,_t_,_a_,_l_,_END_,
#endif
#if LANG_20
_N_,_o_,_END_,
#endif
#if LANG_21
_N_,_o_,_END_,
#endif
#if LANG_22
_N_,_o_,_END_,
#endif
#if LANG_23
_N_,_o_,_END_,
#endif
#if LANG_24
_EY_H_BB,_UA_I_SMALL_F5,_END_,//_UKRAINE_SUPPORT
#endif
};

BYTE code tsOSD_OK[]=
{
#if LANG_1
_O_,_K_,_END_,
#endif
#if LANG_2
_O_,_K_,_END_,
#endif
#if LANG_3
_A_,_c_,_e_,_p_,_t_,_a_,_r_,_END_,
#endif
#if LANG_4
_O_,_K_,_END_,
#endif
#if LANG_5
_O_,_K_,_END_,
#endif
#if LANG_6
_O_,_K_,_END_,
#endif
#if LANG_7
_O_,_K_,_END_,
#endif
#if LANG_8
_O_,_K_,_END_,
#endif
#if LANG_9
_O_,_K_,_END_,
#endif
#if LANG_10
_O_,_K_,_END_,
#endif
#if LANG_11
_O_,_K_,_END_,
#endif
#if LANG_12
_O_,_K_,_END_,
#endif
#if LANG_13
_x92_,_x93_,_END_,
#endif
#if LANG_14
_xa4_,_xa5_,_END_,
#endif
#if LANG_15
_xaf_,_xa5_,_END_,
#endif
#if LANG_16
_O_,_K_,_END_,
#endif
#if LANG_17
_O_,_K_,_END_,
#endif
#if LANG_18
_O_,_K_,_END_,
#endif
#if LANG_19
_T_,_a_,_m_,_a_,_m_,_END_,
#endif
#if LANG_20
_Y_,_e_,_s_,_END_,
#endif
#if LANG_21
_Y_,_e_,_s_,_END_,
#endif
#if LANG_22
_Y_,_e_,_s_,_END_,
#endif
#if LANG_23
_Y_,_e_,_s_,_END_,
#endif
#if LANG_24
_EY_T_C5,_EY_AX_A0,_EY_KX_B6,_END_,//_UKRAINE_SUPPORT
#endif
};

code BYTE *tOSD_EnergyMsg_TABLE[] =
{
	tsOSD_WarningMessage,
	tsOSD_WarningMessage1,
	tsOSD_WarningMessage2,
	tsOSD_OK,
	tsOSD_Cancel,
};


#endif // End of #if(_OSD_TYPE == _REALTEK_2014_OSD)

