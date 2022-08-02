#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char enunciado[80];
    int i=0;
    puts("Introduzca una linea de texto: ");
    //Utiliza getchar para leer cada caracter
    while((c=getchar())!='\n')
    {
        enunciado[i++]=c;
    }
    enunciado[i]='\0'; //Termina la cadena
    //Utiliza puts para desplegar el enunciado
    puts("\nLa linea introducida es:");
    puts(enunciado);
    return 0;
}
