// Program: cSortIntegers.c
// Write a C program that reads three integers and sorts the values 
// in ascending order.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num[3], temp;

	for(int i = 0; i < 3; i++)
	{
		printf("Please enter integer[%d]: ", i + 1);
		scanf("%d",&num[i]);
	}

	printf("Before Sort: %d,%d,%d\n",num[0],num[1],num[2]);
	
	for(int i = 0; i < 3; i++)
	{
		if(i < 2)
		{
			for(int j = i; j < 3; j++)
			{
				if(num[i] > num[j])
				{
					temp = num[j];
					num[j] = num[i];
					num[i] = temp;
				}
			}
		}
	}
	
	printf("After Sort: %d,%d,%d\n",num[0],num[1],num[2]);
	
	return 0;
}
