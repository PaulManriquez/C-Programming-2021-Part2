#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    const char *cadena="Esta es una prueba";
    char caracter1='a';
    char caracter2='z';

    //Si el caracter se encuentra en cadena
    if(strchr(cadena,caracter1)!=NULL){
        printf("\'%c\ se encuentra en \"%s\".\n",
               caracter1,cadena);
    }
    else{
        printf("\'%c\' no se encontro en \"%s\". \n",
               caracter1,cadena);
    }

    //Si el caracter2 se encuentra en cadena
    if(strchr(cadena,caracter2)!=NULL){
        printf("\'%c\ se encuentra en \"%s\".\n",
               caracter2,cadena);
    }
    else{
        printf("\'%c\' no se encontro en \"%s\". \n",
               caracter2,cadena);
    }
    return 0;
}
