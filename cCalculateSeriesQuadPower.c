// Program: cCalculateSeriesQuadPower.c
// Write a C program that reads an integer and calculates the sum of
// the following series: S = 1^4 + 2^4 + 4^4 + 7^4 + 11^4 + ... + m^4
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{	
	int num, total, j;
	j = 1;	
	printf("Please enter an integer: ");
	scanf("%d",&num);
	
	num = abs(num);
	
	if(num != 0)
	{
		for(int i = 1; j <= num; i++)
		{
			total = total + (j * j * j * j);
			j = j + i;
		}
		
		printf("Sum of Sequence = %d\n",total);
	}
	else
	{
		printf("[Error]: Cannot enter 0 as an integer\n");
	}
	
	return 0;
}
