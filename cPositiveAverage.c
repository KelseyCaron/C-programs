// Program: cPositiveAverage.c
// Write a C porgram that reads 5 integers, counts the number
// of positive integers and calcualtes the average of positive numbers
// entered.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int numbers[5], positiveNumber = 0, total = 0;
	double  average;

	for( int i = 0; i < 5; i++)
	{
		printf("Please enter integer[%d]: ",i + 1);
		scanf("%d",&numbers[i]);
		
		if(numbers[i] >= 0)
		{
			positiveNumber = positiveNumber + 1;
			total = total + numbers[i];
		}
	}

	average = (double)total / positiveNumber;
	
	printf("Number of positive integers: %d\n",positiveNumber);
	printf("Calculated Average: %.2f\n",average);
	
	return 0;
}
