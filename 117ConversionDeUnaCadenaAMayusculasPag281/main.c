#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
void convierteAMayusculas(char *ptrS);
int main()
{
    char cadena[]="CarActeres y $32.98 ";

    printf("La cadena antes de la conversion es:%s",cadena);
    convierteAMayusculas( cadena );
    printf("\nLa cadena despues de la conversion es:%s",cadena);

    return 0;
}
void convierteAMayusculas(char *ptrS){

    while(*ptrS!='\0'){//Mientras sea diferente al valor nulo
        if(islower(*ptrS)){//Si el caracter es minuscula
            *ptrS=toupper(*ptrS);//Convierte a mayuscula
        }
        ++ptrS;//Avanza a la siguiente linea del caracter
    }
}
