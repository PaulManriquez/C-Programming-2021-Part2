#include <stdio.h>
#include <stdlib.h>

void iniciaArregloEstatico(void);
void inciaArregloAutomatico(void);

int main()
{
    printf("Primera llamada a cada funcion:\n");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    printf("\n\nSegunda llamada a cada funcion:\n");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    printf("\n");
    return 0;
}
void iniciaArregloEstatico(void)
{
    //Inicializa los elementos a 0 la primera vez que se llama a la funcion
    static int arreglo1[3];
    int i;//contador

    printf("\nValores al entrar a iniciaArregloEstatico:\n");
    //muestra el contenido del arreglo1

    for(i=0;i<=2;i++){
        printf("arreglo1[%d]= %d",i,arreglo1[i]);
    }
    printf("\nValores al salir de iniciaArregloEstatico:\n");
    //Modifica y muestra el contenido del arreglo

    for(i=0;i<=2;i++){
        printf("arreglo1[%d]= %d",i,arreglo1[i]+=5);
    }
}

void iniciaArregloAutomatico(void)
{
    //incializa los elementos cada que se llama a la funcion
    int arreglo2[3]={1,2,3};
    int i;
    printf("\n\nValores al entrar a iniciaArregloAutomatico:\n");
    //Muestra el contenido de arreglo2
    for(i=0;i<=2;i++){
        printf("arreglo2[%d]= %d",i,arreglo2[i]);
    }
    printf("\nValores al salir de iniciArregloAutomatico:\n");

    //Modifica y muestra el contenido de arreglo2
    for(i=0;i<=2;i++){
        printf("arreglo2[%d]= %d",i,arreglo2[i]+=5);
    }
}
