/* c programming a modern approach 8.p2
edit repdigit.c make it print a list, show repeated times.
Enter a number:41271092
Digit:       0 1 2 3 4 5 6 7 8 9 
Occurrences: 1 2 2 0 1 0 0 1 0 1
 */
#include <stdio.h>
int main(void)
{
  int digit_seen[10] = {0};
  int digit, i;
  long n;
  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n != 0)
  {
    digit = n % 10;
    digit_seen[digit] += 1;
    n /= 10;
  }

  printf("Digit:       ");
  for (i = 0; i < 10; i++)
  {
    printf("%-4d", i);
  }
  printf("\n");
  printf("Occurrences: ");

  for (i = 0; i < 10; i++)
  {
    printf("%-4d", digit_seen[i]);
  }

  return 0;
}