// Program: cMonths2.c
// Write a C program that takes an integer value and 
// prints the month associated with the value. Complete 
// this using a switch case control mechanism.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int month;
	
	printf("Please enter the number of a month: ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : 
			printf("[%d]:January\n",month);
			break;
		case 2 :
			printf("[%d]:February\n",month);
			break;
		case 3 :
			printf("[%d]:March\n",month);
			break;
		case 4 :
			printf("[%d]:April\n",month);
			break;
		case 5 :
			printf("[%d]:May\n",month);
			break;
		case 6 :
			printf("[%d]:June\n",month);
			break;
		case 7 :
			printf("[%d]:July\n",month);
			break;
		case 8 :
			printf("[%d]:August\n",month);
			break;
		case 9 : 
			printf("[%d]:September\n",month);
			break;
		case 10 :
			printf("[%d]:October\n",month);
			break;
		case 11 :
			printf("[%d]:November\n",month);
			break;
		case 12 :
			printf("[%d]:December\n",month);
			break;
		default :
			printf("Invalid value\n");
	}

	return 0;
}
