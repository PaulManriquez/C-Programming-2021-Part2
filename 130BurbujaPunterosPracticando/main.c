#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
void burbuja(int *const A,const int tamanio);

int main()
{
    int a[TAMANIO]={2,3,1,5,4};

    burbuja(a,TAMANIO);

    int  i;
    printf("Ordenado:\n");
    for(i=0;i<TAMANIO;i++){
      printf("%d ",a[i]);
    }

    return 0;
}
void burbuja(int *const A,const int tamanio){

int pasadas,j,almacenar;

void ordenar(int *ptrN1,int *ptrN2);//Encabezado de la funcion

for(pasadas=0;pasadas<TAMANIO;pasadas++){
        for(j=0;j<TAMANIO-1;j++){
            if(A[j]>A[j+1]){
                ordenar(&A[j],&A[j+1]);
            }
        }
    }
}
void ordenar (int *ptrN1, int *ptrN2){

        int almacenar;

        almacenar=*ptrN1;
        *ptrN1=*ptrN2;
        *ptrN2=almacenar;

}
