// Program: cChecKIntegers5.c
// Write a C program that reads two integers and checks whether 
// they are in the range 20 to 30 inclusive. Print the larger value
// that is in the range. If neither value is in range, print 0. 
#include <stdio.h>

int GetInteger();
int CheckIntegers(int x,int y);
void PrintResult(int result);

int main(int argc,char *argv[])
{
	int x, y, result;
	
	x = GetInteger();
	y = GetInteger();

	result = CheckIntegers(x,y);

	PrintResult(result);

	return 0;
}

int GetInteger()
{
	int temp;
	
	printf("Please enter an integer: ");
	scanf("%d",&temp);

	return temp;
}

int CheckIntegers(int x,int y)
{
	if(x >= 20 && x <= 30 && y >= 20 && y <= 30)
	{
		if(x > y)
		{
			return x;
		}
		else
		{
			return y;
		}
	}
	else if(x >= 20 && x <= 30)
	{
		return x;
	}
	else if(y >= 20 && y <= 30)
	{
		return y;
	}
	else
	{
		return 0;
	}
}

void PrintResult(int result)
{
	printf("Result from CheckIntegers = %d\n",result);
}
