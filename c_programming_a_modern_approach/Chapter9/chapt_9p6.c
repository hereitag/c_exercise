

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 9, p6) 

logic_despair@outlook.com
Liu Dian
 */
#include <stdio.h>
double compute(double x);

int main(void)
{
  double x;
  double result;
  printf("Enter x value to compute 3*x^5+2*x^4-5*x^3-x^2+7x-6 : ");
  scanf("%lf",&x);
  result = compute(x);
  printf("Result is : %lf",result);
}
double compute(double x)
{
  double result;
  result =  3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
  return result;
}
