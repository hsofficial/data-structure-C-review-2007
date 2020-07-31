#include<stdio.h>

void compare(int n1, int n2) {
	if (n1 > n2)		printf("n1 = %d�� ū ��\n", n1);
	else if (n1 < n2)	printf("n2 = %d�� ū ��\n", n2);
	else				printf("�� ���� ���� ��\n");
}

int EvenOdd(int n) {
	if (n % 2 == 0)		return 1;
	else				return 0;
}

int prime(int n) {	// ex) n = 13
	for (int i = 2; i < n; i++) {
		if (n % i == 0)	return 0;
	}

	return 1;
}

int main() {
	// ����1) ��ȯ���� ���� �Լ�(void), �� ���� �Է¹޾� ū �� ����ϴ� �Լ� ����
	compare(10, 20);
	compare(20, 10);
	compare(10, 10);

	// ����2) ��ȯ���� �ִ� �Լ�, �Է¹��� ���� ¦������ Ȧ������ �Ǻ��ϴ� �Լ� ����
	printf("2 ==> ¦���� �� : %d\n", EvenOdd(2));
	printf("1 ==> Ȧ���� �� : %d\n", EvenOdd(1));

	int num;
	printf("���� �Է� : ");		scanf_s("%d", &num);

	if (EvenOdd(num))			printf("%d�� ¦��\n", num);
	else						printf("%d�� Ȧ��\n", num);

	for (int i = 1; i <= 100; i++) {
		if (EvenOdd(i))			printf("%d ", i);
	}
	printf("\n");

	// ����3) ��ȯ���� �ִ� �Լ�, �Ҽ��� �Ǻ��ϴ� �Լ� ����
	printf("���� �Է� : ");		scanf_s("%d", &num);

	if (prime(num))				printf("%d�� �Ҽ�\n", num);
	else						printf("%d�� �Ҽ��ƴ�\n", num);


	// ����4) 3������ ���� �Լ��� �̿��ؼ�, 1 ~ �Է¹��� �� ������ �Ҽ��� ��� ���
	// �� �Ҽ� : 1�� �ڱ� �ڽŸ� ����� ������ ���� ������
	// ex) 8 => 1 2 4 8 (x)
	//     7 => 1 7 (o)

	for (int i = 1; i <= 100; i++) {
		if (prime(i))			printf("%d ", i);
	}
	printf("\n");
}