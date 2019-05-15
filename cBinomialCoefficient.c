// Program: cBinomialCoefficient.c
// Write a C program that creates a binomial coefficient table. Create the
// table such that the format of the table is legible up to some N = 10.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int mx, binC;
	
	printf("Please enter N: ");
	scanf("%d",&mx);
	printf("mx ");

	for(int i = 0; i <= mx; i++)
	{
		printf("%3d ", i);
	}

	printf("\n");
	
	for(int n = 0; n <= mx; n++)
	{
		printf("%2d",n);
		int binC = 1;
		
		for(int r = 0; r <= n; r++)
		{
			if(n != 0 && r != 0)
			{
				binC = binC * (n - r + 1) / r;	
			}
			
			printf("%4d",binC);
		}

		printf("\n");
	}
	
	return 0;
}
