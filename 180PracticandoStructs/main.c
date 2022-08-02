#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct{
int a;
int b;
}Multiplica,Mult;
int main()
{
    int n1,n2;
    Multiplica F1={2,3};
    //Estructura 1
    printf("\tEstructuras\n\n");
    printf("\tEstructura 1\n");
    printf("Elemento a:%d\nElemento b:%d"
           "\nLa multiplicacion es:%d\n",F1.a,F1.b,F1.a*F1.b);
    //Estructura 2
    printf("\n\tEstructura 2");
    printf("\nIngresa 2 digitos sin espacio:");
    scanf("%1d%1d",&n1,&n2);
    printf("Numeros ingresados individualmente:%d y %d",n1,n2);
    Mult F2={n1,n2};
    printf("\nElemento a:%d\nElemento b:%d"
           "\nLa multiplicacion es:%d",F2.a,F2.b,F2.a*F2.b);
    //vector a struc
    printf("\n\n\tVector de struct");
    Mult OpBasicas[4];
    /*OpBasicas[0].a=2;
    OpBasicas[0].b=2;*/
    srand(time(NULL));
    int i,nRand1,nRand2;
    for(i=0;i<4;i++){
        nRand1=1+(rand()%9);
        nRand2=1+(rand()%9);
        OpBasicas[i].a=nRand1;
        OpBasicas[i].b=nRand2;
    }
    printf("\n");
    for(i=0;i<4;i++){
        printf("%d y %d\n",OpBasicas[i].a,OpBasicas[i].b);
    }
    return 0;
}
