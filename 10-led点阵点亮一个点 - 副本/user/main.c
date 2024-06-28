#include "reg52.h"//引入头文2件
	 typedef  unsigned int u16;//将函数名称简洁
	 typedef  unsigned  char u8;//将函数名称简洁
	 
		sbit SRCLK =P3^6; 
		sbit rCLK =P3^5; 
		sbit SER =P3^4; 
	 
	 
	 
	#define LEDDZ_COL_PORT P0

u8 gled_row[8]={0x38,0x7C,0x7E,0x3F,0x3F,0x7E,0x7C,0x38,
};//led点阵显示图像的数据
u8 gled_col[8]={0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};

void delay_10us(u16 ten_us)//引入延时函数
		 
		 {
			 while(ten_us--);
		 }

		 
		 void hc595_write_date(u8 dat)//用dat而不用date是因为date已经被定义；
		 {
			 u16 i=0;
			 for(i=0;i<8;i++)
			 {SER=dat>>7;//让dat对应的1000 0000移位成0000 0001 即使最下面的串口为高电平    
				 dat<<=1;//使次高位的0向左移一位；即0000 0001变为0000 0010以此类推
     				 SRCLK=0;
				 delay_10us(1);//消抖
				 SRCLK=1;
				 delay_10us(1);//消抖
			

			 }
			 rCLK=0;
			 delay_10us(1);
			  rCLK=1;
			 delay_10us(1);
			 
		 } 

void main()
{
	u8 i=0;
			 
while(1)
	{for(i=0;i<8;i++)
		{LEDDZ_COL_PORT=gled_col[i];
		
		hc595_write_date(gled_row[i]);
		delay_10us(100);
			hc595_write_date(0x00);
			
		}
		
		
		

		
}





}


