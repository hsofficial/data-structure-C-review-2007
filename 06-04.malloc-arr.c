#include<stdio.h>
#include<stdlib.h>

int main() {
	int count;
	printf("배열 개수 : ");
	scanf_s("%d", &count);

	//	int arr[count];	// 정적할당 배열

	//	int* arr = (int*)malloc(sizeof(int) * 5);
	int* arr = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {	// 배열 입력
		*(arr + i) = i + 1;
	}

	for (int i = 0; i < count; i++) {	// 배열 출력
		printf("%d ", *(arr + i));
	}
	printf("\n");

	free(arr);
}