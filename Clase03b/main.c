#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int g;

int main()
{
    int edad;
    if(utn_getNumero(&edad,3,"Ingrese edad:\t","\nERROR!!! su error es:",0,199) == 0)
    {
        printf("La edad es: %d",edad);
    }

    return 0;
}

