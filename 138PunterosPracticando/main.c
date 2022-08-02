#include <stdio.h>
#include <stdlib.h>
void LlamadaElemento(int vec1[], int *ptrElementoF);
int main()
{
    int n;
    int vec[5]={1,23,3,22,4};
    printf("Introduzca el elemento que desea visualizar:");
    scanf("%d",&n);
    LlamadaElemento(vec,&n);
    return 0;
}
void LlamadaElemento(int vec1[],int *ptrElementoF)
{
    printf("El elemento a visualizar es el %d = %d ",*ptrElementoF,vec1[*ptrElementoF]);

}
