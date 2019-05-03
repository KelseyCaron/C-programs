// Program cSignEvenOdd.c
// Write a C program to check a given integer for it's sign
// and whether it is even or odd.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num;
	
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	if(num == 0)
	{
		printf("[%d] : Even\n",num);
	}
	else if(num >= 0 && num % 2 == 0 )
	{
		printf("[%d] : Positive Even\n",num);
	}
	else if(num < 0 && num % 2 == 0)
	{
		printf("[%d] : Negative Even\n",num);
	}
	else if(num >= 0 && num % 2 != 0)
	{
		printf("[%d] : Positive Odd\n",num);
	}
	else if(num < 0 && num % 2 != 0)
	{
		printf("[%d] : Negative Odd\n",num);
	}
	
	return 0;
}
