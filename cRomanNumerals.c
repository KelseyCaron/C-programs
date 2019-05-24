// Program: cRomanNumerals.c
// Write a program that prints decimal numbers and roman numerals
// from 1 to 100.
#include <stdio.h>
#define MAX 100

int main(int argc,char *argv[])
{
	int num;
	
	printf("Decimal\tRoman\n");
	printf("Number\tNumeral\n");
	printf("-----------------------------\n");

	for(int i = 1; i <= MAX; i++)
	{
		num = i;
		
		printf("%2d\t",num);
		
		if(num == 100)
		{
			printf("C");
			num = 0;
		}
		
		if(num >= 50)
		{
			printf("L");
			num = num - 50;
		}
		while(num >= 10)
		{
			printf("X");
			num = num - 10;
		}
		if(num >= 5)
		{
			if(num % 10 == 9)
			{
				printf("IX");
				num = num - 9;
			}
			else
			{
				printf("V");
				num = num - 5;
			}
		}
		while(num > 0)
		{
			if(num % 10 == 4)
			{
				printf("IV");	
				num = num - 4;
			}
			else
			{
				printf("I");			
				num = num - 1;
			}
		}
		printf("\n");
	}
	
	return 0;
}
