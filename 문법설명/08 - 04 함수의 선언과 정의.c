#include <stdio.h>

// 함수의 선언 (declaration)
int sum(int a, int b);
int sum2(int a, int b);

void main(void)
{
	int c = 3;
	int d = 4;
	int aaaaa = sum(c, d);	// 호출
	printf("%d", aaaaa);
}

// 함수의 정의 (definition)
int sum(int a, int b)
{
	return sum2(a, b);
}

int sum2(int a, int b)
{
	return a * b;
}