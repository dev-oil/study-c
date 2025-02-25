#include<stdio.h> 

void main(void)
{
	// 드디어 포인터 ㄷㄷㄷ
	// 기본 예제
	//int b = 100;
	//int *pB = &b;

	//printf("%d\n",*pB); // 100

	// 예제
	//int b = 100;
	//int *pB = &b;

	//printf("b = %d\n", b); // 100
	//printf("&b = %x\n",&b); // f75faf4
	//printf("pB = %x\n",&pB); // f75faf4
	//printf("*pB = %d\n",*pB); // 100
	// %d 출력 가능
	// %x 헥사 코드
	// %p

	// 포인터 연산 
	//char str[] = "Programming";
	//char *pStr;

	//pStr = &str[0]; // str의 주소 값을 전달

	//printf("%c\n",*pStr); // P가 나옴 (값)
	//printf("%x\n",pStr); // P의 주소값이 나옴 (str[0]의 주소값) (b2fbf788)
	//printf("%x\n",pStr + 1); // + 1을 한다면? (b2fbf789) 그 다음요소를 가르킴
	//printf("%c\n",*(pStr + 1)); // r이 나옴
	//printf("%x\n",pStr + 3); // + 3을 한다면? 그다음다음 요소 ~~
	//printf("%c\n",*(pStr + 3)); // g가 나옴

	// 포인터의 여러가지 자료형
	char a = 'A';
	char *pA = &a;
	int b = 100;
	int *pB = &b;
	double c = 3.14;
	double *pC = &c;

	// 포인터 변수의 사이즈
	printf("pA의 크기: %dbyte\n",sizeof(pA)); // 8 (64비트기준) ???????? 4 (32비트 기준)
	printf("pB의 크기: %dbyte\n",sizeof(pB)); // 8 (64비트기준) ???????? 4 (32비트 기준)
	printf("pC의 크기: %dbyte\n",sizeof(pC)); // 8 (64비트기준) ???????? 4 (32비트 기준)

	// 실제 메모리의 사이즈
	printf("*pA의 크기: %dbyte\n",sizeof(*pA)); // 1
	printf("*pB의 크기: %dbyte\n",sizeof(*pB)); // 4
	printf("*pC의 크기: %dbyte\n",sizeof(*pC)); // 8
}