#include<stdio.h>
#include<stdlib.h>	// malloc, free
#include<string.h>

typedef struct people {
	char name[20];
	int age;
}People;

int main() {
	//�⺻ �ڷ��� �����Ҵ�
	int* pnum = (int*)malloc(sizeof(int));
	double* pdb = (double*)malloc(sizeof(double));

	//����ü �ڷ��� �����Ҵ�
	People* pp = (People*)malloc(sizeof(People));

	printf("People �ڷ��� ũ�� : %d byte\n", sizeof(People));

	pp->age = 15;
	strcpy(pp->name, "ȫ�浿");

	printf("�̸� : %s, ���� : %d��\n", pp->name, pp->age);

	free(pnum);
	free(pdb);
}