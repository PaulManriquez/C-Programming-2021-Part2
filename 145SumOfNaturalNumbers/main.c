#include <stdio.h>
#include <stdlib.h>
int SumOfNaturalNumbers(int n);
int main()
{
    int n,answer;
    printf("Introduce el numero para sumar sus numeros naturales:");
    scanf("%d",&n);
    answer=SumOfNaturalNumbers(n);
    printf("%d ",answer);
    return 0;
}
int SumOfNaturalNumbers(int n)
{

    if(n==1){
        return n;
    }
    return n=n+SumOfNaturalNumbers(n-1);
}
