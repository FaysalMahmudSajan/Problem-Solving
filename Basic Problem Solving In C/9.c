// Write a program to compute the following series using while loop 5^2+9^2+15^2+23^2+....+n^2

#include <stdio.h>
#include <math.h>
int main()
{
  int n, x=0, m, i = 0, sum = 5;
  printf("\nEnter the number of n : ");
  scanf("%d", &n);
  while (i <= n)
  {
    printf("%d^2 = ", sum);
    m = pow(sum, 2);
    printf("%d \n", m);
    ++i;
    sum = 2 * i + 2 + sum;
    x = m+x;
  }
  printf("total sum : %d\n", x);
  return 0;
}