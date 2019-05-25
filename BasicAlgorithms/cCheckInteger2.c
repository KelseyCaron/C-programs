// Program: cCheckInteger2.c
// Write a C program to check if a given integer is
// a multiple of 3 or a multiple of 7.
#include <stdio.h>

int GetX();
bool CheckInteger(int x);
void PrintResult(bool checkInteger);

int main(int arc,char *argv[])
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
	
	printf("Please enter the integer to check: ");
	scanf("%d",&x);
	
	return x;
}

bool CheckInteger(int x)
{
	if(x % 3 == 0)
	{
		return true;
	}
	else if(x % 7 == 0)
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
