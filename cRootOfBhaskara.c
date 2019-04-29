// Program: cRootOfBhaskara.c
// Write a program to print the roots of Bhaskara's formula for three
// floating point numbers.

#include <stdio.h>

int main(int arg,char *argv[])
{ 
	double a, b, c, squareRoot,
	 	x1, x2;
	printf("Enter a: ");
	scanf("%lf",&a);
	printf("Enter b: ");
	scanf("%lf",&b);
	printf("Enter c: ");
	scanf("%lf",&c);

	squareRoot = (b * b) - (4 * a * c);

	if(squareRoot > 0 && a != 0)
	{
		x1 = (-b + squareRoot) / (2 * a);
		x2 = (-b - squareRoot) / (2 * a);
		printf("Root1 = %.5lf\n",x1);
		printf("Root2 = %.5lf\n",x2);
	}
	else
	{
		printf("Not able to fin the roots\n");
	}

	return 0;
}
