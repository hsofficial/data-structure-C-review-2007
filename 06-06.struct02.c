#include<stdio.h>
#include<string.h>	// ���ڿ� ����, ����, �� �Լ��� ����

// ���� : �����͸� �����ϴ� ����
// �迭 : ���� �ڷ������� �޸𸮻� ���ӵ� ����
// ����ü : ���� �ڷ����� ��� ���ο� �ڷ������� ���� (= ����� ���� �ڷ���)

// ����ü ���� ==> struct ����ü�� { �ڷ��� ������; };
struct people {
	char name[20];
	int age;
	double height;
	// ����ü �ȿ� �ִ� ����(= �������)
};

int main() {
	// ����ü�� ������� ���� ����
	char name[20] = "ȫ�浿";
	int age = 20;
	double height = 175.2;

	printf("�̸� : %s, ���� : %d, Ű : %.1lf\n", name, age, height);

	// �Ѹ��� ����� �����͸� �� �����Ϸ��� ���� ���� ������ŭ �� �ʿ� ==> �ڵ� �ߺ�
	struct people p1 = { "ȫ�浿", 20, 175.2 };
	struct people p2 = { "������", 23, 175.1 };

	printf("�̸� : %s, ���� : %d, Ű : %.1lf\n", p1.name, p1.age, p1.height);
	printf("�̸� : %s, ���� : %d, Ű : %.1lf\n", p2.name, p2.age, p2.height);

	struct people p3;	// ���� �迭�� ���Կ��� �Ұ���
	strcpy(p3.name, "������");	// ���� ���ڿ��� ������ ����

	p3.age = 28;
	p3.height = 165.5;

	printf("�̸� : %s, ���� : %d, Ű : %.1lf\n", p3.name, p3.age, p3.height);
}