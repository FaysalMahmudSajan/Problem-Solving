// Write a for loop which print the following number 100 90 80 ... 0.

#include <stdio.h>
int main()
{
    for (int i = 100; i >= 0; i -= 10)
        printf("%d  ",i);
    return 0;
}