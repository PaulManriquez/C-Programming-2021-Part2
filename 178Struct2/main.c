// Crear un formulario de registro.
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <time.h>
typedef struct{
 char nombre [50];
 char empleo [50];
 int edad;
}reg;

void ChangeString(char str[]);
int main(){

 reg F1[5];

 int i;
 for(i=0;i<5;i++){
  printf("Introduce tu nombre.\n");
  fflush(stdin);
  fgets(F1[i].nombre,50,stdin);
  ChangeString(F1[i].nombre);
  printf("Introduce tu empleo.\n");
  fflush(stdin);
  fgets(F1[i].empleo,50,stdin);
  ChangeString(F1[i].empleo);
  printf("Introduce tu edad.\n");
  scanf("%i",&F1[i].edad);
  system("cls");
  printf("Por favor que se inscriba el siguinte individuo.\n");
  sleep(2);
  system("pause");
  system("cls");

 }

 for(i=0;i<5;i++){
  printf("Nombre: %s.\n",F1[i].nombre);
  printf("Empleo: %s.\n",F1[i].empleo);
  printf("Edad: %i.\n",F1[i].edad);
  system("pause");
  system("cls");
 }
}

void ChangeString(char str[]){
 int lengh;

 lengh=strlen(str);

 str[lengh-1]='\0';
}
