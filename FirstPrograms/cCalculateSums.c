#include <stdio.h>

int main(int argc,char * argv[])
{
	int count, total, integer;
	count = 0;
	integer = 0;
	total = 0;
	printf("Enter the number of integers you want to add: ");
	scanf("%d",&count);
	
	for (int i = 0; i < count; i++)
	{
		printf("Enter integer [%d]: ",i + 1);
		scanf("%d",&integer);
		total = total + integer;
	}
	printf("Total = %d\n",total);
	return 0;
}
