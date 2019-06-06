// Program: cSwapTwoVariables.c
// Write a C program that swaps two vaiables without using a third variable.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int x, y;

	printf("Please enter variable x: ");
	scanf("%d",&x);
	
	printf("Please enter variable y: ");
	scanf("%d",&y);	
	
	printf("Before swap x = %d & y = %d\n",x,y);

	x = x + y;
	
	y = x - y;
	
	x = x - y;
	
	printf("After swap x = %d & y = %d\n",x,y);
	
	return 0;

}
