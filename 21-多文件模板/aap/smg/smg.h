#ifndef _smg.H
#define _smg.H

#include"public.h"
sbit LSA=P2^2;
sbit LSB=P2^3;
sbit LSC=P2^4;


#define  SMG_A_DP_PORT P0

extern	u8 gsmg_code[17];



void smg_display(void);
#endif