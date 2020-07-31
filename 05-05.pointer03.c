#include<stdio.h>

void aValue(int n) {
	if (n < 0)		n = -n;
}

void aValueP(int* n) {
	if (*n < 0)		*n = -*n;
}

int aValueR(int n) {
	if (n < 0)		n = -n;
	return n;
}

int main() {
	// 절대값을 구하는 함수
	int num = -10;

	aValue(num);			// 값을 보내면 num값 못 바꿈
	printf("num = %d\n", num);

	aValueP(&num);			// 주소를 보내면 num값 바꿀 수 있음
	printf("num = %d\n", num);

	// 반환형 함수
	num = aValueR(num);
	printf("num = %d\n", num);
}