#include<stdio.h>
#include<stdlib.h>	// 여기 랜덤 관련 함수가 있다
#include<time.h>

int main() {

	srand(time(NULL));	// 랜덤값을 다양하게 나오게 하는 함수

	for (int i = 0; i < 10; i++) {
		// rand()는 무작위 정수를 반환, 범위 0 ~ 32,767
		printf("%d ", rand() % 100);
		// 100 으로 나눈 나머지 => 0 ~ 99
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 100 + 1);
		// 1. 1 ~ 100
		// 1 ~ 100 - 1 => 0 ~ 99 => n % 100 + 1
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 96 + 5);
		// 2. 5 ~ 100
		// 5 ~ 100 - 5 => 0 ~ 95 => n % 96 + 5
	}
}