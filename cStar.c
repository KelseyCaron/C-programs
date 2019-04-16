#include <stdio.h>

int main(int argc,char *argv[])
{
	printf("C-STAR PROGRAM\n");
	for(int i = 0; i < 9; i++)
	{
		if(i == 0 || i == 8)
		{
			printf("   ######\n");
		}
		else if(i == 1 || i == 7)
		{
			printf(" ##      ##\n");
		}
		else if(i > 1 && i < 7)
		{
			printf("#\n");
		}
	}
	
	return 0;
}
