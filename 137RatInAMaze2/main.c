#include<stdio.h>
#include<stdlib.h>

#define ROW 12
#define COL 12
#define RIGHT 1
#define LEFT 3
#define UP 2
#define DOWN 0
//function prototypes

void findStart(char maze[][COL]);//Find the start point from the first column of the input maze (maze[][1])
void mazeTraversal(char maze[ROW][COL],size_t xDir,size_t yDir,int dir);//Gives maze,current x and y coordinate and direction as an input
void printMaze(char maze[][COL]);//print the current state of the maze after each movement
int validMove(char maze[][COL],size_t r,size_t c);//determinate the validity of the next movement(input coordinates)
int coordsedge(size_t x,size_t y);//position the input coordinate are edge or not

//Declaration of the coordinates of the starting point in the mazeTraversal
int firstXCor,firstYCor;

int main()
{   //Declare the maze data array
    char maze[ROW][COL]=
    {   {'1','1','1','1','1','1','1','1','1','1','1','1'},
        {'1','0','0','0','1','0','0','0','0','0','0','1'},
        {'0','0','1','0','1','0','1','1','1','1','0','1'},
        {'1','1','1','0','1','0','0','0','0','1','0','1'},
        {'1','0','0','0','0','1','1','1','0','1','0','0'},
        {'1','1','1','1','0','1','0','1','0','1','0','1'},
        {'1','0','0','1','0','1','0','1','0','1','0','1'},
        {'1','1','0','1','0','1','0','1','0','1','0','1'},
        {'1','0','0','0','0','0','0','0','0','1','0','1'},
        {'1','1','1','1','1','1','0','1','1','1','0','1'},
        {'1','0','0','0','0','0','0','1','0','0','0','1'},
        {'1','1','1','1','1','1','1','1','1','1','1','1'}};
    //Call the function findStart() to look for the zero in the first column
    findStart(maze);
    //Call the function mazeTraversal()
    mazeTraversal(maze,firstXCor,firstYCor,RIGHT);

}
void findStart(char maze[][COL])
{
    int x;
    firstYCor=0;
    for(x=0;x<ROW;++x){
        //position if the element in the first column is zero
        if(maze[x][firstYCor]=='0'){
            //decide the coordinate(location) of the zero element in the first column only
            firstXCor=x;
            return;
        }
    }
}
/*Objective: This is a recursive function that gives maze,current x and y coordinate and
Input:maze array,first coordinate for X and Y
output:Decide the next move*/

void mazeTraversal(char maze[ROW][COL],size_t xDir,size_t yDir,int dir)
{
    //Declare and set the start position to zero
    int position=0;
    //Set the x in the entrance position
    maze[xDir][yDir]='x';
    //Call the printMaze() function to display the array
    printMaze(maze);

    //This is to check if we are in the starting position
    if(xDir==firstXCor && yDir== firstYCor && position==1){
        printf("\n***Starting position***\n");
        return;
    }

    //Check if we aren't in the starting position
    else if((coordsedge(xDir,yDir)&& xDir != firstXCor)&& yDir!=firstYCor){
            printf("\n***Done***\n");
        return;
    }

    else{
    //Declare counter n and next move variables
    int n,next;
    position=1;
    //Loop through the four direction
    for(n=0,next=dir;n<4;n++,next++,next%=4){
    //this switch statement is used to decide the next move
    switch(next){
    case RIGHT:
    //Check if we have zero in the position y+1
    if(validMove(maze,xDir,yDir+1)){
        //recursively call the function mazeTransversal to go one step in the down direction
        mazeTraversal(maze,xDir,yDir+1,DOWN);
        return;
    }
    break;
    case LEFT:
        //Check if we have zero in the position y-1
        if(validMove(maze,xDir,yDir-1)){
            //Recursively call the function mazeTraversal to go one step i the UP direction
            mazeTraversal(maze,xDir,yDir-1,UP);
            return;
        }
        break;
    case UP:
        //Check if we have zero in the position x-1
        if(validMove(maze,xDir-1,yDir)){
            //Recursively call the function mazeTraversal to go one step to the RIGHT direction
            mazeTraversal(maze,xDir-1,yDir,RIGHT);
            return;
        }
        break;
        //The default if the move is DOWN
    default:
        //Check if we have zero in the position x+1
        if(validMove(maze,xDir+1,yDir)){
            //recursively call the function mazeTranversal to go one step to the left direction
            mazeTraversal(maze,xDir+1,yDir,LEFT);
            return;
        }
        break;
      }

    }
  }

}
/*Obejective: print the current satate of the maze after each movement
input: An array (ROW*COL)
output: Display the array on screen*/
void printMaze(char maze[][COL])
{
    //Count row and columns
    size_t x; size_t y;
    //Display the rows
    for(x=0;x<ROW;++x){
        //Display the columns
        for(y=0;y<COL;++y){
                //Display the maze array
                printf("%c ",maze[x][y]);
        }
        //To make sure the array isn't displayed on the same line
        puts( "" );
    }
    //To separate each time when the array displayed by 2 break lines
    printf("\n\n");
}
/*Obejective: determine the validity of the next movement (input coordinates)
input:Array,x coordinate and y coordinate
output: return zero or one (valid next movement or not)
*/
int validMove(char maze[][COL],size_t r,size_t c)
{
    //Make sure that we are moving through the zero and not exceeding the 2 dimension array boundary
    return (r>=0 && r <=11 && c>=0 && c<=11 && maze[r]!='1');
}
/*Objective:position the input coordinate are edge or not
input:x and y coordinate
output: return if there is edge or not*/
int coordsedge(size_t x,size_t y)
{
    int edge;
    //Check the outer walls of the maze and return 1
    if(((x==0 || x==11)&&(y>=0 && y<=11)) || ((x>=0 && x <=11)&& (y==0||y==11)))
    {edge=1;}
    //Other wise we are inside the maze and return 0
    else edge = 0;
    return edge;
}
