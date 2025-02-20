#include<stdio.h>

// 원의 넓이를 구하는 함수를 작성해보자. 원의 넓이는 반지름 * 반지름 * 3.14를 구하면 된다. 
// 사용자로부터  정수(반지름의 길이)를 입력 받아 함수의 전달인자로 전달하고,
// 원의 넓이를 출력하는 함수를 작성하자. 
// 그리고 이 함수를 main에서 호출하여 출력해보자.
// 함수 작성 예)


float circle(int radian)
{
	return radian * radian * 3.14;
}

void print(float result)
{
	printf("넓이는 : %.2f 입니다.",result);
}

void  main()
{
	int x = 0;

	scanf_s("%d",&x);
	float result = circle(x);

	print(result);
}