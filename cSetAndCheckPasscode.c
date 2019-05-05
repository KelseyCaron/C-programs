// Program: cSetAndCheckPasscode.c
// Write a C program that asks the user to set a passcode and then
// ask them to enter thier passcode and check if it matches
#include <stdio.h>

int main(int argc,char *argv[])
{
	int num1, num2;
	bool passcode = false;
	
	printf("Please enter an integer as your passcode: ");
	scanf("%d",&num1);
	
	while(passcode == false)
	{
		printf("Please enter your passcode: ");
		scanf("%d",&num2);
	
		if(num2 == num1)
		{
			printf("Passcode is correct!\n");
			passcode = true;
		}
		else
		{
			printf("Incorrect passcode!\n");
			passcode = false;
		}
	}
	
	return 0;	
}
