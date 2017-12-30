/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
                         *  *
 *********************************************************/

/* Chapter 7.15 */
/* Calculates a square root */
#include <stdio.h>
#include <math.h>
int main(void)
{
  int num;
  int sum;
  sum = 1;
  printf("Enter a positive integer: ");
  scanf("%hd",num);
  for(int i = 1 ; i < num ; i++)
  {
    sum *= (i+1);
  }
  printf("%hd",sum);

}