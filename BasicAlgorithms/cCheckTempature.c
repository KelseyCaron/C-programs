// Program: cCheckTempature.c
// Write a C program that reads two tempatures and checks
// to see if one tempature is less than 0 and the other is greater than 100.
// Return false if this condition is not met. 
#include <stdio.h>

double GetTemp();
bool CheckTempatures(double temp1,double temp2);
void PrintResult(bool checkTemp);

int main(int argc,char *argv[])
{
	double temp1, temp2;
	bool checkTemp;

	temp1 = GetTemp();
	temp2 = GetTemp();
	
	checkTemp = CheckTempatures(temp1,temp2);
	
	PrintResult(checkTemp);

	return 0;
}

double GetTemp()
{
	double temp;

	printf("Please enter tempature: ");
	scanf("%lf",&temp);
	
	return temp;
}

bool CheckTempatures(double temp1,double temp2)
{
	
	if((temp1 < 0 && temp2 > 100) || (temp1 > 100 && temp2 < 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void PrintResult(bool checkTemp)
{
	if(checkTemp)
	{
		printf("Tempature check is True(%d).\n",checkTemp);
	}
	else
	{
		printf("Tempature check is False(%d).\n",checkTemp);
	}
}
