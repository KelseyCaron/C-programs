// Program: cFindQuadrant.c
// Write a C program that asks the user for two coordinates (x,y) and prints the 
// appropraite quadrant (for example (+,+) or (-,+) )
#include <stdio.h>

int main(int argc,char *argv[])
{
	int x, y;
	
	printf("Please enter coordinates x & y below\n");

	printf("x: ");
	scanf("%d",&x);	

	printf("y: ");
	scanf("%d",&y);
	
	if(x > 0 && y > 0)
	{
		printf("Quadrant (+,+)\n");
	}
	else if(x > 0 && y < 0)
	{
		printf("Quadrant (+,-)\n");
	}
	else if(x < 0 && y > 0)
	{
		printf("Quadrant (-,+)\n");
	}
	else if(x < 0 && y < 0)
	{
		printf("Quadrant (-,-)\n");
	}
	
	return 0;
}
