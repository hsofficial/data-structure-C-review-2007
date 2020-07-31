#include<stdio.h>

int main() {
	// 무한반복
	int num;

	while (1) {
		printf("정수 입력(0을 입력시 종료) : ");
		scanf_s("%d", &num);

		if (num == 0)	break;

		printf("입력 받은 num = %d\n", num);
	}
	printf("================================\n");

	// 조건식을 통한 반복
	num = 1;

	while (num != 0) {
		printf("정수 입력(0을 입력시 종료) : ");
		scanf_s("%d", &num);

		printf("입력 받은 num = %d\n", num);
	}
	printf("================================\n");

	for (size_t i = 0; ; i++)
	{
		printf("정수 입력(0을 입력시 종료) : ");
		scanf_s("%d", &num);

		if (num == 0)	break;

		printf("입력 받은 num = %d\n", num);
	}
}