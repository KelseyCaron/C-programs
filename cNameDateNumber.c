#include <stdio.h>

int main(int argc,char *argv[])
{
	printf("NAME DATE PHONE\n");
	printf("Name:	Kelsey caron\n");
	printf("Date:	April 16, 2019\n");
	printf("Numb:	555-123-4567\n");
	
	char name[] = "Kelsey Caron";
	char date[] = "April 16, 2019";
	char number[] = "555-123-4567";
	printf("Variable Name:	%s\n",name);
	printf("Variable Date:	%s\n",date);
	printf("Variable Numb:	%s\n",number);
	return 0;
}
