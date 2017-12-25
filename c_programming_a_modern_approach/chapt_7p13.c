/* c7p12_v2.c
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 13 (version 2)
   Write a program that compute the average word length of a sentence.
    Enter a sentence: It was deja vu all over again.
    Average word length: 3.4
   Liu Dian
   2017.12.25
*/
#include <stdio.h>

int main(void)
{
  char input;
  float avg_word_length =0;
  int temp= 0;
  int space = 0;
  while((input=getchar())!='\n')
  {
    
    if(input == ' ')
    {
      avg_word_length += temp;
      temp = 0;
      space += 1;
    }
    if(input != ' ')
    {
      temp += 1;
    }
  }
      avg_word_length += temp;
      temp = 0;
      space += 1;
  printf("%.1f\n", avg_word_length/space);

  return 0;
}