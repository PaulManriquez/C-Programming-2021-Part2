#include <stdio.h>
#include <stdlib.h>
int numPalabras(char cadena[]);
int main()
{
    char cadena[50];
    printf("Ingrese la cadena:");
    scanf("%[^\n]s",cadena);
    printf("Esto fue lo que ingresaste:%s",cadena);
    int n;
    n=numPalabras(cadena);
    printf("\nNumero de palabras:%d",n);
    return 0;
}
int numPalabras(char cadena[])
{
    int numeroPalabras=1,i=0;
    while(cadena[i]!='\0'){
        if(cadena[i]==' '){
            numeroPalabras++;
        }
        i++;
    }
    return numeroPalabras;
}
