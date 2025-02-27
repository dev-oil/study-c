#include<stdio.h> 

// char형 변수 a, int형 변수 b, double형 변수 c를 선언과 동시에 각각 ‘C’, 10, 3.14로 초기화한다. 
// 그리고 각각의 포인터 변수를 선언하되 char형 변수 pA는 변수 a를, int형 변수 pB는 변수 b를, 
// double형 변수 pC는 변수 c를 가리키게 한다. 
// 이 때, 각각의 포인터 변수 pA, pB, pC를 이용하여, 변수 a, b, c의 값을 1증가 시킨다. 
// 그리고 a, b, c의 값을 출력해보자. 

void main() {
	char a = 'C';
	int b = 10;
	double c = 3.14;

	char *pA = &a;
	int *pB = &b;
	double *pC = &c;

	*pA += 1;
	*pB += 1;
	*pC *= 1;

	printf("%c, %d, %.2f",a,b,c);
}