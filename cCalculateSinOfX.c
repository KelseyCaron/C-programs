// Program: cCalculateSinOfX.c
// Write a C program that accpets a real number 'x'
// and calculates sin(1/x). Store the resulting value and 
// print it on the screen.
#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	double x, result;
	
	printf("Please enter the value of x: ");
	scanf("%lf",&x);
	
	result = sin(1.0/x);
	printf("sin(1/x) = sin(1/(%.4f)) = %.4f\n",x,result);

	return 0;
}
