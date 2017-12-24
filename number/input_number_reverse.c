/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* broker.c (Chapter 5, page 81)*/
/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
  int i,j,x;
  j = 1;
  x = 1;
  printf("Enter a number: ");
  scanf("%d",&i);
  
  do {
	  j = i%10;
	  x = i/=10;
	 printf("%d",j);	
  }
  while (x>0);

  return 0;
}
