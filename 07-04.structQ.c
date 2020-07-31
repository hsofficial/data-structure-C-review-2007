#include<stdio.h>
// 1. 학생점수를 저장할 수 있는 구조체 자료형 생성
	// 멤버 변수 : kor, eng, math, sum, avg
	// 구조체 이름 : Student

typedef struct Student {
	int kor, eng, math, sum;
	double avg;
}Student;

int main() {
	// 2. 세명의 학생의 점수를 저장 => 배열로 생성
	Student member[3];

	// 3. 반복문으로 세명의 학생 국영수 점수를 입력 받기, 합계 평균도 같이 구하기
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

	// 4. 반복문으로 세명의 학생 점수를 모두 출력 후 평균도 출력

	for (size_t i = 0; i < 3; i++)
	{
		printf("Student[%d] >>> kor : %d, eng : %d, math : %d, sum : %d, avg : %.3f\n",
			i, member[i].kor, member[i].eng, member[i].math, member[i].sum, member[i].avg);
	}

	// 팁) 
	// 1. 구조체도 자료형이다
	// 2. 단순히 데이터를 좀 더 많이 가지고 있다
	// 3. 그 많은 데이터를 하나씩 접근 할때 . (dot) 를 이용한다
}