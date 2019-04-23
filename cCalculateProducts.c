#include <stdio.h>

int main(int argc,char * argv[])
{
	int total, integer, count;
	total = 1;
	integer = 0;
	count = 0;
	printf("Enter the number of integers to multiply: ");
	scanf("%d",&count);
	for(int i = 0; i < count; i++)
	{
		printf("Enter integer [%d]: ",i + 1);
		scanf("%d",&integer);
		total = total * integer;
	}
	printf("The total is: %d\n",total);
	return 0;
}
