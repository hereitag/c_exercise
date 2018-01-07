#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100
int contents[STACK_SIZE];
int top = 0;
int underflow=0;
bool is_full(void);
void stack_overflow(void)
{
  printf("Stack Overflow");
}
void stack_underflow(void)
{
  printf("Stack Underflow");
}
void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char i)
{
  if (is_full())
   { stack_overflow();
    exit(EXIT_FAILURE);}
  else
    contents[top++] = i;
}

char pop(void)
{
  if (is_empty())
   { stack_underflow();
    underflow++;}
  else
    return contents[--top];
}

int main(void)
{
  char perchar;
  printf("Enter parenteses and/or braces: ");
  while ((perchar = getchar()) != '\n')
  {
    if (perchar == '(' || perchar == '{')
    {
      push(perchar);
    }
    else if(perchar == ')' && (pop() == '('))
    {
      ;
    }else if(perchar == '}' && (pop() == '{'))
    {
      ;
    }else{
      printf("Not Match");
      exit(EXIT_FAILURE)
    }
  }
  if(perchar =='\n')
  {
    if(is_empty())
    {
      printf("Match");
    }else if( underflow!=0)
    {
      printf("Not Match");
    }
    else{
      printf("Not Match");
    }
  }
}