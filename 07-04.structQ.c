#include<stdio.h>
// 1. �л������� ������ �� �ִ� ����ü �ڷ��� ����
	// ��� ���� : kor, eng, math, sum, avg
	// ����ü �̸� : Student

typedef struct Student {
	int kor, eng, math, sum;
	double avg;
}Student;

int main() {
	// 2. ������ �л��� ������ ���� => �迭�� ����
	Student member[3];

	// 3. �ݺ������� ������ �л� ������ ������ �Է� �ޱ�, �հ� ��յ� ���� ���ϱ�
	for(int i = 0; i < 3; i++) {
		printf("Student[%d] kor? : ", i);
		scanf_s("%d", &member[i].kor);
		printf("Student[%d] eng? : ", i);
		scanf_s("%d", &member[i].eng);
		printf("Student[%d] math? : ", i);
		scanf_s("%d", &member[i].math);

		printf("===[%d] input complete===\n\n", i);

		member[i].sum = member[i].kor + member[i].eng + member[i].math;

		member[i].avg = member[i].sum / 3.0;
	}

	printf("================================\n");

	// 4. �ݺ������� ������ �л� ������ ��� ��� �� ��յ� ���

	for (size_t i = 0; i < 3; i++)
	{
		printf("Student[%d] >>> kor : %d, eng : %d, math : %d, sum : %d, avg : %.3f\n",
			i, member[i].kor, member[i].eng, member[i].math, member[i].sum, member[i].avg);
	}

	// ��) 
	// 1. ����ü�� �ڷ����̴�
	// 2. �ܼ��� �����͸� �� �� ���� ������ �ִ�
	// 3. �� ���� �����͸� �ϳ��� ���� �Ҷ� . (dot) �� �̿��Ѵ�
}