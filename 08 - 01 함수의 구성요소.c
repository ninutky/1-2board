#include <stdio.h>

int sum(int num1, int num2)
{
	return num1 + num2;		// 1+5
}

void main(void)
{
	int a = 1, b = 2;
	int c;
	c = sum(1, 5);			// num1에 1, num2에 5를 집어 넣음
	printf("c의 값은 %d\n",c);
}