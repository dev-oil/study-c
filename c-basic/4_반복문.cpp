#include<stdio.h>

void main() 
{
	// while 문
	//int i = 1;

	//while (i < 5)
	//{
	//	printf("Hello World!");
	//	i++;
	//}

	/*while (i <= 9) 
	{
		printf("2 * %d = %d\n", i,  2 * i);
		i++;
	}*/

	// ===========================================================================

	// do while 문
	
	//int sum = 0;
	//int input = 0;

	// do {
	//	 printf("정수를 입력하세요 : ");
	//	 scanf_s("%d", &input);
	//	 sum += input;
	// }  while (input != 0);

	// while로 하는 방법

	//printf("정수를 입력하세요 : ");
	//scanf_s("%d", &input);

	//while (input != 0) { // 만약 상단에 받아주는 값이 없다면 바로 총 합은 0으로 끝
	//	printf("정수를 입력하세요 : ");
	//	scanf_s("%d", &input);
	//	sum += input;
	//}

	//printf("총 합은 %d", sum);

	// ===========================================================================
	// for문

	//int dan = 0;
	//
	//printf("단을 입력하세요 : ");
	//scanf_s("%d", &dan);

	//for (int i = 1; i <= 9; i++)
	//{
	//	printf("%d * %d = %d\n", dan, i, dan * i);
	//}

	// break 문
	//int a = 0;

	//while(true)
	//{
	//	if(a > 100) break;
	//	printf("a의 값은 %d입니다.\n",a);
	//	a++; 
	//}

	// continue
	//int a = 0;

	//while(a < 100)
	//{
	//	a++;

	//	if(a > 80 && a < 90) continue;
	//	
	//	printf("a의 값은 %d입니다. \n",a);
	//}

	// 2단출력
	//int dan = 2;

	//for(int i = 1; i < 10; i++) {
	//	printf("%d * %d = %d\n", dan, i, dan * i);
	//}

	// 구구단 출력
	for (int i = 2; i < 10; i++) {
		printf("%d 단 입니다 ========= \n",i);
		for(int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}