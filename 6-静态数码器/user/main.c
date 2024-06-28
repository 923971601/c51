#include "reg52.h"//引入头文2件
	 typedef  unsigned int u16;//将函数名称简洁
	#define LED_PORT    P2//使用宏定义将p2口定义
typedef  unsigned  char u8;//将函数名称简洁
#define  SMG_A_DP_PORT P0
	u8 gsmg_code[17]={0x3f, 0x06,0x5b, 0x4f, 0x66,0x6d, 0x7d, 0x07,0X6f ,0x7f,0X6f,0x77,0x7c,0x39,0x5e,0x79,0x71,};//数码管0-f
	
void delay_10us(u16 ten_us)//引入延时函数
		 
		 {
			 while(ten_us--);
		 }
		 
		 
	 
	 
	 



void main()//关于c的函数
{

	

 u8  i=0;

	
	while(1)
	
	{
	for(i=0;i<8;i++)
	 {
	 LED_PORT=~(0x01<<i);
	 delay_10us(50000);
		 i>8; break;
		 
	 }
	 

	
	
	SMG_A_DP_PORT=gsmg_code[0];
			delay_10us(50000);
SMG_A_DP_PORT=gsmg_code[1];
delay_10us(50000);
	
	
	
SMG_A_DP_PORT=gsmg_code[2];
	delay_10us(50000);
	
	
SMG_A_DP_PORT=gsmg_code[3];
	delay_10us(50000);
	SMG_A_DP_PORT=gsmg_code[4];
			delay_10us(50000);
SMG_A_DP_PORT=gsmg_code[5];
	delay_10us(50000);
	
	
	
SMG_A_DP_PORT=gsmg_code[6];
	delay_10us(50000);
	
	
SMG_A_DP_PORT=gsmg_code[7];
	delay_10us(50000);
	SMG_A_DP_PORT=gsmg_code[8];
			delay_10us(50000);
SMG_A_DP_PORT=gsmg_code[9];
	delay_10us(50000);
	
	
	
SMG_A_DP_PORT=gsmg_code[10];
	delay_10us(50000);
	
	
SMG_A_DP_PORT=gsmg_code[11];
	delay_10us(50000);
	SMG_A_DP_PORT=gsmg_code[12];
			delay_10us(50000);
SMG_A_DP_PORT=gsmg_code[13];
	delay_10us(50000);
	
	
	
SMG_A_DP_PORT=gsmg_code[14];
	delay_10us(50000);
	
	
SMG_A_DP_PORT=gsmg_code[15];
	delay_10us(50000);
	
		SMG_A_DP_PORT=gsmg_code[16];
	delay_10us(50000);
	
	
SMG_A_DP_PORT=gsmg_code[17];
	delay_10us(50000);
	

		
		
		
		

	
}
	 
	 }
		 
		
		
		
		
		
	

	
	
 
