#include <stdio.h>
#include <stdlib.h>
void imprimeCaracteres(const char *ptrS);
int main()
{
    char cadena[]="Imprime los caracteres de una cadena";
    printf("La cadena es:\n");
    imprimeCaracteres(cadena);

    return 0;
}
void imprimeCaracteres(const char *ptrS){

   for(;*ptrS!='\0';ptrS++)//Sin inicializacion
   {
       printf("%c",*ptrS);
   }
   /*
   while(*ptrS!='\0'){
    printf("%c",*ptrS);
    ++ptrS;
   }*/

}
