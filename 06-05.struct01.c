#include<stdio.h>

// typedef : Ÿ�� ������
typedef int element;
// int ���� element��� �̸����� ����ϰڴ�
typedef unsigned int uint;


int main() {
	int num1 = 10;
	element num2 = 20;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num1�� ũ�� : %d byte\n", sizeof(num1));
	printf("num2�� ũ�� : %d byte\n", sizeof(num2));

	int num3 = 3000000000;
	uint num4 = 3000000000;

	printf("num3 = %d\n", num3);
	printf("num4 = %u\n", num4);
}