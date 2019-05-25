// Program: cAbsoluteDifference.c
// Write a C program that calculates the absolute difference
// between n and 51. If n is greater than 51 return triple
// the absolute difference.
#include <stdio.h>

int GetN();
int CalculateAbsoluteDifference(int n);
void PrintAbsoluteDifference(int absoluteDifference);

int main(int argc,char *argv[])
{
	int n, absoluteDifference;

	n = GetN();
	
	absoluteDifference = CalculateAbsoluteDifference(n);
	PrintAbsoluteDifference(absoluteDifference);

	return 0;
}

int GetN()
{
	int n;
	printf("Please enter n: ");
	scanf("%d",&n);

	return n;
}

int CalculateAbsoluteDifference(int n)
{
	int absoluteDifference;

	if(n - 51 > 0)
	{
		absoluteDifference = (n - 51) * 3;
	}
	else
	{
		absoluteDifference = (n - 51) * -1;
	}	

	return absoluteDifference;
}

void PrintAbsoluteDifference(int absoluteDifference)
{
	printf("Absolute difference = %d\n",absoluteDifference);
	return;
}
