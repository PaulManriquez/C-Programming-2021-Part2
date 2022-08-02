#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int Matematicas;
    int Fisica;
    int Filosofia;
}Notas;
void asigDeValPtr(Notas *notas22);
void asigDeValPtr2(Notas notVec[]);
int main()
{
    Notas notas1={7,7,7};//Asignacion explicita de campos

    /*Asignacion mediante valores y punteros*/
    Notas notas2;//Declaracion de nueva estructura
    asigDeValPtr(&notas2);
    printf("\nMatematicas:%d",notas2.Matematicas);
    printf("\nFisica:%d",notas2.Fisica);
    printf("\nFilosofia:%d",notas2.Filosofia);
    /*--------------------------------------------*/
    printf("\n\n");
    /*Vectores de estructuras*/
    Notas notas3[3];
    asigDeValPtr2(notas3);
    int i;
    for(i=0;i<3;i++){
    printf("\n%d)Matematicas:%d",i+1,notas3[i].Matematicas);
    printf("\n%d)Fisica:%d",i+1,notas3[i].Fisica);
    printf("\n%d)Filosofia:%d",i+1,notas3[i].Filosofia);
    }
    return 0;
}
void asigDeValPtr(Notas *notas22){
    printf("Calif en matematicas:");
    scanf("%d",&notas22->Matematicas);
    printf("Calif en Fisica:");
    scanf("%d",&notas22->Fisica);
    printf("Calif en Filosofia:");
    scanf("%d",&notas22->Filosofia);
}
void asigDeValPtr2(Notas notVec[]){
   int i;
   for(i=0;i<3;i++){
    printf("Calif en matematicas:");
    scanf("%d",&notVec[i].Matematicas);
    printf("Calif en Fisica:");
    scanf("%d",&notVec[i].Fisica);
    printf("Calif en Filosofia:");
    scanf("%d",&notVec[i].Filosofia);
    putchar('\n');
   }
}
