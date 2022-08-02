#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double promedio(int i, ...);

int main()
{
    double w=37.75;
    double x=22.5;
    double y=1.7;
    double z=10.2;

    printf("%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n",
           "w= ", w,"x=",x,"y=",y,"z=",z);
    printf("\n\n");
    printf("%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n",
           "El promedio de w y x es:",promedio(2,w,x),
           "El promedio de w x & y es:",promedio(3,w,x,y),
           "El promedio de w y x & Z es:",promedio(4,w,x,y,z)
           );

    return 0;
}
double promedio(int i, ...)
{
    double total=0;
    int j;//Contador de argumentos
    va_list ap;//Almacena la informacion necesaria para va_start y va_end
    va_start(ap,i);//Inicializa el objeto va_list

    //Procesa la lista de argumentos de longitud variable
    for(j=1;j<=i;j++){
        total +=va_arg(ap,double);
    }
    va_end(ap);
    return total;
}
