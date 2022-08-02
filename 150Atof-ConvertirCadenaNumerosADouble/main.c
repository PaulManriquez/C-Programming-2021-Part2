#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;
    d=atof("99.0");
    printf("%s%.3f\n%s%.3f\n",
           "La cadena \99.0\ convertida a double es: ",d,
           "El valor convertido dividido entre 2 es: ",d/2.0
           );

    printf("\n");

    int i;
    i=atoi("2593");
    printf("%s%d\n%s%d\n",
           "La cadena \ 2593 \ converida a int es: ",i,
           "El valor convertido menos 593 es: ",i-593
           );

    printf("\n");

    long l;
    l=atol("1000000");
    printf("%s%ld\n%s%ld\n",
           "La cadena \ 1000000 \ convertida a long int es ",l,
           "El valor convertido dividido entre 2 es ",l/2
           );

    return 0;
}
