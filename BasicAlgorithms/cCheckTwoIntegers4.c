// Program: cCheckTwoIntegers4.c
// Write a C program that reads two integers and checks whether they are 
// both between 40 to 50 inclusive or 50 to 60 inclusive. 
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

bool  CheckInteger(int x, int y)
{
	if((x >= 40 && x <= 50 && y >= 40 && y <=50) || 
		(x >= 50 && x <= 60 && y >= 50 && y <= 60))
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
		printf("CheckInteger returned true(%d).\n",checkInt);
	}
	else
	{
		printf("CheckInteger returned false(%d).\n",checkInt);
	}
}

