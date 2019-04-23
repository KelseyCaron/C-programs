//Program: cCalculateAverage.c
// A program that calculates the average of weights purchased
#include <stdio.h>

int main(int argc,char *argv[])
{
	int noOfItemsCounter, count, noOfItems;
	double weight, total;
	total = 1;
	printf("Please enter the number of different weights: ");
	scanf("%d",&count);
	
	for(int i = 0; i < count; i++)
	{
		printf("Enter Weight of Item[%d]: ",i + 1);
		scanf("%lf",&weight);
		printf("Enter No of items at [weight = %0.2f]: ",weight);
		scanf("%d",&noOfItems);
		noOfItemsCounter = noOfItemsCounter + noOfItems;
		total = total + (weight * noOfItems);
	}
	total = total / noOfItemsCounter;
	printf("Average Value = %.2f\n",total);
	return 0;
}
