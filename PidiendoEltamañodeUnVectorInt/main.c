#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,tam=3,n1;
    int vec[3];
    int *ptrN;

    for(i=0;i<tam;i++){
    printf("introduce el numero %d:",i+1);
    scanf("%d",&n1);
    vec[i]=n1;
    printf("\n");
    }
    ptrN=&vec[0];
    int cont=0;
    while(cont<tam){
    printf("%d ",*ptrN);
    ptrN++;
    cont++;
    }

    return 0;
}
