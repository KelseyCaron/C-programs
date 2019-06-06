#include <stdio.h>

int main(int argc,char *argv[])
{
	int total, num1,num2, temp, denominator;
	total = 0;
	
	printf("Please enter the number you wish to divide by: ");
	scanf("%d",&denominator);
	
	printf("Enter first integer for range: ");
	scanf("%d",&num1);
	
	printf("Enter second integer for range: ");
	scanf("%d",&num2);
	
	if(num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for(int i = num1 + 1; i < num2; i++)
	{
		if(i % denominator != 0)
		{
			total = total + i;
		}
	}
	
	printf("Total = %d\n", total);
	
	return 0;
}
