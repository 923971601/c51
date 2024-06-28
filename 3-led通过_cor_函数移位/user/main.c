#include "reg52.h"//引入头文件
typedef  unsigned  char u8;//将函数名称简洁
	 typedef  unsigned int u16;//将函数名称简洁
	 #include "intrins.h"//引入文件
	#define LED_PORT    P2//使用宏定义将p2口定义
	 
	 void delay_10us(u16 ten_us)//当传入ten_us=1时，大概延时10us
	 {
	 
		 while(ten_us--);
		 
		 
		 
		 
		 
	 }
	 
	 



void main()
{
 u8  i=0;
LED_PORT =~(0x01);
	
	
	
	
	
	
	
	while(1)
	
	{
	for(i=0;i<7;i++)
	 {
	 
	 LED_PORT=_crol_(LED_PORT,1);
	 delay_10us(50000);
	 
	  
	
	 }
		 
		
		for(i=0;i<7;i++)
	 {
	 
	 LED_PORT=_cror_(LED_PORT,1);
	 delay_10us(50000);
	 
	  
	
	 }
		 
		
		
		
	}
}	