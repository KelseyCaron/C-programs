// Program: cLowestHighestSum.c
// Write a C program that asks the user for
// two integers that act as a range. Print the odd numbers
// in the range from lowest to highest and 
// print the sum of all odd numbers.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num1, num2, temp, total;	

	printf("Input a pair of numbers (for example 15,4)\n");
	printf("Please input the first integer: ");	
	scanf("%d",&num1);
	printf("Please enter the second integer: ");
	scanf("%d",&num2);
	
	if(num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	for (int i = num1; i <= num2; i++)
	{
		if(i % 2 == 1)
		{
			printf("%d\n",i);
			total = total + i;
		}
	}
	
	printf("Sum of odd numbers: %d\n",total);	

	return 0;	
}
