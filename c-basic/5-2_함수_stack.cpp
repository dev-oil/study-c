#include<stdio.h> 

void func2()
{
	int local = 20;
	printf("local = 20 메모리 할당\n");
	printf("local = 20 메모리 소멸\n");

}

void func1()
{
	int local = 10;
	printf("local = 10 메모리 할당\n");
	func2();
	printf("local = 10 메모리 소멸\n");

}

void main(void)
{
	int val = 0; // local 동일 이름이어도 상관 없음. 지역변수이기 때문에
	printf("val = 0 메모리 할당\n");
	func1();
	printf("val = 0 메모리 소멸\n");
}

// 결과 값 순서 
// val = 0 메모리 할당
// local = 10 메모리 할당
// local = 20 메모리 할당
// local = 20 메모리 소멸
// local = 10 메모리 소멸
// val = 0 메모리 소멸
