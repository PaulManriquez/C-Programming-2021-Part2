#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int x=0;

bool comprobar(int reinas[],int n,int k);
void Nreinas(int reinas[],int n, int k);

int main()
{
    int k=0,i;
    int cant;
    printf("Ingrese la cantidad de reinas:");
    scanf("%d",&cant);
    int  *reinas[cant];
    for(i=0;i<cant;i++){
        reinas[i]=-1;
    }

    Nreinas(reinas,cant,k);

    return 0;
}

void Nreinas(int reinas[],int n, int k){
int i;
if(k==n){
x++;
printf("\nSolucion;");
for(i=0;i<n;i++){
    printf("%d ",reinas[i]);
}
//
}
else{
    for(reinas[k]=0;reinas[k]<n;reinas[k]++){
        if(comprobar(reinas,n,k)){
            Nreinas(reinas,n,k+1);
        }
    }
}

}

bool comprobar(int reinas[],int n,int k){
int i;
for(i=0;i<k;i++){
    if(reinas[i]==reinas[k] || (fabs(k-i)== fabs(reinas[k]-reinas[i]))){
        return false;
    }
}
return true;
}
