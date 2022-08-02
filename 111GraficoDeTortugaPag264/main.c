#include <stdio.h>
#include <stdlib.h>
#define  TAM 20
#include <conio.h>
void plumaArriba(int *pluma);
void plumaAbajo(int *pluma);
void girarDerecha(int *direccion);
void girarIzquierda(int *direccion);
void avanzar(int piso[][20],int posicion[2],int *pluma,int *direccion);
void verTablero(int piso[][20]);

int main()                       //y son filas , x son columnas
{                                //(y x) donde se mueve la tortuga
    int piso[TAM][TAM],posicion[2]={0,0};/*Generamos el piso en el que se puede mover la tortuga, */
    int pluma=1,direccion=0;
    int i,j,comando;

    for(i=0;i<TAM;i++){//Llenamos el piso con ceros inicialmente
        for(j=0;j<TAM;j++){
            piso[i][j]=0;
        }
    }

    piso[0][0]=8;//-1 representa la tortuga

    do{
        system("cls"); //Limpia la pantalla
        printf("Elige una de las siguientes acciones: \n");
        printf("1. Pluma arriba\n");
        printf("2. Pluma abajo\n");
        printf("3. Girar derecha\n");
        printf("4. Girar izquierda\n");
        printf("5. Avanzar\n");
        printf("6. Ver tablero\n");
        printf("7. Finalizar\n");
        printf("-----------------------------\n\n");
        printf("posicion[%i][%i]\n",posicion[0],posicion[1]);
        printf("Direccion: %i\n\n",direccion);
        printf("-----------------------------\n");
        printf("Comando:");
        scanf("%i",&comando);

        switch(comando){
            case 1: plumaArriba(&pluma); break; //La funcion recibe el parametro de memoria "&pluma"
            case 2: plumaAbajo(&pluma); break;
            case 3: girarDerecha(&direccion); break;
            case 4: girarIzquierda(&direccion); break;
            case 5: avanzar(piso,posicion,&pluma,&direccion); break;
            case 6: verTablero(piso); break;
            case 7: printf("Has finalizado el programa"); break;
            default: printf("Comando no valido"); getch(); break;
        }


    }while(comando!=7);

    return 0;
}
                // "*" pasa una direccion de memoria a la funcion

void plumaArriba(int *pluma){
    *pluma=1;
}

void plumaAbajo(int *pluma){
    *pluma=0;
}

void girarDerecha(int *direccion){
    if(*direccion<3)
        {*direccion+=1;}
    else
        {*direccion=0;}
}

void girarIzquierda(int *direccion){
    if(*direccion>0)
        {*direccion-=1;}
    else
        {*direccion=3;}
}
void avanzar(int piso[][20],int posicion[2],int *pluma,int *direccion){

    int i,j,espacios;
    printf("Cuanto deseas avanzar?: ");
    scanf("%i",&espacios);

    switch(*direccion)//Evalua en que direccion estaba apuntando la tortuga (Arriba,abajo,izquierda,derecha)
    {
    case 0:
            for(j=1;j<=espacios;j++)//indica cuantos pasos va a dar la tortuga
            {      //Evaluamos la posicion en x(columnas) de modo que no choque la tortuga

                if(posicion[1]!=19)//Si comienza en 0,0 +18 llega a 0,18 faltando el 19
                {                  //por que se reserva el siguiente lugar a la tortuga
                        //Evalua si pluma es 1 pinta 0 , si es 0 pinta 1
                    if(*pluma==1)
                    {        // 0=Y evalua en que lugar de Y está
                                         //Evalua en X
/*Piso=espacio */     piso[posicion[0]][posicion[1]]=0;
                      piso[posicion[0]][posicion[1]+1]=8;//Posicion en la que se encuentra la tortuga
                      posicion[1]++;//actualizamos el valor en X=columnas
                      /*Va acualizando paso a paso el 8 hasta finalizar el programa para que
                      al final de realizar todo el ciclo, podamos ver el espacio en donde quedó la tortuga*/
                    }
                    else
                    {
                      piso[posicion[0]][posicion[1]]=1;
                      piso[posicion[0]][posicion[1]+1]=8;//Posicion en la que se encuentra la tortuga
                      posicion[1]++;
                    }
                }
                else
                {
                printf("La tortuga ha chocado (girar case 0)\n");
                getch();//Se espera un momento
                break;//Rompe el ciclo en caso de entrar la primera vez
                }
            }
            break; //Break case 0

    case 1:
            for(j=1;j<=espacios;j++)//indica cuantos pasos va a dar la tortuga
            {      //Evaluamos la posicion en x(columnas) de modo que no choque la tortuga

                if(posicion[0]!=19)//Si comienza en 0,0 +18 llega a 0,18 faltando el 19
                {                  //por que se reserva el siguiente lugar a la tortuga
                        //Evalua si pluma es 1 pinta 0 , si es 0 pinta 1
                    if(*pluma==1)
                    {        // 0=Y evalua en que lugar de Y está
                                         //Evalua en X
/*Piso=espacio */     piso[posicion[0]][posicion[1]]=0;
                      piso[posicion[0]+1][posicion[1]]=8;//Posicion en la que se encuentra la tortuga
                      posicion[0]++;//actualizamos el valor en X=columnas
                      /*Va acualizando paso a paso el 8 hasta finalizar el programa para que
                      al final de realizar todo el ciclo, podamos ver el espacio en donde quedó la tortuga*/
                    }
                    else
                    {
                      piso[posicion[0]][posicion[1]]=1;
                      piso[posicion[0]+1][posicion[1]]=8;//Posicion en la que se encuentra la tortuga
                      posicion[0]++;
                    }
                }
                else
                {
                printf("La tortuga ha chocado (girar case 1)\n");
                getch();//Se espera un momento
                break;//Rompe el ciclo en caso de entrar la primera vez
                }
            }
            break;
    case 2:
            for(j=1;j<=espacios;j++)//indica cuantos pasos va a dar la tortuga
            {      //Evaluamos la posicion en x(columnas) de modo que no choque la tortuga
                                //Como ya no avanzamos hacia 19 , avanzamos a la columna 0
                if(posicion[1]!=0)//Si comienza en 0,0 +18 llega a 0,18 faltando el 19
                {                  //por que se reserva el siguiente lugar a la tortuga
                        //Evalua si pluma es 1 pinta 0 , si es 0 pinta 1
                    if(*pluma==1)
                    {        // 0=Y evalua en que lugar de Y está
                                         //Evalua en X
/*Piso=espacio */     piso[posicion[0]][posicion[1]]=0;
                      piso[posicion[0]][posicion[1]-1]=8;//Posicion en la que se encuentra la tortuga
                      posicion[1]--;//actualizamos el valor en X=columnas
                      /*Va acualizando paso a paso el 8 hasta finalizar el programa para que
                      al final de realizar todo el ciclo, podamos ver el espacio en donde quedó la tortuga*/
                    }
                    else
                    {
                      piso[posicion[0]][posicion[1]]=1;
                      piso[posicion[0]][posicion[1]-1]=8;//Posicion en la que se encuentra la tortuga
                      posicion[1]--;
                    }
                }
                else
                {
                printf("La tortuga ha chocado (girar case 2)\n");
                getch();//Se espera un momento
                break;//Rompe el ciclo en caso de entrar la primera vez
                }
            }
            break;
    case 3:
            for(j=1;j<=espacios;j++)//indica cuantos pasos va a dar la tortuga
            {      //Evaluamos la posicion en x(columnas) de modo que no choque la tortuga

                if(posicion[0]!=0)//Si comienza en 0,0 +18 llega a 0,18 faltando el 19
                {                  //por que se reserva el siguiente lugar a la tortuga
                        //Evalua si pluma es 1 pinta 0 , si es 0 pinta 1
                    if(*pluma==1)
                    {        // 0=Y evalua en que lugar de Y está
                                         //Evalua en X
/*Piso=espacio */     piso[posicion[0]][posicion[1]]=0;
                      piso[posicion[0]-1][posicion[1]]=8;//Posicion en la que se encuentra la tortuga
                      posicion[0]--;//actualizamos el valor en X=columnas
                      /*Va acualizando paso a paso el 8 hasta finalizar el programa para que
                      al final de realizar todo el ciclo, podamos ver el espacio en donde quedó la tortuga*/
                    }
                    else
                    {
                      piso[posicion[0]][posicion[1]]=1;
                      piso[posicion[0]-1][posicion[1]]=8;//Posicion en la que se encuentra la tortuga
                      posicion[0]--;
                    }
                }
                else
                {
                printf("La tortuga ha chocado (girar case 1)\n");
                getch();//Se espera un momento
                break;//Rompe el ciclo en caso de entrar la primera vez
                }
            }
            break;
    }//Fin de switch
}//Fin de funcion
void verTablero(int piso[][20])
{
    int i,j;
    for(i=0;i<TAM;i++)
    {
        for(j=0;j<TAM;j++)
        {
        printf("%i ", piso[i][j]);
        }
        printf("\n");
    }
    getch();//Detiene la ejecucion del programa y hasta que detecta la tecla, continua
}
