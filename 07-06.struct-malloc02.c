#include<stdio.h>
#include<stdlib.h>


typedef struct point {
	int x;
	int y;
}Point;

int* getInt();
Point* getPoint();

int main() {
	// 1. �����Ҵ� ������ ��� => �Լ��� �����ΰ� ����!
//	int* pnum = (int*)malloc(sizeof(int));

	int* pnum = getInt();
	// 1. ���� �������� �º�(����)�� �캯(�����)�� �ڷ����� ���ƾ� �Ѵ� 
	// 2. �Լ��� ���ް��� �Ű������� ���� �� �ڷ����� ���ƾ� �Ѵ�

	Point* pp = getPoint();

	printf("pp.x pp.y : %d %d\n", pp->x, pp->y);

	// �����Ҵ� �� pp �� ����Ű�� ������ 10,20�� ���� �� ���
	pp->x = 10;
	pp->y = 20;

	printf("pp.x pp.y : %d %d\n",pp->x, pp->y);
	free(pnum);
	free(pp);
}

int* getInt() {	// 3. �����Ҵ��� �ϰ� �ش� �ּҸ� ��ȯ ==> �ǵ��� �ִ� �Լ�
	int* tmp = (int*)malloc(sizeof(int));	// �����Ҵ�
	*tmp = 0;								// �� 0���� �ʱ�ȭ
	return tmp;								// �Լ� ȣ�� ��ġ�� ��ȯ
	// 4. �Լ� return ���� �ڷ����� �Լ��� ��ȯ���� ���ƾ� �Ѵ�
}

Point* getPoint()
{
	Point* tmpA = (Point*)malloc(sizeof(Point));	// �����Ҵ�
	tmpA->x = 0;
	tmpA->y = 0;
	return tmpA;								// �Լ� ȣ�� ��ġ�� ��ȯ
}
