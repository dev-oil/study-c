#include<stdio.h>

// 사용자로부터 두 수를 입력 받아, 두 수를 비교하여 최대값과 최소값을 
// 구하는 함수를 정의하라. 그리고 main 함수에서 이 함수들을 호출하여
// 결과값을 출력하도록 하라.

// 출력 예)
// 두 정수를 입력하시오 : 5 3
// 최대값 : 5 최소값 : 3


int min(int x, int y) {
	return x < y ? x : y;
}

int max(int x,int y) {
	return x > y ? x : y;
}

void  main()
{
	int x = 0;
	int y = 0;

	printf("두 정수를 입력하시오 :");
	scanf_s("%d%d",&x, &y);

	printf("최대값 : %d 최소 값 : %d",max(x,y),min(x,y));
}