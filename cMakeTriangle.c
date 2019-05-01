// Program: cMakeTriangle.c
// Write a C program that reads three integer values and 
// check if it is possible to make a triangle with them.
// Calculate the perimeter of the triangle if values are valid.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num[3];
	
	for(int i = 0; i < 3; i++)
	{
		printf("Please input integer[%d]: ",i + 1);
		scanf("%d",&num[i]);
	}
	
	if(num[0] < (num[1] + num[2]) && num[1] < (num[0] + num[2]) && num[2] < (num[0] + num[1]))
	{
		printf("Valid parameters for triangle\n");
		printf("Perimeter of triangle = %d\n", num[0] + num[1] + num[2]);
	}
	else
	{
		printf("[ERROR] The parameters you entered are not valid\n");
	}

	return 0;
}
