#include <stdio.h>
#include <stdlib.h>
void despliegaBits(unsigned valor);
int main()
{
    unsigned numero1;
    unsigned numero2;
    unsigned mascara;
    unsigned estableceBits;

    /*Demuestra el operador de bits AND*/
    numero1 = 65535;
    mascara = 1;
    printf("El resultado de combinar los siguientes valores\n");
    despliegaBits(numero1);
    despliegaBits(mascara);
    printf("Con el uso del operador de bits AND (&) es\n");
    despliegaBits(numero1 & mascara);

    putchar('\n');

    /*Demuestra el operador de bits OR incluyente (|)*/
    numero1 = 15;
    estableceBits = 241;
    printf("El resultado de combinar los siguientes valores\n");
    despliegaBits(numero1);
    despliegaBits(estableceBits);
    printf("Con el uso del operador de bits OR incluyente (|) es\n");
    despliegaBits(numero1 | estableceBits);

    putchar('\n');

    /*Demuestra el operador de bits OR excluyente (^)*/
    numero1 = 139;
    numero2 = 199;
    printf("El resultado de combinar los siguientes valores\n");
    despliegaBits(numero1);
    despliegaBits(numero2);
    printf("Con el uso del operador de bits OR excluyente (^) es\n");
    despliegaBits(numero1 ^ numero2);

    putchar('\n');

    /*Demuestra el operador de bits complemento(~)*/
    numero1=21845;
    printf("\nEl complemento a uno de\n");
    despliegaBits(numero1);
    printf("es\n");
    despliegaBits(~numero1);

    return 0;
}
void despliegaBits(unsigned valor)
{
    unsigned c; //Contador
    /*Desplaza 31 bits a la izquierda*/
    unsigned despliegaMascara = 1<<31;
    printf("%10u = ",valor);
    /*Ciclo a traves de los bits*/
    for(c=1;c<=32;c++){
        putchar(valor & despliegaMascara ? '1':'0');
        valor<<=1;
        if(c%8==0){
            putchar( ' ');
        }
    }
    putchar('\n');
}
