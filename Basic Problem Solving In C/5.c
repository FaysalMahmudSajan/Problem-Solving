//Write a for loop which print summation of all the numbers which are divided by 3 and 5 between 30 to 120.

#include <stdio.h>
int main()
{
{
		int x=0;
		 printf("Divided by 3 and 5 between 30 to 120\n");

	for(int i=30;i<=120;i++) 
	{
		if(i%3==0 && i%5==0)
        {
		printf("  %d",i);
		x=i+x;
		}
    }
	printf("\nSummation of all the numbers: %d", x);
}
    return 0;
}