#include<stdio.h>
// ������ ���� ���ó
// 1. �����Ҵ��� ����ϱ� ���ؼ�
// 2. �Լ� ȣ��� ������ ���� �ش� �Լ����� �� �����ϱ� ���ؼ�

void func(int num) {
	num += 10;
	printf("func ����   ) num = %d\n", num);
}

void pfunc(int* num) {	// ȣ��� �ּҸ� ���޹��� => �ּҸ� �����ϴ� ���� == ������ ����
	*num += 10;			// num = &num (main �Լ� num�� �ּ�)
	printf("pfunc ����   ) *num = %d\n", *num);
}

int main() {
	int num = 10;

	printf("func ȣ�� ��) num = %d\n", num);
	func(num);
	printf("func ȣ�� ��) num = %d\n\n", num);

	printf("pfunc ȣ�� ��) num = %d\n", num);
	pfunc(&num);	//�������� => ���� �ּҸ� ����
	printf("pfunc ȣ�� ��) num = %d\n", num);

	/*
	1. �Լ� ȣ��� ���� �����ϸ� ����(*) �ܰ谡 �þ�� �ʴ´�
	2. �Լ� ȣ��� �ּҸ� �����ϸ� ����(*) �ܰ谡 �þ��
	ex.
	- int�� ���� �����ϸ� �Ű������� int�� �޴´�
	- int�� �ּҸ� �����ϸ� �Ű������� int*�� �޴´�
	- double�� ���� �����ϸ� �Ű������� double�� �޴´�
	- double�� �ּҸ� �����ϸ� �Ű������� double*�� �޴´�
	�Լ��� ���� �����ϸ� �ش� �Լ��� ������ �ٲ� �� ���� (= �纻 ����)
	�Լ��� �ּҸ� �����ϸ� �ش� �Լ��� ���޹��� ������ �ٲ� �� ���� (= �� ���� ��ġ�� ����)
	*/

}