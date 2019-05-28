// Program: cCheckTwoIntegersSameLastDigit.c
// Write a C program to check if two given non-negative integers have the same last
// digit.
#include <stdio.h>

int GetInteger();
bool CheckIntegersLastDigit(int x,int y);
void PrintResult(bool checkIntegers);

int main(int argc,char *argv[])
{
	int x, y;
	bool checkIntegers;
	
	x = GetInteger();
	y = GetInteger();
	
	checkIntegers = CheckIntegersLastDigit(x,y);
	
	PrintResult(checkIntegers);

	return 0;
}

int GetInteger()
{
	int temp;

	printf("Please enter an integer: ");
	scanf("%d",&temp);

	if(temp < 0)
	{
		return temp * -1;
	}
	return temp;
}

bool CheckIntegersLastDigit(int x,int y)
{
	if(x % 10 == y % 10)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void PrintResult(bool checkIntegers)
{
	if(checkIntegers)
	{
		printf("Last Digits returned true(%d).\n",checkIntegers);
	}
	else
	{
		printf("Last Digitis returned false(%d).\n",checkIntegers);
	}
	
	return;
}
