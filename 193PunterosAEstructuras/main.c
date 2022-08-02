#include <stdio.h>
#include <stdlib.h>
/*Punteros y estructuras*/
typedef struct{
    char nombre[30];
    char apellido[40];
    char telefono[15];//Lo hacen con char por la disponibilidad de espacio, con int o long int no funciona
    int edad;
}DatosP;

int main()
{
    DatosP *personalData;
    DatosP Pdatos;
    personalData = &Pdatos;

    printf("Introduce tu nombre: ");
    fgets(Pdatos.nombre,30,stdin);
    printf("Introduce tu apellido: ");
    fgets(Pdatos.apellido,40,stdin);
    printf("Introduce tu telefono: ");
    fgets(Pdatos.telefono,15,stdin);
    printf("Introduce tu edad:");
    scanf("%d",&Pdatos.edad);
    putchar('\n');
    /*Apuntando a la estructura con punteros*/
    printf("Nombre:%s",personalData->nombre);
    printf("Apellido:%s",personalData->apellido);
    printf("Telefono:%s",personalData->telefono);
    printf("Edad:%d\n",personalData->edad);

    return 0;
}
