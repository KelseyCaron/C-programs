// Program: cDiffMinMax.c
// Write a C program that reads four floating-point values 
// and finds the difference between the max and min values.
#include <stdio.h>
#define MAX 4

int main(int argc, char* argv[])
{
	double num[MAX], min, max1;
	
	for(int i = 0; i < MAX; i ++)
	{
		printf("Please enter real-number[%d]: ", i + 1);
		scanf("%lf",&num[i]);
	}
	
	min = num[0];

	for(int i = 0; i < MAX; i++)
	{
		if(i != MAX - 1)
		{
			if(min > num[i + 1])
			{
				min = num[i + 1];
			}
		}
			
	}
	
	max1 = num[0];
	
	for(int i = 0; i < MAX; i++)
	{
		if(i != MAX - 1)
		{
			if(max1 < num[i + 1])
			{
				max1 = num[i + 1];
			}
		}
	}
	
	printf("Min = %.3f\n",min);
	printf("Max = %.3f\n",max1);

	printf("Difference between Max and Min = %.3f\n",max1 - min);
	
	return 0;
}
