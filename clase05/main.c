#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
#define CANT_EMPLEADOS 5

int mostrarArray (int* pArray, int limite);
int maximoArray(int* pArray,int limite,int* maximo);
int inicializarArray(int* pArray,int limite);

int main()
{
    int edades[CANT_EMPLEADOS];
    int i;
    int valorMaximoArray;
    inicializarArray(edades,CANT_EMPLEADOS);
    mostrarArray(edades,CANT_EMPLEADOS);
    for (i=0;i< CANT_EMPLEADOS;i++)
    {
        if(utn_getNumero(&edades[i],2,"\nEdad?\t","Error!!!",0,200)==-1)
        {
            edades[i]=-1;
        }
    }

    mostrarArray(edades,CANT_EMPLEADOS);
    maximoArray(edades,CANT_EMPLEADOS,&valorMaximoArray);
    printf("\n Maximo: %d",valorMaximoArray);
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

int inicializarArray(int* pArray,int limite){
    int i;
    for (i=0;i<limite;i++){
        pArray[i]=-1;
    }
    return 0;
}


int maximoArray(int* pArray,int limite,int* maximo)
{
    int i;
    int retorno;
    int auxiliarMaximo;

    if(pArray != NULL && limite > 0){
        for (i=0;i<limite;i++)
        {
            if(i==0)
            {
                auxiliarMaximo=pArray[i];
            }else{
                if(auxiliarMaximo<pArray[i]){
                auxiliarMaximo=pArray[i];
                }
            }
            if(i==limite-1){
                *maximo = auxiliarMaximo;
            }
            retorno=0;
        }


    }
    return retorno;
}
