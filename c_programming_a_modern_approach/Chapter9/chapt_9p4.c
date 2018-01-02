/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 9, p2) 

logic_despair@outlook.com
Liu Dian
 */
void read_word(int counts[26]);
int equal_array(int counts1[26],int counts2[26]);

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int counts1[26]={0};
  int counts2[26]={0};
  read_word(counts1);
  read_word(counts2);
  printf("%d",equal_array(counts1,counts2));
}
void read_word(int counts[26])
{
  char perchar;
  printf("Enter a word: ");
  while((perchar=getchar())!='\n')
  {
    perchar = toupper(perchar);
    counts[perchar-'A']+=1;
  }
}
int equal_array(int counts1[26],int counts2[26])
{
  for(int i=0;i<26;i++)
  {
    if(counts1[i]!=counts2[i])
    {
      return 0;
    }
  }
  return 1;
}