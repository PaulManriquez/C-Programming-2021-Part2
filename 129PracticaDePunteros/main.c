#include <stdio.h>
#include <stdlib.h>
void imprimeCadenaCaracter(const char *ptrCadena);
int suma(int *ptrn1,int *ptrn2 );
int main()
{
    char cadena[]="Imprime los caracteres de una cadena";
    printf("La cadena es:");
    imprimeCadenaCaracter(cadena);
    printf("\nValor de un entero con un entero:");
    int n;
    printf("\nIngresa el numero:");
    scanf("%d",&n);
    int *ptrn;
    ptrn=&n;
    printf("Este es el valor al que apunta el puntero (ptrn):%d",*ptrn);
    int n1,n2;
    printf("\n\nRealizar suma con punteros:"
           "\nIngrese el numero 1:");
    scanf("%d",&n1);
    printf("Ingrese el numero 2:");
    scanf("%d",&n2);
    int SumaT;
    SumaT=suma(&n1,&n2);
    printf("La suma es:%d",SumaT);
    return 0;
}
void imprimeCadenaCaracter(const char *ptrCadena)
{
    for(;*ptrCadena!='\0';ptrCadena++){
        printf("%c",*ptrCadena);
    }

}
int suma(int *ptrn1,int *ptrn2 ){

return *ptrn1 + *ptrn2;
}
