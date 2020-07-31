#include<stdio.h>
#include<stdlib.h>	// malloc, free
#include<string.h>

typedef struct people {
	char name[20];
	int age;
}People;

int main() {
	//기본 자료형 동적할당
	int* pnum = (int*)malloc(sizeof(int));
	double* pdb = (double*)malloc(sizeof(double));

	//구조체 자료형 동적할당
	People* pp = (People*)malloc(sizeof(People));

	printf("People 자료형 크기 : %d byte\n", sizeof(People));

	pp->age = 15;
	strcpy(pp->name, "홍길동");

	printf("이름 : %s, 나이 : %d세\n", pp->name, pp->age);

	free(pnum);
	free(pdb);
}