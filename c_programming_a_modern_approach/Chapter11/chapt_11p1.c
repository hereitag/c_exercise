#include<stdio.h>
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
int main(void)
{
  int money=0;
  int twenties=0;
  int tens=0;
  int fives=0;
  int ones=0;
  
  printf("Input amount of money: ");  
  scanf("%d",&money);
  pay_amount(money, &twenties, &tens, &fives, &ones);
  printf("%d %d %d %d",twenties, tens, fives, ones );
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{

  *twenties= dollars/20;
  *tens= (dollars-20**twenties)/10;
  *fives = (dollars-20**twenties-10**tens)/5;
  *ones = dollars-20**twenties-10**tens-5**fives;
}
