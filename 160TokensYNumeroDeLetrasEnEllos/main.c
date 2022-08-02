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
   // char n[2]=" ";
    int cont=0,contPalabra=0,contndLetras=0;

    do{
        contndLetras+=1;
        cont++;
        if(respuesta[cont]== ' '/*n[0]*/)
        {
        if(contPalabra>=1 && respuesta[cont]!='\0')
        {
            contPalabra+=1;
            contndLetras=contndLetras-1;
            printf("\nNumero de letras en palabra %d:%d",contPalabra,contndLetras);
            contndLetras=0;
        }
            if(contPalabra==0)
            {
            contPalabra+=1;
            printf("\nNumero de letras en palabra %d:%d",contPalabra,contndLetras);
            contndLetras=0;
            }
        }

        if(respuesta[cont]== '\0')
        {   contndLetras=contndLetras-1;
            contPalabra+=1;
            printf("\nNumero de letras en palabra %d:%d",contPalabra,contndLetras);
            contndLetras=0;
        }

    }while(respuesta[cont]!='\0');

    //char respuesta[TAMANIO]; <--Aqui almacenamos nuestro argumento
    char *ptrToken; //Crea un apuntador a char
    printf("\n\nDividiendo la cadena:\n");
    ptrToken=strtok(respuesta, " ");//comienza la division del enunciado en tokens
    //enable the action to start to separate the string
    int contPalaToken=0;
    while(ptrToken!=NULL)
    {
        printf("%s\n",ptrToken);//Imprime el token inicial
        ptrToken=strtok(NULL, " ");//obtiene el siguiente token
        contPalaToken+=1;
    }
    printf("\nNumero de palabras:%d\n",contPalaToken);
    //Hacer una copia de cada token generado
    //Contar cuantas letras tiene cada token (si se encuentra un espacio imprimir o guardar y reset)

    return 0;
}
