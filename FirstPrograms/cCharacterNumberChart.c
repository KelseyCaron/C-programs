// Program: cCharacterNumberChart.c
// Write a C program that prints a chart of the ASCII
// alphabet labelled with the correct numbers. The rows will be
// 7 units long. Include both lower-case and upper-case letters.
#include <stdio.h>
 

int main(int argc,char *argv[])
{
	printf("\n");	

	for(int i = 65; i <= 126; i+=7)
	{	
		for(int j = i; j <= i + 6; j++)
		{
			printf("%4d",j);
		}

		printf("\n");

		for(int j = i; j <= i + 6; j++)
		{
			printf("%4c",j);
		}

		printf("\n");
		printf("\n");
	}	

	return 0;
}
