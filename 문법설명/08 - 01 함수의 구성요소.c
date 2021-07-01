#include <stdio.h>

double sum(int num1, int num2)
{
	return num1 + num2 + 0.14;
}

void main(void)
{
	int a = 1, b = 2;
	double c;
	c = sum(1, 5);
	printf("cÀÇ °ªÀº %lf\n",c);
}