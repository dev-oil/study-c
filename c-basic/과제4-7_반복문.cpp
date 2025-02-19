#include<stdio.h>


// 반복문을 사용하여 1부터 10까지의 합을 출력하라. 
// (while문,for문,do-while문 각각 세 개의 예제 작성할 것.)

void main()
{
	// while
	int answer1 = 0;
	int num1 = 1;

	while(num1 < 11) 
	{
		answer1 += num1++;
	} 

	printf("%d\n", answer1);

	// for
	int answer2 = 0;

	for(int num2 = 1; num2 < 11; num2++) 
	{
		answer2 += num2;
	}

	printf("%d\n",answer2);

	//do while
	int answer3 = 0;
	int num3 = 1;

	do {
		answer3 += num3++;
	} while(num3 < 11);

	printf("%d\n",answer3);
}
