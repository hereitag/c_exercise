/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 9, p3) */
/* 
 A  B  .  .  .  .  .  .  .  .
 .  C  .  .  .  .  .  .  .  .
 .  D  E  F  G  .  .  .  .  .
 .  M  L  K  H  .  .  .  .  .
 .  N  O  J  I  .  .  .  .  .
 .  .  P  .  .  .  .  .  .  .
 S  R  Q  .  .  .  .  .  .  .
 T  .  .  .  .  .  .  .  .  .
 U  X  Y  Z  .  .  .  .  .  .
 V  W  .  .  .  .  .  .  .  .
logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int main(void)
{
  char a[N][N];

  generate_random_walk(a);
  //final print
  print_array(a);
}
void print_array(char walk[10][10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%c  ", walk[i][j]);
    }
    printf("\n");
  }
}
void generate_random_walk(char a[10][10])
{
  int i, j;
  int direction;
  int stop = 0;
  char tempchar;
  int x, y;
  int tempx, tempy;
  x = 0;
  y = 0;

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      a[i][j] = '.';
    }
  }
  srand(time(NULL));
  a[0][0] = 'A';
  for (i = 1; i < 26; i++)
  {
    tempchar = 'A' + i;
    direction = rand() % 4;
    switch (direction)
    {
    case 0:
      tempx = x + 1; // south
      tempy = y;
      if (tempx < 10 && a[tempx][tempy] == '.')
      {
        x = tempx;
        y = tempy;
        a[tempx][tempy] = tempchar;
        break;
      }
    case 1:
      tempx = x - 1; // north
      tempy = y;
      if (tempx >= 0 && a[tempx][tempy] == '.')
      {
        x = tempx;
        y = tempy;
        a[tempx][tempy] = tempchar;
        break;
      }
    case 2:
      tempy = y + 1; // east
      tempx = x;
      if (tempy < 10 && a[tempx][tempy] == '.')
      {
        x = tempx;
        y = tempy;
        a[tempx][tempy] = tempchar;
        break;
      }
    case 3:
      tempy = y - 1; // west
      tempx = x;
      if (tempy >= 0 && a[tempx][tempy] == '.')
      {
        x = tempx;
        y = tempy;
        a[tempx][tempy] = tempchar;
        stop = 3;
        break;
      }
    case 4:
      tempx = x + 1; // south
      tempy = y;
      if (tempx < 10 && a[tempx][tempy] == '.')
      {
        x = tempx;
        y = tempy;
        a[tempx][tempy] = tempchar;
        break;
      }
    case 5:
      tempx = x - 1; // north
      tempy = y;
      if (tempx >= 0 && a[tempx][tempy] == '.')
      {
        x = tempx;
        y = tempy;
        a[tempx][tempy] = tempchar;
        break;
      }
    case 6:
      tempy = y + 1; // east
      tempx = x;
      if (tempy < 10 && a[tempx][tempy] == '.')
      {
        x = tempx;
        y = tempy;
        a[tempx][tempy] = tempchar;
        break;
      }
    default:
      stop = 1;
      break;
    }
    if (stop == 1)
    {
      break;
    }
  }
}
