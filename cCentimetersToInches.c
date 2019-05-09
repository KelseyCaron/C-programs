// Program: cCentimetersToInches.c
// Write a C program that reads an integer that 
// represents a distance in centimeters and converts the
// distance to inches.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int centimeters;
	double inches;

	printf("Enter distance in centimeters: ");
	scanf("%d",&centimeters);

	inches = (double)centimeters / 2.54;

	printf("Inches = %.2f\n",inches);
}
