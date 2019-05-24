// Program: cFiveIntegerPalindrome.c
// Write a C prgoram that reads an integer with 5 digits
// and prints whether the integer is a palindrome or not. 
#include <stdio.h>
#define MAX 5

int main(int argc,char *argv[])
{
	int paliArray[5], number, numberCopy, divisor;
	bool paliBool;
	paliBool = true;
	divisor = 10000;
	printf("Please enter a 5 digit integer: ");
	scanf("%d",&number);
	numberCopy = number;	

	for(int i = 0; i < MAX; i++)
	{
		paliArray[i] = number / divisor;
		number = number % divisor;
		divisor = divisor / 10;
		
	}
	
	for(int i = 0; i < MAX / 2; i++)
	{
		if(paliArray[i] != paliArray[MAX - 1 - i])
		{
			paliBool = false;
		}
	}
	
	if(paliBool == true)
	{
		printf("%d: Is a palindrome!\n",numberCopy);
	}
	else
	{
		printf("%d: Is not a palindrome...\n",numberCopy);
	}

	return 0;
}
