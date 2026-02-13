#include <stdio.h>
int main()
{
  int n;
  do
  {
    printf("Enter: ");
    scanf("%d", &n);
    printf("%d\n", n);
    if (n % 2 != 0)
    {
      printf("ODD\n");
      continue;
    }
    else
    {
      printf("EVEN\n");
    }
  } while (1);
  return 0;
}