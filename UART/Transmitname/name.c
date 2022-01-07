#include<pic.h>
#define _XTAL_FREQ 4000000
__CONFIG(0X2CE4);
void tx(char *pointer[])
{
	int i;
	for(i=0;i<5;i++)
	{
		TXREG=*(pointer++);
		 //__delay_ms(20);// 
		while(TXIF==0);
		TXIF=0;	
		
	}
	while(TXIF==0);
	TXIF=0;	
}	
void main()
{

    PORTC=0X00;
	TRISC=0X80;
 	ANSEL=0X00;
 	ANSELH=0X00;
	TXSTA=0X26;
	RCSTA=0X90;
	SPBRG=25;
	char name[]="sabin";
	int *pointer;
	pointer=&name;
	while(1) 
    {
		tx(pointer);
        __delay_ms(500);// 
    }
}