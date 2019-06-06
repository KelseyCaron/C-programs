#include <stdio.h>
#include "MathGameHelperFunctions.h"


//
//Function: int ChooseDifficulty()
//Parameters: None
//Return Type: int
//Purpose:
//	This function will ask the user
// to set the difficulty of the addition game.
// The integer returned from the function is 
// associated with the difficulty (1 = Easy, 2 = Medium,
// 3 = Hard).
//
int ChooseDifficulty()
{
	int difficulty;

	printf("Please enter a difficulty\n\n");
	printf("(1)Easy\n");
	printf("(2)Medium\n");
	printf("(3)Hard\n");
	printf("^-Please enter difficulty number: ");
	scanf("%d",&difficulty);
	printf("\n");
		
	while(difficulty > 3 || difficulty < 1)
	{
		printf("[ERROR]: invalid input\n\n");
		printf("Please enter a difficulty\n\n");
		printf("(1)Easy\n");
		printf("(2)Medium\n");
		printf("(3)Hard\n");
		printf("^-Please enter difficulty number: ");
		scanf("%d",&difficulty);
		printf("\n");
	}

	return difficulty;
}

int ChooseToPlayAgain()
{
	int playAgain;

	printf("Would you like to play another game?\n\n");
	printf("(1)Yes\n");
	printf("(0)No\n");
	printf("^-Please enter the number of the option\n");
	printf("  you wish to select: ");
	scanf("%d",&playAgain);
	printf("\n");

	while(playAgain > 1 || playAgain < 0)
	{
		printf("[ERROR]: invalid input\n\n");
		printf("Would you like to play another game?\n\n");
		printf("(1)Yes\n");
		printf("(0)No\n");
		printf("^-Please enter the number of the option\n");
		printf("  you wish to select: ");
		scanf("%d",&playAgain);
		printf("\n");
	}	

	return playAgain;
}