    
#include <stdio.h>
#include <unistd.h>
#include <cstring>


int main(int argc,char *argv[])
{
	char cstr1[] = "This is a sample string. Is it working?";
	char delim[] = " ,.-;!?";
	char *token;

	printf("This a program to show C-Strings\n");
	printf("cstr1 before being tokenized: ");
	printf("%s\n",cstr1);
	token = strtok(cstr1, delim);
	printf("%s\n",token);

	while((token = strtok(NULL, delim)) != NULL)
	{
		printf("%s\n",token);
	}

	return 0;
}