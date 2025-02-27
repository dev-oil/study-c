#include<stdio.h> 

// 정수형 배열 한 개를 선언한다. 
// 초기값에 따라 배열의 길이가 결정되도록 선언한다. 
// 선언한 배열의 길이만큼 배열의 요소를 출력하고,
// 배열의 각 요소의 주소를 출력하고,배열의 이름을 출력해보도록 하자.
// 배열 선언 예)
// int a[] = {1,2,3,4,5};
// 
// 배열 출력 예)
// 배열의 요소 출력 : 1 2 3 4 5
// 배열의 주소 출력 : ……………
// 배열의 이름 출력 : ……………

void main()
{
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(int);

	printf("배열의 요소 출력: ");
	for(int i = 0; i < size; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");

	printf("배열의 주소 출력: ");
	for(int i = 0; i < size; i++) {
		printf("%x ",(void*)&arr[i]);  // 주소 출력 시 %p 사용
	}
	printf("\n");

	printf("배열의 이름 출력: %x\n",(void*)arr); // 배열의 이름 출력
}
