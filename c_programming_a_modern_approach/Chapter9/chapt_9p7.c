

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 9, p7) 

logic_despair@outlook.com
Liu Dian
 */
#include <stdio.h>

double power(double x, int n);
double newpower(double x, int n);

int main(void)
{
  double x;
  int n;
  double result;
  printf("Enter x value to compute power : ");
  scanf("%lf",&x);
  printf("Enter n as power: ");
  scanf("%d",&n);
  result = newpower(x,n);
  printf("Power is : %lf",result);
}
double power(double x, int n)
{
  if(n==0)
  return 1;
  return x*power(x,n-1);
}
double newpower(double x, int n)
{
  if(n==0)
  return 1;
  if(n%2==0)
  {
  return newpower(x,n/2)*newpower(x,n/2);
  }
  if(n%2==1)
  {
  return power(x,n);
  }
}