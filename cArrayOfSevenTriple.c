// Program: cArrayOfSevenTriple.c
// Write a C program that reads an integer into the
// first place of an array. The array should be of size 7.
// The proceesing positions of the array should carry the
// value that is triple the previous position.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num[7], tripledNum;
	
	printf("Please enter the first integer of the array: ");
	scanf("%d",&num[0]);
	
	for(int i = 1; i < 7; i++)
	{
		tripledNum = (num[i - 1] * 3);
		num[i] = tripledNum;
	}

	printf("---------------------------------------\n");
	
	for(int i = 0; i < 7; i++)
	{
		printf("num[%d]: %d\n",i,num[i]);
	}
	
		return 0;
}
