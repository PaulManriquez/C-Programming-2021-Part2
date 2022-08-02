#include <stdio.h>
#include <stdlib.h>
//Ordenar columnas de matriz mediante punteros
void MostrarMatriz(int M[][5], int fila);
void OrdenarColumnas(int *ptrElemento,int fila,int columna);
int main()
{
    int M[][5]={{4,3,2,5,4},{3,2},{1,2,3,4,5}};
    MostrarMatriz(M,3);
    printf("\n");
    //Apuntador al elemento 0,0 cambiar
   /*
    int *ptrMatriz;
    ptrMatriz=&M[0][0];
    *ptrMatriz=4;
    MostrarMatriz(M,3);
    */
    ////////////////////////////////////
    //Ordenar columnas sin punteros
  /*
    printf("\nOrdenando columnas:\n");
    int i,j,save,cont;
     for(i=0;i<5;i++){
        cont=0;
        do{
          for(j=0;j<2;j++){
            if(M[j][i]>M[j+1][i]){
                save=M[j+1][i];
                M[j+1][i]=M[j][i];
                M[j][i]=save;
            }
        }
        cont++;
    }while(cont!=3);
}
    MostrarMatriz(M,3);
 */
   //Con punteros, cambiar el elemento
    OrdenarColumnas(&M[0][0],3,5);
    MostrarMatriz(M,3);
    return 0;
}
void OrdenarColumnas(int *ptrElemento,int fila,int columna){
   printf("\nOrdenando columnas:\n");
    int i,j,save,flag;
    do{
    for(j=0;j<columna;j++){
        for(i=0;i<fila-1;i++){
            if(*(ptrElemento+i*columna+j) > *(ptrElemento+(i+1)*columna+j)){
                save=*(ptrElemento+(i+1)*columna+j);
                *(ptrElemento+(i+1)*columna+j)=*(ptrElemento+i*columna+j);
                *(ptrElemento+i*columna+j)=save;
                flag=0;
            }
        }
    }

        for(j=0;j<columna;j++){
            for(i=0;i<fila-1;i++){
                if(*(ptrElemento+i*columna+j) > *(ptrElemento+(i+1)*columna+j)){
                    flag=1;
            }
        }
    }
 }while(flag!=0);
}
void MostrarMatriz(int M[][5],int fila)
{
    int i,j;
     //Mostrando Matriz
    for(j=0;j<fila;j++){
        for(i=0;i<5;i++){
            printf("%d ",M[j][i]);
        }
        printf("\n");
    }
}
