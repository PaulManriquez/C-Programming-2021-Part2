#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5

void modificaArreglo(int b[],int tamanio);
void modificaElemento(int e);
int main()
{
    int a[TAMANIO]={0,1,2,3,4};
    int i;
    printf("Efectos de pasar arreglos completos por referencia:\n\n"
           "Los valores del arreglo original son:\n");
           //Muestra el arreglo original
           for(i=0;i<TAMANIO;i++){
            printf("%3d",a[i]);
           }
           printf("\n");
           //Pasa el arreglo a modicaArreglo por referencia
           modificaArreglo(a,TAMANIO);
           printf("Los valores del arreglo modificado son:\n");
           for(i=0;i<TAMANIO;i++){
            printf("%3d",a[i]);
           }
           //Muestra el valor de a[3]
           printf("\n\nEfectos de pasar un elemento del arreglo"
                  "por valor:\n\nEl valor de a[3] es %d\n",a[3]);

           modificaElemento(a[3]); //<<<<<Pasa el elemento A[3] por valor
           //Muestra el valor de a[3]
           printf("El valor de a[3] es %d\n",a[3]);
           //Mostrando los valores finales de todo el arreglo
           printf("\n\nMostrando los valores finales de todo el arreglo\n");
           for(i=0;i<TAMANIO;i++){
            printf("%3d",a[i]);
           }
           printf("\n");
           modificaElemento(a[3]);
           printf("El valor de a[3] es %d\n",a[3]);
           //<<<<<<Cuando modificamos elemento no afecta el valor de nuestro vector
    return 0;
}
//En la siguiente funcion, b apunta al arreglo original a en memoria
void modificaArreglo(int b[],int tamanio)
{
    int j;
    //multiplicamos cada elemento x2
    for(j=0;j<tamanio;j++){
        b[j]*=2;
    }
}

//En la funcion modificaElemento, "e" es una copia local del elemento a[3] del arreglo desde main
void modificaElemento(int e)
{
    e=e*2;
    printf("El valor en modificaElemento es %d\n",e);
}
