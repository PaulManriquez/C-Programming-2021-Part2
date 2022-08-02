#include <stdio.h>
#include <stdlib.h>
#define FILAS 3
#define COLUMNAS 4

void MostrarMatriz(const int MMatriz[][COLUMNAS]);
int CalB(const int CBMatriz[][COLUMNAS],int estudiante,int cal);
int CalA(const int CAMatriz[][COLUMNAS],int estudiante,int cal);
double Promedio(const int PromMatriz[][COLUMNAS],int nino,int cal);

int main()
{
    int Matriz[FILAS][COLUMNAS]={0};
    int i,j,n;
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            printf("In elemento:%d,%d:",i,j);
            scanf("%d",&n);
            Matriz[i][j]=n;
        }
        printf("\n");
    }

    printf("\nEl Arreglo es:\n");

    MostrarMatriz(Matriz);

    printf("\n");
    int CalificacionBaja;
    CalificacionBaja=CalB(Matriz,FILAS,COLUMNAS);
    printf("La calificacion mas baja es: %d",CalificacionBaja);

    printf("\n");
    int CalificacionAlta;
    CalificacionAlta=CalA(Matriz,FILAS,COLUMNAS);
    printf("La Calificacion mas alta es:%d\n",CalificacionAlta);

    printf("\n");
    double prom;
    for(i=0;i<FILAS;i++){
        prom=Promedio(Matriz,i,COLUMNAS);
        printf("El promedio del niño %d es:%.2f\n",i,prom);
    }
    return 0;
}
void MostrarMatriz(const int MMatriz[][COLUMNAS]){

    int i,j;
    printf("                                [0][1][2][3]\n");
    for(i=0;i<FILAS;i++){
        printf("Calificaciones del estudiante[%d]",i);
        for(j=0;j<COLUMNAS;j++){
            printf(" %d ",MMatriz[i][j]);
        }
        printf("\n");
    }
}
    //Recibe Matriz Orginal,FILAS(0-2),Columnas(0-3)
int CalB(const int CBMatriz[][COLUMNAS],int estudiante,int cal){

int BajaCal=10;
int i,j;
for(i=0;i<estudiante;i++){
    for(j=0;j<cal;j++){
        if( CBMatriz[i][j]< BajaCal){
            BajaCal=CBMatriz[i][j];
        }
    }
}
return BajaCal;
}
int CalA(const int CAMatriz[][COLUMNAS],int estudiante,int cal){
int j,i;
int CalAlta=0;
for(i=0;i<estudiante;i++){
    for(j=0;j<cal;j++){
        if(CalAlta < CAMatriz[i][j]){
            CalAlta= CAMatriz[i][j];
        }
    }

}
return CalAlta;
}
double Promedio(const int PromMatriz[][COLUMNAS],int nino,int cal){
int j;
double promedio1;
int total=0;

for(j=0;j<cal;j++){
    total+=PromMatriz[nino][j];
}
promedio1= ( double ) total/cal;
return promedio1;
}
