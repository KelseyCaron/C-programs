// Program: cCheckPrimeNumber2.c
// Write C program that finds all prime numbers from 1 to N.
// Note: This was a practice recreation from the first cCheckPrimeNumbers.c
// *I found that this program is slightly faster when tested with 
// large input, compared to the first program I created. I think
// this is due to the difference in the print statement at the end 
// of first loop. 
#include <stdio.h>

int main(int argc,char * argv[])
{
	int primeMaxToCheck;
	bool boolCheck;
 	boolCheck = true;			
	printf("Please enter the max prime number to check: ");
	scanf("%d",&primeMaxToCheck);
	
	for(int i = 2; i <= primeMaxToCheck; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(i%j == 0 && j != 1 && j != i)
			{
				boolCheck = false;
			}
		}
	
		if(boolCheck != false)
		{
			printf("%d\n",i);
		}

		boolCheck = true;
	}
	
	return 0;
}
