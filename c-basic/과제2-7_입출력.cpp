#include<stdio.h>

// 사용자로부터 3 개의 정수를 입력 받는다.
// 입력한 세 정수의 합과 평균을 출력하는 프로그램을 작성하라. 

void main() {
	int a = 0;
	int b = 0;
	int c = 0;

	printf("세 개의 정수를 입력하세요 : ");
	scanf_s("%d%d%d", &a, &b, &c);

	int sum = a + b + c;
	int avg = sum / 3;

	printf("세 정수의 합 : %d\n 세 정수의 평균: %d", sum, avg);
}


