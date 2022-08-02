#include <stdio.h>
#include <stdlib.h>


int main()
{
   int x=2,y=3;

   const int *p=&y;
      p=4;
//   *p=1;


   int *const p2=&x;
   *p2=3;
//   p2=2;

    return 0;
}

