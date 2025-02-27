#include<stdio.h> 

// 길이가 5인 정수형 배열을 선언하고,초기값을{3,5,2,11,10} 이라고 설정한다. 앞에서 두 배열의 요소를 비교하여 가장 큰 값을 출력하였다면,이번에는 5개의 배열의 요소 중 가장 큰 값을 찾아서 출력해 보도록 하자.

void main() {
	int arr[5] = {3,5,2,11,10};
	int max = 0;
	max = arr[0];

	for(int i = 0; i < 5; i++)
	{
		if(max < arr[i]) {
			max = arr[i];
		}
	}

	printf("%d",max);
}
