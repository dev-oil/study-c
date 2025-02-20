

// 정수형 변수 1개를 전달인자로 받는 함수를 만든다. 
// 이 함수의 기능은 전달받은 정수형 변수에 2를 곱하여 리턴하는 것이다. 
// 이 함수를 main에서 호출하여 출력해보자.

int multiple(int a)
{
	return a * 2;
}

void main()
{
	int x = 2;
	printf("%d",multiple(x));
}