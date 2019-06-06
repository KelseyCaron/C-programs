#include <stdio.h>

int main(int argc,char *argv[])
{
	int radius;
	float pi = 3.14;
	printf("Perimeter and Area of a Circle\n");
	printf("Please enter a radius: ");
	scanf("%d",&radius);
 	printf("Area of Circle: %f\n", pi * (radius * radius));
	printf("Perimeter of Circle: %f\n", 2 * pi * radius);	
	return 0;
}