// Program: cSequenceOfFives.c
// Write a C program in which a user generates an array of some 
// MAX length. The array should hold integers. Check the array
// for pairs of 5. If three 5's appear in order (or more), count it as 
// two pairs (etc). 
#include <stdio.h>
#define MAX 10

void CreateArray(int array[]);
void PrintArray(int array[]);
int CheckForFives(int array[]);
void PrintResult(int total);

int main(int argc,char *argv[])
{
	int array[MAX],total;
	
	CreateArray(array);
	PrintArray(array);
	total = CheckForFives(array);
	PrintResult(total);
	return 0;
}

void CreateArray(int array[])
{
	for(int i = 0; i < MAX; i++)
	{
		printf("Please enter aray[%d]: ",i);
		scanf("%d",&array[i]);
	}
	
	return;
}

void PrintArray(int array[])
{
	for(int i = 0; i < MAX; i++)
	{
		printf("array[%d] = %d\n",i,array[i]);
	}
	
	return;
}

int CheckForFives(int array[])
{
	int count,total;

	total = 0;

	for(int i = 0; i < MAX; i++)
	{
		if(array[i] == 5)
		{
			if(i != 9)
			{
				if(array[i + 1] == 5)
				{
					total++;
				}
			}
		}
		
	}

	return total;
}

void PrintResult(int total)
{
	printf("array[] has {%d} pair(s) of fives in a row.\n",total);
	
	return;
}
