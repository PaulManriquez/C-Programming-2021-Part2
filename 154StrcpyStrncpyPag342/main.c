#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char x[]="Feliz cumpleanios a ti";
    char y[25];
    char z[15];

    printf("%s%s\n%s%s\n",
           "La cadena en el arreglo x es:",x,
           "La cadena en el arreglo y es:",strcpy(y,x)
           );
    //Copia los primeros 17 caracteres de x dentro de z.No copia el caracter nulo
    strncpy(z,x,17);
    z[17]='\0'; //Termina la cadena en z
    printf("La cadena en el arreglo z es:%s\n",z);
    return 0;
}
