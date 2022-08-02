#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int a[N];
    int *b;
    int i, tam;
    b=(int*) malloc (N * sizeof(int));
    printf("%d \n",sizeof(b));
    for(i=0;i<N;i++){
        //b[i]=a[i];
        b[i]=i;
    }
    printf("Introduzca un nuevo tamaño para el array b:");
    scanf("%d",&tam);
    realloc (b,tam);
    i=0;
    while(i<=tam){
    printf("%d ",b[i] );
    i++;
    }

    printf("%d \n",sizeof(b));

    return 0;
}
