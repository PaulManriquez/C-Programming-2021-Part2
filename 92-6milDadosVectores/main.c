#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 7
int main()
{
    int cara,tiro;
    int frecuencia[TAMANIO]={0}; //inicializamos en 0

    srand (time(NULL));

    for(tiro=1;tiro<=6000;tiro++){
        cara=1+ rand()%6;
        frecuencia[cara]+=1;
    }

    printf("%s%17s\n","Cara","Frecuencia");

    for(cara=1;cara<TAMANIO;cara++){
        printf("%4d%17d\n",cara,frecuencia[cara]);
    }

    return 0;
}
