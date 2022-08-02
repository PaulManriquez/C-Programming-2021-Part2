#include <stdio.h>
#include <stdlib.h>
//El error al marcar en nuestra funcion "const int b[]"
//Pero cuando lo quitamos, se borra este error y nos deja modificar el arreglo desde la funcion void.
void intentaModifElArreglo(/*const*/int b[]);
void MostrarOriginal(const int c[]);
int main()
{
    int a[]={10,20,30};

    intentaModifElArreglo(a);
    printf("%d %d %d\n",a[0],a[1],a[2]);
    MostrarOriginal(a);
    return 0;
}
void intentaModifElArreglo(/*const*/int b[]){
    b[0]+=2;
    b[1]+=2;
    b[2]+=2;
}
void MostrarOriginal(const int c[]){
int i;
    printf("\nEntra a const lo cual no esta permitido modificar en el cuerpo de la funcion\n");
    for(i=0;i<3;i++){
    printf("%d ",c[i]);
    }

}
