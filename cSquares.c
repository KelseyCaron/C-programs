// Program: cSquares.c
// Write a C program to find and print the square of each even value
// from 1 to a specified value.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num;

	printf("Please enter the limit: ");
	scanf("%d",&num);
	
	for(int i = 0; i <= num; i++)
	{
		if(i % 2 == 0)
		{
			printf("[%d]^2 : %d\n",i,i*i);
		}
	}
	
	return 0;
}
