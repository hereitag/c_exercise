/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, p17) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int n;
  int i,j;
  int x, y;
  int aimx, aimy;
   printf("This program creates a magic square of a specified size.\nThe size mush be an odd number between 1 and 99.\nEnter size of magic square: ");
   scanf("%d",&n);
   x=0;
   y=n/2;
   int square[n][n];
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       square[i][j]=0;
     }
   }
   square[0][n/2]=1;
   for(i=2;i<=n*n;i++)
   {
    aimx = ((x - 1) == -1 ? n - 1 : x - 1); // if x-1=-1 return n-1 else return x-1
    aimy = ((y + 1) == n ? 0 : y + 1);
    if(square[aimx][aimy]!=0)
    {
      x = ((x+1)==n?0:x+1);
      y = y;
      square[x][y]=i;
    }else{
      x = aimx;
      y = aimy;
      square[x][y]=i;
    }
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       printf("%3d ",square[i][j]);
     }
   printf("\n");
   }
}
