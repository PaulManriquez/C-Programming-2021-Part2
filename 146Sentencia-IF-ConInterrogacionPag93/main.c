#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Introduce el numero y te dire si es mayor a 5:");
    scanf("%d",&n);

    n>5 ? printf("\nEs mayor a 5") : printf("\nEs menor a 5");

    return 0;
}
