/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 9, p1) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
int selection_sort(int a[],int n);
int main(void)
{
  int length,m,n,i;
  printf("Enter the length of array: ");
  scanf("%d",&length);
  int array[length];
  printf("Enter array: ");
  for(i=0;i<length;i++)
  {
  scanf("%d",&array[i]);
  }
  selection_sort(array,length);
  for(i=0;i<length;i++)
  {
  printf("%d ",array[i]);
  }  
}
int selection_sort(int a[],int n)
{
  int i,j;
  int max=0;
  if(n ==0 )
  {
    return 0;
  }
  for(i =0;i<n;i++)
  {
    if(max<a[i])
    {
      j = i;
      max =a[i];
    }
  }
  a[j] = a[n-1];
  a[n-1] = max;
  selection_sort(a,n-1);
}

