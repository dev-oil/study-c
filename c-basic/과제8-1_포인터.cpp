#include<stdio.h>

// 문자형 변수 a와 정수형 변수 b를 선언한다. 
// 그리고 문자형 포인터 변수 pA와 정수형 포인터 변수 pB를 선언한 후 
// 각각 a와 b의 주소값을 넘겨 받는다.  
// pA와 pB 포인터 변수를 이용하여 가리키고 있는 변수의 실제값을 출력해보자. 

void main() {
	char a = 'F';
	int b = 5;

	char *pA = &a;
	int *pB = &b;

	printf("*pA = %c\n",*pA); // F
	printf("*pB = %d\n",*pB); // 5
}