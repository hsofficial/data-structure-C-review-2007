#include<stdio.h>

// swtich���� if������ �ξ� ������
// if�� -> switch�� (o)
// switch�� -> if�� (�̹�)

int main() {
	int menu;

	printf("========== �޴� ==========\n");
	printf("\t1. ¥���\n");
	printf("\t2. «��\n");
	printf("\t3. ������\n");
	printf("\t4. ������\n");
	printf("\t>>> ");
	scanf_s("%d", &menu);
	printf("==========================\n");

	switch (menu)
	{
	case 1:
		printf("¥��� �ֹ�~\n");
		break;
	case 2:
		printf("«�� �ֹ�~\n");
		break;
	case 3:
		printf("������ �ֹ�~\n");
		break;
	case 4:
		printf("������ �ֹ�~\n");
		break;
	default:
		printf("wrong menu\n");
		break;
	}
}