#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CreateRandomNumber();
int GetGuess(int &attempts);
bool CheckGuess(int guess,int randomNumber,int attempts);

int main(int argc,char *argv[])
{	
	srand(time(NULL));
	
	int randomNumber,guess,attempts;
	bool check;
	
	check = false;
	attempts = 8;
	
	randomNumber = CreateRandomNumber();
	printf("--------------------------------------\n");
	printf("WELCOME TO RANDOM NUMBER GUESSING GAME\n");	
	printf("--------------------------------------\n");
	printf("\n");
	printf("Rules:\n");
	printf("\2(1) - You have 8 attempts to\nguess the correct number.\n");
	printf("\2(2) - The random number range\nis 0 - 100.\n");
	printf("--------------------------------------\n");
	printf("\n");
	
	while(!check)
	{
		
		guess = GetGuess(attempts);
		check = CheckGuess(guess,randomNumber,attempts);
	}
	printf("--------------------------------------\n");
	printf("END OF GAME\n\n");
	return 0;
}

int CreateRandomNumber()
{
	int randomNumber;
	
	randomNumber = (rand() % (100 + 1 - 0) + 0);
	
	return randomNumber;
}

int GetGuess(int &attempts)
{
	int guess;
	
	attempts--;
		
	printf("Please enter a guess(0-100): ");
	scanf("%d",&guess);
	
	return guess;
}

bool CheckGuess(int guess,int randomNumber,int attempts)
{
	if(guess == randomNumber)
	{
		printf("You guessed RIGHT!!!\n");
		return true;
	}
	else if(attempts == 0)
	{
		printf("You guessed WRONG!!!\n");
		printf("Out of attempts\n");
		printf("Sorry you lost :(\n\n");
		return true;
	}
	else if(guess > randomNumber)
	{
		printf("You guessed WRONG(randomNumber is lower)!!!\n");
		return false;
	}
	else if(guess < randomNumber)
	{
		printf("You guessed WRONG(randomNumber is higher)!!!\n");
		return false;
	}
}


