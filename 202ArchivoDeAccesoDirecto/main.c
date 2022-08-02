#include <stdio.h>
#include <stdlib.h>

/*Definicion de la estructura datosCliente*/
struct datosCliente{
    int numCta;         //Numero de cuenta
    char apellido[15]; //Apellido de la cuenta
    char nombre[10];  //Nombre de la cuenta
    double saldo;    //Saldo de la cuenta
};//Fin de la estructura datos cliente

int main()
{
    int i; //Contador para contar de 1-100 registros
    /*Crea datos con informacion predeterminada en "0"*/
    struct datosCliente clienteEnBlanco={0,"","",0.0};
    FILE *ptrCf; //Apuntador a archivo
    /*fopen abre el archivo, si no se puede abrir sale del archivo*/
    if((ptrCf=fopen("credito.dat","wb"))==NULL){
        printf("No pudo abrirse el archivo\n");
    }
    else{
        //Escribe 100 registros en blanco en el archivo
        for(i=1;i<=100;i++){
            fwrite(&clienteEnBlanco,sizeof(struct datosCliente),1,ptrCf);
        }
        fclose(ptrCf);
    }
    return 0;
}
