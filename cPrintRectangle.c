// Program: cPrintRectangle.c
// Write a C program that read both length and width as integers 
// and prints a rectangle based on the specified dimensions.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int length, width;
	char hash = '#';
	
	printf("Please enter the length: ");
	scanf("%d",&length);
	
	printf("Please enter the width: ");
	scanf("%d",&width);
	
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < width; j++)
		{
			printf("%2c",hash);
		}
		printf("\n");
	}	


	return 0;
}
