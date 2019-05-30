// Program: cCheckTwoIntegers6.c
// Write a C program that reads two integers provided by
// the user. Check the two integers and return true if either of them are 5
// or if the absolute difference of the two integers equals 5. Else, return
// false.
#include <stdio.h>

void SetIntegers(int &x,int &y);
bool CheckIntegers(int x,int y);
void PrintResult(bool checkIntegers);

int main(int argc,char *argv[])
{
	int x, y;
	bool checkIntegers;

	SetIntegers(x,y);
	
	checkIntegers = CheckIntegers(x,y);
	
	PrintResult(checkIntegers);

	return 0;
}

void SetIntegers(int &x,int &y)
{
	printf("Please enter the first integer: ");
	scanf("%d",&x);
	
	printf("Please enter the second integer: ");
	scanf("%d",&y);
	
	return;	
}

bool CheckIntegers(int x,int y)
{
	int difference;
	difference = x - y;
	
	if(difference < 0)
	{
		difference = difference * -1;
	}

	if(x == 5)
	{
		return true;
	}
	else if(y == 5)
	{
		return true;
	}
	else if(difference == 5)
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
		printf("CheckIntegers() returned true(%d).\n",checkIntegers);
	}
	else
	{
		printf("CheckIntegers() returned false(%d).\n",checkIntegers);
	}

	return;
}
