#include <stdio.h>

//#define A 1 // 나는 1이라는 숫자를 A로 치환하겠다
//#define DEBUG 1

void main() 
{
	// 디버그 모드와 릴리즈 모드의 궁극적인 차이...
	//#if DEBUG
	//	printf("디버그 모드로 동작합니다.\n");
	//#else
	//	printf("릴리즈 모드로 동작합니다.\n");
	//#endif
	//	// 80% 공통 코드

	printf("현재 날짜는 %s입니다.\n",__DATE__);
	printf("현재 시간은 %s입니다.\n",__TIME__);
	printf("소스 파일은 %s입니다.\n",__FILE__);
	printf("현재 라인은 %d입니다.\n",__LINE__);
}