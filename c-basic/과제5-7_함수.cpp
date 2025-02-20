#include<stdio.h>

//앞서 작성했던 예제를 기반으로 하여,사칙 연산(더하기,빼기,곱하기,
//나누기)이 가능한 계산기를 작성하고,사용자로부터 입력 받은 두 수의
//더하기,빼기,곱하기,나누기의 결과를 각각 출력하도록 하라.

//출력 예)
//두 정수를 입력하시오 : 5  2
//두 정수의 합은 7 입니다.
//두 정수의 차는 3 입니다.
//두 정수의 곱은 10 입니다.
//두 정수의 나누기는 2 입니다.


int add(int x,int y) {
	return x + y;
}

int sub(int x,int y) {
	return x - y;
}

int multiple(int x,int y) {
	return x * y;
}

int divide(int x,int y) {
	return x / y;
}

void  main()
{
	int x = 0;
	int y = 0;

	printf("두 정수를 입력하시오 :");
	scanf_s("%d%d",&x,&y);

	printf("합 : %d / 차 : %d / 곱 : %d / 나누기 : %d ", add(x,y), sub(x,y), multiple(x,y), divide(x,y));
}