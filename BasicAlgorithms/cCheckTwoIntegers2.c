// Program: cCheckTwoIntegers2.c
// Write a C program that reads two integers and checks whether 
// either are between 100 to 200 inclusive. If both are outside the
// given range, return false. 
#include <stdio.h>

int GetInteger();
bool CheckIntegers(int x, int y);
void PrintResult(bool checkInt);

int main(int argc,char *argv[])
{
	int x, y;
	bool checkInt;
	
	x = GetInteger();
	y = GetInteger();
	
	checkInt = CheckIntegers(x,y);
	
	PrintResult(checkInt);

	return 0;
}

int GetInteger()
{
	int temp;
	
	printf("Please enter integer: ");
	scanf("%d",&temp);

	return temp;
}

bool CheckIntegers(int x, int y)
{
	if((x >= 100 && x <= 200) || (y >= 100 && y <= 200))
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
		printf("Check integer returned true(%d).\n",checkInt);
	}
	else
	{
		printf("Check integer returned false(%d).\n",checkInt);
	}
}
