#include <stdio.h>
 #define TAMANIO 10

 void ordenaMBurbuja( int * const arreglo, const int tamanio ); /* prototipo */

 int main()
 {
/* inicializa el arreglo a */
 int a[ TAMANIO ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

 int i; /* contador */

 printf( "Elementos de datos en el orden original\n" );

 /* ciclo a través del arreglo a */
 for ( i = 0; i < TAMANIO; i++ ) {
 printf( "%4d", a[ i ] );
 } /* fin de for */

 ordenaMBurbuja( a, TAMANIO ); /* ordena el arreglo */

 printf( "\nElementos de datos en orden ascendente\n" );

 /* ciclo a través del arreglo a */
 for ( i = 0; i < TAMANIO; i++ ) {
 printf( "%4d", a[ i ] );
 } /* fin de for */

 printf( "\n" );

 return 0; /* indica terminación exitosa */

 } /* fin de main */

 /* ordena un arreglo de enteros mediante el algoritmo de la burbuja */
 void ordenaMBurbuja( int * const arreglo, const int tamanio )
 {
 void intercambia( int *ptrElemento1, int *ptrElemento2 ); /* prototipo de funcion */
 int pasada; /* contador de pasadas */
 int j; /* contador de comparaciones */

 /* ciclo para controlar las pasadas */
 for ( pasada = 0; pasada < tamanio - 1; pasada++ ) {

 /* ciclo para controlar las comparaciones durante cada pasada */
 for ( j = 0; j < tamanio - 1; j++ ) {

 /* intercambia los elementos adyacentes, si no están en orden */
 if ( arreglo[ j ] > arreglo[ j + 1 ] ) {
 intercambia( &arreglo[ j ], &arreglo[ j + 1 ] );
 } /* fin de if */

 } /* fin del for interno */

 } /* fin del for externo */

 } /* fin de la función ordenaMBurbuja */

 /* intercambia los valores en las ubicaciones de memoria a los cuales
apunta ptrElemento1 y
 ptrElemento2 */
 void intercambia( int *ptrElemento1, int *ptrElemento2 )
 {
 int almacena = *ptrElemento1;
 *ptrElemento1 = *ptrElemento2;
 *ptrElemento2 = almacena;
 }
