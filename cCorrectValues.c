// Program: cCorrectValues.c
// Write a C program that accepts 4 integers p,q,r,s 
// from the user where r and s are positive and p is even.
// If p is greater than r and s is greater than p and if
// the sum of r and s is greater than the sum of p and q
// print "correct values", otherwise print "wrong values".

#include <stdio.h>

int main(int argc,char *argv[])
{
	int p, r, q, s;
	printf("Input p: ");
	scanf("%d",&p);
	printf("Input q: ");
	scanf("%d",&q);
	printf("Input r: ");
	scanf("%d",&r);
	printf("Input s: ");
	scanf("%d",&s);

	if(r > 0 && s > 0 && p % 2 == 0 && q > r && s > p && r + s > p + q)
	{
		printf("Correct Values\n");
	}
	else
	{
		printf("Wrong Values\n");
	}

	return 0;
}
