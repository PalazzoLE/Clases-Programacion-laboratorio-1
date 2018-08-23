#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int minimo;
    int maximo;
    int medio;
    printf("Ingrese un número: ");
    scanf("%d",&numero1);
    maximo=numero1;
    minimo=numero1;
    printf("Ingrese otro número: ");
    scanf("%d",&numero2);
    printf("Ingrese una ultima vez un número: ");
    scanf("%d",&numero3);
    if(numero2>maximo){
        maximo=numero2;
    }else{
        if(numero2<minimo){
            minimo=numero2;
        }else{
            medio=numero2;
        }
    }
    if(numero3>maximo){
        maximo=numero3;
    }else{
        if(numero3<minimo){
            minimo=numero3;
        }else{
            medio=numero3;
        }
    }
    printf("\nEl maximo es: %d",maximo);
    printf("\nEl minimo es: %d",minimo);
    printf("\nEl del medio es: %d",medio);
    return 0;
}
