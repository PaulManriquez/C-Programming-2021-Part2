#include <stdio.h>
#include <stdlib.h>
void UpperCase(char *ptrS);
double promedio(const double *ptrPromedio,double nDatos);
int main()
{
    char string[]="caRactereS";
    printf("El string antes de la conversion es:%s\n",string);
    UpperCase(string);
    printf("\nEl string despues de la conversion es:%s",string );
    printf("\n");
    printf("\nPromedio de 3 datos");
    double datos[]={12,10,33};
    printf("\nEl promedio es :%f\n",promedio(datos,3));
    return 0;
}
double promedio(const double *ptrPromedio,double nDatos)
{
    int i;
    double suma=0;
    for(i=0;i<nDatos;i++,ptrPromedio++){
        suma+=*ptrPromedio;}

    return (suma/nDatos);
}


void UpperCase(char *ptrS)
{
    while(*ptrS!='\0'){

        if(*ptrS>='a' && *ptrS<='z'){
            *ptrS-=32;
        }
        ptrS++;
    }
}

