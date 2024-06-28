#include "reg52.h"//引入头文件
	 typedef  unsigned int u16;//将函数名称简洁
	
typedef  unsigned  char u8;//将函数名称简洁
sbit SEEP=P2^5;
	 
	 void delay_10us(u16 ten_us)//当传入ten_us=1时，大概延时10us
	 {
	 
		 while(ten_us--);
		 
		 
		 
		 
		 
	 }
	 
	 



void main()//关于c的函数
{

	u16 i=2000;
	
	
	
	
	
	
	while(1)//循环
	
	{
		while(i--)//i=2000,i=1999………i=0
		{
		
		
	SEEP=!SEEP;
  delay_10us(100);
//	  SEEP=1;
//	delay_10us(1000);
//		  SEEP=0;
//	delay_10us(1000);
		
		
		
	 }
		 i=0;
	 SEEP=1;//此时蜂鸣器输入高电平，由于没有一段电子信号脉冲，蜂鸣器不会发出声音
		
		
	}
}