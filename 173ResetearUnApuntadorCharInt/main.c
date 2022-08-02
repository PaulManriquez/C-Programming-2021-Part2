#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void imprimeChar(char *ptrChar);
void imprimeInt(int *ptrN,int tam);
int main()
{
    char c;
    char Cadena[20];
    int i;
    printf("Ingrese la cadena de texto:");

    while((c=getchar())!='\n'){
        Cadena[i++]=c;
    }
    Cadena[i]='\0';
    puts(Cadena);
    printf("Imprimiendo con un puntero:\n");
    imprimeChar(Cadena);
    fflush(stdin);
    int Tamvector;
    int j;
    printf("\nIntroduce el tamaño del vector:");
    scanf("%d",&Tamvector);
    int vecN[Tamvector];
    int n;
    for(j=0;j<Tamvector;j++){
    printf("\nIntroduce el numero %d:",j+1);
    scanf("%d",&n);
    vecN[j]=n;
    }
    imprimeInt(vecN,Tamvector);

    return 0;
}
void imprimeInt(int *ptrN,int tam){

    while(*ptrN<tam)
    {
    printf("%d ",*ptrN);
    ptrN++;
    }

}
void imprimeChar(char *ptrChar)
{
    int cont=0;
    while(*ptrChar!='\0'){
        printf("%c",*ptrChar);
        ptrChar++;
        cont++;
    }
    ptrChar=ptrChar-cont;
    printf("\n2:");
    while(*ptrChar!='\0'){
        printf("%c",*ptrChar);
        ptrChar++;
    }
}
