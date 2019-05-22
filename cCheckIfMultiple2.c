// Program: cCheckIfMultiple2.c
// Write a C program that reads two integers and checks 
// if the first integer is a multiple of the second integer.
// This second solution differs from the first because it calls
// a function "IsMultiplied()" rather than doing everything in body
// of the main() function.
#include <stdio.h>

bool IsMultiplied(int a,int b);

int main(int argc,char *argv[])
{

	int a, b;
	
	printf("Please enter the first integer: ");
	scanf("%d",&a);

	printf("Please enter the second integer: ");
	scanf("%d",&b);
	
	if(IsMultiplied(a,b))
	{
		printf("%d is a multiple of %d\n",a,b);
	}
	else
	{
		printf("%d is not a multiple of %d\n",a,b);
	}

	return 0;
}

bool IsMultiplied(int a, int b)
{
	if(b != 0)
	{
		if(a % b == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
