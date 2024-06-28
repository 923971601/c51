#include "reg52.h"//引入头文2件
	 typedef  unsigned int u16;//将函数名称简洁
	 typedef  unsigned  char u8;//将函数名称简洁
	 
		sbit dc_motor=P1^0;
	 

	
 
void delay_10us(u16 ten_us)//引入延时函数
		 
		 {
			 while(ten_us--);
		 }
void delay_ms(u16 ms)
{
	u16 i,j;
for(i=ms;i>0;i--)
   for(j=110;j>0;j--);
}
void main()
{
  
while(1)
	{

dc_motor=1;
	delay_ms(100);
	dc_motor=0;
 delay_ms(100);
	
}

}



