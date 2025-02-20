#include<stdio.h> 

void main(void)
{
	// 안됨 . 컴파일 타임 할당이므로 미리 공간을 확보
	/*int size = 5;
	int array[size];*/

	// 구조체 (array)
	int array1[5] = {10,20,30, 40, 50};
	int array2[5];

	for(int i = 0; i < 5; i++) {
		array2[i] = array1[i];
		printf("array2 의 값: %d\n",array2[i]);
	}

	/*for(int i = 0; i < 3; i++) {
		printf("%d번째 학생 성적을 입력하세요 : ", i+1);
		scanf_s("%d",&array[i]);
	}

	for(int i = 0; i < 3; i++) {
		printf("%d\n",array[i]);
	}
	
	int total = 0;

	for(int i = 0; i < 3; i++) {
		total += array[i];
	}

	double avg = total / 3;

	printf("총점은 %d\n",total);
	printf("평균은 %.2f\n",avg);*/
}