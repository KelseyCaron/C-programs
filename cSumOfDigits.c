// Program: cSumOfDigits.c
// Write a C program that reads and integer and calculates
// the sum of the digits. 
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int num, x, total;
	total = 0;
	
	printf("Please enter an integer: ");
	scanf("%d",&num);

	num = abs(num);

	while(num > 0)
	{
		x = num % 10;
		num = num / 10;
		total = total + x;
	}
	
	printf("Sum of Digits = %d\n",total);

	return 0;
}
