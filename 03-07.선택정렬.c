#include<stdio.h>

// ���� : �����͸� ��Ģ�ְ� ����
// �������� ���� : �����͸� ���� ������ ū ������ ����
// �������� ���� : �����͸� ū ������ ���� ������ ����


int main() {
	//�������� : ó�� �����ͺ��� ������ �����ͱ��� ���Ͽ� ���� ���� ���� ���� ������

	//��������
	int arr[5] = { 4,8,5,7,6 }, tmp = 0;

	printf("before sorting : ");
	for (int y = 0; y < 5; y++) {
		printf("%d ", arr[y]);
	}
	printf("\n=============================\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				printf("moniter >>> arr[i] = %d, arr[j] = %d, tmp = %d\n", arr[i], arr[j], tmp);
			}
		}
		
		printf("arr status >>> ");
		for (int x = 0; x < 5; x++) {
			printf("%d ", arr[x]);
		}
		printf("\n");
	}
	printf("=============================\n");

	printf("after sorting : ");
	for (int y = 0; y < 5; y++) {
		printf("%d ", arr[y]);
	}
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++\n");

	//��������
	arr[0] = 4;arr[1] = 8;arr[2] = 5;arr[3] = 7;arr[4] = 6;
	tmp = 0;

	printf("before sorting : ");
	for (int y = 0; y < 5; y++) {
		printf("%d ", arr[y]);
	}
	printf("\n=============================\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				printf("moniter >>> arr[i] = %d, arr[j] = %d, tmp = %d\n", arr[i], arr[j], tmp);
			}
		}
		
		printf("arr status >>> ");
		for (int x = 0; x < 5; x++) {
			printf("%d ", arr[x]);
		}
		printf("\n");
	}
	printf("=============================\n");

	printf("after sorting : ");
	for (int y = 0; y < 5; y++) {
		printf("%d ", arr[y]);
	}
	printf("\n=============================\n");
}