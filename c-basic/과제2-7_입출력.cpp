#include<stdio.h>

// ����ڷκ��� 3 ���� ������ �Է� �޴´�.
// �Է��� �� ������ �հ� ����� ����ϴ� ���α׷��� �ۼ��϶�. 

void main() {
	int a = 0;
	int b = 0;
	int c = 0;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d%d%d", &a, &b, &c);

	int sum = a + b + c;
	int avg = sum / 3;

	printf("�� ������ �� : %d\n �� ������ ���: %d", sum, avg);
}


