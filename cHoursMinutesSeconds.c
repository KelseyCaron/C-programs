// Program: cHoursMinutesSeconds.c
// Convert a given integer into hours, minutes, and seconds.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int amount, hours, minutes, seconds;
	printf("Please enter an integer to convert: ");
	scanf("%d",&amount);
	hours = amount / 3600;
	amount = amount % 3600;
	minutes = amount / 60;
	amount = amount % 60;
	seconds = amount / 1;
	
	printf("H:M:S	%d:%d:%d\n",hours, minutes, seconds);
	
	return 0;
}
