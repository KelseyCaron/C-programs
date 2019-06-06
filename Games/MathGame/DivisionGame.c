#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "MathGameHelperFunctions.h"
#include "DivisionGame.h"

//
//Function: int DivisionGame()
//Parameters: None
//Return Type: int
//Purpose:
//	Main body that handles all calling
// functions related to DivisionGame. Called
// from Main function in cMathGame.c. The
// function returns an integer indicating 
// whether the user wants to play again
// or exit the program.
//
int DivisionGame()
{
	srand(time(NULL));
	int difficulty, playAgain;
	difficulty = ChooseDifficulty();

	switch(difficulty)
	{
		case 1:
			DivisionEasyMode();
			break;
	
		case 2:
			DivisionMediumMode();
			break;
		
		case 3: 
			DivisionHardMode();
			break;
	}

	playAgain = ChooseToPlayAgain();

	return playAgain;
}

//
//Function: void DivisionEasyMode()
//Parameters: None
//Return Type: void
//Purpose:
//	Easy mode for division game. Generates
// ten random questions to test the user's basic division    
// skills. A score will be printed at the end of function.
//
void DivisionEasyMode()
{
	int x, y, result, total, count, guess;
	
	total = 0;
	count = 10;
	
	for(int i = 0; i < count; i++)
	{
		x = rand() % (20 + 1 - 0) + 0;
		y = rand() % (10 + 1 - 0) + 0;
		
		while(y == 0)
		{
			y = rand() % (10 + 1 - 0) + 0;
		}

		while(x % y != 0)
		{
					x = rand() % (20 + 1 - 0) + 0;
		  			y = rand() % (10 + 1 - 0) + 0;

		  			while(y == 0)
		  			{
		  				y = rand() % (10 + 1 - 0) + 0;
		  			}
		}

		result = x / y;

		printf("Question %d/%d\n",i+1,count);
		printf("%d / %d = ",x,y);
		scanf("%d",&guess);
		
		if(guess == result)
		{
			printf("Correct!\n\n");
			total++;
		}
		else
		{
			printf("Wrong!\n");
			printf("Answer: %d\n\n",result);
		}
	}
	
	printf("\nScore: %d/%d = %.2lf = %%%.2lf\n\n",total,count,(double)total/(double)count,(double)total/(double)count * 100);
}

//
//Function: void DivisionMediumMode()
//Parameters: None
//Return Type: void
//Purpose:
//	Medium mode for division game. Generates
// ten random questions to test the users division 
// skills. A score will be printed at the end of function.
//
void DivisionMediumMode()
{
	int x, y, result, total, count, guess;
	
	total = 0;
	count = 10;
	
	for(int i = 0; i < count; i++)
	{
		x = rand() % (200 + 1 - 0) + 0;
		y = rand() % (200 + 1 - 0) + 0;

		while(y == 0)
		{
			y = rand() % (200 + 1 - 0) + 0;
		}

		while(x % y != 0)
		{
					x = rand() % (200 + 1 - 0) + 0;
		  			y = rand() % (200 + 1 - 0) + 0;

		  			while(y == 0)
		  			{
		  				y = rand() % (200 + 1 - 0) + 0;
		  			}
		}
		
		result = x / y;

		printf("Question %d/%d\n",i+1,count);
		printf("%d / %d = ",x,y);
		scanf("%d",&guess);
		
		if(guess == result)
		{
			printf("Correct!\n\n");
			total++;
		}
		else
		{
			printf("Wrong!\n");
			printf("Answer: %d\n\n",result);
		}
	}
	
	printf("\nScore: %d/%d = %.2lf = %%%.2lf\n\n",total,count,(double)total/(double)count,(double)total/(double)count * 100);

}

//
//Function: void DivisionHardMode()
//Parameters: None
//Return Type: void
//Purpose:
//	Hard mode for division game. Generates
// ten random questions to test the users division 
// skills. Three different questions can be asked
// (i.e., find x, find y, x / y = ?).
// A score will be printed at the end of function.
//
void DivisionHardMode()
{
	int x, y, result, total, count, guess, questionType;
	
	total = 0;
	count = 10;
	
	for(int i = 0; i < count; i++)
	{
		questionType = rand() % (3 + 1 - 1) + 1;
		
		x = rand() % (100 + 1 - 0) + 0;
		y = rand() % (100 + 1 - 0) + 0;
		
		while(y == 0)
		{
			y = rand() % (200 + 1 - 0) + 0;
		}

		while(x % y != 0)
		{
					x = rand() % (200 + 1 - 0) + 0;
		  			y = rand() % (200 + 1 - 0) + 0;

		  			while(y == 0)
		  			{
		  				y = rand() % (200 + 1 - 0) + 0;
		  			}
		}

		result = x / y;

		switch(questionType)
		{	
			case 1:
				printf("Question %d/%d\n",i+1,count);
				printf("%d / %d = ",x,y);
				scanf("%d",&guess);
		
				if(guess == result)
				{
					printf("Correct!\n\n");
					total++;
				}
				else
				{
					printf("Wrong!\n");
					printf("Answer: %d\n\n",result);
				}

				break;
			
			case 2:
				printf("Question %d/%d\n",i+1,count);
				printf("x / %d = %d\n",y,result);
				printf("What is x equal to?\n");
				printf("x = ");
				scanf("%d",&guess);
				
				if(guess == x)
				{
					printf("Correct!\n\n");
					total++;
				}
				else
				{
					printf("Wrong!\n");
					printf("Answer: %d\n\n",x);
				}
		
				break;

			case 3:
				printf("Question %d/%d\n",i+1,count);
				printf("%d / y = %d\n",x,result);
				printf("What is y equal to?\n");
				printf("y = ");
				scanf("%d",&guess);

				if(guess == y)
				{
					printf("Correct!\n\n");
					total++;
				}
				else
				{
					printf("Wrong!\n");
					printf("Answer: %d\n\n",y);
				}
			
				break;				
		}
	}

	printf("\nScore: %d/%d = %.2lf = %%%.2lf\n\n",total,count,(double)total/(double)count,(double)total/(double)count * 100);
}