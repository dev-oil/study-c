#include<stdio.h>

// 앞에서 작성한 예제를 참고하여 배열 arr1의 값을 배열 arr2에 복사하되,
// 배열 요소를 역순으로 저장하도록 하고,복사된 arr2 의 요소값들을 출력하도록 하라. 
// (참고 : 다음 출력 예는 int arr1[5] = {1,2,3,4,5} 일 경우) 

void main() {
	int arr1[3] = {1,2,3};
	int arr2[3];

	for(int i = 0; i < 3; i++)
	{
		arr2[i] = arr1[i];
		printf("arr2의 요소 : %d\n", arr2[i]);
	}
}