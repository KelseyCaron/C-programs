// Program: cCalculateAverage2.c
// Write a C program that reads an unlimited amount of numbers
// from the user and calculates the average of all numbers entered.
// The user will enter as many numbers as they would like until 
// "888" is entered.
#include <stdio.h>

int main(int argc,char *argv[])
{
	double total, number, count;
	total = 0;
	count = 0;
	printf("Please enter an amount(888 to exit): ");
	scanf("%lf",&number);

	while(number != 888)
	{
		count++;
		total += number;
		printf("Please enter an amount(888 to exit): ");
		scanf("%lf",&number);
	}

	if(count > 0)
	{
		printf("Average of amounts entered = %.2lf\n",total/count);
	}
	else
	{
		printf("Average of amounts entered = 0\n");
	}
	return 0;
}
