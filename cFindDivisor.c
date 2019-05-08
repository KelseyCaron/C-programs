// Program: cFindDivisor.c
// Write a C program that reads an integer and finds
// all of the divisors of that integer
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num;	
	
	printf("Please enter an integer: ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++)
	{
		if(num % i == 0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;	
}
