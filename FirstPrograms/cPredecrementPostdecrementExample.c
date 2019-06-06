// Program: cPredecrementPostdecrementExample.c
// Write a C program that illustrates the predecrement
// and postdecrement operator.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int x, y;
	x = 10;
	y = 20;
	
	printf("Original x = %d\n",x);
	printf("Original y = %d\n",y);
	
	printf("x with Predecrement =  %d\n",--x);
	printf("y with Postdecrement = %d\n",y--);
	
	printf("x after decrement = %d\n",x);
	printf("y after decrement = %d\n",y);

	return 0;
}
