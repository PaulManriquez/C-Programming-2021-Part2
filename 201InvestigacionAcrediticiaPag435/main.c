#include <stdio.h>
#include <stdlib.h>
/*Programa de investigacion crediticia*/
int main()
{
    int consulta;     //Numero de solicitud
    int cuenta;       //Numero de cuenta
    double saldo;    //Saldo de la cuenta
    char nombre[30];//Nombre de la cuenta
    FILE *ptrCF;   //Apuntador al archivo clientes

    /*fopen abre el archivo,si no se abre el archivo sale del programa*/
    if((ptrCF=fopen("clientes.dat","r"))==NULL){
        printf("El archivo no pudo abrirse\n");
    }
    else{
        //Despliega las opciones de consulta
        printf("Introduzca la consulta\n"
               "1-Lista las cuentas con saldo cero\n"
               "2-Lista las cuentas con saldo a favor\n"
               "3-Lista las cuentas con saldo en contra\n"
               "4-Fin del programa\n?");
                scanf("%d",&consulta);
        //Procesando la consulta del usuario
        while(consulta!=4)
            {
                /*Lee la cuenta, el nombre y el saldo del archivo*/
                fscanf(ptrCF,"%d%s%lf",&cuenta,nombre,&saldo);

                switch(consulta){
                case 1:
                    printf("\nCuentas con saldo cero\n");
                    /*Lee el contenido del archivo hasta eof*/
                    while(!feof(ptrCF)){
                        if(saldo==0){
                            printf("%-10d%-13s%7.2f\n",cuenta,nombre,saldo);//Imprime en consola
                        }
                        /*Lee la cuenta, el nombre y el saldo del archivo*/
                        fscanf(ptrCF,"%d%s%lf",&cuenta,nombre,&saldo);
                    }//fin de while
                break;

                case 2:
                    printf("\nCuentas con saldos a favor:\n");
                    /*lee el contenido del archivo hasta eof*/
                    while(!feof(ptrCF)){
                        if(saldo < 0){
                            printf("%-10d%-13s%7.2f\n",cuenta,nombre,saldo);
                        }
                        /*Lee el siguiente, cuenta nombre y saldo del archivo*/
                        fscanf(ptrCF,"%d%s%lf",&cuenta,nombre,&saldo);
                    }
                break;
                case 3:
                    printf("\nCuentas con saldo en contra:\n");
                    /*Lee el contenido del archivo hasta eof*/
                    while( !feof( ptrCF )){
                        if(saldo>0){
                            printf("%-10d%-13s%7.2f\n",cuenta,nombre,saldo);
                        }
                        /*Lee el siguiente, cuenta nombre y saldo del archivo*/
                        fscanf(ptrCF,"%d%s%lf",&cuenta,nombre,&saldo);
                    }//Fin del while
                break;
            }//Fin de switch consulta

            rewind(ptrCF);//Devuelve ptrCF al principio del archivo
            printf("\n?");
            scanf("%d",&consulta);

        }//Fin de while consulta menu
       printf("Fin de la ejecucion.\n");
       fclose(ptrCF);//Cierra el archivo
    }

    return 0;
}
