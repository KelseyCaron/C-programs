// Program cpositiveMinMaxAverage.c
// Write a C program that accepts integers from the user until a 
// zero or negative number. Display the number of positive results,
// the minimum value, the maximum value, and the average of all positive
// numbers.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int positive, min, max, num;
	double  average;
	average = 0.0;
	printf("Please enter integer: ");
	scanf("%d",&num);
	
	if(num > 0)
	{
		min = num;
		max = num;
		positive = 1;
		average = average + num;
	}

	while(num > 0)
	{
		printf("Please enter next integer: ");
		scanf("%d",&num);
	
		if(num < min && num > 0)
		{
			min = num;
			positive = positive + 1;
			average = average + num;
		}
		else if(num > max && num > 0)
		{
			max = num;
			positive = positive +1;
			average = average + num;
		}
		else if(num > 0)
		{
			positive = positive + 1;
			average = average + num;
		}				
	}
	
	if(average > 0)
	{
		printf("Number of positive Values = %d\n",positive);
		printf("Minimum Value = %d\n",min);
		printf("Maximum Value = %d\n",max);
		printf("Average of Positive values = %.4lf\n", average / positive);
	}
	else
	{
		printf("No positive values were entered\n");
	}

	return 0;
}
