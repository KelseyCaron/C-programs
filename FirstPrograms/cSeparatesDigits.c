// Program: cSeparateDigits.c
// Write a C program that reads a 7 digit integer and prints the
// 7 digits seperately.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int number, divisor;
	divisor = 1000000;
	printf("Please enter a 7 digit number: ");
	scanf("%d",&number);
	
	for(int i = 0; i <= 6; i++)
	{
		printf("%d\n",number/divisor);
		number = number % divisor;
		divisor = divisor / 10;
		
	}
	
	return 0;	
}
