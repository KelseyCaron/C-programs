// Program: cTableOfValues.c
// Write a program that creates a table of values. Allow the
// user to input the max number of columns and max number of rows.
// The columns should start at 1 and increment by 2. The Rows should 
// start at 1 and increment by 3. 
#include <stdio.h>

int main(int argc,char *argv[])
{
	int columnsLimit, rowsLimit;
	char c = 'X';
	
	printf("Please enter the number of columns: ");
	scanf("%d",&columnsLimit);
	printf("Please enter the number of rows: ");
	scanf("%d",&rowsLimit);

	for(int i = 0; i <= columnsLimit; i+=2)
	{
		if(i == 0)
		{
			printf("%2c\t",c);
		}
		else
		{
			printf("%c+%d\t",c,i);
		}
	}
	
	printf("\n");

	for(int i = 0; i <= columnsLimit; i+=2)
	{
		printf("--------");
	}

	printf("\n");

	for(int i = 1; i <= rowsLimit; i+=3)
	{
		for(int j = 0; j <= columnsLimit; j+=2)
		{
			printf("%2d\t",j+i);
		}
		printf("\n");
	}

	return 0;	
}
