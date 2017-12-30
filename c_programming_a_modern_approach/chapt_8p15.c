/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, p15) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int sentence[80];
  int i;
  int length,shift;
  char perchar;
  printf("Enter message to be encrypted: ");
  for(i=0;(perchar = getchar())!='\n';i++)
  {
    sentence[i]=perchar;
    length = i;
  }
  printf("Enter shift amount(1-25): ");
  scanf("%d",&shift);
  for(i=0;i<=length;i++)
  {
    if((sentence[i]>='A' && sentence[i]<='Z'))
    {
      sentence[i]=(sentence[i]-'A'+shift)%26+'A';
    }
    else if((sentence[i]>='a' && sentence[i]<='z'))
    {
      sentence[i]=(sentence[i]-'a'+shift)%26+'a';
    }
  }
  printf("Encrypted message: ");
  for(i=0;i<=length;i++)
  {
    printf("%c",sentence[i]);
  }
}
