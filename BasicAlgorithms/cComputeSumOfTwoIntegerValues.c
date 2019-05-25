// Program: cComputeSumOfTwoIntegerValues.c
// Write a C program to compute the sum of the two integer values.
// If the two values are the same, then triple the sum.
#include <stdio.h>

bool CheckIfEqual(int x,int y);
int SumOfIntegers(int x,int y);
int TripleSumOfIntegers(int x,int y);
void PrintResult(int result);

int main(int argc,char *argv[])
{
	bool checkEqual;
	int x, y, result;

	printf("Please enter first integer: ");
	scanf("%d",&x);
	
	printf("Please enter second integer: ");
	scanf("%d",&y);

	checkEqual = CheckIfEqual(x,y);
	if(!checkEqual)
	{
		result = SumOfIntegers(x,y);
	}
	else
	{
		result = TripleSumOfIntegers(x,y);
	}
	
	PrintResult(result);
		

	return 0;	
}

bool CheckIfEqual(int x,int y)
{
	if(x == y)
	{
		return true;
	}	
	else
	{
		return false;
	}
}

int SumOfIntegers(int x,int y)
{
	return x + y;	
}

int TripleSumOfIntegers(int x,int y)
{
	return 3 * (x + y);
}

void PrintResult(int result)
{
	printf("Result = %d\n",result);
	return; 
}
