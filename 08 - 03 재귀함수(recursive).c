#include <stdio.h>

int factorial(int num)
{
	if (num == 1) {
		return 1;
	}
	return num * factorial(num - 1);
}

void main(void)
{
	int a = factorial(1);
	printf("%d",a);
}







//함수를 사용하는 이유
//#include <stdio.h>
//
//int 더하기(int a)
//{
//	int sum = 0;
//	for (int i = 1; i <= a; i++)
//		sum += i;
//
//	return sum;
//}
//
//void main(void)
//{
//	int aa 더하기(3), bb = 더하기(4), cc = 더하기(2);
//	//printf("%d %d %d", aa, bb, cc);
//}