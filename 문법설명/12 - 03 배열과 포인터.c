#include <stdio.h>
void main(void)
{
	int arr[4] = { 10,20,30,40 };
	char str[4] = "cut";	//null문자 포함돼서 4라고 쳤는데 3개 나옴

	//0번째 공간의 주소
	printf("arr 0번째 공간의 주소\n");
	printf("&arr[0]	: %p\n", &arr[0]);
	printf("arr	: %p\n\n", arr);	//배열의 이름은 시작주소값을 찍음

	//0번째 공간의 요소(element)값
	printf("arr 0번째 공간의 요소(element)값\n");
	printf("arr[0]	: %d\n", arr[0]);
	printf("*arr	: %d\n\n", *arr);

	//1번째 공간의 주소 (0번째 공간의 주소와 4byte차이)
	printf("arr 1번째 공간의 주소\n");
	printf("&arr[1] : %p\n", &arr[1]);
	printf("arr+1	: %p\n\n", arr + 1);

	//1번째 공간의 요소(element)값
	printf("arr 1번째 공간의 요소(element)값\n");
	printf("arr[1]	: %d\n", arr[1]);
	printf("*(arr+1): %d\n\n\n", *(arr + 1));


	//0번째 공간의 주소
	printf("str 0번째 공간의 주소\n");
	printf("&str[0]	: %p\n", &str[0]);
	printf("str	: %p\n\n", str);

	//0번째 공간의 요소(element)값
	printf("str 0번째 공간의 요소(element)값\n");
	printf("*str	: %c\n\n", *str);

	//1번째 공간의 주소
	printf("str 1번째 공간의 주소\n");
	printf("&str[1]	: %p\n", &str[1]);
	printf("str+1	: %p\n\n", str + 1);

	// int를 가르키는 포인터에 +1을 하면 4바이트 차이가 남
} 
//arr[1]과 *(arr+1)과 *&arr[1]은 같다