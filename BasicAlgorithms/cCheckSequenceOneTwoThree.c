// Program: cCheckSequenceOneTwoThree.c
// Write a C program to check whether the sequence of number 1,2,3 appears in a 
// user generated array of integers.
#include <stdio.h>
#define MAX 10

void InsertIntoArray(int array[]);
void PrintArray(int array[]);
bool CheckArray(int array[]);
void PrintResult(bool checkArray);

int main(int argc,char *argv[])
{
	int array[MAX];
	bool checkArray;

	InsertIntoArray(array);
	PrintArray(array);
	checkArray = CheckArray(array);
	PrintResult(checkArray);

	return 0;
}

void InsertIntoArray(int array[])
{
	for(int i = 0; i < MAX; i++)
	{
		printf("Please enter array[%d]: ",i);
		scanf("%d",&array[i]);
	}
}

void PrintArray(int array[])
{
	for(int i = 0; i < MAX; i++)
	{
		printf("array[%d] =  %d\n",i,array[i]);
	}
}

bool CheckArray(int array[])
{
	for(int i = 0; i < MAX; i++)
	{
		if(array[i] == 1)
		{
			if(array[i+ 1] == 2)
			{
				if(array[i + 2] == 3)
				{
					return true;
				}
				else
				{
					i += 2;
				}
				
			}
			else
			{
				i += 1;
			}
		}
	}
	return false;
}

void PrintResult(bool checkArray)
{
	if(checkArray)
	{
		printf("1,2,3 was found in the array(%d).\n",checkArray);
	}
	else
	{
		printf("1,2,3 was not found in the array(%d).\n",checkArray);
	}
}
