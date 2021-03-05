


#include <xc.h>
#include "config.h"

#define UP           PORTDbits.RD3
#define DOWN         PORTDbits.RD2

void botoes_init (void)
{
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
}

char botao_cres (void)
{
    return(UP);
}

char botao_decres (void)
{
    return(DOWN);
}
