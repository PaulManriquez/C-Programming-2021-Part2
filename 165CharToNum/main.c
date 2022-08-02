#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char c;
    char RecibeBinario[20];
    int i=0;
    printf("\tBinario A decimal");
    printf("\nIntroduce tu numero en binario:");
    while((c=getchar())!='\n')
    {
        RecibeBinario[i++]=c;
    }
    RecibeBinario[i]='\0';
   //Copiando cadena;
    char RecibeBinario2[20];
    strcat(RecibeBinario2,RecibeBinario);
    printf("Esta es la copia en RecibeBinario2:%s\n",RecibeBinario2);
    printf("Esto es lo que introduciste en char:");
    puts(RecibeBinario);
    fflush(stdin);
    /*Convirtiendo la cadena char a int
    Este lo almacena en la variable entero de manera general
    y no cada uno de sus elementos*/
    int entero;
    entero=atoi(RecibeBinario);
    printf("\nAlmacena el valor en \"entero\" en forma general,\n"
           "(No cada uno de sus elementos:%d)\n",entero);
    char *ptrS=RecibeBinario2;
    int ii=0;
    int entero2,numInt[20]={0};
    char Numero2;
    fflush(stdin);
    while(*ptrS!='\0')
    {
        if(*ptrS!='1' || *ptrS!='0'){
            printf("\nEror,numero no binario");
            break;
        }
        printf("%c",*ptrS);//Aqui imprimes la letra a la que apunta
        Numero2=*ptrS;//Almacena el valor al que apunta
        entero2= Numero2 - '0';//Resta los valores en codigo ASCII y lo devuelve en entero
        numInt[ii++]=entero2;//Almacena el entero en un vector
        ptrS++;//incrementa el apuntador
    }
    printf("\nEste es el valor en entero");
    int j=0;
    for(j=0;j<ii;j++)
    {
        printf("%d ",numInt[j]);
    }
    return 0;
}
