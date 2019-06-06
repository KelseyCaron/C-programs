// Program: cAbsoluteValue.c
// Write a C program that reads and integer and outputs the
// absolute value of the integer. This is my first solution
// to the problem.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int number, result;
	
	printf("Please enter a negative number: ");
	scanf("%d",&number);
	
	if(number < 0)
	{
		result = number + (-2*number);
	}
	else
	{
		result = number;
	}
	
	printf("Absolute value = %d\n",result);

	return 0;
}
