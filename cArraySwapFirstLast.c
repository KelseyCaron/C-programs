// Program: cArraySwapFirstLast.c
// Write a C program that reads 6 integers into an array of length 6.
// Swap the first item in the array with the last, the second item with
// the second last, etc. Print the new array after the swap.  
#include <stdio.h>

int main(int argc,char *argv[])
{
	int numArray[6], max, temp, j;
	max = 6;
	
	for(int i = 0; i < max; i++)
	{
		printf("Please enter numArray[%d]: ",i);
		scanf("%d",&numArray[i]);
	}
	
	printf("---------------------------------------\n");
	printf("Array before swapping: \n");

	for(int i = 0; i < max; i++)
	{
		printf("numArray[%d] = %d\n", i, numArray[i]);
	}
	
	printf("---------------------------------------\n");

	j = max - 1;

	for(int i = 0; i < (max / 2); i++)
	{
		temp = numArray[i];
		numArray[i] = numArray[j];
		numArray[j] = temp;
		j = j - 1;
	}
	
	printf("Array After swapping: \n");

	for(int i = 0; i < max; i++)
	{
		printf("A[%d] = %d\n", i, numArray[i]);
	}

	return 0;
}
