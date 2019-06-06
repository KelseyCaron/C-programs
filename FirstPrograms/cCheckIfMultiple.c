// Program: cCheckIfMultiple.c
// Write a C program that reads two integers and prints 
// whether the first integer is a multiple of the second integer.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int a, b;
	printf("Please enter first integer: ");
	scanf("%d",&a);
	
	printf("Please enter second integer:  ");
	scanf("%d",&b);

	if(a > b && b != 0)
	{
		if(a % b == 0)
		{
			printf("%d is a multiple of %d\n",a,b);
		}
		else
		{
			printf("%d is not a multiple of %d\n",a,b);
		}
	}
	else
	{
		printf("%d is not a multiple of %d\n",a,b);
	}
	

	return 0;
}
