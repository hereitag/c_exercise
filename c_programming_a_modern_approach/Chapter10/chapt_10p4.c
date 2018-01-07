/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* poker.c (Chapter 10, page 233) */
/* Classifies a poker hand */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5

/* external variables */
int hand[5][2];
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */
int royal;

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(void)
{
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card,duplicate;
  int cards_read = 0;
  royal =0;
  for (int i = 0; i < 5; i++) {
    hand[i][0] = 0;
    hand[i][1] = 0;
  }

  while (cards_read < NUM_CARDS) {
    bad_card = false;
    duplicate= false;
    printf("Enter a card: ");
    rank_ch = getchar();
    switch (rank_ch) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           rank = 0; break;
      case '3':           rank = 1; break;
      case '4':           rank = 2; break;
      case '5':           rank = 3; break;
      case '6':           rank = 4; break;
      case '7':           rank = 5; break;
      case '8':           rank = 6; break;
      case '9':           rank = 7; break;
      case 't': case 'T': rank = 8; royal++; break;
      case 'j': case 'J': rank = 9; royal++;break;
      case 'q': case 'Q': rank = 10; royal++;break;
      case 'k': case 'K': rank = 11; royal++;break;
      case 'a': case 'A': rank = 12; royal++;break;
      default:            bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ')
        bad_card = true;

    for (int i = 0; i < 5; i++)
    {
      if (hand[i][0] == rank && hand[i][1] == suit)
        duplicate = true;
    }
    if (bad_card)
      printf("Bad card; ignored.\n");
    else if (duplicate)
      printf("Duplicate card; ignored.\n");
    else
    {
      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;
    }
  }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
  int num_consec = 0;
  int rank, suit;
  int serial[5];
  straight = false;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /*sort*/
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    { 
      rank = hand[j][0];
      suit = hand[j][1];
      if(hand[j][0]>hand[j+1][0])
      {
        hand[j][0]=hand[j+1][0];
        hand[j][1]=hand[j+1][1];   
        hand[j+1][0]=rank;
        hand[j+1][1]=suit;       
      }
    }
  }



  /* check for flush */
  suit = hand[0][1];
  for (int i = 0; i < 5; i++)
  {if (hand[i][1] != suit) flush = false;}

  /* check for straight */
  rank = 0;
  for (int i=0;i<4 ;i++)
  {if(hand[i+1][0]==(hand[i][0]+1)) rank++;}

  if (rank == 4) {
    straight = true;
    return;
  }

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
  if (rank == 3) four = true;
  if (rank == 2) three = true;
  if (rank == 1) pairs++;
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
  if (royal==5) printf("Royal flush");
  else if (straight && flush) printf("Straight flush");
  else if (four)         printf("Four of a kind");
  else if (three &&
           pairs == 1)   printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}
