

#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"
#include "botoes.h"


void main(void)
{
    int cont = 0;
    int t = 3000;
    disp7seg_init();
    botoes_init();
    
    while(1)
    {
        display7seg(cont);
        if (botao_cres() == 1 )
        {
            cont++; 
            delay(300);
            if (cont > 9)
                cont = 0;
            while(botao_cres() == 1)
            {
                display7seg(cont);
            }
        }
        if (botao_decres() == 1)
        {
            cont--;
            delay(300);
            if( cont < 0)
                cont = 9;
            while(botao_decres() == 1)
            {
                display7seg(cont);
            }
        }
    }
}
