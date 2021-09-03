#include <stdio.h>

void main(void)
{
	char arr1[12] = "Hello World";	// \0이 감춰져있음
	char arr2[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	printf("%s\n",&arr1);
	printf("%s\n", &arr2);
}