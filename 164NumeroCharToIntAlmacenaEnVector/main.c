#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    printf("Introduce el numero:");
    char Numero[120];
    char Numero2;
    scanf("%s",&Numero);
    fflush(stdin);
    /*Take a pointer to point to
    first character*/
    char *p=Numero;//direccion del vector
    int i=0;
    int entero,numInt[20]={0};
    int j=0;

    while(*p!='\0')
    {
            Numero2=*p;//Almacena el valor al que apunta
            entero= Numero2 - '0';//Resta los valores en codigo ASCII y lo devuelve en entero
            numInt[i++]=entero;//Almacena el entero en un vector
            p++;//incrementa el apuntador
        }

    printf("Numero en binario (int):\n");
    for(j=0;j<i;j++){
        if(numInt[j]>= 2){
            printf("\nError, numero no binario:%d",numInt[j]);
        break;
        }
        else{
            printf("%d ",numInt[j]);
        }
    }

return 0;
}
