// Program: cThreeInLine.c
// Write a C program that asks the user to enter how many
// lines they would like printed out. Each line
// printed will have three integers in order.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int n, x, j;
	x = 0;
	j = 1;
	
	printf("Input number of lines: ");
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
	{
		while( x < 3)
		{
			printf("%d ",j++);
			x++;
		}
	
		x = 0;
		printf("\n");	
	}
	
	return 0;
}

