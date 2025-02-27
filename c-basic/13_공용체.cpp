#include <stdio.h>
#include <string.h>

union unTemp
{
	char a;
	int b;
	double c;
}un;

enum Week {
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};

void main()
{
	//printf("주소 : %x, 크기 : %d\n",&un.a,sizeof(un.a));
	//printf("주소 : %x, 크기 : %d\n",&un.b,sizeof(un.b));
	//printf("주소 : %x, 크기 : %d\n",&un.c,sizeof(un.c));

	//un.a = 'A';
	//printf("문자형 a : %c\n",un.a);

	//un.b = 100;
	//printf("정수형 b : %c\n",un.b);

	//un.c = 3.14;
	//printf("실수형 c : %.2f\n",un.c);
	//printf("문자형 a : %c\n",un.a);

	int day = 0;
	printf("요일을 입력하세요: ");
	scanf_s("%d",&day);

	switch(day)
	{
	case sun :
		printf("일요일엔 짜파게티\n");	
		break;
	case mon:
		printf("월요일엔 월요병\n");
		break;
	case tue:
		printf("화요일엔 만나요\n");
		break;
	case wed:
		printf("수요일엔 만나요\n");
		break;
	default:
		break;
	}
}