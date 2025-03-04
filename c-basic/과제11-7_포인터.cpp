#include<stdio.h>

// void func (int a, int b, int c, intd) 정수형 배열 한 개를 선언한다. 
// 초기값에 따라 배열의 길이가 결정되도록 선언한다. 
// 선언한 배열의 길이만큼 배열의 요소를 출력하되,
// 배열의 이름을 이용하여 (배열의 이름은 포인터와 같다고 하였다.) 
// 포인터로 접근하는 형태로 배열의 요소를 출력해보자.

// 코드 구현 예)
// int a[] = {1,2,3,4,5};

void main()
{
	int a[] = {1,2,3,4,5};
	int *pA = a;
	int size = sizeof(a) / sizeof(int);

	for(int i = 0; i < size; i++)
	{
		printf("%d",*(pA + i));
	}
}
