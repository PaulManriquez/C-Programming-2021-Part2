/* Figura 6.22: fig06_22.c
 Ejemplo de un arreglo de doble sub�ndice */
 #include <stdio.h>
 #define ESTUDIANTES 3
 #define EXAMENES 4

 /* prototipos de las funciones */
 int minimo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );
 int maximo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );
 double promedio( const int estableceCalif[], int examenes );
 void despliegaArreglo( const int calificaciones[][ EXAMENES ], int alumnos,int examenes );

 /* la funci�n main comienza la ejecuci�n del programa */
 int main()
 {
 int estudiante; /* contador de estudiantes */

 /* inicializa las calificaciones para tres estudiantes (filas) */
 const int calificacionesEstudiantes[ ESTUDIANTES ][ EXAMENES ] =
 { { 77, 68, 86, 73 },
 {   96, 87, 89, 78 },
 {   70, 90, 86, 81 } };

 /* muestra el arreglo calificacionesEstudiantes */
 printf( "El arreglo es:\n" );
 despliegaArreglo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES );

 /* determina el valor m�s peque�o y el valor m�s grande de las
calificaciones */
 printf( "\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
 minimo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES ),
 maximo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES ) );

 /* calcula el promedio de calificaciones de cada estudiante */
 for ( estudiante = 0; estudiante < ESTUDIANTES; estudiante++ ) {
 printf( "El promedio de calificacion del estudiante %d es %.2f\n",
        estudiante, promedio( calificacionesEstudiantes[ estudiante ],
        EXAMENES ) );
 } /* fin de for */

 return 0; /* indica terminaci�n exitosa */

 } /* fin de main */

 /* Encuentra la calificaci�n m�nima */
 int minimo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes )
 {
//Figura 6.22 Ejemplo de arreglos con dos sub�ndices. (Parte 1 de 3.)
//214 Arreglos en C Cap�tulo 6
 int i; /* contador de estudiantes */
 int j; /* contador de examenes */
 int califBaja = 100; /* inicializa a la calificaci�n m�s alta posible */

 /* ciclo a trav�s de las filas de calificaciones */
 for ( i = 0; i < alumnos; i++ ) {

 /* ciclo a trav�s de las columnas de calificaciones */
 for ( j = 0; j < examenes; j++ ) {

 if ( calificaciones[ i ][ j ] < califBaja ) {
 califBaja = calificaciones[ i ][ j ];
 } /* fin de if */

 } /* fin del for interno */

 } /* fin del for externo */

 return califBaja; /* devuelve la calificaci�n m�nima */

 } /* fin de la funci�n main */

 /* Encuentra la calificaci�n m�s alta */
 int maximo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes )
 {
 int i; /* contador de estudiantes */
 int j; /* contador de examenes */
 int califAlta = 0; /* inicializa a la calificaci�n m�s baja posible */

 /* ciclo a trav�s de las filas de calificaciones */
 for ( i = 0; i < alumnos; i++ ) {

 /* ciclo a trav�s de las columnas de calificaciones */
 for ( j = 0; j < examenes; j++ ) {

 if ( calificaciones[ i ][ j ] > califAlta ) {
 califAlta = calificaciones[ i ][ j ];
 } /* fin de if */

 } /* fin del for interno */

 } /* fin del for externo */

 return califAlta; /* devuelve la calificaci�n m�xima */

 } /* fin de la funci�n maximo */

 /* Determina la calificaci�n promedio para un estudiante en especial */
 double promedio( const int conjuntoDeCalificaciones[], int examenes )
 {
 int i; /* contador de ex�menes */
 int total = 0; /* suma de las calificaciones del examen */

//Figura 6.22 Ejemplo de arreglos con dos sub�ndices. (Parte 2 de 3.)
//Cap�tulo 6 Arreglos en C 215
 /* total de calificaciones de un estudiante */
 for ( i = 0; i < examenes; i++ ) {
 total += conjuntoDeCalificaciones[ i ];
 } /* fin de for */

 return ( double ) total / examenes; /* promedio */

 } /* fin de la funci�n promedio */

 /* Imprime el arreglo */
 void despliegaArreglo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes )
 {
 int i; /* contador de estudiantes */
 int j; /* contador de examenes */

 /* muestra el encabezado de las columnas */
 printf( "                             [0]  [1]  [2]  [3]" );

 /* muestra las calificaciones en forma tabular */
 for ( i = 0; i < alumnos; i++ ) {

 /* muestra la etiqueta de la fila */
 printf( "\ncalificacionesEstudiantes[%d] ", i );

 /* muestra las calificaciones de un estudiante */
 for ( j = 0; j < examenes; j++ ) {
 printf( "%-5d", calificaciones[ i ][ j ] );
 } /* fin del for interno */

 } /* fin del for externo */

 } /* fin de la funci�n despliegaArreglo */
