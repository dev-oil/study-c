#include<stdio.h> 
// 길이가 5인 정수형 배열을 선언하고, 초기값을 {3, 5, 2, 11, 10} 이라고 설정한다. 
// 5개의 배열의 요소 중 가장 큰 값을 찾아서 출력해 보도록 하자.
// 변수 선언 예)
// int a[] = {3,5,2,11,10};
// int i = 0;
// int imax = a[0];

void main()
{
	int arr[] = {3,5,2,11,10};
	int imax = arr[0];
	int size = sizeof(arr) / sizeof(int);

	for(int i = 0; i < size; i++) {
		if(imax < arr[i]) {
			imax = arr[i];
		}
	}

	printf("%d",imax);
}
