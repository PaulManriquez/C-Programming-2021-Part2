#include <stdio.h>
#include <stdlib.h>

void Mostrar(char *P[],int N);

int main()
{
    char *Palabras[]={"UNO","dos","tres","cuatro"};
    Mostrar(Palabras,4);

    return 0;
}
void Mostrar(char *P[],int N)
{
    int i=0;
    //Muestra la primera letra
    for(i=0;i<N;i++){
        printf("%c ",*P[i]);
    }
    //Muestra toda la palabra
   printf("\n");
    for(i=0;i<N;i++){
        printf("%s ",P[i]);
    }
}
