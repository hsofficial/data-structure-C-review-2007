#include<stdio.h>

void selectSort(int* arr) {
	int tmp;

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (*(arr + i) > * (arr + j)) {
				tmp = *(arr + i);			// tmp = arr[i];
				*(arr + i) = *(arr + j);	// arr[i] = arr[j];
				*(arr + j) = tmp;			// arr[j] = tmp;
			}
		}
	}
}

void printarr(int* a) {
	printf("�迭 = ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

int main() {
	int arr[5] = { 4,8,2,7,6 };

	// ����2) �迭 ��ü�� ����ϴ� �Լ�
	printarr(arr);

	// ����1) ������ �Լ��� �����ϰ� ����
	selectSort(arr);

	printarr(arr);
}