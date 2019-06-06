// Program: cBitShiftLeft.c
// Write a C program that reads an integer and shifts the integer
// 'x' amount of bits to the left.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num, shiftNum, newNum;

	printf("Please enter an integer value to be shifted: ");
	scanf("%d",&num);

	printf("Please enter the number of shifts left: ");
	scanf("%d",&shiftNum);
	
	num<<=shiftNum;

	newNum = num;

	printf("The left shifted data is = %d\n",newNum);
	
	return 0;
}
