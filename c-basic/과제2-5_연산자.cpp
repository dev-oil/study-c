#include<stdio.h>

// 사용자로부터 3개의 정수를 입력 받아서, 3개의 수를 곱한 결과를 출력하라.
// 출력 예)
// 세 개의 정수를 입력하세요 : 2 3 4
// 세 수의 곱은 24입니다.

void main() {
	int a = 0;
	int b = 0;
	int c = 0;

	printf("세 개의 정수를 입력하세요 : ");
	scanf_s("%d%d%d", &a, &b, &c);

	printf("세 수의 곱은 %d 입니다.", a * b * c);
}


