// Program: cCheckForTriples.c
// Write a C program that creates an integer array using the 
// users input and check the array for all occurrences
// of three equal integers in a row. 
#include <stdio.h>
#define MAX 10

void CreateArray(int array[]);
void PrintArray(int array[]);
void CheckForTriples(int array[]);

int main(int argc,char *argv[])
{
	int array[MAX];

	CreateArray(array);
	PrintArray(array);
	CheckForTriples(array);

	return 0;
}

void CreateArray(int array[])
{
	for(int i = 0; i < MAX; i++)
	{
		printf("Please enter array[%d]: ",i);
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

void CheckForTriples(int array[])
{
	int temp;
	bool check;
	check = false;

	for(int i = 0; i < MAX; i++)
	{
		temp = array[i];
		
		if(i <= 7)
		{
			if(temp == array[i + 1] && temp == array[i + 2])
			{
				printf("Triple of [%d] starting at index[%d]\n",temp,i);
				check = true;
			}
		}
	}
	
	if(!check)
	{
		printf("No Triples found in the array.\n");
	}

	return;
}




