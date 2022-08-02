#include <stdio.h>
#include <stdlib.h>

struct atleta{
    int cedula;
    char apellido[100];
    int edad;
    float altura;
} at_fuera={3321,"Manriquez",23,1.68};

typedef struct{
    float r,i;//Parte real e imaginaria
}complejo;

void imprimirComplejo(complejo c){ //Complejo c >> (c.r,c.i)
    printf("%.2f + %.2fi \n",c.r,c.i);
}
complejo sumaComp(complejo c1, complejo c2){//Funcion de estructura
    complejo s;/*S variable de complejo*/
    s.r = c1.r+c2.r;
    s.i = c1.i+c2.i;
    return s;

}
            //Recibe la estructura de c1 y c2
complejo restaComp(complejo c1, complejo c2){//Funcion de estructura
    complejo r;/*S variable de complejo*/
    r.r = c1.r-c2.r; //r.r y r.i se añade a una nueva estructura
    r.i = c1.i-c2.i;
    return r;//Retorna una estructura r
            //Conformada de r.r y r.i
}

int main()
{
    struct atleta at1={3322,"Chavez",24,1.69};
    printf("\tEstructura de variable at_fuera\n");
    printf("Cedula:%d\n",at_fuera.cedula);
    printf("Apellido:%s\n",at_fuera.apellido);
    printf("Edad:%d\n",at_fuera.edad);
    printf("Altura:%.3f\n",at_fuera.altura);

    printf("\n\tEstructura de variable at1 dentro de main\n");
    printf("Cedula:%d\n",at1.cedula);
    printf("Apellido:%s\n",at1.apellido);
    printf("Edad:%d\n",at1.edad);
    printf("Altura:%.3f\n",at1.altura);


    complejo c1={4,3},c2={4,-3};
    printf("\nEl primer numero complejo es:"); imprimirComplejo(c1);
    printf("El segundo numero complejo es:"); imprimirComplejo(c2);
    printf("El resultado de la suma es: ");imprimirComplejo(sumaComp(c1,c2));
    printf("El resultado de la resta es: ");imprimirComplejo(restaComp(c1,c2));
    return 0;
}
