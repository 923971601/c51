#include"key.h"







		 
u8	 key_scan(u8 mode)	 
	{
		static u8 key =1;
	if(mode) key=1;
		
		
		
		
		if(key==1&&(  KEY1==0||KEY2==0||KEY3==0||KEY4==0))
		{
			delay_10us(10000);//消抖处理
			key=0;
			
			if (KEY1==0)
			return KEY1_PRESS ;
			
			else if (KEY2==0)
			return KEY2_PRESS ;
			
			else if (KEY3==0)
			return KEY3_PRESS ;
			
			
			else if (KEY4==0)
			return KEY4_PRESS ;
			
			
		}
		
		else if (KEY1==0&&KEY2==0&&KEY3==0&&KEY4==0)
			
		{
			key=1;
		

		}
		
				return KEY_UNPRESS;
		
	}
	 










