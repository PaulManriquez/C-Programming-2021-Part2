#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int *ptrM,int m, int n);
int main()
{
    int b[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    imprimirMatriz(&b[0][0],4,3);
    return 0;
}
void imprimirMatriz(int *ptrM,int m,int n)
{
    int i,j;
    printf("La matriz es:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(ptrM+i*n+j));
        }
        printf("\n");
    }
}
