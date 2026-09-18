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
	
#ifndef _OSD_EXTEND_256_2BIT_FONTS
#define _OSD_EXTEND_256_2BIT_FONTS                  _ENABLE
#endif

//----------------------------------------------------------------------------------------------------
// ID Code      : Logo_define.h No.0001
// Update Note  :
//----------------------------------------------------------------------------------------------------
#if(_LOGO_TYPE == _LOGO_REALTEK)
	#define _LOGO_FG_COLOR                               	_LOGO_CP_BG
	#define _LOGO_BG_COLOR                               	_LOGO_CP_BLUE
	
	#define _LOGO_COL_SIZE									70
	#define _LOGO_ROW_SIZE									10


	#define _LOGO_ROW_START1 								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1 								19 //不是分2段载的logo不需要定义

	#define _LOGO_BG_RED                                  	0
	#define _LOGO_BG_GREEN                               	0
	#define _LOGO_BG_BLUE                                 	0     
#elif(_LOGO_TYPE == _LOGO_MAG)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_BG
	#define _LOGO_BG_COLOR                               	_LOGO_CP_RED
	
	#define _LOGO_COL_SIZE									58
	#define _LOGO_ROW_SIZE									11

	#define _LOGO_BG_RED                                 	0
	#define _LOGO_BG_GREEN                                	0
	#define _LOGO_BG_BLUE                              		0     
#elif(_LOGO_TYPE == _LOGO_TOPUSHENN)
	#define _LOGO_FG_COLOR                               	_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                            		_LOGO_CP_BG
	
	#define _LOGO_COL_SIZE									50
	#define _LOGO_ROW_SIZE									10

	#define _LOGO_BG_RED                               		0
	#define _LOGO_BG_GREEN                            		0
	#define _LOGO_BG_BLUE                                	0                         
#elif(_LOGO_TYPE == _LOGO_CHANGHONG)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1 
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE
					
	#define _LOGO_COL_SIZE									69
	#define _LOGO_ROW_SIZE									8
				
	#define _LOGO_BG_RED									1
	#define _LOGO_BG_GREEN									123
	#define _LOGO_BG_BLUE									188	



#elif(_LOGO_TYPE == _LOGO_ONN)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE  
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE_1     
					
	#define _LOGO_COL_SIZE									77
	#define _LOGO_ROW_SIZE									16
				
	#define _LOGO_BG_RED									51//	 0
	#define _LOGO_BG_GREEN									66//	 0
	#define _LOGO_BG_BLUE									181//	  255	

#elif(_LOGO_TYPE == _LOGO_ASTEX)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE       
					
	#define _LOGO_COL_SIZE									66
	#define _LOGO_ROW_SIZE									15
				
	#define _LOGO_BG_RED									0//	 0
	#define _LOGO_BG_GREEN									0//	 0
	#define _LOGO_BG_BLUE									255//	  255	

#elif(_LOGO_TYPE == _LOGO_HSO)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE     
						
	#define _LOGO_COL_SIZE									50
	#define _LOGO_ROW_SIZE									11
					
	#define _LOGO_BG_RED									255//	 0
	#define _LOGO_BG_GREEN									255//	 0
	#define _LOGO_BG_BLUE									255//	  255	


#elif(_LOGO_TYPE == _LOGO_BRAUMERS)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE     
							
	#define _LOGO_COL_SIZE									79
	#define _LOGO_ROW_SIZE									9
						
	#define _LOGO_BG_RED									255//	 0
	#define _LOGO_BG_GREEN									255//	 0
	#define _LOGO_BG_BLUE									255//	  255	

#elif(_LOGO_TYPE == _LOGO_QNIX)
	#define _LOGO_FG_COLOR									_LOGO_CP_RED  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE     
								
	#define _LOGO_COL_SIZE									71
	#define _LOGO_ROW_SIZE									12
							
	#define _LOGO_BG_RED									255//	 0
	#define _LOGO_BG_GREEN									255//	 0
	#define _LOGO_BG_BLUE									255//	  255	
#elif(_LOGO_TYPE == _LOGO_FMDISPLAY)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE     
								
	#define _LOGO_COL_SIZE									68
	#define _LOGO_ROW_SIZE									10
							
#define _LOGO_BG_RED										255//	 0
	#define _LOGO_BG_GREEN									255//	 0
	#define _LOGO_BG_BLUE									255//	  255	

#elif(_LOGO_TYPE == _LOGO_SONGREN)
	#define _LOGO_FG_COLOR									_CP_BLUE  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE     
							
	#define _LOGO_COL_SIZE									94
	#define _LOGO_ROW_SIZE									13
						
	#define _LOGO_BG_RED									255//	 0
	#define _LOGO_BG_GREEN									255//	 0
	#define _LOGO_BG_BLUE									255//	  255	

	#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1								47 //不是分2段载的logo不需要定义

#elif(_LOGO_TYPE == _LOGO_TIEMU)
	#define _LOGO_FG_COLOR                                  _LOGO_CP_BLACK    
	#define _LOGO_BG_COLOR                              	_LOGO_CP_WHITE   
								
	#define _LOGO_COL_SIZE									21//	30
	#define _LOGO_ROW_SIZE									18//	21
							
	#define _LOGO_BG_RED                                 	0
	#define _LOGO_BG_GREEN                            		0
	#define _LOGO_BG_BLUE                               	0    

#elif(_LOGO_TYPE == _LOGO_3G)
	#define _LOGO_FG_COLOR                               	_LOGO_CP_PINK 
	#define _LOGO_BG_COLOR                             		_LOGO_CP_BG
						
	#define _LOGO_COL_SIZE									31
	#define _LOGO_ROW_SIZE									21
					
	#define _LOGO_BG_RED                                 	255
	#define _LOGO_BG_GREEN                               	255
	#define _LOGO_BG_BLUE									255 						
		
#elif(_LOGO_TYPE == _LOGO_ZORO)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_BG
	#define _LOGO_BG_COLOR                               	_LOGO_CP_WHITE
				
	#define _LOGO_COL_SIZE									65
	#define _LOGO_ROW_SIZE									13
			
	#define _LOGO_BG_RED                                  	255
	#define _LOGO_BG_GREEN                                 	255
	#define _LOGO_BG_BLUE									255 						


#elif(_LOGO_TYPE == _LOGO_HYINGDA)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_BLUE_1//_LOGO_CP_BG
	#define _LOGO_BG_COLOR                               	_LOGO_CP_BG// _LOGO_CP_BLUE_1
		
	#define _LOGO_COL_SIZE									85
	#define _LOGO_ROW_SIZE									9
	
	#define _LOGO_BG_RED                                   	255
	#define _LOGO_BG_GREEN                                 	255
	#define _LOGO_BG_BLUE                                  	255        

#elif(_LOGO_TYPE == _LOGO_BIG_ELECTRIQ)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                                	_LOGO_CP_GRAY

	#define _LOGO_FG_COLOR1									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR1									_LOGO_CP_GRAY
		
		
	#define _LOGO_COL_SIZE									75
	#define _LOGO_ROW_SIZE									11
	
	#define _LOGO_BG_RED                                  	255
	#define _LOGO_BG_GREEN                            		255
	#define _LOGO_BG_BLUE                                	255                         

	#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1								36 //不是分2段载的logo不需要定义


#elif(_LOGO_TYPE == _LOGO_ZYNTECH)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE  
	#define _LOGO_FG_COLOR1									_CP_RED  
	#define _LOGO_FG_COLOR2									_CP_GREEN  
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK
								
	#define _LOGO_COL_SIZE									33
	#define _LOGO_ROW_SIZE									22
							
	#define _LOGO_BG_RED									0//	 0
	#define _LOGO_BG_GREEN									0//	 0
	#define _LOGO_BG_BLUE									0//	  255	
	
#elif(_LOGO_TYPE == _LOGO_TECMIYO)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE  
	#define _LOGO_FG_COLOR1									_CP_BLUE  
	#define _LOGO_FG_COLOR2									_CP_BLUE  
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK
                                    
	#define _LOGO_COL_SIZE									50
	#define _LOGO_ROW_SIZE									11
                                
	#define _LOGO_BG_RED                                    255
	#define _LOGO_BG_GREEN                                  255
	#define _LOGO_BG_BLUE                                   255
#elif(_LOGO_TYPE == _LOGO_JIAMEIWEI)
	#define _LOGO_FG_COLOR                           		_LOGO_CP_BLUE          
	#define _LOGO_BG_COLOR                                  _CP_WHITE     
			
	#define _LOGO_FG_COLOR1									_LOGO_CP_BLUE				
	#define _LOGO_BG_COLOR1									_CP_WHITE	
					
					
	#define _LOGO_COL_SIZE									56
	#define _LOGO_ROW_SIZE									17
				
	#define _LOGO_BG_RED                            		0
	#define _LOGO_BG_GREEN                               	0
	#define _LOGO_BG_BLUE                           		255                    
			
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								28 
	
#elif(_LOGO_TYPE == _LOGO_EFOUND)
	#define _LOGO_FG_COLOR                           		_LOGO_CP_BLUE_1          
	#define _LOGO_BG_COLOR                                  _CP_WHITE     
				
	#define _LOGO_FG_COLOR1									_LOGO_CP_BLUE_1				
	#define _LOGO_BG_COLOR1									_CP_WHITE	
						
						
	#define _LOGO_COL_SIZE									88
	#define _LOGO_ROW_SIZE									15
					
	#define _LOGO_BG_RED                               		255
	#define _LOGO_BG_GREEN                              	255
	#define _LOGO_BG_BLUE                             		255
				
	#define _LOGO_ROW_START1								0 
	#define _LOGO_COL_START1								44
		
#elif(_LOGO_TYPE == _LOGO_RENZHEN)
	#define _LOGO_FG_COLOR                           		_LOGO_CP_BLUE_1          
	#define _LOGO_BG_COLOR                                  _CP_WHITE     
					
	#define _LOGO_FG_COLOR1									_LOGO_CP_BLUE_1				
	#define _LOGO_BG_COLOR1									_CP_WHITE	
							
							
	#define _LOGO_COL_SIZE									64
	#define _LOGO_ROW_SIZE									31
						
	#define _LOGO_BG_RED                                  	255
	#define _LOGO_BG_GREEN                               	255
	#define _LOGO_BG_BLUE                                	255
					
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								32 
		
	
#elif(_LOGO_TYPE == _LOGO_HPC)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE 
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE
							
	#define _LOGO_COL_SIZE									39
	#define _LOGO_ROW_SIZE									10
						
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN								 	0
	#define _LOGO_BG_BLUE									255		
		
#elif(_LOGO_TYPE == _LOGO_MUCAI)
				
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE    	  
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE_1
										
	#define _LOGO_COL_SIZE									43
	#define _LOGO_ROW_SIZE									14
									
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255	
		
		
#elif(_LOGO_TYPE ==_LOGO_BEZEL )
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE //	  _LOGO_CP_WHITE       	  
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE_1//	         
											
	#define _LOGO_COL_SIZE									53
	#define _LOGO_ROW_SIZE									10
										
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255	
		
#elif(_LOGO_TYPE == _LOGO_KKTV)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1 
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE 
							
	#define _LOGO_COL_SIZE									62
	#define _LOGO_ROW_SIZE									11
						
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255		
		
		
#elif(_LOGO_TYPE == _LOGO_KOTIN)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE
							
	#define _LOGO_COL_SIZE									55
	#define _LOGO_ROW_SIZE									9
						
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0		
		
			
#elif(_LOGO_TYPE == _LOGO_KONKA)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE 
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE  
							
	#define _LOGO_COL_SIZE									67
	#define _LOGO_ROW_SIZE									12
						
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									255		
#elif(_LOGO_TYPE == _LOGO_AUZAI)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE 
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE  
							
	#define _LOGO_COL_SIZE									62
	#define _LOGO_ROW_SIZE									12
						
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									255		
		
#elif(_LOGO_TYPE == _LOGO_ATAS)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE  
							
	#define _LOGO_COL_SIZE									60
	#define _LOGO_ROW_SIZE									16
						
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255		
		
#elif(_LOGO_TYPE == _LOGO_AIMU_no)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE  
							
	#define _LOGO_COL_SIZE									70
	#define _LOGO_ROW_SIZE									20
						
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255	
#elif(_LOGO_TYPE == _LOGO_qNIX)
	#define _LOGO_FG_COLOR									_LOGO_CP_RED  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE     							
	#define _LOGO_COL_SIZE									50//71
	#define _LOGO_ROW_SIZE									12//12
	
	#define _LOGO_BG_RED									255//	 0
	#define _LOGO_BG_GREEN									255//	 0
	#define _LOGO_BG_BLUE									255//	  255
	
#elif(_LOGO_TYPE == _LOGO_AIMU)
			
			
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE  		    	    
											
	#define _LOGO_COL_SIZE									39
	#define _LOGO_ROW_SIZE									9
										
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0	
		
#elif(_LOGO_TYPE == _LOGO_IFOVED_R)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE
							
	#define _LOGO_COL_SIZE									60
	#define _LOGO_ROW_SIZE									11
						
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									255	
#elif(_LOGO_TYPE == _LOGO_KLKE)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE
							
	#define _LOGO_COL_SIZE									50
	#define _LOGO_ROW_SIZE									10
						
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									255	
		
#elif(_LOGO_TYPE == _LOGO_DIANJING)
		
		
			
	#define _LOGO_FG_COLOR								  	_LOGO_CP_WHITE       	  
	#define _LOGO_BG_COLOR									_LOGO_CP_RED//	 _LOGO_CP_BLACK      
											
	#define _LOGO_COL_SIZE									73
	#define _LOGO_ROW_SIZE									13
										
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255	
		
#elif(_LOGO_TYPE == _LOGO_TUBIAO0)
	#define _LOGO_FG_COLOR                                  _LOGO_CP_WHITE// _LOGO_CP_BLUE  
	#define _LOGO_BG_COLOR                               	_LOGO_CP_BLACK
						
	#define _LOGO_COL_SIZE									25
	#define _LOGO_ROW_SIZE									15
					
	#define _LOGO_BG_RED                                  	0
	#define _LOGO_BG_GREEN                               	0
	#define _LOGO_BG_BLUE                                	0     
		
		
	
		
#elif(_LOGO_TYPE == _LOGO_USE_IFOVED)
	#define _LOGO_FG_COLOR                            		_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                             		_LOGO_CP_BLUE
				
	#define _LOGO_COL_SIZE									55
	#define _LOGO_ROW_SIZE									9
			
	#define _LOGO_BG_RED                               	 	0
	#define _LOGO_BG_GREEN                                	0
	#define _LOGO_BG_BLUE                               	255     
		
#elif(_LOGO_TYPE == _LOGO_HONGXIA_B)
	#define _LOGO_FG_COLOR                                  _LOGO_CP_BLACK   
	#define _LOGO_BG_COLOR                               	_LOGO_CP_WHITE
						
	#define _LOGO_COL_SIZE									71
	#define _LOGO_ROW_SIZE									30
					
	#define _LOGO_BG_RED                                  	0
	#define _LOGO_BG_GREEN                                 	0
	#define _LOGO_BG_BLUE                                	0     
			
#elif(_LOGO_TYPE == _LOGO_JMW)
	#define _LOGO_FG_COLOR                                  _LOGO_CP_BLUE    
	#define _LOGO_BG_COLOR                              	_LOGO_CP_WHITE   
								
	#define _LOGO_COL_SIZE									75
	#define _LOGO_ROW_SIZE									12
							
	#define _LOGO_BG_RED                                  	255
	#define _LOGO_BG_GREEN                                	255
	#define _LOGO_BG_BLUE                                  	255     
#elif(_LOGO_TYPE == _LOGO_G_PLUS)
			
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK 		  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE	     
									
	#define _LOGO_COL_SIZE									47
	#define _LOGO_ROW_SIZE									14
								
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0	  
#elif(_LOGO_TYPE == _LOGO_HONXIA)
	#define _LOGO_FG_COLOR                                  _LOGO_CP_BLACK    
	#define _LOGO_BG_COLOR                               	_LOGO_CP_WHITE   
										
	#define _LOGO_COL_SIZE									93
	#define _LOGO_ROW_SIZE									11
									
	#define _LOGO_BG_RED                                 	255
	#define _LOGO_BG_GREEN                                	255
	#define _LOGO_BG_BLUE                              		255     
		
#elif(_LOGO_TYPE == _LOGO_IMAGIC)
	#define _LOGO_FG_COLOR                             		_LOGO_CP_BLUE_1 
	#define _LOGO_BG_COLOR                                  _LOGO_CP_BG  
				
	#define _LOGO_COL_SIZE									52
	#define _LOGO_ROW_SIZE									12
			
	#define _LOGO_BG_RED                                 	0
	#define _LOGO_BG_GREEN                              	0
	#define _LOGO_BG_BLUE                                	0        
		
		
			
		
#elif(_LOGO_TYPE == _LOGO_BIG_WESCOM)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_RED    
	#define _LOGO_BG_COLOR                                 	_LOGO_CP_BG       
		
	#define _LOGO_FG_COLOR1									_LOGO_CP_RED	
	#define _LOGO_BG_COLOR1									_LOGO_CP_BG
				
				
	#define _LOGO_COL_SIZE									48
	#define _LOGO_ROW_SIZE									11
			
	#define _LOGO_BG_RED                                  	0
	#define _LOGO_BG_GREEN                                	0
	#define _LOGO_BG_BLUE                                 	0                         
		
	#define _LOGO_ROW_START1								7
	#define _LOGO_COL_START1								0 
		
#elif(_LOGO_TYPE == _LOGO_SANSUI_NEW)
	#define _LOGO_FG_COLOR                              	_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                              	_CP_RED
		
	#define _LOGO_FG_COLOR1									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR1									_CP_RED
				
				
	#define _LOGO_COL_SIZE									66
	#define _LOGO_ROW_SIZE									15
			
	#define _LOGO_BG_RED                                  	255
	#define _LOGO_BG_GREEN                               	255
	#define _LOGO_BG_BLUE                              		255                         
		
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								33
		
#elif(_LOGO_TYPE == _LOGO_ZGD)
	#define _LOGO_FG_COLOR                         			_CP_RED
	#define _LOGO_BG_COLOR                                  _LOGO_CP_BLACK  
		
	#define _LOGO_FG_COLOR1									_CP_RED		
	#define _LOGO_BG_COLOR1									_LOGO_CP_BLACK				
				
				
	#define _LOGO_COL_SIZE									86
	#define _LOGO_ROW_SIZE									25
			
	#define _LOGO_BG_RED                                 	0
	#define _LOGO_BG_GREEN                                	0
	#define _LOGO_BG_BLUE                                	0                         
		
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								43
		
#elif(_LOGO_TYPE == _LOGO_MOOB)
	#define _LOGO_FG_COLOR                               	_LOGO_CP_BLACK
	#define _LOGO_BG_COLOR                                  _LOGO_CP_WHITE
			
	#define _LOGO_FG_COLOR1									_LOGO_CP_BLACK		
	#define _LOGO_BG_COLOR1									_LOGO_CP_WHITE				
					
					
	#define _LOGO_COL_SIZE									64
	#define _LOGO_ROW_SIZE									14
				
	#define _LOGO_BG_RED                                 	255
	#define _LOGO_BG_GREEN                               	255
	#define _LOGO_BG_BLUE                                  	255                         
			
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								32
			
#elif(_LOGO_TYPE == _LOGO_GENLOVE)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_BLUE_1
	#define _LOGO_BG_COLOR                               	_LOGO_CP_WHITE
	#define _LOGO_FG_COLOR1									_LOGO_CP_BLUE_1		
	#define _LOGO_BG_COLOR1									_LOGO_CP_WHITE				
	
					
	#define _LOGO_COL_SIZE									76
	#define _LOGO_ROW_SIZE									11
				
	#define _LOGO_BG_RED                                	255
	#define _LOGO_BG_GREEN                              	255
	#define _LOGO_BG_BLUE                                 	255                         
			
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								38
	
#elif(_LOGO_TYPE == _LOGO_UNOEROOG)
	#define _LOGO_FG_COLOR                              	_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                                	_LOGO_CP_BLACK
	#define _LOGO_FG_COLOR1									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR1									_LOGO_CP_BLACK				
					
	#define _LOGO_COL_SIZE									132
	#define _LOGO_ROW_SIZE									23
				
	#define _LOGO_BG_RED                                   	0
	#define _LOGO_BG_GREEN                           		0
	#define _LOGO_BG_BLUE                               	0                         
			
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								66 
			
		
#elif(_LOGO_TYPE == _LOGO_ABIT_LOGO)
	#define _LOGO_FG_COLOR                           		_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                                	_LOGO_CP_BLUE_1
		
	#define _LOGO_FG_COLOR1									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR1									_LOGO_CP_BLUE_1
				
				
	#define _LOGO_COL_SIZE									56
	#define _LOGO_ROW_SIZE									15
			
	#define _LOGO_BG_RED                                 	255
	#define _LOGO_BG_GREEN                                	255
	#define _LOGO_BG_BLUE                                 	255                         
		
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								28
		
#elif(_LOGO_TYPE == _LOGO_KOIOS_LOGO)
	#define _LOGO_FG_COLOR                             		_LOGO_CP_WHITE        
	#define _LOGO_BG_COLOR                               	_LOGO_CP_BLACK    
		
	#define _LOGO_FG_COLOR1									_LOGO_CP_WHITE	
	#define _LOGO_BG_COLOR1									_LOGO_CP_BLACK
				
				
	#define _LOGO_COL_SIZE									78
	#define _LOGO_ROW_SIZE									16
			
	#define _LOGO_BG_RED                                	0
	#define _LOGO_BG_GREEN                               	0
	#define _LOGO_BG_BLUE                                	0                         
		
	#define _LOGO_ROW_START1								0  
	#define _LOGO_COL_START1								39
		
#elif(_LOGO_TYPE == _LOGO_ABIT_SMALL_LOGO)
	#define _LOGO_FG_COLOR                             		_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                               	_LOGO_CP_BLUE_1
		
				
				
	#define _LOGO_COL_SIZE									41
	#define _LOGO_ROW_SIZE									11
			
	#define _LOGO_BG_RED                                   	255
	#define _LOGO_BG_GREEN                                 	255
	#define _LOGO_BG_BLUE                                 	255                         
		
#elif(_LOGO_TYPE == _LOGO_LAPAELO)
	#define _LOGO_FG_COLOR                                 	_LOGO_CP_RED
	#define _LOGO_BG_COLOR                                	_LOGO_CP_BLACK//_LOGO_CP_WHITE
				
	#define _LOGO_FG_COLOR1									_LOGO_CP_RED
	#define _LOGO_BG_COLOR1									_LOGO_CP_BLACK//_LOGO_CP_WHITE
						
	#define _LOGO_COL_SIZE									84
	#define _LOGO_ROW_SIZE									18
	
	#define _LOGO_BG_RED                                  	0 
	#define _LOGO_BG_GREEN                               	0
	#define _LOGO_BG_BLUE                                 	0                         
				
	#define _LOGO_ROW_START1								0 
	#define _LOGO_COL_START1								42 	
#elif(_LOGO_TYPE == _LOGO_GUANJIE)
	#define _LOGO_FG_COLOR                                	_CP_WHITE
	#define _LOGO_BG_COLOR                                	_LOGO_CP_BLUE_1
				
	#define _LOGO_FG_COLOR1						         	_CP_WHITE			
	#define _LOGO_BG_COLOR1						         	_LOGO_CP_BLUE_1					
						
						
	#define _LOGO_COL_SIZE									50
	#define _LOGO_ROW_SIZE									27
					
	#define _LOGO_BG_RED                                 	255
	#define _LOGO_BG_GREEN                                 	255
	#define _LOGO_BG_BLUE                                 	255                    
				
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								25 
		
#elif(_LOGO_TYPE == _LOGO_GJMXJ)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_BLUE_1     
	#define _LOGO_BG_COLOR                               	_CP_WHITE     
					
	#define _LOGO_FG_COLOR1									_LOGO_CP_BLUE_1	
	#define _LOGO_BG_COLOR1									_CP_WHITE 					
							
							
	#define _LOGO_COL_SIZE									60
	#define _LOGO_ROW_SIZE									10
						
	#define _LOGO_BG_RED                                   	255
	#define _LOGO_BG_GREEN                                	255
	#define _LOGO_BG_BLUE                                  	255                    
					
	#define _LOGO_ROW_START1								0
	#define _LOGO_COL_START1								30 
#elif(_LOGO_TYPE ==_LOGO_CERBERUS )
		
		
			
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE//	  _LOGO_CP_WHITE       	  
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK  //	   _LOGO_CP_USER      
											
	#define _LOGO_COL_SIZE									56
	#define _LOGO_ROW_SIZE									6
										
	#define _LOGO_BG_RED									0//	 255
	#define _LOGO_BG_GREEN									0//	 255
	#define _LOGO_BG_BLUE									0//	 255	
#elif(_LOGO_TYPE ==_LOGO_ANMTE )
		
		
			
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE//	   _LOGO_CP_USER      
	#define _LOGO_FG_COLOR									_LOGO_CP_RED//	  _LOGO_CP_WHITE       	  
	#define _LOGO_FG_COLOR1									_LOGO_CP_GREEN//	   _LOGO_CP_USER      
											
	#define _LOGO_COL_SIZE									35
	#define _LOGO_ROW_SIZE									6
										
	#define _LOGO_BG_RED									0//	 255
	#define _LOGO_BG_GREEN									0//	 255
	#define _LOGO_BG_BLUE									255//	 255	
		   
#elif(_LOGO_TYPE ==_LOGO_NCT )
		
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//	   _LOGO_CP_USER      
	#define _LOGO_FG_COLOR									_LOGO_CP_GRAY//	  _LOGO_CP_WHITE       	  
											
	#define _LOGO_COL_SIZE									55
	#define _LOGO_ROW_SIZE									16
										
	#define _LOGO_BG_RED									0//	 255
	#define _LOGO_BG_GREEN									0//	 255
	#define _LOGO_BG_BLUE									0//	 255	
		   
#elif(_LOGO_TYPE ==_LOGO_QNIX1 )
		
		
#if(Project_ID == ID_HHT_HK2785E06_1P2H_AUO_P320HVN05_6_FDH180HZ_20210106)
	#define _LOGO_FG_COLOR							       	_LOGO_CP_WHITE//	  _LOGO_CP_WHITE       	  
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//	   _LOGO_CP_USER  
	#define _LOGO_COL_SIZE									47
	#define _LOGO_ROW_SIZE									8
										
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0	
	
#else
	#define _LOGO_FG_COLOR							      	_LOGO_CP_RED//	  _LOGO_CP_WHITE       	  
	#define _LOGO_BG_COLOR							      	_LOGO_CP_WHITE//	   _LOGO_CP_USER  
	#define _LOGO_COL_SIZE									47
	#define _LOGO_ROW_SIZE									8
										
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255	
#endif
	
#elif(_LOGO_TYPE == _LOGO_SEVENWIN)
	#define _LOGO_FG_COLOR                                	_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR                                	_LOGO_CP_BG
					
	#define _LOGO_FG_COLOR1								   	_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR1						         	_LOGO_CP_BG		
							
							
	#define _LOGO_COL_SIZE									60
	#define _LOGO_ROW_SIZE									24// 24
						
	#define _LOGO_BG_RED                                  	0
	#define _LOGO_BG_GREEN                              	0
	#define _LOGO_BG_BLUE                             		0                    
					
	#define _LOGO_ROW_START1								17
	#define _LOGO_COL_START1								0       
#elif(_LOGO_TYPE ==_LOGO_APEX )
			
			

	#define _LOGO_FG_COLOR							      	_LOGO_CP_BLUE_1//	  _LOGO_CP_WHITE       	  
	#define _LOGO_BG_COLOR							      	_LOGO_CP_BG//	   _LOGO_CP_USER  
	#define _LOGO_COL_SIZE									76
	#define _LOGO_ROW_SIZE									15
											
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0	
		
#elif(_LOGO_TYPE ==_LOGO_ODNA )

	#define _LOGO_FG_COLOR							      	_LOGO_CP_BG //	  _LOGO_CP_WHITE       	  
	#define _LOGO_BG_COLOR							  		_LOGO_CP_BLUE_1//	   _LOGO_CP_USER  
				
	#define _LOGO_FG_COLOR1 								_LOGO_CP_BG
	#define _LOGO_BG_COLOR1 								_LOGO_CP_BLUE_1 

	#define _LOGO_COL_SIZE									84
	#define _LOGO_ROW_SIZE									16
											
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0

	#define _LOGO_COL_START1								42	
	#define _LOGO_ROW_START1								0   
#elif(_LOGO_TYPE == _LOGO_SONGREN_SMALL)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE 
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE     
							
	#define _LOGO_COL_SIZE									62
	#define _LOGO_ROW_SIZE									8
						
	#define _LOGO_BG_RED									0//	 0
	#define _LOGO_BG_GREEN									0//	 0
	#define _LOGO_BG_BLUE									255//	  255	
#elif(_LOGO_TYPE == _LOGO_SHUJIE)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE
							
	#define _LOGO_COL_SIZE									63
	#define _LOGO_ROW_SIZE									7
						
	#define _LOGO_BG_RED									0//	 0
	#define _LOGO_BG_GREEN									0//	 0
	#define _LOGO_BG_BLUE									0//	  255	

#elif(_LOGO_TYPE == _LOGO_SONGREN)
	#define _LOGO_FG_COLOR									_CP_BLUE  
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE     
							
	#define _LOGO_COL_SIZE									94
	#define _LOGO_ROW_SIZE									13
						
	#define _LOGO_BG_RED									255//	 0
	#define _LOGO_BG_GREEN									255//	 0
	#define _LOGO_BG_BLUE									255//	  255	

	#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1								47 //不是分2段载的logo不需要定义
#elif(_LOGO_TYPE == _LOGO_SONGREN_2)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR									_CP_BLUE       
							
	#define _LOGO_COL_SIZE									94
	#define _LOGO_ROW_SIZE									13
						
	#define _LOGO_BG_RED									0//	 0
	#define _LOGO_BG_GREEN									0//	 0
	#define _LOGO_BG_BLUE									255//	  255	

	#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1								47 //不是分2段载的logo不需要定义


#elif(_LOGO_TYPE == _LOGO_SONGREN_3)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE//_CP_BLUE   //    
							
	#define _LOGO_COL_SIZE									75
	#define _LOGO_ROW_SIZE									10
						
	#define _LOGO_BG_RED									0//	 0
	#define _LOGO_BG_GREEN									0//	 0
	#define _LOGO_BG_BLUE									255//	  255	

	#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1								37 //不是分2段载的logo不需要定义
#elif(_LOGO_TYPE == _LOGO_JAPANNEXT_BIG)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//_CP_BLUE   //    
								
	#define _LOGO_COL_SIZE									104//75
	#define _LOGO_ROW_SIZE									9//10
							
	#define _LOGO_BG_RED									0//	 0
	#define _LOGO_BG_GREEN									0//	 0
	#define _LOGO_BG_BLUE									0//	  255	
	
	#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1								52 //不是分2段载的logo不需要定义
	
#elif(_LOGO_TYPE == _LOGO_MECER_BIG)
#define _LOGO_FG_COLOR									_LOGO_CP_WHITE
#define _LOGO_BG_COLOR									_LOGO_CP_BG//_CP_BLUE	//	  
												
#define _LOGO_COL_SIZE									70//75
#define _LOGO_ROW_SIZE									36//10
											
#define _LOGO_BG_RED									0x01//  0
#define _LOGO_BG_GREEN									0x18//  0
#define _LOGO_BG_BLUE									0x3a//   255	
					
#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
#define _LOGO_COL_START1								0 //不是分2段载的logo不需要定义


#elif(_LOGO_TYPE == _LOGO_PREMIER)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK
									
	#define _LOGO_COL_SIZE									60
	#define _LOGO_ROW_SIZE									4
							
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0

#elif(_LOGO_TYPE == _LOGO_JVC)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK//_LOGO_CP_WHITE
								
	#define _LOGO_COL_SIZE									36//48
	#define _LOGO_ROW_SIZE									10//13//25
							
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0	

#elif(_LOGO_TYPE ==  _LOGO_JAPANNEXT)
	
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK  //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE //_LOGO_CP_WHITE
								
	#define _LOGO_COL_SIZE									104//84
	#define _LOGO_ROW_SIZE									9//10
		
							
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0	
#elif(_LOGO_TYPE ==  _LOGO_FYHXele)
#if(Project_ID	==	ID_XINHONGSHAN_2795E04_1USB1DP2H_SAMSUNG_LSM315DP01_QHD165HZ_20260713)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE
	#define _LOGO_COL_SIZE									74//84
	#define _LOGO_ROW_SIZE									9//10
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255	
#else
		
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BLUE //_LOGO_CP_WHITE
									
	#define _LOGO_COL_SIZE									74//84
	#define _LOGO_ROW_SIZE									9//10
			
								
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									255	
#endif
#elif(_LOGO_TYPE ==  _LOGO_Brookstone)
	
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK //_LOGO_CP_WHITE
								
	#define _LOGO_COL_SIZE									72
	#define _LOGO_ROW_SIZE									8
		
							
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0	
		
#elif(_LOGO_TYPE ==  _LOGO_DUAM)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1 //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE //_LOGO_CP_WHITE
									
	#define _LOGO_COL_SIZE									58//72
	#define _LOGO_ROW_SIZE									11//8
			
								
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255	

#elif(_LOGO_TYPE ==  _LOGO_EXAN)
		
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE //_LOGO_CP_WHITE
									
	#define _LOGO_COL_SIZE									53
	#define _LOGO_ROW_SIZE									11

	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255 
	
#elif(_LOGO_TYPE ==  _LOGO_Polaroid)
			
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE  //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									 _LOGO_CP_BLACK//_LOGO_CP_WHITE
										
	#define _LOGO_COL_SIZE									68//53
	#define _LOGO_ROW_SIZE									14//11
	
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0 
	
#elif(_LOGO_TYPE ==  _LOGO_QUASAR)
				
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE  //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									 _LOGO_CP_BLACK//_LOGO_CP_WHITE
											
	#define _LOGO_COL_SIZE									73
	#define _LOGO_ROW_SIZE									9
		
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0 
		
#elif(_LOGO_TYPE ==  _LOGO_THOMSON)
					
	#define _LOGO_FG_COLOR									_LOGO_CP_RED//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_WHITE
												
	#define _LOGO_COL_SIZE									41
	#define _LOGO_ROW_SIZE									3
			
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255
#elif(_LOGO_TYPE ==  _LOGO_XENTA)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_WHITE
											
	#define _LOGO_COL_SIZE									60//41
	#define _LOGO_ROW_SIZE									10//3
		
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255
#elif(_LOGO_TYPE ==  _LOGO_XZONE)
	#define _LOGO_FG_COLOR									_LOGO_CP_GREEN_1//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_WHITE
										
	#define _LOGO_COL_SIZE									66//41
	#define _LOGO_ROW_SIZE									17
	
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255

	
#elif(_LOGO_TYPE == _LOGO_CRUA)
#define _LOGO_FG_COLOR									_LOGO_CP_WHITE
#define _LOGO_BG_COLOR									_LOGO_CP_BG//_CP_BLUE	//	  
												
#define _LOGO_COL_SIZE									74//75
#define _LOGO_ROW_SIZE									14//10
											
#define _LOGO_BG_RED									0x7F//  0
#define _LOGO_BG_GREEN									0x2E//  0
#define _LOGO_BG_BLUE									0xB9//   255	
					
#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
#define _LOGO_COL_START1								0 //不是分2段载的logo不需要定义

#elif(_LOGO_TYPE == _LOGO_MONSTER)
#define _LOGO_FG_COLOR									_LOGO_CP_BG
#define _LOGO_BG_COLOR									_LOGO_CP_RED_1//_CP_BLUE	//	  
												
#define _LOGO_BG_COLOR1 									_LOGO_CP_BLACK 
#define _LOGO_FG_COLOR1 									_LOGO_CP_BG 


#define _LOGO_COL_SIZE									88//75
#define _LOGO_ROW_SIZE									5//10
											
#define _LOGO_BG_RED										255//0
#define _LOGO_BG_GREEN									255//0
#define _LOGO_BG_BLUE									255//255	
					
#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
#define _LOGO_COL_START1									14 //不是分2段载的logo不需要定义

#elif(_LOGO_TYPE ==  _LOGO_QTOUCH)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK //_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK //_LOGO_CP_WHITE
	#define _LOGO_BG_COLOR1 								_LOGO_CP_GREEN 
	#define _LOGO_FG_COLOR1                					_LOGO_CP_GRAY 
												
	#define _LOGO_COL_SIZE									43//60//41
	#define _LOGO_ROW_SIZE									25//10//3
			
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
		
#elif(_LOGO_TYPE ==  _LOGO_EKO)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//_LOGO_CP_WHITE
											
	#define _LOGO_COL_SIZE									35
	#define _LOGO_ROW_SIZE									9
		
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
	
#elif(_LOGO_TYPE ==  _LOGO_TEROS)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1//_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//_LOGO_CP_WHITE
											
	#define _LOGO_COL_SIZE									73
	#define _LOGO_ROW_SIZE									15
		
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0

#elif(_LOGO_TYPE == _LOGO_HALION)
#define _LOGO_FG_COLOR                                      _LOGO_CP_BG
#define _LOGO_BG_COLOR                                      _LOGO_CP_WHITE
				
#define _LOGO_COL_SIZE										93
#define _LOGO_ROW_SIZE										9
		
#define _LOGO_BG_RED                                    	255
#define _LOGO_BG_GREEN                                      255
#define _LOGO_BG_BLUE			 							255


#elif(_LOGO_TYPE ==  _LOGO_ROMBICA)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BLACK//_LOGO_CP_WHITE
											
	#define _LOGO_COL_SIZE									39
	#define _LOGO_ROW_SIZE									6
		
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
	
#elif(_LOGO_TYPE ==  _LOGO_QMAX)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//_LOGO_CP_WHITE
													
	#define _LOGO_COL_SIZE									46
	#define _LOGO_ROW_SIZE									11
				
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
	
#elif(_LOGO_TYPE ==  _LOGO_DEPO)
	#define _LOGO_FG_COLOR									_LOGO_CP_BG//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//_LOGO_CP_WHITE
															
	#define _LOGO_COL_SIZE									46
	#define _LOGO_ROW_SIZE									11
						
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255

#elif(_LOGO_TYPE==_LOGO_SODIMAC)
	
#define _LOGO_COL_SIZE									98
#define _LOGO_ROW_SIZE									11

#define _LOGO_FG_COLOR									_LOGO_CP_RED	
#define _LOGO_BG_COLOR									_LOGO_CP_BG


#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
#define _LOGO_COL_START1									44//不是分2段载的logo不需要定义
#define _LOGO_BG_RED									0XFF
#define _LOGO_BG_GREEN									0XFF
#define _LOGO_BG_BLUE									0XFF

#elif(_LOGO_TYPE==_LOGO_ANTESPORTS)
	
#define _LOGO_COL_SIZE									82
#define _LOGO_ROW_SIZE									10

#define _LOGO_FG_COLOR									_LOGO_CP_WHITE	
#define _LOGO_BG_COLOR									_LOGO_CP_BLACK


#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
#define _LOGO_COL_START1									36//不是分2段载的logo不需要定义
#define _LOGO_BG_RED									0X00
#define _LOGO_BG_GREEN									0X00
#define _LOGO_BG_BLUE									0X00

#elif(_LOGO_TYPE == _LOGO_FUEGO)
#define _LOGO_FG_COLOR							 			_LOGO_CP_ORANGE_H
#define _LOGO_BG_COLOR										_LOGO_CP_WHITE 
	
#define _LOGO_FG_COLOR1 									_LOGO_CP_ORANGE_H				
#define _LOGO_BG_COLOR1 									_LOGO_CP_WHITE
			
			
#define _LOGO_COL_SIZE										101
#define _LOGO_ROW_SIZE									    31
		
#define _LOGO_BG_RED										255
#define _LOGO_BG_GREEN										255
#define _LOGO_BG_BLUE										255

#define _LOGO_ROW_START1									0  
#define _LOGO_COL_START1									30

#elif(_LOGO_TYPE == _LOGO_GAMEBOOSTER)
#define _LOGO_FG_COLOR							 			_LOGO_CP_BLACK
#define _LOGO_BG_COLOR										_LOGO_CP_WHITE 
	
#define _LOGO_FG_COLOR1 									_LOGO_CP_BLACK				
#define _LOGO_BG_COLOR1 									_LOGO_CP_WHITE
			
			
#define _LOGO_COL_SIZE										60
#define _LOGO_ROW_SIZE									    22
		
#define _LOGO_BG_RED										255
#define _LOGO_BG_GREEN										255
#define _LOGO_BG_BLUE										255

#define _LOGO_ROW_START1									0  
#define _LOGO_COL_START1									30


#elif(_LOGO_TYPE ==  _LOGO_HARPER)
	#define _LOGO_FG_COLOR									_LOGO_CP_BG//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_WHITE
														
	#define _LOGO_COL_SIZE									40
	#define _LOGO_ROW_SIZE									34
					
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
#elif(_LOGO_TYPE ==  _LOGO_BLAUPUNKT)
	#define _LOGO_FG_COLOR									_LOGO_CP_BG//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_WHITE
															
	#define _LOGO_COL_SIZE									50
	#define _LOGO_ROW_SIZE									4
						
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
#elif(_LOGO_TYPE ==  _LOGO_STEALTH)
	#define _LOGO_FG_COLOR									_LOGO_CP_WHITE//_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//_LOGO_CP_WHITE
												
	#define _LOGO_COL_SIZE									63
	#define _LOGO_ROW_SIZE									5
			
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
#elif(_LOGO_TYPE ==  _LOGO_HAIER)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLUE_1//_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR									_LOGO_CP_BG//_LOGO_CP_WHITE
												
	#define _LOGO_COL_SIZE									35
	#define _LOGO_ROW_SIZE									8
			
	#define _LOGO_BG_RED									0
	#define _LOGO_BG_GREEN									0
	#define _LOGO_BG_BLUE									0
#elif(_LOGO_TYPE ==  _LOGO_DUALSHINE)
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK//_LOGO_CP_WHITE//_LOGO_CP_RED
	#define _LOGO_BG_COLOR								_LOGO_CP_WHITE	//_LOGO_CP_WHITE
                                                    
	#define _LOGO_COL_SIZE									36
	#define _LOGO_ROW_SIZE									16
                
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255
			
#elif(_LOGO_TYPE ==  _LOGO_amazon_basics)
				
	#define _LOGO_New_Tool                					_OFF
		
#if !_LOGO_New_Tool
	
	#define _LOGO_FG_COLOR									_LOGO_CP_BLACK	
	#define _LOGO_BG_COLOR								 	_CP_WHITE						  
				
	#define _LOGO_FG_COLOR1 								_LOGO_CP_BLACK					
	#define _LOGO_BG_COLOR1 								_CP_WHITE					
						
						
	#define _LOGO_COL_SIZE									(47+43)
	#define _LOGO_ROW_SIZE									12//	21
					
	#define _LOGO_BG_RED									255
	#define _LOGO_BG_GREEN									255
	#define _LOGO_BG_BLUE									255
				
	#define _LOGO_ROW_START1								0  //不是分2段载的logo不需要定义
	#define _LOGO_COL_START1								47 //不是分2段载的logo不需要定义
	
#else
	#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
		
	#define _OSD_LOGOA_WIDTH                            1080
	#define _OSD_LOGOA_HEIGHT                           216
		
	#define _OSD_LOGOB_WIDTH                            1080
	#define _OSD_LOGOB_HEIGHT                           216
			
	#define _OSD_LOGO_2BIT_OFFSET                       195
	#define _OSD_LOGO_4BIT_OFFSET                       0
		
#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 1096
	#define _OSD_LOGO_FONT_END_ADDRESS                  4624
		
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              13
		
#else
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 1098
	#define _OSD_LOGO_FONT_END_ADDRESS                  4626
		
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              13
		
#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
#endif

#elif(_LOGO_TYPE ==  _LOGO_W)
						
	#define _LOGO_New_Tool                					_ON
				
	#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
		
	#define _OSD_LOGOA_WIDTH                            360
	#define _OSD_LOGOA_HEIGHT                           360
		
	#define _OSD_LOGOB_WIDTH                            360
	#define _OSD_LOGOB_HEIGHT                           360
		
	#define _OSD_LOGO_2BIT_OFFSET                       127
	#define _OSD_LOGO_4BIT_OFFSET                       0
		
#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 624
	#define _OSD_LOGO_FONT_END_ADDRESS                  2928
		
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              21
		
#else
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 621
	#define _OSD_LOGO_FONT_END_ADDRESS                  2925
		
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              21
		
#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	
	
#elif(_LOGO_TYPE ==  _LOGO_LUSORIS)
					
	#define _LOGO_New_Tool                					_ON
			
	#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
	
	#define _OSD_LOGOA_WIDTH                            768
	#define _OSD_LOGOA_HEIGHT                           558
	
	#define _OSD_LOGOB_WIDTH                            768
	#define _OSD_LOGOB_HEIGHT                           558
	
	#define _OSD_LOGO_2BIT_OFFSET                       150
	#define _OSD_LOGO_4BIT_OFFSET                       0
	
#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 2016
	#define _OSD_LOGO_FONT_END_ADDRESS                  4716
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              32
	
#else
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 2016
	#define _OSD_LOGO_FONT_END_ADDRESS                  4716
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              32
	
#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)

#elif(_LOGO_TYPE ==  _LOGO_BCR)
	#define _LOGO_New_Tool                				_ON
	
	#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
	#define _OSD_LOGOA_WIDTH                            444
	#define _OSD_LOGOA_HEIGHT                           144
	#define _OSD_LOGOB_WIDTH                            444
	#define _OSD_LOGOB_HEIGHT                           144
	#define _OSD_LOGO_2BIT_OFFSET                       37
	#define _OSD_LOGO_4BIT_OFFSET                       0
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 306
	#define _OSD_LOGO_FONT_END_ADDRESS                  990
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              9
#elif(_LOGO_TYPE ==  _LOGO_NIOLX_1)
	#define _LOGO_New_Tool                				_ON
#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
	
#define _OSD_LOGOA_WIDTH                            1920
#define _OSD_LOGOA_HEIGHT                           1080
	
#define _OSD_LOGOB_WIDTH                            1920
#define _OSD_LOGOB_HEIGHT                           1080
	
#define _OSD_LOGO_2BIT_OFFSET                       10
#define _OSD_LOGO_4BIT_OFFSET                       0
	
#define _OSD_LOGO_FONT_BASE_ADDRESS                 756
#define _OSD_LOGO_FONT_END_ADDRESS                  5256
	
#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              61

#elif(_LOGO_TYPE ==  _LOGO_PROLOGIX)
#define _LOGO_New_Tool                				_ON
#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
#define _OSD_LOGOA_WIDTH                            840
#define _OSD_LOGOA_HEIGHT                           90

#define _OSD_LOGOB_WIDTH                            840
#define _OSD_LOGOB_HEIGHT                           90

#define _OSD_LOGO_2BIT_OFFSET                       83
#define _OSD_LOGO_4BIT_OFFSET                       0

#define _OSD_LOGO_FONT_BASE_ADDRESS                 360
#define _OSD_LOGO_FONT_END_ADDRESS                  1872

#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              6

#elif(_LOGO_TYPE ==  _LOGO_GREATWALL2)
#define _LOGO_New_Tool                				_ON	
#define _OSD_LOGOA_WIDTH                            936
#define _OSD_LOGOA_HEIGHT                           144
#define _OSD_LOGOB_WIDTH                            936
#define _OSD_LOGOB_HEIGHT                           144
#define _OSD_LOGO_2BIT_OFFSET                       114
#define _OSD_LOGO_4BIT_OFFSET                       0
#define _OSD_LOGO_FONT_BASE_ADDRESS                 639
#define _OSD_LOGO_FONT_END_ADDRESS                  2691
#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              9
#elif(_LOGO_TYPE ==  _LOGO_NIOLX)
	#define _LOGO_New_Tool                				_ON
#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
	
#define _OSD_LOGOA_WIDTH                            1920
#define _OSD_LOGOA_HEIGHT                           1080
	
#define _OSD_LOGOB_WIDTH                            1920
#define _OSD_LOGOB_HEIGHT                           1080
	
#define _OSD_LOGO_2BIT_OFFSET                       22
#define _OSD_LOGO_4BIT_OFFSET                       0
	
#define _OSD_LOGO_FONT_BASE_ADDRESS                 873
#define _OSD_LOGO_FONT_END_ADDRESS                  7209
	
#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              61
#elif(_LOGO_TYPE ==  _LOGO_ENTERPRISE)
	#define _LOGO_New_Tool                				_ON
	
	#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF	
	#define _OSD_LOGOA_WIDTH                            600
	#define _OSD_LOGOA_HEIGHT                           360

	#define _OSD_LOGOB_WIDTH                            600
	#define _OSD_LOGOB_HEIGHT                           360

	#define _OSD_LOGO_2BIT_OFFSET                       130
	#define _OSD_LOGO_4BIT_OFFSET                       0

	#define _OSD_LOGO_FONT_BASE_ADDRESS                 1026
	#define _OSD_LOGO_FONT_END_ADDRESS                  3366

	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              21
	
#elif(_LOGO_TYPE ==  _LOGO_GREATWALL)
#define _LOGO_New_Tool                				_ON	
#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF	

#define _OSD_LOGOA_WIDTH                            816
#define _OSD_LOGOA_HEIGHT                           324

#define _OSD_LOGOB_WIDTH                            816
#define _OSD_LOGOB_HEIGHT                           324

#define _OSD_LOGO_2BIT_OFFSET                       150
#define _OSD_LOGO_4BIT_OFFSET                       0

#define _OSD_LOGO_FONT_BASE_ADDRESS                 1251
#define _OSD_LOGO_FONT_END_ADDRESS                  3951

#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              19

#elif(_LOGO_TYPE ==  _LOGO_ZINOX)
#define _LOGO_New_Tool                				_ON	

#define _OSD_LOGOA_WIDTH                            828
#define _OSD_LOGOA_HEIGHT                           360

#define _OSD_LOGOB_WIDTH                            828
#define _OSD_LOGOB_HEIGHT                           360

#define _OSD_LOGO_2BIT_OFFSET                       253
#define _OSD_LOGO_4BIT_OFFSET                       0

#define _OSD_LOGO_FONT_BASE_ADDRESS                 1404
#define _OSD_LOGO_FONT_END_ADDRESS                  5976

#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              21
#elif(_LOGO_TYPE ==  _LOGO_HONGXIA_MATRIX)

#define _LOGO_New_Tool                				_ON	

#define _OSD_LOGOA_WIDTH                            1056
#define _OSD_LOGOA_HEIGHT                           252

#define _OSD_LOGOB_WIDTH                            1056
#define _OSD_LOGOB_HEIGHT                           252

#define _OSD_LOGO_2BIT_OFFSET                       91
#define _OSD_LOGO_4BIT_OFFSET                       0


#define _OSD_LOGO_FONT_BASE_ADDRESS                 1251
#define _OSD_LOGO_FONT_END_ADDRESS                  2907

#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              15

#elif(_LOGO_TYPE ==  _LOGO_adhua_4)
	#define _LOGO_New_Tool_4                			_ON
	#define _OSD_2_FONT_FUNCTION_LOGO                   _OFF
	
////////////////////////////////0////////////////////////////////////	
	#define _OSD_LOGOA_WIDTH                            600
	#define _OSD_LOGOA_HEIGHT                           180
	
	#define _OSD_LOGOB_WIDTH                            600
	#define _OSD_LOGOB_HEIGHT                           180
	
	#define _OSD_LOGO_2BIT_OFFSET                       138
	#define _OSD_LOGO_4BIT_OFFSET                       0
	
#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 512
	#define _OSD_LOGO_FONT_END_ADDRESS                  2996
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              11
	
#elif(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 512
	#define _OSD_LOGO_FONT_END_ADDRESS                  2996
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              11
	
#else
	#define _OSD_LOGO_FONT_BASE_ADDRESS                 513
	#define _OSD_LOGO_FONT_END_ADDRESS                  2997
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND              11
	
#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)

////////////////////////////////90////////////////////////////////////	
	#define _OSD_LOGOA_WIDTH_90                            180
	#define _OSD_LOGOA_HEIGHT_90                           612
	
	#define _OSD_LOGOB_WIDTH_90                            180
	#define _OSD_LOGOB_HEIGHT_90                           612
	
	#define _OSD_LOGO_2BIT_OFFSET_90                       147
	#define _OSD_LOGO_4BIT_OFFSET_90                       0
	
#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)
	#define _OSD_LOGO_FONT_BASE_ADDRESS_90                 548
	#define _OSD_LOGO_FONT_END_ADDRESS_90                  3212
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_90               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_90              35
	
#elif(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	#define _OSD_LOGO_FONT_BASE_ADDRESS_90                 548
	#define _OSD_LOGO_FONT_END_ADDRESS_90                  3212
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_90               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_90              35
	
#else
	#define _OSD_LOGO_FONT_BASE_ADDRESS_90                 549
	#define _OSD_LOGO_FONT_END_ADDRESS_90                  3213
	
	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_90               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_90              35
	
#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)
////////////////////////////////180////////////////////////////////////	
	#define _OSD_LOGOA_WIDTH_180                            600
	#define _OSD_LOGOA_HEIGHT_180                           180

	#define _OSD_LOGOB_WIDTH_180                            600
	#define _OSD_LOGOB_HEIGHT_180                           180

	#define _OSD_LOGO_2BIT_OFFSET_180                       138
	#define _OSD_LOGO_4BIT_OFFSET_180                       0

#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)
	#define _OSD_LOGO_FONT_BASE_ADDRESS_180                 512
	#define _OSD_LOGO_FONT_END_ADDRESS_180                  2996

	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_180               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_180              11

#elif(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	#define _OSD_LOGO_FONT_BASE_ADDRESS_180                 512
	#define _OSD_LOGO_FONT_END_ADDRESS_180                  2996

	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_180               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_180              11

#else
	#define _OSD_LOGO_FONT_BASE_ADDRESS_180                 513
	#define _OSD_LOGO_FONT_END_ADDRESS_180                  2997

	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_180               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_180              11

#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)

////////////////////////////////270////////////////////////////////////	

	#define _OSD_LOGOA_WIDTH_270                            180
	#define _OSD_LOGOA_HEIGHT_270                           612

	#define _OSD_LOGOB_WIDTH_270                           180
	#define _OSD_LOGOB_HEIGHT_270                           612

	#define _OSD_LOGO_2BIT_OFFSET_270                       144
	#define _OSD_LOGO_4BIT_OFFSET_270                       0

#if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)
	#define _OSD_LOGO_FONT_BASE_ADDRESS_270                 548
	#define _OSD_LOGO_FONT_END_ADDRESS_270                  3284

	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_270               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_270              35

#elif(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_3)
	#define _OSD_LOGO_FONT_BASE_ADDRESS_270                 548
	#define _OSD_LOGO_FONT_END_ADDRESS_270                  3284

	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_270               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_270              35

#else
	#define _OSD_LOGO_FONT_BASE_ADDRESS_270                 549
	#define _OSD_LOGO_FONT_END_ADDRESS_270                  3285

	#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_270               0
	#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_270              35

#endif // End of #if(_OSD_REG_MAPPING_GEN == _USER_OSD_GEN_4)

#endif









/***************************************************************************/

#ifndef _LOGO_POS_H
#define _LOGO_POS_H                				  			50
#endif

#ifndef _LOGO_POS_V
#define _LOGO_POS_V                							50
#endif

#ifndef _LOGO_FG_COLOR1
#define _LOGO_FG_COLOR1                						_LOGO_FG_COLOR
#endif

#ifndef _LOGO_BG_COLOR1
#define _LOGO_BG_COLOR1                						_LOGO_BG_COLOR
#endif

#ifndef _LOGO_New_Tool
#define _LOGO_New_Tool                							_OFF
#endif

#ifndef _LOGO_New_Tool_4
#define _LOGO_New_Tool_4                						_OFF
#endif

#ifndef _LOGO_Show_Type
#define _LOGO_Show_Type                							0// 0.透明度变化 255-0 1.背光变化  _OFF
#endif


#ifndef _OSD_LOGOB_ADDRESS_ROWCOMMAND
#define _OSD_LOGOB_ADDRESS_ROWCOMMAND               36
#define _OSD_LOGOB_ADDRESS_CHARCOMMAND              557

#define _OSD_LOGOB_ADDRESS_ROWCOMMAND_90               36
#define _OSD_LOGOB_ADDRESS_CHARCOMMAND_90              557

#endif

////////////////////////////////1800////////////////////////////////////	
#ifndef _OSD_LOGOA_WIDTH_180							
#define _OSD_LOGOA_WIDTH_180                            _OSD_LOGOA_WIDTH
#define _OSD_LOGOA_HEIGHT_180                           _OSD_LOGOA_HEIGHT

#define _OSD_LOGOB_WIDTH_180                            _OSD_LOGOB_WIDTH
#define _OSD_LOGOB_HEIGHT_180                           _OSD_LOGOB_HEIGHT

#define _OSD_LOGO_2BIT_OFFSET_180                       _OSD_LOGO_2BIT_OFFSET
#define _OSD_LOGO_4BIT_OFFSET_180                       _OSD_LOGO_4BIT_OFFSET

#define _OSD_LOGO_FONT_BASE_ADDRESS_180                 _OSD_LOGO_FONT_BASE_ADDRESS
#define _OSD_LOGO_FONT_END_ADDRESS_180                  _OSD_LOGO_FONT_END_ADDRESS

#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_180               _OSD_LOGOA_ADDRESS_ROWCOMMAND
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_180              _OSD_LOGOA_ADDRESS_CHARCOMMAND

#define _OSD_LOGOB_ADDRESS_ROWCOMMAND_180               _OSD_LOGOB_ADDRESS_ROWCOMMAND
#define _OSD_LOGOB_ADDRESS_CHARCOMMAND_180              _OSD_LOGOB_ADDRESS_CHARCOMMAND

#endif
////////////////////////////////270////////////////////////////////////	
#ifndef _OSD_LOGOA_WIDTH_270							
#define _OSD_LOGOA_WIDTH_270                            _OSD_LOGOA_WIDTH_90
#define _OSD_LOGOA_HEIGHT_270                           _OSD_LOGOA_HEIGHT_90

#define _OSD_LOGOB_WIDTH_270                           	_OSD_LOGOB_WIDTH_90
#define _OSD_LOGOB_HEIGHT_270                          	_OSD_LOGOB_HEIGHT_90

#define _OSD_LOGO_2BIT_OFFSET_270                       _OSD_LOGO_2BIT_OFFSET_90
#define _OSD_LOGO_4BIT_OFFSET_270                       _OSD_LOGO_4BIT_OFFSET_90

#define _OSD_LOGO_FONT_BASE_ADDRESS_270                 _OSD_LOGO_FONT_BASE_ADDRESS_90
#define _OSD_LOGO_FONT_END_ADDRESS_270                  _OSD_LOGO_FONT_END_ADDRESS_90

#define _OSD_LOGOA_ADDRESS_ROWCOMMAND_270               _OSD_LOGOA_ADDRESS_ROWCOMMAND_90
#define _OSD_LOGOA_ADDRESS_CHARCOMMAND_270              _OSD_LOGOA_ADDRESS_CHARCOMMAND_90

#define _OSD_LOGOB_ADDRESS_ROWCOMMAND_270               _OSD_LOGOB_ADDRESS_ROWCOMMAND_90
#define _OSD_LOGOB_ADDRESS_CHARCOMMAND_270              _OSD_LOGOB_ADDRESS_ROWCOMMAND_90

#endif

