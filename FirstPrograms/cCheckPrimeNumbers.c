// Program: cCheckPrimeNumbers.c
// Write a C program that reads an integer N. From 1 to N 
// print all numbers that are prime. Print 10 numbers to
// a line.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int primeSet, test, count;
	bool checkPrime;
	
	printf("Please enter the largest value in the prime set to check: ");
	scanf("%d",&primeSet);

	checkPrime = true;
	count = 0;
	for(int i = 2; i <= primeSet; i++ )
	{
		for(int j = 1; j <= i; j++)
		{
			test = i % j;
			if(test == 0 && j != 1 && j != i)
			{
				checkPrime = false;
			}
		}
		
		if(checkPrime == true)
		{
			printf("%d ",i);
			count++;
		}
		if(count == 10)
		{
			printf("\n");
			count = 0;
		}
		
		
		checkPrime = true;
	}

	printf("\n");

	return 0;
}
