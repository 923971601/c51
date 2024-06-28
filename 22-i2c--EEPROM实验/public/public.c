#include"public.h"





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













