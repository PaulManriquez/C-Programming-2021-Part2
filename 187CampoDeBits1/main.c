#include <stdio.h>
#include <stdlib.h>

typedef struct bits{
    unsigned char b0:1;
    unsigned char b1:1;
    unsigned char b2:1;
    unsigned char b3:1;
    unsigned char b4:1;
    unsigned char b5:1;
    unsigned char b6:1;
    unsigned char b7:1;
   //unsigned char   :0;
  //indica el fin de una unidad de almacenamiento 1byte,
 //pone el 0 en el resto de memoria
}BITS;
typedef union puerto
{
    unsigned char valor;
    struct bits bits;
}PUERTO;

int main()
{
    PUERTO P0;
    P0.valor =9;
    printf("Ejemplo de campos de bits\n");
    printf("\nLa direccion de valor es %p",&P0.valor);
    printf("\nLa direccion de bits es %p\n\n",&P0.bits);

    printf("b0=%d\n",P0.bits.b0);
    printf("b1=%d\n",P0.bits.b1);
    printf("b2=%d\n",P0.bits.b2);
    printf("b3=%d\n",P0.bits.b3);
    printf("b4=%d\n",P0.bits.b4);
    printf("b5=%d\n",P0.bits.b5);
    printf("b6=%d\n",P0.bits.b6);
    printf("b7=%d\n",P0.bits.b7);
    printf("\nTamaño de registro:%d",sizeof(PUERTO));
    printf("\nTamaño de registro:%d",sizeof(BITS));
    return 0;
}
