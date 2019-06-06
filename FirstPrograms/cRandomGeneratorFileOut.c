// Program: cRandomGeneratorFileOut.c
// Write a C program that generates N random numbers. The range
// of the random numbers should be (-.5,.5). Write the random numbers to a file
// called "randomNumbers.txt
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char *argv[])
{
	int num, numberOfRandoms;
	double generatedNumber;
	char str;
	FILE *fptr;
	
	srand(time(NULL));	

	fptr = fopen("randomNumbers.txt","w");
	
	if(fptr == NULL)
	{
		printf("[Error]: Opening File\n");
		exit(1);
	}

	printf("Please enter how many random numbers you want to create for file: ");
	scanf("%d",&numberOfRandoms);
	
	for(int i = 0; i < numberOfRandoms; i++)
	{
		generatedNumber =  (rand() % 2001 - 1001)/ 2.e3;
		fprintf(fptr,"[%d]: %.5f\n",i + 1,generatedNumber);
	}

	fclose(fptr);
	
	fptr = fopen("randomNumbers.txt","r");

	if(fptr == NULL)
	{
		printf("[Error]: Opening file to read form\n");
		exit(1);
	}
	
	str = fgetc(fptr);
	
	while(str != EOF)
	{
		printf("%c",str);
		str = fgetc(fptr);
	}
	
	fclose(fptr);

	return 0;
}
