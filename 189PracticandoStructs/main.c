#include <stdio.h>
#include <stdlib.h>

struct trabajador{
    char nombre[20];
    char apellidos[40];
    int edad;
    char puesto[10];
}fijo;

struct trabajador2{
    char *nombre;
}temporal2;

struct numvec{
     char nombre[10];
     int  n[5];
}NUMVEC;

struct oracion{
     char oracion1[20];
}ORACION;
void vizualizar(struct oracion);
void vizualizar2(struct oracion *);

struct IdNombre{
    int  id;
    char nombre[20];
};

int main()
{
    /*Establece una nueva variable para la estructura trabajador*/
    struct trabajador c1={"Manriquez","Chavez",23,"Eginier"};
    printf("%s\n",c1.nombre);//Accede al campo nombre
    //////////////////////////////////////////////////////////////
    struct trabajador fijo;
    struct trabajador2 temporal2;//Direccionando*
           temporal2.nombre="Paul";
    //fijo=temporal; temporal no esta establecido, no puede realizar la accion
      fijo=c1;/*Pasa todos los campos de la estructura a fijo*/
    /*Modificando un campo de fijo*/
    fijo.edad=24;//Cambiado el campo de manera individual

    //Estableciendo a struct numvec sus numeros
    struct numvec NUMVEC={"Paul",{1,2,3,4,5}};
    NUMVEC.n[0]=22; //Modificando y accediendo al elemento estruct variable

    ///Imprimiedo en funcion una estructura
    struct oracion ORACION={"Hola perro"};
    vizualizar(ORACION);   //Por "valor"
    vizualizar2(&ORACION);//Por referencia

    //Array de estructuras
    struct IdNombre vecIdN[3];
    //vecIdN[0].id=1;
    int i;
    putchar('\n');
    for(i=0;i<3;i++){
        printf("Introduzca Id %d:",i);
        scanf("%d",&vecIdN[i].id);
        printf("Introduzca char %d:",i);
        scanf("%s",&vecIdN[i].nombre);
        putchar('\n');
    }
    for(i=0;i<3;i++){
        printf("%d: ID:%d Nombre:%s\n",i,vecIdN[i].id,vecIdN[i].nombre);
    }
    return 0;
}
//accde a struct oracion con la variable establecida en main ORACION
vizualizar(struct oracion ORACION){
printf("\nEsta es la oracion en el vector:%s",ORACION.oracion1);
}
vizualizar2(struct oracion *ORACION){
//printf_s
 printf("\nEsta es la oracion con el apuntador:%s",ORACION->oracion1);
}
