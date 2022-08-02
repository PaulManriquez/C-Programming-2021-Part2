#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void CharTotales(void);

int main()
{
    srand(time(NULL));
    //Llama a CharTotales, cuenta el numero de caracteres impresos.
    CharTotales();

    return 0;
}
void CharTotales(void)
{
    int Nrand;
    int i=0,nCaracteres=0;

    printf("Valor\tCaracteres totales\n");
    do{
    Nrand=(1+(rand()%1000));
    nCaracteres=nCaracteres+printf("%d",Nrand);
    printf("\t%d",nCaracteres);
    printf("\n");
    i++;
    }while(i<10);
}
