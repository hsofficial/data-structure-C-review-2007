#include<stdio.h>

void main() {
	//q1
	int num;

	printf("number : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("even number\n");
	}
	else {
		printf("odd number\n");
	}

	printf("=======================================\n");
	//q2 > 3�� �� ��� ���� ū ��

	int a, b, c, max;

	printf("number and enter(A,B,C) > \n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	max = a;

	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	printf("maximum num is %d.\n", max);

	printf("=======================================\n");
	//q3 > �����
	int sca, scb, scc, tot, avg;
	printf("scoreA : ");
	scanf_s("%d", &sca);
	printf("scoreB : ");
	scanf_s("%d", &scb);
	printf("scoreC : ");
	scanf_s("%d", &scc);

	tot = sca + scb + scc;
	avg = tot / 3;

	printf("avg is %d and total is %d\n",avg,tot);

	if (avg >= 90 && avg < 101)
	{
		printf("A Score\n");
	}
	else if (avg >= 80)
	{
		printf("B Score\n");
	}
	else if (avg >= 70)
	{
		printf("C Score\n");
	}
	else if (avg >= 60)
	{
		printf("D Score\n");
	}
	else if (avg >= 0)
	{
		printf("F Score\n");
	}

	printf("=======================================\n");
	//q4 > �ֹι�ȣ ~ ����
	int krnum, t_sex, byear, t_byear, age;
	char sex;
	printf("KR S/N(******) : ");
	scanf_s("%d", &krnum);
	printf("KR S/N sex([bday]-*) : ");
	scanf_s("%d", &t_sex);

	//90���, 00��� ���� > byear ���
	t_byear = krnum / 10000;

	if (t_byear < 10)
	{
		byear = t_byear + 2000;
	}
	else
	{
		byear = t_byear + 1900;
	}

	//sex ����
	/*
	if (t_sex == 1 | t_sex == 3)
	{
		sex = 'male';
	}
	else if (t_sex == 2 | t_sex == 4)
	{
		sex = 'female';
	}
	*/

	//age calc
	age = (2020 - byear) + 1;

	//output
	printf("age : %d, birth year : %d\n", age, byear);
	printf("sex : %d", t_sex);
}