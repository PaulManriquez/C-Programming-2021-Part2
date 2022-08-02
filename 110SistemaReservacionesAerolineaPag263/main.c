#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int asientos[11]={0};
    int j=5,i=0,k;
    int digito;
    bool flag=false;
    int cont=0;
    int resp;

    do{
        printf("Digite 1 para primera clase\nDigite 2 para economico: ");
        scanf("%d",&digito);
        cont+=1;
        if( digito==1 && flag==false || digito==2 && flag==false){
            if( digito==1 && i<5 ){i+=1; asientos[i]=1;
            printf("Su asiento es el %d \n",i);
            /*if(i==5){flag=true; }*/}
            else if(digito==2 && j<10){j+=1; asientos[j]=1;
            printf("Su asiento es el %d \n",j);
           //if(j==10){flag=true;}*/
            }
        }
        if(flag==true && i==5 || flag==true && j==10){
                if(digito==1 && i==5){printf("Primera clase no esta disponible\n");}
                else if(digito==2 && j==10){printf("Segunda clase no esta disponible\n");}
            for(k=1;k<=10;k++){
                if(asientos[k]==0){
                    printf("El asiento %d esta disponible,¿lo desea? si(1) ",k);
                    scanf("%d",&resp);
                    printf("\n");
                    if(resp==1){asientos[k]=1; printf("Su asiento es el %d\n",k); break;}
                    else{printf("El siguiente vuelo comienza en 3 hrs\n"); cont-=1; break;}
                }
            }
        }

        if(i==5 || j==10){ flag=true; }

    }while(cont<=9);

    return 0;
}
