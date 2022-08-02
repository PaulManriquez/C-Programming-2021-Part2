#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Cadena a entero

    char cadena[]="48";
    int num=atoi(cadena);
    printf("%d",num*2);

    //
    //Cadena a float

        char cadena2[]="48.098";
        float num2=atof(cadena2);
        printf("\n%f",num2*2);

    //Entero a cadena

        int entero=368;
        char cad[4];
        sprintf(cad,"%d",entero);
        printf("\n%s",cad);
            //with out \n

    return 0;
}
