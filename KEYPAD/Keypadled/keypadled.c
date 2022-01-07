#include<pic.h>
void main()
{
	PORTA=0X00;
	TRISA=0X07;
	PORTB=0X00;
	TRISB=0X00;
	PORTC=0X00;
	TRISC=0X00;
	PORTD=0X00;
	TRISD=0X00;
	PORTE=0X00;
	TRISE=0X00;
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
			RD0=1;RD1=0;RD2=0;RD3=0;RD4=0;RD5=0;RD6=0;
			RD7=0;RE0=0;RE1=0;
		}
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0X5B;
			RD0=1;RD1=1;RD2=0;RD3=0;RD4=0;RD5=0;RD6=0;
			RD7=0;RE0=0;RE1=0;
		}
		if(RA2==1)
		{
			while(RA2==1);
			PORTC=0X4F;
			RD0=1;RD1=1;RD2=1;RD3=0;RD4=0;RD5=0;RD6=0;
			RD7=0;RE0=0;RE1=0;
		}
		RB0=0;
		RB1=1;
		RB2=0;
		RB3=0;
		if(RA0==1)
		{
			while(RA0==1);
			PORTC=0X66;
			RD0=1;RD1=1;RD2=1;RD3=1;RD4=0;RD5=0;RD6=0;
			RD7=0;RE0=0;RE1=0;
		}
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0X6D;
			RD0=1;RD1=1;RD2=1;RD3=1;RD4=1;RD5=0;RD6=0;
			RD7=0;RE0=0;RE1=0;
		}
		if(RA2==1)
		{
			while(RA2==1);
			PORTC=0X7C;
			RD0=1;RD1=1;RD2=1;RD3=1;RD4=1;RD5=1;RD6=0;
			RD7=0;RE0=0;RE1=0;
		}
		RB0=0;
		RB1=0;
		RB2=1;
		RB3=0;
		if(RA0==1)
		{
			while(RA0==1);
			PORTC=0X07;
			RD0=1;RD1=1;RD2=1;RD3=1;RD4=1;RD5=1;RD6=1;
			RD7=0;RE0=0;RE1=0;
		}
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0XFF;
			RD0=1;RD1=1;RD2=1;RD3=1;RD4=1;RD5=1;RD6=1;
			RD7=1;RE0=0;RE1=0;
		}
		if(RA2==1)
		{
			while(RA2==1);
			PORTC=0XE7;
			RD0=1;RD1=1;RD2=1;RD3=1;RD4=1;RD5=1;RD6=1;
			RD7=1;RE0=1;
		}
		RB0=0;
		RB1=0;
		RB2=0;
		RB3=1;
		if(RA1==1)
		{
			while(RA1==1);
			PORTC=0XBF;
			RD0=0;RD1=0;RD2=0;RD3=0;RD4=0;RD5=0;RD6=0;
			RD7=0;RE0=0;RE1=0;
		}
	}
}