#include<stdio.h> 

// 길이가 2인 정수형 배열을 선언한다. 
// 사용자로부터 두 개의 값을 입력 받아 배열의 각 요소에 저장하고 두 수를 비교하여 큰 수를 출력하도록 하자

void main()
{
	int arr[2];
	
	printf("두개의 정수 입력>>");
	scanf_s("%d%d",&arr[0], &arr[1]);

	arr[0] > arr[1] ? printf("%d",arr[0]) : printf("%d",arr[1]);
}
