#include<stdio.h>

// 반복문을 사용하여 별표 10개를 출력하라. (while문, for문, do - while문 각각 세 개의 예제 작성할 것.)
// 출력 예)
// **********

void main()
{
	// while
    int num1 = 0;

    while (num1 < 10) {
        printf("*");
        num1++;
    }

    printf("\n");

    // for
    for (int num2 = 0; num2 < 10; num2++) {
        printf("*");
    }

    printf("\n");

    //do while
    int num3 = 0;

    do {
        printf("*");
        num3++;
    } while (num3 < 10);
}