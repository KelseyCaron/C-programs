// Program: cCalculateS.c
// Write a C program to calculate the value of S where 
// S = 1 + 1/2 + 1/3 + ... + 1/n
#include <stdio.h>

int main(int argc,char *argv[])
{
	int n;
	double total;
	total = 0.0;

	printf("Calculate S = 1 + 1/2 + ... + 1/n\n");
	printf("Please enter n: ");
   	scanf("%d",&n);
	
	if(n <= 0)
	{
		printf("n must be greater than 0\n");
	}
	else
	{	
		for(int i = 1; i <= n; i++)
		{
			total = total + ((double)1 / i);
		}
		
		printf("S = %.2f\n", total);	
	}

	return 0;
}
