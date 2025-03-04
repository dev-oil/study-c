#include<stdio.h>

// 우리가 우체국에서 물건을 어디론가 보낼 때,
// 물건의 종류,무게,높이 등의 정보를 입력한다. 
// 우리는 이러한 정보들을 갖고 있는 물건에 대한 구조체를 만들어보자. 
// 구조체 이름은 object 라고 하고,
// 구조체 멤버로는 이름(name),높이(height),무게(weight)를 갖는다. 
// 구조체 변수를 하나 선언하고,구조체 변수를 통해 각각의 멤버에 값을 대입한다. 
// 대입하는 값은 사용자로부터 입력 받으며, 입력이 끝나면 대입한 멤버의 값을 
// 화면에 출력하도록 프로그램을 작성하라.

// 출력 예)
// 물건의 이름 : 책
// 물건의 높이(cm) : 30
// 물건의 무게(kg) : 2
//
// 보낼 물건의 정보 : 책,30cm,2kg

struct Object {
	char name[20]; // 구조체 멤버
	int height;
	int weight;
}obj1;

void main() {

	printf("물건의 종류 입력 : ");
	scanf_s("%s", obj1.name, 20);

	printf("물건의 높이 입력 : ");
	scanf_s("%d", &obj1.height);

	printf("물건의 무게 입력 : ");
	scanf_s("%d", &obj1.weight);


	printf("보낼 물건의 정보 : %s,%dcm,%dkg", obj1.name, obj1.height, obj1.weight);
}

