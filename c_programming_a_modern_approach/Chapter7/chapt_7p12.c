/* c7p12_v2.c
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 12 (version 2)
   Write a program that evaluates an expression:
       Enter an expression: 1+2.5*3
       Value of expression: 10.5
   The operands in the expression are floating-point numbers;
   the operators are +, -, *, and /. The expression is evaluated
   from left to right (no operator takes precedence over any
   other operator).
   Liu Dian
   2017.12.25
*/
#include <stdio.h>

int main(void)
{
  char input;
  float value, result, temp;
  result = 0.0f;
  temp = 0.0f;
  int operator= 0;

  printf("\nEnter an expression (example: 1+2.5*3): ");
  scanf("%f", &result);

  while (((input = getchar()) != '\n'))
  {
    if (input == '+')
    {
      operator= 1;
    }
    else if (input == '-')
    {
      operator= 2;
    }
    else if (input == '*')
    {
      operator= 3;
    }
    else if (input == '/')
    {
      operator= 4;
    }
    scanf("%f", &temp);

    if (operator!= 0)
    {
      switch (operator)
      {
      case 1:
        result += temp;
        break;
      case 2:
        result -= temp;
        break;
      case 3:
        result *= temp;
        break;
      case 4:
        result /= temp;
        break;
      }
    }
  }

  printf("Value of expression: %.1f\n\n", result);

  return 0;
}
