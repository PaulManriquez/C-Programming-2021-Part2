#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;    //a es un entero
    int *ptrA; //ptrA Es un apuntador a un entero
    a=7;
    ptrA=&a;//ptrA toma la direccion de a

    printf("La direccion de a es %p"
           "\nEl valor de ptrA es %p",&a,ptrA);

    printf("\n\nEl valor de a es %d"
           "\nEl valor de *ptrA es %d",a,*ptrA);

    printf("\n\nMuestra de que * y & son complementos"
           "uno del otro\n&*ptrA=%p"
           "\n*&ptrA=%p\n",&*ptrA,*&ptrA);

    return 0;
}
