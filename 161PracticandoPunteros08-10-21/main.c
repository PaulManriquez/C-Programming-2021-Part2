#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cuboPorReferencia(const int *ptrCubo);
void imprimeCaracteres(const char *ptrS);
int main()
{
    int y=5;
    int *ptry;
    ptry=&y;
    printf("El valor de y mediante puntero:%d",*ptry);
    printf("\nDireccion de y:%p",&y);
    printf("\nDireccion a la que apunta ptry:%p",ptry);

    int n;
    printf("\n\n\tCubo Por Referencia:");
    scanf("%d",&n);
    cuboPorReferencia(&n);
    printf("\nValor de n:%d",n);

    printf("\n\tCadena de caracteres\n");
    puts("Introduzca Texto:");
    fflush(stdin);//Tuve que borrar el buffer, investigar mas sobre esto
    int i=0;
    char c;
    char cadena[15];

    while((c=getchar())!='\n')
    {
      cadena[i++]=c;
    }
    cadena[i]='\0';
    imprimeCaracteres(cadena);
    return 0;
}

void imprimeCaracteres(const char *ptrS )
{
    puts("Cadena de texto imprimir a pantalla mediante funcion:");
    do{
        printf("%c",*ptrS);
        ptrS++;
    }while(*ptrS!='\0');
}

void cuboPorReferencia(const int *ptrCubo)
{
    int a;
    //*ptrCubo=*ptrCubo * *ptrCubo * *ptrCubo; si se quita el const en la funcion
    //aunque modificarias el valor de la variable que se pasó por referencia
    a=*ptrCubo * *ptrCubo * *ptrCubo;
    printf("Valor de a:%d",a);
}
