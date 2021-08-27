#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };//{}는 초기화 할때만 가능, 배열의 크기를 변수로 선언할 수 없음
	// 배열의 시작주소값을 의미
	printf("%p\n", arr);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
}