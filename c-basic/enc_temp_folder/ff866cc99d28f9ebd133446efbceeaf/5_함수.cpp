#include<stdio.h> // #전처리기

int Add(int a,int b) // 전달 인자, 매개 변수, 파라미터, 인수
{
	return a + b;
}

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