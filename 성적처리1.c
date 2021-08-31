#include <stdio.h>

void main(void)
{
	int score;
	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score >= 0 && score <= 100) { // 0부터 100까지의 숫자만 입력 허용
		if (90 <= score && score <= 100)
			printf("A입니다. \n");
		else if (80 <= score)
			printf("B입니다. \n");
		else if (70 <= score)
			printf("C입니다. \n");
		else if (60 <= score)
			printf("D입니다. \n");
		else
			printf("E입니다. \n");
	}
	else
		printf("0부터 100까지 입력 가능");
}