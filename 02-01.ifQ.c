#include<stdio.h>

int main() {
	int kor, eng, math, sum;
	double avg;

	printf("�� �� ��, �� ���� �Է� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	sum = kor + eng + math;
	//	avg = sum / 3.0;		// 3�� ����, 3.0�� �Ǽ�
	avg = (double)sum / 3;		// 3�� ����, 3.0�� �Ǽ�

	// ����ȯ
	// 1. �ڵ� ����ȯ(������ ����ȯ) : �ڷ����� ū������ �ڵ����� ��ȯ, ex) ���� + �Ǽ� = �Ǽ�
	// 2. ���� ����ȯ(����� ����ȯ) : �ڷ����� �����ۼ��Ͽ� �ϴ� ��ȯ, ex) (double)����������;

	printf("��� : %lf\n", avg);

	if (avg >= 0 && avg <= 100) {
		if (avg >= 90)		printf("A");
		else if (avg >= 80) printf("B");
		else if (avg >= 70) printf("C");
		else if (avg >= 60) printf("D");
		else				printf("F");

		printf("���\n");
	}
	else printf("��ȿ���� ���� ���Դϴ�\n");


}