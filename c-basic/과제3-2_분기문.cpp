#include<stdio.h>

// 사용자로부터 두 개의 정수를 입력 받는다. 입력한 두 수를 비교하여 큰 수를 출력하라.

void main() {
	int num1 = 0;
	int num2 = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d%d", &num1, &num2);

	num1 > num2 ? printf("%d", num1) : printf("%d", num2);
}
