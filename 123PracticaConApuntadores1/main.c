#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void ptrCubo(int *ptrNcubo); //Funcion para calcular el cubo de n mediante un apuntador
void convierteAMayusculas(char *ptrCadena);
int main()
{
    int y=8;
    int *ptrY;
    ptrY=&y;
    printf("Con '*' apuntamos al valor que almaceno:%d",*ptrY);
    printf("\nSin '*', saca la direccion de donde se está apuntando:%p",ptrY);
    printf("\nCorroboramos la direccion con 'porsentajeP' de la direccion de y:%p",&y);
    printf("\n-----------------------------------");
    printf("\nLlamada por referencia:");
    int n;
    printf("\nIngrese el numero que desea elevar al cubo:");
    scanf("%d",&n);
    ptrCubo(&n);
    printf("El numero al cubo es:%d",n);
    printf("\n------------------------------------");
    printf("\nLeer cadena de caracteres desde el teclado:");
    char cadena[50];
    printf("\nIngrese una cadena de caracteres:");
    scanf("%s",cadena);
    printf("Esto es lo que ingresaste:%s",cadena);
    printf("\nEsto te convierte la cadena a mayuscalas:");
    convierteAMayusculas(cadena);
    printf("\nLa cadena despues de la conversion es:%s\n",cadena);
    return 0;
}
void ptrCubo(int *ptrNcubo){
return *ptrNcubo= (*ptrNcubo * *ptrNcubo * *ptrNcubo);
}
void convierteAMayusculas(char *ptrCadena)
{
    while(*ptrCadena!='\0'){
        if(islower(*ptrCadena)){
            *ptrCadena=toupper(*ptrCadena);
        }
        ptrCadena++;
    }
}
