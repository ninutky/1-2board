#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	// 칸의 최대갯수
	int max_length = 61;

	// 주사위
	int dice;

	srand(time(0));
	rand();
	dice = rand() % 6 + 1;
	printf("%d\n", dice);
}