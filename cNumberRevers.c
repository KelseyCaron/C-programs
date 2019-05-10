// Program: cNumberRevers.c
// Write a C program that reads an integer and prints the integer is revers.
// Note: This solution does now allow
// numbers that have a '0'.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num, x, result = 0;

	printf("Please enter an integer: ");
	scanf("%d",&num);
	
	while(num >=1)
	{
		x  = num % 10;
		result = (result * 10) + x;
		num = num / 10;   
	}
	
	printf("Number in Reverse is: %d\n",result);

	return 0;
}
