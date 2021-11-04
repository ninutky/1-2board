#include <stdio.h>
void main(void)
{
	int arr[4];
	//0번째 공간의 주소
	printf("&arr[0] : %p\n", &arr[0]);
	printf("arr	: %p\n\n", arr);	//배열의 이름은 시작주소값을 찍음

	//1번째 공간의 주소 (0번째 공간의 주소와 4byte차이)
	// 8 9 A B C
	printf("&arr[1] : %p\n", &arr[1]);
	printf("arr+1	: %p\n\n", arr+1);

	char str[4];
	//0번째 공간의 주소
	printf("&str[0]	: %p\n", &str[0]);
	printf("str	: %p\n\n", str);

	//1번째 공간의 주소
	printf("&str[1]	: %p\n", &str[1]);
	printf("str+1	: %p\n\n", str+1);

	// int를 가르키는 포인터에 +1을 하면 4바이트 차이가 남
}