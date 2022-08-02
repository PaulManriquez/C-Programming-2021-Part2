#include <stdio.h>
#include <stdlib.h>
float suma(float a, float b);
float mult(float a, float b);
int main()
{
    float (*vec[]) (float,float)={suma,mult,NULL};
    //Declaracion auxiliar de array de string
    char *str[]={"La suma es","La multiplicacion es:",NULL};
    float a=10,b=5,x;
    int i;
    //Recorrido y ejecucion del array de puntero a funcion
    for(i=0;vec[i];i++){
        x=vec[i] (a,b);
        printf("%s de %.2f y %.2f es %.2f\n",str[i],a,b,x);
    }
    return 0;
}
float suma(float a,float b){
return a+b;
}
float mult(float a,float b){
return a*b;
}
