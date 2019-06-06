#include <stdio.h>
#include <stdlib.h>
#include "AdditionGame.h"
#include "SubtractionGame.h"
#include "MultiplicationGame.h"
#include "DivisionGame.h"
#include "MathGameHelperFunctions.h"



void PrintTitle();
int ChooseGame();
int RunGame(int gameMode);

int main(int argc,char *argv[])
{
	int gameMode;
	bool power;
	power = 1;

	while(power != 0)
	{
		PrintTitle();
		gameMode = ChooseGame();
		power = RunGame(gameMode);
	}

	return 0;
}

//
//Function: PrintTitle()
//Parameters: None
//Return type: void
//Purpose:
//	Prints out the title screen of the game.
//
void PrintTitle()
{
	system("clear");
	printf("***************************************************\n");
	printf("***************************************************\n");
	printf("***********     THE GREAT MATH GAME    ************\n");
	printf("***************************************************\n");
	printf("***************************************************\n\n");

	return;
}

//
//Function: ChooseGame()
//Parameters: None
//Return type: int
//Purpose:
//	Prints a list of options for the user.
// The user will enter the number that corresponds
// to the math game they would like to play. The
// function will return the integer that is entered
// by the user. The function will only allow 
// integers 0, 1, 2, 3, 4 to be entered.
int ChooseGame()
{
	int gameMode;

	printf("Please select which game you would like to play\n\n");
	printf("(1)Addition\n");
	printf("(2)Subtraction\n");
	printf("(3)Multiplication\n");
	printf("(4)Division\n");
	printf("(0)Close Game\n");
	printf("^- Please enter the number of the game you wish\n");
	printf("to play: ");
	scanf("%d",&gameMode);
	printf("\n");
	
	while(gameMode > 4 || gameMode < 0)
	{
		printf("[ERROR]:Invalid input\n\n");
	
		printf("Please select which game you would like to play\n\n");
		printf("(1)Addition\n");
		printf("(2)Subtraction\n");
		printf("(3)Multiplication\n");
		printf("(4)Division\n");
		printf("(0)Close Game\n");
		printf("^- Please enter the number of the game you wish\n");
		printf("to play: ");
		scanf("%d",&gameMode);
		printf("\n");
	}

	return gameMode;
}

//
//Function: RunGame(int GameMode)
//Parameters: (1) int
//Return type: int
//Purpose:
//	Uses the integer parameter
// with a switch-case statement to 
// decide which game function will be called.
// An integer will be returned from the game
// game function which will also be returned
// as an integer from RunGame(). The integer 
// return value will indicate whether the 
// player wants to play another game or exit
// the program.
//
int RunGame(int gameMode)
{
	system("clear");
	switch(gameMode)
	{
		case 1:
			printf("ADDITION GAME\n\n");
			return AdditionGame();
			break;
	
		case 2:
			printf("SUBTRACTION GAME\n\n");
			return SubtractionGame();
			break;
		
		case 3:
			printf("Starting Multiplication Game\n\n");
			return MultiplicationGame();
			break;
		
		case 4:
			printf("Starting Division Game\n\n");
			return DivisionGame();
			break;
		
		case 0:
			printf("Closing Math Game\n\n");
			return 0;
	}
	
	return 1;
}
