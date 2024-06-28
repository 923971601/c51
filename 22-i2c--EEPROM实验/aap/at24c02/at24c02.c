#include "at24c02.h"


void at24c02_write_one_byte(u8 addr,u8 dat)
{
iic_start();
	
iic_write_byte(0xa0);
iic_wait_ack();
iic_write_byte(addr);
iic_wait_ack();
iic_write_byte(dat);
iic_wait_ack();

iic_stop();
delay_ms(10);


}

u8 at24c02_read_one_byte(u8 addr)
{
	u8 temp=0;
	iic_start();
	
iic_write_byte(0xa0);
iic_wait_ack();
iic_write_byte(addr);
iic_wait_ack();
			iic_start();
iic_write_byte(0xa1);
iic_wait_ack();
temp=iic_read_byte(0);
iic_stop();
return temp;
}
	
	
	
	
	
	
	














