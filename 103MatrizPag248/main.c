#include <stdio.h>
#include <stdlib.h>
void despliegaArreglo(const int a[][3]);
int main()
{
    int arreglo1[2][3]= {1,2,3,4,5,6};//{{1,2,3},{4,5,6}};
    int arreglo2[2][3]={1,2,3,4,5};
    int arreglo3[2][3]={{1,2},{4}};

    printf("Los valores del primer arreglo son:\n");
    despliegaArreglo(arreglo1);


    printf("Los valores del primer arreglo son:\n");
    despliegaArreglo(arreglo2);


    printf("Los valores del primer arreglo son:\n");
    despliegaArreglo(arreglo3);

    return 0;
}
void despliegaArreglo(const int a[][3]){
int i;
int j;

for(i=0;i<2;i++){
for(j=0;j<3;j++){
    printf("%d ",a[i][j]);

}
printf("\n");
}

}
