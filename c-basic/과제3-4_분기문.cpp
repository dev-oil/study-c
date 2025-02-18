#include<stdio.h>

// 사용자로부터 점수값을 입력 받는다. 점수값은 정수이다.
// 점수값이 60점 이상이면 “합격입니다.”를 출력하고, 60점 미만이면 “불합격입니다.”를 출력하라.

void main() {
	int score = 0;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	score >= 60 ? printf("합격입니다.") : printf("불합격입니다.");
}
