#include<stdio.h>

int main() {
	int arr[5] = { 10,20,30,40,50 };

	printf("arr[0] = %d\n", arr[0]);

	printf("arr = %p\n", arr);		// �迭�� �̸��� �迭�� '���� �ּ�'�� �ǹ�
	printf("arr + 1 = %p\n", arr + 1);
	printf("arr + 2 = %p\n", arr + 2);

	// �� 16���� : 0 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F
	//								  10 11 12 13 14 15

	printf("*arr = %d\n", *arr);
	printf("*arr = %d\n", *arr + 1);
	printf("*arr = %d\n", *(arr + 1));

	// �ּҸ� �̿��ؼ� �迭 ��ü ���
	for (size_t i = 0; i < 5; i++)
	{
		printf("*arr[%d] = %d\n", i, *(arr + i));
	}

}