#include <stdio.h>
#include <stdlib.h>
/*Paso de estructuras a funciones*/
typedef struct{
    char nombre[30];
    char apellido[40];
    char telefono[15];
    int edad;
}Amigo;

int suma(Amigo Amigo1);

int main()
{
    Amigo Amigo1={"Perro","Chavez","4621909060",23};
    printf("Apellido:%s\n",Amigo1.apellido);
    printf("Nombre:%s\n",Amigo1.nombre);
    printf("Telefono:%s\n",Amigo1.telefono);
    printf("Edad:%d",suma(Amigo1));

    return 0;
}
int suma(Amigo Amigo1)
{
    return Amigo1.edad + 20;
}
