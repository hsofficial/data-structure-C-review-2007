#include<stdio.h>
#include<stdlib.h>

int main() {
	//�����Ҵ�
	int** arr_2 = (int**)malloc(sizeof(int) * 3);
	int count = 1;

	for (int i = 0; i < 3; i++) {
		*(arr_2 + i) = (int*)malloc(sizeof(int) * 4);
	}

	//�Է�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			*(*(arr_2 + i) + j) = count;
			count++;
		}
	}

	//���
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2d ", *(*(arr_2 + i) + j));
		}
		printf("\n");
	}

	//����
	for (int i = 0; i < 3; i++) {
		free(*(arr_2 + i));
	}

	free(arr_2);



}