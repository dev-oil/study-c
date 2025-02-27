#include<stdio.h> 
// 사용자로부터 정수를 하나 입력 받는다. 
// 그리고 Factorial 이라는 이름의 함수를 만든 후, 
// 사용자로부터 입력 받은 정수를 전달 인자로 전달한다. 
// Factorial 이라는 함수는 수학에서의 팩토리얼과 똑같은 기능을 하는데, 
// 예를 들어 3!이면 3*2*1의 결과값이 나와야 하고, 5!이면 5*4*3*2*1의 결과값이 나와야 한다. 
// 결과값의 경우는 Factorial 함수의 두 번째 전달인자에 포인터 형태로 전달하며, 
// 함수의 동작 후 참조호출에 의해 결과 값이 전달인자로 리턴되도록 한다. 

void Factorial(int *x, int *res) {
	for(int i = *x; i > 0; i--)
	{
		*res *= i;
	}
}

void main() {
	int x = 0;
	int res = 1;

	printf("정수를 입력하세요 : ");
	scanf_s("%d",&x);

	Factorial(&x, &res);

	printf("결과: %d", res);
}