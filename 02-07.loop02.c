#include<stdio.h>

int main() {
	// ���ѹݺ�
	int num;

	while (1) {
		printf("���� �Է�(0�� �Է½� ����) : ");
		scanf_s("%d", &num);

		if (num == 0)	break;

		printf("�Է� ���� num = %d\n", num);
	}
	printf("================================\n");

	// ���ǽ��� ���� �ݺ�
	num = 1;

	while (num != 0) {
		printf("���� �Է�(0�� �Է½� ����) : ");
		scanf_s("%d", &num);

		printf("�Է� ���� num = %d\n", num);
	}
	printf("================================\n");

	for (size_t i = 0; ; i++)
	{
		printf("���� �Է�(0�� �Է½� ����) : ");
		scanf_s("%d", &num);

		if (num == 0)	break;

		printf("�Է� ���� num = %d\n", num);
	}
}