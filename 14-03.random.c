#include<stdio.h>
#include<stdlib.h>	// ���� ���� ���� �Լ��� �ִ�
#include<time.h>

int main() {

	srand(time(NULL));	// �������� �پ��ϰ� ������ �ϴ� �Լ�

	for (int i = 0; i < 10; i++) {
		// rand()�� ������ ������ ��ȯ, ���� 0 ~ 32,767
		printf("%d ", rand() % 100);
		// 100 ���� ���� ������ => 0 ~ 99
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 100 + 1);
		// 1. 1 ~ 100
		// 1 ~ 100 - 1 => 0 ~ 99 => n % 100 + 1
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 96 + 5);
		// 2. 5 ~ 100
		// 5 ~ 100 - 5 => 0 ~ 95 => n % 96 + 5
	}
}