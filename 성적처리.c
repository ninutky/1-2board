#include <stdio.h>

// 함수의 선언
void cal_grade(int score);
double cal_average(int score_a, int score_b, int score_c); // 평균이 소수점으로 나올 수 있어서 double로 잡음

void main(void)
{
	// [0] 씨언어, [1] 자바, [2] 컴퓨터구조
	int score[3];
	printf("C점수를 입력하세요 : ");
	scanf("%d", &score[0]);

	cal_grade(score[0]);

	printf("자바점수를 입력하세요 : ");
	scanf("%d", &score[1]);
	cal_grade(score[1]);

	printf("컴구점수를 입력하세요 : ");
	scanf("%d", &score[2]);
	cal_grade(score[2]);

	double average = cal_average(score[0], score[1], score[2]);
	printf("세 과목의 평균은 %f 입니다. ", average);

}

// 입력받은 점수(score)에 대한 등급을 출력
void cal_grade(int score)
{
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

// 세 과목의 평균을 반환
double cal_average(int score_a, int score_b, int score_c)
{
	return (double)(score_a + score_b + score_c) / (double)3;
}

