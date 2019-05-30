// Program: cCheckSumOfIntegers.c
// Write a C program that reads two integers from the user.
// Calculate the sum of the two integers and check whether the 
// sum is within the range 20 to 30 inclusive. Print the sum
// of the integers and whether the sum is in range or out of range.
#include <stdio.h>

void SetIntegers(int &x,int &y);
void CheckIntegers(int x,int y);

int main(int argc,char *argv[])
{
	int x, y;
	
	SetIntegers(x,y);
	CheckIntegers(x,y);

	return 0;
}

void SetIntegers(int &x,int &y)
{
	printf("Please enter first integer: ");
	scanf("%d",&x);

	printf("Please enter second integer: ");
	scanf("%d",&y);
	
	return;
}

void CheckIntegers(int x,int y)
{
	if(x + y >= 20 && x + y <= 30)
	{
		printf("Sum of integers = %d. This is in Range(20,30).\n",x+y);
	}
	else
	{
		printf("Sum of integers = %d. This is not in Range(20,30).\n",x+y);
	}
	
	return;
}

