#include <stdio.h>
#include <stdlib.h>

union identidad{
    int  dni;            //4bytes
    long cuil;          //8bytes
    char pasaporte[10];//10bytes
};
/*Tipos de datos para almacenar apellido e
identificacion de una persona*/
struct persona{
    char apellido[20];
    char tipo_documento;
    union identidad nro_documento;//Anida la "Estructura" union llamada identidad
                                 //y crea la variable a referenciar nro_documento
};

void mostrar(struct persona p);

int main()
{
    struct persona p1; //Declaracion de variable de tipo struct persona
    printf("Ingrese apellido: ");
    scanf("%s",p1.apellido);

    printf("Ingrese tipo de identificacion (1=dni/2=cuil/3=pasaporte):");
    scanf("%hhd",&p1.tipo_documento);
    printf("Ingrese nro de identificacion: ");

    switch(p1.tipo_documento){
        case 1:
            scanf("%d",&p1.nro_documento.dni);
            break;
        case 2:
            scanf("%ld",&p1.nro_documento.cuil);
            break;
        case 3:
            scanf("%s",p1.nro_documento.pasaporte);
            break;
        default:
            printf("Tipo no valido\n");
            break;
    }

    mostrar(p1);

    return 0;
}

void mostrar (struct persona p)
{
    printf("Apellido: %s\n",p.apellido);

    switch(p.tipo_documento){
    case 1:
        printf("Numero de DNI: %d\n",p.nro_documento.dni);
        break;
    case 2:
        printf("Numero de CUIL: %ld\n",p.nro_documento.cuil);
        break;
    case 3:
        printf("Numero de pasaporte: %s\n",p.nro_documento.pasaporte);
        break;
    default:
        printf("Tipo invalido\n");
        break;
    }
}
