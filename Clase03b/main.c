#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int g;

int main()
{
    //int edad;
    float precio=0;
    /*if(utn_getNumero(&edad,3,"Ingrese edad:\t","\nERROR!!! su error es:",0,199) == 0)
    {
        printf("La edad es: %d",edad);
    }
    */
    if(utn_getNumeroDecimal(&precio,3,"Ingrese precio:\t","\nERROR!!! su error es:",0,100) == 0)
    {
        printf("El Precio es: %.2f pesos",precio);
    }
    return 0;
}

