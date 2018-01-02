/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 9, p8) 

logic_despair@outlook.com
Liu Dian
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef int bool;
#define true 1
#define false 0

int roll_dice(void);
bool play_game(void);

int main(void)
{
  int win, lose;
  win =0;
  lose =0;
  char again;
  while(1)
  {
    printf("Press Any Key to Start...\n");
    getchar();
    if (play_game() == 1)
    {
      printf("You win!\n");
      win++;
    }else{
      printf("You lose!\n");
      lose++;
    }
    printf("Play agian? y/n ");
    scanf("%c", &again);
    if (again == 'n')
    {
      printf("GAME OVER\n");
      break;
    }
  }
  printf("Wins: %d Losses: %d", win, lose);
}

int roll_dice(void)
{
  int dice1;
  int dice2;
  srand((unsigned)time(NULL));
  dice1 = rand() % 6 +1;
  dice2 = rand() % 6 +1;
  return dice1 + dice2;
}
bool play_game(void)
{
  int rolled1, rolled2;

  rolled2 = 0;

  rolled1 = roll_dice();
  printf("You rolled %d\n", rolled1);
  if(rolled1==7||rolled1==11)
  {
    return 1;
  }else if(rolled1==2||rolled1==3||rolled1==12)
  {
    return 0;
  }
  printf("Your point is: %d", rolled1);
  while(getchar())
  {
    rolled2 = roll_dice();
    printf("You rolled %d", rolled2);
    if (rolled1 == rolled2)
    {
      return 1;
    }
    if (rolled2 == 7)
    {
      return 0;
    }
  }

}