#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void suma(int a);
void resta(int b);
void multiplicacion(int c);
void division(int d);

int main()
{
    void (*f[4])(int)={suma,resta,multiplicacion,division};
    int opcion;

    do{
        printf("Suma(0)\nResta(1)\nMultiplicacion(2)\nDivision(3)\n");
        printf("Dame la opcion que deseas:");
        scanf("%d",&opcion);
        (*f[opcion])(opcion);
        system("cls");
        printf("Deseas seguir ?(4):");
        scanf("%d",&opcion);
        system("cls");
    }while(opcion==4);
    printf("\nEjecucion exitosa");
    return 0;
}
void suma(int a){
    int n1,n2,sumat1;
printf("Suma\nElemento 1:");
scanf("%d",&n1);
printf("Elemento 2:");
scanf("%d",&n2);
sumat1=n1+n2;
printf("La suma es:%d",sumat1);
printf("\n");
getch();
}
void resta(int b){
    int n1,n2,resta1;
printf("Resta\nElemento 1:");
scanf("%d",&n1);
printf("Elemento 2:");
scanf("%d",&n2);
resta1=n1-n2;
printf("La resta es:%d",resta1);
printf("\n");
getch();
}
void multiplicacion(int c){
    int n1,n2,mult;
printf("Multiplicacion\nElemento 1:");
scanf("%d",&n1);
printf("Elemento 2:");
scanf("%d",&n2);
mult=n1*n2;
printf("La multiplicacion es:%d",mult);
printf("\n");
getch();
}
void division(int d){
    int n1,n2,div1;
printf("Suma\nElemento 1:");
scanf("%d",&n1);
printf("Elemento 2:");
scanf("%d",&n2);
div1=n1/n2;
printf("La suma es:%d",div1);
printf("\n");
getch();
}
