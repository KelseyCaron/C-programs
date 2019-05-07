// Program: cSquareCube.c
// Write a C program that asks the user to enter and integer.
// from 1 to the entered integer print the square and cube of each number.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num;
	
	printf("Enter the nth integer: ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++)
	{
		printf("%d %d %d\n",i,i*i,i*i*i);
	}	
	
	return 0;
}
