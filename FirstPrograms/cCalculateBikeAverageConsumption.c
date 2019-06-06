//C program to calculate a bike's average consumption from the given
// total distance (inteer value) traveled (in km) and spent fuel
// (in liters, floating number - decimal point).
#include <stdio.h>

int main(int argc,char *argv[])
{
	int distance;
	double liters, total;
	printf("Input total distance in km: ");
	scanf("%d",&distance);
	printf("Input total fuel spent in liters: ");
	scanf("%lf",&liters);
	total = distance / liters;
	printf("Average consumption = %.2f km/liter\n",total);
	
	return 0;
}
