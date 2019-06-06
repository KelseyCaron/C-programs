// Program: cHighestValuePosition.c
// Write a C program that asks a user to enter 5 numbers. The progam should
// record the highest value entered as well as the positon it was entered.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int numArray[5], max = 0, position = 0;

	for(int i = 0; i < 5; i++)
	{
		printf("Please enter integer[%d]: ", i + 1);
		scanf("%d",&numArray[i]);
	
		if(numArray[i] > max)
		{
			max = numArray[i];
			position = i;
		}
	}
	
	printf("Highest Integer = %d\n",max);
	printf("Position = %d\n",position + 1);
	
	return 0;
}
