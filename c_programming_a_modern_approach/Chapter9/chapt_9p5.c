

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 9, p5) 

logic_despair@outlook.com
Liu Dian
 */
#include <stdio.h>
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
int main(void)
{
  int n;
  printf("This program creates a magic square of a specified size.\nThe size mush be an odd number between 1 and 99.\nEnter size of magic square: ");
  scanf("%d", &n);
  char magic_square[n][n];
  create_magic_square(n,magic_square);
  print_magic_square(n,magic_square);
  return 0;
}
void create_magic_square(int n, char magic_square[n][n])
{
  int i, j;
  int x, y;
  int aimx, aimy;
  x = 0;
  y = n / 2;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      magic_square[i][j] = 0;
    }
  }
  magic_square[0][n / 2] = 1;
  for (i = 2; i <= n * n; i++)
  {
    aimx = ((x - 1) == -1 ? n - 1 : x - 1); // if x-1=-1 return n-1 else return x-1
    aimy = ((y + 1) == n ? 0 : y + 1);
    if (magic_square[aimx][aimy] != 0)
    {
      x = ((x + 1) == n ? 0 : x + 1);
      y = y;
      magic_square[x][y] = i;
    }
    else
    {
      x = aimx;
      y = aimy;
      magic_square[x][y] = i;
    }
  }
}
void print_magic_square(int n, char magic_square[n][n])
{
  int i,j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%3d ", magic_square[i][j]);
    }
    printf("\n");
  }
}
