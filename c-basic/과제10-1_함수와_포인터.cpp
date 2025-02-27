#include<stdio.h> 
// 사용자로부터 두 수를 입력 받아 두 수의 합과 곱을 구하는 프로그램을 작성하라. 
// 두 수의 합과 곱의 기능은 한 개의 함수 안에서 함수의 합과 곱의 연산이 이루어져야 한다. 
// 이 문제를 해결하기 위해서는 참조 호출(call-by-reference) 방식을 사용해야 한다.

// 출력 예)
// 두 수를 입력하시오 : 10 20
// 합 : 30
// 곱 : 200

void calculator(int *x, int *y, int *sum, int *mult) {
	*sum = *x + *y;
	*mult = *x * *y;
}

void main() {
	int x = 0;
	int y = 0;
	int sum = 0;
	int mult = 0;

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d%d",&x,&y);

	calculator(&x,&y,&sum,&mult);

	printf("합: %d",sum);
	printf("곱: %d",mult);
}