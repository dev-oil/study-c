#include<stdio.h> 

//책읽기 마라톤 기능을 가진 프로그램을 구현해보자. 책읽기 마라톤이란 내가 읽은 책들의
//페이지 수를 누적 계산하는 기능이다. 그날 그날 읽은 책들의 페이지 수를 사용자로부터
//입력 받으면 최종 누적된 페이지 수에 새로 입력된 페이지 수가 추가로 더해지고,
// 다시 갱신된 최종 페이지 수가 출력되는 것이다. 
// 한번의 출력이 끝나면 다시 읽은 책의 페이지 수를 사용자로부터 입력 받고,
// 누적된 최종 페이지 수를 출력한다. 이 과정을 사용자가 -1을 입력할 때까지 계속 반복한다. 
// 이 기능을 함수로 구현하되,페이지의 누적 결과를 저장하는 변수를 전역 변수로도 구현 해보고,
// static 변수로도 구현해보도록 한다.
//
//출력 예)
//읽은 책의 페이지 수를 입력하시오 : 30
//최종 누적 페이지 : 30
//읽은 책의 페이지 수를 입력하시오 : 20
//최종 누적 페이지 : 50
//읽은 책의 페이지 수를 입력하시오 : 40
//최종 누적 페이지 : 90
//읽은 책의 페이지 수를 입력하시오 : -1
//더 분발하세요.

// 전역 변수
int totalPages = 0;

void book(int pages) {
	if(pages == -1) {
		printf("더 분발하세요.\n");
		return;
	}

	totalPages += pages;
	printf("최종 누적 페이지 : %d\n",totalPages);
}

void main(void)
{
	int pages = 0;

	while(1) {
		printf("읽은 책의 페이지 수를 입력하시오 : ");
		scanf_s("%d",&pages);

		if(pages == -1) {
			book(pages);
			break;
		}

		book(pages);
	}
}

// static 변수
void book(int pages) {
	static int totalPages = 0;

	if(pages == -1) {
		printf("더 분발하세요.\n");
		return;
	}

	totalPages += pages;
	printf("최종 누적 페이지 : %d\n",totalPages);
}

void main(void)
{
	int pages = 0;

	while(1) {
		printf("읽은 책의 페이지 수를 입력하시오 : ");
		scanf_s("%d",&pages);

		if(pages == -1) {
			book(pages);
			break;
		}

		book(pages);
	}
}