#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10
void calcularComision(const int venta1[]);
int main()
{
    int i,v;
    int ventas[TAMANIO]={0};

    printf("Ingresa tus ventas de la semana:\n");
    for(i=0;i<TAMANIO;i++){
        printf("Venta de semana %d: ",i+1);
        scanf("%d",&v);
        ventas[i]=v;
    }

    calcularComision(ventas);

    return 0;
}

void calcularComision(const int venta1[])
{
    int Ccomision[TAMANIO];
    int TotalPersonas[TAMANIO]={0};
    int i;
    int np;
    printf("\n");
    for(i=0;i<TAMANIO;i++){
        //Ccomision[i]=(((venta1[i]*9)/100)+venta1[i])+200;
       // printf("Comision de venta %d, %d es %d\n",i+1,venta1[i],Ccomision[i]);
        Ccomision[i]=(((venta1[i]*9)/100)+200); //guardamos las comisiones 200 + 9%
        printf("Comision del empleado %d es:%d \n",i+1,Ccomision[i]);
    }
    printf("\n");
    for(i=0;i<TAMANIO;i++){
        np=Ccomision[i]/100;
        TotalPersonas[np]+=1;
    }
    printf("\n");
    for(i=0;i<TAMANIO;i++){
        printf("Numero de personas en casilla %d son %d \n",i,TotalPersonas[i]);
    }

}
