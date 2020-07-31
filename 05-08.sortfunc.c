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
	printf("배열 = ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

int main() {
	int arr[5] = { 4,8,2,7,6 };

	// 문제2) 배열 전체를 출력하는 함수
	printarr(arr);

	// 문제1) 정렬을 함수로 가능하게 구현
	selectSort(arr);

	printarr(arr);
}