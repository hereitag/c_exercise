#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100
double contents[STACK_SIZE];
int top = 0;
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

void push(double i)
{
  if (is_full())
   { stack_overflow();
    exit(EXIT_FAILURE);}
  else
    contents[top++] = i;
}

double pop(void)
{
  if (is_empty())
   stack_underflow();
  else
    return contents[--top];
}

int main(void)
{
  char ch='0';
  double result;
  double op1;
  double op2;
  printf("Enter an RPN expression: ");

  while (ch!='\n')
  {
    scanf("%c",&ch);
    if(ch>='0'&& ch<='9')
    {
      ch -='0';
      push(ch);
    }
    switch(ch){
    case '+':
    result = pop() + pop();
    push(result);
    break;
    
    case '-':
    op1 = pop();
    op2 = pop();
    result = op2 - op1;
    push(result);
    break;
    
    case '*':
    result = pop()*pop();
    push(result);
    break;
    
    case '/':
    op1 = pop();
    op2 = pop();
    result = op2 / op1;
    push(result);
    break;

    case 'q':
    exit(EXIT_SUCCESS);
  
    }

  }
  printf("Value of expression %lf", pop());    

}