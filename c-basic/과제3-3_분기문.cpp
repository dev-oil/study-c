#include<stdio.h>
#include<algorithm>

// ����ڷκ��� �� ���� ������ �Է� �޴´�. 
// �Է� ���� �� ���� ������ ���Ͽ� �� �� ���� ���� �ּҰ��� ����ϴ� ���α׷��� �ۼ��϶�.

void main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	printf("%d", std::min({ num1, num2, num3 }));
}
