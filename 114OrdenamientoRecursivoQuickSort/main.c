#include <stdio.h>
#include <stdlib.h>

void QuickSort(int L[],int ini,int fin);

int main()
{   int i,L[7]={6,5,3,1,8,7,2};
    QuickSort(L,0,6);

    printf("Metodo de ordenamiento QuickSort\n");

    for(i=0;i<7;i++){
        printf("%d\t",L[i]);
    }

    return 0;
}

void QuickSort(int L[],int ini,int fin)
{
    int piv, izq,der,med;
    if(ini<fin)
    {
        piv=L[ini];//Se inicializa el piv con el primer elemento
        izq=ini;

        //Se ubican los elementos a la izquierda y derecha del pivote
        der=fin;
        while(izq<der)
        {
        while(der>izq && L[der]>piv)
            der--;

        if(der>izq)
        {
        L[izq]=L[der];
        izq++;
            }

        while(izq<der && L[izq]<piv)
            izq++;
        if(izq<der){
            L[der]=L[izq];
            der--;
        }
    }
     //izq , cualquiera puede ser ya que apuntan al mismo elemento
    L[der]=piv;//Se ubica al pivote en su posicion
    med=der;
    //Llamadas recursivas
    QuickSort(L,ini,med-1);
    QuickSort(L,med+1,fin);
    }
}
