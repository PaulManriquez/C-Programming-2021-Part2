#include <stdio.h>
#include <stdlib.h>

void encuentraMayor(int a);
void encuentraMenor (int b);
void NumABinario(int c);


int main()
{
    /*Inicializa el arreglo de 3 apuntadores con funciones que toman un
    argumento entero y devuelven void*/
    void (*f[3])(int)={encuentraMayor,encuentraMenor,NumABinario};
    int eleccion;
    printf("Selecciona una opcion\n"
           "EncuentraMayor 0:\nEncuentraMenor 1:\nNumABinario 2:\n");
    printf("Seleccion:");
    scanf("%d",&eleccion);
    (*f[eleccion])(eleccion);
    return 0;
}
void encuentraMayor(int a)
{
    int A,trick=0,i;
    for(i=0;i<3;i++)
    {
        printf("\nIntroduce el numero %d:",i+1);
        scanf("%d",&A);
        if(A>trick){trick=A;}
    }
    printf("El numero mayor es:%d\n",trick);
}
void encuentraMenor(int b)
{

    int A,i,n[3]={0};
    for(i=0;i<3;i++)
    {
        printf("\nIntroduce el numero %d:",i+1);
        scanf("%d",&A);
        n[i]=A;
    }
    int menor;
    for(i=0;i<2;i++){
        if(n[i]<n[i+1]){
            menor=n[i+1];
            n[i+1]=n[i];
            n[i]=menor;
        }
    }

    printf("El numero menor es:%d\n",n[2]);
}
void NumABinario(int c)
{
    printf("NumABinario");
}
