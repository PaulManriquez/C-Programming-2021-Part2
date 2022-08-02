#include <stdio.h>
#include <stdlib.h>
void copia1(char *s1,const char *s2);
void copia2(char *s1,const char *s2);
int main()
{
    char  cadena1[10];
    char *cadena2="Hola";    //Crea un apuntador a una cadena
    char  cadena3[10];
    char  cadena4[]="Adios"; //Crea un apuntador a una cadena

    copia1(cadena1,cadena2);
    printf("Cadena1= %s \n", cadena1);

    copia2(cadena3,cadena4);
    printf("Cadena3 = %s\n",cadena3);

    return 0;
}
//Copia s2 en s1 con el uso de la notacion de arreglos
void copia1(char *s1,const char *s2)
{
    int i;
    for(i=0;(s1[i]=s2[i])!='\0';i++){
        ;//No realiza tarea alguna en el cuerpo
    }
}
//Copia s2 en s1 con el uso de la notacion de apuntadores
void copia2(char *s1,const char *s2)
{
    for(;(*s1=*s2)!='\0';s1++,s2++){
        ;
    }
}
