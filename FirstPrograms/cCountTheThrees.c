// Program: cCountTheThrees.c
// Write a C program that reads an integer and counts
// how many times 3 occurs. The integer must be at maximum
// 9 digits.
#include <stdio.h>
#define MAX 9

int main(int argc,char *argv[])
{
	int number, total, divisor, numArray[9], numberCopy;
	divisor = 100000000;

	printf("Please enter an integer(Max 9 digits): ");
	scanf("%d",&number);
	
	while(number > 1000000000 || number < 0)
	{
		printf("[ERROR]: Invalid integer...\n");
		printf("Please enter an integer(MAX 9 digits): ");
		scanf("%d",&number);
	}

	numberCopy = number;

	for(int i = 0; i < MAX; i++)
	{
		numArray[i] = number / divisor;
		number = number % divisor;
		divisor = divisor / 10;
	}
	
	for(int i = 0; i < MAX; i++)
	{
		if(numArray[i] == 3)
		{
			total++;
		}
	}
	
	printf("The total number of 3's in [%d] = %d\n",numberCopy,total);

	return 0;
}
