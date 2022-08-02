#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10
int main()
{
    int a[TAMANIO]={2,6,4,8,10,12,89,68,45,37};
    int pasadas; //Cuantas veces va iterar nuestro ordenamiento
    int i;
    int almacena; //Ubicacion temporal para el intercambio de elementos

    printf("Ordenamiento de datos en el orden original\n");
    for(i=0;i<TAMANIO;i++){
        printf("%4d",a[i]);
        }
    //Ordenamiento de burbuja
    for(pasadas=1;pasadas<TAMANIO;pasadas++){
    for(i=0;i<TAMANIO-1;i++){

        if(a[i]>a[i+1]){
            almacena=a[i];
            a[i]=a[i+1];
            a[i+1]=almacena;
        }
    }
    }

    printf("\nLos elementos ordenados son:\n");
    for(i=0;i<TAMANIO;i++){
        printf("%4d",a[i]);
    }


    return 0;
}
