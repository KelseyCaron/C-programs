// Program: cMonths.c
// Write a C program that asks for an integer [1-12]
// and print the month that is associated with that integer.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int month;	

	printf("Please enter an integer from [1-12]: ");
	scanf("%d",&month);

	if(month == 1)
	{
		printf("[%d]:January\n",month);
	}
	else if(month == 2)
	{
		printf("[%d]:February\n",month);
	}
	else if(month == 3)
	{
		printf("[%d]:March\n",month);
	}
	else if(month == 4)
	{
		printf("[%d]:April\n",month);
	}
	else if(month == 5)
	{
		printf("[%d]:May\n",month);
	}
	else if(month == 6)
	{
		printf("[%d]:June\n",month);
	}
	else if(month == 7)
	{
		printf("[%d]:July\n",month);
	}
	else if(month == 8)
	{
		printf("[%d]:August\n",month);
	}
	else if(month == 9)
	{
		printf("[%d]:September\n",month);
	}
	else if(month == 10)
	{
		printf("[%d]:October\n",month);
	}
	else if(month == 11)
	{
		printf("[%d]:November\n",month);
	}
	else if(month == 12)
	{
		printf("[%d]:December\n",month);
	}
	else
	{
		printf("[ERROR] Not a valid integer\n");
	}
	
	return 0;
}
