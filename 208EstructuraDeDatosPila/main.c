#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int dato;
    struct nodo* siguiente;
}nodo;

nodo* primero = NULL;
void insertarNodo();
void desplegarPila();

int main()
{
    insertarNodo();
    insertarNodo();
    insertarNodo();
    insertarNodo();
    insertarNodo();
    desplegarPila();
    return 0;
}

void insertarNodo(){

    nodo* nuevo = (nodo*) malloc(sizeof(nodo));
    printf("Ingrese el dato que contendrá el nuevo nodo:");
    scanf("%d",&nuevo->dato);
    nuevo->siguiente=primero;
    primero=nuevo;
}
void desplegarPila()
{
    nodo* actual= (nodo*) malloc(sizeof(nodo));
    actual=primero;
    if(primero!=NULL){
        while(actual!=NULL){
            printf("%d ",actual->dato);
            actual=actual->siguiente;
        }
    }else{
    printf("\nLa pila se encuentra vacia\n");
    }

}
