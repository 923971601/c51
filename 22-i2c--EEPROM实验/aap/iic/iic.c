#include "iic.h"
//起始信号
void iic_start(void)
{
IIC_SCL=1;
IIC_SDA= 1 ;
delay_10us(1);
IIC_SDA=0;
	delay_10us(1);

	

}
//终止信号
void iic_stop(void)
	
{

IIC_SCL=1;
IIC_SDA= 0 ;
delay_10us(1);
IIC_SDA= 1 ;
delay_10us(1);

}
//应答信号
void iic_ack(void)
	
{
IIC_SCL=0;
IIC_SDA= 0 ;
delay_10us(1);
IIC_SCL=1;
delay_10us(1);
IIC_SCL=0;

}


void iic_nack(void)
	
{
IIC_SCL=0;
IIC_SDA= 1 ;
delay_10us(1);
IIC_SCL=1;
delay_10us(1);
IIC_SCL=0;

}


u8 iic_wait_ack(void)
{
	u8 time_time=0;
	
IIC_SCL = 0;
delay_10us(1);

while(IIC_SDA)
{

time_time++;
	if(time_time>=100)
	{
	iic_stop();
		return 1;
	
	
	}

}
IIC_SCL = 0;
	return 0;
}


void iic_write_byte(u8 dat)
{
u8 i=0;
	IIC_SCL = 0;
for(i=0;i<8;i++)//8次将dat的8位都移一位

{

if((dat&0x80)>0)//1000 0000最高位传输
IIC_SDA=1;

else 
IIC_SDA=0;
dat<<=1;//将次高位移到最高位，进行传输
IIC_SCL = 1;//高电平稳定
delay_10us(1);
IIC_SCL = 0;
delay_10us(1);
}

}


u8 iic_read_byte(u8 ack)
{

u8 i=0;

u8 receive=0;

for(i=0;i<8;i++)

{
IIC_SCL = 0;
delay_10us(1);

IIC_SCL = 1;
delay_10us(1);
receive<<=1;
if(IIC_SDA)receive++;

}
if(!ack)iic_nack();
else iic_ack();

return receive;

}

















