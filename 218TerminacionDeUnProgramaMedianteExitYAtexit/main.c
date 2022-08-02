#include <stdio.h>
#include <stdlib.h>

void imprime(void);

int main()
{
    int respuesta;//Eleccion de menu de usuario
    atexit( imprime );//Registra la nueva funcion imprime
    printf("Introduzca 1 para terminar el programa con la funcion exit\n"
           "\nIntroduzca 2 para terminar el programa de manera normal\n");
           scanf("%d",&respuesta);
    //Llama a exit si la respuesta es 1
    if(respuesta==1){
        printf("\nTermina el programa con la funcion exit\n");
        exit( EXIT_SUCCESS);
    }
    printf("\nTermina el programa al encontrar el final de main\n");
    return 0;
}
//Despliega el mensaje antes de terminar
void imprime(void){
    printf("Ejecuta la funcion imprime al finalizar el programa\n");
}
