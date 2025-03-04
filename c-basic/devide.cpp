#include<stdio.h>

extern int Plus(int a,int b);

void main()
{
	int result = Plus(10,20);
	printf("두 수의 합 %d\n",result);
}