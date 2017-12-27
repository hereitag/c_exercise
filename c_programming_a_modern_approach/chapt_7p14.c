/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
                         *  *
 *********************************************************/

/* Chapter 7.14 */
/* Calculates a square root using Newton method */
#include <stdio.h>
#include <math.h>
int main(void)
{
  double num,temp,guess,temp_diff ;
  printf("Enter a positive number: ");
  scanf("%lf",&num);
  temp =1;
  do
  {
    temp = (temp + num/temp)/2;
    temp_diff = temp - (temp + num/temp)/2;
    temp_diff = fabs(temp_diff);
  }while(temp_diff>0.00001);
  printf("%.5f",temp);
}