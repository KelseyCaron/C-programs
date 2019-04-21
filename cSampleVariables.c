#include <stdio.h>

int main()
{
	int a = 123, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char  c = 'W';
	unsigned long ux = 2541567890;

	printf("Sample Variables\n");
	printf("int a = %d\n",a);
	printf("long ax = %ld\n",ax);
	printf("short s = %d\n",s);
	printf("float x = %f\n",x);
	printf("double dx = %lf\n",dx);
	printf("char c = %c\n",c);
	printf("unsigned long ux =%lu\n\n",ux);

	printf("a + c = %d\n",a + c);
	printf("x + c = %f\n",x + c);
	printf("dx + x = %lf\n",dx + x);
	printf("dx + ax = %ld\n",((int)dx) + ax);
	printf("a + x = %f\n",a + x);
	printf("s + c = %hd\n",s + b);
	printf("ax + c = %d\n",ax + c);
	printf("ax + ux = %lu\n",ax + ux);
	return 0;
}