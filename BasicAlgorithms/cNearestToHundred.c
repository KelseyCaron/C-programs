// Program: cNearestToHundred.c
// Write a C program that reads two integers and
// returns the value that is closest to One-Hundred.
// If the values are equal return 0.
#include <stdio.h>

int GetInteger();
int CheckIntegers(int x,int y);
void PrintResult(int closest);

int main(int argc,char *argv[])
{
	int x, y, closest;
	
	x = GetInteger();
	y = GetInteger();
	
	closest = CheckIntegers(x,y);
	
	PrintResult(closest);

	return 0;
}

int GetInteger()
{
	int temp;
	printf("Please enter integer: ");
	scanf("%d",&temp);
	
	return temp;
}

int CheckIntegers(int x,int y)
{
	int tempX, tempY;

	tempX = x - 100;

	if(tempX < 0)
	{
		tempX = tempX * -1;
	}

	tempY = y - 100;

	if(y < 0)
	{
		tempY = tempY * -1;
	}

	if(x == y)
	{
		return 0;
	}
	else if(tempX < tempY)
	{
		return x;
	}
	else if(tempY < tempX)
	{
		return y;
	}	
}

void PrintResult(int closest)
{
	printf("Closest Value to One-Hundred = %d\n",closest);
	return;	
}
