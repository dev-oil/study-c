#include<stdio.h> 

void main(void)
{
	// 드디어 포인터 ㄷㄷㄷ
	// 기본 예제
	//int b = 100;
	//int *pB = &b;

	//printf("%d\n",*pB); // 100

	// 예제
	 int b = 100;
	 int *pB = &b;

	 printf("b = %d\n", b); // 100
	 printf("&b = %x\n",&b); // f75faf4
	 printf("pB = %x\n",&pB); // f75faf4
	 printf("*pB = %d\n",*pB); // 100
	 // %d 출력 가능
	 // %x 헥사 코드
	 // %p
}