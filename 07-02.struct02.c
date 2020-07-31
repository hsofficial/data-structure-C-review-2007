#include<stdio.h>

// ����ü : ����� ���� '�ڷ���'

// ����, �ڷ����̹Ƿ� �迭, ������, �Լ��� �Ű����� �� ��ȯ��, �����Ҵ����� ��밡��

typedef struct point {
	int x, y;
}Point2D;

int main() {
	// 1. �迭
	int arr[3] = { 10,20,30 };

	Point2D pmember[3] = { {1,2}, {2,3}, {3,4} };

	printf("Point2D �ڷ����� ũ�� : %d byte\n", sizeof(Point2D));

	for (size_t i = 0; i < 3; i++)
	{
		printf("pmember[%d] = ( %d,%d )\n", i, pmember[i].x, pmember[i].y);
	}

	pmember[2].y = 5;

	for (size_t i = 0; i < 3; i++)
	{
		printf("pmember[%d] = ( %d,%d )\n", i, pmember[i].x, pmember[i].y);
	}

	for (size_t i = 0; i < 3; i++)
	{
		printf("int[%d] = ( %d )\n", i, arr[i]);
	}

	// 2. ������ => ������ => �ڷ��� �ڿ� * �� ���̸� ������ ����
	// �⺻������ ������ ������ �ڷ����� ������ ������ �ڷ����� �Ȱ��� �����
	int num = 10;
	int* pnum = &num;		// num�� �ּ� => int�� => int* pnum�� ����

	Point2D p1 = { 10,20 };
	Point2D* pp1 = &p1;		// p1�� �ּ� => Point2D => Point2D* pp1�� ����

	printf("pnum�� ����Ű�� �ּ� ���� �� : %d\n", *pnum);
	printf("pp1�� ����Ű�� �ּ� ���� �� : ( %d,%d )\n", pp1->x, pp1->y);
	// ����ü ������, �� �ּҷ� ������� ���ٽ� -> (arrow) �����ڸ� ����Ѵ�
	printf("pp1�� ����Ű�� �ּ� ���� �� : ( %d,%d )\n", (*pp1).x, (*pp1).y);

}