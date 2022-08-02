#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define PI 3.1416
#define AREA_CIRCULO(x) ((PI)*(x)*(x))
#define AREA_RECTANGULO(x,y) ((x)*(y))

int main()
{
    float areaCirculo,radio;
    float b,h,areaRectangulo;
    int opcion;

    do{
    system("cls");
    printf("\tSeleccione una opcion:");
    printf("\n(1)MacroAreaDeCirculo");
    printf("\n(2)MacroAreaDeRectangulo");
    printf("\nOpcion Elegida:");
    scanf("%d",&opcion);
    switch(opcion){
    case 1:
        printf("\nIngrese el radio del circulo:");
        scanf("%f",&radio);
        areaCirculo=AREA_CIRCULO(radio);
        printf("Este es el area del circulo:%.4f",areaCirculo);
        putchar('\n');
        break;
    case 2:
        printf("\nIngrese la base del triangulo:");
        scanf("%f",&b);
        printf("Ingrese la altura del triangulo:");
        scanf("%f",&h);
        areaRectangulo=AREA_RECTANGULO(b,h);
        printf("Esta es el area del rectangulo:%.4f",areaRectangulo);
        break;
    default:
    printf("\nOpcion no valida");
    }
    printf("\nDesea seguir?(1)");
    scanf("%d",&opcion);
    }while(opcion==1);

    return 0;
}
