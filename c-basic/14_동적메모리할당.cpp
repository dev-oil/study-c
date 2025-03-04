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

	// 메모리 
	printf("할당된 메모리 크기는 %d입니다.",sizeof(int) * num);

	for(int i = 0; i < num; i++) {
		printf("%d번째 학생 성적 입력 :", i + 1);
		scanf_s("%d",&student[i]);
	}

	int total = 0;

	for(int i = 0; i < num; i++) {
		total = total + student[i];
	}

	printf("총점 : %d, 평균 : %d",total,total / num);

	free(student);
}