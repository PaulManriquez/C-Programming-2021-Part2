#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char nombre[20];
    char apellido[20];
    FILE *ptrCF;
    if((ptrCF=fopen("MayoresDeEdad.dat","w"))==NULL){
        printf("No se pudo crear o abrir el archivo.\n");
    }
    else{
        printf("Edad  -  Nombre  -  apellido,ctrl+z para salir\n");
        printf("?");
        scanf("%d%s%s",&edad,nombre,apellido);
        while(!feof(stdin)){
            fprintf(ptrCF,"%d %s %s\n",edad,nombre,apellido);
            printf("?");
            scanf("%d%s%s",&edad,nombre,apellido);
        }
        fclose(ptrCF);//Cierra el archivo de forma explicita
    }
    return 0;
}
