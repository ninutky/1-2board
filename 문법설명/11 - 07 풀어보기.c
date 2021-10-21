#include <stdio.h>

void main(void)
{
	// 정수, 문자, 8바이트 부동소수 변수를
	int a;	//4
	char b;	//1
	double c;	//8
	// 가리키는 포인터를 선언하고 가리키시오
	int *ap = &a;	//4
	char *bp = &b;	//4
	double *cp = &c;	//4

	// 각각의 변수와 포인터변수가 메모리에서 차지하는 크기를 알아보시오
	printf("a: %d\n", sizeof(a));
	printf("b: %d\n", sizeof(b));
	printf("c: %d\n", sizeof(c));
	printf("ap: %d\n", sizeof(ap));
	printf("bp: %d\n", sizeof(bp));
	printf("cp: %d\n", sizeof(cp));
}