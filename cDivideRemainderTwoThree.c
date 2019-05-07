// Program: cDivideRemainderTwoThree.c
// Write a C program that finds all numbers between a range 
// of two integers that when divided by some number will have a result
// of remainder two or three.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int min, max, temp, denominator;
	
	printf("Please enter the number you wish to divide by: ");
	scanf("%d",&denominator);
	
	printf("Please enter min of range: ");
	scanf("%d",&min);
	
	printf("Please enter max of range: ");
	scanf("%d",&max);
	
	if(min > max)
	{
		temp = max;
		max = min;
		min = temp;
	}
	
	for(int i = min + 1; i < max; i++)
	{
		if(i % denominator == 2 || i % denominator == 3)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
