// Program: cAbsoluteValue2.c
// Write a C program that reads an intefer and prints the 
// absolute value of that integer.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int number, result;
	
	printf("Please enter an integer: ");
	scanf("%d",&number);
	
	if(number < 0)
	{
		result = number * -1;
	}
	else
	{
		result = number;
	}
	
	printf("Absolute of integer entered = %d\n",result);


	return 0;
}
