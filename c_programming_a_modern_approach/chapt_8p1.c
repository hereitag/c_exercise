/* c programming a modern approach 8.p1
edit repdigit.c make it show which number repeated.
Enter a number:939577
Repeated digit(s): 7 9
 */
#include <stdio.h>
int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;
  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n != 0)
  {
    digit = n % 10;
    digit_seen[digit] += 1;
    n /= 10;
  }

  printf("Repeated digit(s): ");

  for (int i = 0; i < 10; i++)
  {
    if (digit_seen[i] > 1)
    {
      printf("%d ", i);
    }
  }

  return 0;
}