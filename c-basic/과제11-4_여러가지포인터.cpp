#include<stdio.h> 
// 길이가 100인 정수형 배열을 선언한다. 
// 이 배열에 인덱스 0부터 99까지의 배열의 요소에 값을 1부터 100까지 입력한다.
// 그리고,입력한 배열의 요소를 모두 더한 총합을 출력하라.

void main()
{
	int a[100];
	int sum = 0;

	for(int i = 0; i < 100; i++) {
		a[i] = i + 1;
		sum += a[i];
	}

	printf("%d",sum);
}
