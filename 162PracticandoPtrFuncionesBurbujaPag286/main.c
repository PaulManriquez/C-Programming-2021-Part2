#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10
void ordenaBurbuja(int *const arreglo, const int tamanio);
int main()
{
    int a[TAMANIO]={2,6,4,8,10,12,89,68,45,37};
    int i;
    printf("Elementos de datos en el orden original\n");
    //Mostramos el arreglo original
    for(i=0;i<TAMANIO;i++){
        printf("%d ",a[i]);
    }

    ordenaBurbuja(a,TAMANIO);
    printf("\nElementos ordenados:\n");
    for(i=0;i<TAMANIO;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
/*El encabezado de la funcion declara arreglo como int*arreglo en lugar de int arreglo[],
para indicar que OrdenaBurbuja recibe un arreglo con un solo subindice como argumento*/
void ordenaBurbuja(int *const arreglo,const int tamanio)
{
    /*Declaramos el prototipo de funcion ,
    asegurando que no pueda ser llamada en ningun otro lado*/
    void intercambia(int *ptrElemento1, int *ptrElemento2);
    int pasada;
    int j;
    for(pasada=0;pasada<tamanio-1;pasada++){
        for(j=0;j<tamanio-1;j++){
            if(arreglo[j]>arreglo[j+1]){
                intercambia(&arreglo[j],&arreglo[j+1]);
            }
        }
    }
}
void intercambia(int *ptrElemento1,int *ptrElemento2)
{
    int almacena=*ptrElemento1;
    *ptrElemento1=*ptrElemento2;
    *ptrElemento2=almacena;

}
