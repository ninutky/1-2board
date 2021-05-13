#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	// 칸의 최대갯수
	int max_length = 61;

	// 플레이어의 위치
	int position = 0;

	// 주사위
	int dice;

	srand(time(0));
	rand();

	printf("현재위치 : %d\n\n", position);
	getchar();

	while (1)
	{
		// 주사위 설정 (1부터 6까지)
		dice = rand() % 6 + 1;
		position += dice;
		printf("현재위치 : %d\n\n", position);
		getchar();
	}
}