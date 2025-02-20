#include<stdio.h>

// 계산기사각형의 넓이를 구하는 함수를 작성해보자. 
// 사각형의 넓이는 가로의 길이 * 세로의 길이를 구하면 된다. 
// 사용자로부터 두 정수(가로의 길이, 세로의 길이)를 각각 입력 받아 함수의 전달인자로 전달하고, 
// 사각형의 넓이를 출력하는 함수를 작성하자. 그리고 이 함수를 main에서 호출하여 출력해보자.

int rectangle(int width,int height)
{
	int c;
	int d;
	return width * height;
}

void print(int result)
{
	printf("넓이는 : %d 입니다.",result);
}

void  main()
{
	int x = 0;
	int y = 0;

	scanf_s("%d%d",&x,&y);
	int result = rectangle(x,y);

	print(result);
}