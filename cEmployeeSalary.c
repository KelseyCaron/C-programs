#include <stdio.h>

int main(int argc,char *argv[])
{
	char employeeID[10];
	double salary, hours, total;
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s",&employeeID);
	printf("Input the working hours: ");
	scanf("%lf",&hours);
	printf("Salary amount per hour: ");
	scanf("%lf",&salary);
	total = salary * hours;
	printf("Employee ID = %s\n",employeeID);
	printf("Salary = CAN$%.2f\n",total);
	return 0;
}
