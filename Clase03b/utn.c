#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int utn_getEntero(int* pEdad,int reintentos,char* mensaje,char* mensajeError,int min,int max)
{
    int retorno = -1;
    int auxiliarEdad;

    for(;reintentos > 0;reintentos--)
    {
        printf("%s",mensaje);
        if(scanf("%d",&auxiliarEdad) == 1)
        {
            if(auxiliarEdad < max && auxiliarEdad >= min)
            {
                *pEdad = auxiliarEdad;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s",mensajeError);
                printf("\nfuera de rango [%d-%d]\n",min,max);
            }
        }
        else
        {
            printf("%s",mensajeError);
            printf("\nNo es un numero\n");
            __fpurge(stdin);
        }
    }
    return retorno;
}
