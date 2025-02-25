#include<stdio.h> 

// void func (int a, int b, int c, intd) 
//int func (int *pArr, int paramSize) // 포인터 얘가 arr[]의 주소값을 통해서 {1, 2, 3, 4, 5} 의 값을 참조..
//{
//	//printf("%x\n",pArr); // 주소값
//	int sum = 0;
//
//	for(int i = 0; i < paramSize; i++) {
//		sum += *(pArr + i);
//	}
//
//	return sum;
//}
//
//void main()
//{
//	int arr[] = {1,2,3,4,5, 6, 7};
//
//	/*int size = 전체메모리 / 단위메모리*/
//	int size = sizeof(arr) / sizeof(int);
//	
//	int hap = func(arr, size);
//	printf("%d\n", hap);
//
//	//for(int i = 0; i < 5; i++) {
//	//	printf("%x\n", arr[i]);
//	//}
//}

//=========== 값 호출 방식 (Call by Value) 과 참조 호출 방식 (Call by Reference) =============
// ============================= 예제 1 =============================
//void Swap(int a,int b) 
//{
//	int temp = 0;
//
//	temp = a;
//	a = b;
//	b = temp;
//} // 해당 함수에서만 사용되는 값 a와 b끼리만 교환한거지 x와 y는 변화 없슴..
//
//void main() 
//{
//	int x = 10;
//	int y = 20;
//	int temp = 0;
//
//	printf("x = %d, y = %d\n",x,y);
//
//	//Swap(x,y);
//
//	printf("x = %d, y = %d\n",x,y);
//}

// ============================= 예제 1 수정 =============================
void Swap(int *a,int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
} // 해당 함수에서만 사용되는 값 a와 b끼리만 교환한거지 x와 y는 변화 없슴..

void main()
{
	int x = 10;
	int y = 20;

	printf("x = %d, y = %d\n",x,y);

	Swap(&x,&y);

	printf("x = %d, y = %d\n",x,y);
}

// =============================예제 =============================
//void callRef(int *pX)
//{
//	*pX += 3; // 4
//	printf("%x\n", *pX); // 1
//}
//
//void main() 
//{
//	int a = 1;
//	callRef(&a);
//
//	printf("%x\n", a); // 4
//}