#include <stdio.h>

void main() {

	//Q1
	int num;

	printf("plz input number : ");
	scanf_s("%d", &num);

	while (num)
	{
		printf("%d", num % 10);
		num = num / 10;
	}
	printf("\n=============================\n");

	//q2 : ����~����
	int bin, sum = 0, i = 1;

	printf("plz input number(0-9 number system) : ");
	scanf_s("%d", &num);

	printf("zero/one system number : ");
	while (num > 0)
	{
		bin = num % 2;	//2 �������ؼ� �������� bin
		sum += bin * i;	//sum�� bin * �ڸ���(i ~ 10 100 1000������ ����)
		num = num / 2;	//2 ������ �ǽ�
		i = i * 10;		//��Ģ�� �°� �ڸ��� ���ϱ� �ǽ�
	}
	printf("%d", sum);
	printf("\n=============================\n");

	//Q3 �� ����� ����
	int res01 = 0;

	printf("plz input number : ");
	scanf_s("%d", &num);

	while (num != 0) {
		res01 = res01 * 10 + num % 10;
		num /= 10;
	}

	printf("res01 + 100 = %d\n", res01 + 100);

	/*
	����
	�Է� : 123, result = 0

	1ȸ�� : result = 0 * 10 + 123 % 10 = 3
	2ȸ�� : result = 3 * 10 + 12 % 10 = 32
	3ȸ�� : result = 32 * 10 + 1 % 10 = 321
	num = 0 ( �ݺ� ���� )

	*/
}