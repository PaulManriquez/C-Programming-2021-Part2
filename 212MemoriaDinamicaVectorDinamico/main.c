#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void aleatorio(int *vector[]);

int main()
{
    int *vector;
    vector=(int*)malloc(N*sizeof(int));
    if(vector==NULL){
        printf("No se ha podido reservar espacio de memoria\n");
    }
    else{
     aleatorio(vector);
    }
    return 0;
}

void aleatorio(int *vector[])
{
    int i;
    srand(time(NULL));

    for(i=0;i<N;i++){
        vector[i]=rand()%3;
        printf("%d ",vector[i]);
    }
    putchar('\n');
}
