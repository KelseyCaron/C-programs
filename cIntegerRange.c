// Program: cIntegerRange.c
// Write a C program that reads an integer and checks
// the specified range for where it belongs.
// Print error message if the number is negative ot greater than 80.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num;
	printf("Input an integer: ");
	scanf("%d",&num);

	if(num >= 0 && num <=20)
	{
		printf("Integer: %d is in range [0,20]\n",num);
	}
	else if(num >= 20 && num <= 40 )
	{
		printf("Integer: %d is in range [20,40]\n",num);
	}
	else if(num >= 40 && num <= 60)
	{
		printf("Integer: %d is in range [40,60]\n",num);
	}
	else if(num >= 60 && num <= 80)
	{
		printf("Integer: %d is in range [60,80]\n",num);
	}
	else
	{
		printf("Not a valid integer\n");
	}

	return 0;
}
