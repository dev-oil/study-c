#include<stdio.h>

// 구구단을 출력하되,짝수단(2단,4단,6단,8단)만 출력하는 프로그램을 작성하라. 
// 단,continue문을 사용하여 작성할 것.

void main()
{
	for(int i = 2; i < 10; i++) {

		if(i % 2 != 0) continue;
		printf("%d 단 입니다 ========= \n",i);

		for(int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n",i,j,i * j);
		}
		printf("\n");
	}
}
