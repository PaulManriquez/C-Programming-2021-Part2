#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int d1,d2,sum,i,j;

    int vec[13]={0,1,2,3,4,5,6,7,8,9,10,11,12};

    for(i=0;i<(36000-1);i++){

    d1=+((rand()%6));
    d2=+((rand()%6));
    sum=d1+d2;
    vec[sum]+=1;
    }

    for(j=0;j<13;j++){
        if(j>1){
        printf("Numero %d se repitio %d veces\n",j,vec[j]);
        }
    }

    return 0;
}
