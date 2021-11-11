#include <stdio.h>

void print(int* ptr); //포인터로 넘김(배열을 포인터로 넘김)
void erase(int ptr[]);	// int* ptr과 int ptr[]는 같음.

void main(void)
{
	int arr[4] = {10,20,30,40};
	erase(arr);
	print(arr);
}

// 배열의 모든 요소를 출려
void print(int ptr[])	//(그래서 []을 권장)
{
	// i < 4는 배열의 크기가 4인 것만 가능함(구조적 결함)
	for (int i = 0; i < 4; i++) {
		//printf("%d", *(ptr+i) )
		printf("%d\n",ptr[i] );
	}
}

void erase(int ptr[])
{
	for (int i = 0; i < 4; i++) {
		ptr[i] = 0;
	}
}