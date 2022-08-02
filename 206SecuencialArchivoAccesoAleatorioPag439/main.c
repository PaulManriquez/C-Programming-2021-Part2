#include <stdio.h>
#include <stdlib.h>

/*definicion de la estructura datosCliente*/
struct datosCliente{
    int numCta;        //Numero de cuenta
    char apellido[15];//Apellido de la cuenta
    char nombre[10]; //Nombre de la cuenta
    double saldo;   //saldo de la cuenta
};

int main()
{
    int i; //Contador utilizado para contar de 1 a 100
    /*Crea datosCliente con informacion predeterminada*/
    struct datosCliente clienteEnBlanco={0,"","",0.0};
    FILE *ptrCF; //Apuntador al archivo credito.dat

    //fopen abre el archivo, si no se puede abrir sale del archivo
    if((ptrCF=fopen("credito.dat","wb"))==NULL){
        printf("No pudo abrirse el archivo\n");
    }
    else{
        //Escribe 100 registros en blanco en el archivo
        for(i=1;i<=100;i++){
            fwrite(&clienteEnBlanco, sizeof(struct datosCliente),1,ptrCF);
        }
        fclose(ptrCF);
    }
    return 0;
}
