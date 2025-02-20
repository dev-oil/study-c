#include<stdio.h> // # 전처리기

// 전역 변수
int global; // 전역 변수

int Add(int a,int b) {
	return global = a + b;
}

void print_Start()
{
	printf("============= Programming Start ==========");
	printf("두 개의 정수를 입력하시오 :");
}

void print_Hap(int result)
{
	printf("두 수의 합은 %d 입니다.\n",result);
	printf("============= Programming End ==========");
}

void  main() // entry point
{
	int x = 10;
	int y = 20;

	print_Start();
	Add(x,y);
	print_Hap(global);
}

// static 변수
void func()
{
	static int value = 0;
	value++;
	printf("%d\n", value);
}

void main()
{
	for(int i = 0; i < 5; i++) 
	{
		func();
	}
}