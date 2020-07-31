#include<stdio.h>
#include<stdlib.h>

int* getInt();

int main() {
	// 1. 정수형 동적할당 공간 두 개 생성 후 각각 10, 20을 대입하고 출력
	int* num1, * num2;

	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int));

	printf("정수 입력1 :");
	scanf_s("%d", &* ptr1);
	printf("정수 입력2 :");
	scanf_s("%d", &* ptr2);

	printf("ptr1 = %d\n", *ptr1);
	printf("ptr2 = %d\n\n", *ptr2);

	free(ptr1);
	free(ptr2);
	// 2. 실수형 동적할당 공간 생성 후 3.14 대입하고 출력
	double* db = (double*)malloc(sizeof(double));

	*db = 3.14;

	printf("db = %f\n\n", *db);
	free(db);
	// 3. 정수형 동적할당 공간에 입력 받아서 출력
	int* num3;
	int* ptr3 = (int*)malloc(sizeof(int));

	printf("정수 입력3 :");
	scanf_s("%d", &*ptr3);

	printf("ptr3 = %d\n\n", *ptr3);
	free(ptr3);

	// 4. 동적할당 구문 되게 길다 => 그래 아예 동적할당을 해주는 함수를 만들자
	int* num4;


	num4 = getInt();

	printf("num4 = %d\n", *num4);

	*num4 = 40;

	printf("num4 = %d\n", *num4);
	free(num4);
}

int* getInt() {
	int* tmp = (int*)malloc(sizeof(int));	// 동적할당
	*tmp = 0;								// 값 0으로 초기화
	return tmp;								// 함수 호출 위치로 반환
}