// Program: cPowerOfTwoTable.c
// Write a C program that calculates the power of 2 from
// 0 to N. This should be done with both positive and negative powers.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num, power;

	printf("------------------------------------------------\n");
	printf("------------------------------------------------\n");
	printf("   Powers of 2 Table Both Positive & Negative\n");
	printf("------------------------------------------------\n");
	printf("------------------------------------------------\n");

	printf("How many powers do you want to go up to: ");
	scanf("%d",&num);
	
	power = 1;

	for(int i = 0; i <= num; i++)
	{
		printf("%d	",i);
		for(int j = 0; j < i; j++)
		{
			power = power * 2;
		}
	
		printf("%d	",power);
		printf("%.12f\n",1.0/power);
		power = 1;
	}
	
	printf("------------------------------------------------\n");

	return 0;
}
