// Program: cCalculateS2.c
// Write a C program that does the following
// calculation - S = 1 + 3/2 + 5/4 + 7/8
#include <stdio.h>

int main(int argc,char *argv[])
{
	double s, j, d;
	j = 1;
	d = 0;
	s = 0;
	
	for(int i = 1; i <=7; i+=2)
	{
		d = i/j;
		s += d;
		j = j * 2;
	}
	printf("S = %.2f\n", s);
	
	return 0;
}
