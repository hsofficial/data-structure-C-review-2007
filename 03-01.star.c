#include<stdio.h>

int main() {
	int star;

	printf("number of star lines : ");
	scanf_s("%d", &star);
	printf("===========================\n");
	// 직각 삼각형
	for (int i = 0; i < star; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("===========================\n");
	// 좌우 반전
	for (int i = 0; i < star; i++) {
		for (int j = star - i - 1; j >= 1; j--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("===========================\n");
	// 피라미드
	for (int i = 0; i < star; i++) {
		for (int j = star - i - 1; j >= 1; j--) {
			printf(" ");
		}
		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("===========================\n");
	// ㅁ
	for (int i = 0; i < star; i++) {
		for (int j = 0; j < star; j++) {
			if (i == 0 || j == 0 || i == star - 1 || j == star - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("===========================\n");
	//x
	for (int i = 0; i < star; i++) {
		for (int j = 0; j < star; j++) {
			if(i == j || i + j == star - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("===========================\n");
	// +
	for (int i = 0; i < star; i++) {
		for (int j = 0; j < star; j++) {
			if (i == star / 2 || j == star / 2)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

}