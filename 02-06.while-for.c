#include<stdio.h>

// while : ��Ư�� Ƚ�� �ݺ��� ���� ���
// for : Ư�� Ƚ�� �ݺ��� ���� ���

// while < - > for  :  ���� ���� ���� ����

int main() {
	// 1.Ư�� Ƚ�� �ݺ�

	int num = 1, i;

	// while(���ǽ�) : ���ǽ��� ���̸� ���ӹ��� ����, �����̸� �ݺ� ����
	while (num <= 5) {
		printf("%d > Hello world!!!\n", num);
		num++;	//������
	}

	printf("%d > �ݺ�����\n\n", num);

	// (�ʱⰪ; ���ǽ�; ������)
	for (i = 1; i < 5; i++)
	{
		printf("%d > Hello world!!!\n", i);
	}
	printf("%d > �ݺ�����\n\n", i);
}