#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10
int busquedaBinaria(const int b[],int claveDeBusqueda,int bajo,int alto);
int main()
{
    int a[TAMANIO];
    int i,j;
    int llave,resultado;


    printf("Introduzca la llave: ");
    scanf("%d",&llave);

    for(j=0;j<TAMANIO;j++){
    printf("%d ",j);
    if(j>4)
    {
    printf(" ");
    }
    }
    printf("\n");
    for(i=0;i<TAMANIO;i++){
        a[i]=i*2;
        printf("%d ",a[i]);
    }

    resultado=busquedaBinaria(a,llave,0,TAMANIO-1);

    if(resultado!=-1){
        printf("\n%d se encuentra en el elemento %d del arreglo\n",llave,resultado);
    }
    else{
        printf("\n%d no se encuentra \n",llave);
    }

    return 0;
}

int busquedaBinaria(const int b[],int claveDeBusqueda,int bajo,int alto)
{
    int central;
    while(bajo<=alto){
        central=(bajo + alto)/2;
        //Si la clave de busqueda coincide con el elemento central,devuelve central
        if(claveDeBusqueda==b[central]){
            return central;
        }
        else if(claveDeBusqueda<b[central]){
            alto=central-1;
        }
        else if(claveDeBusqueda>b[central]){
            bajo=central+1;
        }

    }
return -1;
}
