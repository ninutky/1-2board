#include <stdio.h>
void main(void)
{
	char str[20] = "Hello world";
	// W 다음에 NULL문자를 주어서 문자열을 끝냄
	str[7] = '\0';
	printf("%s", str);
}