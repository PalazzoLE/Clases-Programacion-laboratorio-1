#include <stdio.h>
#include <stdlib.h>

int getEdad(int* edad);
int validacionInt(int auxiliarEdad);

int main()
{
    int edad;
    getEdad(&edad);
    return 0;
}

int getEdad(int* edad){
    int contadorIntentos=0;
    int auxiliarEdad;
    int flag=0;
    do{
    printf("Ingresar la edad:\t");
    scanf("%d",&auxiliarEdad);
    flag=validacionInt(auxiliarEdad);
    if(flag==1){
        break;
    }else{
    if(flag==0){
        contadorIntentos++;
            }
        }
    }while(contadorIntentos<5);
    if (flag==1){
        printf("la edad es:\t %d",auxiliarEdad);
    }
    return 0;
};

int validacionInt(int auxiliarEdad){
    int flag2=0;

        if (auxiliarEdad >= 0 && auxiliarEdad <= 199){
            flag2 = 1;
        }

    return flag2;
};
