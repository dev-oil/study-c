#include<stdio.h> 
#include <corecrt_malloc.h>

void main() {
	int *student;
	int num = 0;
	printf("학생 수를 입력하세요 : ");
	scanf_s("%d",&num); // 런타임에 실행

	// const a = XXX;

	student = (int*)malloc(sizeof(int) * num);

	// 포인터 변수를 받게 되면 반드시 해줘야 하는 사항
	if(student == NULL)
	{
		printf("메모리가 부족하여 할당할 수 없습니다.");
		return;
	}

	// 메모리 사용
	for(int i = 0; i < num; i++) 
	{
		student[i] = i + 1;
	}

	int* restudent;
	
	restudent = (int*)realloc(student, sizeof(int) * 10); // 재할당이지만 새로운 메모리다.
	for(int i = 5; i < 10; i++) 
	{
		restudent[i] = i + 1;
	}

	for(int i = 0; i < 10; i++) 
	{
		printf("%d\n",restudent[i]);
	}

	free(restudent);
}