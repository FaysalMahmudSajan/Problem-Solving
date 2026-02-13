//Write a program that input number and give divisors

#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      printf("%d ", i);
    }
  }
}