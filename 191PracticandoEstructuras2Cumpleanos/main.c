#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int dia;
    int mes;
    int anio;
}cumplanos;

int main()
{
    cumplanos micumpleanos;

    micumpleanos.anio=1997;
    micumpleanos.mes=12;
    micumpleanos.dia=22;

    printf("¡Adivina mi cumpleaños!\n");
    int flag=0;
    int anio;
    printf("Año:");
    do{
        scanf("%d",&anio);
            if(anio==micumpleanos.anio){
             printf("Adivinaste mi anio!:%d\n",micumpleanos.anio);
             flag=1;
            }
    }while(flag==0);

    flag=0;
    int mes;
    printf("Mes:");
    do{
        scanf("%d",&mes);
            if(mes==micumpleanos.mes){
             printf("Adivinaste mi mes!:%d\n",micumpleanos.mes);
             flag=1;
            }
    }while(flag==0);

    flag=0;
    int dia;
    printf("Dia:");
    do{
        scanf("%d",&dia);
            if(dia==micumpleanos.dia){
             printf("Adivinaste mi dia!:%d\n",micumpleanos.dia);
             flag=1;
            }
    }while(flag==0);

    printf("\nPrograma finalizado!");
    return 0;
}
