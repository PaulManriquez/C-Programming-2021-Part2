#include <stdio.h>
#include <stdlib.h>
/*Unknow curioso*/
void ImprimeCadena(char *ptrChar);
int main()
{   //sin * ya que estamos accediendo a cada elemento individual de la cadena y no a la cadena y sin corchetes
    char CadenaDeChar[]="aeiou";
    char *ptrCadenaDeChar;
    ptrCadenaDeChar=CadenaDeChar[3];//o
    printf("%c ",ptrCadenaDeChar);//Muestra o
    putchar('\n');
    /*Imprimiendo Cadena con una funcion*/
    ImprimeCadena(CadenaDeChar);
    return 0;
}
ImprimeCadena(char *ptrChar){
    while(*ptrChar!='\0'){
        printf("%c ",*ptrChar);
        ptrChar++;
    }
}
