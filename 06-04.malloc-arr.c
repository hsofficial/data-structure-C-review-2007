#include<stdio.h>
#include<stdlib.h>

int main() {
	int count;
	printf("�迭 ���� : ");
	scanf_s("%d", &count);

	//	int arr[count];	// �����Ҵ� �迭

	//	int* arr = (int*)malloc(sizeof(int) * 5);
	int* arr = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {	// �迭 �Է�
		*(arr + i) = i + 1;
	}

	for (int i = 0; i < count; i++) {	// �迭 ���
		printf("%d ", *(arr + i));
	}
	printf("\n");

	free(arr);
}