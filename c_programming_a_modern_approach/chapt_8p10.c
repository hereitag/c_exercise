/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, p10) 

logic_despair@outlook.com
Liu Dian
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int hour, minute;
  int temp = 24 * 60;
  int result;
  int result_hour,result_minute;
  int takeoff[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
  int arrive[8] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
  printf("Enter a 24-hour time:");
  scanf("%d:%d", &hour, &minute);
  for (i = 0; i < 8; i++)
  {
    if (takeoff[i] >= (hour * 60 + minute))
    {
      if ((takeoff[i] - (hour * 60 + minute)) < temp)
      {
        temp = (takeoff[i] - (hour * 60 + minute));
        result = i;
      }
    }
    else
    {
      if (((hour * 60 + minute)-takeoff[i]) < temp)
      {
        temp = ((hour * 60 + minute)-takeoff[i]);
        result = i;
      }
    }
  }
  result_hour=takeoff[result]/60; 
  result_minute=takeoff[result]%60; 
  if(result_hour>12)
  {
    result_hour-=12;
    printf("Closet1 departure time is %d:%d",result_hour,result_minute);
    printf(" PM");
  }
  if(result_hour<12)
  {
    printf("Closet2 departure time is %d:%d",result_hour,result_minute);
    printf(" AM");
  }
  if(result_hour==12)
  {
    printf("Closet3 departure time is %d:%d",result_hour,result_minute);
    printf(" PM");
  }

}
