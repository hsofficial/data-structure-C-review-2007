#include<stdio.h>

int main() {
	int num;

	printf("���� �Է�(1 ~ 10) : ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1: case 3: case 5: case 7: case 9:
		printf("Ȧ���Դϴ�\n");
		break;

	case 2: case 4: case 6: case 8: case 10:
		printf("¦���Դϴ�\n");
		break;

	default:
		printf("�߸��� ������ ��\n");
		break;
	}
}