#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 1
typedef struct{
    char nombre[15];
    char apellido[15];
    int  edad;
    char sexo[2];
    long int  telefono;
}persona;

typedef struct{
    char *nombre;
}persona1;

int main()
{
    /*Declaracion de variables de la estructura persona*/
    persona Estvec[3];
    persona1 Est1;

    Est1.nombre="Paul"; //Asigna mediante un puntero paul

    int i;
    //Vector de struct
    for(i=0;i<TAMANIO;i++){
        printf("\nIntroduce tu nombre: ");
        fflush(stdin);
        scanf("%s",Estvec[i].nombre);
        printf("Introduce tu apellido: ");
        fflush(stdin);
        scanf("%s",Estvec[i].apellido);
        printf("Introduce tu edad: ");
        fflush(stdin);
        scanf("%d",&Estvec[i].edad);
        printf("Sexo:M o F:");
        fflush(stdin);
        scanf("%s",Estvec[i].sexo);
        printf("Introduce tu numero de telefono:");
        scanf("%ld",&Estvec[i].telefono);
    }

    //Mostrando los elementos
    putchar('\n');
    for(i=0;i<TAMANIO;i++){
        printf("Nombre:%s\n",Estvec[i].nombre);
        printf("Apellido:%s\n",Estvec[i].apellido);
        printf("Sexo:%s\n",Estvec[i].sexo);
        printf("Edad:%d\n",Estvec[i].edad);
        printf("Telefono:%ld\n",Estvec[i].telefono);
    }

    return 0;
}
