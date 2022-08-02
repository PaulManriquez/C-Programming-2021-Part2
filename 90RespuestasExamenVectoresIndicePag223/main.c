#include<stdio.h>
#define TAMANIO_RESPUESTA 10
#define TAMANIO_FRECUENCIA 11

int main(){

    int respuesta;
    int rango;
    //Inicializa los contadores de frecuencia a 0
    int frecuencia[TAMANIO_FRECUENCIA]={0};
    int respuestas[TAMANIO_RESPUESTA]={1,2,2,2,5,6,7,8,9,10};
    /*Por cada respuesta,selecciona el valor de un elemento del arreglo respuestas
    y utiliza dicho valor como subindice en el arreglo frecuencia para determinar el elemento a incrementar */

    for(respuesta=0;respuesta<TAMANIO_RESPUESTA;respuesta++){
        frecuencia[respuestas[respuesta]]+=1;
    }
    printf("%s%17s\n","Rango","Frecuencia");

    for(rango=1;rango<TAMANIO_FRECUENCIA;rango++){
        printf("%6d%17d\n",rango,frecuencia[rango]);
    }

return 0;
}
