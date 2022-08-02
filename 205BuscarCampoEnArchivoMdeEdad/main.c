#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int edad;
    char nombre[20];
    char apellido[20];
    int opcion;
    FILE *ptrFC;
    if((ptrFC=fopen("MayoresDeEdad.dat","r"))==NULL)
    {
        printf("El archivo no se pudo leer\n");
    }
    else
        {
        printf("\tMenu\n");
        printf("1.-Mayores de edad\n");
        printf("2.-Menores de edad\n");
        printf("?");
        scanf("%d",&opcion);
        while(opcion == 1 || opcion==2){
            fscanf(ptrFC,"%d%s%s",&edad,nombre,apellido);
            switch(opcion){
            case 1:
                printf("\nMayores de edad:\n");
                while(!feof(ptrFC)){
                    if(edad>=18){
                        printf("%d %s %s\n",edad,nombre,apellido);
                    }
                    fscanf(ptrFC,"%d%s%s",&edad,nombre,apellido);
                }
                break;
            case 2:
                 printf("Menores de edad\n");
                fscanf(ptrFC,"%d%s%s",&edad,nombre,apellido);
                while(!feof(ptrFC)){
                 if(edad<18){
                    printf("%d %s %s\n",edad,nombre,apellido);
                }
                fscanf(ptrFC,"%d%s%s",&edad,nombre,apellido);
                }
                break;
            }
            putchar('\n');
            printf("\nDesea ingresar otra opcion?");
            scanf("%d",&opcion);
            rewind(ptrFC);
            system("cls");
        }
    }
    printf("\nFin de la ejecucion.");
    return 0;
}
