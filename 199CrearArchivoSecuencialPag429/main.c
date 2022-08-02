#include <stdio.h>
#include <stdlib.h>
/*Crea un archivo secuencial pag 429*/
int main()
{
    int cuenta;
    char nombre[30];
    double saldo;

    FILE *ptrCf; //apuntador al archivo clientes.dat
    /*fopen abre el archivo. Si no es capaz de crear el archivo, sale del programa*/
    if((ptrCf=fopen("clientes.dat","w"))==NULL){
        printf("El archivo no pudo abrirse\n");
    }
    else{
        printf("Introduzca la cuenta, el nombre, y el saldo.\n");
        printf("Introduzca EOF al final de la entrada\n");
        printf("? ");
        scanf("%d%s%lf",&cuenta,nombre,&saldo);
        /*Escribe la cuenta, el nombre y el saldo dentro del archivo con fprintf*/
        while(!feof(stdin)){
            fprintf(ptrCf,"%d %s %.2f\n",cuenta,nombre,saldo);
            printf( "? ");
            scanf("%d%s%lf",&cuenta,nombre,&saldo);
        }
        fclose(ptrCf);//Cierra el archivo
    }
    return 0;
}
