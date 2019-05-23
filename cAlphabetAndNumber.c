// Program: cAlphabetAndNumber.c
// Write a C program to print the alphabet in decimal abd character form.
#include <stdio.h>

int main(int argc,char *argv[])
{
	printf("-----Alphabet & Number---\n");
	for(int i = 65; i <= 90; i++)
	{
		printf("%10c %9d\n",i,i);
		printf("%10c %9d\n",i+32,i+32);
	}
	
	return 0;
}
