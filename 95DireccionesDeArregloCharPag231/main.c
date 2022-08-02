#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arreglo[5];

    printf("     arreglo = %p\n&arreglo[0] = %p\n"
           "    &arreglo = %p\n",arreglo,&arreglo[0],&arreglo
           );

    return 0;
}
