#include<stdio.h>
#include<stdlib.h>

int main() {
	//동적할당
	int** arr_2 = (int**)malloc(sizeof(int) * 3);
	int count = 1;

	for (int i = 0; i < 3; i++) {
		*(arr_2 + i) = (int*)malloc(sizeof(int) * 4);
	}

	//입력
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			*(*(arr_2 + i) + j) = count;
			count++;
		}
	}

	//출력
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2d ", *(*(arr_2 + i) + j));
		}
		printf("\n");
	}

	//해제
	for (int i = 0; i < 3; i++) {
		free(*(arr_2 + i));
	}

	free(arr_2);



}