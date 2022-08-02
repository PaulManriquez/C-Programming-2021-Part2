#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 5
int main()
{
    int i,n1;
    int n[TAMANIO]={0};

    srand(time(NULL));

    i=0;
    int flag=0;
    int k=0;
    int gateSalida=0;
    int numeroDeProcesos=0;
    do{ n1=1+((rand()%10));
        if(n1%2==0){
        do{
            if(n1!=n[i]){flag+=1;}//reset
            if(flag==5){n[k]=n1; k+=1; gateSalida+=1;}
            i+=1;
        }while(i<=4);
        }
        flag=0;
        i=0;
        numeroDeProcesos+=1;
        }while(gateSalida<5);

        printf("Numero de iteraciones:%d\n",numeroDeProcesos);
        for(i=0;i<TAMANIO;i++){
            printf("%d ",n[i]);
        }


    return 0;
}
