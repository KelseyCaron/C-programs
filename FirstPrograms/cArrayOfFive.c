// Program: cArrayOfFive.c
// Write a C program that reads an array of length 5 and prints
// the position of array elements that are less than five.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num[5];	

	for(int i = 0; i < 5; i++)
	{
		printf("Please enter integer[%d]: ", i + 1);
		scanf("%d",&num[i]);
	}

	printf("----------------------------------------\n");
	printf("Integers less than five in array are: \n");

	for(int i = 0; i < 5; i++)
	{
		if(num[i] < 5)
		{
			printf("*A[%d]: %d\n",i,num[i]);
		}
	}

	return 0;
}
