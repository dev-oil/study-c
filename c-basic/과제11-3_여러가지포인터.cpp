#include<stdio.h> 

// 길이가 2인 정수형 배열을 선언한다. 
// 사용자로부터 두 개의 값을 입력 받아 배열에 저장하고 두 수를 비교하여 큰 수를 출력하도록 하자. 
// 단, 두 수를 비교하여 큰 수를 출력하는 기능은 함수로 처리한다.

void Max(int a,int b) 
{
	printf("%d",a > b ? a : b);
}

void main()
{
	int a = 0;
	int b = 0;

	printf("두개의 정수 입력>>");
	scanf_s("%d%d",&a,&b);
	
	Max(a,b);
}
