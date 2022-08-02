#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void despliegaBits(unsigned valor);

int main()
{
    unsigned numero1 = 960;
    puts("\n\tDemuestra el operador de desplazamiento a la izquierda a nivel de bit\n");
    printf("El resultado del desplazamiento a la izquierda de\n");
    despliegaBits(numero1);
    printf("8 posiciones de bit con el uso del\n"
           "operador de desplazamiento a la izquierda << es\n");
    despliegaBits(numero1 << 8);
    printf("\nEl operador a la izquierda es multiplicativo <<\n"
           "%d^%d (elevado a No de desplazamientos)\n",2,8);
    printf("Multiplicado por nuestro numero\n "
           "original a aplicar desplazamiento\n");
    printf("960 *(2^8) = %.1f ",960 * pow(2,8) );

    puts("\n\n\tDemuestra el operador de desplazamiento a la derecha a nivel de bit\n");
    printf("El resultado del desplazamiento a la derecha de\n");
    despliegaBits(numero1);
    printf("8 posiciones de bit con el uso del\n"
           "operador de desplazamiento a la derecha >> es\n");
    despliegaBits(numero1 >> 8);
    printf("\nEl operador a la derecha es dividitivo >>\n"
           "%d^%d (elevado a No de desplazamientos)\n",2,8);
    printf("Dividido por nuestro numero\n "
           "original a aplicar desplazamiento\n");
    printf("960 /(2^8) = %.1f ",960 / pow(2,8) );

    return 0;
}
void despliegaBits( unsigned valor )
{
    unsigned c;
    /*Declara despliega mascara y desplaza a la izquierda 31 bits*/
    unsigned despliegaMascara = 1 << 31;
    printf("%7u = ",valor);
    /*Ciclo a traves de los bits*/
    for(c=1;c<=32;c++){
        putchar(valor & despliegaMascara ? '1':'0');
        valor <<=1;
        if(c%8==0){
            putchar( ' ');
        }
    }
    putchar('\n');
}
