#include<stdio.h> 

// 커피 자판기가 있다. 100원 넣으면 ‘블랙커피’,200원을 넣으면 ‘밀크커피’가 나온다. 
// 자판기가 함수와 같은 블랙박스라고 했었다. 
// 자판기를 함수로 구현해보자. 
// 즉,사용자로부터 정수형 가격(100,200)을 입력 받아 100을 입력 받으면 ‘블랙커피’를 출력하고,
// 200을 입력 받으면 ‘밀크커피’를 출력하면 된다.
//
// 함수 작성 예)
// void 함수이름(int price)
// {
//	if(price == 100)
//		….
//	else if(price == 200)
//		….
// }

void coffie(int price) 
{
	if(price == 100) 
	{
		printf("블랙커피");
	}
	else if (price == 200)
	{
		printf("밀크커피");
	}
}

void main(void)
{
	int myCoin = 100;

	coffie(myCoin);
}