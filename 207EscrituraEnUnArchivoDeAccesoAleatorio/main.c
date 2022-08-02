#include <stdio.h>
#include <stdlib.h>
/*Pag440*/
struct datosCliente{
    int numCta;         //Numero de cuenta
    char apellido[15]; //Apellido de la cuenta
    char nombre[10];  //Nombre de la cuenta
    double saldo;    //Saldo de la cuenta
};

int main()
{
    FILE *ptrCF; //Apuntador al archivo credito.dat
    /*crea datosCliente con informacion predeterminada*/

    struct datosCliente cliente={0,"","",0.0};

    //fopen abre el archivo, si no lo puede abrir sale del archivo
    if((ptrCF=fopen("credito.dat","rb+"))==NULL){
        printf("El archivo no pudo abrirse");
    }

    else{

        //Se requiere que el usuario especifique el numero de cuenta
        printf("Introduzca el numero de cuenta \n 1 a 100, 0 para terminar la entrada\n");
        scanf("%d", &cliente.numCta);

        //El usuario introduce la informacion, la cual se copia dentro del archivo
        while(cliente.numCta!=0){
            //El usuario introduce la informacion, la cual se copia dentro del archivo
        printf("Introduzca el apellido,el nombre,el saldo\n");

        //Establece los valores para apellido, nombre y saldo del registro
        fscanf(stdin,"%s%s%lf",cliente.apellido,cliente.nombre,&cliente.saldo);

        //Localiza la posicion de un registro especifico en el archivo
        fseek(ptrCF,(cliente.numCta - 1) *
              sizeof(struct datosCliente),SEEK_SET);

        /*Escribe en el archivo la informacion especificada por el usuario*/
        fwrite(&cliente,sizeof(struct datosCliente),1,ptrCF);
        putchar('\n');
        //Permite al usuario introducir otro numero de cuenta
        printf("Introducir el numero de cuenta\n?");
        scanf("%d",&cliente.numCta);
        }
        fclose(ptrCF);
    }
    return 0;
}
