// Program: cArrayOfSeven.c
// Write a C program that reads 7 integers
// into an array and prints the array alements
// out afterwards.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num[7];
	
	for(int i = 0; i < 7; i++)
	{
		printf("Please enter array member [%d]: ",i + 1);
		scanf("%d",&num[i]);
	}
	
	printf("--------------------------------------------\n");

	for(int i = 0; i < 7; i++)
	{
		printf("num[%d] = %d\n",i, num[i]);
	}
	
	return 0;
}
