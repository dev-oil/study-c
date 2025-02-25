#include<stdio.h>

// 배열의 이름은 포인터이다.
void func(int a, int b, int c, int d ...) 
{
	
}

void main() {
	//int arr[] = {1,2,3,4,5};

	//for(int i = 0; i < 5; i++) {
	//	printf("%d\n", arr[i]);
	//}

	//for(int i = 0; i < 5; i++) {
	//	printf("%x\n", &arr[i]);  // 각 주소값이 나옴
	//}

	//printf("%x\n", arr); // 배열의 첫번째 주소값

	/*int arr[] = {1,2,3,4,5};
	int temp = 10;

	arr = temp;*/ // 포인터 상수이기 때문에 값을 대입할 수 없음 // arr2 = arr1 -> 3 = 5 / 3 = temp과 같은 느낌...
	
	// ============ 포인터로 배열 값 추출하기 ============
	/*int arr[] = {1,2,3,4,5};

	for(int i = 0; i < 5; i++) {
		printf("%d\n", *(arr + i));
	}*/

	/*int arr[] = {1,2,3,4,5};
	int *pArr;

	pArr = arr;*/

	/*for(int i = 0; i < 5; i++) {
		printf("%d\n",*(pArr + i));
	}*/

	//for(int i = 0; i < 5; i++) {
	//	printf("%d\n", pArr[i]); // 이것도 가능하다
	//}

	// ============ 문자열 상수 ============
	// "CProgramming"
	// 표준타입 int / double / char
	// 문자열 타입?? 은 ?? (c에서 string은 표준타입이 아님)
	// string은? class (사용자 정의 타입)

	//char str[]= "love"; // str은 문자열 변수
	//const char *pStr = "you"; // 문자열 상수

	//printf("%s\n",str);
	//printf("%s\n",pStr);

	//str[0] = 'r';
	//// pStr[0] = 'T';

	//printf("%s\n",str);
	//printf("%s\n",pStr);
}