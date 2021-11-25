#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int arr[4] = { 10,20,30,40 }; //컴파일 시간에 결정
	int count;	//지역변수 (stack 영역에 할당)
	printf("원하는 int공간의 개수를 입력하시오: ");
	count = 4;

	//프로그램이 실행하는 중간에 키보드 입력이 필요함.
	//malloc으로 할당된 메모리 크기는 키보드로 입력한 순간에 결정
	//ptr은 지역변수 (stack에 할당)
	int* ptr = malloc(sizeof(int) * count);
	ptr[0] = 10; ptr[1] = 20; ptr[2] = 30; ptr[3] = 40;

}