#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "MathGameHelperFunctions.h"
#include "MultiplicationGame.h"

//
//Function: int MultiplicationGame()
//Parameters: None
//Return Type: int
//Purpose:
//	Main body that handles all calling
// functions related to MultiplicationGame. Called
// from Main function in cMathGame.c. The
// function returns an integer indicating 
// whether the user wants to play again
// or exit the program.
//
int MultiplicationGame()
{
	srand(time(NULL));
	int difficulty, playAgain;
	difficulty = ChooseDifficulty();

	switch(difficulty)
	{
		case 1:
			MultiplicationEasyMode();
			break;
	
		case 2:
			MultiplicationMediumMode();
			break;
		
		case 3: 
			MultiplicationHardMode();
			break;
	}

	playAgain = ChooseToPlayAgain();

	return playAgain;
}

//
//Function: void MultiplicationEasyMode()
//Parameters: None
//Return Type: void
//Purpose:
//	Easy mode for multiplication game. Generates
// ten random questions to test the user's basic multiplication 
// skills. A score will be printed at the end of function.
//
void MultiplicationEasyMode()
{
	int x, y, result, total, count, guess;
	
	total = 0;
	count = 10;
	
	for(int i = 0; i < count; i++)
	{
		x = rand() % (10 + 1 - 0) + 0;
		y = rand() % (10 + 1 - 0) + 0;
		
		result = x * y;

		printf("Question %d/%d\n",i+1,count);
		printf("%d * %d = ",x,y);
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
//Function: void MultiplicationMediumMode()
//Parameters: None
//Return Type: void
//Purpose:
//	Medium mode for multiplication game. Generates
// ten random questions to test the users multiplication skills 
// skills. A score will be printed at the end of function.
//
void MultiplicationMediumMode()
{
	int x, y, result, total, count, guess;
	
	total = 0;
	count = 10;
	
	for(int i = 0; i < count; i++)
	{
		x = rand() % (12 + 1 - 0) + 0;
		y = rand() % (12 + 1 - 0) + 0;
		
		result = x * y;

		printf("Question %d/%d\n",i+1,count);
		printf("%d * %d = ",x,y);
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
//Function: void MultiplicationHardMode()
//Parameters: None
//Return Type: void
//Purpose:
//	Hard mode for multiplication game. Generates
// ten random questions to test the users multiplication 
// skills. Three different questions can be asked
// (i.e., find x, find y, x * y = ?).
// A score will be printed at the end of function.
//
void MultiplicationHardMode()
{
	int x, y, result, total, count, guess, questionType;
	
	total = 0;
	count = 10;
	
	for(int i = 0; i < count; i++)
	{
		questionType = rand() % (3 + 1 - 1) + 1;
		
		x = rand() % (12 + 1 - 0) + 0;
		y = rand() % (12 + 1 - 0) + 0;
		
		result = x * y;

		switch(questionType)
		{	
			case 1:
				printf("Question %d/%d\n",i+1,count);
				printf("%d * %d = ",x,y);
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
				printf("x * %d = %d\n",y,result);
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
				printf("%d * y = %d\n",x,result);
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