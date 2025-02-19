#include<stdio.h>

// 사용자로부터 입력받은 숫자에 해당하는 구구단을 출력하시오. 
// (사용자 입력 함수인 scanf 를 사용하여 사용자로부터 정수를 입력받으시오.)

void main()
{
	int dan = 0;
	
	printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}