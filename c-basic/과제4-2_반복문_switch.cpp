#include<stdio.h>

// 사용자로부터 하나의 정수를 입력 받는다.
// 입력한 값이 짝수이면 출력 결과로 “입력한 수는 짝수입니다.” 라는 문자열을 출력하고, 
// 입력한 값이 홀수이면 출력 결과로 “입력한 수는 홀수입니다.” 라는 문자열을 출력하라.

//단, switch – case 문을 이용할 것.

void main()
{
	int input = 0;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &input);

	int num = input % 2;

	switch (num)
	{
	case 0:
		printf("입력한 수는 짝수입니다.");
		break;
	case 1:
		printf("입력한 수는 홀수입니다.");
		break;
	}
}