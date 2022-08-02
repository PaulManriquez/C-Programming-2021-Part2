#include <stdio.h>
#include <stdlib.h>
size_t obtieneTamanio(float *ptr);
int main()
{
    float arreglo[20];
    printf("El numero de bytes en el arreglo es %d"
           "\nEl numero de bytes devueltos por obtieneTamanio es %d\n",sizeof(arreglo),obtieneTamanio(arreglo));

    return 0;
}
//Devuelve el tamanio del apuntador
size_t obtieneTamanio(float *ptr){
    return sizeof(ptr);
}
