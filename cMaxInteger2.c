//Solution for MaxInteger taken from w3resource.com/c-programming-excersises
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int x, y, z, result, max;
	printf("Input the first integer: ");
	scanf("%d",&x);
	printf("Input the second integer: ");
	scanf("%d",&y);
	printf("Input the third integer: ");
	scanf("%d",&z);
	result = (x + y + abs(x - y)) / 2;
	max = (result + z + abs(result - z)) / 2;
	printf("Maximum value of three integers: %d\n",max);
	
	return 0;
}
