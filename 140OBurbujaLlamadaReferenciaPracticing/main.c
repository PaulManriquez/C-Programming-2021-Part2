#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
void cambiaPosiciones(int *ptrPos,int vec1[]);
int main()
{
    int vec[TAMANIO]={1,4,2,3,22};
    int resp;
    int i,j;

    for(i=0;i<TAMANIO;i++)
    {
        for(j=0;j<TAMANIO-1;j++){
            if(vec[j]>vec[j+1]){
            cambiaPosiciones(&j,vec);
            }
        }
    }

    for(i=0;i<TAMANIO;i++){
    printf("%d ",vec[i]);
    }

    return 0;
}
void cambiaPosiciones(int *ptrPos,int vec1[])
{
    int resp;
    resp=vec1[*ptrPos];
    vec1[*ptrPos]=vec1[*ptrPos+1];
    vec1[*ptrPos+1]=resp;
}
