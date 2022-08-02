#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char *s1="22Diciembre1997@";
    char respuesta[20],c;
    puts("Introduzca la cadena de texto:");
    int i=0;
    while ( (c=getchar())!='\n')
    {
        respuesta[i++]=c;
    }
    respuesta[i]='\0';
    printf("\n");
    puts(respuesta);

    int resp;
    resp=strcmp(respuesta,s1);
    printf("\n%d",resp);
    if(resp==0)
    {
        printf("\nVerdadero");
    }
    else{
        printf("\nFalso");
    }

    return 0;
}
