#include <stdio.h>

int main(int argc,char *argv[])
{
	
	int time, principle, rateOfInterest, simpleInterest;
	
	printf("Please enter principle amount: ");
	scanf("%d",&principle);
	
	printf("Please enter rate of interest: ");
	scanf("%d",&rateOfInterest);
	
	printf("Please enter time(years):  ");
	scanf("%d",&time);
	
	simpleInterest = ((principle * rateOfInterest * time) / (100));
	
	printf("Simple Interest = %d\n",simpleInterest);

	return 0;	
}
