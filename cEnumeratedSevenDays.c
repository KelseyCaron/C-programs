// Program: cEnumeratedSevenDays.c
// Write a C program that uses the enumerated data
// type for the seven days of the week. 
#include <stdio.h>

int main(int argc,char *argv[])
{
	enum daysOfWeek {sunday = 1,monday,teusday,wednesday,
			thursday,friday,saturday};
	
	printf("Seven days of the week\n");
	printf("Sunday	  = %d\n",sunday);
	printf("Monday	  = %d\n",monday);
	printf("Teusday   = %d\n",teusday);
	printf("Wednesday = %d\n",wednesday);
	printf("Thursday  = %d\n",thursday);
	printf("Friday	  = %d\n",friday);
	printf("Saturday  = %d\n",saturday);

	return 0;	
}
