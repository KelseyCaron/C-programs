#include <stdio.h>

int main(int argc,char *argv[])
{
	int count, years = 0, months = 0, weeks = 0, days = 0;
	printf("Convert Days\n");
	printf("Enter number of days to convert: ");
	scanf("%d",&count);
	
	while(count > 0)
	{
		if (count - 365 >=0)
		{
		printf("Adding one year\n");
			years = years + 1;
			count = count - 365;
		}	
		else if(count - 7 >= 0)
		{
		printf("Adding week\n");
			weeks = weeks + 1;
			count = count - 7;
		}
		else if(count - 1 >= 0)
		{
		printf("Adding one day\n");
			days = days + 1;
			count = count - 1;
		}
	}
	printf("Years:	%d\n",years);
	printf("Weeks:	%d\n",weeks);
	printf("Days:	%d\n",days);
	return 0;
}
