#include <stdio.h>

int main(int argc,char *argv[])
{
	int integerOne, integerTwo, integerThree;
	printf("Input the first integer: ");
	scanf("%d",&integerOne);
	printf("Input the second integer: ");
	scanf("%d",&integerTwo);
	printf("Input the third integer: ");
	scanf("%d",&integerThree);
	if(integerOne > integerTwo && integerOne > integerThree)
	{
		printf("The max integer is: %d\n",integerOne);
	}
	else if( integerTwo > integerThree && integerTwo > integerOne)
	{
		printf("The max integer is: %d\n",integerTwo);
	}
	else if(integerThree > integerOne && integerThree > integerTwo)
	{
		printf("The max integer is: %d\n",integerThree);
	}
	
	return 0;
}
