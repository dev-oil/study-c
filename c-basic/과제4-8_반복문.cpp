#include<stdio.h>

// 반복문을 사용하여 1부터 사용자가 입력한 정수까지의 합을 출력하는 프로그램을 작성하라. 

void main()
{
	int answer = 0;
	int input = 0;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d",&input);

	for(int num = 1; num <= input; num++)
	{
		answer += num;
	}

	printf("%d\n",answer);

}
