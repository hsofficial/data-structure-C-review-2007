#include<stdio.h>

int main() {
	int kor, eng, math, sum;
	double avg;

	printf("국 영 수, 세 점수 입력 : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	sum = kor + eng + math;
	//	avg = sum / 3.0;		// 3은 정수, 3.0은 실수
	avg = (double)sum / 3;		// 3은 정수, 3.0은 실수

	// 형변환
	// 1. 자동 형변환(묵시적 형변환) : 자료형이 큰쪽으로 자동으로 변환, ex) 정수 + 실수 = 실수
	// 2. 강제 형변환(명시적 형변환) : 자료형을 직접작성하여 하는 변환, ex) (double)정수형변수;

	printf("평균 : %lf\n", avg);

	if (avg >= 0 && avg <= 100) {
		if (avg >= 90)		printf("A");
		else if (avg >= 80) printf("B");
		else if (avg >= 70) printf("C");
		else if (avg >= 60) printf("D");
		else				printf("F");

		printf("등급\n");
	}
	else printf("유효하지 않은 값입니다\n");


}