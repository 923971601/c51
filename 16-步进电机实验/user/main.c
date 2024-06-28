#include "reg52.h"//引入头文2件
		typedef  unsigned int u16;//将函数名称简洁
		typedef  unsigned  char u8;//将函数名称简洁
	 
		sbit IN1_A=P1^0;//步进电机默认方向，将以下串口倒置即转换方向
	 	sbit IN2_B=P1^1;
		sbit IN3_C=P1^2;
		sbit IN4_D=P1^3;
		
		sbit KEY1=P3^1;
		sbit KEY2=P3^0;
		sbit KEY3=P3^2;
		sbit KEY4=P3^3;
		
#define KEY1_PRESS 1		
#define KEY2_PRESS 2		
#define KEY3_PRESS 3	
#define KEY4_PRESS 	4
#define KEY_UNPRESS 0		

 #define STEPMOTOR_MAXSPEED 1000
#define STEPMOTOR_MINSPEED 2000









void delay_ms(u16 ms)
{
	u16 i,j;
	for(i=ms;i>0;i--)
		for(j=110;j>0;j--);

}

void step_motor_28BYJ48_send_pulse(u8 step,u8 dir)
{u8 temp=step;
	
	if(dir==0)
	temp=7-step;
switch(temp)
{
	  case 0: IN1_A=1;IN2_B=0;IN3_C=0;IN4_D=0;break;
		case 1: IN1_A=1;IN2_B=1;IN3_C=0;IN4_D=0;break;
		case 2: IN1_A=0;IN2_B=1;IN3_C=0;IN4_D=0;break;
		case 3: IN1_A=0;IN2_B=1;IN3_C=1;IN4_D=0;break;
		case 4: IN1_A=0;IN2_B=0;IN3_C=1;IN4_D=0;break;
		case 5: IN1_A=0;IN2_B=0;IN3_C=1;IN4_D=1;break;
		case 6: IN1_A=0;IN2_B=0;IN3_C=0;IN4_D=1;break;
		case 7: IN1_A=1;IN2_B=0;IN3_C=0;IN4_D=1;break;
		default: IN1_A=0;IN2_B=0;IN3_C=0;IN4_D=0;break;
	
}

} 

		
void delay_10us(u16 ten_us)//引入延时函数
		 
		 {
			 while(ten_us--);
		 }
		 
u8	 key_scan(u8 mode)	 
	{
		static u8 key =1;
	if(mode) key=1;
		
		
		
		
		if(key==1&&(  KEY1==0||KEY2==0||KEY3==0||KEY4==0))
		{
			delay_10us(10000);//消抖处理
			key=0;
			
			if (KEY1==0)
			return KEY1_PRESS ;
			
			else if (KEY2==0)
			return KEY2_PRESS ;
			
			else if (KEY3==0)
			return KEY3_PRESS ;
			
			
			else if (KEY4==0)
			return KEY4_PRESS ;
			
			
		}
		
		else if (KEY1==0&&KEY2==0&&KEY3==0&&KEY4==0)
			
		{
			key=1;
		

		}
		
				return KEY_UNPRESS;
		
	}
	 
	 




void main()//关于c的函数
{

	u8 key=0;
	u8 dir=0;
	u8 step=0;
	u8 speed=STEPMOTOR_MAXSPEED ;
	
	
while(1)
{
 key=key_scan(0);
	if(key==KEY1_PRESS)
	       dir=!dir;
	else if(key==KEY2_PRESS)
	{
	        if(speed>STEPMOTOR_MAXSPEED )
		          speed-=100;
	
	}
	
	else if(key==KEY3_PRESS)
	{
	        if(speed<STEPMOTOR_MINSPEED )
		          speed+=100;
				step_motor_28BYJ48_send_pulse(step++,dir)	;
				if(step==8)step=0;	
					delay_ms(speed);
	
	}
	
	
	
	
	
	
	
	
}
	 }
	 

	
