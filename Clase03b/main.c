#include <stdio_ext.h>
#include <stdlib.h>

int getEdad(int* pEdad,int reintentos,char* mensaje,char* mensajeError);

int main()
{
    int edad;
    if(getEdad(&edad,3,"Ingrese edad:\t","\nERROR!!! su error es:") == 0)
    {
        printf("La edad es: %d",edad);
    }

    return 0;
}

int getEdad(int* pEdad,int reintentos,char* mensaje,char* mensajeError)
{
    int retorno = -1;
    int auxiliarEdad;

    for(;reintentos > 0;reintentos--)
    {
        printf("%s",mensaje);
        if(scanf("%d",&auxiliarEdad) == 1)
        {
            if(auxiliarEdad >= 0 && auxiliarEdad < 199)
            {
                *pEdad = auxiliarEdad;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s",mensajeError);
                printf("\nLa edad esta fuera de rango [0-199]\n");
            }
        }
        else
        {
            printf("%s",mensajeError);
            printf("\nLa edad no numerica\n");
            __fpurge(stdin);
        }
    }
    return retorno;
}
