#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);
int segments[MAX_DIGITS];
int digits[3][MAX_DIGITS*4];

int main(void)
{
  char perchar;
  int pernum;
  int i=0;
  clear_digits_array();
  printf("Enter a number: ");
  while((perchar=getchar())!='\n')
  { 
    pernum = perchar-'0';
    if(pernum>=0&&pernum<=9)
    {
      segments[i]=pernum;
      process_digit(pernum,i);
      i++;
    }
  }
  print_digits_array();
}


void clear_digits_array(void)
{
  for(int i =0;i<3;i++)
  {
    for(int j =0;j<MAX_DIGITS*4;j++)
    {
      digits[i][j]=' ';
    }
  }
}

void process_digit(int digit, int position)
{

  switch(digit)
  {
    case 0: case 2: case 3: case 5: case 6: case 7: case 8: case 9: 
    digits[0][position*4+1]='_';
    break;
    default: 
    digits[0][position*4+1]=' ';
  }

  switch(digit){
    case 0: case 4: case 5: case 6: case 8: case 9: 
    digits[1][position*4]='|';
    break;
    default: 
    digits[1][position*4]=' ';
  }

  switch(digit){
    case 2: case 3: case 4: case 5:case 6: case 8: case 9:
    digits[1][position*4+1]='_';
    break;
    default: 
    digits[1][position*4+1]=' ';
  }

  switch(digit){
    case 0: case 1: case 2: case 3: case 4: case 7: case 8: case 9:
    digits[1][position*4+2]='|';
    break;
    default: 
    digits[1][position*4+2]=' ';
  }

  switch(digit){
    case 0: case 2:case 6: case 8: 
    digits[2][position*4]='|';
    break;
    default: 
    digits[2][position*4]=' ';
  }

  switch(digit){
    case 0: case 2: case 3: case 5: case 6:case 8: case 9: 
    digits[2][position*4+1]='_';
    break;
    default: 
    digits[2][position*4+1]=' ';
  }

  switch(digit){
    case 2:
    digits[2][position*4+2]=' ';
    break;
    default: 
    digits[2][position*4+2]='|';
  }
}

void print_digits_array(void)
{
  for(int i=0; i<3;i++)
  { 
    for(int j=0; j<MAX_DIGITS*4 ;j++)
    {
      printf("%c",digits[i][j]);
    }
    printf("\n");
  }
}