#include<stdio.h>


//2의 배수를 화면에 출력하라. 단,최대 범위는 100까지이다. (힌트,구구단 2단 예제를 참고)
//
//출력 예)
//2
//4
//6
//8
//….
//100

void main()
{
	int num = 2;
	
	for(int i = 1; i < 101; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
}
