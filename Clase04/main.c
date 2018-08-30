#include <stdio_ext.h>
#include <stdlib.h>

int getEntero (int* respuesta);

int main()
{
    int respuesta=0;
    getEntero(&respuesta);
    printf("\n\tEl numero ingresado es:\t %d",respuesta);
    return 0;
}


int getEntero (int* respuesta){
    int numero;
    printf("Por favor ingrese un entero");
    scanf("%d",&numero);
    *respuesta= numero;
    return 0;
}
