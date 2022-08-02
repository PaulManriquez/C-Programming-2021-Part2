#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 4

void imprimirMatriz(int maze[][N]);
bool solveMaze(int maze[][N]);
bool solveMazeUtil(int maze[][N], int x, int y, int sol[N][N]);
bool isSafe(int maze[][N],int x, int y);
int main()
{
    int maze[N][N] = { { 1, 0, 0, 0 },
                       { 1, 1, 0, 1 },
					   { 1, 1, 1, 0 },
					   { 1, 0, 1, 1 } };

    printf("Esta es la matriz original:\n\n");
    imprimirMatriz(maze);
    printf("\n");
    solveMaze(maze);
    return 0;
}
bool solveMaze(int maze[][N])
{
    int sol[N][N] = { { 0, 0, 0, 0 },
					  { 0, 0, 0, 0 },
					  { 0, 0, 0, 0 },
					  { 0, 0, 0, 0 } };

	if (solveMazeUtil(maze, 0, 0, sol) == false) {
		printf("Solution doesn't exist");
		return false;
	}

	imprimirMatriz(sol);
	return true;
}

bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N])
{
   if (x == N - 1 && y == N - 1) {
		sol[x][y] = 1;
        imprimirMatriz(sol);
		printf("\n");
		return true;
	}

	// Check if maze[x][y] is valid
	if (isSafe(maze, x, y) == true) {
		// mark x, y as part of solution path
		sol[x][y] = 1;
        imprimirMatriz(sol);
		printf("\n");
		/* Move forward in x direction */
		if (solveMazeUtil(maze, x + 1, y, sol) == true)
			return true;

		/* If moving in x direction doesn't give solution then
		Move down in y direction */
		if (solveMazeUtil(maze, x, y + 1, sol) == true)
			return true;

		/* If none of the above movements work then BACKTRACK:
			unmark x, y as part of solution path */
		sol[x][y] = 0;
		imprimirMatriz(sol);
		printf("\n");
		return false;
	}//end "is safe"

	return false;
}

bool isSafe(int maze[N][N], int x, int y)
{
	// if (x, y outside maze) return false
	if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
		return true;

	return false;
}

void imprimirMatriz(int maze[][N])
{
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d  ",maze[i][j]);
        }
        printf("\n");
    }
}
