//
// Program: cAddingGame.c
// A math game created to test ones addition skills.
// This game has multiple modes that the user can choose
// including Easy, Meduim, and Hard.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintTitle();
int ChooseSetting();
void EasyGame();
void MediumGame();
void HardGame();
void Credits();
void TurnOffGame();

int main(int argc,char *argv[])
{
	srand(time(NULL)); 

	int  setting;
	bool gameOn;
	
	gameOn = true;

	PrintTitle();
	
	while(gameOn == true)
	{
		setting = ChooseSetting();
		switch(setting)
		{
			case 1:
				EasyGame();
				break;
			case 2:
				MediumGame();
				break;
			case 3:
				HardGame();
				break;
			case 4:
				Credits();
				break;
			case 5:
				TurnOffGame();
				gameOn = false;
				break;
		}
	}		
	
	return 0;
}

//
//Function: PrintTitle()
//Parameters: N/A
//Return type: void
//Purpose: 
//	Prints the title of the program
//
void PrintTitle()
{
	printf("------------------------------------------\n");
	printf("         MATH GAME FOR ADDITION\n");
	printf("------------------------------------------\n\n");
	
	return;
}

//
//Function: ChooseSetting()
//Parameters: None
//Return type: int
//Purpose:
//	Asks the user to choose an option from
//	a list of possible actions. Returns the 
//	number that is entered by the user.
//
int ChooseSetting()
{ 
	int setting;

	printf("Please Pick from the following options:\n");
	printf("(1)Easy game\n");
	printf("(2)Medium game\n");
	printf("(3)Hard game\n");
	printf("(4)Credits\n");
	printf("(5)Turn off game\n\n");
	printf("^-Please enter a number from the list above\n");
	printf("Number: ");
	scanf("%d",&setting);
	
	while(setting > 5 || setting < 1)
	{
		printf("\nPlease enter an option (1,2,3,4,5)\n");
		printf("Number: ");
		scanf("%d",&setting);
	}
	
	switch(setting)
	{
		case 1:
			printf("\nYou have chosen to play on Easy mode.\n\n");
			break;
		case 2:
			printf("\nYou have chosen to play on Medium mode.\n\n");
			break;
		case 3:
			printf("\nYou have chosen to play on Hard mode.\n\n");
			break;
		case 4:
			printf("\n****************CREDITS******************\n\n");
			break;
	}			
	
	return setting;	
}

//
//Function: EasyGame()
//Parameters: None
//Return type: void
//Purpose:
//	Runs the Easy game mode. The function generates 
//	two integers in the range of (0 - 10). The user
//	will enter what the sum of the two integers is.
//	If the user is wrong the program will print the
//	correct answer for the user.
//
void EasyGame()
{
	int count, x, y, temp, points, result, guess;
	double total;

	count = 10;
	points = 0;
	
	for(int i = 0; i < count; i++)
	{
		x = rand() % (10 + 1 - 0) + 0;
		y = rand() % (10 + 1 - 0) + 0;
		
		if( x > y)
		{
			temp = y;
			y = x;
			x = temp;
		}

		result = x + y;
		
		printf("Question (%d)\n",i + 1);
		printf("----------------------\n");
		printf("%d + %d = ",x,y);
		scanf("%d",&guess);
		
		if(guess == result)
		{
			points++;
			printf("Correct!\n\n");
		}
		else
		{
			printf("WRONG!\n");
			printf("-> Answer was %d\n\n", x + y);
		}
	}
	
	total = (double)points / (double)count;

	printf("Your score is %d/%d = %.2lf = %%%.2lf\n\n",points,count,total,total * 100);
	
	return;
}

//
//Function: MediumGame()
//Parameters: None
//Return type: void
//Purpose:
//	Runs the Medium game mode. The function generates 
//	two integers in the range of (0 - 100). The user
//	will enter what the sum of the two integers is.
//	If the user is wrong the program will print the
//	correct answer for the user.
//
void MediumGame()
{
	int count, x, y, temp, points, result, guess;
	double total;
	
	count = 10;
	points = 0;
	
	for(int i = 0; i < count; i++)
	{
		x = rand() % (100 + 1 - 0) + 0;
		y = rand() % (100 + 1 - 0) + 0;
		
		if(x > y)
		{
			temp = y;
			y = x;
			x = temp;
		}
		
		result = x + y;
		
		printf("Question (%d)\n",i + 1);
		printf("----------------------\n");
		printf("%d + %d = ",x,y);
		scanf("%d",&guess);
		
		if(guess == result)
		{
			points++;
			printf("Correct!\n\n");
		}
		else
		{
			printf("Wrong!\n");
			printf("-> Answer was %d\n\n",x + y);
		}
	}
	
	total = (double)points / (double)count;
	
	printf("Your score is %d/%d = %.2lf = %%%.2lf\n\n",points,count,total,total * 100);
	
	return;	
}

//
//Function: HardGame()
//Parameters: None
//Return type: void
//Purpose:
//	Runs the Hard game mode. The function generates 
//	two integers in the range of (0 - 100). The user
//	will enter what the sum of the two integers is or
//	what one of the two integers are that make the
//	total sum. If the user is wrong the program will 
//	print the correct answer for the user.
//
void HardGame()
{
	int count, x, y, temp, points, result, guess, pickQuestionType;
	double total;
	
	count = 10;
	points = 0;
	
	for(int i = 0; i < count; i++)
	{
		x = rand() % (100 + 1 - 0) + 0;
		y = rand() % (100 + 1 - 0) + 0;

		pickQuestionType = rand() % (3 + 1 - 1) + 1;
		
		result = x + y;
		
		switch(pickQuestionType)
		{
			case 1:
				printf("Question (%d)\n",i + 1);
				printf("----------------------\n");
				printf("%d + %d = ",x,y);
				scanf("%d",&guess);
		
				if(guess == result)
				{
					points++;
					printf("Correct!\n\n");
				}
				else
				{
					printf("Wrong!\n");
					printf("-> Answer was %d\n\n",x + y);
				}
			
				break;
				
			case 2:
				printf("Question (%d)\n",i + 1);
				printf("----------------------\n");
				printf("%d + y = %d ",x,result);
				printf("What is y equal to?\n");
				printf("y = ");
				scanf("%d",&guess);
		
				if(guess == y)
				{
					points++;
					printf("Correct!\n\n");
				}
				else
				{
					printf("Wrong!\n");
					printf("-> Answer was %d\n\n",y);
				}
			
				break;
			case 3:
				printf("Question (%d)\n",i + 1);
				printf("----------------------\n");
				printf("x + %d = %d",y,result);
				printf("What is x equal to?\n");
				printf("x = ");
				scanf("%d",&guess);
		
				if(guess == x)
				{
					points++;
					printf("Correct!\n\n");
				}
				else
				{
					printf("Wrong!\n");
					printf("-> Answer was %d\n\n",x);
				}
			
				break;
		}		
	}
	
	total = (double)points / (double)count;
	
	printf("Your score is %d/%d = %.2lf = %%%.2lf\n\n",points,count,total,total * 100);
	
	return;	
}

//
//Function: Credits()
//Parameters: None
//Return type: void
//Purpose:
//	Prints credits for the game. Gives credit to the creator
//	and also a message to the user.
//
void Credits()
{
	printf("\n*****************************************\n");
	printf("*****************************************\n");
	printf("*****  CREATED BY KELSEY CARON  *********\n");
	printf("*****  CREATED ON MAY 31, 2019  *********\n");
	printf("*****                           *********\n");
	printf("*****  MESSAGE FROM THE CREATOR *********\n");
	printf("*---------------------------------------*\n");
	printf("*****    ADDING IS IMPORTANT    *********\n");
	printf("*****       KEEP LEARNING       *********\n");
	printf("*****             &             *********\n");
	printf("*****        KEEP ADDING        *********\n");
	printf("*****************************************\n");
	printf("*****************************************\n\n");
	
	return;
}

//
//Function: TurnOffGame()
//Parameters: None
//Return type: void
//Purpose:
//	Turns off the game and Prints a message letting
//	the user know that the game is turning off.
//
void TurnOffGame()
{
	printf("*****************************************\n");
	printf("*****************************************\n");
	printf("******     POWERING DOWN GAME   *********\n");
	printf("******				*********\n");
	printf("******         GOOD BYE :)      *********\n");
	printf("******                          *********\n");
	printf("*****************************************\n");
	printf("*****************************************\n\n");
	
	return;	
}
