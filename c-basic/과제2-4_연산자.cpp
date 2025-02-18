#include<stdio.h>

// 사용자로부터 두 개의 정수를 입력 받아 사칙 연산의 결과를 출력해보자.
// 사용자 입력을 각각 4와 2를 입력하였을 때, 출력 결과의 형태는 다음과 같다.
// 두수의 합 / 차 / 곱 / 나머지

void main() {
	int a = 0;
	int b = 0;

	scanf_s("%d%d", &a, &b);

	printf("두 수의 합 : %d\n", a + b);
	printf("두 수의 차 : %d\n", a - b);
	printf("두 수의 곱 : %d\n", a * b);
	printf("두 수의 나머지 : %d\n", a % b);
}