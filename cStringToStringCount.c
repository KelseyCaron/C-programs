// Program: cStringToStringCount.c
// Write a C program that recieves a string from the user
// and outputs the string along with the length of the string
#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 30

int main(int argc, char *argv[])
{
	char str[MAX_LIMIT];
	int length;	

	printf("Please enter a string of characters: ");
	fgets(str,MAX_LIMIT,stdin);
	
	printf("String Entered = ""%s\n""",str);

	//[Used for analysis] Loop through string array.
	for(int i = 0; i < MAX_LIMIT; i++)
	{	
		printf("str[%d] = %c\n",i,str[i]);
	}
	
	length = strlen(str);
	printf("Length of str = %d\n",length);

	return 0;
}
