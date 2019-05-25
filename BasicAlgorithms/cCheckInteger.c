// Program: cCheckInteger.c
// Write a C program to check an integer and return
// true if it within 10 of 100 or 200.
#include <stdio.h>

int GetX();
bool CheckInteger(int x);
void PrintResult(bool checkInteger);

int main(int argc,char *argv[])
{
	int x;
	bool checkInteger;

	x = GetX();
	checkInteger = CheckInteger(x);
	PrintResult(checkInteger);

	return 0;
}

int GetX()
{
	int x;

	printf("Please enter integer to check: ");
	scanf("%d",&x);
	
	return x;
}

bool CheckInteger(int x)
{
	if(x - 100 < 10 && x - 100 > -10)
	{
		return true;
	}
	else if(x - 200 < 10 && x - 200 > -10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void PrintResult(bool checkInteger)
{
	if(checkInteger)
	{
		printf("Integer returned true(%d).\n",checkInteger);
	}
	else
	{
		printf("Integer returned false(%d).\n",checkInteger);
	}
	
	return;
}
