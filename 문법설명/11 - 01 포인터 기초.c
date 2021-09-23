#include <stdio.h>

void main(void)
{
	int num = 3;
	// ptr이란 포인터 변수를 만들어서 num을 가리킴
	int* ptr = &num;
	printf("num안에 들어있는 값 %d\n", num);
	printf("num의 메모리 주소값 %p\n", &num);	// %p = 16진수
	printf("ptr안에 들어있는 값 %p\n", ptr);
	printf("ptr안에 메모리 주소값 %p\n", &ptr);
}