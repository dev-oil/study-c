#include<stdio.h>

void main() {
	// ��� ������
	//int a = 5;
	//int b = 3;

	//printf("�� ���� �� : %d\n", a + b);
	//printf("�� ���� �� : %d\n", a - b);
	//printf("�� ���� �� : %d\n", a * b);
	//printf("�� ���� �� : %d\n", a / b);
	//printf("�� ���� ������ : %d\n", a % b);

	// ���� ������
	//int a = 5;
	//int b = 3;

	//a += b;
	//printf("%d\n", a); // 8

	//a -= b;
	//printf("%d\n", a); // 5

	//a *= b;
	//printf("%d\n", a); // 15

	//a /= b;
	//printf("%d\n", a); // 5

	// ���� ������
	//int a = 0;
	//int b = 0;

	//a = 5;
	//printf("%d\n", ++a); // 6

	//a = 5;
	//printf("%d\n", a++); // 5
	//printf("%d\n", a); // 6

	//b = 10;
	//printf("%d\n", --b); // 9

	//b = 10;
	//printf("%d\n", b--); // 10
	//printf("%d\n", b); // 9

	// ���� ������
	//int a = 10;
	//int b = 11;
	//int c = 12;
	//int d = 10;

	//printf("%d\n", a == b); // 0 (false)
	//printf("%d\n", a < b); // 1 (true)
	//printf("%d\n", a >= c); // 0 (false)
	//printf("%d\n", a == d); // 1 (true)

	// �� ������
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;
	
	printf("%d\n", !(a == 10)); // 0 (false)
	printf("%d\n", (a < b) && (a < c)); // 1 (true)
	printf("%d\n", (a >= c) && (a == d)); // 0 (false)
	printf("%d\n", (a >= c) || (a == d)); // 1 (true)

}