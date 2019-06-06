// Program: cAreIntegersMultiplied.c
// Write a C program to check if numbers are multiplied
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num1, num2, temp;

	printf("Please enter first integer: ");
	scanf("%d",&num1);
	printf("Please enter second integer: ");
	scanf("%d",&num2);
	
	if(num1 < num2)
	{
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	if(num1 % num2 == 0)
	{
		printf("Numbers are multiplied\n");
	}
	else
	{
		printf("Numbers are not multiplied\n");
	}
	return 0;
}
