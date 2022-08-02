#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void RecursiveBinario(int n);
int main()
{
    int n;
    char c;
    char RecibeBinario[20];
    int i=0,j=0;//i para almacenar char, j para almacenar en el vector int
    printf("Introduce tu numero decimal a binario:");
    scanf("%d",&n);
    printf("Numero %d a binario:",n);
    RecursiveBinario(n);
    printf("\n\n\tBinario A decimal");
    printf("\nIntroduce tu numero en binario:");
    fflush(stdin);
    while((c=getchar())!='\n')
    {
        RecibeBinario[i++]=c;
    }
    RecibeBinario[i]='\0';
    int BinarioInt[i-1];//Inicializamos el tamaño del vector con el del char
    char *ptrS;
    //Convercion Char int
    while(RecibeBinario[*ptrS]!='\0'){
        BinarioInt[j]=atoi(RecibeBinario[*ptrS]);
        ptrS++;
        j++;
    }

    return 0;
}
void RecursiveBinario(int n)
{
    if(n>1)
    {
        RecursiveBinario(n/2);
    }
    printf("%d ",n%2);
}
