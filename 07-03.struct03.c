#include<stdio.h>

typedef struct point {
	int x, y;
}Point2D;

void print2D(Point2D po) {	// �Լ��� ���ް��� �Ű������� �ڷ��� �� ������ ���ƾ� �Ѵ�
	printf("��ǥ) %d,%d\n", po.x, po.y);
}

void myswap(Point2D* p1, Point2D* p2) {
	Point2D tmp;

	tmp = * p1;
	* p1 = * p2;
	* p2 = tmp;

}

int main() {
	// 3. �Լ�
	Point2D p1 = { 1,2 };

	// �Լ� ���� ���
	printf("p1) %d,%d\n", p1.x, p1.y);

	// �Լ��� ���
	print2D(p1);	// ���ް� : p1 => p1�� �ڷ����� Point2D

	Point2D p2;
	p2 = p1;			// �⺻������ ����ü ������ ���� �ڷ������� ���Կ������� ���� ����

	print2D(p2);

	Point2D p3 = { 30,40 };
	print2D(p3);

	// ����ü ���� p1�� p3�� �����͸� ��ü�ϴ� swap�Լ��� ����
	printf("p1�� ");		print2D(p1);
	printf("p3�� ");		print2D(p3);

	myswap(&p1, &p3);
	// �ּҸ� ���� => �Ű������� ���� �ܰ谡 �þ��

	printf("p1�� ");		print2D(p1);
	printf("p3�� ");		print2D(p3);

}
