#include <stdio.h>
#include <stdlib.h>
void funcion1(int a);
void funcion2(int b);
void funcion3(int c);
int main()
{   /*Inicializa el arreglo de 3 apuntadores con funciones que toman un argumento
    entero y devuelven void */
    void(*f[3])(int)={funcion1,funcion2,funcion3};
    int eleccion;
    printf("Introduzca un numero entre 0 y 2 , 3 para terminar:");
    scanf("%d",&eleccion);
    while(eleccion>=0 && eleccion<3){
        /*Invoca a la funcion en la ubicacion de la eleccion en el arreglo f,
        y pasa la eleccion como argumento*/
    (*f[eleccion])(eleccion);
    printf("Introduzca un numero entre 0 y 2 , 3 para terminar:");
    scanf("%d",&eleccion);
    printf("\n");
    }
    printf("Ejecucion exitosa\n");
    return 0;
}
void funcion1(int a)
{
    printf("Usted introdujo %d de modo que es la funcion1\n",a);
}
void funcion2(int b)
{
    printf("Usted introdujo %d de modo que es la funcion2\n",b);
}
void funcion3(int c)
{
    printf("Usted introdujo %d de modo que es la funcion3\n",c);
}
