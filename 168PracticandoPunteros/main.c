#include <stdio.h>
#include <stdlib.h>
void primerEspacioNull(char *ptrC);

int main()
{
   char palabras[20],*ptrc;
   char c;
   int i=0;
   printf("Ingrese la oracion:");
   while((c=getchar())!='\n'){
    palabras[i++]=c;
   }
   palabras[i]='\0';
   primerEspacioNull(palabras);
    return 0;
}

void primerEspacioNull(char *ptrC)
{
    do{
        printf("%c ",*ptrC);
        ptrC++;
    }while(*ptrC!=' ');

}
