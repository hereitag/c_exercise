/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, p13) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char name[20];
  char perchar;
  int i = 0;
  int between;
  printf("Enter a first and last name: ");
  perchar = getchar();
  while (perchar == ' ')
  {
    perchar = getchar();
  };
  while (perchar != ' ')
  {
    name[i] = perchar;
    perchar = getchar();
    i++;
  }
  while (perchar != '\n')
  {
    if (perchar == ' ')
    {
      perchar = getchar();
      continue;
    }
    printf("%c", perchar);
    perchar = getchar();
  }
  printf(", %c.", name[0]);
}
