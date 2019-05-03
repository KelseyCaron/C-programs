// Program: cCountPositiveNegative.c
// Write a C program that asks the user for 5 numbers and keeps
// track of how many positive and negative numbers are entered. 
#include <stdio.h>

int main(int argc,char *argv[])
{
	int numbers[5], positiveNumber = 0, negativeNumber = 0;
	
	for(int i = 0; i < 5; i++)
	{
		printf("Please enter number[%d]: ", i + 1);
		scanf("%d",&numbers[i]);
	
		if(numbers[i] >= 0)
		{
			positiveNumber = positiveNumber + 1;
		}
		else if(numbers[i] < 0)
		{
			negativeNumber = negativeNumber + 1;
		}
	}
	
	printf("Positive Numbers = %d\n",positiveNumber);
	printf("Negative Numbers = %d\n",negativeNumber);
	
	return 0;
}	
