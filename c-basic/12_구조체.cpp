#include <stdio.h>
#include <string.h>

struct Student {
	char name[10]; // 구조체 멤버
	int age;
	double height;
}st1[3] = {
	{"김현정",20,160.5},
	{"홍민경",21,162.5},
	{"강동성",22,163.5}


}, *pSt;

//st1 = {"happy",28,166.5} ,st2, *pSt; // 초기화

void main()
{
	
	// 점으로 구조체 멤버에 접근하여 값 할당
	/*strcpy_s(st1.name,"happy");
	st1.age = 27;
	st1.height = 166;

	printf("이름 : %s, 나이 : %d, 키 : %f",st1.name,st1.age,st1.height);*/

	/*pSt = &st1;
	strcpy_s(pSt->name,"happy");

	pSt->age = 27;
	pSt->height = 166;

	printf("이름 : %s, 나이 : %d, 키 : %f",pSt->name,pSt->age,pSt->height);*/

	//printf("이름 : %s, 나이 : %d, 키 : %.2f",st1.name,st1.age,st1.height);

	/*for (int i = 0; i < sizeof(st1) / sizeof(st1[0]); i++) {
		printf("이름: %s, 나이 : %d, 키 : %f\n",st1[i].name,st1[i].age,st1[i].height);
	}*/

	pSt = st1;

	for(int i = 0; i < sizeof(st1) / sizeof(st1[0]); i++) {
		printf("이름: %s, 나이 : %d, 키 : %f\n",(pSt + i)->name,(pSt + i)->age,(pSt + i)->height);
	}
}