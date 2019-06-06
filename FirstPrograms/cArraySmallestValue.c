// Program: cArraySmallestValue.c
// Write a C program that reads 6 integers into an array of length 6.
// Find and print the smallest value and associated index.
#include <stdio.h>
#define MAX 6

int main(int argc,char *argv[])
{
	int numArray[MAX], temp, min, index;

	for(int i = 0; i < MAX; i++)
	{
		printf("Please enter numArray[%d]: ",i);
		scanf("%d",&numArray[i]);
	}
	
	min = numArray[0];

	for(int i = 1; i < MAX; i++)
	{
		temp = numArray[i];
		if(temp < min)
		{
			min = temp;
			index = i;
		}
	}
	
	printf("Smallest value = %d\n",numArray[index]);
	printf("Index at = numArray[%d]\n",index);
	
	return 0;
}
