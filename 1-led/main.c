#include "reg52.h"//引入头文件
typedef  unsigned  char u8;//将函数名称简洁
	 typedef  unsigned int u16;//将函数名称简洁
	 
	 
	 sbit LED1=P2^0;
	 sbit LED2=P2^1;
	 sbit LED3=P2^2;
	 sbit LED4=P2^3;
	 sbit LED5=P2^4;
	 sbit LED6=P2^5;
	 sbit LED7=P2^6;
	 sbit LED8=P2^7;
	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 void delay_10us(u16 ten_us)//当传入ten_us=1时，大概延时10us
	 {
	 
		 while(ten_us--);
		 
		 
		 
		 
		 
	 }
	 
	 



void main()
{
 

	
	while(1)
	
	{
	
	 LED1=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED1=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		LED2=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED2=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		LED3=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED3=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		LED4=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED4=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		LED5=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED5=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		LED6=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED6=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		LED7=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED7=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		LED8=0;//点亮
   delay_10us(50000);//大概延时450毫秒
   LED8=1;//sbit LED1=P2^0;熄灭
   delay_10us(50000);//大概延时450毫秒
		
		
		
		
		
		
	}
	
	
}