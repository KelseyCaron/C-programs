// Program: cAverageMark.c
// Write a C program that calculates an average mark based on
// an input of n marks.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int numMarks, total, mark;
	double  averageMark;
	total = 0;

	printf("Please enter the number of marks to enter: ");
	scanf("%d",&numMarks);

	for(int i = 0; i < numMarks; i++)
	{
		printf("Enter Mark[%d]: ", i + 1);
		scanf("%d",&mark);
	
		total = total + mark;
	}
	
	averageMark = (float)total / numMarks;
	
	printf("Average Mark = %.2f\n",averageMark);

	return 0;
}
