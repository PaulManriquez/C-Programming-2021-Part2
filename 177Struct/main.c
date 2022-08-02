#include <stdio.h>
#include <stdlib.h>
struct complejo{
    float re;
    float im;
};
//Definicion de la estructura carta
struct carta{
    char *cara; /*Define el apuntador cara y palo*/
    char *palo;
};

typedef struct{
    int paginas;
    char nombre[50];
    float precio;
}libro;

int main()
{
    //Asigna un nombre para acceder al elemento ("c1") y asigna valores a cada elemento de este
    struct complejo c1={12.3,-10.1};
    printf("(%.3f,%.3f)\n\n",c1.re,c1.im);
    ///////////////////////////////////

    struct carta unaCarta; //Define una estructura variable carta
    struct carta *ptrCarta;//Define un apuntador a una estructura carta

    /*Coloca cadenas dentro de unaCarta*/
    unaCarta.cara= "As";
    unaCarta.palo="Espadas";

    ptrCarta=&unaCarta;//Asigna ladireccion de unaCarta a ptrCarta

    printf("%s%s%s\n%s%s%s\n%s%s%s\n",
           unaCarta.cara, " de ", unaCarta.palo,
           ptrCarta->cara, " de ", ptrCarta->palo,
           (*ptrCarta).cara, " de ",(*ptrCarta).palo
           );

    printf("\n");
    int i;
    libro precioV[10];
    for(i=0;i<10;i++){
        precioV[i].precio=25+i;
        printf("El precio de la estructura %d es de :%f\n",i+1,precioV[i].precio);
    }


    return 0;
}
