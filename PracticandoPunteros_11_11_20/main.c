#include <stdio.h>
#include <stdlib.h>
//Array de punteros y otra forma de acceder a los indices de un array
int main()
{
    float v[5];
    float *ptrV;
    int i;

    for(i=0;i<5;i++){
        *(v+i)=i*i;
    }
    ptrV=v+3;
    printf("%.3f ",*ptrV);
    putchar('\n');
    putchar('\n');
    /*Array de punteros float*/
    float *ptrVArray[6];//Array de punteros
    float x=5.22;//Valor almacenado en ptrVArray[6]=x;
    ptrVArray[5]=&x;
    for(i=0;i<5;i++){
        ptrVArray[i]=v+i;//Almacena las direcciones de memoria
    }
    //Mostrando los valores apuntados
    for(i=0;i<5;i++){
        printf("%.3f \n",*ptrVArray[i]);
    }
    printf("%.3f ",*ptrVArray[5]);
    return 0;
}
