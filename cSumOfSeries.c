// Program: cSumOfSeries.c
// Write a program that reads an integer n. Calculate the
// series 1 + 1/2 + 1/3 + ... + 1/n. print the resulting sum.
#include <stdio.h>

int main(int argc,char *argv[])
{
	double sum, n;
	sum = 0.0;
	
	printf("Please enter n for series (1 + 1/2 + ... + 1/n): ");
	scanf("%lf",&n);

	if(n != 0)
	{	
		for(int i = 1; i <= n; i++)
		{
			sum = sum + (1.0/i);
		}
			
		printf("Sum of series = %.2f\n",sum);
	}
	else
	{
		printf("[Error]: n cannot be zero\n");
	}

	return 0;	
}
