#include<stdio.h>
#include<stdlib.h>

int* getInt();

int main() {
	// 1. ������ �����Ҵ� ���� �� �� ���� �� ���� 10, 20�� �����ϰ� ���
	int* num1, * num2;

	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int));

	printf("���� �Է�1 :");
	scanf_s("%d", &* ptr1);
	printf("���� �Է�2 :");
	scanf_s("%d", &* ptr2);

	printf("ptr1 = %d\n", *ptr1);
	printf("ptr2 = %d\n\n", *ptr2);

	free(ptr1);
	free(ptr2);
	// 2. �Ǽ��� �����Ҵ� ���� ���� �� 3.14 �����ϰ� ���
	double* db = (double*)malloc(sizeof(double));

	*db = 3.14;

	printf("db = %f\n\n", *db);
	free(db);
	// 3. ������ �����Ҵ� ������ �Է� �޾Ƽ� ���
	int* num3;
	int* ptr3 = (int*)malloc(sizeof(int));

	printf("���� �Է�3 :");
	scanf_s("%d", &*ptr3);

	printf("ptr3 = %d\n\n", *ptr3);
	free(ptr3);

	// 4. �����Ҵ� ���� �ǰ� ��� => �׷� �ƿ� �����Ҵ��� ���ִ� �Լ��� ������
	int* num4;


	num4 = getInt();

	printf("num4 = %d\n", *num4);

	*num4 = 40;

	printf("num4 = %d\n", *num4);
	free(num4);
}

int* getInt() {
	int* tmp = (int*)malloc(sizeof(int));	// �����Ҵ�
	*tmp = 0;								// �� 0���� �ʱ�ȭ
	return tmp;								// �Լ� ȣ�� ��ġ�� ��ȯ
}