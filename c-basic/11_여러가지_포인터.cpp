#include<stdio.h> 

int Plus(int a,int b)
{
	return a + b;
}

int Minus(int a,int b)
{
	return a - b;
}

void main() {
	// 포인터 타입 =========================
	//void *a;
	//int b = 1234;

	//a = &b;
	//// printf("%d\n", *a); // 얼만큼 읽어야할 지 알 수 없어짐
	//printf("%d\n", *(int*)a); // 정수형 포인터로 타입캐스팅(명시적 형변환) 진행 

	// 함수 포인터 =========================
	int (*fPtr)(int x,int y); // 함수 포인터 

	fPtr = Plus;
	int result = fPtr(10,20);
	printf("%d\n",result);

	fPtr = Minus;
	result = fPtr(10,20);
	printf("%d\n",result);
}