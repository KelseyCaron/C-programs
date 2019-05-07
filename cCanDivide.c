// Program: cCanDivide.c
// Write a C program that reads two integers 
// and divides the first number by the second 
// number. Print an error message if the 
// division is not possible.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int numerator, denominator;	
	double result;

	printf("Enter numerator: ");
	scanf("%d",&numerator);
	
	printf("Enter denominator: ");
	scanf("%d",&denominator);
	
	if( denominator != 0)
	{
		result = (double)numerator / denominator;
		printf("%.2f\n", result);
	}
	else
	{
		printf("Division is not possible\n");
	}	

	return 0;
}
