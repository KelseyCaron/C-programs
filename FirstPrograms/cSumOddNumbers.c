// Program: cSumOddNumbers.c
// Write a program that reads 5 numbers and sum
// all of the odd values between them.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num[5], total = 0;
	for(int i = 0; i < 5; i++)
	{
		printf("Please enter integer [%d]: ", i + 1);
		scanf("%d",&num[i]);
	}
	
	for(int i = 0; i < 5; i++)
	{
		if(num[i] % 2 == 1)
		{
			total = total + num[i];
		}
	}
	
	printf("The sum of all odd numbers is: %d\n",total);

	return 0;
}
