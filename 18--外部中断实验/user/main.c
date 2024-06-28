#include "reg52.h"//引入头文2件
		typedef  unsigned int u16;//将函数名称简洁
		typedef  unsigned  char u8;//将函数名称简洁
	 

sbit KEY3=P3^2;
sbit LED1=P2^0;









void delay_ms(u16 ms)
{
	u16 i,j;
	for(i=ms;i>0;i--)
		for(j=110;j>0;j--);

}


		
void delay_10us(u16 ten_us)//引入延时函数
		 
		 {
			 while(ten_us--);
		 }
void 	exti0_int(void)	 //外部中断0的初始化
{
IT0=1;//设置外部中断的触发方式
EA=1;//打开总中断开关
EX0=1;//开外部中断0

//void 	exti1_int(void)	 //外部中断1的初始化
//{
//IT1=1;//设置外部中断的触发方式
//EA=1;//打开总中断开关
//EX1=1;//开外部中断0


}		 
		 
		 
		 
		 
		 




void main()//关于c的函数
{exti0_int();

	
while(1)
{
	
	//按键按下后返回
	
}
	 }
	 
void exti0() interrupt 0 
{  delay_10us(1000);//消抖
if(KEY3==0)
{
LED1=!LED1;
}


}	













