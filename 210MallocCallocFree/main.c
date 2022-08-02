#include <stdio.h>
#include <stdlib.h>
#define N 10


void imprimirVector(int v[]);

int main()
{
   //Aignamos espacio para un vector de N elementos, empleando malloc
   int *P;//Asignacion del puntero que contendrá el espacio reservado de memoria
                //N*4bytes=40bytes
   P=(int *) malloc((N)*sizeof(int));
   if(P==NULL){
   printf("\nNo se pudo reservar el espacio de memoria\n");
   return -1;
   }
   printf("Con el vector (espacio de memoria) malloc es:\n");
   imprimirVector(P);

   //Asignamos espacio para un vector de N elementos, empleando calloc
   int *Q;
    //Tipo de dato al que apunta la memoria
   Q = (int*) calloc(N,sizeof(int));
                   //Cantidad de elementos,tamaño de bytes en int
   printf("\nEl vector con Calloc es:\n");
   imprimirVector(Q);

   //liberar explicitamente el espacio.
   free(P);
   free(Q);
    return 0;
}
void imprimirVector(int v[])
{
    int i;
    for(i=0;i<N;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}
