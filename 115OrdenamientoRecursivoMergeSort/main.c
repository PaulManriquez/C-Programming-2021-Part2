#include <stdio.h>
#include <stdlib.h>
void MergeSort(int L[],int ini,int fin);
void Mezcla(int L[],int ini,int m,int fin);
int main()
{   int i;
    int L[7]={6,3,5,1,8,7,2};

    MergeSort(L,0,6);

    for(i=0;i<7;i++){
        printf("%d\t",L[i]);
    }


    return 0;
}

void MergeSort(int L[],int ini, int fin){
int m;
m=(ini+fin)/2;
if(ini<fin){
MergeSort(L,ini,m);
MergeSort(L,m+1,fin);
Mezcla(L,ini,m,fin);
}
}

void Mezcla(int L[],int ini,int m,int fin){
int aux[20],i,j,k,t;
k=0;
i=ini;
j=m+1;
//Ciclo que se encarga de hacer la mezcla
while(i<=m && j<=fin){
    k++;
    if(L[i]<L[j]){
        aux[k]=L[i];
        i++;
    }
    else{
        aux[k]=L[j];
        j++;
    }
}
//Si quedaron elementos en la primera sublista, se los pasa
for(t=i;t<=m;t++){
    k++;
    aux[k]=L[t];
}
//Si quedaron elementos en la segunda lista se los pasa
for(t=j;t<=fin;t++){
    k++;
    aux[k]=L[t];
}
//Ahora se copia lo de aux a la lista original
for(t=1;t<=k;t++){
    L[ini+t-1]=aux[t];
}
}
