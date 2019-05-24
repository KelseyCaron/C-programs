// Program: cPrintHollowRectangle.c
// Write a C program that reads two integers (length & width)
// and print a hollow rectangle using the specified dimensions.
#include <stdio.h>

void PrintHollowRectangle(int length,int width,char hash);

int main(int argc,char *argv[])
{
	int length, width;
	char hash = '#';
	
	printf("Please enter the length: ");
	scanf("%d",&length);
	
	printf("Please enter the width: ");
	scanf("%d",&width);
	
	PrintHollowRectangle(length,width,hash);


	return 0;
}

void PrintHollowRectangle(int length,int width,char hash)
{
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < width; j++)
		{
			if(i == 0 || i == length - 1)
			{
				printf("%2c",hash);
			}
			else if(j == 0 || j == width - 1)
			{
				printf("%2c",hash);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
