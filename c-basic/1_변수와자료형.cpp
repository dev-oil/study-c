#include<stdio.h>

void main() {
	// �ڷ���(Ÿ��) ������;
	int value; // 4byte �Ҵ�
	value = 100; 

	int num = 5; // �ʱ�ȭ

	// ���� ��� ��
	printf("%d %d\n", value, num); // ���� ��� - 100 5
	// %d ���� d �� �ǹ� decimal(10����)
	// o - octar (8����)
	// h - hexa (16����)
	// f - float (10�� �Ǽ�)
	// c - char (���� ����)
	// s - string (���ڿ�)

	// char ��
	int value = 100;
	char ch = 'C'; // '' (���� ������ ��), "" (���ڿ��� ��) 
	printf("���� : %d, ���� : %c\n", value, ch);

	// ������
	int width = 10;
	int height = 20;
	printf("�簢���� ���� : %d\n", width * height);

	// �Ǽ��� : �Ҽ����� ������ �� : �ε��Ҽ���
	double area = 0.0;
	int radius = 5;
	area = radius * radius * 3.14;
	printf("���� ���� %f \n", area); // 78.500000
	printf("���� ���� %.2f \n", area); // 78.50

	// ������
	char ch1 = 'A';
	char ch2 = 'b';
	char ch3 = '1';

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);

	printf("%c %d\n", ch3, ch3);

	// scanf 
	// �Է� ���� �� ����ϴ� 
	int input1 = 0;
	int input2 = 0;

	scanf_s("%d%d", &input1, &input2); // ���ٷ� �ϴ� �� / �� &�� �پ�����? �ּҰ����� ã�ư��� ���ؼ�
	//scanf_s("%d", &input2);

	printf("%d\n", input1 + input2);

	
}