#include<pic.h>
void main()
{
	PORTA=0X00;
	TRISA=0X07;
	PORTB=0X00;
	TRISB=0X00;
	PORTC=0X00;
	TRISC=0X00;
	ANSEL=0X00;
	ANSELH=0X00;
	while(1)
	{
		RB0=1;
		RB1=0;
		RB2=0;
		RB3=0;
		if(RA0==1)
		{
			while(RA0==1);
			PORTC=0X06;
		}
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0X5B;
		}
		if(RA2==1)
		{
			while(RA2==1);
			PORTC=0X4F;
		}
		RB0=0;
		RB1=1;
		RB2=0;
		RB3=0;
		if(RA0==1)
		{
			while(RA0==1);
			PORTC=0X66;
		}
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0X6D;
		}
		if(RA2==1)
		{
			while(RA2==1);
			PORTC=0X7C;
		}
		RB0=0;
		RB1=0;
		RB2=1;
		RB3=0;
		if(RA0==1)
		{
			while(RA0==1);
			PORTC=0X07;
		}
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0XFF;
		}
		if(RA2==1)
		{
			while(RA2==1);
			PORTC=0XE7;
		}
		RB0=0;
		RB1=0;
		RB2=0;
		RB3=1;
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0XBF;
		}
	}
}