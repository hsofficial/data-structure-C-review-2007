#include<stdio.h>

void total(int n, int* s) {
	for (int i = 1; i <= n; i++) {
		*s += i;
	}
}

int main() {
	int num, sum = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	// ����) ��ȯ���� ����(void) ������ �Լ��� 1 ~ num������ �հ踦
	// main �Լ����� ���

	total(num, &sum);
	// num�� total���� �ٲ� �ʿ䰡 ���� ==> ���� �����ϴ� ���� ����
	// sum�� total���� �ٲ� �ʿ䰡 ���� ==> �ּҸ� �����ؾ� ���� ���� ����

	printf("�հ� : %d\n", sum);
}

