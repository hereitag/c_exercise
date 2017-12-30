/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* Chapter 8, programming 7 */

#include <stdio.h>
#include <ctype.h>
#define N 5

int main(void)
{
  int a[N][N];
  int i, j;
  int temp = 0;
  for (i = 0; i < N; i++)
  {
    printf("Enter row %d: ", i + 1);
    for (j = 0; j < N; j++)
    {
      scanf(" %d", &a[i][j]);
    }
  }

  printf("Row totals: ");
  for (i = 0; i < N; i++)
  {
    temp = 0;
    for (j = 0; j < N; j++)
    {
      temp += a[i][j];
    }
    printf("%d ", temp);
  }
  temp = 0;
  printf("\nColumn totals: ");
  for (j = 0; j < N; j++)
  {
    temp = 0;
    for (i = 0; i < N; i++)
    {
      temp += a[i][j];
    }
    printf("%d ", temp);
  }

  return 0;
}
