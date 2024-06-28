#include "reg52.h"//引入头文2件
	 typedef  unsigned int u16;//将函数名称简洁
	 typedef  unsigned  char u8;//将函数名称简洁
	#define KEY_MATRIX_PORT P1

#define  SMG_A_DP_PORT P0
	u8 gsmg_code[17]={0x3f, 0x06,0x5b, 0x4f, 0x66,0x6d, 0x7d, 0x07,0X6f ,0x7f,0X6f,0x77,0x7c,0x39,0x5e,0x79,0x71,};//数码管0-f



void delay_10us(u16 ten_us)//引入延时函数
		 
		 {
			 while(ten_us--);
		 }
	
u8 key_matrix_flip_scan(void)
{  static u8   key_value=0;
	
	
    KEY_MATRIX_PORT=0x0f;
if( KEY_MATRIX_PORT!=0x0f)
{
	
	if( KEY_MATRIX_PORT!=0x0f)
	{
delay_10us(1000);//延时消抖
switch(KEY_MATRIX_PORT)
{//扫描列
	case 0x07:key_value=1;break;
case 0x0b:key_value=2;break;
case 0x0d:key_value=3;break;
case 0x0e:key_value=4;break;
}
//扫描行
    KEY_MATRIX_PORT=0xf0;
switch(KEY_MATRIX_PORT)
{case 0x70:key_value=key_value;break;
case 0xb0:key_value=key_value+4;break;
case 0xd0:key_value=key_value+8;break;
case 0xe0:key_value=key_value+12;break;
}
while(KEY_MATRIX_PORT!=0xf0);
}

}
else 
	key_value=0;
return key_value;
}




void main()

{
  u8 key=0;

while(1)
{
key=key_matrix_flip_scan();
	
	if (key!=0)
	{
 SMG_A_DP_PORT =gsmg_code[key];
	 
	}
}

}



