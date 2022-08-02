#include <stdio.h>
#include <stdlib.h>
//Decimal a binario, convencional y recursivo
void DecimalABinarioConvencional(void);
int DecimalToBinaryRecursive(int decimal);

int main()
{
    printf("Forma convencional de Decimal a binario\n");
    DecimalABinarioConvencional();
    printf("\nForma recursiva:");
    int n,answer;
    printf("\nIntroduce el decimal:");
    scanf("%d",&n);
    printf("\nDecimal to binary recursive:\n");
    answer=DecimalToBinaryRecursive(n);


    return 0;
}
int DecimalToBinaryRecursive(int decimal)
{
if(decimal>1){
    DecimalToBinaryRecursive(decimal/2);
}
printf("%d ",decimal%2);
}

void DecimalABinarioConvencional(void)
{
    int n,nRemain,vec[9]={0};
    printf("Introduce el decimal a binario:");
    scanf("%d",&n);
    int i=0;
    do{
        nRemain=n%2;
        vec[i]=nRemain;
        n=n/2;
        i++;
    }while(n!=0);
    printf("\nNumero a Binario: ");
    for(i=8;i>=0;i--)
    {

        printf("%d ",vec[i]);
    }
    printf("\n");
}
