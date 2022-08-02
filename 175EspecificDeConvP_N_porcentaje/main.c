#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int x=12345;
    int y;
    ptr=&x;
    printf("\tVemos que coinciden las direcciones de x y ptr\n");
    printf("El valor de ptr es: %p\n",ptr); //irecciones a las que apuntan
    printf("La direccion de x es %p\n\n",&x);//Direccion de x
    //Contiene la cantidad de caracteres
    y=printf("\nEsta linea tiene 30 caracteres\n");
    printf("Se imprimieron %d caracteres\n\n",y);
    //
    printf("Impresion de %% en una cadena de control de formato\n");
    //Ancho de campos
    printf("\n%5d\n",3);
    //
    printf("%*.*f \a",7,2,98.736);
    return 0;
}
