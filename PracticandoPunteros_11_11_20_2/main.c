#include <stdio.h>
#include <stdlib.h>
/*Char y punteros explicacion breve*/
void ptrFuncionMult(int *ptrIntMod);
int main()
{
    char *nombres_meses[]={"","Enero","Febrero","Marzo","Abril","Mayo",
                            "Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

    char *ptrNombres_M;
    ptrNombres_M=nombres_meses[1];//Guarda la direccion de memoria
    printf("%s",ptrNombres_M);//Sin * por que char guarda 1 byte y no una cadena
                             //thus accedemos a lo que guardó en memoria
    int i=0;
    char *ptrNombres_MVec[13];
    for(i=1;i<=12;i++){
        ptrNombres_MVec[i]=nombres_meses[i];
    }
    putchar('\n');
    putchar('\n');
    for(i=1;i<=12;i++){
        printf("%s \n",ptrNombres_MVec[i]);
    }
    /*Paso de valor a puntero de funcion*/
    int a=2;
    printf("\nEste es el valor de a:%d",a);
    ptrFuncionMult(&a);
    printf("\nNuevo valor de a, al modificarse en funcion:%d",a);
    putchar('\n');
    return 0;
}
void ptrFuncionMult(int *ptrIntMod){

    *ptrIntMod= *ptrIntMod * *ptrIntMod;

}
