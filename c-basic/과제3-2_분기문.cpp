#include<stdio.h>

// ����ڷκ��� �� ���� ������ �Է� �޴´�. �Է��� �� ���� ���Ͽ� ū ���� ����϶�.

void main() {
	int num1 = 0;
	int num2 = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d%d", &num1, &num2);

	num1 > num2 ? printf("%d", num1) : printf("%d", num2);
}
