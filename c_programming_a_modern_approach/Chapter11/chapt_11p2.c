#include<stdio.h>
void find_closest_flight(int desired_time, int *departure, int *arrival_time);
int main(void)
{
  int hour,minute;
  int desired_time;
  int departure;
  int arrival_time;
  printf("Enter a 24-hour time: ");
  scanf("%d : %d", &hour, &minute);
  desired_time = hour*60 + minute;
  find_closest_flight(desired_time, &departure, &arrival_time);
  printf("closet flight departure time:%d:%.2d ",departure/60,departure-departure/60*60);
  printf("closet flight arrival time:%d:%.2d ",arrival_time/60,arrival_time-arrival_time/60*60);
}

void find_closest_flight(int desired_time, int *departure, int *arrival_time)
{
  int i, temp,result;
  temp =60*24;
  int departure_array[]={8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
  int arrival_time_array[]= {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
  for (i = 0; i < 8; i++)
  {
    if (departure_array[i] >= desired_time)
    {
      if ((departure_array[i] - desired_time) < temp)
      {
        temp = (departure_array[i] - desired_time);
        result = i;
      }
    }
    else
    {
      if ((desired_time-departure_array[i]) < temp)
      {
        temp = (desired_time-departure_array[i]);
        result = i;
      }
    }
  }
  *departure = departure_array[result];
  *arrival_time = arrival_time_array[result];
}
