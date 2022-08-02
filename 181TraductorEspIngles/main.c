//Bloque 6.3: Vectores de Estructuras y Ejemplo de Traductor Ingles/Espa�ol.
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define N 50

typedef struct {
    char eng[N];
    char esp[N];
    int lleno;
}traductor;

traductor trad[N];

void vacio();
void anadir();
void traducir();
void tradu(int op);
void cambio (char palabra[N]);

int main() {

    int op;
    char key;
    vacio();
    void anadir();

 do {
        system("cls");
        printf ("Elige que deseas hacer:\n");
        printf ("(1) Anadir palabras al traductor.\n");
        printf ("(2) Buscar traduccion de la palabra en el traductor.\n");
        printf ("Opcion deseada:");
        scanf ("%i", &op);

        switch (op)
        {
            case 1:
            anadir();
            break;
            case 2:
            traducir();
            break;
        }
        printf ("Introduce si deseas realizar otra operacion. (S/N)");
        scanf ("%c", &key);
 } while(key == 'S' || key == 's');

 system ("pause");

 return 0;
}

void vacio() {
    int i;
    for (i=0 ; i<N ; i++) {
    trad[i].lleno = 0;
    }
}

void anadir() {

    int i, aux;
    aux = 0;

    for (i=0 ; i<N && aux == 0 ; i++) {
        if (trad[i].lleno == 0) {
           printf ("Introduce la palabra en ingles:\n");
           fflush(stdin);
           fgets (trad[i].eng,N,stdin);
           cambio (trad[i].eng);
           printf ("Introduce la palabra en espanol:\n");
           fflush(stdin);
           fgets (trad[i].esp,N,stdin);
           cambio (trad[i].esp);
           trad[i].lleno = 1;
           aux = 1;
      }
   }
}

void traducir() {

      int op;

      printf ("Elige que deseas hacer:\n");
      printf ("(1) Traducir de Ingles a Espanol:\n");
      printf ("(2) Traducir de Espanol a Ingles:\n");
      printf ("Opcion deseada:");
      scanf ("%i", &op);

       switch (op) {
            case 1:
            tradu(op);
            break;
            case 2:
            tradu(op);
            break;
       }

}/*Fin de funcion*/

void tradu(int op) {

    int i, j, temp;
    char aux[N];
    temp = 0;

    printf ("Introduce la palabra que desea buscar: \n");
    fflush(stdin);
    fgets (aux,N,stdin);
    cambio (aux);
    if (op == 1) {
    for (i=0 ; i<N && temp==0 ; i++) {
        j = strcmp (aux, trad[i].eng);
        if (j == 0) {
            printf ("La traduccion de %s es %s.\n", trad[i].eng, trad[i].esp);
            temp = 1;
        }
    }
 }//Fin de if

 else {
        for (i=0 ; i<N && temp==0 ; i++) {
        j = strcmp (aux, trad[i].esp);
        if (j == 0) {
            printf ("La traduccion de %s es %s.\n", trad[i].esp, trad[i].eng);
            temp = 1;
            }
        }
    }/*Fin de funcion*/
    if(temp==0){
        printf("No se encontro la palabra\n");
    }
}/*Fin de funcion*/

void cambio (char palabra[N]) {

    int i;
    /*fgets da un salto de linea por lo que hay que cambiarlo*/
    for (i=0 ; i<N ; i++) {
        if (palabra[i] == '\n') {
            palabra[i] = '\0';
            break;
            }
        }
}
