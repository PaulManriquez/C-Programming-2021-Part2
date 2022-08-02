#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 20

void plumaArriba(int *pluma);
void plumaAbajo(int *pluma);
void girarDerecha(int *direccion);
void girarIzquierda(int *direccion);
void avanzar(int piso[][TAM],int direccion,int pluma,int posicion[2]);
void verTablero(int piso[][TAM]);

int main()
{
    int piso[TAM][TAM];
    int posicion[2]={0};
    int pluma=1,direccion=0;
    int i,j;

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            piso[i][j]=0;
        }
    }

    piso[0][0]=8;//Representa la tortuga
    int comando;
    do{
        system("cls");//limpia la pantalla
        printf("Elige una de las siguientes opciones:\n");
        printf("1.- Pluma arriba\n");
        printf("2.- Pluma abajo\n");
        printf("3.- Girar derecha\n");
        printf("4.- Girar izquierda\n");
        printf("5.- Avanzar\n");
        printf("6.- Ver tablero\n");
        printf("7.- Salir\n");
        printf("-----------------------\n");
        printf("Fila[%d]Columna[%d]\n",posicion[0],posicion[1]);
        printf("-----------------------\n");
        printf("Comando:");
        scanf("%d",&comando);
        switch(comando)
        {
        case 1: plumaArriba(&pluma); break;
        case 2: plumaAbajo(&pluma); break;
        case 3: girarDerecha(&direccion); break;
        case 4: girarIzquierda(&direccion); break;
        case 5: avanzar(piso,direccion,pluma,posicion); break;
        case 6: verTablero(piso); break;
        case 7: printf("Salida exitosa"); break;
        }
    }while(comando!=7);

    return 0;
}

void plumaArriba(int *pluma)
{
    *pluma=1;
}

void plumaAbajo(int *pluma)
{
    *pluma=0;
}
void girarDerecha(int *direccion)
{
    if(*direccion<3){
        *direccion+=1;
    }
    else{
        *direccion=0;
    }
    switch(*direccion){
    case 0: printf("Derecha"); break;
    case 1: printf("Abajo");   break;
    case 2: printf("Izquierda"); break;
    case 3: printf("Arriba");    break;
    }
    getch();
}
void girarIzquierda(int *direccion)
{
    if(*direccion>0){
        *direccion-=1;
    }
    else{
        *direccion=3;
    }
    switch(*direccion){
    case 0: printf("Derecha"); break;
    case 1: printf("Abajo");   break;
    case 2: printf("Izquierda"); break;
    case 3: printf("Arriba");    break;
    }
    getch();
}

void avanzar(int piso[][TAM],int direccion,int pluma,int posicion[2])
{
    int espacios,i;

    printf("Cuantos espacios desea avanzar?:");
    scanf("%d",&espacios);

    switch(direccion)
    {
        case 0:
        for(i=1;i<=espacios;i++)
    {
        if(posicion[1]!=19)
        {
            if(pluma==1)
            {//pluma arriba , pinta 0 ceros
                piso[posicion[0]][posicion[1]]=0;
                piso[posicion[0]][posicion[1]+1]=8;
                posicion[1]++;
            }
            else{
                piso[posicion[0]][posicion[1]]=1;
                piso[posicion[0]][posicion[1]+1]=8;
                posicion[1]++;
            }
        }
        else{
            printf("Has chocado, da vuelta");
            getch();
            break;
        }
    }//ciclo for
    break; // final case 0 (derecha)

    case 1:
        for(i=1;i<=espacios;i++)
    {
        if(posicion[0]!=19)
        {
            if(pluma==1)
            {//pluma arriba , pinta 0 ceros
                piso[posicion[0]][posicion[1]]=0;
                piso[posicion[0]+1][posicion[1]]=8;
                posicion[0]++;
            }
            else{
                piso[posicion[0]][posicion[1]]=1;
                piso[posicion[0]+1][posicion[1]]=8;
                posicion[1]++;
            }
        }
        else{
            printf("Has chocado, da vuelta");
            getch();
            break;
        }
    }//ciclo for
    break;//case 1

    case 2:
        for(i=1;i<=espacios;i++)
    {
        if(posicion[1]!=0)
        {
            if(pluma==1)
            {//pluma arriba , pinta 0 ceros
                piso[posicion[0]][posicion[1]]=0;
                piso[posicion[0]][posicion[1]-1]=8;
                posicion[1]--;
            }
            else{
                piso[posicion[0]][posicion[1]]=1;
                piso[posicion[0]][posicion[1]-1]=8;
                posicion[1]--;
            }
        }
        else{
            printf("Has chocado, da vuelta");
            getch();
            break;
        }
    }//ciclo for
    break;//Final case 2

    case 3:
        for(i=1;i<=espacios;i++)
    {
        if(posicion[0]!=0)
        {
            if(pluma==1)
            {//pluma arriba , pinta 0 ceros
                piso[posicion[0]][posicion[1]]=0;
                piso[posicion[0]-1][posicion[1]]=8;
                posicion[0]--;
            }
            else{
                piso[posicion[0]][posicion[1]]=1;
                piso[posicion[0]-1][posicion[1]]=8;
                posicion[0]--;
            }
        }
        else{
            printf("Has chocado, da vuelta");
            getch();
            break;
        }
    }//ciclo for
    break;//finalizacion case 3
    }//llave final de switch


}

void verTablero(int piso[][TAM])
{
    int i,j;
    printf("\n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("%d ",piso[i][j]);
        }
        printf("\n");
    }
getch();
}
