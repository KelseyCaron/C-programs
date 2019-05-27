// Program: cCheckTwoIntegers3.c
// Write a C program that gets two integers. Check the integers 
// to see whether either of them are in the range 20 to 50 inclusive.
// If either are in range then return true, else return false.
#include <stdio.h>

int GetInteger();
bool CheckInteger(int x,int y);
void PrintResult(bool checkInt);

int main(int argc,char *argv[])
{
	int x, y;
	bool checkInt;

	x = GetInteger();
	y = GetInteger();
	
	checkInt = CheckInteger(x,y);

	PrintResult(checkInt);

	return 0;
}

int GetInteger()
{
	int temp;
	
	printf("Please enter an integer: ");
	scanf("%d",&temp);
	
	return temp;
}

bool CheckInteger(int x,int y)
{
	if((x >= 20 && x <= 50) || (y >= 20 && y <=50))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void PrintResult(bool checkInt)
{
	if(checkInt)
	{
		printf("Check integers returned true(%d).\n",checkInt);
	}
	else
	{
		printf("Check integers returned false(%d).\n",checkInt);
	}

	return;
}
