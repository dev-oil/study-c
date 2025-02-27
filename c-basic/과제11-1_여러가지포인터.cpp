#include<stdio.h> 

// void형 포인터 변수와 double형의 변수를 각각 선언하고, 
// double형 변수를 void형 포인터 변수가 가리키게 한다. 
// 그리고 void형 포인터 변수를 통해서 가리키고 있는 
// 변수를 화면에 출력하도록 하자. 
 
// 선언 예)
// void *a;
// double b = 3.14;

void main()
{
	void *pA;
	double b = 3.14;
	
	pA = &b;

	printf("%.2f\n",*(double *)pA);
}
