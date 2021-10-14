#include <stdio.h>

void Swap(int a, int b);	// int를 받음

void main(void)
{
	int a = 10, b = 20;
	printf("바꾸기 전 a:%d b:%d \n", a, b);
	Swap(&a, &b);
	printf("바꾸기 후 a:%d b:%d \n", a, b);
}

void Swap(int *a, int *b)	// a가 가리키는 값, b가 가리키는 값을 불러옴
{
	int temp;	// 공간을 만들어줌
	temp = *a;	// 공간에 a가 가리키는 값을 넣음
	*a = *b;	// a가 가리키는 값에 b가 가리키는 값을 넣음
	*b = temp;	// b가 가리키는 값에 temp안에 있는 값을 넣음
}