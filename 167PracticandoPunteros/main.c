#include <stdio.h>
#include <stdlib.h>

void ordena(int *ptrn1, int *ptrn2);
int main()
{
    int n1,n2;
    printf("Ingrese los 2 numeros:");
    scanf("%d%d",&n1,&n2);
    printf("Numeros ingresados:%d y %d",n1,n2);
    printf("\nNumeros ordenados:");
    ordena(&n1,&n2);
    return 0;
}
void ordena(int *ptrn1,int *ptrn2)
{
    if(*ptrn1 > *ptrn2)
    {
        printf("%d > %d ",*ptrn1,*ptrn2);
    }
    else{
        printf("%d > %d ",*ptrn2,*ptrn1);
    }
}
