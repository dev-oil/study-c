#include<stdio.h>

//사용자로부터 세 개의 정수를 입력 받아서 차례로 곱하기, 더하기 연산을 순서대로 수행하여 그 결과를 출력해보자.
// 출력 결과의 형태는 다음과 같다.
// 예)
// 2 ＋ 3 ＊ 4 = 1４

void main() {
	int a = 0;
	int b = 0;
	int c = 0;

	printf("세 개의 정수를 입력하세요 : ");
	scanf_s("%d%d%d", &a, &b, &c);

	printf("%d + %d * %d = %d", a, b, c, a + b * c);
}


