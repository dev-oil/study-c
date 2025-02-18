#include<stdio.h>

// 사용자로부터 성적 점수인 정수 값을 한 개 입력 받아 그 값에 대한 점을 표시하는 프로그램을 작성하라.
// 예를 들어 100 ~91점은 A학점, 90 ~81점은 B학점, 80 ~71점은 C학점, 70~61점은 D학점, 
// 60점 이하는 F 학점으로 표시한다.
// 단, 입력하는 수의 범위는 0부터 100 사이다. 

//출력 예)
//점수를 입력하시오 : 95
//학점은 A 입니다.

void main()
{
	int score = 0;

	printf("성적을 입력해주세요 : ");
	scanf_s("%d", &score);

	if (score > 100 || score < 0) 
	{
		printf("올바른 성적을 입력해주세요. ex. 0 ~ 100");
	}
	else 
	{
		if (score > 90)
		{
			printf("A");
		}
		else if (score <= 90 && score > 80) 
		{
			printf("B");
		}
		else if (score <= 80 && score > 70) 
		{
			printf("C");
		}
		else if (score <= 70 && score > 60)
		{
			printf("D");
		}
		else
		{
			printf("F");
		}
	}
}