/* c programming a modern approach 8.p6
 */

/* B1FF Chapter 8, programming 6 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int m;
  m=0;
  int i = 0;
  char a[m], ch;
  printf("Enter message: ");
  while((ch =getchar()) !='\n') 
  {
    a[i] = ch;
    i++;
    m++;
  }
  for(i=0;i<m;i++)
  {
    a[i]=toupper(a[i]);
    switch(a[i])
    {
      case 'A': a[i] = '4';break;
      case 'B': a[i] = '8';break;
      case 'E': a[i] = '3';break;
      case 'O': a[i] = '0';break;
      case 'I': a[i] = '1';break;
      case 'S': a[i] = '5';break;
    }
  }
  for(i=0;i<m;i++)
  {
    printf("%c",a[i]);
  }
  for(i=0;i<10;i++)
  {
  printf("!");
  }

  return 0;
}
