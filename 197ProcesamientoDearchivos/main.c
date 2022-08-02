#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * flujo = fopen("Datos.txt","rb");
    if(flujo == NULL){
        perror("Error en la apertura del archivo");
        return 1;
    }

    int numero;
    char cadena[10];

    while(feof(flujo)==0){
        fscanf(flujo, "%d%s",&numero,&cadena);
        printf("%d %s\n",numero, cadena);
    }
    fclose(flujo);
    printf("\n\nSe ha leido el archivo correctamente");
    return 0;
}
