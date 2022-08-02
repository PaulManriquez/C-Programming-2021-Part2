#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10

int main()
{
    int n[TAMANIO]={0};
    int valor;
    int i,j,k;
    for(k=0;k<TAMANIO;k++){
    printf("Valor en el elemento %d:",k);
    scanf("%d",&valor);
    n[k]=valor;
    }
    printf("\n");
    printf("%s%13s%17s\n","Elemento","Valor","Histograma");
    //Para cada elemento del arreglo n, muestra una barra en el histograma
    for(i=0;i<TAMANIO;i++){
        printf("%7d%13d        ",i,n[i]);
        for(j=1;j<=n[i];j++){
        printf("%c",'*');
        }
        printf("\n");
    }

    return 0;
}
