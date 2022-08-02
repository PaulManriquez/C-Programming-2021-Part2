#include <stdio.h>
#include <stdlib.h>
void EncuentraElNumero(int vec1[],int *ptrNum);
int main()
{
    int n;
    int vec[5]={1,4,2,3,22};
    printf("Introduce la posicion en que crees que está\nEl numero 22:");
    scanf("%d",&n);

    EncuentraElNumero(vec,&n);

    return 0;
}
void EncuentraElNumero(int vec1[], int *ptrNum)
{
    int cont=0;
    //int trying;
    if(vec1[*ptrNum]==22){
        printf("Encontraste el numero:");
    }
    else{
      //trying=*ptrNum;
        do{
        //    trying+=1;
         /*
          if(trying>=5){
               trying=0;
            }
            cont+=1;
         */
         *ptrNum+=1;
         if(*ptrNum>=5)
         {
             *ptrNum=0;
         }
        cont+=1;
        }while(vec1[*ptrNum]!=22);
        printf("\nEl elemento en que se encontraba esta en \n"
               "La posicion %d. No Iteraciones:%d",*ptrNum,cont);
    }

}
