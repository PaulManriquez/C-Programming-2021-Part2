#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10
int Burbuja(int b[]);
int BusquedaBinaria(const int c[],int respuesta,int bajo,int alto);
int main()
{
    int a[TAMANIO]={0};
    int i,n,j,respaldo;
    for(i=0;i<TAMANIO;i++){
        printf("Introduce el numero %d: ",i+1);
        scanf("%d",&n);
        a[i]=n;
    }

    Burbuja(a);
    printf("\nOrdenando los elementos: ");
    for(j=0;j<TAMANIO;j++){
        printf("%d ",a[j]);
    }
    int llave,resp;
    printf("\n");
    printf("\nNumero que desea encontrar en el vector: ");
    scanf("%d",&llave);
    resp=BusquedaBinaria(a,llave,0,TAMANIO-1);
    if(resp!=-1){ printf("\nEl numero %d esta en el elemento %d",llave,resp);}
    else if(resp==-1){printf("\nNo se encuentra el numero %d",llave);}
    printf("\n");
    return 0;
}

int Burbuja(int b[])
{
int i,j,respaldo;

for(i=0;i<TAMANIO;i++){
        for(j=0;j<TAMANIO-1;j++){
            if(b[j]>b[j+1]){
                respaldo=b[j];
                b[j]=b[j+1];
                b[j+1]=respaldo;
            }
        }
    }

}
int BusquedaBinaria(const int c[],int respuesta,int bajo,int alto){

    int central;

    while(bajo<=alto){
        central=(bajo+alto)/2;
        if(respuesta==c[central]){return central;} //Posicion del elemeto}
        else if(respuesta<c[central]){alto=central-1;}
        else if(respuesta>c[central]){bajo=central+1;}

    }

return -1;
}
