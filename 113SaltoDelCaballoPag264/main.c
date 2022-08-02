#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 3
int tablero[N][N];

//Desplazamientos del caballo
int d[8][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

void escribirTablero();
void saltoCaballo(int i,int x, int y, bool *exito);

int main()
{
    bool exito;
    //posicion inicial del caballo
    int fila=0;
    int col=1;
    tablero[fila][col]=1;//posicion inicial del caballo
    saltoCaballo(2,fila,col,&exito);
    if(exito==true){
        printf("Camino encontrado");
        escribirTablero();
    }
    else{
        printf("Camino no encontrado");
    }

    return 0;
}

void saltoCaballo(int i,int x, int y, bool *exito)
{
 int nx,ny; //Nueva coordenada
 int k=0;   //Efectua los 8 desplazamientos del caballo
 exito = false;
 do{
    k++;
    nx = x + d[k-1][0];
    ny = y + d[k-1][1];
    //Verificando si las coordenadas son correctas
    if((nx>=0)&&(nx<N) && (ny>=0) && (ny<N) && (tablero[nx][ny]==0))
    {   //Guardamos el movimiento
        tablero[nx][ny]=i;
        escribirTablero(); //Mostrar como se va moviendo el caballo
        if(i < (N*N))
        {
            saltoCaballo(i+1,nx,ny,&exito);
            if(exito==false){
                tablero[nx][ny]=0;
                escribirTablero();
            }
        }
    else {
            *exito=true;
        }
    }//fin de if

 }while((k<8) && exito==false);
}//Fin de funcion


void escribirTablero()
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d  |",tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
