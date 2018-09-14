#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 70

typedef struct
{
    char nombre[CANT];
    int edad;
    char dni[9];
    float altura;
}Persona;

int impresionStruct(Persona* aux);
void altaPersona (Persona* pp);

int main()
{
    Persona p;
    altaPersona(&p);
    return 0;
};

int impresionStruct(Persona* aux)
{
    int retorno = 0;
    printf("\n%s%s\n%.2f\n%d",aux->nombre,aux->dni,aux->altura,aux->edad);

    return retorno;
}

void altaPersona (Persona* pp)
{
    printf("Alta - Persona:\n");
    printf("Nombre:\t");
    fgets(pp->nombre,CANT,stdin);
    printf("\nDNI:\t");
    fgets(pp->dni,CANT,stdin);
    printf("\nEdad:\t");
    scanf("%d",pp->edad);
    printf("\nAltura:\t");
    scanf("%f",pp->altura);
}
