#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int maximo;
    int minimo;
    float promedio;
    float suma=0;
    int i;
    for (i=0;i<10;i++){
        printf("Ingrese el numero %d:\t",i+1);
        scanf("%d",&numero);

        if(i==0){
            maximo=numero;
            minimo=numero;
        }else{
            if(numero>maximo){
                maximo=numero;
            }else{
                if(numero<minimo){
                    minimo=numero;
                }
            }
        }
        suma= suma+numero;
        if (i==9){
            promedio = suma / (i+1);
        }
    }
    printf("\nEl maximo es: %d",maximo);
    printf("\nEl minimo es: %d",minimo);
    printf("\nEl promedio es: %f",promedio);

    return 0;
}
