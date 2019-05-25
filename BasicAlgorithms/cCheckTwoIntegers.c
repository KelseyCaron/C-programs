//Program: cCheckIntegers.c
//Write a C program to check two integers, and return
//true if one of them is 30 or if their sum is 30.
#include <stdio.h>

int GetX();
int GetY();
bool CheckIntegers(int x, int y);
void PrintResult(bool checkIntegers);

int main(int argc,char *argv[])
{
	int x, y;
	bool checkIntegers;

	x = GetX();
	y = GetY();
	
	checkIntegers = CheckIntegers(x,y);
	
	PrintResult(checkIntegers);

	return 0;
}

int GetX()
{
	int x;

	printf("Please enter x: ");
	scanf("%d",&x);
	
	return x;
}

int GetY()
{
	int y;

	printf("Please enter y: ");
	scanf("%d",&y);
	
	return y;
}

bool CheckIntegers(int x, int y)
{
	if(x == 30 || y == 30)
	{
		return true;
	}
	else if(x * y == 30)
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
		printf("Integers returned true(%d).\n",checkIntegers);
	}
	else
	{
		printf("Integers returned False(%d).\n",checkIntegers);
	}
	
	return;
}
