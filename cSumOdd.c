// Program: cSumOdd.c
// Write a C program that reads 5 integers and prints the 
// number of odd integers entered and the sum of the odd integers.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int numbers[5], sum = 0, oddCount = 0;
	
	for(int i = 0; i < 5; i++)
	{
		printf("Please enter integer[%d]: ",i + 1);
		scanf("%d",&numbers[i]);
	
		if(numbers[i] % 2 == 1)
		{
			oddCount = oddCount + 1;
			sum = sum + numbers[i];
		}
	}
	
	printf("Odd integer count: %d\n",oddCount);
	printf("Sum of odd integers: %d\n",sum);
}
