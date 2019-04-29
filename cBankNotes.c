//Program: cBankNoes.c
// Read an integer amount and 
// break the amount into smalles
// number of bank notes.
#include <stdio.h>

int main(int argc,char *argv[])
{
	int amount, hundreds, fifties,
		twenties, tens, fives,
		twos, ones;
	
	printf("Please enter amount to break into bank notes: ");
	scanf("%d",&amount);

	hundreds = amount / 100;
	amount = amount % 100;
	fifties = amount / 50;
	amount = amount % 50;
	twenties = amount / 20;
	amount = amount % 20;
	tens = amount / 10;
	amount = amount % 10;
	fives = amount / 5;
	amount = amount % 5;
	twos = amount / 2;
	amount = amount % 2;
	ones = amount / 1;

	printf("Hundreds:	%d\n",hundreds);
	printf("Fifties:	%d\n",fifties);
	printf("Twenties:	%d\n",twenties);
	printf("Tens:		%d\n",tens);
	printf("Fives:		%d\n",fives);
	printf("twos:		%d\n",twos);
	printf("ones:		%d\n",ones);

	return 0;
}
