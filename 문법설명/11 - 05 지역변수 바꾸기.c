#include <stdio.h>

void changeA(int num);	// int를 받음

void main(void)
{
	int A = 3;	// 구역이 다름
	printf("바꾸기 전 %d \n", A);
	// 변수 A를 넘겨주는 것이 아닌 A안에 들어있는 3을 num에게 넘겨준다
	changeA(A);	// argument
	printf("바꾸기 후 %d \n", A);
}

void changeA(int num)
{
	num = 5;	// num에 5 대입
}