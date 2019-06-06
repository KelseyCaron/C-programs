// C program to calculate the distance between two points
#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	double x1, x2, y1, y2, total;
	printf("Enter input x1: ");
	scanf("%lf",&x1);
	printf("Enter input y1: ");
	scanf("%lf",&y1);
	printf("Enter input x2: ");
	scanf("%lf",&x2);
	printf("Enter input y2: ");
	scanf("%lf",&y2);
	total = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	printf("Distance between the points: %.2f\n",total);
	return 0;
}
