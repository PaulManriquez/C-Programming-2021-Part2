#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char nombre[20];
    char apellido[20];
    FILE *ptrCF;
    if((ptrCF=fopen("MayoresDeEdad.dat","r"))==NULL){
        printf("El archivo no pudo abrirse\n");
    }
    else{
        printf("Edad - Nombre - Apellido\n");
        fscanf(ptrCF,"%d%s%s",&edad,nombre,apellido);
        while(!feof(ptrCF)){
            printf("%d %s %s\n",edad,nombre,apellido);
            fscanf(ptrCF,"%d%s%s",&edad,nombre,apellido);
        }
        fclose(ptrCF);
    }

    return 0;
}
