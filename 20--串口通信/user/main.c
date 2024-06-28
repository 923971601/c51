#include "reg52.h"//引入头文2件
		typedef  unsigned int u16;//将函数名称简洁
		typedef  unsigned  char u8;//将函数名称简洁
	 

sbit KEY3=P3^2;
sbit LED1=P2^0;


void uart_init(u8 baud)//串口初始化
{
	TMOD|=0x20;//设置为计数器工作方式
	SCON=0x50;//设置为工作方式1
	PCON=0x80;//波特率加倍
	TH1=baud;//计数器初始值设置
	TL1=baud;
	ES=1;//打开接受中断
	EA=1;//打开总中断
	TR1=1;//打开计数器




}





void delay_ms(u16 ms)
{
	u16 i,j;
	for(i=ms;i>0;i--)
		for(j=110;j>0;j--);

}

//void time0_inte(void)
//{
//	TMOD|=0x01;
//	TH0=0xFC;
//	ET0=1;
//	EA=1;
//	TR0=1;
//	




//}
//		 
//		 
		 




void main()//关于c的函数
{
//time0_inte();
	uart_init(0XFA);
while(1)
{
	

	
}
	 

}

void uart() interrupt 4
{
u8 rec_date=0;
	RI=0;
	rec_date=SBUF;
	SBUF=rec_date;
	while(!TI);

TI=0;

}



























//	void time() interrupt 1//中断

//{static u16 i=0;

//	
//	
//	
//	
//TMOD|=0x01;
//	TH0=0xFC;

//i++;
//if(i==1000)//定时一秒钟
//{
//i=0;
//	LED1=!LED1;



//}


//}











