#include<stdio.h>

int main() {

	for (size_t i = 0; i < 5; i++)		//��ݺ�
	{
		for (size_t j = 0; j < 5; j++) {	//���ݺ�
			printf("*");
		}
		printf("\n");
	}

	//������

	for (size_t x = 1; x < 10; x++)
	{
		for (size_t y = 1; y < 10; y++)
		{
			printf("%d * %d = %d\n",x, y, x * y);
		}
		printf("\n");
	}
	printf("\n=============================\n");

	//*
	int num1;

	//1234�ﰢ��
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // ��(������)�� ��
		for (int j = 0; j < i + 1; j++) { // ��(������)�� ��
			printf("*");
		}
		printf("\n");
	}
	printf("\n=============================\n");

	printf("line of stars : ");
	scanf_s("%d", &num1);

	//1234������
	for (int i = 0; i < num1 + 1; i++) { // ��(������)�� ��
		for (int j = 0; j < num1 - i; j++)
		{
			printf(" ");	//�� ����
		}
		for (int j = 0; j <= i; j++) 
		{
			printf("*");	//�� *
		}
		printf("\n");
	}
	printf("\n=============================\n");

	//135���ﰢ
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // ��(������)�� ��
		for (int j = 0; j < num1 - i; j++)
		{
			printf(" ");	//�� ����
		}
		for (int j = 0; j <= i * 2; j++)
		{
			printf("*");	//�� *
			
		}
		printf("\n");
	}
	printf("\n=============================\n");

	//321�ﰢ��
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // ��(������)�� ��
		for (int j = 0; j < num1 - i; j++)
		{
			printf("*");	//�� *
		}
		printf("\n");
	}
	printf("\n=============================\n");
}