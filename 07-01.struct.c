#include<stdio.h>

// 1. ����ü ���� �� 
struct people {
	char name[20];
	int age;
};

// ������
typedef struct people People;


// 2. ����ü ���� �ϸ鼭 ������
typedef struct point {
	int x;
	int y;
}Point2D;


int main() {
	struct people p1 = { "ȫ�浿", 15 };
	People p2 = { "��浿", 17 };

	printf("p1) �̸� : %s, ���� : %d\n", p1.name, p1.age);
	printf("p2) �̸� : %s, ���� : %d\n", p2.name, p2.age);

	Point2D po1 = { 1,2 };
	Point2D po2 = { 3,10 };

	printf("po1�� ��ǥ ( %d,%d )\n", po1.x, po1.y);
	printf("po2�� ��ǥ ( %d,%d )\n", po2.x, po2.y);
}