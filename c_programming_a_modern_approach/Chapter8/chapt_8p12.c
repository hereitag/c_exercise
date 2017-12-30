/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, p12) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char number[26]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  char perchar;
  int i,sum;
  char j;

  sum =0;
//test if initialization is right.
  for (i = 1; i <= 10; i++)
  {
    if(i==6||i==7||i==9)
    {
      continue;
    }
    printf("%d---", i);
    for (j = 'A'; j <= 'Z'; j++)
    {
      if (number[j-'A'] == i)
      {
        printf("%c",j);
      }
    }
    printf("   ");
  }
//test complete
  printf("\nEnter a word: ");
  while((perchar = getchar())!='\n')
  {
    perchar = toupper(perchar);
    sum += number[perchar-'A'];
  }
  printf("\nScrabble value: %d", sum);


}

