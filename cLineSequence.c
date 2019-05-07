// Program: cLineSequence.c
// Write a C program that reads two integer p and q,
// print p number of lines in a sequence of 1 to p
// in a line
#include <stdio.h>

int main(int argc,char *argv[])
{
	int line, number, x, j;
	x = 0;
	j = 1;

	printf("Please enter number of lines: ");
	scanf("%d",&line);
	
	printf("Please enter number of characters in a line: ");
	scanf("%d",&number);
	
	for(int i = 0; i < line; i++)
	{
		while(x < number)
		{
			printf("%d ",j++);
			x++;
		}

		printf("\n");
		x = 0;
	}
	
	return 0;
}
