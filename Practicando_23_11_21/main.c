#include <stdio.h>
#include <stdlib.h>
int suma(int *ptrAA);
int main()
{
    int a,b,c;
    int *ptrA=NULL,*ptrB=NULL,*ptrC=NULL;

    printf("Inserte a:");
    scanf("%d",&a);
    printf("Inserte b:");
    scanf("%d",&b);
    printf("Inserte c:");
    scanf("%d",&c);

    ptrA=&a;
    ptrB=&b;
    ptrC=&c;

    printf("\n\tEsto ingresaste(punteros dentro del main)\n");
    printf("A:%d\nB:%d\nC:%d",*ptrA,*ptrB,*ptrC);

    putchar('\n');
    putchar('\n');

    printf("\nPaso por indireccion de a\n");
    printf("La suma es:%d",suma(&a));


    return 0;
}
int suma(int *ptrAA){
   return *ptrAA+2;
}
