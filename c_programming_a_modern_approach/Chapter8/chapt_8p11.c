/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, p11) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char number[15];
  char perchar;
  int i = 0;

  printf("Enter phone number: ");
  while ((perchar = getchar()) != '\n')
  {
    if (perchar >= 'A' && perchar <= 'Z')
    {
      switch (perchar)
      {
      case 'A':
      case 'B':
      case 'C':
        perchar = '2';
        break;
      case 'D':
      case 'E':
      case 'F':
        perchar = '3';
        break;
      case 'G':
      case 'H':
      case 'I':
        perchar = '4';
        break;
      case 'J':
      case 'K':
      case 'L':
        perchar = '5';
        break;
      case 'M':
      case 'N':
      case 'O':
        perchar = '6';
        break;
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
        perchar = '7';
        break;
      case 'T':
      case 'U':
      case 'V':
        perchar = '8';
        break;
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
        perchar = '9';
        break;
      }
    }
    number[i] = perchar;
    printf("%c",number[i]);
    i++;

  }
}
