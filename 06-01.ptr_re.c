#include<stdio.h>

// ���� : �����͸� �����ϴ� ����
// ������ ���� : ������ ����� �ּҸ� �����ϴ� ����
// ���� ������ : ������ ������ �ּҸ� �����ϴ� ����

int main() {
	int num = 10;		// ���� ���� num�� 10�� ����

	int* pnum = &num;	// ������ ������ num�� �ּҸ� ����

	printf("num = %d\n", num);
	printf("num�� �ּ� = %p\n", &num);
	printf("pnum = %p\n", pnum);
	printf("num�� �ּ� ���� ���� = %d\n", *&num);
	printf("pnum�� ����Ű�� �ּ� ���� ���� = %d\n\n", *pnum);

	int** ppnum = &pnum;	// ������ ������ pnum�� �ּҸ� ����
							// ��> ���� �����Ϳ� ������ ������ �ּҸ� ����

	// ppnum -> pnum
	// pnum -> num
	// num = 10

	// ppnum -> pnum -> num(10)

	printf("ppnum = %p\n", ppnum);
	printf("pnum�� �ּ� = %p\n", &pnum);
	printf("ppnum�� ����Ű�� �ּ� ���� ���� = %p\n", *ppnum);
	printf("pnum = %p\n", pnum);	// num�� �ּ�
	printf("pnum�� ����Ű�� �ּ� ���� ���� = %d\n", *pnum);
	printf("num = %d\n", num);
	printf("ppnum�� �� �� �����ϸ�? %d\n", **ppnum);

	// *(*ppnum) => *(pnum) => num
}