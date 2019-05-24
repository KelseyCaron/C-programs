// Program: cSimpleInterest2.c
// Write a C program that calculates simple interest in days.
// The formula for Simple Interest = principle * rate of interest * time.
#include <stdio.h>

int main(int argc,char *argv[])
{
	double total, principleAmount, rateOfInterest;
	double days;
	total = 0;
	
	printf("Please enter the principle amount(CA$): ");
	scanf("%lf",&principleAmount);
	printf("Please enter the rate of interest(%/day): ");
	scanf("%lf",&rateOfInterest);
	printf("Please enter the number of days: ");
	scanf("%lf",&days);
	
	
	total = principleAmount * rateOfInterest * days;
	printf("Total simple interest for %d days = $%.2lf\n",(int)days,total);
	
	return 0;
}
