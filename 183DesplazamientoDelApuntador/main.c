#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void apuntandoAletra(char *ptrLetra,int L);
int main()
{
    char c;
    char Oracion[50];
    int i=0;
    printf("\tDesplazamiento del apuntador\n");
    printf("Introduce la oracion:");
    while((c=getchar())!='\n'){
        Oracion[i++]=c;
    }
    Oracion[i]='\0';
    int elemento;
    printf("\nEsto fue lo que escribiste:");
    puts(Oracion);

    char resp;

    do{
   // system("cls"); posible error por que intenta limpiar los printf de main no dentro de DO
    printf("\nIngresa un numero de elemento al que deseas apuntar:");
    scanf("%d",&elemento);
    apuntandoAletra(Oracion,elemento);
    fflush(stdin);
    printf("\nDesea apuntar a otro elemento?:");
    scanf("%c", &resp);
    }while(resp=='s');

    return 0;
}
void apuntandoAletra(char *ptrLetra,int L){

printf("El elemento al que apuntaste es:%c\n",*(ptrLetra+L));

}
