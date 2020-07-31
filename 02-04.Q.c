#include <stdio.h>

void main() {
	int kor, eng, mat, sw_num;
	double avg;

	printf("kor : ");
	scanf_s("%d", &kor);
	printf("eng : ");
	scanf_s("%d", &eng);
	printf("mat : ");
	scanf_s("%d", &mat);

	avg = (kor + eng + mat) / 3.0;
	printf("avg is %.2f\n", avg);

	if (avg >= 90)
		sw_num = 1;
	else if (avg >= 80)
		sw_num = 2;
	else if (avg >= 70)
		sw_num = 3;
	else if (avg >= 60)
		sw_num = 4;
	else
		sw_num = 5;

	switch (sw_num)
	{
	case 1:
		printf("A class\n");
		break;
	case 2:
		printf("B class\n");
		break;
	case 3:
		printf("C class\n");
		break;
	case 4:
		printf("D class\n");
		break;
	case 5:
		printf("F class\n");
		break;

	default:
		break;
	}
}