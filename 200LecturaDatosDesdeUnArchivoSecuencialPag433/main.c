#include <stdio.h>
#include <stdlib.h>
/*Lectura de archivos en c Pag433*/
int main()
{
    /*Estos datos son los que ya teniamos en el programa 199*/
    int cuenta;
    char nombre[30];
    double saldo;

    FILE *ptrCF;    //Apuntador al archivo clientes.dat
    /*fopen abre el archivo; si no se puede abrir el archivo,
    abandona el programa*/
    if((ptrCF=fopen("clientes.dat","r"))==NULL){
        printf("El archivo no pudo abrirse\n");
    }
    else{/*Lee la cuenta, el nombre y el saldo del archivo*/
        printf("%-10s%-13s%s\n","cuenta","nombre","saldo");
        fscanf(ptrCF,"%d%s%lf",&cuenta,nombre,&saldo);
        while(!feof(ptrCF)){
            printf("%-10d%-13s%7.2f\n",cuenta,nombre,saldo);
            fscanf(ptrCF,"%d%s%lf",&cuenta,nombre,&saldo);
        }
        fclose(ptrCF);//Cierra el archivo
    }

    return 0;
}
