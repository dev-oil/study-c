#include<stdio.h>

// 사용자로부터 두 개의 정수를 입력 받는다. 
// 입력한 두 정수를 그대로 출력하는 프로그램을 작성하라.
void main() {
	int input1 = 0;
	int input2 = 0;

	scanf_s("%d%d", &input1, &input2);
	printf("%d\n%d", input1, input2);
}