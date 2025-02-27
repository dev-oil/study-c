#include<stdio.h> 

// 참조의 의한 호출 방식에 의거해서 함수를 호출하되,
// 두 개의 값을 바꾸는 함수인 Swap() 함수를 작성한다. 
// main() 함수에서 Swap 함수 호출 전 값을 출력하고,
// 함수 안에서 변경 후 값을 출력하고,마지막으로 함수 밖에서 값을 출력하도록 한다.

// 출력
// 예)
// 초기값 a = 1,b = 2
// 함수 안 변경 x =2,y = 1
// 함수 밖 출력 a =1,b =2

void Swap(int *a,int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

	printf("a = %d, b = %d\n",*a,*b);
}

void main()
{
	int a = 10;
	int b = 20;

	Swap(&a,&b);

	printf("a = %d, a = %d\n",a,b);
}
