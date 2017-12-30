/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, p16) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int alpha[26]={0};
  int i;
  int order;
  char perchar;
  printf("Enter first word: ");
  while ((perchar = getchar()) != '\n')
  {
    if (isalpha(perchar) != 0)
    {
      perchar = tolower(perchar);
      alpha[(int)(perchar - 'a')] += 1;
    }
  }
  for(i=0;i<26;i++)
  {
    printf("%d ",alpha[i]);
  }
  printf("Enter second word: ");
  while ((perchar = getchar()) != '\n')
  {
    if (isalpha(perchar) != 0)
    {
      perchar = tolower(perchar);
      alpha[(int)(perchar - 'a')] -= 1;
    }
  }
  for(i=0;i<26;i++)
  {
    printf("%d ",alpha[i]);
  }
  printf("The words are ");
  for(i=0;i<26;i++)
  {
    if(alpha[i]!=0)
    {
      printf("not anagrams.");
      break;
    }else if(i==25)
    {
      printf("anagrams.");
    }
  }
}
