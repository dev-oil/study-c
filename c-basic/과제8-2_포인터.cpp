#include<stdio.h>

// 자료형이 정수형 int 이고,크가가 5인 배열 arr이 있다. 
// 그리고 포인터 ptr이 있는데,이 배열의 첫 번째 요소의 주소값을 가지고 있다. 
// 포인터를 이용하여 이 배열의 가운데로 이동한 후 그 요소의 값을 출력하는 프로그램을 작성하시오.

void main() {
	int arr[5] = {1,2,3,4,5};
	int *pArr = arr;
	
	int center = 5 / 2;

	printf("%d\n",*(pArr + center));
}