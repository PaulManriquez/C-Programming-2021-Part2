#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
#include <stdbool.h>
int main()
{
    int numeros[TAMANIO]={0};
    int n,i,j;

    printf("Ordenamiento burbuja mejorado\n");
    for(i=0;i<TAMANIO;i++){
        printf("Ingresa el numero %d: ",i+1);
        scanf("%d",&n);
        numeros[i]=n;
    }

    bool ordenado=false;
    int aux,ciclos=0;

    //for(i=0;i<TAMANIO;i++);
    for(i=0;i<TAMANIO && ordenado==false;i++){
          ordenado=true;
        for(j=0;j<TAMANIO-1;j++){
        if(numeros[j]>numeros[j+1]){
            ordenado=false;
            aux=numeros[j];
            numeros[j]=numeros[j+1],
            numeros[j+1]=aux;
        }
        ciclos++;
        }
    }

    for(j=0;j<TAMANIO;j++){
        printf("%d ",numeros[j]);
    }
    printf("\nNumero de iteraciones:%d ",ciclos);
    return 0;
}
