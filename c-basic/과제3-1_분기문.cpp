#include<stdio.h>

// 사용자로부터 하나의 정수를 입력 받는다. 입력한 값이 짝수이면 출력 결과로 “입력한 수는 짝수입니다.” 라는 문자열을 출력하고, 
// 입력한 값이 홀수이면 출력 결과로 “입력한 수는 홀수입니다.” 라는 문자열을 출력하라.

void main() {
	int num = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) 
	{
		printf("짝수 입니다.");
	} 
	else 
	{
		printf("홀수 입니다.");
	}
}
