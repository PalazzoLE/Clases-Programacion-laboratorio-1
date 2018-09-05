#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANT_EMPLEADOS 5

int mostrarArray (int* pArray, int limite);

int main()
{
    int edades[CANT_EMPLEADOS];
    int i;

    for (i=0;i< CANT_EMPLEADOS;i++)
    {
        if(utn_getNumero(&edades[i],2,"Edad?\t","Error!!!",0,200)==-1)
        {
            edades[i]=-1;
        }
    }

    mostrarArray(edades,CANT_EMPLEADOS);
    return 0;
}

int mostrarArray (int* pArray, int limite)
{

    int i;
    for (i=0;i<limite;i++)
    {
        printf("\n%d",pArray[i]);
    }

    return 0;
}
