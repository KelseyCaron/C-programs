// Program cGuessRandomNumber2.c
// Updated Version of cGuessRandomNumber.c
// Objective:
// 	-Create a number guessing game.
// 	-Let the user pick the number of atttempts.
// 	-Let the user pick the min and max range for the
// 	number they will attempt to guess
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintTitle();
void Setup(int &attempts,int &max,int &min,int &randomNumber);
void Game(int attempts,int max,int min,int randomNumber);

int main(int argc,char *argv[])
{
	srand(time(NULL));
	int attempts, min, max, randomNumber;

	PrintTitle();
	Setup(attempts,max,min,randomNumber);
	Game(attempts,max,min,randomNumber);

	return 0;
}

//Function: PrintTitle()
//Return Type: void
//Parameters: None
//Purpose: Print the Title of the game to the screen
//
void PrintTitle()
{
	printf("------------------------------------\n");
	printf("WELCOME TO THE NUMBER GUESSING GAME!\n");
	printf("------------------------------------\n\n");
	
	return;
}

//Function: Setup(int&, int&, int&, int&)
//Return Type: void
//Parameters: 
//	1. int&
//	2. int&
//	3. int&
//	4. int&
//
//Purpose: Setup the options for the game. This
//	includes number of attempts, range of numbers
//	for the game to choose from and generating a
//	random number.
//
void Setup(int &attempts,int &max,int &min,int &randomNumber)
{
	int temp;
	
	printf("Options:\n");
	printf("(1) How many attempts would you like\n to have?\n\n");
	printf("Attempts: ");
	scanf("%d",&attempts);
	
	printf("(2) What number range would you like?\n\n");
	printf("Minimum: ");
	scanf("%d",&min);
	printf("\n\nMaximum: ");
	scanf("%d",&max);
	
	if(attempts < 0)
	{
		attempts = attempts * -1;
	}
	
	if(min < 0)
	{
		min = min * -1;
	}
	
	if(max < 0)
	{
		max = max * -1;
	}
	
	if(min > max)
	{
		temp = min;
		min = max;
		max = temp;
	}
	
	randomNumber = (rand() % (max + 1 - min) + min);
	
	return;
}

//Function: Game(int,int,int,int)
//Return Type: void
//Parameters:
//	1. int
//	2. int
//	3. int
//	4. int
//
//Purpose: Main function that the game runs in. This 
//	is where the user will guess the number that
//	was generated in the Setup(). It will notify
//	the user with how many guesses they have left
//	as well as whether the guess is lower or higher
//	than the number they are looking to find.
//
void Game(int attempts,int max,int min,int randomNumber)
{
	int guess;
	
	printf("\n----------------------------------\n");
	printf("*Quick Recap*\n\n");

	printf("Attempts = %d\n",attempts);
	printf("Range = (%d - %d)\n",min,max);
	printf("----------------------------------\n\n");
	
	while(attempts > 0)
	{
		printf("Attempts left: %d\n",attempts);
		printf("Please enter a guess: ");
		scanf("%d",&guess);
		
		attempts--;
		
		if(guess == randomNumber)
		{
			printf("Correct! You Win!\n");
			printf("The number was = %d\n",randomNumber);
			return;
		}
		else if(guess < randomNumber)
		{
			printf("%d is too low\n\n",guess);
		}
		else if(guess > randomNumber)
		{
			printf("%d is too high\n\n",guess);
		}
		
	}
		printf("Out of Attempts. You LOSE!!!!\n");
		printf("The number you were looking for is %d\n",randomNumber);
		printf("Thanks for playing!\n");
	return;
}



