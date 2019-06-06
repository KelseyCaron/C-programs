// Program: cRemainderThree.c
// Write a C program that prints numbers from
// 1 to some max, which divided by a specific number
// the remainder will be three
#include <stdio.h>

int main(int argc,char *argv[])
{
	int divider, max;	

	printf("Please enter an integer to divide by: ");
	scanf("%d",&divider);
	printf("Please specify the max numerator: ");
	scanf("%d",&max);
	for(int i = 1; i <= max; i++)
	{
		if( i % divider == 3 )
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
