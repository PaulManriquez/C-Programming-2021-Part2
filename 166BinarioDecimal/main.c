#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define TAMANIO 20

void BinarioDecimal(char *ptrB);
void DecimalBinario(int n);
int main()
{
    char c;
    char Binario[TAMANIO];
    int i=0;

    printf("Inserte el numero binario:");
    while((c=getchar())!='\n'){
        Binario[i++]=c;
    }
    Binario[i]='\0';
    BinarioDecimal(Binario);

    int n;
    printf("\nIngrese el numero a convertir de decimal a binario:");
    scanf("%d",&n);
    DecimalBinario(n);
    return 0;
}
void DecimalBinario(int n)
{
    if(n>1){
        DecimalBinario(n/2);
    }
    printf("%d ",n%2);
}
void BinarioDecimal(char *ptrB)
{
    int i=0,j=0;
    int Numero2,entero,numInt[20]={0};
    while(*ptrB!='\0')
    {
            Numero2=*ptrB;//Almacena el valor al que apunta
            entero= Numero2 - '0';//Resta los valores en codigo ASCII y lo devuelve en entero
            numInt[i++]=entero;//Almacena el entero en un vector
            ptrB++;//incrementa el apuntador
        }

    int flag=1,cont=0,potencia,elev=0;
    for(j=0;j<i;j++){
        if(numInt[j]>= 2){
            printf("Error, numero no binario.");
        flag=0;
        break;
        }
    }
    if(flag!=0){
        printf("Numero en binario (int):\n");
        for(j=0;j<i;j++){
            printf("%d ",numInt[j]);
        }
        printf("\nEquivalente a decimal:");
        for(j=i-1;j>=0;j--){
           if(numInt[j]==1){
           potencia=pow(2,elev);
           cont+=potencia;
           }
           elev++;
        }
        printf("%d",cont);
    }
}
