#include<stdio.h>

void main() 
{/*
	int a = 6;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a > 5) 
	{
		printf("a�� 5���� ũ��\n");
	} 
	else if (a < 5) 
	{
		printf("a�� 5���� �۴�\n");
	} 
	else if (a == 5)
	{
		printf("a�� 5��!\n");
	}
	else
	{
		printf("a���� ��ȿ���� �ʴ�..\n");
	}*/

	// ===========================================================================
	// switch - case ��
	/*int shortcut = 0;

	printf("����Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &shortcut);

	switch (shortcut) 
	{
	case 1 :
		printf("�� : 010-xxxx-xxxx ��ȭ�� �Ǵ�.");
		break;
	case 2 :
		printf("�Ƶ� : 010-xxxx-xxxx ��ȭ�� �Ǵ�.");
		break;
	case 3 :
		printf("ģ�� : 010-xxxx-xxxx ��ȭ�� �Ǵ�.");
		break;
	default :
		printf("�ش� ����Ű�� �����ϴ�.");
		break;
	}*/

	// ===========================================================================
	// �� �Է��ϼ��� ���� Ǯ�� ~~
	int month = 0;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ� �Դϴ�.");
		break;
	case 3:
	case 4:
	case 5:
		printf("���Դϴ�.");
		break;
	case 6:
	case 7:
	case 8:
		printf("�����Դϴ�.");
		break;
	case 9:
	case 10:
	case 11:
		printf("�����Դϴ�.");
		break;
	default:
		printf("�ش��ϴ� ���� �����ϴ�.");
		break;
	}
}
