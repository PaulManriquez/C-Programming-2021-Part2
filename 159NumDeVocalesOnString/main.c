#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 20
int main()
{
    char c;
    char respuesta[TAMANIO];
    int i=0;
    printf("Introduzca una cadena de texto:");
    while((c=getchar())!='\n')
    {
        respuesta[i++]=c;
    }
    respuesta[i]='\0';
    printf("Esto es lo que escribiste:");
    puts(respuesta);

    char caracter1='a';
    if(strchr(respuesta,caracter1)!= NULL){
        printf("\'%c\' se encuentra en: %s",caracter1,respuesta);
    }
    char vocales[]="aeiou";//5 posiciones y añade \0
    int j=0;
    int nVecesVocales[5]={0};

        for(j=0;j<5;j++){
            for(i=0;i<TAMANIO;i++){
                if(vocales[j]==respuesta[i])
                {
                    nVecesVocales[j]+=1;
                }
            }
        }

    printf("\nNumero de veces repetida la vocal:\n");

    for(i=0;i<5;i++){
    printf("%c:%d\n",vocales[i],nVecesVocales[i]);
    }

    return 0;
}
