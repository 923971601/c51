#include "reg52.h"//引入头文2件
	 typedef  unsigned int u16;//将函数名称简洁
	 typedef  unsigned  char u8;//将函数名称简洁
	 
		sbit SRCLK =P3^6; 
		sbit rCLK =P3^5; 
		sbit SER =P3^4; 
	 
	 
	 
	#define LEDDZ_COL_PORT P0


	u8 ghc595_buf[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};//LED点阵一行行显示
//u8 ghc595_buu[8]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};


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
 LEDDZ_COL_PORT=0x00;
while(1)
	{

  for(i=0;i<8;i++)
{hc595_write_date(0x00);
hc595_write_date(ghc595_buf[i]);
delay_10us(50000);
}





}
}

