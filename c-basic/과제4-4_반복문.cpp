#include<stdio.h>

// 반복문을 사용하여 1월부터 12월까지 출력하라. (while문,for문,do-while문 각각 세 개의 예제 작성할 것.)

//출력 예)
//1월
//2월
//3월
//4월
//…
//12월

void main()
{
	int month = 1;

	while(month < 13) {
		printf("%d월\n", month);
		month++;
	}

	printf("\n");

	// for
	for(int month2 = 1; month2 < 13; month2++) {
		printf("%d월\n", month2);
	}

	printf("\n");

	//do while
	int month3 = 1;

	do {
		printf("%d월\n", month3);
		month3++;
	} while(month3 < 13);
}