#include<stdio.h>
void split_date(int day_of_year, int year, int *month, int *day);
int main(void)
{
  int day_of_year;
  int year;
  int month;
  int day;
  month = 0;
  day = 0;
  printf("Input day_of_year: ");  
  scanf("%d",&day_of_year);
  printf("Input year: ");
  scanf("%d",&year);
  split_date(day_of_year,year,&month,&day);
  printf("%d %d",month,day);

}

void split_date(int day_of_year, int year, int *month, int *day)
{
  int days_per_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
  if(year%4==0)
  {
    days_per_month[1]=29;
  }
  for(int i=0; (day_of_year-days_per_month[i])>0;)
  {
    day_of_year -= days_per_month[i];
    i++;
    *month = i;
  }
  *month+=1;
  *day = day_of_year;
}

