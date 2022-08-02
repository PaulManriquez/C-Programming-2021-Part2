#include <stdio.h>
#include <stdlib.h>
int contarCaracteres(char *ptrCadena,char caracter);
int main()
{
    char cadena[50];
    char caracter='a';

    printf("Ingrese una cadena:");
    scanf("%s",cadena);
    printf("Esto fue lo que ingresaste:%s",cadena);
    int Ncaracter=contarCaracteres(cadena,caracter);
    printf("\nNumero de veces %c es : %d",caracter,Ncaracter);
    return 0;
}
int contarCaracteres(char *ptrCadena,char caracter)
{
    int cont=0,i=0;
    while(ptrCadena[i]!='\0')
    {
        if(ptrCadena[i]==caracter){
            cont++;
        }
        i++;
    }
    return cont;
}
