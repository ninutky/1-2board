#include <stdio.h>

// 전역변수
int val = 25;

void main(void)
{
	int val = 12;
	// 전역변수와 전역변수의 이름이 같은 경우, 지역변수가 우선
	printf("%d", val); // 지역변수 출력 (12)
}