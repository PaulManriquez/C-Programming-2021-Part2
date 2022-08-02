#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*inicializa el apuntador cadena*/
    const char *cadena="51.2% son admitidos"; //Inicializa la cadena
    double d; //Variable para almacenar la secuencia convertida
    char *ptrCadena; //Crea un apuntador a char

    d=strtod(cadena,&ptrCadena);

    printf("La cadena \"%s\" se convierte en \n", cadena);
    printf("Un valor double %.2f y la cadena \"%s\"\n",d,ptrCadena);
    printf("\n");

    const char *cadena2="-1234567abc";
    char *ptrResto; //Crea un apuntador a char
    long x; //Variable para almacenar la secuencia convertida
    x=strtol(cadena2,&ptrResto,0);
    printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
           "La cadena original es ", cadena2,
           "El valor convertido es ", x,
           "El resto de la cadena original es ",
           ptrResto,
           "El valor convertido mas 567 es ",x+567
           );
    printf("\n\n");
    const char *cadena3="1234567abc";
    unsigned long xx;
    char *ptrResto3;

    xx=strtoul(cadena3,&ptrResto3,0);
    printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
           "La cadena original es ", cadena3,
           "El valor convertido es ",xx,
           "El resto de la cadena original es ",ptrResto3,
           "El valor convertido menos 567 es ",xx-567
           );
    return 0;
}
