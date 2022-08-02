#include <stdio.h>
#include <stdlib.h>

void despliegaBits(unsigned valor);

int main()
{
    unsigned x;

    printf("Introduzca un entero sin signo:");
    scanf("%u",&x);//%u El dato entero se convierte a entero sin signo
    despliegaBits(x);
    return 0;
}
void despliegaBits(unsigned valor)
{
    unsigned c; //Contador
    /*Define despliegaMascara y desplaza 31 bits hacia la izquierda*/
    unsigned despliegaMascara = 1<<31;
    printf("%10u=",valor);
    /*Ciclo a través de los bits*/
    for(c=1;c<=32;c++){
        putchar(valor & despliegaMascara ?  '1': '0');
        valor <<=1; /*Desplaza valor 1 hacia la izquierda*/
        if(c%8==0){
            putchar( ' ');
        }
    }
    putchar('\n');
}
