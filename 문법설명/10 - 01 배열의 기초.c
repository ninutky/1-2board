#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };//{}는 초기화 할때만 가능, 배열의 크기를 변수로 선언할 수 없음
	// 배열의 시작주소값을 의미
	printf("%p\n", arr);

	// 배열 내부 각각의 값을 출력
	for (int i = 0; i < 4; i++)
	printf("%d\n", arr[i]);
}