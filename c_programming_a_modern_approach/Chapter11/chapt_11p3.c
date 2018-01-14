#include<stdio.h>
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);
int main(void)
{
  int numerator;
  int denominator;
  int reduced_numerator;
  int reduced_denominator;
  printf("input numerator/denominator: ");
  scanf("%d / %d", &numerator, &denominator);
  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
  printf("Reduced: %d/%d", reduced_numerator, reduced_denominator);
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
  {
    int r=1;
    int m,n;
    m  = numerator;
    n = denominator;

    while(r!=0)
    {
      r = m%n;
      m = n;
      n = r;
    } 
    *reduced_numerator =  numerator/m;
    *reduced_denominator = denominator/m;
  }