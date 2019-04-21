#include <stdio.h>

int main(int argc,char *argv[])
{
	int length, width;
	printf("Perimeter and Area of a rectangle\n");
	printf("Please enter a length: ");
	scanf("%d",&length);
	printf("Please enter a Width: ");
	scanf("%d",&width);
	printf("%d\n", length);
	printf("%d\n",width);
	printf("The Perimeter of the Rectangle is: %d\n", length * 2 + width * 2);
	printf("The Area of the Rectangle is: %d\n", length * width);
	
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < width; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}