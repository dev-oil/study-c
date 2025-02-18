#include<stdio.h>
#include<algorithm>

// 사용자로부터 세 개의 정수를 입력 받는다. 
// 입력 받은 세 개의 정수를 비교하여 그 중 가장 작은 최소값을 출력하는 프로그램을 작성하라.

void main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	printf("%d", std::min({ num1, num2, num3 }));
}
