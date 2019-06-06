// Program: cAscendingOrDescending.c
// Write a C program that asks the user for two integers and tells 
// the user whether the integers that were entered are in ascending or descending order.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num1, num2;
	
	printf("Please enter the first integer: ");
	scanf("%d",&num1);
	printf("Please enter the second integer: ");
	scanf("%d",&num2);
	
	if(num1 < num2)
	{
		printf("The pair of integers was entered in ascending order\n");
	}
	else if(num1 > num2)
	{
		printf("The pair of integers was entered in descending order\n");
	}
	else if(num1 == num2)
	{
		printf("The pair of integers entered are equal\n");
	}
	
	return 0;
}
