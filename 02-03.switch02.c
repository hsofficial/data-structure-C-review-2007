#include<stdio.h>

int main() {
	int num;

	printf("정수 입력(1 ~ 10) : ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1: case 3: case 5: case 7: case 9:
		printf("홀수입니다\n");
		break;

	case 2: case 4: case 6: case 8: case 10:
		printf("짝수입니다\n");
		break;

	default:
		printf("잘못된 범위의 값\n");
		break;
	}
}