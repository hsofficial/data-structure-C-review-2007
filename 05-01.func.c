#include<stdio.h>

int adder_1(int n1, int n2) { // �Ű����� : �Լ� ȣ��� ���޹��� ���� �����ϴ� ����
	return n1 + n2;
	//�Լ���(adder_1) ���� �ڷ���(int) ==> ��ȯ�� : �Լ��� ����� return ���� �ڷ����� �ǹ�
	// return ���� �Լ��� ȣ�� �κ����� ����
}

void adder_2(int n1, int n2) {
	printf("�� ������ �� : %d\n", n1 + n2);
}

int main() {
	int num1 = 10, num2 = 20;
	int result = 0;

	result = adder_1(num1, num2);
	// num1 = 10, num2 = 20  ==>  adder_1(10, 20);
	// �Լ� ȣ�� => �Լ��� ���� ����

	printf("(main)�� ������ �� : %d\n", result);
	//��ȯ���� �ִ� �Լ� : �Լ��� ����� ���� �ǵ��ƿ��� ������ ���� �����ϰų� �ٷ� Ȱ��
	

	adder_2(num1, num2);
	//��ȯ���� ���� �Լ� : �Լ��� ����� �ǵ��ƿ��� ���� > �̸��� ȣ��
}