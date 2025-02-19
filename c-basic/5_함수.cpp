#include<stdio.h> // #전처리기

int Add(int a,int b) // 전달 인자, 매개 변수, 파라미터, 인수 // 메모리 값을 가짐 // 전달 보단 값에대한 복사로 생각하면 됨
{ // 값에 의한 복사 call by value
	return a + b; 
} // 종료 후 메모리는 시스템에 귀속

// c언어에서 함수 이름은 unique 해야함.
// c++에선 자동으로 오버로딩으로 적용됨.
// double Add(double a, double b) 
// {
//	 return a + b;
// }

void  main() // entry point
{
	int x = 10;
	int y = 20;

	int hap = Add(x, y);
	printf("%d\n", hap);
}