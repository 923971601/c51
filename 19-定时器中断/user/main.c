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

void time0_inte(void)
{
	TMOD|=0x01;
	TH0=0xFC;
	ET0=1;
	EA=1;
	TR0=1;
	




}
		 
		 
		 




void main()//关于c的函数
{
time0_inte();
	
while(1)
{
	

	
}
	 

}


	void time() interrupt 1//中断

{static u16 i=0;

	
	
	
	
TMOD|=0x01;
	TH0=0xFC;

i++;
if(i==1000)//定时一秒钟
{
i=0;
	LED1=!LED1;



}


}











