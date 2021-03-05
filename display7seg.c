
#include <xc.h>

char digitos[16] = {0x3F, 0x06, 0x5B, 0x4F, 
                    0x66, 0x6D, 0x7D, 0x07,
                    0x7F, 0x6F, 0x77, 0x7C, 
                    0x39, 0x5E, 0x79, 0x71 };

void disp7seg_init( void )
{
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
}



void display7seg( char num )
{
    if( num >= 0 && num <= 15)
        PORTB = digitos[num];
    
    else 
        PORTB = 0X00;
}