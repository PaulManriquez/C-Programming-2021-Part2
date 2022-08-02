#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int N,n;
    int *vector;

    do{
    printf("Dame el tamaño del vector:");
    scanf("%d",&N);
    vector = (int*)malloc(N*sizeof(int));
    if(vector==NULL){
        printf("No se pudo reservar la memoria dinamica:");
    }
    else{
        for(i=0;i<N;i++){
            vector[i]=i;
        }
        for(i=0;i<N;i++){
            printf("%d ",vector[i]);
        }
        putchar('\n');
    }
    printf("\nDesea continuar?(1)");
    scanf("%d",&n);
    putchar('\n');
    }while(n==1);
    //printf("Tamano de vector:%d ",sizeof(vector));
    free(vector);
    return 0;
}
