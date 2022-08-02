#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
enum Estatus {CONTINUA,GANA,PIERDE};
int tiraDados(void);
void Craps(void);
int main()
{
    printf("A continuacion jugaremos craps:\n");
    char letra;
    do{
    Craps();
    printf("Desea seguir jugando?(s)Si,(0)No:");
    scanf(" %c",&letra);
    system("cls");
    }while(letra=='s');
    fflush(stdin); //Si no limpiamos el buffer, no imprime el siguiente printf
    printf("Gracias por jugar :)");
    return 0;
}
void Craps(void)
{   int suma;
    int miPunto;
    enum Estatus estatusJuego;
    printf("Tirando Dados:\n");
    srand(time(NULL));
    suma=tiraDados();
    /*Determina el estado del juego basado en la suma de dados*/
    switch(suma){
    case 7:
    case 11:
        estatusJuego=GANA;
    break;
    case 2:
    case 3:
    case 12:
        estatusJuego=PIERDE;
        break;
    default:
    estatusJuego=CONTINUA;
    miPunto=suma;
    printf("Continua jugando,su punto es:%d\n",miPunto);
    break;
    }
    while(estatusJuego==CONTINUA){
        suma=tiraDados();
        if(suma==miPunto){
            estatusJuego=GANA;
        }
        else if(suma==7){
            estatusJuego=PIERDE;
        }
    }
    if(estatusJuego==GANA){
        printf("\nEl jugador gana\n");
    }
    else{
        printf("\nEl jugador pierde\n");
    }
}
int tiraDados(void){

    int dado1;
    int dado2;
    int sumaT;

    dado1=1+(rand()%6);//Dado 1
    dado2=1+(rand()%6);
    sumaT=dado1+dado2;
    printf("\nEl jugador tiro %d + %d = %d \n",dado1,dado2,sumaT);

    return sumaT;
}
