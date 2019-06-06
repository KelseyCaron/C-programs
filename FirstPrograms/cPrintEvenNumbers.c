// Program: cPrintEvenNumbers.c
// Write a C program that prints even numbers
// based on what number the user inputs.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num;

	printf("Please enter an integer: ");
	scanf("%d",&num);
	
	printf("Printing even numbers from 0 - %d:\n",num);

	for(int i = 0; i <= num; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
