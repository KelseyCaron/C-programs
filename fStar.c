#include <unistd.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
	printf("F-STAR PROGRAM\n");

	for(int i = 0; i < 7; i++)
	{
		if(i == 0)
		{
			printf("######\n");
		}
		else if(i == 3)
		{
			printf("#####\n");
		}
		else if(i == 1 || i == 2 || i > 3)
		{
			printf("#\n");
		}
		
	}
	
	return 0;
}
