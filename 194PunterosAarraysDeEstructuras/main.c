#include <stdio.h>
#include <stdlib.h>
#define ELEMENTOS 3

typedef struct {
    char nombre[30];
    char apellido[40];
    char telefono[10];
    int edad;
}Amigo;
Amigo Amigo1[]={"Juanjo","Lopez","01923819",30,
                "Marcos","Ramos","01923819",42,
                "Ana","Martinez","01923819",20
                };

int main()
{
    Amigo *p_Amigo1;
    p_Amigo1=&Amigo1;
    int i;
    /*Imprimiendo Datos*/
    for(i=0;i<ELEMENTOS;i++){
        printf("Mi amigo %s %s\n",p_Amigo1->nombre,p_Amigo1->apellido);
        printf("Su numero es:%s\n",p_Amigo1->telefono);
        printf("Su edad:%d\n",p_Amigo1->edad);
        /*Saltamos al siguiente elemento*/
        putchar('\n');
        p_Amigo1++;
    }

    return 0;
}
