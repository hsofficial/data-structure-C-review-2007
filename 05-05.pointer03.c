#include<stdio.h>

void aValue(int n) {
	if (n < 0)		n = -n;
}

void aValueP(int* n) {
	if (*n < 0)		*n = -*n;
}

int aValueR(int n) {
	if (n < 0)		n = -n;
	return n;
}

int main() {
	// ���밪�� ���ϴ� �Լ�
	int num = -10;

	aValue(num);			// ���� ������ num�� �� �ٲ�
	printf("num = %d\n", num);

	aValueP(&num);			// �ּҸ� ������ num�� �ٲ� �� ����
	printf("num = %d\n", num);

	// ��ȯ�� �Լ�
	num = aValueR(num);
	printf("num = %d\n", num);
}